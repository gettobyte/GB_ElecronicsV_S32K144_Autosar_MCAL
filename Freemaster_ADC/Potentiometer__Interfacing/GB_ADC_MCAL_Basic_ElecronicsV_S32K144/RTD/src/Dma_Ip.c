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
*   @file    Dma_Ip.c
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
#include "Dma_Ip_Hw_Access.h"
#include "Dma_Ip_Driver_State.h"
#include "Dma_Ip_Irq.h"

#include "SchM_Mcl.h"

#if (DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON)
#include "Dma_Ip_Multicore.h"
#endif /* DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON */

#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
#if (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
#if (STD_ON == DMA_IP_REG_PROT_AVAILABLE)
#define USER_MODE_REG_PROT_ENABLED      STD_ON
#include "RegLockMacros.h"
#endif /* (STD_ON == DMA_IP_REG_PROT_AVAILABLE) */
#endif /* (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE) */
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */

#if (DMA_IP_IS_AVAILABLE == STD_ON)
/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define DMA_IP_VENDOR_ID_C                       43
#define DMA_IP_AR_RELEASE_MAJOR_VERSION_C        4
#define DMA_IP_AR_RELEASE_MINOR_VERSION_C        4
#define DMA_IP_AR_RELEASE_REVISION_VERSION_C     0
#define DMA_IP_SW_MAJOR_VERSION_C                1
#define DMA_IP_SW_MINOR_VERSION_C                0
#define DMA_IP_SW_PATCH_VERSION_C                0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if Dma_Ip.c file and Dma_Ip_Hw_Access.h file are of the same vendor */
#if (DMA_IP_VENDOR_ID_C != DMA_IP_HW_ACCESS_VENDOR_ID_H)
    #error "Dma_Ip.c and Dma_Ip_Hw_Access.h have different vendor ids"
#endif

/* Check if Dma_Ip.c file and Dma_Ip_Hw_Access.h file are of the same Autosar version */
#if ((DMA_IP_AR_RELEASE_MAJOR_VERSION_C != DMA_IP_HW_ACCESS_AR_RELEASE_MAJOR_VERSION_H) || \
     (DMA_IP_AR_RELEASE_MINOR_VERSION_C != DMA_IP_HW_ACCESS_AR_RELEASE_MINOR_VERSION_H) || \
     (DMA_IP_AR_RELEASE_REVISION_VERSION_C != DMA_IP_HW_ACCESS_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Dma_Ip.c and Dma_Ip_Hw_Access.h are different"
#endif

/* Check if Dma_Ip.c file and Dma_Ip_Hw_Access.h file are of the same Software version */
#if ((DMA_IP_SW_MAJOR_VERSION_C != DMA_IP_HW_ACCESS_SW_MAJOR_VERSION_H) || \
     (DMA_IP_SW_MINOR_VERSION_C != DMA_IP_HW_ACCESS_SW_MINOR_VERSION_H) || \
     (DMA_IP_SW_PATCH_VERSION_C != DMA_IP_HW_ACCESS_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Dma_Ip.c and Dma_Ip_Hw_Access.h are different"
#endif

/* Check if Dma_Ip.c file and "Dma_Ip_Driver_State.h" file are of the same vendor */
#if (DMA_IP_VENDOR_ID_C != DMA_IP_DRIVER_STATE_VENDOR_ID_H)
    #error "Dma_Ip.c and "Dma_Ip_Driver_State.h" have different vendor ids"
#endif

/* Check if Dma_Ip.c file and "Dma_Ip_Driver_State.h" file are of the same Autosar version */
#if ((DMA_IP_AR_RELEASE_MAJOR_VERSION_C != DMA_IP_DRIVER_STATE_AR_RELEASE_MAJOR_VERSION_H) || \
     (DMA_IP_AR_RELEASE_MINOR_VERSION_C != DMA_IP_DRIVER_STATE_AR_RELEASE_MINOR_VERSION_H) || \
     (DMA_IP_AR_RELEASE_REVISION_VERSION_C != DMA_IP_DRIVER_STATE_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Dma_Ip.c and "Dma_Ip_Driver_State.h" are different"
#endif

/* Check if Dma_Ip.c file and "Dma_Ip_Driver_State.h" file are of the same Software version */
#if ((DMA_IP_SW_MAJOR_VERSION_C != DMA_IP_DRIVER_STATE_SW_MAJOR_VERSION_H) || \
     (DMA_IP_SW_MINOR_VERSION_C != DMA_IP_DRIVER_STATE_SW_MINOR_VERSION_H) || \
     (DMA_IP_SW_PATCH_VERSION_C != DMA_IP_DRIVER_STATE_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Dma_Ip.c and "Dma_Ip_Driver_State.h" are different"
#endif

/* Check if Dma_Ip.c file and "Dma_Ip_Irq.h" file are of the same vendor */
#if (DMA_IP_VENDOR_ID_C != DMA_IP_IRQ_VENDOR_ID_H)
    #error "Dma_Ip.c and "Dma_Ip_Irq.h" have different vendor ids"
#endif

/* Check if Dma_Ip.c file and "Dma_Ip_Irq.h" file are of the same Autosar version */
#if ((DMA_IP_AR_RELEASE_MAJOR_VERSION_C != DMA_IP_IRQ_AR_RELEASE_MAJOR_VERSION_H) || \
     (DMA_IP_AR_RELEASE_MINOR_VERSION_C != DMA_IP_IRQ_AR_RELEASE_MINOR_VERSION_H) || \
     (DMA_IP_AR_RELEASE_REVISION_VERSION_C != DMA_IP_IRQ_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Dma_Ip.c and "Dma_Ip_Irq.h" are different"
#endif

/* Check if Dma_Ip.c file and "Dma_Ip_Irq.h" file are of the same Software version */
#if ((DMA_IP_SW_MAJOR_VERSION_C != DMA_IP_IRQ_SW_MAJOR_VERSION_H) || \
     (DMA_IP_SW_MINOR_VERSION_C != DMA_IP_IRQ_SW_MINOR_VERSION_H) || \
     (DMA_IP_SW_PATCH_VERSION_C != DMA_IP_IRQ_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Dma_Ip.c and "Dma_Ip_Irq.h" are different"
#endif

#if (DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON)
/* Check if Dma_Ip.c file and "Dma_Ip_Multicore.h" file are of the same vendor */
#if (DMA_IP_VENDOR_ID_C != DMA_IP_MULTICORE_VENDOR_ID_H)
    #error "Dma_Ip.c and "Dma_Ip_Multicore.h" have different vendor ids"
#endif

/* Check if Dma_Ip.c file and "Dma_Ip_Multicore.h" file are of the same Autosar version */
#if ((DMA_IP_AR_RELEASE_MAJOR_VERSION_C != DMA_IP_MULTICORE_AR_RELEASE_MAJOR_VERSION_H) || \
     (DMA_IP_AR_RELEASE_MINOR_VERSION_C != DMA_IP_MULTICORE_AR_RELEASE_MINOR_VERSION_H) || \
     (DMA_IP_AR_RELEASE_REVISION_VERSION_C != DMA_IP_MULTICORE_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Dma_Ip.c and "Dma_Ip_Multicore.h" are different"
#endif

/* Check if Dma_Ip.c file and "Dma_Ip_Multicore.h" file are of the same Software version */
#if ((DMA_IP_SW_MAJOR_VERSION_C != DMA_IP_MULTICORE_SW_MAJOR_VERSION_H) || \
     (DMA_IP_SW_MINOR_VERSION_C != DMA_IP_MULTICORE_SW_MINOR_VERSION_H) || \
     (DMA_IP_SW_PATCH_VERSION_C != DMA_IP_MULTICORE_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Dma_Ip.c and "Dma_Ip_Multicore.h" are different"
#endif
#endif /* DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON */

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if Dma_Ip.c file and SchM_Mcl header file are of the same Autosar version */
#if ((DMA_IP_AR_RELEASE_MAJOR_VERSION_C != SCHM_MCL_AR_RELEASE_MAJOR_VERSION) || \
     (DMA_IP_AR_RELEASE_MINOR_VERSION_C != SCHM_MCL_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Dma_Ip.c and SchM_Mcl.h are different"
#endif

#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
#if (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
#if (STD_ON == DMA_IP_REG_PROT_AVAILABLE)
/* Check if Dma_Ip.c file and RegLockMacros header file are of the same Autosar version */
#if ((DMA_IP_AR_RELEASE_MAJOR_VERSION_C != REGLOCKMACROS_AR_RELEASE_MAJOR_VERSION) || \
     (DMA_IP_AR_RELEASE_MINOR_VERSION_C != REGLOCKMACROS_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Dma_Ip.c and RegLockMacros.h are different"
#endif
#endif /* (STD_ON == DMA_IP_REG_PROT_AVAILABLE) */
#endif /* (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE) */
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */

#endif /* DISABLE_MCAL_INTERMODULE_ASR_CHECK */

/*==================================================================================================
                                              DEFINES
==================================================================================================*/
#define DMA_IP_CH_NO_HW_ERROR    ((uint32)0U)

/*==================================================================================================
 *                                       FUNCTION PROTOYPES
==================================================================================================*/

/*==================================================================================================
 *                                        GLOBAL VARIABLES
==================================================================================================*/
#define MCL_START_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

/* Pointer to the DMA Initialization Configuration. Based on this configuration pointer,
   the DMA Driver obtains all information for the Logic Channels and corresponding
   Channel Configurations.
   The Pointer is loaded when Dma_Ip_Init() is called. */
static const Dma_Ip_InitType * Dma_Ip_pxInit;

#define MCL_STOP_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
#if (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
#if (STD_ON == DMA_IP_REG_PROT_AVAILABLE)

#define MCL_START_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

static void Mcl_Dma_SetUserAccessAllowed(uint32 address);

#define MCL_STOP_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

#endif /* DMA_IP_REG_PROT_AVAILABLE */
#endif /* (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE) */
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */

#define MCL_START_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

static Dma_Ip_ReturnType Static_Dma_Ip_SetLogicChannelScatterGatherInit(const uint32 LogicCh, const uint32 Element);
static Dma_Ip_ReturnType Static_Dma_Ip_SetLogicChannelGlobalConfig(const uint32 LogicCh, const Dma_Ip_GlobalConfigType * const GlobalConfig, boolean ResetState);
static Dma_Ip_ReturnType Static_Dma_Ip_SetLogicChannelTransferConfig(const uint32 LogicCh, const Dma_Ip_TransferConfigType * const TransferConfig);
#if (DMA_IP_DMACRC_IS_AVAILABLE == STD_ON)
static Dma_Ip_ReturnType Static_Dma_Ip_SetLogicChannelCrcConfig(const uint32 LogicCh, const Dma_Ip_CrcConfigType * const CrcConfig);
#endif
static void Static_Dma_Ip_GetLogicChannelError(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, uint32 * LocLogicChErrors);
static void Static_Dma_Ip_SetLogicChannelGlobalList(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, const Dma_Ip_LogicChannelGlobalListType List[], const uint32 ListDimension);
static void Static_Dma_Ip_SetLogicChannelTransferList(const uint32 LogicCh, Dma_Ip_TcdRegType * pxTcd, const Dma_Ip_LogicChannelTransferListType List[], const uint32 ListDimension);

static void Static_Dma_Ip_SetLogicChannelScatterGatherList(const uint32 LogicCh, Dma_Ip_SwTcdRegType * pxSwTcd, const Dma_Ip_LogicChannelScatterGatherListType List[], const uint32 ListDimension);
#if (DMA_IP_DMACRC_IS_AVAILABLE == STD_ON)
static void Static_Dma_Ip_SetLogicChannelCrcList(const uint32 LocHwVers, const uint32 LogicCh, const Dma_Ip_LogicChannelCrcListType List[], const uint32 ListDimension);
#endif

#define MCL_STOP_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

/*==================================================================================================
 *                                        LOCAL FUNCTION
==================================================================================================*/
#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
#if (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
#if (STD_ON == DMA_IP_REG_PROT_AVAILABLE)

#define MCL_START_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"
/**
* @brief        Enables DMA registers writing in User Mode by configuring REG_PROT
* @details      Sets the UAA (User Access Allowed) bit of the DMA IP allowing DMA registers writing in User Mode
*
* @param[in]    address   Starting hardware address of DMA unit
*
* @return       none
*
* @pre          Should be executed in supervisor mode
* @post         none
*/
static void Mcl_Dma_SetUserAccessAllowed(uint32 address)
{
    SET_USER_ACCESS_ALLOWED(address, DMA_IP_REG_PROT_SIZE);
}

#define MCL_STOP_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

#endif /* DMA_IP_REG_PROT_AVAILABLE */
#endif /* (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE) */
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */

#define MCL_START_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

uint32 Dma_Ip_ConvertLogicChToHwCh(uint32 LogicCh)
{
    DMA_IP_DEV_ASSERT(NULL_PTR != Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]);
    /* Convert from logic channel to hardware channel */
    uint32 LocHwCh = Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]->LogicChId.HwChId;
    return LocHwCh;
}

#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
#define DMA_IP_HWV3_LOC_GLOBAL_PARAM_LIST_DIMENSION    ((uint32)11U)
#endif

#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
#define DMA_IP_HWV2_LOC_GLOBAL_PARAM_LIST_DIMENSION    ((uint32)10U)
#endif

static Dma_Ip_ReturnType Static_Dma_Ip_SetLogicChannelGlobalConfig(const uint32 LogicCh, const Dma_Ip_GlobalConfigType * const GlobalConfig, boolean ResetState)
{
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
    Dma_Ip_LogicChannelGlobalListType LocListHwv3[DMA_IP_HWV3_LOC_GLOBAL_PARAM_LIST_DIMENSION];
#endif
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
    Dma_Ip_LogicChannelGlobalListType LocListHwv2[DMA_IP_HWV2_LOC_GLOBAL_PARAM_LIST_DIMENSION];
#endif
    const Dma_Ip_LogicChannelIdType * LocLogicChId;
    uint32 LocHwVers;
    uint32 LocHwInst;
    uint32 LocHwCh;

    DMA_IP_DEV_ASSERT(NULL_PTR != Dma_Ip_pxInit);
    DMA_IP_DEV_ASSERT(NULL_PTR != Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]);
    DMA_IP_DEV_ASSERT(DMA_IP_NOF_CFG_LOGIC_CHANNELS > LogicCh);
    DMA_IP_DEV_ASSERT(NULL_PTR != GlobalConfig);

    LocLogicChId = (const Dma_Ip_LogicChannelIdType *)&(Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]->LogicChId);
    LocHwVers = LocLogicChId->HwVersId;
    LocHwInst = LocLogicChId->HwInstId;
    LocHwCh = LocLogicChId->HwChId;
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
    if(DMA_IP_HARDWARE_VERSION_3 == LocHwVers)
    {
    #if (DMA_IP_MASTER_ID_REPLICATION_IS_AVAILABLE == STD_ON)
        LocListHwv3[0U].Param = DMA_IP_CH_SET_EN_MASTER_ID_REPLICATION;
        LocListHwv3[0U].Value = (uint32)GlobalConfig->Control.EnMasterIdReplication;
    #else
        LocListHwv3[0U].Param = DMA_IP_CH_SET_EN_MUX_SOURCE_REQ;
        LocListHwv3[0U].Value = (uint32)GlobalConfig->Request.EnSourceMux;
    #endif /* #if (DMA_IP_MASTER_ID_REPLICATION_IS_AVAILABLE == STD_ON) */
    #if (DMA_IP_BUFFERED_WRITES_IS_AVAILABLE == STD_ON)
        LocListHwv3[1U].Param = DMA_IP_CH_SET_EN_BUFFERED_WRITES;
        LocListHwv3[1U].Value = (uint32)GlobalConfig->Control.EnBufferedWrites;
    #else
        LocListHwv3[1U].Param = DMA_IP_CH_SET_EN_MUX_SOURCE_REQ;
        LocListHwv3[1U].Value = (uint32)GlobalConfig->Request.EnSourceMux;
    #endif /* #if (DMA_IP_BUFFERED_WRITES_IS_AVAILABLE == STD_ON) */
        LocListHwv3[2U].Param = DMA_IP_CH_SET_EN_MUX_SOURCE_REQ;
        LocListHwv3[2U].Value = (uint32)GlobalConfig->Request.EnSourceMux;
        LocListHwv3[3U].Param = DMA_IP_CH_SET_MUX_SOURCE_REQ;
        LocListHwv3[3U].Value = GlobalConfig->Request.SourceMux;
        LocListHwv3[4U].Param = DMA_IP_CH_SET_EN_MUX_TRIGGER;
        LocListHwv3[4U].Value = (uint32)GlobalConfig->Request.EnTriggerMux;
        LocListHwv3[5U].Param = DMA_IP_CH_SET_EN_ERROR_INTERRUPT;
        LocListHwv3[5U].Value = (uint32)GlobalConfig->Interrupt.EnErrorInt;
        LocListHwv3[6U].Param = DMA_IP_CH_SET_GROUP_PRIORITY;
        LocListHwv3[6U].Value = GlobalConfig->Priority.Group;
        LocListHwv3[7U].Param = DMA_IP_CH_SET_LEVEL_PRIORITY;
        LocListHwv3[7U].Value = GlobalConfig->Priority.Level;
        LocListHwv3[8U].Param = DMA_IP_CH_SET_EN_PREEMPTION_PRIORITY;
        LocListHwv3[8U].Value = (uint32)GlobalConfig->Priority.EnPreemption;
        LocListHwv3[9U].Param = DMA_IP_CH_SET_DIS_PREEMPT_PRIORITY;
        LocListHwv3[9U].Value = (uint32)GlobalConfig->Priority.DisPreempt;
        /* Enable Request is loaded last into Channel's Configuration */
        LocListHwv3[10U].Param = DMA_IP_CH_SET_EN_HARDWARE_REQ;
        LocListHwv3[10U].Value = (uint32)GlobalConfig->Request.EnRequest;
        Static_Dma_Ip_SetLogicChannelGlobalList(LocHwVers, LocHwInst, LocHwCh, LocListHwv3, DMA_IP_HWV3_LOC_GLOBAL_PARAM_LIST_DIMENSION);
    }
    else
    {
        /* Do Nothing */
    }
#endif
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
    if(DMA_IP_HARDWARE_VERSION_2 == LocHwVers)
    {
    #if (DMA_IP_MASTER_ID_REPLICATION_IS_AVAILABLE == STD_ON)
        LocListHwv2[0U].Param = DMA_IP_CH_SET_EN_MASTER_ID_REPLICATION;
        LocListHwv2[0U].Value = (GlobalConfig->Control.EnMasterIdReplication ? TRUE : FALSE);
    #else
        LocListHwv2[0U].Param = DMA_IP_CH_SET_EN_MUX_SOURCE_REQ;
        LocListHwv2[0U].Value = (GlobalConfig->Request.EnSourceMux ? TRUE : FALSE);
    #endif /* #if (DMA_IP_MASTER_ID_REPLICATION_IS_AVAILABLE == STD_ON) */
    #if (DMA_IP_BUFFERED_WRITES_IS_AVAILABLE == STD_ON)
        LocListHwv2[1U].Param = DMA_IP_CH_SET_EN_BUFFERED_WRITES;
        LocListHwv2[1U].Value = (GlobalConfig->Control.EnBufferedWrites ? TRUE : FALSE);
    #else
        LocListHwv2[1U].Param = DMA_IP_CH_SET_EN_MUX_SOURCE_REQ;
        LocListHwv2[1U].Value = (GlobalConfig->Request.EnSourceMux ? TRUE : FALSE);
    #endif /* #if (DMA_IP_BUFFERED_WRITES_IS_AVAILABLE == STD_ON) */
        LocListHwv2[2U].Param = DMA_IP_CH_SET_EN_MUX_SOURCE_REQ;
        LocListHwv2[2U].Value = (GlobalConfig->Request.EnSourceMux ? TRUE : FALSE);
        LocListHwv2[3U].Param = DMA_IP_CH_SET_MUX_SOURCE_REQ;
        LocListHwv2[3U].Value = GlobalConfig->Request.SourceMux;
        LocListHwv2[4U].Param = DMA_IP_CH_SET_EN_MUX_TRIGGER;
        LocListHwv2[4U].Value = (GlobalConfig->Request.EnTriggerMux ? TRUE : FALSE);
        LocListHwv2[5U].Param = DMA_IP_CH_SET_EN_ERROR_INTERRUPT;
        LocListHwv2[5U].Value = (GlobalConfig->Interrupt.EnErrorInt ? TRUE : FALSE);
        if(TRUE != ResetState)
        {
            LocListHwv2[6U].Param = DMA_IP_CH_SET_LEVEL_PRIORITY;
            LocListHwv2[6U].Value = GlobalConfig->Priority.Level;
        }
        else
        {
            LocListHwv2[6U].Param = DMA_IP_CH_SET_EN_PREEMPTION_PRIORITY;
            LocListHwv2[6U].Value = (GlobalConfig->Priority.EnPreemption ? TRUE : FALSE);
        }
        LocListHwv2[7U].Param = DMA_IP_CH_SET_EN_PREEMPTION_PRIORITY;
        LocListHwv2[7U].Value = (GlobalConfig->Priority.EnPreemption ? TRUE : FALSE);
        LocListHwv2[8U].Param = DMA_IP_CH_SET_DIS_PREEMPT_PRIORITY;
        LocListHwv2[8U].Value = (GlobalConfig->Priority.DisPreempt ? TRUE : FALSE);
        /* Enable Request is loaded last into Channel's Configuration */
        LocListHwv2[9U].Param = DMA_IP_CH_SET_EN_HARDWARE_REQ;
        LocListHwv2[9U].Value = (GlobalConfig->Request.EnRequest ? TRUE : FALSE);
        Static_Dma_Ip_SetLogicChannelGlobalList(LocHwVers, LocHwInst, LocHwCh, LocListHwv2, DMA_IP_HWV2_LOC_GLOBAL_PARAM_LIST_DIMENSION);
    }
    else
    {
        /* Do Nothing */
    }
#endif
    return DMA_IP_STATUS_SUCCESS;
}

#define DMA_IP_LOC_TRANSFER_PARAM_LIST_DIMENSION    ((uint32)25U)
static Dma_Ip_ReturnType Static_Dma_Ip_SetLogicChannelTransferConfig(const uint32 LogicCh, const Dma_Ip_TransferConfigType * const TransferConfig)
{
    Dma_Ip_LogicChannelTransferListType LocList[DMA_IP_LOC_TRANSFER_PARAM_LIST_DIMENSION];
    const Dma_Ip_LogicChannelIdType * LocLogicChId;
    uint32 LocHwVers;
    uint32 LocHwInst;
    uint32 LocHwCh;
    Dma_Ip_TcdRegType * pxTcd = NULL_PTR;

    DMA_IP_DEV_ASSERT(NULL_PTR != Dma_Ip_pxInit);
    DMA_IP_DEV_ASSERT(NULL_PTR != Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]);
    DMA_IP_DEV_ASSERT(DMA_IP_NOF_CFG_LOGIC_CHANNELS > LogicCh);
    DMA_IP_DEV_ASSERT(NULL_PTR != TransferConfig);

    LocLogicChId = (const Dma_Ip_LogicChannelIdType *)&(Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]->LogicChId);
    LocHwVers = LocLogicChId->HwVersId;
    LocHwInst = LocLogicChId->HwInstId;
    LocHwCh = LocLogicChId->HwChId;

    LocList[0U].Param = DMA_IP_CH_SET_SOURCE_ADDRESS;
    LocList[0U].Value = (uint32)TransferConfig->Source.Addr;
    LocList[1U].Param = DMA_IP_CH_SET_SOURCE_SIGNED_OFFSET;
    LocList[1U].Value = (uint32)TransferConfig->Source.SignedOffset;
    LocList[2U].Param = DMA_IP_CH_SET_SOURCE_SIGNED_LAST_ADDR_ADJ;
    LocList[2U].Value = (uint32)TransferConfig->Source.LastAddrAdj;
    LocList[3U].Param = DMA_IP_CH_SET_SOURCE_TRANSFER_SIZE;
    LocList[3U].Value = (uint32)TransferConfig->Source.TransferSize;
    LocList[4U].Param = DMA_IP_CH_SET_SOURCE_MODULO;
    LocList[4U].Value = (uint32)TransferConfig->Source.Modulo;
    LocList[5U].Param = DMA_IP_CH_SET_DESTINATION_ADDRESS;
    LocList[5U].Value = (uint32)TransferConfig->Destination.Addr;
    LocList[6U].Param = DMA_IP_CH_SET_DESTINATION_SIGNED_OFFSET;
    LocList[6U].Value = (uint32)TransferConfig->Destination.SignedOffset;
    LocList[7U].Param = DMA_IP_CH_SET_DESTINATION_SIGNED_LAST_ADDR_ADJ;
    LocList[7U].Value = (uint32)TransferConfig->Destination.LastAddrAdj;
    LocList[8U].Param = DMA_IP_CH_SET_DESTINATION_TRANSFER_SIZE;
    LocList[8U].Value = (uint32)TransferConfig->Destination.TransferSize;
    LocList[9U].Param = DMA_IP_CH_SET_DESTINATION_MODULO;
    LocList[9U].Value = (uint32)TransferConfig->Destination.Modulo;
    LocList[10U].Param = DMA_IP_CH_SET_MINORLOOP_EN_SRC_OFFSET;
    LocList[10U].Value = (TransferConfig->MinorLoop.EnSrcOffset ? TRUE : FALSE);
    LocList[11U].Param = DMA_IP_CH_SET_MINORLOOP_EN_DST_OFFSET;
    LocList[11U].Value = (TransferConfig->MinorLoop.EnDstOffset ? TRUE : FALSE);
    LocList[12U].Param = DMA_IP_CH_SET_MINORLOOP_SIGNED_OFFSET;
    LocList[12U].Value = (uint32)TransferConfig->MinorLoop.Offset;
    LocList[13U].Param = DMA_IP_CH_SET_MINORLOOP_EN_LINK;
    LocList[13U].Value = (TransferConfig->MinorLoop.EnLink ? TRUE : FALSE);
    LocList[14U].Param = DMA_IP_CH_SET_MINORLOOP_LOGIC_LINK_CH;
    LocList[14U].Value = (uint32)TransferConfig->MinorLoop.LogicLinkCh;
    LocList[15U].Param = DMA_IP_CH_SET_MINORLOOP_SIZE;
    LocList[15U].Value = (uint32)TransferConfig->MinorLoop.Size;
    LocList[16U].Param = DMA_IP_CH_SET_MAJORLOOP_EN_LINK;
    LocList[16U].Value = (TransferConfig->MajorLoop.EnLink ? TRUE : FALSE);
    LocList[17U].Param = DMA_IP_CH_SET_MAJORLOOP_LOGIC_LINK_CH;
    LocList[17U].Value = (uint32)TransferConfig->MajorLoop.LogicLinkCh;
    LocList[18U].Param = DMA_IP_CH_SET_MAJORLOOP_COUNT;
    LocList[18U].Value = (uint32)TransferConfig->MajorLoop.Count;
    LocList[19U].Param = DMA_IP_CH_SET_CONTROL_EN_MAJOR_INTERRUPT;
    LocList[19U].Value = (TransferConfig->Control.EnMajorInt ? TRUE : FALSE);
    LocList[20U].Param = DMA_IP_CH_SET_CONTROL_EN_HALF_MAJOR_INTERRUPT;
    LocList[20U].Value = (TransferConfig->Control.EnHalfMajorInt ? TRUE : FALSE);
    LocList[21U].Param = DMA_IP_CH_SET_CONTROL_DIS_AUTO_REQUEST;
    LocList[21U].Value = (TransferConfig->Control.DisAutoHwRequest ? TRUE : FALSE);
#if (DMA_IP_END_OF_PACKET_SIGNAL_IS_AVAILABLE == STD_ON)
    LocList[22U].Param = DMA_IP_CH_SET_CONTROL_EN_END_OF_PACKET_SIGNAL;
    LocList[22U].Value = (uint32)TransferConfig->Control.EnEndOfPacketSignal;
#else
    LocList[22U].Param = DMA_IP_CH_SET_CONTROL_BANDWIDTH;
    LocList[22U].Value = (uint32)TransferConfig->Control.BandwidthControl;
#endif /* #if (DMA_IP_END_OF_PACKET_SIGNAL_IS_AVAILABLE == STD_ON) */
    LocList[23U].Param = DMA_IP_CH_SET_CONTROL_BANDWIDTH;
    LocList[23U].Value = (uint32)TransferConfig->Control.BandwidthControl;
    /* Start bit is loaded last into the TCD */
    LocList[24U].Param = DMA_IP_CH_SET_CONTROL_SOFTWARE_REQUEST;
    LocList[24U].Value = (TransferConfig->Control.EnStart ? TRUE : FALSE);

#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
    if(DMA_IP_HARDWARE_VERSION_2 == LocHwVers)
    {
        pxTcd = &DMA_IP_HWV2_TCD_TCD_VALUE(LocHwInst, LocHwCh);
    }
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
    if(DMA_IP_HARDWARE_VERSION_3 == LocHwVers)
    {
        pxTcd = &DMA_IP_HWV3_TCD_TCD_VALUE(LocHwInst, LocHwCh);
    }
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
    /* Done shall be cleared before a new transfer is configured. */
    HwAccDmaCh_SetCommand((uint32)DMA_IP_CH_CLEAR_DONE, LocHwVers, LocHwInst, LocHwCh);
    Static_Dma_Ip_SetLogicChannelTransferList(LogicCh, pxTcd, LocList, DMA_IP_LOC_TRANSFER_PARAM_LIST_DIMENSION);
    return DMA_IP_STATUS_SUCCESS;
}

#if (DMA_IP_DMACRC_IS_AVAILABLE == STD_ON)
#define DMA_IP_LOC_CRC_PARAM_LIST_DIMENSION    ((uint32)5U)
static Dma_Ip_ReturnType Static_Dma_Ip_SetLogicChannelCrcConfig(const uint32 LogicCh, const Dma_Ip_CrcConfigType * const CrcConfig)
{
    Dma_Ip_LogicChannelCrcListType LocList[DMA_IP_LOC_CRC_PARAM_LIST_DIMENSION];
    const Dma_Ip_LogicChannelIdType * LocLogicChId;
    uint32 LocHwVers;

    DMA_IP_DEV_ASSERT(NULL_PTR != Dma_Ip_pxInit);
    DMA_IP_DEV_ASSERT(DMA_IP_NOF_CFG_LOGIC_CHANNELS > LogicCh);
    DMA_IP_DEV_ASSERT(NULL_PTR != CrcConfig);

    LocLogicChId = (const Dma_Ip_LogicChannelIdType *)&(Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]->LogicChId);
    LocHwVers = LocLogicChId->HwVersId;

    LocList[0U].Param = DMA_IP_CH_SET_CRC_MODE;
    LocList[0U].Value = CrcConfig->Mode;
    LocList[1U].Param = DMA_IP_CH_SET_CRC_POLYNOMIAL;
    LocList[1U].Value = CrcConfig->Polynomial;
    LocList[2U].Param = DMA_IP_CH_SET_CRC_INITIAL_VALUE;
    LocList[2U].Value = CrcConfig->InitValue;
    LocList[3U].Param = DMA_IP_CH_SET_CRC_EN_INITIAL_VALUE;
    LocList[3U].Value = CrcConfig->EnInitSel;
    LocList[4U].Param = DMA_IP_CH_SET_CRC_EN_LOGIC;
    LocList[4U].Value = CrcConfig->EnLogic;
    Static_Dma_Ip_SetLogicChannelCrcList(LocHwVers, LogicCh, LocList, DMA_IP_LOC_CRC_PARAM_LIST_DIMENSION);
    return DMA_IP_STATUS_SUCCESS;
}
#endif

#define MCL_STOP_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

/*==================================================================================================
 *                                 DMA LOGIC INSTANCE FUNCTIONS
==================================================================================================*/
#define MCL_START_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

Dma_Ip_ReturnType Dma_Ip_Init(const Dma_Ip_InitType * const pxDmaInit)
{
    Dma_Ip_ReturnType LocStatus = DMA_IP_STATUS_SUCCESS;
    uint32 LocCfgIdx;
    uint32 LocHwVers;
    uint32 LocHwInst;
    uint32 LocHwCh;
#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
#if (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
#if (STD_ON == DMA_IP_REG_PROT_AVAILABLE)
#if (STD_ON == DMA_IP_MP_REG_PROT_AVAILABLE )
    uint32 LocHwInstAddr;
#endif /* DMA_IP_MP_REG_PROT_AVAILABLE  */
#if (STD_ON == DMA_IP_TCD_REG_PROT_AVAILABLE)
    uint32 LocHwTcdChAddr;
#endif /* DMA_IP_TCD_REG_PROT_AVAILABLE */
#endif /* DMA_IP_REG_PROT_AVAILABLE */
#endif /* (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE) */
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
    const Dma_Ip_HwChannelStateType * pLocChState;

    DMA_IP_DEV_ASSERT(NULL_PTR != pxDmaInit);
    DMA_IP_DEV_ASSERT(NULL_PTR != pxDmaInit->ppxLogicInstConfigArray);
    DMA_IP_DEV_ASSERT(NULL_PTR != pxDmaInit->ppxChStateArray);
    DMA_IP_DEV_ASSERT(NULL_PTR != pxDmaInit->ppxLogicChannelConfigArray);

    /* Save pointer to initialization structure */
    Dma_Ip_pxInit = (const Dma_Ip_InitType *)pxDmaInit;

#if (DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON)
    LocStatus = Dma_Ip_ValidateMultiCoreInit();
    if(DMA_IP_STATUS_SUCCESS == LocStatus)
    {
#endif /* DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON */
        /* Enter exclusive area to protect DMA_MP_CSR and DMA_CRC_GEC */
        SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_00();
        for(LocCfgIdx = 0U; LocCfgIdx < DMA_IP_NOF_CFG_LOGIC_INSTANCES; LocCfgIdx++)
        {
        #ifdef MCAL_ENABLE_USER_MODE_SUPPORT
        #if (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
        #if (STD_ON == DMA_IP_REG_PROT_AVAILABLE)
        #if (STD_ON == DMA_IP_MP_REG_PROT_AVAILABLE )
            LocHwInstAddr = (uint32)DMA_IP_CSR_BASE_ADDR((uint32)(Dma_Ip_pxInit->ppxLogicInstConfigArray[LocCfgIdx]->LogicInstId.HwInstId));
            OsIf_Trusted_Call1param(Mcl_Dma_SetUserAccessAllowed, LocHwInstAddr);
        #endif /* DMA_IP_MP_REG_PROT_AVAILABLE  */
        #endif /* DMA_IP_REG_PROT_AVAILABLE */
        #endif /* (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE) */
        #endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
            HwAccDmaInst_SetConfig(&Dma_Ip_pxInit->ppxLogicInstConfigArray[LocCfgIdx]->LogicInstId, (const Dma_Ip_LogicInstanceConfigType*)Dma_Ip_pxInit->ppxLogicInstConfigArray[LocCfgIdx]);
    #if (DMA_IP_DMACRC_IS_AVAILABLE == STD_ON)
            HwAccDmaInst_SetCrcConfig(&Dma_Ip_pxInit->ppxLogicInstConfigArray[LocCfgIdx]->LogicInstId, (Dma_Ip_LogicInstanceConfigType*)Dma_Ip_pxInit->ppxLogicInstConfigArray[LocCfgIdx]);
    #endif /* #if (DMA_IP_DMACRC_IS_AVAILABLE == STD_ON) */
        }
        /* Exit exclusive area to protect DMA_MP_CSR and DMA_CRC_GEC */
        SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_00();

        for(LocCfgIdx = 0U; LocCfgIdx < DMA_IP_NOF_CFG_LOGIC_CHANNELS; LocCfgIdx++)
        {
            LocHwVers = Dma_Ip_pxInit->ppxLogicChannelConfigArray[LocCfgIdx]->LogicChId.HwVersId;
            LocHwInst = Dma_Ip_pxInit->ppxLogicChannelConfigArray[LocCfgIdx]->LogicChId.HwInstId;
            LocHwCh   = Dma_Ip_pxInit->ppxLogicChannelConfigArray[LocCfgIdx]->LogicChId.HwChId;
        #ifdef MCAL_ENABLE_USER_MODE_SUPPORT
        #if (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
        #if (STD_ON == DMA_IP_REG_PROT_AVAILABLE)
        #if (STD_ON == DMA_IP_TCD_REG_PROT_AVAILABLE)
        #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
            if(DMA_IP_HARDWARE_VERSION_2 == LocHwVers)
            {
                LocHwTcdChAddr = (uint32)(&DMA_IP_HWV2_TCD_CH_VALUE(LocHwInst,LocHwCh));
            }
        #endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
        #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
            if(DMA_IP_HARDWARE_VERSION_3 == LocHwVers)
            {
                LocHwTcdChAddr = (uint32)(&DMA_IP_HWV3_TCD_CH_VALUE(LocHwInst,LocHwCh));
            }
        #endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
            OsIf_Trusted_Call1param(Mcl_Dma_SetUserAccessAllowed, LocHwTcdChAddr);
        #endif /* DMA_IP_TCD_REG_PROT_AVAILABLE */
        #endif /* DMA_IP_REG_PROT_AVAILABLE */
        #endif /* (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE) */
        #endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
            /* Initialize channel state pointer.
               The generated Channel States structures get their pointers saved into the Driver State pointer array. */
            Dma_Ip_SetHwChannelStatePointer(LocHwVers, LocHwInst, LocHwCh, Dma_Ip_pxInit->ppxChStateArray[LocCfgIdx]);
            /* Get through the Driver State pointer array, the state from the generated structure. */
            pLocChState = Dma_Ip_GetHwChannelStatePointer(LocHwVers, LocHwInst, LocHwCh);
            if(DMA_IP_CH_RESET_STATE != pLocChState->StateValue)
            {
                LocStatus = DMA_IP_STATUS_WRONG_STATE;
            }
            else
            {
                /* Load channel configuration */
                LocStatus = Dma_Ip_LogicChannelInit(LocCfgIdx);
            }
        }
#if (DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON)
    }
#endif /* DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON */

    return LocStatus;
}



Dma_Ip_ReturnType Dma_Ip_Deinit(void)
{
    Dma_Ip_ReturnType LocStatus = DMA_IP_STATUS_SUCCESS;
    uint32 LocCfgIdx;
#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
#if (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
#if (STD_ON == DMA_IP_REG_PROT_AVAILABLE)
#if (STD_ON == DMA_IP_MP_REG_PROT_AVAILABLE )
    uint32 LocHwInstAddr;
#endif /* DMA_IP_MP_REG_PROT_AVAILABLE  */
#endif /* DMA_IP_REG_PROT_AVAILABLE */
#endif /* (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE) */
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */

    DMA_IP_DEV_ASSERT(NULL_PTR != Dma_Ip_pxInit);
    DMA_IP_DEV_ASSERT(NULL_PTR != Dma_Ip_pxInit->ppxChStateArray);
    DMA_IP_DEV_ASSERT(NULL_PTR != Dma_Ip_pxInit->pxLogicInstanceResetConfig);
    DMA_IP_DEV_ASSERT(NULL_PTR != Dma_Ip_pxInit->ppxLogicInstConfigArray);

#if (DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON)
    LocStatus = Dma_Ip_ValidateMultiCoreInit();
    if(DMA_IP_STATUS_SUCCESS == LocStatus)
    {
#endif /* DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON */
        /* Enter exclusive area to protect DMA_MP_CSR and DMA_CRC_GEC*/
        SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_01();
        for(LocCfgIdx = 0U; LocCfgIdx < DMA_IP_NOF_CFG_LOGIC_INSTANCES; LocCfgIdx++)
        {
        #ifdef MCAL_ENABLE_USER_MODE_SUPPORT
        #if (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
        #if (STD_ON == DMA_IP_REG_PROT_AVAILABLE)
        #if (STD_ON == DMA_IP_MP_REG_PROT_AVAILABLE )
            LocHwInstAddr = (uint32)DMA_IP_CSR_BASE_ADDR((uint32)(Dma_Ip_pxInit->ppxLogicInstConfigArray[LocCfgIdx]->LogicInstId.HwInstId));
            OsIf_Trusted_Call1param(Mcl_Dma_SetUserAccessAllowed, LocHwInstAddr);
        #endif /* DMA_IP_MP_REG_PROT_AVAILABLE  */
        #endif /* DMA_IP_REG_PROT_AVAILABLE */
        #endif /* (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE) */
        #endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
            HwAccDmaInst_SetConfig(&(Dma_Ip_pxInit->ppxLogicInstConfigArray[LocCfgIdx]->LogicInstId), (const Dma_Ip_LogicInstanceConfigType*)Dma_Ip_pxInit->pxLogicInstanceResetConfig);
    #if (DMA_IP_DMACRC_IS_AVAILABLE == STD_ON)
            HwAccDmaInst_SetCrcConfig(&(Dma_Ip_pxInit->ppxLogicInstConfigArray[LocCfgIdx]->LogicInstId), (Dma_Ip_LogicInstanceConfigType*)Dma_Ip_pxInit->pxLogicInstanceResetConfig);
    #endif
        }
        /* Exit exclusive area to protect DMA_MP_CSR and DMA_CRC_GEC*/
        SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_01();
        for(LocCfgIdx = 0U; LocCfgIdx < DMA_IP_NOF_CFG_LOGIC_CHANNELS; LocCfgIdx++)
        {
            (void)Dma_Ip_LogicChannelDeinit(LocCfgIdx);
        }
#if (DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON)
    }
#endif /* DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON */

    return LocStatus;
}



Dma_Ip_ReturnType Dma_Ip_SetLogicInstanceCommand(const uint32 LogicInst, const Dma_Ip_LogicInstanceCmdType Command)
{
    Dma_Ip_ReturnType LocStatus = DMA_IP_STATUS_SUCCESS;
    const Dma_Ip_LogicInstanceIdType * paxLogicInst;

    DMA_IP_DEV_ASSERT(NULL_PTR != Dma_Ip_pxInit);
    DMA_IP_DEV_ASSERT(DMA_IP_NOF_CFG_LOGIC_INSTANCES > LogicInst);
    DMA_IP_DEV_ASSERT(DMA_IP_INST_RESUME >= Command);

#if (DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON)
    LocStatus = Dma_Ip_ValidateMultiCoreInstanceCall(LogicInst);
    if(LocStatus == DMA_IP_STATUS_SUCCESS)
    {
#endif /* DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON */
        paxLogicInst = (const Dma_Ip_LogicInstanceIdType *)&(Dma_Ip_pxInit->ppxLogicInstConfigArray[LogicInst]->LogicInstId);
    #ifdef MCAL_ENABLE_USER_MODE_SUPPORT
    #if (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
    #if (STD_ON == DMA_IP_REG_PROT_AVAILABLE)
    #if (STD_ON == DMA_IP_MP_REG_PROT_AVAILABLE )
        OsIf_Trusted_Call1param(Mcl_Dma_SetUserAccessAllowed, (uint32)DMA_IP_CSR_BASE_ADDR(LogicInst));
    #endif /* DMA_IP_MP_REG_PROT_AVAILABLE  */
    #endif /* DMA_IP_REG_PROT_AVAILABLE */
    #endif /* (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE) */
    #endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        /* Enter exclusive area to protect DMA_MP_CSR */
        SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_02();
        HwAccDmaInst_SetCommand((uint32)Command, paxLogicInst);
        /* Exit exclusive area to protect DMA_MP_CSR */
        SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_02();
#if (DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON)
    }
#endif /* DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON */
    return LocStatus;
}



Dma_Ip_ReturnType Dma_Ip_GetLogicInstanceStatus(const uint32 LogicInst, Dma_Ip_LogicInstanceStatusType * const Status)
{
    Dma_Ip_ReturnType LocStatus = DMA_IP_STATUS_SUCCESS;
    const Dma_Ip_LogicInstanceIdType * paxLogicInst;

    DMA_IP_DEV_ASSERT(NULL_PTR != Dma_Ip_pxInit);
    DMA_IP_DEV_ASSERT(DMA_IP_NOF_CFG_LOGIC_INSTANCES > LogicInst);
    DMA_IP_DEV_ASSERT(NULL_PTR != Status);

#if (DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON)
    LocStatus = Dma_Ip_ValidateMultiCoreInstanceCall(LogicInst);
    if(LocStatus == DMA_IP_STATUS_SUCCESS)
    {
#endif /* DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON */
        paxLogicInst = (const Dma_Ip_LogicInstanceIdType *)&(Dma_Ip_pxInit->ppxLogicInstConfigArray[LogicInst]->LogicInstId);
    #ifdef MCAL_ENABLE_USER_MODE_SUPPORT
    #if (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
    #if (STD_ON == DMA_IP_REG_PROT_AVAILABLE)
    #if (STD_ON == DMA_IP_MP_REG_PROT_AVAILABLE )
        OsIf_Trusted_Call1param(Mcl_Dma_SetUserAccessAllowed, (uint32)DMA_IP_CSR_BASE_ADDR(LogicInst));
    #endif /* DMA_IP_MP_REG_PROT_AVAILABLE  */
    #endif /* DMA_IP_REG_PROT_AVAILABLE */
    #endif /* (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE) */
    #endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        HwAccDmaInst_GetStatus(paxLogicInst, Status);
#if (DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON)
    }
#endif /* DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON */
    return LocStatus;
}

#define MCL_STOP_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

/*==================================================================================================
 *                                   DMA LOGIC CHANNEL FUNCTIONS
==================================================================================================*/
#define MCL_START_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

Dma_Ip_ReturnType Dma_Ip_LogicChannelInit(const uint32 LogicCh)
{
    Dma_Ip_ReturnType LocStatus = DMA_IP_STATUS_SUCCESS;
    const Dma_Ip_LogicChannelIdType * LocLogicChId;
    uint32 LocHwVers;
    uint32 LocHwInst;
    uint32 LocHwCh;
#if (DMA_IP_DMACRC_IS_AVAILABLE == STD_ON)
    uint8 LocHwCrcChId;
#endif
    Dma_Ip_HwChannelStateType * LocChState;
#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
#if (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
#if (STD_ON == DMA_IP_REG_PROT_AVAILABLE)
#if (STD_ON == DMA_IP_TCD_REG_PROT_AVAILABLE)
    uint32 LocHwTcdChAddr;
#endif /* DMA_IP_TCD_REG_PROT_AVAILABLE */
#endif /* DMA_IP_REG_PROT_AVAILABLE */
#endif /* (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE) */
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
    Dma_Ip_TcdRegType * pxTcd = NULL_PTR;

    DMA_IP_DEV_ASSERT(NULL_PTR != Dma_Ip_pxInit);
    DMA_IP_DEV_ASSERT(NULL_PTR != Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]);

#if (DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON)
    LocStatus = Dma_Ip_ValidateMultiCoreInit();
    if(DMA_IP_STATUS_SUCCESS == LocStatus)
    {
#endif /* DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON */
        LocLogicChId = (const Dma_Ip_LogicChannelIdType *)&(Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]->LogicChId);
        LocHwVers  = LocLogicChId->HwVersId;
        LocHwInst  = LocLogicChId->HwInstId;
        LocHwCh    = LocLogicChId->HwChId;
    #ifdef MCAL_ENABLE_USER_MODE_SUPPORT
    #if (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
    #if (STD_ON == DMA_IP_REG_PROT_AVAILABLE)
    #if (STD_ON == DMA_IP_TCD_REG_PROT_AVAILABLE)
    #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        if(DMA_IP_HARDWARE_VERSION_2 == LocHwVers)
        {
            LocHwTcdChAddr = (uint32)(&DMA_IP_HWV2_TCD_CH_VALUE(LocHwInst,LocHwCh));
        }
    #endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
    #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        if(DMA_IP_HARDWARE_VERSION_3 == LocHwVers)
        {
            LocHwTcdChAddr = (uint32)(&DMA_IP_HWV3_TCD_CH_VALUE(LocHwInst,LocHwCh));
        }
    #endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        OsIf_Trusted_Call1param(Mcl_Dma_SetUserAccessAllowed, LocHwTcdChAddr);
    #endif /* DMA_IP_TCD_REG_PROT_AVAILABLE */
    #endif /* DMA_IP_REG_PROT_AVAILABLE */
    #endif /* (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE) */
    #endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        LocChState = Dma_Ip_GetHwChannelStatePointer(LocHwVers, LocHwInst, LocHwCh);
        /* 1. Initialize Channel State Strcuture */
        if(DMA_IP_CH_RESET_STATE != LocChState->StateValue)
        {
            LocStatus = DMA_IP_STATUS_WRONG_STATE;
        }
        else
        {
        #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
            if(DMA_IP_HARDWARE_VERSION_2 == LocHwVers)
            {
                pxTcd = &DMA_IP_HWV2_TCD_TCD_VALUE(LocHwInst, LocHwCh);
            }
        #endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
        #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
            if(DMA_IP_HARDWARE_VERSION_3 == LocHwVers)
            {
                pxTcd = &DMA_IP_HWV3_TCD_TCD_VALUE(LocHwInst, LocHwCh);
            }
        #endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
            LocChState->LogicChId = LocLogicChId;
            Dma_Ip_SetHwChannelState(LocHwVers, LocHwInst, LocHwCh, DMA_IP_CH_READY_EVENT);
            /* 2. Load Channel Configuration */
            if(NULL_PTR != Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]->pxTransferConfig)
            {
                /* Force Disable ScatterGather and Force Reset Address */
                HwAccDmaCh_SetControl_EnScatterGatherProcessing(LocHwVers, pxTcd, FALSE);
                HwAccDmaCh_SetControl_ScatterGatherAddress(LocHwVers, pxTcd, 0U);
                Dma_Ip_SetHwChannelState(LocHwVers, LocHwInst, LocHwCh, DMA_IP_CH_TRANSFER_EVENT);
                LocStatus = Static_Dma_Ip_SetLogicChannelTransferConfig(LocLogicChId->LogicChId, Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]->pxTransferConfig);
            }
            else if(NULL_PTR != Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]->ppxScatterGatherConfigArray)
            {
                /* Force Disable ScatterGather and Force Reset Address */
                HwAccDmaCh_SetControl_EnScatterGatherProcessing(LocHwVers, pxTcd, FALSE);
                HwAccDmaCh_SetControl_ScatterGatherAddress(LocHwVers, pxTcd, 0U);
                Dma_Ip_SetHwChannelState(LocHwVers, LocHwInst, LocHwCh, DMA_IP_CH_SCATTERGATHER_EVENT);
                LocStatus = Static_Dma_Ip_SetLogicChannelScatterGatherInit(LocLogicChId->LogicChId, 0U);
            }
            else
            {
                LocStatus = Static_Dma_Ip_SetLogicChannelTransferConfig(LocLogicChId->LogicChId, Dma_Ip_pxInit->pxLogicChannelResetConfig->pxTransferConfig);
            }
            if(DMA_IP_STATUS_SUCCESS == LocStatus)
            {
                if(NULL_PTR != Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]->pxGlobalConfig)
                {
                    LocStatus = Static_Dma_Ip_SetLogicChannelGlobalConfig(LocLogicChId->LogicChId, Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]->pxGlobalConfig, FALSE);
                }
                else
                {
                    LocStatus = Static_Dma_Ip_SetLogicChannelGlobalConfig(LocLogicChId->LogicChId, Dma_Ip_pxInit->pxLogicChannelResetConfig->pxGlobalConfig, TRUE);
                }
    #if (DMA_IP_DMACRC_IS_AVAILABLE == STD_ON)
                if(NULL_PTR != Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]->pxCrcConfig)
                {
                    LocHwCrcChId = (Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]->pxCrcConfig->HwCrcChId);
                    /* Enter exclusive area to protect DMA_CRC_CTL */
                    SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_03();
                    /* Set the DMA Hardware Channel ID into the DMA CRC Hardware Channel. */
                    HwAccDmaCh_SetCrc_InstanceChannelSelect(LocHwVers, LocHwInst, LocHwCrcChId, LocHwCh);
                    /* Exit exclusive area to protect DMA_CRC_CTL */
                    SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_03();
                    LocStatus = Static_Dma_Ip_SetLogicChannelCrcConfig(LocLogicChId->LogicChId, Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]->pxCrcConfig);
                }
                else
                {
                    /* Do nothing */
                }
    #endif
            }
        }
        if(DMA_IP_STATUS_SUCCESS != LocStatus)
        {
            Dma_Ip_SetHwChannelState(LocHwVers, LocHwInst, LocHwCh, DMA_IP_CH_ERROR_EVENT);
        }
#if (DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON)
    }
#endif /* DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON */

    return LocStatus;
}



Dma_Ip_ReturnType Dma_Ip_LogicChannelDeinit(const uint32 LogicCh)
{
    Dma_Ip_ReturnType LocStatus = DMA_IP_STATUS_SUCCESS;
    const Dma_Ip_LogicChannelIdType * LocLogicChId;
    Dma_Ip_HwChannelStateType * LocChState;
    uint32 LocHwVers;
    uint32 LocHwInst;
    uint32 LocHwCh;
#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
#if (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
#if (STD_ON == DMA_IP_REG_PROT_AVAILABLE)
#if (STD_ON == DMA_IP_TCD_REG_PROT_AVAILABLE)
    uint32 LocHwTcdChAddr;
#endif /* DMA_IP_TCD_REG_PROT_AVAILABLE */
#endif /* DMA_IP_REG_PROT_AVAILABLE */
#endif /* (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE) */
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */

    DMA_IP_DEV_ASSERT(NULL_PTR != Dma_Ip_pxInit);
    DMA_IP_DEV_ASSERT(NULL_PTR != Dma_Ip_pxInit->pxLogicChannelResetConfig);
    DMA_IP_DEV_ASSERT(NULL_PTR != Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]);
#if (DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON)
    LocStatus = Dma_Ip_ValidateMultiCoreInit();
    if(DMA_IP_STATUS_SUCCESS == LocStatus)
    {
#endif /* DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON */
        LocLogicChId = (const Dma_Ip_LogicChannelIdType *)&(Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]->LogicChId);
        LocHwVers  = LocLogicChId->HwVersId;
        LocHwInst  = LocLogicChId->HwInstId;
        LocHwCh    = LocLogicChId->HwChId;
    #ifdef MCAL_ENABLE_USER_MODE_SUPPORT
    #if (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
    #if (STD_ON == DMA_IP_REG_PROT_AVAILABLE)
    #if (STD_ON == DMA_IP_TCD_REG_PROT_AVAILABLE)
    #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        if(DMA_IP_HARDWARE_VERSION_2 == LocHwVers)
        {
            LocHwTcdChAddr = (uint32)(&DMA_IP_HWV2_TCD_CH_VALUE(LocHwInst,LocHwCh));
        }
    #endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
    #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        if(DMA_IP_HARDWARE_VERSION_3 == LocHwVers)
        {
            LocHwTcdChAddr = (uint32)(&DMA_IP_HWV3_TCD_CH_VALUE(LocHwInst,LocHwCh));
        }
    #endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        OsIf_Trusted_Call1param(Mcl_Dma_SetUserAccessAllowed, LocHwTcdChAddr);
    #endif /* DMA_IP_TCD_REG_PROT_AVAILABLE */
    #if (STD_ON == DMA_IP_MP_REG_PROT_AVAILABLE )
        OsIf_Trusted_Call1param(Mcl_Dma_SetUserAccessAllowed, (uint32)DMA_IP_CSR_BASE_ADDR(LocHwInst));
    #endif /* DMA_IP_MP_REG_PROT_AVAILABLE  */
    #endif /* DMA_IP_REG_PROT_AVAILABLE */
    #endif /* (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE) */
    #endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        /* Enter exclusive area */
        SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_04();
        /* Reset channel's state */
        Dma_Ip_SetHwChannelState(LocHwVers, LocHwInst, LocHwCh, DMA_IP_CH_RESET_EVENT);
        /* Deinitialize the channel */
        (void)Static_Dma_Ip_SetLogicChannelGlobalConfig(LogicCh, Dma_Ip_pxInit->pxLogicChannelResetConfig->pxGlobalConfig, TRUE);
        (void)Static_Dma_Ip_SetLogicChannelTransferConfig(LogicCh, Dma_Ip_pxInit->pxLogicChannelResetConfig->pxTransferConfig);
    #if (DMA_IP_DMACRC_IS_AVAILABLE == STD_ON)
        if(NULL_PTR != Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]->pxCrcConfig)
        {
            (void)Static_Dma_Ip_SetLogicChannelCrcConfig(LogicCh, Dma_Ip_pxInit->pxLogicChannelResetConfig->pxCrcConfig);
        }
        else
        {
            /* Do nothing */
        }
    #endif /* DMA_IP_DMACRC_IS_AVAILABLE == STD_ON */
        LocChState = Dma_Ip_GetHwChannelStatePointer(LocHwVers, LocHwInst, LocHwCh);
        LocChState->LogicChErrors = DMA_IP_CH_NO_HW_ERROR;
        HwAccDmaCh_SetCommand((uint32)DMA_IP_CH_CLEAR_ERROR, LocHwVers, LocHwInst, LocHwCh);
        /* Exit exclusive area */
        SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_04();
#if (DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON)
    }
#endif /* DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON */

    return LocStatus;
}



Dma_Ip_ReturnType Dma_Ip_SetLogicChannelCommand(const uint32 LogicCh, const Dma_Ip_LogicChannelCmdType Command)
{
    Dma_Ip_ReturnType LocStatus = DMA_IP_STATUS_SUCCESS;
    const Dma_Ip_LogicChannelIdType * LocLogicChId;
    Dma_Ip_HwChannelStateType * LocChState;
    uint8 LocHwVers;
    uint8 LocHwInst;
    uint8 LocHwCh;
#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
#if (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
#if (STD_ON == DMA_IP_REG_PROT_AVAILABLE)
#if (STD_ON == DMA_IP_TCD_REG_PROT_AVAILABLE)
    uint32 LocHwTcdChAddr;
#endif /* DMA_IP_TCD_REG_PROT_AVAILABLE */
#endif /* DMA_IP_REG_PROT_AVAILABLE */
#endif /* (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE) */
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */

    DMA_IP_DEV_ASSERT(NULL_PTR != Dma_Ip_pxInit);
    DMA_IP_DEV_ASSERT(NULL_PTR != Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]);
    DMA_IP_DEV_ASSERT(DMA_IP_NOF_CFG_LOGIC_CHANNELS > LogicCh);
    DMA_IP_DEV_ASSERT(DMA_IP_CH_CLEAR_ERROR >= Command);

#if (DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON)
    LocStatus = Dma_Ip_ValidateMultiCoreChannelCall(LogicCh);
    if(LocStatus == DMA_IP_STATUS_SUCCESS)
    {
#endif /* DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON */
        LocLogicChId = (const Dma_Ip_LogicChannelIdType *)&(Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]->LogicChId);
        LocHwVers = LocLogicChId->HwVersId;
        LocHwInst = LocLogicChId->HwInstId;
        LocHwCh   = LocLogicChId->HwChId;
    #ifdef MCAL_ENABLE_USER_MODE_SUPPORT
    #if (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
    #if (STD_ON == DMA_IP_REG_PROT_AVAILABLE)
    #if (STD_ON == DMA_IP_TCD_REG_PROT_AVAILABLE)
    #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        if(DMA_IP_HARDWARE_VERSION_2 == LocHwVers)
        {
            LocHwTcdChAddr = (uint32)(&DMA_IP_HWV2_TCD_CH_VALUE(LocHwInst,LocHwCh));
        }
    #endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
    #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        if(DMA_IP_HARDWARE_VERSION_3 == LocHwVers)
        {
            LocHwTcdChAddr = (uint32)(&DMA_IP_HWV3_TCD_CH_VALUE(LocHwInst,LocHwCh));
        }
    #endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        OsIf_Trusted_Call1param(Mcl_Dma_SetUserAccessAllowed, LocHwTcdChAddr);
    #endif /* DMA_IP_TCD_REG_PROT_AVAILABLE */
    #endif /* DMA_IP_REG_PROT_AVAILABLE */
    #endif /* (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE) */
    #endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        /* Enter exclusive area */
        SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_05();
        LocChState = Dma_Ip_GetHwChannelStatePointer(LocHwVers, LocHwInst, LocHwCh);
        if(DMA_IP_CH_CLEAR_ERROR == Command)
        {
            LocChState->LogicChErrors = DMA_IP_CH_NO_HW_ERROR;
            Dma_Ip_SetHwChannelState(LocHwVers, LocHwInst, LocHwCh, DMA_IP_CH_READY_EVENT);
            HwAccDmaCh_SetCommand((uint32)Command, LocHwVers, LocHwInst, LocHwCh);
        }
        else
        {
            Static_Dma_Ip_GetLogicChannelError(LocHwVers, LocHwInst, LocHwCh, &LocChState->LogicChErrors);
            if(DMA_IP_CH_NO_HW_ERROR != LocChState->LogicChErrors)
            {
                Dma_Ip_SetHwChannelState(LocHwVers, LocHwInst, LocHwCh, DMA_IP_CH_ERROR_EVENT);
                LocStatus = DMA_IP_STATUS_ERROR;
            }
            else
            {
                if((DMA_IP_CH_TRANSFER_STATE == LocChState->StateValue) ||
                   (DMA_IP_CH_SCATTERGATHER_STATE == LocChState->StateValue))
                {
                    HwAccDmaCh_SetCommand((uint32)Command, LocHwVers, LocHwInst, LocHwCh);
                }
                else
                {
                    LocStatus = DMA_IP_STATUS_WRONG_STATE;
                }
            }
        }
        /* Exit exclusive area */
        SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_05();
#if (DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON)
    }
#endif /* DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON */

    return LocStatus;
}



Dma_Ip_ReturnType Dma_Ip_GetLogicChannelStatus(const uint32 LogicCh, Dma_Ip_LogicChannelStatusType * const ChStatus)
{
    Dma_Ip_ReturnType LocStatus = DMA_IP_STATUS_SUCCESS;
    const Dma_Ip_LogicChannelIdType * LocLogicChId;
    Dma_Ip_HwChannelStateType * LocChState;
    uint8 LocHwVers;
    uint8 LocHwInst;
    uint8 LocHwCh;
#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
#if (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
#if (STD_ON == DMA_IP_REG_PROT_AVAILABLE)
#if (STD_ON == DMA_IP_TCD_REG_PROT_AVAILABLE)
    uint32 LocHwTcdChAddr;
#endif /* DMA_IP_TCD_REG_PROT_AVAILABLE */
#endif /* DMA_IP_REG_PROT_AVAILABLE */
#endif /* (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE) */
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */

    DMA_IP_DEV_ASSERT(NULL_PTR != Dma_Ip_pxInit);
    DMA_IP_DEV_ASSERT(NULL_PTR != Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]);
    DMA_IP_DEV_ASSERT(DMA_IP_NOF_CFG_LOGIC_CHANNELS > LogicCh);
    DMA_IP_DEV_ASSERT(NULL_PTR != ChStatus);

#if (DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON)
    LocStatus = Dma_Ip_ValidateMultiCoreChannelCall(LogicCh);
    if(LocStatus == DMA_IP_STATUS_SUCCESS)
    {
#endif /* DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON */
        LocLogicChId = (const Dma_Ip_LogicChannelIdType *)&(Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]->LogicChId);
        LocHwVers = LocLogicChId->HwVersId;
        LocHwInst = LocLogicChId->HwInstId;
        LocHwCh   = LocLogicChId->HwChId;
    #ifdef MCAL_ENABLE_USER_MODE_SUPPORT
    #if (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
    #if (STD_ON == DMA_IP_REG_PROT_AVAILABLE)
    #if (STD_ON == DMA_IP_TCD_REG_PROT_AVAILABLE)
    #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        if(DMA_IP_HARDWARE_VERSION_2 == LocHwVers)
        {
            LocHwTcdChAddr = (uint32)(&DMA_IP_HWV2_TCD_CH_VALUE(LocHwInst,LocHwCh));
        }
    #endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
    #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        if(DMA_IP_HARDWARE_VERSION_3 == LocHwVers)
        {
            LocHwTcdChAddr = (uint32)(&DMA_IP_HWV3_TCD_CH_VALUE(LocHwInst,LocHwCh));
        }
    #endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        OsIf_Trusted_Call1param(Mcl_Dma_SetUserAccessAllowed, LocHwTcdChAddr);
    #endif /* DMA_IP_TCD_REG_PROT_AVAILABLE */
    #endif /* DMA_IP_REG_PROT_AVAILABLE */
    #endif /* (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE) */
    #endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        /* Enter exclusive area */
        SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_06();
        LocChState = Dma_Ip_GetHwChannelStatePointer(LocHwVers, LocHwInst, LocHwCh);
        Static_Dma_Ip_GetLogicChannelError(LocHwVers, LocHwInst, LocHwCh, &LocChState->LogicChErrors);
        ChStatus->Errors = LocChState->LogicChErrors;
        /* Save last Active + Done flags and Channel State */
        HwAccDmaCh_GetStatus(LocHwVers, LocHwInst, LocHwCh, ChStatus);
        ChStatus->ChStateValue = Dma_Ip_GetHwChannelState(LocHwVers, LocHwInst, LocHwCh);
        /* Exit exclusive area */
        SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_06();
#if (DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON)
    }
#endif /* DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON */

    return LocStatus;
}



Dma_Ip_ReturnType Dma_Ip_SetLogicChannelGlobalList(const uint32 LogicCh, const Dma_Ip_LogicChannelGlobalListType List[], const uint32 ListDimension)
{
    Dma_Ip_ReturnType LocStatus = DMA_IP_STATUS_SUCCESS;
    const Dma_Ip_LogicChannelIdType * LocLogicChId;
    Dma_Ip_HwChannelStateType * LocChState;
    uint32 LocHwVers;
    uint32 LocHwInst;
    uint32 LocHwCh;

    DMA_IP_DEV_ASSERT(NULL_PTR != Dma_Ip_pxInit);
    DMA_IP_DEV_ASSERT(NULL_PTR != Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]);
    DMA_IP_DEV_ASSERT(DMA_IP_NOF_CFG_LOGIC_CHANNELS > LogicCh);
    DMA_IP_DEV_ASSERT((DMA_IP_CH_SET_DIS_PREEMPT_PRIORITY + 1U) > ListDimension);

#if (DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON)
    LocStatus = Dma_Ip_ValidateMultiCoreChannelCall(LogicCh);
    if(LocStatus == DMA_IP_STATUS_SUCCESS)
    {
#endif /* DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON */
        LocLogicChId = (const Dma_Ip_LogicChannelIdType *)&(Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]->LogicChId);
        LocHwVers = LocLogicChId->HwVersId;
        LocHwInst = LocLogicChId->HwInstId;
        LocHwCh   = LocLogicChId->HwChId;

        /* Enter exclusive area */
        SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_07();
        LocChState = Dma_Ip_GetHwChannelStatePointer(LocHwVers, LocHwInst, LocHwCh);
        Static_Dma_Ip_GetLogicChannelError(LocHwVers, LocHwInst, LocHwCh, &LocChState->LogicChErrors);
        if(DMA_IP_CH_NO_HW_ERROR != LocChState->LogicChErrors)
        {
            Dma_Ip_SetHwChannelState(LocHwVers, LocHwInst, LocHwCh, DMA_IP_CH_ERROR_EVENT);
            LocStatus = DMA_IP_STATUS_ERROR;
        }
        else
        {
            if((DMA_IP_CH_TRANSFER_STATE == LocChState->StateValue) ||
               (DMA_IP_CH_SCATTERGATHER_STATE == LocChState->StateValue) ||
               (DMA_IP_CH_READY_STATE == LocChState->StateValue))
            {
                Static_Dma_Ip_SetLogicChannelGlobalList(LocHwVers, LocHwInst, LocHwCh, List, ListDimension);
            }
            else
            {
                LocStatus = DMA_IP_STATUS_WRONG_STATE;
            }
        }
        /* Exit exclusive area */
        SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_07();
#if (DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON)
    }
#endif /* DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON */

    return LocStatus;
}

static void Static_Dma_Ip_SetLogicChannelGlobalList(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, const Dma_Ip_LogicChannelGlobalListType List[], const uint32 ListDimension)
{
    (void)LocHwVers;
    uint32 LocParamIdx;
#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
#if (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
#if (STD_ON == DMA_IP_REG_PROT_AVAILABLE)
#if (STD_ON == DMA_IP_DMAMUX_REG_PROT_AVAILABLE)
    uint32 LocDmaCh;
    uint32 LocDmaMuxInst;
    uint32 LocDmaMuxInstAddr;
#endif /* DMA_IP_DMAMUX_REG_PROT_AVAILABLE */
#if (STD_ON == DMA_IP_MP_REG_PROT_AVAILABLE )
    uint32 LocHwInstAddr;
#endif /* DMA_IP_MP_REG_PROT_AVAILABLE  */
#if (STD_ON == DMA_IP_TCD_REG_PROT_AVAILABLE)
    uint32 LocHwTcdChAddr;
#endif /* DMA_IP_TCD_REG_PROT_AVAILABLE */
#if (STD_ON == DMA_IP_TCD_REG_PROT_AVAILABLE)
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
    if(DMA_IP_HARDWARE_VERSION_2 == LocHwVers)
    {
        LocHwTcdChAddr = (uint32)(&DMA_IP_HWV2_TCD_CH_VALUE(LocHwInst,LocHwCh));
    }
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
    if(DMA_IP_HARDWARE_VERSION_3 == LocHwVers)
    {
        LocHwTcdChAddr = (uint32)(&DMA_IP_HWV3_TCD_CH_VALUE(LocHwInst,LocHwCh));
    }
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
    OsIf_Trusted_Call1param(Mcl_Dma_SetUserAccessAllowed, LocHwTcdChAddr);
#endif /* DMA_IP_TCD_REG_PROT_AVAILABLE */
#if (STD_ON == DMA_IP_DMAMUX_REG_PROT_AVAILABLE)
    LocDmaCh = ((LocHwInst * DMA_IP_TCD_NOF_HWV3_CH) + LocHwCh);
    LocDmaMuxInst = LocDmaCh / DMA_IP_DMAMUX_NOF_CHANNELS;
    LocDmaMuxInstAddr = (uint32)DMA_IP_DMAMUX_BASE_ADDR(LocDmaMuxInst);
    OsIf_Trusted_Call1param(Mcl_Dma_SetUserAccessAllowed, LocDmaMuxInstAddr);
#endif /* DMA_IP_DMAMUX_REG_PROT_AVAILABLE */
#if (STD_ON == DMA_IP_MP_REG_PROT_AVAILABLE)
    LocHwInstAddr = (uint32)DMA_IP_CSR_BASE_ADDR((uint32)LocHwInst);
    OsIf_Trusted_Call1param(Mcl_Dma_SetUserAccessAllowed, LocHwInstAddr);
#endif /* DMA_IP_MP_REG_PROT_AVAILABLE */
#endif /* DMA_IP_REG_PROT_AVAILABLE */
#endif /* (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE) */
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
    for(LocParamIdx = 0U; LocParamIdx < ListDimension; LocParamIdx++)
    {
        DMA_IP_DEV_ASSERT(DMA_IP_CH_SET_DIS_PREEMPT_PRIORITY >= List[LocParamIdx].Param);
        HwAccDmaCh_SetGlobalParam((uint32)List[LocParamIdx].Param, LocHwVers, LocHwInst, LocHwCh, List[LocParamIdx].Value);
    }
}



Dma_Ip_ReturnType Dma_Ip_SetLogicChannelTransferList(const uint32 LogicCh, const Dma_Ip_LogicChannelTransferListType List[], const uint32 ListDimension)
{
    Dma_Ip_ReturnType LocStatus = DMA_IP_STATUS_SUCCESS;
    const Dma_Ip_LogicChannelIdType * LocLogicChId;
    Dma_Ip_HwChannelStateType * LocChState;
    uint32 LocHwVers;
    uint32 LocHwInst;
    uint32 LocHwCh;
    Dma_Ip_TcdRegType * pxTcd = NULL_PTR;

    DMA_IP_DEV_ASSERT(NULL_PTR != Dma_Ip_pxInit);
    DMA_IP_DEV_ASSERT(NULL_PTR != Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]);
    DMA_IP_DEV_ASSERT(DMA_IP_NOF_CFG_LOGIC_CHANNELS > LogicCh);
    DMA_IP_DEV_ASSERT((DMA_IP_CH_SET_CONTROL_BANDWIDTH + 1U) > ListDimension);

#if (DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON)
    LocStatus = Dma_Ip_ValidateMultiCoreChannelCall(LogicCh);
    if(LocStatus == DMA_IP_STATUS_SUCCESS)
    {
#endif /* DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON */
        LocLogicChId = (const Dma_Ip_LogicChannelIdType *)&(Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]->LogicChId);
        LocHwVers = LocLogicChId->HwVersId;
        LocHwInst = LocLogicChId->HwInstId;
        LocHwCh = LocLogicChId->HwChId;

        /* Enter exclusive area to protect all TCDx_WORDs) */
        SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_08();
        LocChState = Dma_Ip_GetHwChannelStatePointer(LocHwVers, LocHwInst, LocHwCh);
        Static_Dma_Ip_GetLogicChannelError(LocHwVers, LocHwInst, LocHwCh, &LocChState->LogicChErrors);
        if(DMA_IP_CH_NO_HW_ERROR != LocChState->LogicChErrors)
        {
            Dma_Ip_SetHwChannelState(LocHwVers, LocHwInst, LocHwCh, DMA_IP_CH_ERROR_EVENT);
            LocStatus = DMA_IP_STATUS_ERROR;
        }
        else
        {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
            if(DMA_IP_HARDWARE_VERSION_2 == LocHwVers)
            {
                pxTcd = &DMA_IP_HWV2_TCD_TCD_VALUE(LocHwInst, LocHwCh);
            }
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
            if(DMA_IP_HARDWARE_VERSION_3 == LocHwVers)
            {
                pxTcd = &DMA_IP_HWV3_TCD_TCD_VALUE(LocHwInst, LocHwCh);
            }
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
            /* Done shall be cleared before a new transfer is configured. */
            HwAccDmaCh_SetCommand((uint32)DMA_IP_CH_CLEAR_DONE, LocHwVers, LocHwInst, LocHwCh);
            if(DMA_IP_CH_TRANSFER_STATE == LocChState->StateValue)
            {
                Static_Dma_Ip_SetLogicChannelTransferList(LogicCh, pxTcd, List, ListDimension);
            }
            else
            {
                /* Force Disable ScatterGather and Force Reset Address */
                HwAccDmaCh_SetControl_EnScatterGatherProcessing(LocHwVers, pxTcd, FALSE);
                HwAccDmaCh_SetControl_ScatterGatherAddress(LocHwVers, pxTcd, 0U);
                if(DMA_IP_CH_SCATTERGATHER_STATE == LocChState->StateValue)
                {
                    Dma_Ip_SetHwChannelState(LocHwVers, LocHwInst, LocHwCh, DMA_IP_CH_TRANSFER_EVENT);
                    Static_Dma_Ip_SetLogicChannelTransferList(LogicCh, pxTcd, List, ListDimension);
                }
                else if(DMA_IP_CH_READY_STATE == LocChState->StateValue)
                {
                    Dma_Ip_SetHwChannelState(LocHwVers, LocHwInst, LocHwCh, DMA_IP_CH_TRANSFER_EVENT);
                    Static_Dma_Ip_SetLogicChannelTransferList(LogicCh, pxTcd, List, ListDimension);
                }
                else
                {
                    LocStatus = DMA_IP_STATUS_WRONG_STATE;
                }
            }
        }
        /* Exit exclusive area to protect all TCDx_WORDs) */
        SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_08();
#if (DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON)
    }
#endif /* DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON */

    return LocStatus;
}

static void Static_Dma_Ip_SetLogicChannelTransferList(const uint32 LogicCh, Dma_Ip_TcdRegType * pxTcd, const Dma_Ip_LogicChannelTransferListType List[], const uint32 ListDimension)
{
    uint32 LocParamIdx;
    const Dma_Ip_LogicChannelIdType * LocLogicChId;
    uint32 LocHwVers;
#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
#if (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
#if (STD_ON == DMA_IP_REG_PROT_AVAILABLE)
#if (STD_ON == DMA_IP_TCD_REG_PROT_AVAILABLE)
    uint32 LocHwTcdChAddr;
    uint32 LocHwInst;
    uint32 LocHwCh;
#endif /* DMA_IP_TCD_REG_PROT_AVAILABLE */
#endif /* DMA_IP_REG_PROT_AVAILABLE */
#endif /* (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE) */
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */

    LocLogicChId = (const Dma_Ip_LogicChannelIdType *)&(Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]->LogicChId);
    LocHwVers = LocLogicChId->HwVersId;

#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
#if (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
#if (STD_ON == DMA_IP_REG_PROT_AVAILABLE)
#if (STD_ON == DMA_IP_TCD_REG_PROT_AVAILABLE)
    LocHwInst = LocLogicChId->HwInstId;
    LocHwCh = LocLogicChId->HwChId;
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
    if(DMA_IP_HARDWARE_VERSION_2 == LocHwVers)
    {
        LocHwTcdChAddr = (uint32)(&DMA_IP_HWV2_TCD_CH_VALUE(LocHwInst,LocHwCh));
    }
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
    if(DMA_IP_HARDWARE_VERSION_3 == LocHwVers)
    {
        LocHwTcdChAddr = (uint32)(&DMA_IP_HWV3_TCD_CH_VALUE(LocHwInst,LocHwCh));
    }
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */

    OsIf_Trusted_Call1param(Mcl_Dma_SetUserAccessAllowed, LocHwTcdChAddr);
#endif /* DMA_IP_TCD_REG_PROT_AVAILABLE */
#endif /* DMA_IP_REG_PROT_AVAILABLE */
#endif /* (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE) */
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
    for(LocParamIdx = 0U; LocParamIdx < ListDimension; LocParamIdx++)
    {
        DMA_IP_DEV_ASSERT(DMA_IP_CH_SET_CONTROL_BANDWIDTH >= List[LocParamIdx].Param);
        HwAccDmaCh_SetTransferParam((uint32)List[LocParamIdx].Param, LocHwVers, pxTcd, List[LocParamIdx].Value);
    }
}



Dma_Ip_ReturnType Dma_Ip_SetLogicChannelScatterGatherList(const uint32 LogicCh, const uint32 Element, const Dma_Ip_LogicChannelScatterGatherListType List[], const uint32 ListDimension)
{
    Dma_Ip_ReturnType LocStatus = DMA_IP_STATUS_SUCCESS;
    const Dma_Ip_LogicChannelIdType * LocLogicChId;
    Dma_Ip_HwChannelStateType * LocChState;
    uint32 LocHwVers;
    uint32 LocHwInst;
    uint32 LocHwCh;
    Dma_Ip_SwTcdRegType * pxSwTcd;

    DMA_IP_DEV_ASSERT(NULL_PTR != Dma_Ip_pxInit);
    DMA_IP_DEV_ASSERT(NULL_PTR != Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]);
    DMA_IP_DEV_ASSERT(DMA_IP_NOF_CFG_LOGIC_CHANNELS > LogicCh);
    DMA_IP_DEV_ASSERT((DMA_IP_CH_SET_CONTROL_BANDWIDTH + 1U) > ListDimension);

#if (DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON)
    LocStatus = Dma_Ip_ValidateMultiCoreChannelCall(LogicCh);
    if(LocStatus == DMA_IP_STATUS_SUCCESS)
    {
#endif /* DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON */
        LocLogicChId = (const Dma_Ip_LogicChannelIdType *)&(Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]->LogicChId);
        LocHwVers = LocLogicChId->HwVersId;
        LocHwInst = LocLogicChId->HwInstId;
        LocHwCh = LocLogicChId->HwChId;

        /* Enter exclusive area to protect all TCDx_WORDs) */
        SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_09();
        LocChState = Dma_Ip_GetHwChannelStatePointer(LocHwVers, LocHwInst, LocHwCh);
        Static_Dma_Ip_GetLogicChannelError(LocHwVers, LocHwInst, LocHwCh, &LocChState->LogicChErrors);
        if(DMA_IP_CH_NO_HW_ERROR != LocChState->LogicChErrors)
        {
            Dma_Ip_SetHwChannelState(LocHwVers, LocHwInst, LocHwCh, DMA_IP_CH_ERROR_EVENT);
            LocStatus = DMA_IP_STATUS_ERROR;
        }
        else
        {
            pxSwTcd = Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]->ppxScatterGatherConfigArray[Element]->Stcd;
            if(DMA_IP_CH_SCATTERGATHER_STATE == LocChState->StateValue)
            {
                Static_Dma_Ip_SetLogicChannelScatterGatherList(LogicCh, pxSwTcd, List, ListDimension);
            }
            else
            {
                if((DMA_IP_CH_TRANSFER_STATE == LocChState->StateValue) ||
                   (DMA_IP_CH_READY_STATE == LocChState->StateValue))
                {
                    Dma_Ip_SetHwChannelState(LocHwVers, LocHwInst, LocHwCh, DMA_IP_CH_SCATTERGATHER_EVENT);
                    Static_Dma_Ip_SetLogicChannelScatterGatherList(LogicCh, pxSwTcd, List, ListDimension);
                }
                else
                {
                    LocStatus = DMA_IP_STATUS_WRONG_STATE;
                }
            }
        }
        /* Exit exclusive area to protect all TCDx_WORDs) */
        SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_09();
#if (DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON)
    }
#endif /* DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON */

    return LocStatus;
}

static void Static_Dma_Ip_SetLogicChannelScatterGatherList(const uint32 LogicCh, Dma_Ip_SwTcdRegType * pxSwTcd, const Dma_Ip_LogicChannelScatterGatherListType List[], const uint32 ListDimension)
{
    uint32 LocParamIdx;
    const Dma_Ip_LogicChannelIdType * LocLogicChId;
    uint32 LocHwVers;
#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
#if (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
#if (STD_ON == DMA_IP_REG_PROT_AVAILABLE)
#if (STD_ON == DMA_IP_TCD_REG_PROT_AVAILABLE)
    uint32 LocHwTcdChAddr;
    uint32 LocHwInst;
    uint32 LocHwCh;
#endif /* DMA_IP_TCD_REG_PROT_AVAILABLE */
#endif /* DMA_IP_REG_PROT_AVAILABLE */
#endif /* (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE) */
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */

    LocLogicChId = (const Dma_Ip_LogicChannelIdType *)&(Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]->LogicChId);
    LocHwVers = LocLogicChId->HwVersId;

#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
#if (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
#if (STD_ON == DMA_IP_REG_PROT_AVAILABLE)
#if (STD_ON == DMA_IP_TCD_REG_PROT_AVAILABLE)
    LocHwInst = LocLogicChId->HwInstId;
    LocHwCh = LocLogicChId->HwChId;
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
    if(DMA_IP_HARDWARE_VERSION_2 == LocHwVers)DMA_IP_HWV2_TCD_CH_VALUE
    {
        LocHwTcdChAddr = (uint32)(&DMA_IP_HWV2_TCD_CH_VALUE(LocHwInst,LocHwCh));
    }
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
    if(DMA_IP_HARDWARE_VERSION_3 == LocHwVers)
    {
        LocHwTcdChAddr = (uint32)(&DMA_IP_HWV3_TCD_CH_VALUE(LocHwInst,LocHwCh));
    }
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
    OsIf_Trusted_Call1param(Mcl_Dma_SetUserAccessAllowed, LocHwTcdChAddr);
#endif /* DMA_IP_TCD_REG_PROT_AVAILABLE */
#endif /* DMA_IP_REG_PROT_AVAILABLE */
#endif /* (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE) */
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */

    for(LocParamIdx = 0U; LocParamIdx < ListDimension; LocParamIdx++)
    {
        DMA_IP_DEV_ASSERT(DMA_IP_CH_SET_CONTROL_BANDWIDTH >= List[LocParamIdx].Param);
        HwAccDmaCh_SetTransferParam((uint32)List[LocParamIdx].Param, LocHwVers, pxSwTcd, List[LocParamIdx].Value);
    }
}



#if (DMA_IP_DMACRC_IS_AVAILABLE == STD_ON)
Dma_Ip_ReturnType Dma_Ip_SetLogicChannelCrcList(const uint32 LogicCh, Dma_Ip_LogicChannelCrcListType List[], const uint32 ListDimension)
{
    Dma_Ip_ReturnType LocStatus = DMA_IP_STATUS_SUCCESS;
    const Dma_Ip_LogicChannelIdType * LocLogicChId;
    Dma_Ip_HwChannelStateType * LocChState;
    uint32 LocHwVers;
    uint32 LocHwInst;
    uint32 LocHwCh;

    DMA_IP_DEV_ASSERT(NULL_PTR != Dma_Ip_pxInit);
    DMA_IP_DEV_ASSERT(NULL_PTR != Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]);
    DMA_IP_DEV_ASSERT(DMA_IP_NOF_CFG_LOGIC_CHANNELS > LogicCh);
    DMA_IP_DEV_ASSERT(DMA_IP_CH_SET_CRC_EN_LOGIC >= ListDimension);

#if (DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON)
    LocStatus = Dma_Ip_ValidateMultiCoreChannelCall(LogicCh);
    if(LocStatus == DMA_IP_STATUS_SUCCESS)
    {
#endif /* DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON */
        LocLogicChId = (const Dma_Ip_LogicChannelIdType *)&(Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]->LogicChId);
        LocHwVers = LocLogicChId->HwVersId;
        LocHwInst = LocLogicChId->HwInstId;
        LocHwCh = LocLogicChId->HwChId;

        /* Enter exclusive area to protect DMA_CRC_CTL and DMA_CRC_ICRC */
        SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_10();
        LocChState = Dma_Ip_GetHwChannelStatePointer(LocHwVers, LocHwInst, LocHwCh);
        Static_Dma_Ip_GetLogicChannelError(LocHwVers, LocHwInst, LocHwCh, &LocChState->LogicChErrors);
        if(DMA_IP_CH_NO_HW_ERROR != LocChState->LogicChErrors)
        {
            Dma_Ip_SetHwChannelState(LocHwVers, LocHwInst, LocHwCh, DMA_IP_CH_ERROR_EVENT);
            LocStatus = DMA_IP_STATUS_ERROR;
        }
        else
        {
            if((DMA_IP_CH_TRANSFER_STATE == LocChState->StateValue) ||
               (DMA_IP_CH_SCATTERGATHER_STATE == LocChState->StateValue) ||
               (DMA_IP_CH_READY_STATE == LocChState->StateValue))
            {
                Static_Dma_Ip_SetLogicChannelCrcList(LocHwVers, LogicCh, List, ListDimension);
            }
            else
            {
                LocStatus = DMA_IP_STATUS_WRONG_STATE;
            }
        }
        /* Exit exclusive area to protect DMA_CRC_CTL and DMA_CRC_ICRC */
        SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_10();
#if (DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON)
    }
#endif /* DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON */

    return LocStatus;
}

static void Static_Dma_Ip_SetLogicChannelCrcList(const uint32 LocHwVers, const uint32 LogicCh, const Dma_Ip_LogicChannelCrcListType List[], const uint32 ListDimension)
{
    const Dma_Ip_LogicChannelIdType * LocLogicChId;
    uint32 LocParamIdx;
    uint8 LocHwCrcChId;
    uint32 LocHwInst;
#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
#if (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
#if (STD_ON == DMA_IP_REG_PROT_AVAILABLE)
#if (STD_ON == DMA_IP_TCD_REG_PROT_AVAILABLE)
    uint32 LocHwCh;
    uint32 LocHwTcdChAddr;
#endif /* DMA_IP_TCD_REG_PROT_AVAILABLE */
#endif /* DMA_IP_REG_PROT_AVAILABLE */
#endif /* (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE) */
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
    LocLogicChId = (const Dma_Ip_LogicChannelIdType *)&(Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]->LogicChId);
    LocHwInst = LocLogicChId->HwInstId;
#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
#if (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
#if (STD_ON == DMA_IP_REG_PROT_AVAILABLE)
#if (STD_ON == DMA_IP_TCD_REG_PROT_AVAILABLE)
    LocHwCh = LocLogicChId->HwChId;
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
    if(DMA_IP_HARDWARE_VERSION_2 == LocHwVers)
    {
        LocHwTcdChAddr = (uint32)(&DMA_IP_HWV2_TCD_CH_VALUE(LocHwInst,LocHwCh));
    }
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
    if(DMA_IP_HARDWARE_VERSION_3 == LocHwVers)
    {
        LocHwTcdChAddr = (uint32)(&DMA_IP_HWV3_TCD_CH_VALUE(LocHwInst,LocHwCh));
    }
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
    OsIf_Trusted_Call1param(Mcl_Dma_SetUserAccessAllowed, LocHwTcdChAddr);
#endif /* DMA_IP_TCD_REG_PROT_AVAILABLE */
#endif /* DMA_IP_REG_PROT_AVAILABLE */
#endif /* (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE) */
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
    LocHwCrcChId = (Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]->pxCrcConfig->HwCrcChId);
    for(LocParamIdx = 0U; LocParamIdx < ListDimension; LocParamIdx++)
    {
        DMA_IP_DEV_ASSERT(DMA_IP_CH_SET_CRC_EN_LOGIC >= List[LocParamIdx].Param);
        HwAccDmaCh_SetCrcParam(List[LocParamIdx].Param, LocHwVers, LocHwInst, LocHwCrcChId, List[LocParamIdx].Value);
    }
}
#endif /* DMA_IP_DMACRC_IS_AVAILABLE == STD_ON */



Dma_Ip_ReturnType Dma_Ip_GetLogicChannelParam(const uint32 LogicCh, const Dma_Ip_LogicChannelInfoParamType Param, uint32 * const Value)
{
    Dma_Ip_ReturnType LocStatus = DMA_IP_STATUS_SUCCESS;
    const Dma_Ip_LogicChannelIdType * LocLogicChId;
    uint32 LocHwVers;
    uint32 LocHwInst;
    uint32 LocHwCh;
#if (DMA_IP_DMACRC_IS_AVAILABLE == STD_ON)
    Dma_Ip_CrcConfigType * pxCrcConfig;
#endif
#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
#if (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
#if (STD_ON == DMA_IP_REG_PROT_AVAILABLE)
#if (STD_ON == DMA_IP_TCD_REG_PROT_AVAILABLE)
    uint32 LocHwTcdChAddr;
#endif /* DMA_IP_TCD_REG_PROT_AVAILABLE */
#endif /* DMA_IP_REG_PROT_AVAILABLE */
#endif /* (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE) */
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */

    DMA_IP_DEV_ASSERT(NULL_PTR != Dma_Ip_pxInit);
    DMA_IP_DEV_ASSERT(NULL_PTR != Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]);
    DMA_IP_DEV_ASSERT(DMA_IP_NOF_CFG_LOGIC_CHANNELS > LogicCh);
#if (DMA_IP_DMACRC_IS_AVAILABLE == STD_ON)
    DMA_IP_DEV_ASSERT(DMA_IP_CH_GET_FINAL_CRC >= Param);
#else
    DMA_IP_DEV_ASSERT(DMA_IP_CH_GET_HALF_MAJOR_INTERRUPT >= Param);
#endif

#if (DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON)
    LocStatus = Dma_Ip_ValidateMultiCoreChannelCall(LogicCh);
    if(LocStatus == DMA_IP_STATUS_SUCCESS)
    {
#endif /* DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON */
        LocLogicChId = (const Dma_Ip_LogicChannelIdType *)&(Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]->LogicChId);
    #if (DMA_IP_DMACRC_IS_AVAILABLE == STD_ON)
        pxCrcConfig = (Dma_Ip_CrcConfigType *)(Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]->pxCrcConfig);
    #endif
        LocHwVers = LocLogicChId->HwVersId;
        LocHwInst = LocLogicChId->HwInstId;
    #if (DMA_IP_DMACRC_IS_AVAILABLE == STD_ON)
        if(Param == DMA_IP_CH_GET_FINAL_CRC)
        {
            LocHwCh = pxCrcConfig->HwCrcChId;
        }
        else
        {
            LocHwCh = LocLogicChId->HwChId;
        }
    #else
        LocHwCh = LocLogicChId->HwChId;
    #endif
    #ifdef MCAL_ENABLE_USER_MODE_SUPPORT
    #if (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
    #if (STD_ON == DMA_IP_REG_PROT_AVAILABLE)
    #if (STD_ON == DMA_IP_TCD_REG_PROT_AVAILABLE)
    #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        if(DMA_IP_HARDWARE_VERSION_2 == LocHwVers)
        {
            LocHwTcdChAddr = (uint32)(&DMA_IP_HWV2_TCD_CH_VALUE(LocHwInst,LocHwCh));
        }
    #endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
    #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        if(DMA_IP_HARDWARE_VERSION_3 == LocHwVers)
        {
            LocHwTcdChAddr = (uint32)(&DMA_IP_HWV3_TCD_CH_VALUE(LocHwInst,LocHwCh));
        }
    #endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        OsIf_Trusted_Call1param(Mcl_Dma_SetUserAccessAllowed, LocHwTcdChAddr);
    #endif /* DMA_IP_TCD_REG_PROT_AVAILABLE */
    #endif /* DMA_IP_REG_PROT_AVAILABLE */
    #endif /* (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE) */
    #endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
        HwAccDmaCh_GetParam((uint32)Param, LocHwVers, LocHwInst, LocHwCh, Value);
#if (DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON)
    }
#endif /* DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON */

    return LocStatus;
}



Dma_Ip_ReturnType Dma_Ip_SetLogicChannelScatterGatherConfig(const uint32 LogicCh, const uint32 Element)
{
    Dma_Ip_ReturnType LocStatus = DMA_IP_STATUS_SUCCESS;
    const Dma_Ip_LogicChannelIdType * LocLogicChId;
    const Dma_Ip_ScatterGatherConfigType * LocScatterGather;
    Dma_Ip_HwChannelStateType * LocChState;
    uint32 LocHwVers;
    uint32 LocHwInst;
    uint32 LocHwCh;
#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
#if (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
#if (STD_ON == DMA_IP_REG_PROT_AVAILABLE)
#if (STD_ON == DMA_IP_TCD_REG_PROT_AVAILABLE)
    uint32 LocHwTcdChAddr;
#endif /* DMA_IP_TCD_REG_PROT_AVAILABLE */
#endif /* DMA_IP_REG_PROT_AVAILABLE */
#endif /* (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE) */
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */

    DMA_IP_DEV_ASSERT(NULL_PTR != Dma_Ip_pxInit);
    DMA_IP_DEV_ASSERT(NULL_PTR != Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]);
    DMA_IP_DEV_ASSERT(NULL_PTR != Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]->ppxScatterGatherConfigArray[Element]);

#if (DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON)
    LocStatus = Dma_Ip_ValidateMultiCoreChannelCall(LogicCh);
    if(LocStatus == DMA_IP_STATUS_SUCCESS)
    {
#endif /* DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON */
        LocLogicChId = (const Dma_Ip_LogicChannelIdType *)&(Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]->LogicChId);
        LocScatterGather = Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]->ppxScatterGatherConfigArray[Element];
        LocHwVers = LocLogicChId->HwVersId;
        LocHwInst = LocLogicChId->HwInstId;
        LocHwCh = LocLogicChId->HwChId;
    #ifdef MCAL_ENABLE_USER_MODE_SUPPORT
    #if (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
    #if (STD_ON == DMA_IP_REG_PROT_AVAILABLE)
    #if (STD_ON == DMA_IP_TCD_REG_PROT_AVAILABLE)
    #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        if(DMA_IP_HARDWARE_VERSION_2 == LocHwVers)
        {
            LocHwTcdChAddr = (uint32)(&DMA_IP_HWV2_TCD_CH_VALUE(LocHwInst,LocHwCh));
        }
    #endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
    #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        if(DMA_IP_HARDWARE_VERSION_3 == LocHwVers)
        {
            LocHwTcdChAddr = (uint32)(&DMA_IP_HWV3_TCD_CH_VALUE(LocHwInst,LocHwCh));
        }
    #endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        OsIf_Trusted_Call1param(Mcl_Dma_SetUserAccessAllowed, LocHwTcdChAddr);
    #endif /* DMA_IP_TCD_REG_PROT_AVAILABLE */
    #endif /* DMA_IP_REG_PROT_AVAILABLE */
    #endif /* (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE) */
    #endif /* MCAL_ENABLE_USER_MODE_SUPPORT */

        /* Enter exclusive area */
        SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_11();
        LocChState = Dma_Ip_GetHwChannelStatePointer(LocHwVers, LocHwInst, LocHwCh);
        Static_Dma_Ip_GetLogicChannelError(LocHwVers, LocHwInst, LocHwCh, &LocChState->LogicChErrors);
        if(DMA_IP_CH_NO_HW_ERROR != LocChState->LogicChErrors)
        {
            Dma_Ip_SetHwChannelState(LocHwVers, LocHwInst, LocHwCh, DMA_IP_CH_ERROR_EVENT);
            LocStatus = DMA_IP_STATUS_ERROR;
        }
        else
        {
            if(DMA_IP_CH_SCATTERGATHER_STATE == LocChState->StateValue)
            {
                /* STEP0: Load the Software TCD into the hardware TCD just for the first configuration of the Scatter/Gather configuration list.
                   If the Enable Request bit or Enable Start bit is set, then the channel is running. */
                HwAccDmaCh_LoadSoftwareTcdIntoHardwareTcd(LocLogicChId, LocScatterGather);
            }
            else
            {
                if((DMA_IP_CH_TRANSFER_STATE == LocChState->StateValue) ||
                   (DMA_IP_CH_READY_STATE == LocChState->StateValue))
                {
                    Dma_Ip_SetHwChannelState(LocHwVers, LocHwInst, LocHwCh, DMA_IP_CH_SCATTERGATHER_EVENT);
                    /* STEP0: Load the Software TCD into the hardware TCD just for the first configuration of the Scatter/Gather configuration list.
                       If the Enable Request bit or Enable Start bit is set, then the channel is running. */
                    HwAccDmaCh_LoadSoftwareTcdIntoHardwareTcd(LocLogicChId, LocScatterGather);
                }
                else
                {
                    LocStatus = DMA_IP_STATUS_WRONG_STATE;
                }
            }
        }
        /* Exit exclusive area */
        SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_11();
#if (DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON)
    }
#endif /* DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON */

    return LocStatus;
}

static Dma_Ip_ReturnType Static_Dma_Ip_SetLogicChannelScatterGatherInit(const uint32 LogicCh, const uint32 Element)
{
    Dma_Ip_ReturnType LocStatus = DMA_IP_STATUS_SUCCESS;
    const Dma_Ip_LogicChannelIdType * LocLogicChId;
    Dma_Ip_ScatterGatherConfigType * LocScatterGather;
    Dma_Ip_ScatterGatherConfigType * LocCurrentConfig;
    Dma_Ip_HwChannelStateType * LocChState;
    uint32 LocHwVers;
    uint32 LocHwInst;
    uint32 LocHwCh;
    uint32 LocLoopCheck;
    uint32 LocElement;
#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
#if (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
#if (STD_ON == DMA_IP_REG_PROT_AVAILABLE)
#if (STD_ON == DMA_IP_TCD_REG_PROT_AVAILABLE)
    uint32 LocHwTcdChAddr;
#endif /* DMA_IP_TCD_REG_PROT_AVAILABLE */
#endif /* DMA_IP_REG_PROT_AVAILABLE */
#endif /* (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE) */
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */

    DMA_IP_DEV_ASSERT(NULL_PTR != Dma_Ip_pxInit);
    DMA_IP_DEV_ASSERT(NULL_PTR != Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]);
    DMA_IP_DEV_ASSERT(NULL_PTR != Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]->ppxScatterGatherConfigArray[Element]);

    LocLogicChId = (const Dma_Ip_LogicChannelIdType *)&(Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]->LogicChId);
    LocScatterGather = Dma_Ip_pxInit->ppxLogicChannelConfigArray[LogicCh]->ppxScatterGatherConfigArray[Element];
    LocHwVers = LocLogicChId->HwVersId;
    LocHwInst = LocLogicChId->HwInstId;
    LocHwCh = LocLogicChId->HwChId;
    LocLoopCheck = 0U;
    LocElement = Element;
#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
#if (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
#if (STD_ON == DMA_IP_REG_PROT_AVAILABLE)
#if (STD_ON == DMA_IP_TCD_REG_PROT_AVAILABLE)
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
    if(DMA_IP_HARDWARE_VERSION_2 == LocHwVers)
    {
        LocHwTcdChAddr = (uint32)(&DMA_IP_HWV2_TCD_CH_VALUE(LocHwInst,LocHwCh));
    }
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
    if(DMA_IP_HARDWARE_VERSION_3 == LocHwVers)
    {
        LocHwTcdChAddr = (uint32)(&DMA_IP_HWV3_TCD_CH_VALUE(LocHwInst,LocHwCh));
    }
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
    OsIf_Trusted_Call1param(Mcl_Dma_SetUserAccessAllowed, LocHwTcdChAddr);
#endif /* DMA_IP_TCD_REG_PROT_AVAILABLE */
#endif /* DMA_IP_REG_PROT_AVAILABLE */
#endif /* (STD_ON == DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE) */
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
    /* Enter exclusive area to protect all TCDx_WORDs */
    SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_12();
    LocChState = Dma_Ip_GetHwChannelStatePointer(LocHwVers, LocHwInst, LocHwCh);
    Static_Dma_Ip_GetLogicChannelError(LocHwVers, LocHwInst, LocHwCh, &LocChState->LogicChErrors);

    if(DMA_IP_CH_SCATTERGATHER_STATE == LocChState->StateValue)
    {
        /* STEP1: Reset the loaded status. */
        LocCurrentConfig = LocScatterGather;
        while((NULL_PTR != LocCurrentConfig) && (FALSE != LocCurrentConfig->Loaded))
        {
            LocCurrentConfig->Loaded = FALSE;
            LocCurrentConfig = LocCurrentConfig->NextConfig;
        };
        /* STEP2: Load all Software TCDs with the equivalent configurations till next configuration is NULL_PTR or the configuration was loaded.
           If Cache is enabled: Clean & Invalidate each Software TCD */
        LocCurrentConfig = LocScatterGather;
        while((NULL_PTR != LocCurrentConfig) && (FALSE == LocCurrentConfig->Loaded))
        {
            LocCurrentConfig->Loaded = TRUE;
            if(NULL_PTR == LocCurrentConfig->NextConfig)
            {
                HwAccDmaCh_LoadConfigIntoSoftwareTcd(LocHwVers, LocCurrentConfig, LocElement, FALSE);
            }
            else
            {
                HwAccDmaCh_LoadConfigIntoSoftwareTcd(LocHwVers, LocCurrentConfig, LocElement, TRUE);
            }
            LocCurrentConfig = LocCurrentConfig->NextConfig;
            LocLoopCheck++;
            if(256U <= LocLoopCheck)
            {
                LocStatus = DMA_IP_STATUS_WRONG_CONFIG;
                break;
            }
            /* Element Index loaded into MajorLoopLinkChannel for TCD ID */
            LocElement++;
        };
        /* STEP3: Load the Software TCD into the hardware TCD just for the first configuration of the Scatter/Gather configuration list.
           If the Enable Request bit or Enable Start bit is set, then the channel is running. */
        HwAccDmaCh_LoadSoftwareTcdIntoHardwareTcd(LocLogicChId, LocScatterGather);
    }
    else
    {
        /* Do nothing */
    }

    /* Exit exclusive area to protect all TCDx_WORDs */
    SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_12();

    return LocStatus;
}

#define MCL_STOP_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

/*==================================================================================================
 *                                   IRQ HANDLER FUNCTIONS
==================================================================================================*/
#define MCL_START_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

void Dma_Ip_IntIrqHandler(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh)
{
    const Dma_Ip_HwChannelStateType * LocChState;

    /* Get the hardware channel state pointer */
    LocChState = Dma_Ip_GetHwChannelStatePointer(LocHwVers, LocHwInst, LocHwCh);
    if(NULL_PTR != LocChState)
    {
        if(NULL_PTR != LocChState->LogicChId->IntCallback)
        {
            LocChState->LogicChId->IntCallback();
        }
    }
}

void Dma_Ip_ErrorIrqHandler(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh)
{
    Dma_Ip_HwChannelStateType * LocChState;

    /* Get the hardware channel state pointer */
    LocChState = Dma_Ip_GetHwChannelStatePointer(LocHwVers, LocHwInst, LocHwCh);
    if(NULL_PTR != LocChState)
    {
        Static_Dma_Ip_GetLogicChannelError(LocHwVers, LocHwInst, LocHwCh, &LocChState->LogicChErrors);
        if(DMA_IP_CH_NO_HW_ERROR != LocChState->LogicChErrors)
        {
            Dma_Ip_SetHwChannelState(LocHwVers, LocHwInst, LocHwCh, DMA_IP_CH_ERROR_EVENT);
        }
        if(NULL_PTR != LocChState->LogicChId->ErrIntCallback)
        {
            LocChState->LogicChId->ErrIntCallback();
        }
    }
}

#define MCL_STOP_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

/*==================================================================================================
 *                                      GET FUNCTIONS
==================================================================================================*/
#define MCL_START_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

static void Static_Dma_Ip_GetLogicChannelError(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, uint32 * LocLogicChErrors)
{
    uint32 LocError = 0U;

    HwAccDmaCh_GetStatus_Error(LocHwVers, LocHwInst, LocHwCh, &LocError);
    /* Save all errors till the user calls the clear error command */
    *LocLogicChErrors |= LocError;
}

#if ((DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON) || (DMA_IP_VIRTUAL_ADDRESS_MAPPING_IS_AVAILABLE == STD_ON))
const Dma_Ip_InitType * Dma_Ip_GetInitPtr(void)
{
    DMA_IP_DEV_ASSERT(NULL_PTR != Dma_Ip_pxInit);

    /* Get the initial pointer */
    return Dma_Ip_pxInit;
}
#endif /* DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON || DMA_IP_VIRTUAL_ADDRESS_MAPPING_IS_AVAILABLE == STD_ON */

#define MCL_STOP_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

#endif /* #if (DMA_IP_IS_AVAILABLE == STD_ON) */

/** @} */

/*==================================================================================================
 *                                        END OF FILE
==================================================================================================*/
