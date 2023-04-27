#!/usr/bin/env python3

import argparse
import os
import requests
import sys
import logging


# create logger
logger = logging.getLogger()
logger.setLevel(logging.DEBUG)

# create console handler and set level to debug
ch = logging.StreamHandler()
ch.setLevel(logging.DEBUG)

# create formatter
formatter = logging.Formatter('%(asctime)s - %(name)s - %(levelname)s - %(message)s')

# add formatter to ch
ch.setFormatter(formatter)

# add ch to logger
logger.addHandler(ch)


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--qa-server",
            required=True)
    parser.add_argument("--qa-token",
            default=os.environ.get("QA_TOKEN"),
            required=False)
    parser.add_argument("--qa-team",
            required=True)
    parser.add_argument("--qa-project",
            required=True)
    parser.add_argument("--qa-version",
            required=True)
    parser.add_argument("--qa-environment",
            required=True)
    parser.add_argument("--qa-backend",
            required=True)
    parser.add_argument("--job-filename",
            required=True)
    parser.add_argument("--commit-id",
            default=os.environ.get("COMMIT_ID"),
            required=False)
    parser.add_argument("--commit-repository",
            default=os.environ.get("COMMIT_REPOSITORY"),
            required=False)
    parser.add_argument("--commit-repository-user",
            default=os.environ.get("COMMIT_REPOSITORY_USER"),
            required=False)
    parser.add_argument("--qa-patch-source",
            default=os.environ.get("QA_PATCH_SOURCE"),
            required=False)


    args = parser.parse_args()
    if not args.qa_token:
        logger.error("QA Token missing")
        sys.exit(1)

    QA_SERVER = args.qa_server
    QA_TOKEN = args.qa_token

    TEAM = args.qa_team
    PROJECT = args.qa_project
    VERSION = args.qa_version
    ENVIRONMENT = args.qa_environment

    URL = "%s/submitjob/%s/%s/%s/%s" % (QA_SERVER, TEAM, PROJECT, VERSION, ENVIRONMENT)

    patch_id = None
    if args.commit_id and args.commit_repository and args.commit_repository_user and args.qa_patch_source:
        patch_id = f"{args.commit_repository_user}/{args.commit_repository}/{args.commit_id}"

    headers = {
        "Auth-Token": QA_TOKEN
    }
    data = {}
    if patch_id is not None:
        data.update({
            "patch_id": patch_id,
            "patch_source": args.qa_patch_source
        })

    url = "{QA_SERVER}/createbuild/{QA_SERVER_TEAM}/{QA_SERVER_PROJECT}/{QA_SERVER_VERSION}".format(
        QA_SERVER=QA_SERVER,
        QA_SERVER_TEAM=TEAM,
        QA_SERVER_PROJECT=PROJECT,
        QA_SERVER_VERSION=VERSION
    )

    build_response = requests.post(url, data=data, headers=headers)
    if build_response.status_code == 201:
        logger.info(f"QA Reports build created: {QA_SERVER}/{TEAM}/{PROJECT}/build/{VERSION}")

    definition = None
    with open(args.job_filename, "r") as jobfile:
        definition = jobfile.read()
    data = {
        "backend": args.qa_backend,
        "definition": definition
    }

    response = requests.post(URL, data=data, headers=headers)
    if response.status_code == 201:
        qa_job_id = response.text
        logger.info(f"Test job submitted via QA Reports: {QA_SERVER}/api/testjobs/{qa_job_id}/")

if __name__ == "__main__":
    main()
