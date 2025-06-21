/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : Crypto
*   Dependencies         : none
*
*   Autosar Version      : 4.4.0
*   Autosar Revision     : ASR_REL_4_4_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 1.0.0
*   Build Version        : S32K1_RTD_1_0_0_D2108_ASR_REL_4_4_REV_0000_20210810
*
*   (c) Copyright 2020-2021 NXP Semiconductors
*   All Rights Reserved.
*
*   NXP Confidential. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/

#ifndef CRYPTO_CFG_H
#define CRYPTO_CFG_H

/**
*   @file
*
*   @addtogroup CRYPTO
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                          INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Crypto_Types.h"
#include "Csec_Ip.h"

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CRYPTO_VENDOR_ID_CFG                       43
#define CRYPTO_MODULE_ID_CFG                       114
#define CRYPTO_AR_RELEASE_MAJOR_VERSION_CFG        4
#define CRYPTO_AR_RELEASE_MINOR_VERSION_CFG        4
#define CRYPTO_AR_RELEASE_REVISION_VERSION_CFG     0
#define CRYPTO_SW_MAJOR_VERSION_CFG                1
#define CRYPTO_SW_MINOR_VERSION_CFG                0
#define CRYPTO_SW_PATCH_VERSION_CFG                0

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
/* Check if Crypto Cfg header file and Crypto Types header file are of the same vendor */
#if (CRYPTO_VENDOR_ID_CFG != CRYPTO_VENDOR_ID_TYPES)
    #error "Crypto_Cfg.h and Crypto_Types.h have different vendor ids"
#endif

/* Check if Crypto Cfg header file and Crypto Types header file are of the same Autosar version */
#if ((CRYPTO_AR_RELEASE_MAJOR_VERSION_CFG    != CRYPTO_AR_RELEASE_MAJOR_VERSION_TYPES) || \
     (CRYPTO_AR_RELEASE_MINOR_VERSION_CFG    != CRYPTO_AR_RELEASE_MINOR_VERSION_TYPES) || \
     (CRYPTO_AR_RELEASE_REVISION_VERSION_CFG != CRYPTO_AR_RELEASE_REVISION_VERSION_TYPES) \
    )
    #error "AutoSar Version Numbers of Crypto_Cfg.h and Crypto_Types.h are different"
#endif

/* Check if Crypto Cfg header file and Crypto Types header file are of the same Software version */
#if ((CRYPTO_SW_MAJOR_VERSION_CFG != CRYPTO_SW_MAJOR_VERSION_TYPES) || \
     (CRYPTO_SW_MINOR_VERSION_CFG != CRYPTO_SW_MINOR_VERSION_TYPES) || \
     (CRYPTO_SW_PATCH_VERSION_CFG != CRYPTO_SW_PATCH_VERSION_TYPES)    \
    )
    #error "Software Version Numbers of Crypto_Cfg.h and Crypto_Types.h are different"
#endif


/* Check if Crypto Cfg header file and Csec Ip header file are of the same vendor */
#if (CRYPTO_VENDOR_ID_CFG != CSEC_IP_VENDOR_ID_H)
    #error "Crypto_Cfg.h and Csec_Ip.h have different vendor ids"
#endif

/* Check if Crypto Cfg header file and Csec Ip header file are of the same Software version */
#if ((CRYPTO_SW_MAJOR_VERSION_CFG != CSEC_IP_SW_MAJOR_VERSION_H) || \
     (CRYPTO_SW_MINOR_VERSION_CFG != CSEC_IP_SW_MINOR_VERSION_H) || \
     (CRYPTO_SW_PATCH_VERSION_CFG != CSEC_IP_SW_PATCH_VERSION_H)    \
    )
    #error "Software Version Numbers of Crypto_Cfg.h and Csec_Ip.h are different"
#endif

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/
/* Pre-processor switch to enable/disable development error detection for Crypto API */
#define CRYPTO_DEV_ERROR_DETECT                         (STD_OFF)

/* Pre-processor switch to enable/disable the API to read out the modules version information */
#define CRYPTO_VERSION_INFO_API                         (STD_ON)

/* Crypto instance ID value */
#define CRYPTO_INSTANCE_ID                              ((uint8)0)

/* Set asynchronous job process method */
#define CRYPTO_USE_INTERRUPTS_FOR_ASYNC_JOBS            (STD_OFF)

/* Pre-processor switch to enable/disable the support in Crypto_ProcessJob() for handling key management services */
#define CRYPTO_JOB_KEY_MANAGEMENT_SUPPORT               (STD_OFF)

/* Pre-processor switch to disable multicore support in Crypto driver */
#define CRYPTO_ENABLE_MULTICORE_SUPPORT                 (STD_OFF)

/* Max number of partitions configured from the application */
#define CRYPTO_MAX_NUMBER_PARTITIONS_U8                 ((uint8)1U)

/* Number of configured Crypto driver objects */
#define CRYPTO_NUMBER_OF_DRIVER_OBJECTS_U32             ((uint32)2U)

/* Compile time switch stating that there is at least one configured key */
#define CRYPTO_KEYS_EXIST                               (STD_ON)

/* Number of Crypto keys */
#define CRYPTO_NUMBER_OF_KEYS_U32                       ((uint32)3U)

/* Number of Crypto key elements */
#define CRYPTO_NUMBER_OF_KEY_ELEMENTS_U32               ((uint32)3U)

/* Identifiers for the blobs of information that need to be stored in NVRAM used by the Crypto driver */
#define CRYPTO_NVRAM_BLOB_0_ID                          (0U)
#define CRYPTO_NVRAM_BLOB_1_ID                          (1U)

/* Sizes for the blobs of information used by the Crypto driver */
#define CRYPTO_SIZEOF_NVRAM_BLOB_0                      (1U)
#define CRYPTO_SIZEOF_NVRAM_BLOB_1                      (8U)

/* Compile time switch stating that support for Nvram read/write operations is enabled or disabled */
#define CRYPTO_ENABLE_NVRAM_READ_WRITE_SUPPORT          (STD_OFF)

/* Pre-processor switch to enable/disable support in Crypto driver for job redirection feature */
#define CRYPTO_ENABLE_REDIRECTION_SUPPORT               (STD_OFF)

/* Support for TLS1.2 key derivation in Crypto_KeyDerive() API */
#define CRYPTO_ENABLE_TLS12_DERIVE_SUPPORT              (STD_OFF)

/* Support for User mode.
*       STD_ON:  the Crypto driver can be executed from both supervisor and user mode
*       STD_OFF: the Crypto driver can be executed only from supervisor mode */
#define CRYPTO_ENABLE_USER_MODE_SUPPORT                 (STD_OFF)

#ifndef MCAL_ENABLE_USER_MODE_SUPPORT
    #ifdef CRYPTO_ENABLE_USER_MODE_SUPPORT
        #if (STD_ON == CRYPTO_ENABLE_USER_MODE_SUPPORT)
            #error MCAL_ENABLE_USER_MODE_SUPPORT is not enabled. For running Crypto driver in user mode the MCAL_ENABLE_USER_MODE_SUPPORT needs to be defined.
        #endif /* (STD_ON == CRYPTO_ENABLE_USER_MODE_SUPPORT) */
    #endif /* ifndef CRYPTO_ENABLE_USER_MODE_SUPPORT */
#endif /* ifndef MCAL_ENABLE_USER_MODE_SUPPORT*/

/* Support for SHE */
#define CRYPTO_SPT_SHE                                  (STD_ON)
    #define CRYPTO_SPT_SHE_KEY_IMPORT                   (STD_ON)

/* Support for key derivation */
#define CRYPTO_SPT_KEY_DERIVE                           (STD_OFF)
#define CRYPTO_SPT_PBKDF2                               (STD_OFF)

/* Symbolic names for the CryptoDriverObjectId attribute of all the Crypto Driver Objects */
#define CryptoConf_CryptoDriverObject_CryptoDriverObject_AES      ((uint32)0U)
#define CryptoConf_CryptoDriverObject_CryptoDriverObject_MAC      ((uint32)1U)

/* Symbolic names for the CryptoKeyId attribute of all the Crypto keys */
#define CryptoConf_CryptoKey_CryptoKey_AES_ECB                    ((uint32)0U)
#define CryptoConf_CryptoKey_CryptoKey_AES_CBC                    ((uint32)1U)
#define CryptoConf_CryptoKey_CryptoKey_AES_CMAC                   ((uint32)2U)

/* Symbolic names for the CryptoKeyElementId attribute of all the Crypto key elements */
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_AES_KEY_ECB  ((uint32)1U)
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_AES_KEY_CBC  ((uint32)5U)
#define CryptoConf_CryptoKeyElement_CryptoKeyElement_CMAC         ((uint32)1U)

/*==================================================================================================
*                                              ENUMS
==================================================================================================*/

/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/* Structure storing information about a Crypto Key Element */
typedef struct
{
    /* Members storing Autosar required information */
    const   uint32                           u32CryptoKeyElementId;
    const   boolean                          bCryptoKeyElementAllowPartialAccess;
    const   Crypto_KeyFormatType             eCryptoKeyFormat;
    const   boolean                          bCryptoKeyElementPersist;
    const   Crypto_KeyElementReadAccessType  eCryptoKeyElementReadAccess;
    const   uint32                           u32CryptoKeyElementMaxSize;
    const   Crypto_KeyElementWriteAccessType eCryptoKeyElementWriteAccess;
    uint32* const                            pu32CryptoElementActualSize;
    uint8*  const                            pCryptoElementArray;
    const   Csec_Ip_KeyIdType                eKeyId;
} Crypto_KeyElementType;


/* Structure storing information about a Crypto Driver Object */
typedef struct
{
    Crypto_QueueElementType* const    pQueuedJobs;
    const uint32                      u32CryptoQueueSize;
    const Crypto_PrimitiveType* const pCryptoKeyPrimitives;
    const uint32                      u32NoCryptoPrimitives;
} Crypto_ObjectType;

/*==================================================================================================
*                                  GLOBAL CONSTANTS DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
#define CRYPTO_START_SEC_VAR_CLEARED_8
#include "Crypto_MemMap.h"

/* Array storing blob 0 containing information that should be persistent between resets */
extern uint8 Crypto_au8NvramBlob0[CRYPTO_SIZEOF_NVRAM_BLOB_0];

#define CRYPTO_STOP_SEC_VAR_CLEARED_8
#include "Crypto_MemMap.h"


#define CRYPTO_START_SEC_VAR_CLEARED_8_NO_CACHEABLE
#include "Crypto_MemMap.h"

/* Array storing blob 1 containing information that should be persistent between resets */
extern uint8 Crypto_au8NvramBlob1[CRYPTO_SIZEOF_NVRAM_BLOB_1];

#define CRYPTO_STOP_SEC_VAR_CLEARED_8_NO_CACHEABLE
#include "Crypto_MemMap.h"

/*==================================================================================================
*                                       FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */

#endif /* CRYPTO_CFG_H */

