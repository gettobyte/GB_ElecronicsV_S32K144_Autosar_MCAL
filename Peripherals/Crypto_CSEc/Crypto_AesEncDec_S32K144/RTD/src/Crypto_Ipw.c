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
#include "Crypto_Ipw.h"
#include "Crypto.h"
#include "Crypto_Private.h"
#include "Crypto_Util.h"

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CRYPTO_VENDOR_ID_IPW_C                       43
#define CRYPTO_AR_RELEASE_MAJOR_VERSION_IPW_C        4
#define CRYPTO_AR_RELEASE_MINOR_VERSION_IPW_C        4
#define CRYPTO_AR_RELEASE_REVISION_VERSION_IPW_C     0
#define CRYPTO_SW_MAJOR_VERSION_IPW_C                1
#define CRYPTO_SW_MINOR_VERSION_IPW_C                0
#define CRYPTO_SW_PATCH_VERSION_IPW_C                0

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
/* Check if Crypto Ipw source file and Crypto Ipw header file are of the same vendor */
#if (CRYPTO_VENDOR_ID_IPW_C != CRYPTO_VENDOR_ID_IPW_H)
    #error "Crypto_Ipw.c and Crypto_Ipw.h have different vendor ids"
#endif

/* Check if Crypto Ipw source file and Crypto Ipw header file are of the same Autosar version */
#if ((CRYPTO_AR_RELEASE_MAJOR_VERSION_IPW_C    != CRYPTO_AR_RELEASE_MAJOR_VERSION_IPW_H) || \
     (CRYPTO_AR_RELEASE_MINOR_VERSION_IPW_C    != CRYPTO_AR_RELEASE_MINOR_VERSION_IPW_H) || \
     (CRYPTO_AR_RELEASE_REVISION_VERSION_IPW_C != CRYPTO_AR_RELEASE_REVISION_VERSION_IPW_H) \
    )
    #error "AutoSar Version Numbers of Crypto_Ipw.c and Crypto_Ipw.h are different"
#endif

/* Check if Crypto Ipw source file and Crypto Ipw header file are of the same Software version */
#if ((CRYPTO_SW_MAJOR_VERSION_IPW_C != CRYPTO_SW_MAJOR_VERSION_IPW_H) || \
     (CRYPTO_SW_MINOR_VERSION_IPW_C != CRYPTO_SW_MINOR_VERSION_IPW_H) || \
     (CRYPTO_SW_PATCH_VERSION_IPW_C != CRYPTO_SW_PATCH_VERSION_IPW_H)    \
    )
    #error "Software Version Numbers of Crypto_Ipw.c and Crypto_Ipw.h are different"
#endif


/* Check if Crypto Ipw source file and Crypto.h header file are of the same vendor */
#if (CRYPTO_VENDOR_ID_IPW_C != CRYPTO_VENDOR_ID)
    #error "Crypto_Ipw.c and Crypto.h have different vendor ids"
#endif

/* Check if Crypto Ipw source file and Crypto.h header file are of the same Autosar version */
#if ((CRYPTO_AR_RELEASE_MAJOR_VERSION_IPW_C    != CRYPTO_AR_RELEASE_MAJOR_VERSION) || \
     (CRYPTO_AR_RELEASE_MINOR_VERSION_IPW_C    != CRYPTO_AR_RELEASE_MINOR_VERSION) || \
     (CRYPTO_AR_RELEASE_REVISION_VERSION_IPW_C != CRYPTO_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Crypto_Ipw.c and Crypto.h are different"
#endif

/* Check if Crypto Ipw source file and Crypto.h header file are of the same Software version */
#if ((CRYPTO_SW_MAJOR_VERSION_IPW_C != CRYPTO_SW_MAJOR_VERSION) || \
     (CRYPTO_SW_MINOR_VERSION_IPW_C != CRYPTO_SW_MINOR_VERSION) || \
     (CRYPTO_SW_PATCH_VERSION_IPW_C != CRYPTO_SW_PATCH_VERSION)    \
    )
    #error "Software Version Numbers of Crypto_Ipw.c and Crypto.h are different"
#endif


/* Check if Crypto Ipw source file and Crypto_Private.h header file are of the same vendor */
#if (CRYPTO_VENDOR_ID_IPW_C != CRYPTO_VENDOR_ID_PRIVATE)
    #error "Crypto_Ipw.c and Crypto_Private.h have different vendor ids"
#endif

/* Check if Crypto Ipw source file and Crypto_Private.h header file are of the same Autosar version */
#if ((CRYPTO_AR_RELEASE_MAJOR_VERSION_IPW_C    != CRYPTO_AR_RELEASE_MAJOR_VERSION_PRIVATE) || \
     (CRYPTO_AR_RELEASE_MINOR_VERSION_IPW_C    != CRYPTO_AR_RELEASE_MINOR_VERSION_PRIVATE) || \
     (CRYPTO_AR_RELEASE_REVISION_VERSION_IPW_C != CRYPTO_AR_RELEASE_REVISION_VERSION_PRIVATE) \
    )
    #error "AutoSar Version Numbers of Crypto_Ipw.c and Crypto_Private.h are different"
#endif

/* Check if Crypto Ipw source file and Crypto_Private.h header file are of the same Software version */
#if ((CRYPTO_SW_MAJOR_VERSION_IPW_C != CRYPTO_SW_MAJOR_VERSION_PRIVATE) || \
     (CRYPTO_SW_MINOR_VERSION_IPW_C != CRYPTO_SW_MINOR_VERSION_PRIVATE) || \
     (CRYPTO_SW_PATCH_VERSION_IPW_C != CRYPTO_SW_PATCH_VERSION_PRIVATE)    \
    )
    #error "Software Version Numbers of Crypto_Ipw.c and Crypto_Private.h are different"
#endif


/* Check if Crypto Ipw source file and Crypto_Util.h header file are of the same vendor */
#if (CRYPTO_VENDOR_ID_IPW_C != CRYPTO_UTIL_VENDOR_ID)
    #error "Crypto_Ipw.c and Crypto_Util.h have different vendor ids"
#endif

/* Check if Crypto Ipw source file and Crypto_Util.h header file are of the same Autosar version */
#if ((CRYPTO_AR_RELEASE_MAJOR_VERSION_IPW_C    != CRYPTO_UTIL_AR_RELEASE_MAJOR_VERSION) || \
     (CRYPTO_AR_RELEASE_MINOR_VERSION_IPW_C    != CRYPTO_UTIL_AR_RELEASE_MINOR_VERSION) || \
     (CRYPTO_AR_RELEASE_REVISION_VERSION_IPW_C != CRYPTO_UTIL_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Crypto_Ipw.c and Crypto_Util.h are different"
#endif

/* Check if Crypto Ipw source file and Crypto_Util.h header file are of the same Software version */
#if ((CRYPTO_SW_MAJOR_VERSION_IPW_C != CRYPTO_UTIL_SW_MAJOR_VERSION) || \
     (CRYPTO_SW_MINOR_VERSION_IPW_C != CRYPTO_UTIL_SW_MINOR_VERSION) || \
     (CRYPTO_SW_PATCH_VERSION_IPW_C != CRYPTO_UTIL_SW_PATCH_VERSION)    \
    )
    #error "Software Version Numbers of Crypto_Ipw.c and Crypto_Util.h are different"
#endif

/*==================================================================================================
*                           LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/
/* State structure for Crypto_Csec layer */
typedef struct
{
    Csec_Ip_StateType   Csec_Ip_State;                  /* Structure storing Csec Ip internal variables */
    uint32              u32CurrentlyProcessedJobId;     /* Variable storing the jobId of the job currently processed by Csec Ip */
    boolean             bMacVerificationSuccessful;     /* Boolean flag stating if the last mac verification requests was successful or not */
} Crypto_Ipw_StateType;

/*==================================================================================================
*                                          LOCAL MACROS
==================================================================================================*/
/* This is needed in order to have the CancelJob work correctly even when trying to launch a Crypto_CancelJob() for a job with jobId that was never launched */
#define CRYPTO_IPW_INVALID_VAL_FOR_JOBID_U32                ((uint32)0xA5AA5A55U)
/* Crypto driver on this platform has support for only one CDO, the one taking care about SHE primitives */
#define CRYPTO_IPW_IDX_UNIQUE_CDO_U8                        ((uint8)0U)
/* CMAC output length */
#define CRYPTO_IPW_CMAC_OUT_LEN_U32                         ((uint32)0x10U)
#define CRYPTO_IPW_RNG_OUT_LEN_U32                          ((uint32)0x10U)
/*==================================================================================================
*                                         LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL VARIABLES
==================================================================================================*/
#define CRYPTO_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Crypto_MemMap.h"

/* Variable storing the Crypto_Csec layer state machine structure */
static Crypto_Ipw_StateType Crypto_Ipw_State;

#define CRYPTO_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Crypto_MemMap.h"

#if (STD_ON == CRYPTO_KEYS_EXIST)
#define CRYPTO_START_SEC_VAR_CLEARED_8_NO_CACHEABLE
#include "Crypto_MemMap.h"

/* Buffer used for storing the entire 128-bit CMAC tag. */
static uint8 u8aOutputResultTemp[CRYPTO_IPW_CMAC_OUT_LEN_U32];

#define CRYPTO_STOP_SEC_VAR_CLEARED_8_NO_CACHEABLE
#include "Crypto_MemMap.h"
#endif /* (STD_ON == CRYPTO_KEYS_EXIST) */

/*==================================================================================================
*                                        GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define CRYPTO_START_SEC_CODE
#include "Crypto_MemMap.h"

#if (STD_ON == CRYPTO_KEYS_EXIST)
static inline Std_ReturnType Crypto_Ipw_SheLoadEncryptedKey
(
    Csec_Ip_KeyIdType eKeyId,
    const uint8*      pKeyMaterial,
    uint32            u32MacProofKeyElemIdx,
    uint32            u32CipherProofKeyElemIdx
);

static inline Std_ReturnType Crypto_Ipw_SheLoadPlainKey
(
    const uint8* pKeyMaterial
);

static void Crypto_Ipw_CopyOutputResult
(
    uint8*  pOutputPtr,
    uint32* pOutputLength,
    uint32  u32ResultLength
);

static inline Std_ReturnType Crypto_Ipw_MacGenerate
(
    Crypto_JobType* pJob
);

static inline Std_ReturnType Crypto_Ipw_MacVerify
(
    Crypto_JobType* pJob
);

static inline Std_ReturnType Crypto_Ipw_EncDec
(
    Crypto_JobType*        pJob,
    Crypto_ServiceInfoType eService
);

static inline Std_ReturnType Crypto_Ipw_EncDecEcb
(
    Crypto_JobType*        pJob,
    Crypto_ServiceInfoType eService,
    Csec_Ip_KeyIdType      eKeyId
);

static inline Std_ReturnType Crypto_Ipw_EncDecCbc
(
    Crypto_JobType*        pJob,
    Crypto_ServiceInfoType eService,
    Csec_Ip_KeyIdType      eKeyId,
    const uint8*           pIV
);

static void Crypto_Ipw_FillVerifyPtr
(
    const Crypto_JobType*       pCryptoJob,
    const Csec_Ip_ErrorCodeType CsecResponse
);
#endif /* (STD_ON == CRYPTO_KEYS_EXIST) */

static void Crypto_Ipw_ProcessAsyncCsecResponse
(
    Csec_Ip_ErrorCodeType ErrCode,
    Csec_Ip_CmdType       u32CompletedCmd,
    void*                 pCallbackParam
);

static inline void Crypto_Ipw_PushJobFromCdoQueueToCsec(void);

static Std_ReturnType Crypto_Ipw_ProcessOperation
(
    Crypto_JobType* pJob
);

static Std_ReturnType Crypto_Ipw_TranslateCsecResponse
(
    Csec_Ip_ErrorCodeType CsecResponse
);

static inline Std_ReturnType Crypto_Ipw_Random
(
    Crypto_JobType* pJob
);

/*==================================================================================================
*                                         LOCAL FUNCTIONS
==================================================================================================*/
#if (STD_ON == CRYPTO_KEYS_EXIST)
static inline Std_ReturnType Crypto_Ipw_SheLoadEncryptedKey
(
    Csec_Ip_KeyIdType eKeyId,
    const uint8*      pKeyMaterial,
    uint32            u32MacProofKeyElemIdx,
    uint32            u32CipherProofKeyElemIdx
)
{
    Csec_Ip_ErrorCodeType CsecResponse;
    uint8*                pM4;
    uint8*                pM5;
    boolean               bM4M5Requested = FALSE;
    boolean               bRequestOk     = TRUE;
    Std_ReturnType        RetVal         = (Std_ReturnType)E_NOT_OK;
    const uint8*          pM1            = &pKeyMaterial[CRYPTO_INDEX_M1_U32];
    const uint8*          pM2            = &pKeyMaterial[CRYPTO_INDEX_M2_U32];
    const uint8*          pM3            = &pKeyMaterial[CRYPTO_INDEX_M3_U32];
    /* Dummy buffers to store the SHE M4 and M5 output messages from Csec, when these are not requested by Crypto driver */
    uint8                 au8DummyM4[CRYPTO_M4_SIZE_U32];
    uint8                 au8DummyM5[CRYPTO_M5_SIZE_U32];

    if ((CRYPTO_INVALID_KEY_ELEMENT_IDX_U32 != u32CipherProofKeyElemIdx) && (CRYPTO_INVALID_KEY_ELEMENT_IDX_U32 != u32MacProofKeyElemIdx))
    {
        /* Check the M4, M5 buffers size */
        if ((CRYPTO_M4_SIZE_U32 <= Crypto_aKeyElementList[u32CipherProofKeyElemIdx].u32CryptoKeyElementMaxSize) &&
            (CRYPTO_M5_SIZE_U32 <= Crypto_aKeyElementList[u32MacProofKeyElemIdx].u32CryptoKeyElementMaxSize))
        {
            pM4            = Crypto_aKeyElementList[u32CipherProofKeyElemIdx].pCryptoElementArray;
            pM5            = Crypto_aKeyElementList[u32MacProofKeyElemIdx].pCryptoElementArray;
            bM4M5Requested = TRUE;
        }
        else
        {
            /* The M4, M5 buffers do not have enough space to store the messages*/
            bRequestOk     = FALSE;
        }
    }
    else
    {
        /* M4, M5 are not requested by Crypto driver but must be provided to Csec */
        pM4 = au8DummyM4;
        pM5 = au8DummyM5;
    }

    /* Check if request can be performed */
    if (TRUE == bRequestOk)
    {
        /* Request Csec Ip to load the key */
        CsecResponse = Csec_Ip_LoadKey(eKeyId, pM1, pM2, pM3, pM4, pM5);

        /* Translate Csec Ip response into a Std_ReturnType one */
        RetVal       = Crypto_Ipw_TranslateCsecResponse(CsecResponse);
    }

    /* If importing the key was successful and M4 and M5 were requested by upper layer, they were already updated by Csec in the CipherProof and MacProof key elements
       We need to update the actual length of these 2 key elements */
    if (((Std_ReturnType)E_OK == RetVal) && (TRUE == bM4M5Requested))
    {
        *Crypto_aKeyElementList[u32CipherProofKeyElemIdx].pu32CryptoElementActualSize = CRYPTO_M4_SIZE_U32;
        *Crypto_aKeyElementList[u32MacProofKeyElemIdx].pu32CryptoElementActualSize    = CRYPTO_M5_SIZE_U32;
    }

    return RetVal;
}

static inline Std_ReturnType Crypto_Ipw_SheLoadPlainKey
(
    const uint8* pKeyMaterial
)
{
    Std_ReturnType        RetVal;
    Csec_Ip_ErrorCodeType CsecResponse;

    /* Request Csec Ip to load the key in plain */
    CsecResponse = Csec_Ip_LoadPlainKey(pKeyMaterial);

    /* Translate Csec Ip response into a Std_ReturnType one */
    RetVal = Crypto_Ipw_TranslateCsecResponse(CsecResponse);

    return RetVal;
}

static void Crypto_Ipw_CopyOutputResult
(
    uint8*  pOutputPtr,
    uint32* pOutputLength,
    uint32  u32ResultLength
)
{
    /* [SWS_Crypto_00135]Fill the outputLengthPtr with the size of CMAC. If job->jobPrimitiveInfo->primitiveInfo->service is set to CRYPTO_HASH or CRYPTO_MACGENERATE, the parameter job->jobPrimitiveInfo->primitiveInfo->resultLength is required. */
    if (u32ResultLength >= CRYPTO_IPW_CMAC_OUT_LEN_U32)
    {
        *pOutputLength = CRYPTO_IPW_CMAC_OUT_LEN_U32;

        Crypto_Util_Memcpy8(pOutputPtr, u8aOutputResultTemp, CRYPTO_IPW_CMAC_OUT_LEN_U32);
    }
    else
    {
        *pOutputLength = u32ResultLength;
        /* If result length is smaller than standard length output the most significant bits of the result
           shall be truncated to the configured result length */
        Crypto_Util_Memcpy8(pOutputPtr, u8aOutputResultTemp, u32ResultLength);
    }
}

static inline Std_ReturnType Crypto_Ipw_MacGenerate
(
    Crypto_JobType* pJob
)
{
    Csec_Ip_ErrorCodeType CsecResponse;
    Csec_Ip_KeyIdType     eKeyId;
    Csec_Ip_ReqType       CsecIpReq;
    Std_ReturnType        RetVal                   = (Std_ReturnType)E_NOT_OK;
    Crypto_ProcessingType eProcessingType          = pJob->jobPrimitiveInfo->processingType;
    uint32                u32CryptoKeyIdx          = Crypto_Util_GetKeyIdx(pJob->jobPrimitiveInfo->cryIfKeyId);
    uint32                u32InputBitsLength       = (pJob->jobPrimitiveInputOutput.inputLength << 3U);
    uint32                u32KeyMaterialKeyElemIdx = Crypto_Util_GetKeyElementIdx(u32CryptoKeyIdx, CRYPTO_KEY_MATERIAL_U32);
    uint32                u32ResultLength          = pJob->jobPrimitiveInfo->primitiveInfo->resultLength;
    uint8*                pOutputPtr               = pJob->jobPrimitiveInputOutput.outputPtr;
    uint32*               pOutputLength            = pJob->jobPrimitiveInputOutput.outputLengthPtr;

    if (CRYPTO_INVALID_KEY_ELEMENT_IDX_U32 != u32KeyMaterialKeyElemIdx)
    {
        eKeyId = Crypto_aKeyElementList[u32KeyMaterialKeyElemIdx].eKeyId;

        /* [SWS_Crypto_00071] In case of START and UPDATE the output length should not be checked as the length is required only for FINISH and SINGLE CALL */
        if (*pOutputLength >= u32ResultLength)
        {
            if (CRYPTO_PROCESSING_SYNC == eProcessingType)
            {
                /* Mark the request as synchronous */
                CsecIpReq.eReqType = CSEC_IP_REQTYPE_SYNC;
            }
            else
            {
                /* Prepare the information for the async request */
#if (STD_ON == CRYPTO_USE_INTERRUPTS_FOR_ASYNC_JOBS)
                CsecIpReq.eReqType       = CSEC_IP_REQTYPE_ASYNC_IRQ;
#else
                CsecIpReq.eReqType       = CSEC_IP_REQTYPE_ASYNC_POLL;
#endif /*(STD_ON == CRYPTO_USE_INTERRUPTS_FOR_ASYNC_JOBS)*/
                CsecIpReq.pfCallback     = Crypto_Ipw_ProcessAsyncCsecResponse;
                /* Set the pointer to the job as parameter to the callback */
                CsecIpReq.pCallbackParam = (void*)pJob;
            }

            CsecResponse = Csec_Ip_GenerateMac(&CsecIpReq,
                                               eKeyId,
                                               pJob->jobPrimitiveInputOutput.inputPtr,
                                               u32InputBitsLength,
                                               u8aOutputResultTemp
                                              );
            /* If the request was successful and synchronous, update the mac length, pointed by outputLengthPtr and copy from temporary buffer the mac.
               For asynchronous request outputLengthPtr will be updated in Crypto_Ipw_ProcessAsyncCsecResponse */
            if ((CSEC_IP_ERC_NO_ERROR == CsecResponse) && (CRYPTO_PROCESSING_SYNC == eProcessingType))
            {
                /* [SWS_Crypto_00135]Fill the outputLengthPtr with the size of CMAC. If job->jobPrimitiveInfo->primitiveInfo->service is set to CRYPTO_HASH or CRYPTO_MACGENERATE, the parameter job->jobPrimitiveInfo->primitiveInfo->resultLength is required.*/
                Crypto_Ipw_CopyOutputResult(pOutputPtr, pOutputLength, u32ResultLength);
            }

            /* Translate Csec Ip response into a Std_ReturnType one */
            RetVal = Crypto_Ipw_TranslateCsecResponse(CsecResponse);
        }
        else
        {
            /* [SWS_Crypto_00136] Output buffer is not big enough to store the result */
            RetVal = CRYPTO_E_SMALL_BUFFER;
        }
    }

    return RetVal;
}

static inline Std_ReturnType Crypto_Ipw_MacVerify
(
    Crypto_JobType* pJob
)
{
    Csec_Ip_ErrorCodeType CsecResponse;
    Csec_Ip_KeyIdType     eKeyId;
    Csec_Ip_ReqType       CsecIpReq;
    Std_ReturnType        RetVal                   = (Std_ReturnType)E_NOT_OK;
    Crypto_ProcessingType eProcessingType          = pJob->jobPrimitiveInfo->processingType;
    uint32                u32CryptoKeyIdx          = Crypto_Util_GetKeyIdx(pJob->jobPrimitiveInfo->cryIfKeyId);
    uint32                u32InputBitsLength       = (pJob->jobPrimitiveInputOutput.inputLength << 3U);
    uint32                u32KeyMaterialKeyElemIdx = Crypto_Util_GetKeyElementIdx(u32CryptoKeyIdx, CRYPTO_KEY_MATERIAL_U32);
    uint16                u16MacBitLen             = (uint16)(pJob->jobPrimitiveInputOutput.secondaryInputLength << 3U);

    if (CRYPTO_INVALID_KEY_ELEMENT_IDX_U32 != u32KeyMaterialKeyElemIdx)
    {
        eKeyId = Crypto_aKeyElementList[u32KeyMaterialKeyElemIdx].eKeyId;

        if (CRYPTO_PROCESSING_SYNC == eProcessingType)
        {
            /* Mark the request as synchronous */
            CsecIpReq.eReqType = CSEC_IP_REQTYPE_SYNC;
        }
        else
        {
            /* Prepare the information for the async request */
#if (STD_ON == CRYPTO_USE_INTERRUPTS_FOR_ASYNC_JOBS)
            CsecIpReq.eReqType       = CSEC_IP_REQTYPE_ASYNC_IRQ;
#else
            CsecIpReq.eReqType       = CSEC_IP_REQTYPE_ASYNC_POLL;
#endif /*(STD_ON == CRYPTO_USE_INTERRUPTS_FOR_ASYNC_JOBS)*/
            CsecIpReq.pfCallback     = Crypto_Ipw_ProcessAsyncCsecResponse;
            /* Set the pointer to the job as parameter to the callback */
            CsecIpReq.pCallbackParam = (void*)pJob;
        }

        /* As per SWS_Csm_01009, the secondaryInputLength contains the secondary input length in bytes.
           Need to transform that in bits because this is what is expected by Csec_Ip_VerifyMac() API */
        CsecResponse = Csec_Ip_VerifyMac(&CsecIpReq,
                                         eKeyId,
                                         pJob->jobPrimitiveInputOutput.inputPtr,
                                         u32InputBitsLength,
                                         pJob->jobPrimitiveInputOutput.secondaryInputPtr,
                                         u16MacBitLen,
                                         &Crypto_Ipw_State.bMacVerificationSuccessful
                                        );
        /* Fill the job's verification parameter for synchronous request. For asynchronous request the update is done in Crypto_Ipw_ProcessAsyncCsecResponse */
        if (CRYPTO_PROCESSING_SYNC == eProcessingType)
        {
            /* [SWS_Crypto_00071] Fill verifyPtr at FINISH */
            Crypto_Ipw_FillVerifyPtr(pJob, CsecResponse);
        }

        /* Translate Csec Ip response into a Std_ReturnType one */
        RetVal = Crypto_Ipw_TranslateCsecResponse(CsecResponse);
    }

    return RetVal;
}

static inline Std_ReturnType Crypto_Ipw_EncDec
(
    Crypto_JobType*        pJob,
    Crypto_ServiceInfoType eService
)
{
    uint32              u32CipherIvKeyElemIdx;
    Csec_Ip_KeyIdType   eKeyId;
    Std_ReturnType      RetVal                   = (Std_ReturnType)E_NOT_OK;
    uint32              u32CryptoKeyIdx          = Crypto_Util_GetKeyIdx(pJob->jobPrimitiveInfo->cryIfKeyId);
    uint32              u32KeyMaterialKeyElemIdx = Crypto_Util_GetKeyElementIdx(u32CryptoKeyIdx, CRYPTO_KEY_MATERIAL_U32);

    /* Check if a key material element was found for the current job key */
    if (CRYPTO_INVALID_KEY_ELEMENT_IDX_U32 != u32KeyMaterialKeyElemIdx)
    {
        eKeyId = Crypto_aKeyElementList[u32KeyMaterialKeyElemIdx].eKeyId;

        if (CRYPTO_ALGOMODE_CBC == pJob->jobPrimitiveInfo->primitiveInfo->algorithm.mode)
        {
            u32CipherIvKeyElemIdx = Crypto_Util_GetKeyElementIdx(u32CryptoKeyIdx, CRYPTO_KE_CIPHER_IV);
            /* Check if a initialization vector element was found for the current job key */
            if (CRYPTO_INVALID_KEY_ELEMENT_IDX_U32 != u32CipherIvKeyElemIdx)
            {
                RetVal = Crypto_Ipw_EncDecCbc(pJob, eService, eKeyId, Crypto_aKeyElementList[u32CipherIvKeyElemIdx].pCryptoElementArray);
            }
        }
        else if (CRYPTO_ALGOMODE_ECB == pJob->jobPrimitiveInfo->primitiveInfo->algorithm.mode)
        {
            RetVal = Crypto_Ipw_EncDecEcb(pJob, eService, eKeyId);
        }
        else
        {
            /* E_NOT_OK will be returned */
        }
    }

    return RetVal;
}

static inline Std_ReturnType Crypto_Ipw_EncDecEcb
(
    Crypto_JobType*        pJob,
    Crypto_ServiceInfoType eService,
    Csec_Ip_KeyIdType      eKeyId
)
{
    Csec_Ip_ErrorCodeType CsecResponse;
    Csec_Ip_ReqType       CsecIpReq;
    Std_ReturnType        RetVal          = (Std_ReturnType)E_NOT_OK;
    Crypto_ProcessingType eProcessingType = pJob->jobPrimitiveInfo->processingType;
    uint32                u32InputLength  = pJob->jobPrimitiveInputOutput.inputLength;
    uint32*               pOutputLength   = pJob->jobPrimitiveInputOutput.outputLengthPtr;

    /* If the input data is provided the output buffer length must be greater or equal to input data length */
    if (*pOutputLength >= u32InputLength)
    {
        /* Check if the job is synchronous or asynchronous */
        if(CRYPTO_PROCESSING_SYNC == eProcessingType)
        {
            /* Mark the request as synchronous */
            CsecIpReq.eReqType = CSEC_IP_REQTYPE_SYNC;
        }
        else
        {
            /* Prepare the information for the async request */
#if (STD_ON == CRYPTO_USE_INTERRUPTS_FOR_ASYNC_JOBS)
            CsecIpReq.eReqType       = CSEC_IP_REQTYPE_ASYNC_IRQ;
#else
            CsecIpReq.eReqType       = CSEC_IP_REQTYPE_ASYNC_POLL;
#endif /*(STD_ON == CRYPTO_USE_INTERRUPTS_FOR_ASYNC_JOBS)*/
            CsecIpReq.pfCallback     = Crypto_Ipw_ProcessAsyncCsecResponse;
            /* Set the pointer to the job as parameter to the callback */
            CsecIpReq.pCallbackParam = (void*)pJob;
        }

        if(CRYPTO_ENCRYPT == eService)
        {
            CsecResponse = Csec_Ip_EncryptEcb(&CsecIpReq,
                                              eKeyId,
                                              pJob->jobPrimitiveInputOutput.inputPtr,
                                              pJob->jobPrimitiveInputOutput.inputLength,
                                              pJob->jobPrimitiveInputOutput.outputPtr
                                             );
        }
        else
        {
            CsecResponse = Csec_Ip_DecryptEcb(&CsecIpReq,
                                              eKeyId,
                                              pJob->jobPrimitiveInputOutput.inputPtr,
                                              pJob->jobPrimitiveInputOutput.inputLength,
                                              pJob->jobPrimitiveInputOutput.outputPtr
                                             );
        }
        /* Check if no error has occurred and update outputLengthPtr for synchronous services. For asynchronous requests the update is done in Crypto_Ipw_ProcessAsyncCsecResponse */
        if ((CSEC_IP_ERC_NO_ERROR == CsecResponse) && (CRYPTO_PROCESSING_SYNC == eProcessingType))
        {
            /* [SWS_Crypto_00135] When the request has finished, the actual length of the returned value shall be stored */
            *pOutputLength = u32InputLength;
        }
        /* Translate Csec Ip response into a Std_ReturnType one */
        RetVal = Crypto_Ipw_TranslateCsecResponse(CsecResponse);
    }
    else
    {
        /* [SWS_Crypto_00136] Output buffer is not big enough to store the result */
        RetVal = (Std_ReturnType)CRYPTO_E_SMALL_BUFFER;
    }

    return RetVal;
}

static inline Std_ReturnType Crypto_Ipw_EncDecCbc
(
    Crypto_JobType*        pJob,
    Crypto_ServiceInfoType eService,
    Csec_Ip_KeyIdType      eKeyId,
    const uint8*           pIV
)
{
    Csec_Ip_ErrorCodeType CsecResponse;
    Csec_Ip_ReqType       CsecIpReq;
    Std_ReturnType        RetVal          = (Std_ReturnType)E_NOT_OK;
    Crypto_ProcessingType eProcessingType = pJob->jobPrimitiveInfo->processingType;
    uint32                u32InputLength  = pJob->jobPrimitiveInputOutput.inputLength;
    uint32*               pOutputLength   = pJob->jobPrimitiveInputOutput.outputLengthPtr;

    /* If the input data is provided the output buffer length must be greater or equal to input data length */
    if (*pOutputLength >= u32InputLength)
    {
        /* Check if the job is synchronous or asynchronous */
        if(CRYPTO_PROCESSING_SYNC == eProcessingType)
        {
            /* Mark the request as synchronous */
            CsecIpReq.eReqType = CSEC_IP_REQTYPE_SYNC;
        }
        else
        {
            /* Prepare the information for the async request */
#if (STD_ON == CRYPTO_USE_INTERRUPTS_FOR_ASYNC_JOBS)
            CsecIpReq.eReqType       = CSEC_IP_REQTYPE_ASYNC_IRQ;
#else
            CsecIpReq.eReqType       = CSEC_IP_REQTYPE_ASYNC_POLL;
#endif /*(STD_ON == CRYPTO_USE_INTERRUPTS_FOR_ASYNC_JOBS)*/
            CsecIpReq.pfCallback     = Crypto_Ipw_ProcessAsyncCsecResponse;
            /* Set the pointer to the job as parameter to the callback */
            CsecIpReq.pCallbackParam = (void*)pJob;
        }

        if(CRYPTO_ENCRYPT == eService)
        {
            CsecResponse = Csec_Ip_EncryptCbc(&CsecIpReq,
                                              eKeyId,
                                              pJob->jobPrimitiveInputOutput.inputPtr,
                                              pJob->jobPrimitiveInputOutput.inputLength,
                                              pIV,
                                              pJob->jobPrimitiveInputOutput.outputPtr
                                             );
        }
        else
        {
            CsecResponse = Csec_Ip_DecryptCbc(&CsecIpReq,
                                              eKeyId,
                                              pJob->jobPrimitiveInputOutput.inputPtr,
                                              pJob->jobPrimitiveInputOutput.inputLength,
                                              pIV,
                                              pJob->jobPrimitiveInputOutput.outputPtr
                                             );
        }
        /* Check if no error has occurred and update outputLengthPtr for synchronous services. For asynchronous requests the update is done in Crypto_Ipw_ProcessAsyncCsecResponse */
        if ((CSEC_IP_ERC_NO_ERROR == CsecResponse) && (CRYPTO_PROCESSING_SYNC == eProcessingType))
        {
            /* [SWS_Crypto_00135] When the request has finished, the actual length of the returned value shall be stored */
            *pOutputLength = u32InputLength;
        }
        /* Translate Csec Ip response into a Std_ReturnType one */
        RetVal = Crypto_Ipw_TranslateCsecResponse(CsecResponse);
    }
    else
    {
        /* [SWS_Crypto_00136] Output buffer is not big enough to store the result */
        RetVal = (Std_ReturnType)CRYPTO_E_SMALL_BUFFER;
    }

    return RetVal;
}

static void Crypto_Ipw_FillVerifyPtr
(
    const Crypto_JobType*       pCryptoJob,
    const Csec_Ip_ErrorCodeType CsecResponse
)
{
    Crypto_ServiceInfoType eCryptoService = pCryptoJob->jobPrimitiveInfo->primitiveInfo->service;

    /* Fill the verification status only for MAC verify service */
    if (CRYPTO_MACVERIFY == eCryptoService)
    {
        /* A verification pass is marked by no error reported by CSEC and boolean flag set to true */
        if ((CSEC_IP_ERC_NO_ERROR == CsecResponse) && (TRUE == Crypto_Ipw_State.bMacVerificationSuccessful))
        {
            *pCryptoJob->jobPrimitiveInputOutput.verifyPtr = CRYPTO_E_VER_OK;
        }
        else
        {
            *pCryptoJob->jobPrimitiveInputOutput.verifyPtr = CRYPTO_E_VER_NOT_OK;
        }
    }
}
#endif /* (STD_ON == CRYPTO_KEYS_EXIST) */

static void Crypto_Ipw_ProcessAsyncCsecResponse
(
    Csec_Ip_ErrorCodeType ErrCode,
    Csec_Ip_CmdType       u32CompletedCmd,
    void*                 pCallbackParam
)
{
    /* Crypto_Ipw layer always adds the pointer to the Crypto job as callback parameter to async Csec_Ip functions () */
    Crypto_JobType* const  pCryptoJob       = (Crypto_JobType*)pCallbackParam;
    Std_ReturnType         CryptoErrorCode;
#if (STD_ON == CRYPTO_KEYS_EXIST)
    uint32                 u32InputLength   = pCryptoJob->jobPrimitiveInputOutput.inputLength;
    uint32                 u32ResultLength  = pCryptoJob->jobPrimitiveInfo->primitiveInfo->resultLength;
    uint8*                 pOutputPtr       = pCryptoJob->jobPrimitiveInputOutput.outputPtr;
#endif /* (STD_ON == CRYPTO_KEYS_EXIST) */
    uint32*                pOutputLength    = pCryptoJob->jobPrimitiveInputOutput.outputLengthPtr;
    Crypto_ServiceInfoType eService         = pCryptoJob->jobPrimitiveInfo->primitiveInfo->service;

    /* Ignore compiler warning for not used parameter */
    (void)u32CompletedCmd;

    /* This Csec request is complete. If there are jobs in the queue of the CDO running on the current partition, send them to Csec for processing */
    Crypto_Ipw_PushJobFromCdoQueueToCsec();
    /* As the asynchronous job is complete, mark the channel as having an invalid JobId value */
    Crypto_Ipw_State.u32CurrentlyProcessedJobId = CRYPTO_IPW_INVALID_VAL_FOR_JOBID_U32;
    /* Translate the message received from Csec to Crypto error code */
    CryptoErrorCode = Crypto_Ipw_TranslateCsecResponse(ErrCode);

#if (STD_ON == CRYPTO_KEYS_EXIST)
    /* Fill the verifyPtr in case the primitive was MacVerify */
    Crypto_Ipw_FillVerifyPtr(pCryptoJob, ErrCode);
#endif /* (STD_ON == CRYPTO_KEYS_EXIST) */

    /* [SWS_Crypto_00018][SWS_Crypto_00119] Clear the job state for FINISH operation mode or if an error occured in START,UPDATE or FINISH operation mode.
       The state will be cleared for single call too as it contains the FINISH step. */
    pCryptoJob->jobState = CRYPTO_JOBSTATE_IDLE;

    /* If the request was successful, update the mac length, pointed by outputLengthPtr */
    if ((Std_ReturnType)E_OK == CryptoErrorCode)
    {
        switch (eService)
        {
#if (STD_ON == CRYPTO_KEYS_EXIST)
            case CRYPTO_MACGENERATE:
                /* [SWS_Crypto_00135]Fill the outputLengthPtr with the size of CMAC. If job->jobPrimitiveInfo->primitiveInfo->service is set to CRYPTO_HASH or CRYPTO_MACGENERATE, the parameter job->jobPrimitiveInfo->primitiveInfo->resultLength is required.*/
                Crypto_Ipw_CopyOutputResult(pOutputPtr, pOutputLength, u32ResultLength);
                break;
            case CRYPTO_ENCRYPT:
                /* fall-through */
            case CRYPTO_DECRYPT:
                /* [SWS_Crypto_00135] When the request has finished, the actual length of the returned value shall be stored */
                *pOutputLength =  u32InputLength;
                break;
#endif /* (STD_ON == CRYPTO_KEYS_EXIST) */
            case CRYPTO_RANDOMGENERATE:
                /* Set output length equal to CRYPTO_IPW_RNG_OUT_LEN_U32 */
                *pOutputLength = CRYPTO_IPW_RNG_OUT_LEN_U32;
                break;
            default:
                /* Do nothing, another cryptographic operation was executed */
                break;
        }
    }

    /* Call the callback */
    CryIf_CallbackNotification(pCryptoJob, CryptoErrorCode);
}

static inline void Crypto_Ipw_PushJobFromCdoQueueToCsec(void)
{
    Std_ReturnType  StdRetVal;
    Crypto_JobType* pJob;
    uint32          u32HeadOfQueuedJobs;
    const uint32    u32PartitionId = Crypto_Util_GetPartitionId();

    /* Try to get jobs from the only CDO queue only if the Crypto Driver has been initialized */
    if(CRYPTO_DRIVER_INITIALIZED == Crypto_aeDriverState[u32PartitionId])
    {
        /* Check if the only CDO used has jobs in the queue */
        if(CRYPTO_JOB_QUEUE_NONE_U32 != Crypto_aObjectQueueList[CRYPTO_IPW_IDX_UNIQUE_CDO_U8].u32HeadOfQueuedJobs)
        {
            u32HeadOfQueuedJobs = Crypto_aObjectQueueList[CRYPTO_IPW_IDX_UNIQUE_CDO_U8].u32HeadOfQueuedJobs;
            /* Take the first job in the queue. The queue is already ordered by priority so the first job in queue has the highest priority */
            pJob = Crypto_aDriverObjectList[CRYPTO_IPW_IDX_UNIQUE_CDO_U8].pQueuedJobs[u32HeadOfQueuedJobs].pJob;

            /* Try to send the job to Csec for processing */
            StdRetVal = Crypto_Ipw_ProcessOperation(pJob);

            if((Std_ReturnType)CRYPTO_E_BUSY != StdRetVal)
            {
                /* If return value is not CRYPTO_E_BUSY, it means that the request was send to Csec
                   Take the first queued job and put it back in the free jobs queue */
                Crypto_Util_DequeueHeadJob(CRYPTO_IPW_IDX_UNIQUE_CDO_U8);

                /* [SWS_Crypto_00119]If return value is not E_OK, call the callback to inform the upper layers an error happened with the job */
                if ((Std_ReturnType)E_OK != StdRetVal)
                {
                    /* [SWS_Crypto_00119]Clear the job state in case of error. If no error occurs the state will be cleared in Crypto_Ipw_ProcessAsyncCsecResponse */
                    pJob->jobState = CRYPTO_JOBSTATE_IDLE;
                    CryIf_CallbackNotification (pJob, StdRetVal);
                }
                else
                {
                    /* We're here because E_OK was returned, so the async job was successfully sent from queue to CSEc for processing
                       We need to store the jobId to be able to cancel it if needed in the future */
                    Crypto_Ipw_State.u32CurrentlyProcessedJobId = pJob->jobInfo->jobId;
                }
            }
        }
    }
}

static Std_ReturnType Crypto_Ipw_ProcessOperation
(
    Crypto_JobType* pJob
)
{
    Std_ReturnType RetVal = (Std_ReturnType)E_NOT_OK;

    /* Move job in ACTIVE state */
    pJob->jobState = CRYPTO_JOBSTATE_ACTIVE;

    switch (pJob->jobPrimitiveInfo->primitiveInfo->service)
    {
#if (STD_ON == CRYPTO_KEYS_EXIST)
        case CRYPTO_MACGENERATE:
            RetVal = Crypto_Ipw_MacGenerate(pJob);
            break;

        case CRYPTO_MACVERIFY:
            RetVal = Crypto_Ipw_MacVerify(pJob);
            break;

        case CRYPTO_ENCRYPT:
        case CRYPTO_DECRYPT:
            RetVal = Crypto_Ipw_EncDec(pJob, pJob->jobPrimitiveInfo->primitiveInfo->service);
            break;
#endif /* (STD_ON == CRYPTO_KEYS_EXIST) */

        case CRYPTO_RANDOMGENERATE:
            RetVal = Crypto_Ipw_Random(pJob);
            break;

        default:
            /* Should not get here. If yes, report an error */
            RetVal = (Std_ReturnType)E_NOT_OK;
            /* Move job back in IDLE state */
            pJob->jobState = CRYPTO_JOBSTATE_IDLE;
            break;
    }

    return RetVal;
}

static Std_ReturnType Crypto_Ipw_TranslateCsecResponse
(
    Csec_Ip_ErrorCodeType CsecResponse
)
{
    Std_ReturnType RetVal;

    switch (CsecResponse)
    {
        /* No error has occurred. */
        case CSEC_IP_ERC_NO_ERROR:
            RetVal = (Std_ReturnType)E_OK;
            break;

        /* Another command is in progress. */
        case CSEC_IP_ERC_STATUS_BUSY:
            RetVal = (Std_ReturnType)CRYPTO_E_BUSY;
            break;

        /* No response received from Csec Ip in the timeout window. */
        case CSEC_IP_ERC_NO_RESPONSE:
            RetVal = (Std_ReturnType)CRYPTO_RET_OPERATION_TIMEOUT;
            break;

        case CSEC_IP_ERC_SEQUENCE_ERROR:    /* The call sequence of the commands is invalid.                                    */
        case CSEC_IP_ERC_NO_SECURE_BOOT:    /* Not applicable, BOOT_DEFINE once configured, will automatically run secure boot. */
        case CSEC_IP_ERC_KEY_UPDATE_ERROR:  /* A key update did not succeed due to errors in verification of the messages.      */
        case CSEC_IP_ERC_RNG_SEED:          /* The PRNG seed has not yet been initialized.                                      */
        case CSEC_IP_ERC_NO_DEBUGGING:      /* Internal debugging is not possible because the authentication did not succeed.   */
        case CSEC_IP_ERC_MEMORY_FAILURE:    /* General memory technology failure (multi-bit ECC error, common fault detection). */
        case CSEC_IP_ERC_GENERAL_ERROR:     /* Detected error that is not covered by the other error codes.                     */
            RetVal = (Std_ReturnType)E_NOT_OK;
            break;

        /* Key slot is empty (not initialized)/not present or higher slot (not partitioned). */
        case CSEC_IP_ERC_KEY_EMPTY:
            RetVal = (Std_ReturnType)CRYPTO_E_KEY_EMPTY;
            break;

        /* A key update is attempted on a write protected key slot or the debugger is started while a key is write-protected. */
        case CSEC_IP_ERC_KEY_WRITE_PROTECTED:
            RetVal = (Std_ReturnType)CRYPTO_E_KEY_WRITE_FAIL;
            break;

        /* The used key has DBG Attached flag and debugger is active. */
        case CSEC_IP_ERC_KEY_NOT_AVAILABLE:
            RetVal = (Std_ReturnType)CRYPTO_E_KEY_NOT_AVAILABLE;
            break;

        /* A function is called to perform an operation with a key that is not allowed for the given operation. */
        case CSEC_IP_ERC_KEY_INVALID:
            RetVal = (Std_ReturnType)CRYPTO_E_KEY_NOT_VALID;
            break;

        default:
            /* Should not get here */
            RetVal = (Std_ReturnType)E_NOT_OK;
            break;
    }

    return RetVal;
}

static inline Std_ReturnType Crypto_Ipw_Random
(
    Crypto_JobType* pJob
)
{
    Csec_Ip_ErrorCodeType CsecResponse;
    Csec_Ip_ReqType       CsecIpReq;
    Std_ReturnType        RetVal          = (Std_ReturnType)E_NOT_OK;
    Crypto_ProcessingType eProcessingType = pJob->jobPrimitiveInfo->processingType;
    uint32*               pOutputLength   = pJob->jobPrimitiveInputOutput.outputLengthPtr;

    /* Check if output length equal or greater than CRYPTO_IPW_RNG_OUT_LEN_U32 */
    if (*pOutputLength >= CRYPTO_IPW_RNG_OUT_LEN_U32)
    {
        /* Check if the job is synchronous or asynchronous */
        if (CRYPTO_PROCESSING_SYNC == eProcessingType)
        {
            /* Mark the request as synchronous */
            CsecIpReq.eReqType = CSEC_IP_REQTYPE_SYNC;
        }
        else
        {
            /* Prepare the information for the async request */
#if (STD_ON == CRYPTO_USE_INTERRUPTS_FOR_ASYNC_JOBS)
            CsecIpReq.eReqType       = CSEC_IP_REQTYPE_ASYNC_IRQ;
#else
            CsecIpReq.eReqType       = CSEC_IP_REQTYPE_ASYNC_POLL;
#endif /*(STD_ON == CRYPTO_USE_INTERRUPTS_FOR_ASYNC_JOBS)*/
            CsecIpReq.pfCallback     = Crypto_Ipw_ProcessAsyncCsecResponse;
            /* Set the pointer to the job as parameter to the callback */
            CsecIpReq.pCallbackParam = (void*)pJob;
        }

        CsecResponse = Csec_Ip_GenerateRnd(&CsecIpReq,
                                           pJob->jobPrimitiveInputOutput.outputPtr
                                           );
        /* Translate Csec Ip response into a Std_ReturnType one */
        RetVal         = Crypto_Ipw_TranslateCsecResponse(CsecResponse);
        /* If the generate random bit was successful, update the output length */
        if (((Std_ReturnType)E_OK == RetVal) && (CRYPTO_PROCESSING_SYNC == eProcessingType))
        {
            /* Set output length equal to CRYPTO_IPW_RNG_OUT_LEN_U32 */
            *pOutputLength = CRYPTO_IPW_RNG_OUT_LEN_U32;
        }
    }
    else
    {
        /* [SWS_Crypto_00136] Output buffer is not big enough to store the result */
        RetVal = (Std_ReturnType)CRYPTO_E_SMALL_BUFFER;
    }

    return RetVal;
}

/*==================================================================================================
*                                        GLOBAL FUNCTIONS PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL FUNCTIONS
==================================================================================================*/
Std_ReturnType Crypto_Ipw_Init
(
    const uint32 u32PartitionId
)
{
    Std_ReturnType        RetVal;
    Csec_Ip_ErrorCodeType CsecResponse;

    /* Ignore compiler warning for not used parameter */
    (void)u32PartitionId;

    /* Initialize the Csec Ip layer */
    Csec_Ip_Init(&(Crypto_Ipw_State.Csec_Ip_State));

    /* No Crypto job currently processed by Csec Ip */
    Crypto_Ipw_State.u32CurrentlyProcessedJobId = CRYPTO_IPW_INVALID_VAL_FOR_JOBID_U32;

    /* Initialize the random number generator */
    CsecResponse = Csec_Ip_InitRng();

    /* Translate Csec Ip response into a Std_ReturnType one */
    RetVal = Crypto_Ipw_TranslateCsecResponse(CsecResponse);

    return RetVal;
}

Std_ReturnType Crypto_Ipw_ProcessJob
(
    const uint32          u32PartitionId,
    const uint32          u32ObjectIdx,
    Crypto_JobType* const pJob
)
{
    Std_ReturnType RetVal = (Std_ReturnType)E_NOT_OK;

    /* Ignore compiler warning for not used parameter */
    (void)u32PartitionId;

    if(CRYPTO_OPERATIONMODE_SINGLECALL == pJob->jobPrimitiveInputOutput.mode)
    {
        /* Try to send the job for processing to Csec */
        RetVal = Crypto_Ipw_ProcessOperation(pJob);

        if(CRYPTO_PROCESSING_SYNC == pJob->jobPrimitiveInfo->processingType)
        {
            /* [SWS_Crypto_00018][SWS_Crypto_00023] If the job is processed synchronously and operation mode is set to single call or finish change the state of the job to idle */
            pJob->jobState = CRYPTO_JOBSTATE_IDLE;
        }

        /* If there was no room available to process the request, check the type of the request (sync or async) */
        if((Std_ReturnType)CRYPTO_E_BUSY == RetVal)
        {
            if  (
                   (CRYPTO_PROCESSING_ASYNC == pJob->jobPrimitiveInfo->processingType) && \
                   (0U != Crypto_aDriverObjectList[u32ObjectIdx].u32CryptoQueueSize)
                )
            {
                /* Try to queue the job */
                if(TRUE == Crypto_Util_QueueJob(u32ObjectIdx, pJob))
                {
                    /* Set return value to E_OK, as the async job has been queued successfully for later processing */
                    RetVal = (Std_ReturnType)E_OK;
                }
                else
                {
                    /* Job could not be queued as the CDO queue is full */
                    RetVal = (Std_ReturnType)CRYPTO_E_QUEUE_FULL;
                }
            }
        }
        else if ((Std_ReturnType)E_OK != RetVal)
        {
            /* [SWS_Crypto_00025]Clear the job state in case of error. If no error occurs the state will be cleared in Crypto_Ipw_ProcessAsyncCsecResponse */
            pJob->jobState = CRYPTO_JOBSTATE_IDLE;
        }
        else
        {
            /* This is the case when E_OK is returned by Crypto_Ipw_ProcessOperation()
               If the job is asynchronous, it means we need to store it's jobId to be able to cancel it if needed */
            if(CRYPTO_PROCESSING_ASYNC == pJob->jobPrimitiveInfo->processingType)
            {
                Crypto_Ipw_State.u32CurrentlyProcessedJobId = pJob->jobInfo->jobId;
            }
        }
    }

    return RetVal;
}

Std_ReturnType Crypto_Ipw_CancelJob
(
    const uint32                    u32PartitionId,
    const uint32                    u32ObjectIdx,
    const Crypto_JobInfoType* const pJobInfo
)
{
    /* Ignore compiler warning for not used parameter */
    (void)u32PartitionId;

    /* Check if the job currently processed by Csec Ip (if any) matches the jobId received as parameter */
    if(Crypto_Ipw_State.u32CurrentlyProcessedJobId == pJobInfo->jobId)
    {
        /* Cancel the currently processed job */
        Csec_Ip_CancelCommand();
        /* As the command was canceled, there is no job being currently processed */
        Crypto_Ipw_State.u32CurrentlyProcessedJobId = CRYPTO_IPW_INVALID_VAL_FOR_JOBID_U32;
    }
    else
    {
        /* No matter if the job is found in the CDO's queue or not, always return E_OK because of the following 2 requirements:
           - SWS_Crypto_00143: If no errors are detected by Crypto Driver and the driver is able to cancel the job immediately, the service Crypto_CancelJob() shall remove the job from the queue
        and cancel the job in the hardware. If the cancellation is successful E_OK shall be returned, otherwise it shall return E_NOT_OK.
           - SWS_Crypto_00214: If no errors are detected by Crypto Driver and the driver does currently not process this job, the service Crypto_CancelJob() shall return E_OK without any processing. */
        (void)Crypto_Util_DequeueJob(u32ObjectIdx, pJobInfo);
    }

    return (Std_ReturnType)E_OK;
}

#if (STD_ON == CRYPTO_KEYS_EXIST)
Std_ReturnType Crypto_Ipw_ImportKey
(
    const uint32       u32PartitionId,
    const uint8* const pKey,
    const uint32       u32KeyLength,
    const uint32       u32CryptoKeyIdx,
    const uint32       u32CryptoKeyElementIdx
)
{
    Std_ReturnType                   RetVal                 = (Std_ReturnType)E_NOT_OK;
    Crypto_KeyElementWriteAccessType eKeyElementWriteAccess = Crypto_aKeyElementList[u32CryptoKeyElementIdx].eCryptoKeyElementWriteAccess;
    Csec_Ip_KeyIdType                eKeyId                 = Crypto_aKeyElementList[u32CryptoKeyElementIdx].eKeyId;
    /* In case of SHE keys,  MAC Proof key element and Cipher Proof key element ar needed for M4 and M5 output , Autosar marks them as not mandatory */
    uint32 u32MacProofKeyElemIdx    = Crypto_Util_GetKeyElementIdx(u32CryptoKeyIdx, CRYPTO_KE_MAC_PROOF);
    uint32 u32CipherProofKeyElemIdx = Crypto_Util_GetKeyElementIdx(u32CryptoKeyIdx, CRYPTO_KE_CIPHER_PROOF);

    /* Ignore compiler warning for not used parameters */
    (void)u32PartitionId;
    (void)u32KeyLength;

    if (CRYPTO_WA_ENCRYPTED == eKeyElementWriteAccess)
    {
        RetVal = Crypto_Ipw_SheLoadEncryptedKey(eKeyId,
                                                pKey,
                                                u32MacProofKeyElemIdx,
                                                u32CipherProofKeyElemIdx);
    }
    else
    {
        if(CSEC_IP_RAM_KEY == eKeyId)
        {
            RetVal = Crypto_Ipw_SheLoadPlainKey(pKey);
        }
    }

    return RetVal;
}

Std_ReturnType Crypto_Ipw_ExportKey
(
    const uint32  u32PartitionId,
    const uint32  u32KeyMaterialKeyElemIdx,
    const uint32  u32KeyExportKeyElemIdx,
    uint8*  const pResult,
    uint32* const pResultLength
)
{
    Csec_Ip_ErrorCodeType CsecResponse;
    Std_ReturnType        RetVal = (Std_ReturnType)E_NOT_OK;
    Csec_Ip_KeyIdType     eKeyId = Crypto_aKeyElementList[u32KeyMaterialKeyElemIdx].eKeyId;

    /* Ignore compiler warning for not used parameters */
    (void)u32PartitionId;
    (void)u32KeyExportKeyElemIdx;

    if(CSEC_IP_RAM_KEY == eKeyId)
    {
        CsecResponse = Csec_Ip_ExportRamKey(&pResult[CRYPTO_INDEX_M1_U32],
                                            &pResult[CRYPTO_INDEX_M2_U32],
                                            &pResult[CRYPTO_INDEX_M3_U32],
                                            &pResult[CRYPTO_INDEX_M4_U32],
                                            &pResult[CRYPTO_INDEX_M5_U32]
                                           );
        /* Translate Csec Ip response into a Std_ReturnType one */
        RetVal = Crypto_Ipw_TranslateCsecResponse(CsecResponse);

        /* If the export was successful, update the output length */
        if((Std_ReturnType)E_OK == RetVal)
        {
            *pResultLength = CRYPTO_SHE_SIZE_OUT_U32;
        }
    }

    return RetVal;
}

Std_ReturnType Crypto_Ipw_RandomSeed
(
    const uint32       u32PartitionId,
    const uint32       u32CryptoKeyIdx,
    const uint8* const seedPtr,
    const uint32       seedLength
)
{
    Std_ReturnType        RetVal;
    Csec_Ip_ErrorCodeType CsecResponse;

    /* Ignore compiler warning for not used parameters */
    (void)u32PartitionId;
    (void)u32CryptoKeyIdx;
    (void)seedLength;

    CsecResponse = Csec_Ip_ExtendSeed(seedPtr);

    /* Translate Csec Ip response into a Std_ReturnType one */
    RetVal = Crypto_Ipw_TranslateCsecResponse(CsecResponse);

    return RetVal;
}

Std_ReturnType Crypto_Ipw_KeyGenerate
(
    const uint32 u32PartitionId,
    const uint32 u32CryptoKeyIdx
)
{
    /* Ignore compiler warning for not used parameters */
    (void)u32PartitionId;
    (void)u32CryptoKeyIdx;

    return (Std_ReturnType)CRYPTO_RET_NOT_SUPPORTED;
}

Std_ReturnType Crypto_Ipw_KeyDerive
(
    const uint32 u32PartitionId,
    const uint32 u32CryptoKeyIdx,
    const uint32 u32TargetKeyIdx
)
{
    /* Ignore compiler warning for not used parameters */
    (void)u32PartitionId;
    (void)u32CryptoKeyIdx;
    (void)u32TargetKeyIdx;

    return (Std_ReturnType)CRYPTO_RET_NOT_SUPPORTED;
}

Std_ReturnType Crypto_Ipw_CalcSecret
(
    const uint32       u32PartitionId,
    const uint32       u32CryptoKeyIdx,
    const uint8* const pPartnerPublicValue,
    const uint32       u32PartnerPublicValueLength
)
{
    /* Ignore compiler warning for not used parameters */
    (void)u32PartitionId;
    (void)u32CryptoKeyIdx;
    (void)pPartnerPublicValue;
    (void)u32PartnerPublicValueLength;

    return (Std_ReturnType)CRYPTO_RET_NOT_SUPPORTED;
}

Std_ReturnType Crypto_Ipw_CertificateParse
(
    const uint32 u32PartitionId,
    const uint32 u32CryptoKeyIdx
)
{
    /* Ignore compiler warning for not used parameters */
    (void)u32PartitionId;
    (void)u32CryptoKeyIdx;

    return (Std_ReturnType)CRYPTO_RET_NOT_SUPPORTED;
}

Std_ReturnType Crypto_Ipw_CertificateVerify
(
    const uint32                         u32PartitionId,
    const uint32                         u32CryptoKeyIdx,
    const uint32                         u32VerifyCryptoKeyIdx,
    const Crypto_VerifyResultType* const verifyPtr
)
{
    /* Ignore compiler warning for not used parameters */
    (void)u32PartitionId;
    (void)u32CryptoKeyIdx;
    (void)u32VerifyCryptoKeyIdx;
    (void)verifyPtr;

    return (Std_ReturnType)CRYPTO_RET_NOT_SUPPORTED;
}

#if (STD_ON == CRYPTO_ENABLE_NVRAM_READ_WRITE_SUPPORT)
Std_ReturnType Crypto_Ipw_RestoreKeyValidInfoFromNvram
(
    const uint32 u32PartitionId
)
{
    /* Ignore compiler warning for not used parameter */
    (void)u32PartitionId;

    return (Std_ReturnType)E_OK;
}

#endif /* (STD_ON == CRYPTO_ENABLE_NVRAM_READ_WRITE_SUPPORT) */
#endif /* (STD_ON == CRYPTO_KEYS_EXIST) */

void Crypto_Ipw_MainFunction
(
    const uint32 u32PartitionId
)
{
    /* Ignore compiler warning for not used parameter */
    (void)u32PartitionId;

    Csec_Ip_MainFunction();
}

void Crypto_Ipw_SetSynchronousRequestsTimeout
(
    const uint32 u32PartitionId,
    const uint32 u32Timeout
)
{
    /* Ignore compiler warning for not used parameter */
    (void)u32PartitionId;

    /* Update the timeout stored in Csec driver state with the one received as parameter */
    Csec_Ip_SetSynchronousCmdTimeout(u32Timeout);
}

Std_ReturnType Crypto_Ipw_SheSetBootStatus
(
    const uint32  u32PartitionId,
    const boolean bStatus
)
{
    Std_ReturnType        RetVal;
    Csec_Ip_ErrorCodeType CsecResponse;

    /* Ignore compiler warning for not used parameter */
    (void)u32PartitionId;

    /* Check if the boolean parameter is TRUE or FALSE and call the right Csec Ip API */
    if(TRUE == bStatus)
    {
        CsecResponse = Csec_Ip_BootOk();
    }
    else
    {
        CsecResponse = Csec_Ip_BootFailure();
    }

    /* Translate Csec Ip response into a Std_ReturnType one */
    RetVal = Crypto_Ipw_TranslateCsecResponse(CsecResponse);

    return RetVal;
}

Std_ReturnType Crypto_Ipw_SheGetStatus
(
    const uint32 u32PartitionId,
    uint8*       pStatus
)
{
    /* Ignore compiler warning for not used parameter */
    (void)u32PartitionId;

    /* Call the Csec Ip API */
    *pStatus = (uint8)Csec_Ip_GetStatus();

    return (Std_ReturnType)E_OK;
}

Std_ReturnType Crypto_Ipw_SheGetId
(
    const uint32 u32PartitionId,
    const uint8* pChallenge,
          uint8* pId,
          uint8* pSreg,
          uint8* pMac
)
{
    Std_ReturnType        RetVal;
    Csec_Ip_ErrorCodeType CsecResponse;

    /* Ignore compiler warning for not used parameter */
    (void)u32PartitionId;

    /* Call the Csec Ip API */
    CsecResponse = Csec_Ip_GetId(pChallenge, pId, pSreg, pMac);

    /* Translate Csec Ip response into a Std_ReturnType one */
    RetVal = Crypto_Ipw_TranslateCsecResponse(CsecResponse);

    return RetVal;
}

Std_ReturnType Crypto_Ipw_SheDebugChal
(
    const uint32 u32PartitionId,
          uint8* pChallenge
)
{
    Std_ReturnType        RetVal;
    Csec_Ip_ErrorCodeType CsecResponse;

    /* Ignore compiler warning for not used parameter */
    (void)u32PartitionId;

    /* Call the Csec Ip API */
    CsecResponse = Csec_Ip_DbgChal(pChallenge);

    /* Translate Csec Ip response into a Std_ReturnType one */
    RetVal = Crypto_Ipw_TranslateCsecResponse(CsecResponse);

    return RetVal;
}

Std_ReturnType Crypto_Ipw_SheDebugAuth
(
    const uint32 u32PartitionId,
    const uint8* pAuthorization
)
{
    Std_ReturnType        RetVal;
    Csec_Ip_ErrorCodeType CsecResponse;

    /* Ignore compiler warning for not used parameter */
    (void)u32PartitionId;

    /* Call the Csec Ip API */
    CsecResponse = Csec_Ip_DbgAuth(pAuthorization);

    /* Translate Csec Ip response into a Std_ReturnType one */
    RetVal = Crypto_Ipw_TranslateCsecResponse(CsecResponse);

    return RetVal;
}

Std_ReturnType Crypto_Ipw_SheMPCompression
(
    const uint32  u32PartitionId,
    const uint8*  pInput,
    const uint32  u32InputLen,
          uint8*  pResult,
    const uint32* pResultLen
)
{
    Std_ReturnType        RetVal;
    Csec_Ip_ErrorCodeType CsecResponse;
    uint16                u16InputPageLen;

    /* Ignore compiler warning for not used parameters */
    (void)u32PartitionId;
    (void)pResultLen;

    /* Convert bytes to pages */
    u16InputPageLen = (uint16)(u32InputLen >> 4U);
    /* Call the Csec Ip API */
    CsecResponse = Csec_Ip_MpCompress(pInput, u16InputPageLen, pResult);

    /* Translate Csec Ip response into a Std_ReturnType one */
    RetVal = Crypto_Ipw_TranslateCsecResponse(CsecResponse);

    return RetVal;
}


#define CRYPTO_STOP_SEC_CODE
#include "Crypto_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
