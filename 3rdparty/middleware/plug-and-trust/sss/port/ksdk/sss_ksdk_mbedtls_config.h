/*
 *  Copyright The Mbed TLS Contributors
 *  SPDX-License-Identifier: Apache-2.0
 *
 *  Licensed under the Apache License, Version 2.0 (the "License"); you may
 *  not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 *  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */
/* Copyright 2021 NXP
 * SPDX-License-Identifier: Apache-2.0
 */

/* !!!!!!!!!!!!!!!!!!!!!!!!!!!!! */
/* GENERATED FILE. DO NOT EDIT!! */
/* !!!!!!!!!!!!!!!!!!!!!!!!!!!!! */

/* clang-format off */

#ifndef __MBEDTLS_USER_CONFIG_H__
#define __MBEDTLS_USER_CONFIG_H__

#if defined(SSS_USE_FTR_FILE)
#include "fsl_sss_ftr.h"
#else
#include "fsl_sss_ftr_default.h"
#endif

/* Generated by sss_ksdk_mbedtls_config.py */

#ifndef MBEDTLS_ECP_DP_SECP192R1_ENABLED
    #define MBEDTLS_ECP_DP_SECP192R1_ENABLED
#endif // MBEDTLS_ECP_DP_SECP192R1_ENABLED
#ifndef MBEDTLS_ECP_DP_SECP224R1_ENABLED
    #define MBEDTLS_ECP_DP_SECP224R1_ENABLED
#endif // MBEDTLS_ECP_DP_SECP224R1_ENABLED
#ifndef MBEDTLS_ECP_DP_SECP384R1_ENABLED
    #define MBEDTLS_ECP_DP_SECP384R1_ENABLED
#endif // MBEDTLS_ECP_DP_SECP384R1_ENABLED
#ifndef MBEDTLS_ECP_DP_SECP192K1_ENABLED
    #define MBEDTLS_ECP_DP_SECP192K1_ENABLED
#endif // MBEDTLS_ECP_DP_SECP192K1_ENABLED
#ifndef MBEDTLS_ECP_DP_SECP224K1_ENABLED
    #define MBEDTLS_ECP_DP_SECP224K1_ENABLED
#endif // MBEDTLS_ECP_DP_SECP224K1_ENABLED
#ifndef MBEDTLS_ECP_DP_SECP256K1_ENABLED
    #define MBEDTLS_ECP_DP_SECP256K1_ENABLED
#endif // MBEDTLS_ECP_DP_SECP256K1_ENABLED
#ifndef MBEDTLS_ECP_DP_BP256R1_ENABLED
    #define MBEDTLS_ECP_DP_BP256R1_ENABLED
#endif // MBEDTLS_ECP_DP_BP256R1_ENABLED
#ifndef MBEDTLS_ECP_DP_BP384R1_ENABLED
    #define MBEDTLS_ECP_DP_BP384R1_ENABLED
#endif // MBEDTLS_ECP_DP_BP384R1_ENABLED
#ifndef MBEDTLS_ECP_DP_BP512R1_ENABLED
    #define MBEDTLS_ECP_DP_BP512R1_ENABLED
#endif // MBEDTLS_ECP_DP_BP512R1_ENABLED
/* Montgomery curves (supporting ECP) */
#ifndef MBEDTLS_ECP_DP_CURVE25519_ENABLED
    #define MBEDTLS_ECP_DP_CURVE25519_ENABLED
#endif // MBEDTLS_ECP_DP_CURVE25519_ENABLED
/* Montgomery curves (supporting ECP) */
#ifndef MBEDTLS_ECP_DP_CURVE448_ENABLED
    #define MBEDTLS_ECP_DP_CURVE448_ENABLED
#endif // MBEDTLS_ECP_DP_CURVE448_ENABLED
#ifndef MBEDTLS_CMAC_C
    #define MBEDTLS_CMAC_C
#endif // MBEDTLS_CMAC_C
#ifndef MBEDTLS_FREESCALE_LTC_PKHA
#ifndef MBEDTLS_ECP_DP_SECP521R1_ENABLED
    #define MBEDTLS_ECP_DP_SECP521R1_ENABLED
#endif // MBEDTLS_ECP_DP_SECP521R1_ENABLED
#endif // ndef MBEDTLS_FREESCALE_LTC_PKHA

#if SSS_HAVE_MBEDTLS_ALT
#ifndef MBEDTLS_ECP_ALT
    #define MBEDTLS_ECP_ALT
#endif // MBEDTLS_ECP_ALT
#endif //  SSS_HAVE_MBEDTLS_ALT

#if SSS_HAVE_MBEDTLS_ALT
#ifndef MBEDTLS_ECDH_ALT
    #define MBEDTLS_ECDH_ALT
#endif // MBEDTLS_ECDH_ALT
#endif //  SSS_HAVE_MBEDTLS_ALT

#if SSS_HAVE_MBEDTLS_ALT
#ifndef MBEDTLS_ECDH_GEN_PUBLIC_ALT
    #define MBEDTLS_ECDH_GEN_PUBLIC_ALT
#endif // MBEDTLS_ECDH_GEN_PUBLIC_ALT
#endif //  SSS_HAVE_MBEDTLS_ALT

#if SSS_HAVE_MBEDTLS_ALT
#ifndef MBEDTLS_ECDH_COMPUTE_SHARED_ALT
    #define MBEDTLS_ECDH_COMPUTE_SHARED_ALT
#endif // MBEDTLS_ECDH_COMPUTE_SHARED_ALT
#endif //  SSS_HAVE_MBEDTLS_ALT

#if defined(IMX_RT)
/* We need this for mbedTLS sw crypto counterpart */
#ifndef MBEDTLS_CTR_DRBG_C
    #define MBEDTLS_CTR_DRBG_C
#endif // MBEDTLS_CTR_DRBG_C
#endif //  defined(IMX_RT)

#if defined(LPC_55x)
/* We need this for mbedTLS sw crypto counterpart */
#ifndef MBEDTLS_CTR_DRBG_C
    #define MBEDTLS_CTR_DRBG_C
#endif // MBEDTLS_CTR_DRBG_C
#endif //  defined(LPC_55x)

#if SSS_HAVE_MBEDTLS_ALT
#if SSS_HAVE_RSA
#ifndef MBEDTLS_RSA_ALT
    #define MBEDTLS_RSA_ALT
#endif // MBEDTLS_RSA_ALT
#endif //  SSS_HAVE_RSA

#endif //  SSS_HAVE_MBEDTLS_ALT


#if defined(MBEDTLS_HKDF_C)
    #undef MBEDTLS_HKDF_C
#endif // MBEDTLS_HKDF_C

#if defined(MBEDTLS_SELF_TEST)
    #undef MBEDTLS_SELF_TEST
#endif // MBEDTLS_SELF_TEST

#if defined(MBEDTLS_PSA_CRYPTO_C)
    #undef MBEDTLS_PSA_CRYPTO_C
#endif // MBEDTLS_PSA_CRYPTO_C

#if defined(MBEDTLS_PSA_CRYPTO_STORAGE_C)
    #undef MBEDTLS_PSA_CRYPTO_STORAGE_C
#endif // MBEDTLS_PSA_CRYPTO_STORAGE_C

#if defined(MBEDTLS_PSA_ITS_FILE_C)
    #undef MBEDTLS_PSA_ITS_FILE_C
#endif // MBEDTLS_PSA_ITS_FILE_C
#if defined(CPU_QN9090)

#if defined(MBEDTLS_AES_ALT)
    #undef MBEDTLS_AES_ALT
#endif // MBEDTLS_AES_ALT
#endif //  defined(CPU_QN9090)

#if defined(CPU_QN9090)

#if defined(MBEDTLS_AES_SETKEY_ENC_ALT)
    #undef MBEDTLS_AES_SETKEY_ENC_ALT
#endif // MBEDTLS_AES_SETKEY_ENC_ALT
#endif //  defined(CPU_QN9090)

#if defined(CPU_QN9090)

#if defined(MBEDTLS_AES_SETKEY_DEC_ALT)
    #undef MBEDTLS_AES_SETKEY_DEC_ALT
#endif // MBEDTLS_AES_SETKEY_DEC_ALT
#endif //  defined(CPU_QN9090)

#if defined(CPU_QN9090)

#if defined(MBEDTLS_AES_ENCRYPT_ALT)
    #undef MBEDTLS_AES_ENCRYPT_ALT
#endif // MBEDTLS_AES_ENCRYPT_ALT
#endif //  defined(CPU_QN9090)

#if defined(CPU_QN9090)

#if defined(MBEDTLS_AES_DECRYPT_ALT)
    #undef MBEDTLS_AES_DECRYPT_ALT
#endif // MBEDTLS_AES_DECRYPT_ALT
#endif //  defined(CPU_QN9090)

#if defined(CPU_QN9090)

#if defined(MBEDTLS_AES_CRYPT_CBC_ALT)
    #undef MBEDTLS_AES_CRYPT_CBC_ALT
#endif // MBEDTLS_AES_CRYPT_CBC_ALT
#endif //  defined(CPU_QN9090)

#if defined(CPU_QN9090)

#if defined(MBEDTLS_AES_CRYPT_CFB_ALT)
    #undef MBEDTLS_AES_CRYPT_CFB_ALT
#endif // MBEDTLS_AES_CRYPT_CFB_ALT
#endif //  defined(CPU_QN9090)

#if defined(CPU_QN9090)

#if defined(MBEDTLS_AES_CRYPT_CTR_ALT)
    #undef MBEDTLS_AES_CRYPT_CTR_ALT
#endif // MBEDTLS_AES_CRYPT_CTR_ALT
#endif //  defined(CPU_QN9090)

#if defined(CPU_QN9090)

#if defined(MBEDTLS_FREESCALE_LPC_AES)
    #undef MBEDTLS_FREESCALE_LPC_AES
#endif // MBEDTLS_FREESCALE_LPC_AES
#endif //  defined(CPU_QN9090)

#if defined(LPC_55x)

#if defined(MBEDTLS_MCUX_CASPER_ECC)
    #undef MBEDTLS_MCUX_CASPER_ECC
#endif // MBEDTLS_MCUX_CASPER_ECC
#endif //  defined(LPC_55x)

#if defined(LPC_55x)

#if defined(MBEDTLS_ECP_MUL_COMB_ALT)
    #undef MBEDTLS_ECP_MUL_COMB_ALT
#endif // MBEDTLS_ECP_MUL_COMB_ALT
#endif //  defined(LPC_55x)

#if defined(LPC_55x)

#if defined(MBEDTLS_ECP_MULADD_ALT)
    #undef MBEDTLS_ECP_MULADD_ALT
#endif // MBEDTLS_ECP_MULADD_ALT
#endif //  defined(LPC_55x)

#if SSS_HAVE_MBEDTLS_ALT
#if defined(IMX_RT)

#if defined(MBEDTLS_AES_SETKEY_ENC_ALT)
    #undef MBEDTLS_AES_SETKEY_ENC_ALT
#endif // MBEDTLS_AES_SETKEY_ENC_ALT
#endif //  defined(IMX_RT)

#endif //  SSS_HAVE_MBEDTLS_ALT

#if SSS_HAVE_MBEDTLS_ALT
#if defined(IMX_RT)

#if defined(MBEDTLS_AES_SETKEY_DEC_ALT)
    #undef MBEDTLS_AES_SETKEY_DEC_ALT
#endif // MBEDTLS_AES_SETKEY_DEC_ALT
#endif //  defined(IMX_RT)

#endif //  SSS_HAVE_MBEDTLS_ALT

#if SSS_HAVE_MBEDTLS_ALT
#if defined(IMX_RT)

#if defined(MBEDTLS_AES_ENCRYPT_ALT)
    #undef MBEDTLS_AES_ENCRYPT_ALT
#endif // MBEDTLS_AES_ENCRYPT_ALT
#endif //  defined(IMX_RT)

#endif //  SSS_HAVE_MBEDTLS_ALT

#if SSS_HAVE_MBEDTLS_ALT
#if defined(IMX_RT)

#if defined(MBEDTLS_AES_DECRYPT_ALT)
    #undef MBEDTLS_AES_DECRYPT_ALT
#endif // MBEDTLS_AES_DECRYPT_ALT
#endif //  defined(IMX_RT)

#endif //  SSS_HAVE_MBEDTLS_ALT

#if SSS_HAVE_MBEDTLS_ALT
#if defined(IMX_RT)

#if defined(MBEDTLS_AES_ALT_NO_192)
    #undef MBEDTLS_AES_ALT_NO_192
#endif // MBEDTLS_AES_ALT_NO_192
#endif //  defined(IMX_RT)

#endif //  SSS_HAVE_MBEDTLS_ALT

#if SSS_HAVE_MBEDTLS_ALT
#if defined(IMX_RT)

#if defined(MBEDTLS_AES_CRYPT_CBC_ALT)
    #undef MBEDTLS_AES_CRYPT_CBC_ALT
#endif // MBEDTLS_AES_CRYPT_CBC_ALT
#endif //  defined(IMX_RT)

#endif //  SSS_HAVE_MBEDTLS_ALT

#if SSS_HAVE_MBEDTLS_ALT
#if defined(IMX_RT)

#if defined(MBEDTLS_FREESCALE_DCP_AES)
    #undef MBEDTLS_FREESCALE_DCP_AES
#endif // MBEDTLS_FREESCALE_DCP_AES
#endif //  defined(IMX_RT)

#endif //  SSS_HAVE_MBEDTLS_ALT

#if SSS_HAVE_MBEDTLS_ALT
#if defined(IMX_RT)
/* If We use ALT from the EVKB, anything that is related to
 * AES256 would get skipped and because of this TLS Handshake
 * would not pass
 *
 * Disabling this altogether. May be there's a way to use AES256
 * on EVKB with mbedTLS but need to Check.
 */

#if defined(MBEDTLS_AES_ALT)
    #undef MBEDTLS_AES_ALT
#endif // MBEDTLS_AES_ALT
#endif //  defined(IMX_RT)

#endif //  SSS_HAVE_MBEDTLS_ALT

#if SSS_HAVE_MBEDTLS_ALT
#if defined(IMX_RT)

#if defined(MBEDTLS_AES_ALT_NO_256)
    #undef MBEDTLS_AES_ALT_NO_256
#endif // MBEDTLS_AES_ALT_NO_256
#endif //  defined(IMX_RT)

#endif //  SSS_HAVE_MBEDTLS_ALT

#if SSS_HAVE_MBEDTLS_ALT
#if defined(CPU_MIMXRT1176DVMAA_cm7)

#if defined(MBEDTLS_FREESCALE_LTC_AES)
    #undef MBEDTLS_FREESCALE_LTC_AES
#endif // MBEDTLS_FREESCALE_LTC_AES
#endif //  defined(CPU_MIMXRT1176DVMAA_cm7)

#endif //  SSS_HAVE_MBEDTLS_ALT

#if SSS_HAVE_MBEDTLS_ALT
#if defined(CPU_MIMXRT1176DVMAA_cm7)

#if defined(MBEDTLS_FREESCALE_MMCAU_AES)
    #undef MBEDTLS_FREESCALE_MMCAU_AES
#endif // MBEDTLS_FREESCALE_MMCAU_AES
#endif //  defined(CPU_MIMXRT1176DVMAA_cm7)

#endif //  SSS_HAVE_MBEDTLS_ALT

#if SSS_HAVE_MBEDTLS_ALT
#if defined(CPU_MIMXRT1176DVMAA_cm7)

#if defined(MBEDTLS_FREESCALE_LPC_AES)
    #undef MBEDTLS_FREESCALE_LPC_AES
#endif // MBEDTLS_FREESCALE_LPC_AES
#endif //  defined(CPU_MIMXRT1176DVMAA_cm7)

#endif //  SSS_HAVE_MBEDTLS_ALT

#if SSS_HAVE_MBEDTLS_ALT
#if defined(CPU_MIMXRT1176DVMAA_cm7)

#if defined(MBEDTLS_FREESCALE_CAU3_AES)
    #undef MBEDTLS_FREESCALE_CAU3_AES
#endif // MBEDTLS_FREESCALE_CAU3_AES
#endif //  defined(CPU_MIMXRT1176DVMAA_cm7)

#endif //  SSS_HAVE_MBEDTLS_ALT

#if SSS_HAVE_MBEDTLS_ALT
#if defined(CPU_MIMXRT1176DVMAA_cm7)

#if defined(MBEDTLS_FREESCALE_CAAM_AES)
    #undef MBEDTLS_FREESCALE_CAAM_AES
#endif // MBEDTLS_FREESCALE_CAAM_AES
#endif //  defined(CPU_MIMXRT1176DVMAA_cm7)

#endif //  SSS_HAVE_MBEDTLS_ALT

#if SSS_HAVE_MBEDTLS_ALT
#if defined(CPU_MIMXRT1176DVMAA_cm7)

#if defined(MBEDTLS_FREESCALE_DCP_AES)
    #undef MBEDTLS_FREESCALE_DCP_AES
#endif // MBEDTLS_FREESCALE_DCP_AES
#endif //  defined(CPU_MIMXRT1176DVMAA_cm7)

#endif //  SSS_HAVE_MBEDTLS_ALT

#if SSS_HAVE_MBEDTLS_ALT
#if defined(CPU_MIMXRT1176DVMAA_cm7)

#if defined(MBEDTLS_CCM_CRYPT_ALT)
    #undef MBEDTLS_CCM_CRYPT_ALT
#endif // MBEDTLS_CCM_CRYPT_ALT
#endif //  defined(CPU_MIMXRT1176DVMAA_cm7)

#endif //  SSS_HAVE_MBEDTLS_ALT

#if SSS_HAVE_MBEDTLS_ALT
#if defined(CPU_MIMXRT1176DVMAA_cm7)

#if defined(MBEDTLS_GCM_CRYPT_ALT)
    #undef MBEDTLS_GCM_CRYPT_ALT
#endif // MBEDTLS_GCM_CRYPT_ALT
#endif //  defined(CPU_MIMXRT1176DVMAA_cm7)

#endif //  SSS_HAVE_MBEDTLS_ALT

#if SSS_HAVE_MBEDTLS_ALT
#if (SSS_HAVE_MBEDTLS_ALT_A71CH || SSS_HAVE_APPLET_A71CH)

#if defined(MBEDTLS_ECP_DP_SECP192R1_ENABLED)
    #undef MBEDTLS_ECP_DP_SECP192R1_ENABLED
#endif // MBEDTLS_ECP_DP_SECP192R1_ENABLED
#endif //  (SSS_HAVE_MBEDTLS_ALT_A71CH || SSS_HAVE_APPLET_A71CH)

#endif //  SSS_HAVE_MBEDTLS_ALT

#if SSS_HAVE_MBEDTLS_ALT
#if (SSS_HAVE_MBEDTLS_ALT_A71CH || SSS_HAVE_APPLET_A71CH)

#if defined(MBEDTLS_ECP_DP_SECP224R1_ENABLED)
    #undef MBEDTLS_ECP_DP_SECP224R1_ENABLED
#endif // MBEDTLS_ECP_DP_SECP224R1_ENABLED
#endif //  (SSS_HAVE_MBEDTLS_ALT_A71CH || SSS_HAVE_APPLET_A71CH)

#endif //  SSS_HAVE_MBEDTLS_ALT

#if SSS_HAVE_MBEDTLS_ALT
#if (SSS_HAVE_MBEDTLS_ALT_A71CH || SSS_HAVE_APPLET_A71CH)

#if defined(MBEDTLS_ECP_DP_SECP384R1_ENABLED)
    #undef MBEDTLS_ECP_DP_SECP384R1_ENABLED
#endif // MBEDTLS_ECP_DP_SECP384R1_ENABLED
#endif //  (SSS_HAVE_MBEDTLS_ALT_A71CH || SSS_HAVE_APPLET_A71CH)

#endif //  SSS_HAVE_MBEDTLS_ALT

#if SSS_HAVE_MBEDTLS_ALT
#if (SSS_HAVE_MBEDTLS_ALT_A71CH || SSS_HAVE_APPLET_A71CH)

#if defined(MBEDTLS_ECP_DP_SECP192K1_ENABLED)
    #undef MBEDTLS_ECP_DP_SECP192K1_ENABLED
#endif // MBEDTLS_ECP_DP_SECP192K1_ENABLED
#endif //  (SSS_HAVE_MBEDTLS_ALT_A71CH || SSS_HAVE_APPLET_A71CH)

#endif //  SSS_HAVE_MBEDTLS_ALT

#if SSS_HAVE_MBEDTLS_ALT
#if (SSS_HAVE_MBEDTLS_ALT_A71CH || SSS_HAVE_APPLET_A71CH)

#if defined(MBEDTLS_ECP_DP_SECP224K1_ENABLED)
    #undef MBEDTLS_ECP_DP_SECP224K1_ENABLED
#endif // MBEDTLS_ECP_DP_SECP224K1_ENABLED
#endif //  (SSS_HAVE_MBEDTLS_ALT_A71CH || SSS_HAVE_APPLET_A71CH)

#endif //  SSS_HAVE_MBEDTLS_ALT

#if SSS_HAVE_MBEDTLS_ALT
#if (SSS_HAVE_MBEDTLS_ALT_A71CH || SSS_HAVE_APPLET_A71CH)

#if defined(MBEDTLS_ECP_DP_SECP256K1_ENABLED)
    #undef MBEDTLS_ECP_DP_SECP256K1_ENABLED
#endif // MBEDTLS_ECP_DP_SECP256K1_ENABLED
#endif //  (SSS_HAVE_MBEDTLS_ALT_A71CH || SSS_HAVE_APPLET_A71CH)

#endif //  SSS_HAVE_MBEDTLS_ALT

#if SSS_HAVE_MBEDTLS_ALT
#if (SSS_HAVE_MBEDTLS_ALT_A71CH || SSS_HAVE_APPLET_A71CH)

#if defined(MBEDTLS_ECP_DP_BP256R1_ENABLED)
    #undef MBEDTLS_ECP_DP_BP256R1_ENABLED
#endif // MBEDTLS_ECP_DP_BP256R1_ENABLED
#endif //  (SSS_HAVE_MBEDTLS_ALT_A71CH || SSS_HAVE_APPLET_A71CH)

#endif //  SSS_HAVE_MBEDTLS_ALT

#if SSS_HAVE_MBEDTLS_ALT
#if (SSS_HAVE_MBEDTLS_ALT_A71CH || SSS_HAVE_APPLET_A71CH)

#if defined(MBEDTLS_ECP_DP_BP384R1_ENABLED)
    #undef MBEDTLS_ECP_DP_BP384R1_ENABLED
#endif // MBEDTLS_ECP_DP_BP384R1_ENABLED
#endif //  (SSS_HAVE_MBEDTLS_ALT_A71CH || SSS_HAVE_APPLET_A71CH)

#endif //  SSS_HAVE_MBEDTLS_ALT

#if SSS_HAVE_MBEDTLS_ALT
#if (SSS_HAVE_MBEDTLS_ALT_A71CH || SSS_HAVE_APPLET_A71CH)

#if defined(MBEDTLS_ECP_DP_BP512R1_ENABLED)
    #undef MBEDTLS_ECP_DP_BP512R1_ENABLED
#endif // MBEDTLS_ECP_DP_BP512R1_ENABLED
#endif //  (SSS_HAVE_MBEDTLS_ALT_A71CH || SSS_HAVE_APPLET_A71CH)

#endif //  SSS_HAVE_MBEDTLS_ALT

#if SSS_HAVE_MBEDTLS_ALT
#if (SSS_HAVE_MBEDTLS_ALT_A71CH || SSS_HAVE_APPLET_A71CH)

#if defined(MBEDTLS_ECP_DP_CURVE25519_ENABLED)
    #undef MBEDTLS_ECP_DP_CURVE25519_ENABLED
#endif // MBEDTLS_ECP_DP_CURVE25519_ENABLED
#endif //  (SSS_HAVE_MBEDTLS_ALT_A71CH || SSS_HAVE_APPLET_A71CH)

#endif //  SSS_HAVE_MBEDTLS_ALT

#if SSS_HAVE_MBEDTLS_ALT
#if (SSS_HAVE_MBEDTLS_ALT_A71CH || SSS_HAVE_APPLET_A71CH)

#if defined(MBEDTLS_ECP_DP_CURVE448_ENABLED)
    #undef MBEDTLS_ECP_DP_CURVE448_ENABLED
#endif // MBEDTLS_ECP_DP_CURVE448_ENABLED
#endif //  (SSS_HAVE_MBEDTLS_ALT_A71CH || SSS_HAVE_APPLET_A71CH)

#endif //  SSS_HAVE_MBEDTLS_ALT

#if SSS_HAVE_MBEDTLS_ALT
#if (SSS_HAVE_MBEDTLS_ALT_A71CH || SSS_HAVE_APPLET_A71CH)

#if defined(MBEDTLS_ECP_DP_SECP521R1_ENABLED)
    #undef MBEDTLS_ECP_DP_SECP521R1_ENABLED
#endif // MBEDTLS_ECP_DP_SECP521R1_ENABLED
#endif //  (SSS_HAVE_MBEDTLS_ALT_A71CH || SSS_HAVE_APPLET_A71CH)

#endif //  SSS_HAVE_MBEDTLS_ALT

#if SSS_HAVE_MBEDTLS_ALT
#if (SSS_HAVE_MBEDTLS_ALT_A71CH || SSS_HAVE_APPLET_A71CH)

#if defined(MBEDTLS_SHA512_C)
    #undef MBEDTLS_SHA512_C
#endif // MBEDTLS_SHA512_C
#endif //  (SSS_HAVE_MBEDTLS_ALT_A71CH || SSS_HAVE_APPLET_A71CH)

#endif //  SSS_HAVE_MBEDTLS_ALT

#include <fsl_sss_types.h>

#ifndef MBEDTLS_PLATFORM_MEMORY
    #define MBEDTLS_PLATFORM_MEMORY
#endif // MBEDTLS_PLATFORM_MEMORY

#if defined(MBEDTLS_PLATFORM_STD_CALLOC)
    #undef MBEDTLS_PLATFORM_STD_CALLOC
#endif // MBEDTLS_PLATFORM_STD_CALLOC

#if defined(MBEDTLS_PLATFORM_STD_FREE)
    #undef MBEDTLS_PLATFORM_STD_FREE
#endif // MBEDTLS_PLATFORM_STD_FREE

#if defined(MBEDTLS_PLATFORM_CALLOC_MACRO)
    #undef MBEDTLS_PLATFORM_CALLOC_MACRO
#endif // MBEDTLS_PLATFORM_CALLOC_MACRO

#if defined(MBEDTLS_PLATFORM_FREE_MACRO)
    #undef MBEDTLS_PLATFORM_FREE_MACRO
#endif // MBEDTLS_PLATFORM_FREE_MACRO


#define MBEDTLS_PLATFORM_CALLOC_MACRO SSS_CALLOC
#define MBEDTLS_PLATFORM_FREE_MACRO SSS_FREE

#endif /* __MBEDTLS_USER_CONFIG_H__ */
