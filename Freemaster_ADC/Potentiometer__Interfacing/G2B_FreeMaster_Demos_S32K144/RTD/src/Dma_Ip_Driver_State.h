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

/* Prevention from multiple including the same header */
#ifndef DMA_IP_DRIVER_STATES_H_
#define DMA_IP_DRIVER_STATES_H_

/**
*   @file    Dma_Ip_Driver_State.h
*
*   @version 1.0.0
*
*   @brief   AUTOSAR Mcl - Dma Ip driver header file.
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
#include "Dma_Ip.h"

#if (DMA_IP_IS_AVAILABLE == STD_ON)
/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define DMA_IP_DRIVER_STATE_VENDOR_ID_H                       43
#define DMA_IP_DRIVER_STATE_AR_RELEASE_MAJOR_VERSION_H        4
#define DMA_IP_DRIVER_STATE_AR_RELEASE_MINOR_VERSION_H        4
#define DMA_IP_DRIVER_STATE_AR_RELEASE_REVISION_VERSION_H     0
#define DMA_IP_DRIVER_STATE_SW_MAJOR_VERSION_H                1
#define DMA_IP_DRIVER_STATE_SW_MINOR_VERSION_H                0
#define DMA_IP_DRIVER_STATE_SW_PATCH_VERSION_H                0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if header file and Dma_Ip.h file are of the same vendor */
#if (DMA_IP_DRIVER_STATE_VENDOR_ID_H != DMA_IP_VENDOR_ID_H)
    #error "Dma_Ip_Driver_State.h and Dma_Ip.h have different vendor ids"
#endif

/* Check if header file and Dma_Ip.h file are of the same Autosar version */
#if ((DMA_IP_DRIVER_STATE_AR_RELEASE_MAJOR_VERSION_H != DMA_IP_AR_RELEASE_MAJOR_VERSION_H) || \
     (DMA_IP_DRIVER_STATE_AR_RELEASE_MINOR_VERSION_H != DMA_IP_AR_RELEASE_MINOR_VERSION_H) || \
     (DMA_IP_DRIVER_STATE_AR_RELEASE_REVISION_VERSION_H != DMA_IP_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Dma_Ip_Driver_State.h and Dma_Ip.h are different"
#endif

/* Check if header file and Dma_Ip.h file are of the same Software version */
#if ((DMA_IP_DRIVER_STATE_SW_MAJOR_VERSION_H != DMA_IP_SW_MAJOR_VERSION_H) || \
     (DMA_IP_DRIVER_STATE_SW_MINOR_VERSION_H != DMA_IP_SW_MINOR_VERSION_H) || \
     (DMA_IP_DRIVER_STATE_SW_PATCH_VERSION_H != DMA_IP_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Dma_Ip_Driver_State.h and Dma_Ip.h are different"
#endif

/*==================================================================================================
                                            ENUMS
==================================================================================================*/
/* The enumeration values are linked to the Dma State Machine */
typedef enum{
    DMA_IP_CH_RESET_EVENT         = 0U,
    DMA_IP_CH_READY_EVENT         = 1U,
    DMA_IP_CH_TRANSFER_EVENT      = 2U,
    DMA_IP_CH_SCATTERGATHER_EVENT = 3U,
    DMA_IP_CH_ERROR_EVENT         = 4U,
}Dma_Ip_HwChannelEventValueEnum;

/*==================================================================================================
                                          STRUCTURES
==================================================================================================*/
typedef struct{
    #if (DMA_IP_HWV2_IS_AVAILABLE == STD_ON)
    Dma_Ip_HwChannelStateType * volatile ptHwChV2StateArray[DMA_IP_HWV2_DMA_NOF_INST][DMA_IP_HWV2_TCD_NOF_CH];
    #endif /* #if (DMA_IP_HWV2_IS_AVAILABLE == STD_ON) */
    #if (DMA_IP_HWV3_IS_AVAILABLE == STD_ON)
    Dma_Ip_HwChannelStateType * volatile ptHwChV3StateArray[DMA_IP_DMA_NOF_HWV3_INST][DMA_IP_TCD_NOF_HWV3_CH];
    #endif /* #if (DMA_IP_HWV3_IS_AVAILABLE == STD_ON) */
}Dma_Ip_HwStateType;

/*==================================================================================================
*                                   GLOBAL FUNCTION PROTOTYPES
==================================================================================================*/
#define MCL_START_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

void Dma_Ip_SetHwChannelState(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, const Dma_Ip_HwChannelEventValueEnum EventValue);
Dma_Ip_HwChannelStateValueType Dma_Ip_GetHwChannelState(uint32 LocHwVers, uint32 LocHwInst, uint32 LocHwCh);
Dma_Ip_HwChannelStateType * Dma_Ip_GetHwChannelStatePointer(uint32 LocHwVers, uint32 LocHwInst, uint32 LocHwCh);
void Dma_Ip_SetHwChannelStatePointer(uint32 LocHwVers, uint32 LocHwInst, uint32 LocHwCh, Dma_Ip_HwChannelStateType * StatePointer);

#define MCL_STOP_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

#endif /* #if (DMA_IP_IS_AVAILABLE == STD_ON) */

/** @} */

#endif  /* #if !defined(DMA_IP_DRIVER_STATES_H_) */

/*==================================================================================================
 *                                        END OF FILE
==================================================================================================*/
