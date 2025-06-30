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
*   @file    Dma_Ip_Driver_State.c
*
*   @version 1.0.0
*
*   @brief   AUTOSAR Mcl - Dma Ip driver source file.
*   @details
*
*   @addtogroup DMA_IP_DRIVER DMA IP Driver
*   @{
*/

/*==================================================================================================
*                                          INCLUDE FILES
*  1) system and project includes
*  2) needed interfaces from external units
*  3) internal and external interfaces from this unit
==================================================================================================*/
#include "Dma_Ip_Driver_State.h"

#if (DMA_IP_IS_AVAILABLE == STD_ON)
/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define DMA_IP_DRIVER_STATE_VENDOR_ID_C                       43
#define DMA_IP_DRIVER_STATE_AR_RELEASE_MAJOR_VERSION_C        4
#define DMA_IP_DRIVER_STATE_AR_RELEASE_MINOR_VERSION_C        4
#define DMA_IP_DRIVER_STATE_AR_RELEASE_REVISION_VERSION_C     0
#define DMA_IP_DRIVER_STATE_SW_MAJOR_VERSION_C                1
#define DMA_IP_DRIVER_STATE_SW_MINOR_VERSION_C                0
#define DMA_IP_DRIVER_STATE_SW_PATCH_VERSION_C                0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if Dma_Ip_Driver_State.c file and Dma_Ip_Driver_State.h file are of the same vendor */
#if (DMA_IP_DRIVER_STATE_VENDOR_ID_C != DMA_IP_DRIVER_STATE_VENDOR_ID_H)
    #error "Dma_Ip_Driver_State.c and Dma_Ip_Driver_State.h have different vendor ids"
#endif

/* Check if Dma_Ip_Driver_State.c file and Dma_Ip_Driver_State.h file are of the same Autosar version */
#if ((DMA_IP_DRIVER_STATE_AR_RELEASE_MAJOR_VERSION_C != DMA_IP_DRIVER_STATE_AR_RELEASE_MAJOR_VERSION_H) || \
     (DMA_IP_DRIVER_STATE_AR_RELEASE_MINOR_VERSION_C != DMA_IP_DRIVER_STATE_AR_RELEASE_MINOR_VERSION_H) || \
     (DMA_IP_DRIVER_STATE_AR_RELEASE_REVISION_VERSION_C != DMA_IP_DRIVER_STATE_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Dma_Ip_Driver_State.c and Dma_Ip_Driver_State.h are different"
#endif

/* Check if Dma_Ip_Driver_State.c file and Dma_Ip_Driver_State.h file are of the same Software version */
#if ((DMA_IP_DRIVER_STATE_SW_MAJOR_VERSION_C != DMA_IP_DRIVER_STATE_SW_MAJOR_VERSION_H) || \
     (DMA_IP_DRIVER_STATE_SW_MINOR_VERSION_C != DMA_IP_DRIVER_STATE_SW_MINOR_VERSION_H) || \
     (DMA_IP_DRIVER_STATE_SW_PATCH_VERSION_C != DMA_IP_DRIVER_STATE_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Dma_Ip_Driver_State.c and Dma_Ip_Driver_State.h are different"
#endif

/*==================================================================================================
 *                                       FUNCTION PROTOYPES
==================================================================================================*/
#define MCL_START_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

static void Dma_Ip_SetHwChannel_ResetEvent(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh);
static void Dma_Ip_SetHwChannel_ReadyEvent(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh);
static void Dma_Ip_SetHwChannel_TransferEvent(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh);
static void Dma_Ip_SetHwChannel_ScatterGatherEvent(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh);
static void Dma_Ip_SetHwChannel_ErrorEvent(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh);

#define MCL_STOP_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

/*==================================================================================================
 *                                       GLOBAL VARIABLES
==================================================================================================*/
#define MCL_START_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

static Dma_Ip_HwStateType Dma_Ip_xHwState;

#define MCL_STOP_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

/*==================================================================================================
 *                                    STATE MACHINE FUNCTIONS
==================================================================================================*/
#define MCL_START_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

static void Dma_Ip_SetHwChannel_ResetEvent(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh)
{
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
    if(DMA_IP_HARDWARE_VERSION_2 == LocHwVers)
    {
        Dma_Ip_xHwState.ptHwChV2StateArray[LocHwInst][LocHwCh]->StateValue = DMA_IP_CH_RESET_STATE;
    }
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
    if(DMA_IP_HARDWARE_VERSION_3 == LocHwVers)
    {
        Dma_Ip_xHwState.ptHwChV3StateArray[LocHwInst][LocHwCh]->StateValue = DMA_IP_CH_RESET_STATE;
    }
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
}

static void Dma_Ip_SetHwChannel_ReadyEvent(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh)
{
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
    if(DMA_IP_HARDWARE_VERSION_2 == LocHwVers)
    {
        Dma_Ip_xHwState.ptHwChV2StateArray[LocHwInst][LocHwCh]->StateValue = DMA_IP_CH_READY_STATE;
    }
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
    if(DMA_IP_HARDWARE_VERSION_3 == LocHwVers)
    {
        Dma_Ip_xHwState.ptHwChV3StateArray[LocHwInst][LocHwCh]->StateValue = DMA_IP_CH_READY_STATE;
    }
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
}

static void Dma_Ip_SetHwChannel_TransferEvent(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh)
{
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
    if(DMA_IP_HARDWARE_VERSION_2 == LocHwVers)
    {
        Dma_Ip_xHwState.ptHwChV2StateArray[LocHwInst][LocHwCh]->StateValue = DMA_IP_CH_TRANSFER_STATE;
    }
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
    if(DMA_IP_HARDWARE_VERSION_3 == LocHwVers)
    {
        Dma_Ip_xHwState.ptHwChV3StateArray[LocHwInst][LocHwCh]->StateValue = DMA_IP_CH_TRANSFER_STATE;
    }
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
}

static void Dma_Ip_SetHwChannel_ScatterGatherEvent(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh)
{
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
    if(DMA_IP_HARDWARE_VERSION_2 == LocHwVers)
    {
        Dma_Ip_xHwState.ptHwChV2StateArray[LocHwInst][LocHwCh]->StateValue = DMA_IP_CH_SCATTERGATHER_STATE;
    }
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
    if(DMA_IP_HARDWARE_VERSION_3 == LocHwVers)
    {
        Dma_Ip_xHwState.ptHwChV3StateArray[LocHwInst][LocHwCh]->StateValue = DMA_IP_CH_SCATTERGATHER_STATE;
    }
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
}

static void Dma_Ip_SetHwChannel_ErrorEvent(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh)
{
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
    if(DMA_IP_HARDWARE_VERSION_2 == LocHwVers)
    {
        Dma_Ip_xHwState.ptHwChV2StateArray[LocHwInst][LocHwCh]->StateValue = DMA_IP_CH_ERROR_STATE;
    }
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
    if(DMA_IP_HARDWARE_VERSION_3 == LocHwVers)
    {
        Dma_Ip_xHwState.ptHwChV3StateArray[LocHwInst][LocHwCh]->StateValue = DMA_IP_CH_ERROR_STATE;
    }
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
}

void Dma_Ip_SetHwChannelState(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, const Dma_Ip_HwChannelEventValueEnum EventValue)
{
    static void (* const fpa_Dma_Ip_HwChannelState[5U][5U])(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh) =
    {
        {Dma_Ip_SetHwChannel_ResetEvent, Dma_Ip_SetHwChannel_ReadyEvent, Dma_Ip_SetHwChannel_ErrorEvent,    Dma_Ip_SetHwChannel_ErrorEvent,         Dma_Ip_SetHwChannel_ErrorEvent},
        {Dma_Ip_SetHwChannel_ResetEvent, Dma_Ip_SetHwChannel_ReadyEvent, Dma_Ip_SetHwChannel_TransferEvent, Dma_Ip_SetHwChannel_ScatterGatherEvent, Dma_Ip_SetHwChannel_ErrorEvent},
        {Dma_Ip_SetHwChannel_ResetEvent, Dma_Ip_SetHwChannel_ReadyEvent, Dma_Ip_SetHwChannel_TransferEvent, Dma_Ip_SetHwChannel_ScatterGatherEvent, Dma_Ip_SetHwChannel_ErrorEvent},
        {Dma_Ip_SetHwChannel_ResetEvent, Dma_Ip_SetHwChannel_ReadyEvent, Dma_Ip_SetHwChannel_TransferEvent, Dma_Ip_SetHwChannel_ScatterGatherEvent, Dma_Ip_SetHwChannel_ErrorEvent},
        {Dma_Ip_SetHwChannel_ResetEvent, Dma_Ip_SetHwChannel_ReadyEvent, Dma_Ip_SetHwChannel_ErrorEvent,    Dma_Ip_SetHwChannel_ErrorEvent,         Dma_Ip_SetHwChannel_ErrorEvent},
    };

    Dma_Ip_HwChannelStateValueType StateValue = DMA_IP_CH_RESET_STATE;

#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
    if(DMA_IP_HARDWARE_VERSION_2 == LocHwVers)
    {
        StateValue = Dma_Ip_xHwState.ptHwChV2StateArray[LocHwInst][LocHwCh]->StateValue;
        fpa_Dma_Ip_HwChannelState[StateValue][EventValue](LocHwVers, LocHwInst, LocHwCh);
    }
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
    if(DMA_IP_HARDWARE_VERSION_3 == LocHwVers)
    {
        StateValue = Dma_Ip_xHwState.ptHwChV3StateArray[LocHwInst][LocHwCh]->StateValue;
        fpa_Dma_Ip_HwChannelState[StateValue][EventValue](LocHwVers, LocHwInst, LocHwCh);
    }
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
}

/*==================================================================================================
 *                                       GLOBAL FUNCTIONS
==================================================================================================*/

Dma_Ip_HwChannelStateValueType Dma_Ip_GetHwChannelState(uint32 LocHwVers, uint32 LocHwInst, uint32 LocHwCh)
{
    Dma_Ip_HwChannelStateValueType StateValue = DMA_IP_CH_RESET_STATE;

#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
    if(DMA_IP_HARDWARE_VERSION_2 == LocHwVers)
    {
        StateValue = Dma_Ip_xHwState.ptHwChV2StateArray[LocHwInst][LocHwCh]->StateValue;
    }
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
    if(DMA_IP_HARDWARE_VERSION_3 == LocHwVers)
    {
        StateValue = Dma_Ip_xHwState.ptHwChV3StateArray[LocHwInst][LocHwCh]->StateValue;
    }
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */

    return StateValue;
}

Dma_Ip_HwChannelStateType * Dma_Ip_GetHwChannelStatePointer(uint32 LocHwVers, uint32 LocHwInst, uint32 LocHwCh)
{
    Dma_Ip_HwChannelStateType * ptStatePtr = NULL_PTR;

#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
    if(DMA_IP_HARDWARE_VERSION_2 == LocHwVers)
    {
        ptStatePtr = Dma_Ip_xHwState.ptHwChV2StateArray[LocHwInst][LocHwCh];
    }
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
    if(DMA_IP_HARDWARE_VERSION_3 == LocHwVers)
    {
        ptStatePtr = Dma_Ip_xHwState.ptHwChV3StateArray[LocHwInst][LocHwCh];
    }
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */

    return ptStatePtr;
}

void Dma_Ip_SetHwChannelStatePointer(uint32 LocHwVers, uint32 LocHwInst, uint32 LocHwCh, Dma_Ip_HwChannelStateType * StatePointer)
{
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
    if(DMA_IP_HARDWARE_VERSION_2 == LocHwVers)
    {
        Dma_Ip_xHwState.ptHwChV2StateArray[LocHwInst][LocHwCh] = StatePointer;
    }
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
    if(DMA_IP_HARDWARE_VERSION_3 == LocHwVers)
    {
        Dma_Ip_xHwState.ptHwChV3StateArray[LocHwInst][LocHwCh] = StatePointer;
    }
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
}

#define MCL_STOP_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

#endif /* #if (DMA_IP_IS_AVAILABLE == STD_ON) */

/** @} */

/*==================================================================================================
 *                                        END OF FILE
==================================================================================================*/
