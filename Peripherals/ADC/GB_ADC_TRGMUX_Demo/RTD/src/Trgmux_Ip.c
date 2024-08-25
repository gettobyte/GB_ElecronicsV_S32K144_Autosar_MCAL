/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : DMA,CACHE,TRGMUX,FLEXIO
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
*   @file    Trgmux_Ip.c
*
*   @version 1.0.0
*
*   @brief   AUTOSAR Mcl - Trgmux Ip driver source file.
*   @details
*
*   @addtogroup TRGMUX_IP_DRIVER TRGMUX IP Driver
*   @{
*/

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Trgmux_Ip.h"
#include "Trgmux_Ip_HwAcc.h"

#include "SchM_Mcl.h"

#if (TRGMUX_IP_IS_AVAILABLE == STD_ON)
/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define TRGMUX_IP_VENDOR_ID_C                       43
#define TRGMUX_IP_AR_RELEASE_MAJOR_VERSION_C        4
#define TRGMUX_IP_AR_RELEASE_MINOR_VERSION_C        4
#define TRGMUX_IP_AR_RELEASE_REVISION_VERSION_C     0
#define TRGMUX_IP_SW_MAJOR_VERSION_C                1
#define TRGMUX_IP_SW_MINOR_VERSION_C                0
#define TRGMUX_IP_SW_PATCH_VERSION_C                0

/**
* @page misra_violations MISRA-C:2012 violations
*/

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/

/* Check if Trgmux_Ip.c file and Trgmux_Ip.h file are of the same vendor */
#if (TRGMUX_IP_VENDOR_ID_C != TRGMUX_IP_VENDOR_ID_H)
    #error "Trgmux_Ip.c and Trgmux_Ip.h have different vendor ids"
#endif

/* Check if Trgmux_Ip.c file and Trgmux_Ip.h file are of the same Autosar version */
#if ((TRGMUX_IP_AR_RELEASE_MAJOR_VERSION_C != TRGMUX_IP_AR_RELEASE_MAJOR_VERSION_H) || \
     (TRGMUX_IP_AR_RELEASE_MINOR_VERSION_C != TRGMUX_IP_AR_RELEASE_MINOR_VERSION_H) || \
     (TRGMUX_IP_AR_RELEASE_REVISION_VERSION_C != TRGMUX_IP_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Trgmux_Ip.c and Trgmux_Ip.h are different"
#endif

/* Check if Trgmux_Ip.c file and Trgmux_Ip.h file are of the same Software version */
#if ((TRGMUX_IP_SW_MAJOR_VERSION_C != TRGMUX_IP_SW_MAJOR_VERSION_H) || \
     (TRGMUX_IP_SW_MINOR_VERSION_C != TRGMUX_IP_SW_MINOR_VERSION_H) || \
     (TRGMUX_IP_SW_PATCH_VERSION_C != TRGMUX_IP_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Trgmux_Ip.c and Trgmux_Ip.h are different"
#endif

/* Check if Trgmux_Ip.c file and Trgmux_Ip_HwAcc.h file are of the same vendor */
#if (TRGMUX_IP_VENDOR_ID_C != TRGMUX_IP_HWACC_VENDOR_ID_H)
    #error "Trgmux_Ip.c and Trgmux_Ip_HwAcc.h have different vendor ids"
#endif

/* Check if Trgmux_Ip.c file and Trgmux_Ip_HwAcc.h file are of the same Autosar version */
#if ((TRGMUX_IP_AR_RELEASE_MAJOR_VERSION_C != TRGMUX_IP_HWACC_AR_RELEASE_MAJOR_VERSION_H) || \
     (TRGMUX_IP_AR_RELEASE_MINOR_VERSION_C != TRGMUX_IP_HWACC_AR_RELEASE_MINOR_VERSION_H) || \
     (TRGMUX_IP_AR_RELEASE_REVISION_VERSION_C != TRGMUX_IP_HWACC_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Trgmux_Ip.c and Trgmux_Ip_HwAcc.h are different"
#endif

/* Check if Trgmux_Ip.c file and Trgmux_Ip_HwAcc.h file are of the same Software version */
#if ((TRGMUX_IP_SW_MAJOR_VERSION_C != TRGMUX_IP_HWACC_SW_MAJOR_VERSION_H) || \
     (TRGMUX_IP_SW_MINOR_VERSION_C != TRGMUX_IP_HWACC_SW_MINOR_VERSION_H) || \
     (TRGMUX_IP_SW_PATCH_VERSION_C != TRGMUX_IP_HWACC_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Trgmux_Ip.c and Trgmux_Ip_HwAcc.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if Trgmux_Ip.c file and SchM_Mcl header file are of the same Autosar version */
#if ((TRGMUX_IP_AR_RELEASE_MAJOR_VERSION_C != SCHM_MCL_AR_RELEASE_MAJOR_VERSION) || \
     (TRGMUX_IP_AR_RELEASE_MINOR_VERSION_C != SCHM_MCL_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Trgmux_Ip.c and SchM_Mcl.h are different"
#endif
#endif

/*==================================================================================================
 *                                       GLOBAL VARIABLES
==================================================================================================*/
#define MCL_START_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

static TRGMUX_Type * const g_paxTrgmuxBaseArray[TRGMUX_INSTANCE_COUNT] = IP_TRGMUX_BASE_PTRS;

#define MCL_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

#define MCL_START_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

/* Pointer to the TRGMUX Initialization Configuration. Based on this configuration pointer,
   the TRGMUX Driver obtains all information for the Logic Triggers and corresponding
   Triggers Configurations.
   The Pointer is loaded when Trgmux_Ip_Init() is called. */
static const Trgmux_Ip_InitType * g_pxTrgmuxInit;

#define MCL_STOP_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

/*==================================================================================================
 *                                       GLOBAL FUNCTIONS
==================================================================================================*/
#define MCL_START_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/
#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
    #if (STD_ON == TRGMUX_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
        #define Trgmux_Ip_HwAcc_Init(pTrgmux) \
                (OsIf_Trusted_Call_Return1param((uint32)hwAcc_Init, pTrgmux))
        #define Trgmux_Ip_HwAcc_SetInputForOutput(pTrgmux, Input, Output) \
                (OsIf_Trusted_Call3params(hwAcc_SetInputForOutput, pTrgmux, Input, Output))
        #define Trgmux_Ip_HwAcc_SetLockForOutput(pTrgmux, Output) \
                (OsIf_Trusted_Call2params(hwAcc_SetLockForOutput, pTrgmux, Output))
        #define Trgmux_Ip_HwAcc_GetLockForOutput(pTrgmux, Output) \
                (OsIf_Trusted_Call_Return2param((uint32)hwAcc_GetLockForOutput, pTrgmux, Output))
    #else
        #define Trgmux_Ip_HwAcc_Init(pTrgmux) \
                (hwAcc_Init(pTrgmux))
        #define Trgmux_Ip_HwAcc_SetInputForOutput(pTrgmux, Input, Output) \
                (hwAcc_SetInputForOutput(pTrgmux, Input, Output))
        #define Trgmux_Ip_HwAcc_SetLockForOutput(pTrgmux, Output) \
                (hwAcc_SetLockForOutput(pTrgmux, Output))
        #define Trgmux_Ip_HwAcc_GetLockForOutput(pTrgmux, Output) \
                (hwAcc_GetLockForOutput(pTrgmux, Output))
    #endif /* STD_ON == TRGMUX_IP_USER_MODE_SUPPORT_IS_AVAILABLE */
#else
    #define Trgmux_Ip_HwAcc_Init(pTrgmux) \
            (hwAcc_Init(pTrgmux))
    #define Trgmux_Ip_HwAcc_SetInputForOutput(pTrgmux, Input, Output) \
            (hwAcc_SetInputForOutput(pTrgmux, Input, Output))
    #define Trgmux_Ip_HwAcc_SetLockForOutput(pTrgmux, Output) \
            (hwAcc_SetLockForOutput(pTrgmux, Output))
    #define Trgmux_Ip_HwAcc_GetLockForOutput(pTrgmux, Output) \
            (hwAcc_GetLockForOutput(pTrgmux, Output))
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */

Trgmux_Ip_StatusType Trgmux_Ip_Init(const Trgmux_Ip_InitType * const pxTrgmuxInit)
{
    TRGMUX_Type * LocTrgmuxBase;
    uint32 LocTriggerIdx;
    uint32 LocInput;
    uint32 LocOutput;
    uint8 LocInst;
    boolean LocLock;
    Trgmux_Ip_StatusType Status = TRGMUX_IP_STATUS_SUCCESS;

    TRGMUX_IP_DEV_ASSERT(NULL_PTR != pxTrgmuxInit);

    /* Clear register */
    LocTrgmuxBase = g_paxTrgmuxBaseArray[TRGMUX_IP_HW_INST_0];
    /* Enter exclusive area to protect TRGMUXn */
    SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_19();

#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
    #if (STD_ON == TRGMUX_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
        if((Std_ReturnType)TRGMUX_IP_STATUS_SUCCESS != Trgmux_Ip_HwAcc_Init(LocTrgmuxBase))
    #else
        if(TRGMUX_IP_STATUS_SUCCESS != Trgmux_Ip_HwAcc_Init(LocTrgmuxBase))
    #endif
#else
        if(TRGMUX_IP_STATUS_SUCCESS != Trgmux_Ip_HwAcc_Init(LocTrgmuxBase))
#endif
        {
            Status =  TRGMUX_IP_STATUS_LOCKED;
        }
        else
        {
            /* Do nothing */
        }

    if(TRGMUX_IP_STATUS_LOCKED != Status)
    {
        /* Set register with configured value */
        for(LocTriggerIdx = 0U; LocTriggerIdx < TRGMUX_IP_NOF_CFG_LOGIC_TRIGGERS; LocTriggerIdx++)
        {
            LocInst = pxTrgmuxInit->paxLogicTrigger[LocTriggerIdx]->HwInstId;
            LocOutput = pxTrgmuxInit->paxLogicTrigger[LocTriggerIdx]->Output;
            LocInput = pxTrgmuxInit->paxLogicTrigger[LocTriggerIdx]->Input;
            LocTrgmuxBase = g_paxTrgmuxBaseArray[LocInst];
            Trgmux_Ip_HwAcc_SetInputForOutput(LocTrgmuxBase, LocInput, LocOutput);
        }

        /* Set register lock */
        for(LocTriggerIdx = 0U; LocTriggerIdx < TRGMUX_IP_NOF_CFG_LOGIC_TRIGGERS; LocTriggerIdx++)
        {
            LocLock = pxTrgmuxInit->paxLogicTrigger[LocTriggerIdx]->Lock;
            if(TRUE == LocLock)
            {
                LocOutput = pxTrgmuxInit->paxLogicTrigger[LocTriggerIdx]->Output;
                Trgmux_Ip_HwAcc_SetLockForOutput(LocTrgmuxBase, LocOutput);
            }
        }
        /* Exit exclusive area to protect TRGMUXn */
        SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_19();

        g_pxTrgmuxInit = pxTrgmuxInit;
    }
    else
    {
        /* Do nothing*/
    }

    return Status;
}

Trgmux_Ip_StatusType Trgmux_Ip_SetInput(const uint32 LogicTrigger, const uint32 Input)
{
    uint32 LocHwInst = g_pxTrgmuxInit->paxLogicTrigger[LogicTrigger]->HwInstId;
    uint32 LocOutput = g_pxTrgmuxInit->paxLogicTrigger[LogicTrigger]->Output;
    TRGMUX_Type * LocTrgmuxBase = g_paxTrgmuxBaseArray[LocHwInst];
    Trgmux_Ip_StatusType Status = TRGMUX_IP_STATUS_SUCCESS;

    if(FALSE != Trgmux_Ip_HwAcc_GetLockForOutput(LocTrgmuxBase, LocOutput))
    {
        Status = TRGMUX_IP_STATUS_LOCKED;
    }

    if(TRGMUX_IP_STATUS_LOCKED != Status)
    {
        /* Enter exclusive area to protect TRGMUXn */
        SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_20();
        Trgmux_Ip_HwAcc_SetInputForOutput(LocTrgmuxBase, Input, LocOutput);
        /* Exit exclusive area to protect TRGMUXn */
        SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_20();
    }
    else
    {
        /* Do nothing */
    }

    return Status;
}

Trgmux_Ip_StatusType Trgmux_Ip_SetLock(const uint32 LogicTrigger)
{
    uint32 LocHwInst = g_pxTrgmuxInit->paxLogicTrigger[LogicTrigger]->HwInstId;
    uint32 LocOutput = g_pxTrgmuxInit->paxLogicTrigger[LogicTrigger]->Output;
    TRGMUX_Type * LocTrgmuxBase = g_paxTrgmuxBaseArray[LocHwInst];
    Trgmux_Ip_StatusType Status = TRGMUX_IP_STATUS_SUCCESS;

    if(FALSE != Trgmux_Ip_HwAcc_GetLockForOutput(LocTrgmuxBase, LocOutput))
    {
        Status = TRGMUX_IP_STATUS_LOCKED;
    }

    if(TRGMUX_IP_STATUS_LOCKED != Status)
    {
        /* Enter exclusive area to protect TRGMUXn */
        SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_21();
        Trgmux_Ip_HwAcc_SetLockForOutput(LocTrgmuxBase, LocOutput);
        /* Exit exclusive area to protect TRGMUXn */
        SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_21();
    }
    else
    {
        /*Do nothing*/
    }

    return Status;
}

#define MCL_STOP_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

#endif /* TRGMUX_IP_IS_AVAILABLE */

/** @} */

/*==================================================================================================
 *                                        END OF FILE
==================================================================================================*/
