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

#ifndef CRYPTO_IPW_H
#define CRYPTO_IPW_H

/**
*   @file
*
*   @internal
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
#include "Crypto_Cfg.h"

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CRYPTO_VENDOR_ID_IPW_H                       43
#define CRYPTO_AR_RELEASE_MAJOR_VERSION_IPW_H        4
#define CRYPTO_AR_RELEASE_MINOR_VERSION_IPW_H        4
#define CRYPTO_AR_RELEASE_REVISION_VERSION_IPW_H     0
#define CRYPTO_SW_MAJOR_VERSION_IPW_H                1
#define CRYPTO_SW_MINOR_VERSION_IPW_H                0
#define CRYPTO_SW_PATCH_VERSION_IPW_H                0

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
/* Check if Crypto Ipw header file and Crypto_Cfg header file are of the same vendor */
#if (CRYPTO_VENDOR_ID_IPW_H != CRYPTO_VENDOR_ID_CFG)
    #error "Crypto_Ipw.h and Crypto_Cfg.h have different vendor ids"
#endif

/* Check if Crypto Ipw header file and Crypto_Cfg header file are of the same Autosar version */
#if ((CRYPTO_AR_RELEASE_MAJOR_VERSION_IPW_H    != CRYPTO_AR_RELEASE_MAJOR_VERSION_CFG) || \
     (CRYPTO_AR_RELEASE_MINOR_VERSION_IPW_H    != CRYPTO_AR_RELEASE_MINOR_VERSION_CFG) || \
     (CRYPTO_AR_RELEASE_REVISION_VERSION_IPW_H != CRYPTO_AR_RELEASE_REVISION_VERSION_CFG) \
    )
    #error "AutoSar Version Numbers of Crypto_Ipw.h and Crypto_Cfg.h are different"
#endif

/* Check if Crypto Ipw header file and Crypto_Cfg header file are of the same Software version */
#if ((CRYPTO_SW_MAJOR_VERSION_IPW_H != CRYPTO_SW_MAJOR_VERSION_CFG) || \
     (CRYPTO_SW_MINOR_VERSION_IPW_H != CRYPTO_SW_MINOR_VERSION_CFG) || \
     (CRYPTO_SW_PATCH_VERSION_IPW_H != CRYPTO_SW_PATCH_VERSION_CFG)    \
    )
    #error "Software Version Numbers of Crypto_Ipw.h and Crypto_Cfg.h are different"
#endif


/* Check if Crypto Ipw header file and Crypto Cfg header file are of the same vendor */
#if (CRYPTO_VENDOR_ID_IPW_H != CRYPTO_VENDOR_ID_CFG)
    #error "Crypto_Ipw.h and Crypto_Cfg.h have different vendor ids"
#endif

/* Check if Crypto Ipw header file and Crypto Cfg header file are of the same Autosar version */
#if ((CRYPTO_AR_RELEASE_MAJOR_VERSION_IPW_H    != CRYPTO_AR_RELEASE_MAJOR_VERSION_CFG) || \
     (CRYPTO_AR_RELEASE_MINOR_VERSION_IPW_H    != CRYPTO_AR_RELEASE_MINOR_VERSION_CFG) || \
     (CRYPTO_AR_RELEASE_REVISION_VERSION_IPW_H != CRYPTO_AR_RELEASE_REVISION_VERSION_CFG) \
    )
    #error "AutoSar Version Numbers of Crypto_Ipw.h and Crypto_Cfg.h are different"
#endif

/* Check if Crypto Ipw header file and Crypto Cfg header file are of the same Software version */
#if ((CRYPTO_SW_MAJOR_VERSION_IPW_H != CRYPTO_SW_MAJOR_VERSION_CFG) || \
     (CRYPTO_SW_MINOR_VERSION_IPW_H != CRYPTO_SW_MINOR_VERSION_CFG) || \
     (CRYPTO_SW_PATCH_VERSION_IPW_H != CRYPTO_SW_PATCH_VERSION_CFG)    \
    )
    #error "Software Version Numbers of Crypto_Ipw.h and Crypto_Cfg.h are different"
#endif

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                              ENUMS
==================================================================================================*/

/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                       FUNCTION PROTOTYPES
==================================================================================================*/
Std_ReturnType Crypto_Ipw_Init
(
    const uint32 u32PartitionId
);

/* -------------------------------------------------------------------------- */

Std_ReturnType Crypto_Ipw_ProcessJob
(
    const uint32          u32PartitionId,
    const uint32          u32ObjectIdx,
    Crypto_JobType* const pJob
);

/* -------------------------------------------------------------------------- */

Std_ReturnType Crypto_Ipw_CancelJob
(
    const uint32                    u32PartitionId,
    const uint32                    u32ObjectIdx,
    const Crypto_JobInfoType* const pJobInfo
);

/* -------------------------------------------------------------------------- */

#if (STD_ON == CRYPTO_KEYS_EXIST)
Std_ReturnType Crypto_Ipw_ImportKey
(
    const uint32       u32PartitionId,
    const uint8* const pKey,
    const uint32       u32KeyLength,
    const uint32       u32CryptoKeyIdx,
    const uint32       u32CryptoKeyElementIdx
);

/* -------------------------------------------------------------------------- */

Std_ReturnType Crypto_Ipw_ExportKey
(
    const uint32  u32PartitionId,
    const uint32  u32KeyMaterialKeyElemIdx,
    const uint32  u32KeyExportKeyElemIdx,
    uint8*  const pResult,
    uint32* const pResultLength
);

/* -------------------------------------------------------------------------- */

Std_ReturnType Crypto_Ipw_RandomSeed
(
    const uint32       u32PartitionId,
    const uint32       u32CryptoKeyIdx,
    const uint8* const seedPtr,
    const uint32       seedLength
);

/* -------------------------------------------------------------------------- */

Std_ReturnType Crypto_Ipw_KeyGenerate
(
    const uint32 u32PartitionId,
    const uint32 u32CryptoKeyIdx
);

/* -------------------------------------------------------------------------- */

Std_ReturnType Crypto_Ipw_KeyDerive
(
    const uint32 u32PartitionId,
    const uint32 u32CryptoKeyIdx,
    const uint32 u32TargetKeyIdx
);

/* -------------------------------------------------------------------------- */

Std_ReturnType Crypto_Ipw_CalcSecret
(
    const uint32       u32PartitionId,
    const uint32       u32CryptoKeyIdx,
    const uint8* const pPartnerPublicValue,
    const uint32       u32PartnerPublicValueLength
);

/* -------------------------------------------------------------------------- */

Std_ReturnType Crypto_Ipw_CertificateParse
(
    const uint32 u32PartitionId,
    const uint32 u32CryptoKeyIdx
);

/* -------------------------------------------------------------------------- */

Std_ReturnType Crypto_Ipw_CertificateVerify
(
    const uint32                         u32PartitionId,
    const uint32                         u32CryptoKeyIdx,
    const uint32                         u32VerifyCryptoKeyIdx,
    const Crypto_VerifyResultType* const verifyPtr
);

/* -------------------------------------------------------------------------- */

#if (STD_ON == CRYPTO_ENABLE_NVRAM_READ_WRITE_SUPPORT)
Std_ReturnType Crypto_Ipw_RestoreKeyValidInfoFromNvram
(
    const uint32 u32PartitionId
);
#endif /* (STD_ON == CRYPTO_ENABLE_NVRAM_READ_WRITE_SUPPORT) */

#endif /* (STD_ON == CRYPTO_KEYS_EXIST) */

/* -------------------------------------------------------------------------- */

void Crypto_Ipw_MainFunction
(
    const uint32 u32PartitionId
);

/* -------------------------------------------------------------------------- */

void Crypto_Ipw_SetSynchronousRequestsTimeout
(
    const uint32 u32PartitionId,
    const uint32 u32Timeout
);

/* -------------------------------------------------------------------------- */

Std_ReturnType Crypto_Ipw_SheSetBootStatus
(
    const uint32  u32PartitionId,
    const boolean bStatus
);

/* -------------------------------------------------------------------------- */

Std_ReturnType Crypto_Ipw_SheGetStatus
(
    const uint32 u32PartitionId,
    uint8*       pStatus
);

/* -------------------------------------------------------------------------- */

Std_ReturnType Crypto_Ipw_SheGetId
(
    const uint32 u32PartitionId,
    const uint8* pChallenge,
          uint8* pId,
          uint8* pSreg,
          uint8* pMac
);

/* -------------------------------------------------------------------------- */

Std_ReturnType Crypto_Ipw_SheDebugChal
(
    const uint32 u32PartitionId,
          uint8* pChallenge
);

/* -------------------------------------------------------------------------- */

Std_ReturnType Crypto_Ipw_SheDebugAuth
(
    const uint32 u32PartitionId,
    const uint8* pAuthorization
);

/* -------------------------------------------------------------------------- */

Std_ReturnType Crypto_Ipw_SheMPCompression
(
    const uint32  u32PartitionId,
    const uint8*  pInput,
    const uint32  u32InputLen,
          uint8*  pResult,
    const uint32* pResultLen
);

/* -------------------------------------------------------------------------- */

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* CRYPTO_IPW_H */
