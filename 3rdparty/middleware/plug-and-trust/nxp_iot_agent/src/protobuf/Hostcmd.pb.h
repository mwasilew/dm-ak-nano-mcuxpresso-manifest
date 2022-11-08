/* Copyright 2021 NXP
 *
 * SPDX-License-Identifier: Apache-2.0
 */
/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.4 at Thu Mar 11 17:03:44 2021. */

#ifndef PB_NXP_IOT_HOSTCMD_PB_H_INCLUDED
#define PB_NXP_IOT_HOSTCMD_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _nxp_iot_HostControlCmdRequest_eControlCmd {
    nxp_iot_HostControlCmdRequest_eControlCmd_RESET_SE = 10
} nxp_iot_HostControlCmdRequest_eControlCmd;
#define _nxp_iot_HostControlCmdRequest_eControlCmd_MIN nxp_iot_HostControlCmdRequest_eControlCmd_RESET_SE
#define _nxp_iot_HostControlCmdRequest_eControlCmd_MAX nxp_iot_HostControlCmdRequest_eControlCmd_RESET_SE
#define _nxp_iot_HostControlCmdRequest_eControlCmd_ARRAYSIZE ((nxp_iot_HostControlCmdRequest_eControlCmd)(nxp_iot_HostControlCmdRequest_eControlCmd_RESET_SE+1))

/* Struct definitions */
typedef struct _nxp_iot_HostControlCmdRequest {
    bool has_hostControlCmd;
    nxp_iot_HostControlCmdRequest_eControlCmd hostControlCmd;
/* @@protoc_insertion_point(struct:nxp_iot_HostControlCmdRequest) */
} nxp_iot_HostControlCmdRequest;

/* Default values for struct fields */

/* Initializer values for message structs */
#define nxp_iot_HostControlCmdRequest_init_default {false, _nxp_iot_HostControlCmdRequest_eControlCmd_MIN}
#define nxp_iot_HostControlCmdRequest_init_zero  {false, _nxp_iot_HostControlCmdRequest_eControlCmd_MIN}

/* Field tags (for use in manual encoding/decoding) */
#define nxp_iot_HostControlCmdRequest_hostControlCmd_tag 1

/* Struct field encoding specification for nanopb */
extern const pb_field_t nxp_iot_HostControlCmdRequest_fields[2];

/* Maximum encoded size of messages (where known) */
#define nxp_iot_HostControlCmdRequest_size       2

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define HOSTCMD_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
