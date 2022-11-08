/* Copyright 2021 NXP
 *
 * SPDX-License-Identifier: Apache-2.0
 */
/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.4 at Thu Mar 11 17:03:43 2021. */

#ifndef PB_NXP_IOT_APDU_PB_H_INCLUDED
#define PB_NXP_IOT_APDU_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _nxp_iot_ApduRequest {
    pb_callback_t message;
    pb_callback_t expectation;
/* @@protoc_insertion_point(struct:nxp_iot_ApduRequest) */
} nxp_iot_ApduRequest;

typedef struct _nxp_iot_ApduResponse {
    pb_callback_t message;
/* @@protoc_insertion_point(struct:nxp_iot_ApduResponse) */
} nxp_iot_ApduResponse;

/* Default values for struct fields */

/* Initializer values for message structs */
#define nxp_iot_ApduRequest_init_default         {{{NULL}, NULL}, {{NULL}, NULL}}
#define nxp_iot_ApduResponse_init_default        {{{NULL}, NULL}}
#define nxp_iot_ApduRequest_init_zero            {{{NULL}, NULL}, {{NULL}, NULL}}
#define nxp_iot_ApduResponse_init_zero           {{{NULL}, NULL}}

/* Field tags (for use in manual encoding/decoding) */
#define nxp_iot_ApduRequest_message_tag          100
#define nxp_iot_ApduRequest_expectation_tag      101
#define nxp_iot_ApduResponse_message_tag         100

/* Struct field encoding specification for nanopb */
extern const pb_field_t nxp_iot_ApduRequest_fields[3];
extern const pb_field_t nxp_iot_ApduResponse_fields[2];

/* Maximum encoded size of messages (where known) */
/* nxp_iot_ApduRequest_size depends on runtime parameters */
/* nxp_iot_ApduResponse_size depends on runtime parameters */

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define APDU_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
