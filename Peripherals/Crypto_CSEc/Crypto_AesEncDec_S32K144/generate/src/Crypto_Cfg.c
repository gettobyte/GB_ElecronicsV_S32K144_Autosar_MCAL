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
#include "Crypto_Cfg.h"
#include "Crypto_Private.h"
#include "Crypto.h"

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CRYPTO_VENDOR_ID_CFG_C                      43
#define CRYPTO_AR_RELEASE_MAJOR_VERSION_CFG_C       4
#define CRYPTO_AR_RELEASE_MINOR_VERSION_CFG_C       4
#define CRYPTO_AR_RELEASE_REVISION_VERSION_CFG_C    0
#define CRYPTO_SW_MAJOR_VERSION_CFG_C               1
#define CRYPTO_SW_MINOR_VERSION_CFG_C               0
#define CRYPTO_SW_PATCH_VERSION_CFG_C               0

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
/* Check if Crypto configuration source file and Crypto configuration header file are of the same vendor */
#if (CRYPTO_VENDOR_ID_CFG_C != CRYPTO_VENDOR_ID_CFG)
    #error "Crypto_Cfg.c and Crypto_Cfg.h have different vendor ids"
#endif

/* Check if Crypto configuration source file and Crypto configuration header file are of the same Autosar version */
#if ((CRYPTO_AR_RELEASE_MAJOR_VERSION_CFG_C    != CRYPTO_AR_RELEASE_MAJOR_VERSION_CFG) || \
     (CRYPTO_AR_RELEASE_MINOR_VERSION_CFG_C    != CRYPTO_AR_RELEASE_MINOR_VERSION_CFG) || \
     (CRYPTO_AR_RELEASE_REVISION_VERSION_CFG_C != CRYPTO_AR_RELEASE_REVISION_VERSION_CFG) \
    )
    #error "AutoSar Version Numbers of Crypto_Cfg.c and Crypto_Cfg.h are different"
#endif

/* Check if Crypto configuration source file and Crypto configuration header file are of the same Software version */
#if ((CRYPTO_SW_MAJOR_VERSION_CFG_C != CRYPTO_SW_MAJOR_VERSION_CFG) || \
     (CRYPTO_SW_MINOR_VERSION_CFG_C != CRYPTO_SW_MINOR_VERSION_CFG) || \
     (CRYPTO_SW_PATCH_VERSION_CFG_C != CRYPTO_SW_PATCH_VERSION_CFG)    \
    )
    #error "Software Version Numbers of Crypto_Cfg.c and Crypto_Cfg.h are different"
#endif

/* Check if Crypto configuration source file and Crypto private header file are of the same vendor */
#if (CRYPTO_VENDOR_ID_CFG_C != CRYPTO_VENDOR_ID_PRIVATE)
    #error "Crypto_Cfg.c and Crypto_Private.h have different vendor ids"
#endif

/* Check if Crypto configuration source file and Crypto private header file are of the same Autosar version */
#if ((CRYPTO_AR_RELEASE_MAJOR_VERSION_CFG_C    != CRYPTO_AR_RELEASE_MAJOR_VERSION_PRIVATE) || \
     (CRYPTO_AR_RELEASE_MINOR_VERSION_CFG_C    != CRYPTO_AR_RELEASE_MINOR_VERSION_PRIVATE) || \
     (CRYPTO_AR_RELEASE_REVISION_VERSION_CFG_C != CRYPTO_AR_RELEASE_REVISION_VERSION_PRIVATE) \
    )
    #error "AutoSar Version Numbers of Crypto_Cfg.c and Crypto_Private.h are different"
#endif

/* Check if Crypto configuration source file and Crypto private header file are of the same Software version */
#if ((CRYPTO_SW_MAJOR_VERSION_CFG_C != CRYPTO_SW_MAJOR_VERSION_PRIVATE) || \
     (CRYPTO_SW_MINOR_VERSION_CFG_C != CRYPTO_SW_MINOR_VERSION_PRIVATE) || \
     (CRYPTO_SW_PATCH_VERSION_CFG_C != CRYPTO_SW_PATCH_VERSION_PRIVATE)    \
    )
    #error "Software Version Numbers of Crypto_Cfg.c and Crypto_Private.h are different"
#endif

/* Check if Crypto configuration source file and Crypto header file are of the same vendor */
#if (CRYPTO_VENDOR_ID_CFG_C != CRYPTO_VENDOR_ID)
    #error "Crypto_Cfg.c and Crypto.h have different vendor ids"
#endif

/* Check if Crypto configuration source file and Crypto header file are of the same Autosar version */
#if ((CRYPTO_AR_RELEASE_MAJOR_VERSION_CFG_C    != CRYPTO_AR_RELEASE_MAJOR_VERSION) || \
     (CRYPTO_AR_RELEASE_MINOR_VERSION_CFG_C    != CRYPTO_AR_RELEASE_MINOR_VERSION) || \
     (CRYPTO_AR_RELEASE_REVISION_VERSION_CFG_C != CRYPTO_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Crypto_Cfg.c and Crypto.h are different"
#endif

/* Check if Crypto configuration source file and Crypto header file are of the same Software version */
#if ((CRYPTO_SW_MAJOR_VERSION_CFG_C != CRYPTO_SW_MAJOR_VERSION) || \
     (CRYPTO_SW_MINOR_VERSION_CFG_C != CRYPTO_SW_MINOR_VERSION) || \
     (CRYPTO_SW_PATCH_VERSION_CFG_C != CRYPTO_SW_PATCH_VERSION)    \
    )
    #error "Software Version Numbers of Crypto_Cfg.c and Crypto.h are different"
#endif

/*==================================================================================================
*                           LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                          LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL CONSTANTS
==================================================================================================*/


#define CRYPTO_START_SEC_CONST_32
#include "Crypto_MemMap.h"

/* Array of indexes for each Crypto Key Element referred by Crypto Key Crypto_Key_AES128_Encrypt_Decrypt */
static const uint32 Crypto_au32KeyElementList_Crypto_Key_AES128_Encrypt_Decrypt[1U] =
{
    0U
};

/* Array of indexes for each Crypto Key Element referred by Crypto Key CryptoKey_1 */
static const uint32 Crypto_au32KeyElementList_CryptoKey_1[2U] =
{
    0U,
    1U
};

/* Array of indexes for each Crypto Key Element referred by Crypto Key CryptoKey_2 */
static const uint32 Crypto_au32KeyElementList_CryptoKey_2[1U] =
{
    2U
};

#define CRYPTO_STOP_SEC_CONST_32
#include "Crypto_MemMap.h"

#define CRYPTO_START_SEC_CONST_UNSPECIFIED
#include "Crypto_MemMap.h"

/* Array storing the Crypto primitives in the Crypto Driver Object CDO_Symmetric */
static const Crypto_PrimitiveType Crypto_aPrimitives_CDO_Symmetric[6U] =
{
    {
        ENCRYPT,
        (uint8)CRYPTO_ALGOFAM_AES,
        (uint8)CRYPTO_ALGOMODE_ECB,
        (uint8)CRYPTO_ALGOFAM_NOT_SET
    },
    {
        DECRYPT,
        (uint8)CRYPTO_ALGOFAM_AES,
        (uint8)CRYPTO_ALGOMODE_ECB,
        (uint8)CRYPTO_ALGOFAM_NOT_SET
    },
    {
        ENCRYPT,
        (uint8)CRYPTO_ALGOFAM_AES,
        (uint8)CRYPTO_ALGOMODE_CBC,
        (uint8)CRYPTO_ALGOFAM_NOT_SET
    },
    {
        DECRYPT,
        (uint8)CRYPTO_ALGOFAM_AES,
        (uint8)CRYPTO_ALGOMODE_CBC,
        (uint8)CRYPTO_ALGOFAM_NOT_SET
    },
    {
        MAC_GENERATE,
        (uint8)CRYPTO_ALGOFAM_CUSTOM,
        (uint8)CRYPTO_ALGOMODE_CMAC,
        (uint8)CRYPTO_ALGOFAM_NOT_SET
    },
    {
        MAC_VERIFY,
        (uint8)CRYPTO_ALGOFAM_CUSTOM,
        (uint8)CRYPTO_ALGOMODE_CMAC,
        (uint8)CRYPTO_ALGOFAM_NOT_SET
    }
};

#define CRYPTO_STOP_SEC_CONST_UNSPECIFIED
#include "Crypto_MemMap.h"

/*==================================================================================================
*                                         LOCAL VARIABLES
==================================================================================================*/
#define CRYPTO_START_SEC_VAR_CLEARED_8_NO_CACHEABLE
#include "Crypto_MemMap.h"

/* Array storing the key element information that is volatile (no need to be persistent across resets) */
VAR_ALIGN(static uint8 Crypto_au8VolatileKeyElemValues[28U], 4U)

#define CRYPTO_STOP_SEC_VAR_CLEARED_8_NO_CACHEABLE
#include "Crypto_MemMap.h"


/*==================================================================================================
*                                        GLOBAL CONSTANTS
==================================================================================================*/
#define CRYPTO_START_SEC_CONST_UNSPECIFIED
#include "Crypto_MemMap.h"

/* Array of structures storing the information about the Crypto Driver Objects */
const Crypto_ObjectType Crypto_aDriverObjectList[CRYPTO_NUMBER_OF_DRIVER_OBJECTS_U32] =
{
    /* Structure storing the information about Crypto Driver Object CDO_Symmetric */
    {
        /* Reference to the jobs queue */
        NULL_PTR,
        /* Jobs queue size */
        0U,
        /* Reference to the Crypto primitives list */
        Crypto_aPrimitives_CDO_Symmetric,
        /* Number of crypto primitives */
        6U
    }
};

/* Array of structures storing the information about the Crypto Keys */
const Crypto_KeyType Crypto_aKeyList[CRYPTO_NUMBER_OF_KEYS_U32] =
{
    {
        /* Number of key elements in the key Crypto_Key_AES128_Encrypt_Decrypt */
        1U,
        /* Reference to the list of key elements in the key Crypto_Key_AES128_Encrypt_Decrypt */
        Crypto_au32KeyElementList_Crypto_Key_AES128_Encrypt_Decrypt
    },
    {
        /* Number of key elements in the key CryptoKey_1 */
        2U,
        /* Reference to the list of key elements in the key CryptoKey_1 */
        Crypto_au32KeyElementList_CryptoKey_1
    },
    {
        /* Number of key elements in the key CryptoKey_2 */
        1U,
        /* Reference to the list of key elements in the key CryptoKey_2 */
        Crypto_au32KeyElementList_CryptoKey_2
    }
};

/* Array of structures storing the information about the Crypto Key Elements */
const Crypto_KeyElementType Crypto_aKeyElementList[CRYPTO_NUMBER_OF_KEY_ELEMENTS_U32] =
{
    /* Structure containing information for Key Element Crypto_KE_AES128_Encrypt_Decrypt_CIPHER_KEY */
    {
        /* KeyElementId */
        1U,
        /* Allow partial access */
        (boolean)FALSE,
        /* Key element format */
        CRYPTO_KE_FORMAT_BIN_OCTET,
        /* Key element persistent */
        (boolean)FALSE,
        /* Read access type */
        CRYPTO_RA_ALLOWED,
        /* Key element max size */
        16U,
        /* Write access type */
        CRYPTO_WA_ALLOWED,
        /* Pointer to location storing the Key Element actual size */
        (uint32*)&Crypto_au8VolatileKeyElemValues[0U],
        /* Pointer to location storing the Key Element value */
        NULL_PTR,
        /* Identifier of the CSEc key */
        CSEC_IP_RAM_KEY
    },
    /* Structure containing information for Key Element CryptoKeyElement_Cbc */
    {
        /* KeyElementId */
        5U,
        /* Allow partial access */
        (boolean)FALSE,
        /* Key element format */
        CRYPTO_KE_FORMAT_BIN_OCTET,
        /* Key element persistent */
        (boolean)FALSE,
        /* Read access type */
        CRYPTO_RA_ALLOWED,
        /* Key element max size */
        16U,
        /* Write access type */
        CRYPTO_WA_ALLOWED,
        /* Pointer to location storing the Key Element actual size */
        (uint32*)&Crypto_au8VolatileKeyElemValues[4U],
        /* Pointer to location storing the Key Element value */
        &Crypto_au8VolatileKeyElemValues[8U],
        /* Identifier of the CSEc key */
        CSEC_IP_KEY_INVALID
    },
    /* Structure containing information for Key Element CryptoKeyElement_MAC */
    {
        /* KeyElementId */
        1U,
        /* Allow partial access */
        (boolean)FALSE,
        /* Key element format */
        CRYPTO_KE_FORMAT_BIN_OCTET,
        /* Key element persistent */
        (boolean)FALSE,
        /* Read access type */
        CRYPTO_RA_ALLOWED,
        /* Key element max size */
        16U,
        /* Write access type */
        CRYPTO_WA_ALLOWED,
        /* Pointer to location storing the Key Element actual size */
        (uint32*)&Crypto_au8VolatileKeyElemValues[24U],
        /* Pointer to location storing the Key Element value */
        NULL_PTR,
        /* Identifier of the CSEc key */
        CSEC_IP_RAM_KEY
    }
};

#define CRYPTO_STOP_SEC_CONST_UNSPECIFIED
#include "Crypto_MemMap.h"

/*==================================================================================================
*                                        GLOBAL VARIABLES
==================================================================================================*/
#define CRYPTO_START_SEC_VAR_CLEARED_8
#include "Crypto_MemMap.h"

/* Array of 8 bit blocks storing a bit map of valid flags for each Crypto key */
uint8 Crypto_au8NvramBlob0[CRYPTO_SIZEOF_NVRAM_BLOB_0];

#define CRYPTO_STOP_SEC_VAR_CLEARED_8
#include "Crypto_MemMap.h"


#define CRYPTO_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Crypto_MemMap.h"

Crypto_ObjectQueueType Crypto_aObjectQueueList[CRYPTO_NUMBER_OF_DRIVER_OBJECTS_U32];

#define CRYPTO_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Crypto_MemMap.h"

/*==================================================================================================
*                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL FUNCTIONS
==================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */

