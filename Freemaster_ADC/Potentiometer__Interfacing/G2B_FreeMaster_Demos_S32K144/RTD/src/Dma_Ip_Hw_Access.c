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
*   @file    Dma_Ip_Hw_Access.c
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

#if (DMA_IP_IS_AVAILABLE == STD_ON)

#if (DMA_IP_HWV2_IS_AVAILABLE == STD_ON)
#include "Dma_Ip_Hwv2_AccessInline.h"
#endif /* #if (DMA_IP_HWV2_IS_AVAILABLE == STD_ON) */

#if (DMA_IP_HWV3_IS_AVAILABLE == STD_ON)
#include "Dma_Ip_Hwv3_AccessInline.h"
#endif /* #if (DMA_IP_HWV3_IS_AVAILABLE == STD_ON) */
/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define DMA_IP_HW_ACCESS_VENDOR_ID_C                       43
#define DMA_IP_HW_ACCESS_AR_RELEASE_MAJOR_VERSION_C        4
#define DMA_IP_HW_ACCESS_AR_RELEASE_MINOR_VERSION_C        4
#define DMA_IP_HW_ACCESS_AR_RELEASE_REVISION_VERSION_C     0
#define DMA_IP_HW_ACCESS_SW_MAJOR_VERSION_C                1
#define DMA_IP_HW_ACCESS_SW_MINOR_VERSION_C                0
#define DMA_IP_HW_ACCESS_SW_PATCH_VERSION_C                0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if Dma_Ip_Hw_Access.c file and Dma_Ip_Hw_Access.h file are of the same vendor */
#if (DMA_IP_HW_ACCESS_VENDOR_ID_C != DMA_IP_HW_ACCESS_VENDOR_ID_H)
    #error "Dma_Ip_Hw_Access.c and Dma_Ip_Hw_Access.h have different vendor ids"
#endif

/* Check if Dma_Ip_Hw_Access.c file and Dma_Ip_Hw_Access.h file are of the same Autosar version */
#if ((DMA_IP_HW_ACCESS_AR_RELEASE_MAJOR_VERSION_C != DMA_IP_HW_ACCESS_AR_RELEASE_MAJOR_VERSION_H) || \
     (DMA_IP_HW_ACCESS_AR_RELEASE_MINOR_VERSION_C != DMA_IP_HW_ACCESS_AR_RELEASE_MINOR_VERSION_H) || \
     (DMA_IP_HW_ACCESS_AR_RELEASE_REVISION_VERSION_C != DMA_IP_HW_ACCESS_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Dma_Ip_Hw_Access.c and Dma_Ip_Hw_Access.h are different"
#endif

/* Check if Dma_Ip_Hw_Access.c file and Dma_Ip_Hw_Access.h file are of the same Software version */
#if ((DMA_IP_HW_ACCESS_SW_MAJOR_VERSION_C != DMA_IP_HW_ACCESS_SW_MAJOR_VERSION_H) || \
     (DMA_IP_HW_ACCESS_SW_MINOR_VERSION_C != DMA_IP_HW_ACCESS_SW_MINOR_VERSION_H) || \
     (DMA_IP_HW_ACCESS_SW_PATCH_VERSION_C != DMA_IP_HW_ACCESS_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Dma_Ip_Hw_Access.c and Dma_Ip_Hw_Access.h are different"
#endif

#if (DMA_IP_HWV2_IS_AVAILABLE == STD_ON)
/* Check if Dma_Ip_Hw_Access.c file and Dma_Ip_Hwv2_AccessInline.h file are of the same vendor */
#if (DMA_IP_HW_ACCESS_VENDOR_ID_C != DMA_IP_HWV2_ACCESSINLINE_VENDOR_ID_H)
    #error "Dma_Ip_Hw_Access.c and Dma_Ip_Hw_AccessInline.h have different vendor ids"
#endif

/* Check if Dma_Ip_Hw_Access.c file and Dma_Ip_Hwv2_AccessInline.h file are of the same Autosar version */
#if ((DMA_IP_HW_ACCESS_AR_RELEASE_MAJOR_VERSION_C != DMA_IP_HWV2_ACCESSINLINE_AR_RELEASE_MAJOR_VERSION_H) || \
     (DMA_IP_HW_ACCESS_AR_RELEASE_MINOR_VERSION_C != DMA_IP_HWV2_ACCESSINLINE_AR_RELEASE_MINOR_VERSION_H) || \
     (DMA_IP_HW_ACCESS_AR_RELEASE_REVISION_VERSION_C != DMA_IP_HWV2_ACCESSINLINE_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Dma_Ip_Hw_Access.c and Dma_Ip_Hwv2_AccessInline.h are different"
#endif

/* Check if Dma_Ip_Hw_Access.c file and Dma_Ip_Hwv2_AccessInline.h file are of the same Software version */
#if ((DMA_IP_HW_ACCESS_SW_MAJOR_VERSION_C != DMA_IP_HWV2_ACCESSINLINE_SW_MAJOR_VERSION_H) || \
     (DMA_IP_HW_ACCESS_SW_MINOR_VERSION_C != DMA_IP_HWV2_ACCESSINLINE_SW_MINOR_VERSION_H) || \
     (DMA_IP_HW_ACCESS_SW_PATCH_VERSION_C != DMA_IP_HWV2_ACCESSINLINE_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Dma_Ip_Hw_Access.c and Dma_Ip_Hwv2_AccessInline.h are different"
#endif
#endif /* #if (DMA_IP_HWV2_IS_AVAILABLE == STD_ON) */

#if (DMA_IP_HWV3_IS_AVAILABLE == STD_ON)
/* Check if Dma_Ip_Hw_Access.c file and Dma_Ip_Hwv3_AccessInline.h file are of the same vendor */
#if (DMA_IP_HW_ACCESS_VENDOR_ID_C != DMA_IP_HWV3_ACCESSINLINE_VENDOR_ID_H)
    #error "Dma_Ip_Hw_Access.c and Dma_Ip_Hw_AccessInline.h have different vendor ids"
#endif

/* Check if Dma_Ip_Hw_Access.c file and Dma_Ip_Hwv3_AccessInline.h file are of the same Autosar version */
#if ((DMA_IP_HW_ACCESS_AR_RELEASE_MAJOR_VERSION_C != DMA_IP_HWV3_ACCESSINLINE_AR_RELEASE_MAJOR_VERSION_H) || \
     (DMA_IP_HW_ACCESS_AR_RELEASE_MINOR_VERSION_C != DMA_IP_HWV3_ACCESSINLINE_AR_RELEASE_MINOR_VERSION_H) || \
     (DMA_IP_HW_ACCESS_AR_RELEASE_REVISION_VERSION_C != DMA_IP_HWV3_ACCESSINLINE_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Dma_Ip_Hw_Access.c and Dma_Ip_Hwv3_AccessInline.h are different"
#endif

/* Check if Dma_Ip_Hw_Access.c file and Dma_Ip_Hwv3_AccessInline.h file are of the same Software version */
#if ((DMA_IP_HW_ACCESS_SW_MAJOR_VERSION_C != DMA_IP_HWV3_ACCESSINLINE_SW_MAJOR_VERSION_H) || \
     (DMA_IP_HW_ACCESS_SW_MINOR_VERSION_C != DMA_IP_HWV3_ACCESSINLINE_SW_MINOR_VERSION_H) || \
     (DMA_IP_HW_ACCESS_SW_PATCH_VERSION_C != DMA_IP_HWV3_ACCESSINLINE_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Dma_Ip_Hw_Access.c and Dma_Ip_Hwv3_AccessInline.h are different"
#endif
#endif /* #if (DMA_IP_HWV3_IS_AVAILABLE == STD_ON) */

/*==================================================================================================
 *                                       FUNCTION PROTOYPES
==================================================================================================*/
#define MCL_START_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

#if ((DMA_IP_MASTER_ID_REPLICATION_IS_AVAILABLE == STD_OFF) || \
     (DMA_IP_BUFFERED_WRITES_IS_AVAILABLE == STD_OFF) || \
     (DMA_IP_PREEMPTION_IS_AVAILABLE == STD_OFF) || \
     (DMA_IP_DISABLE_PREEMPT_IS_AVAILABLE == STD_OFF))
void HwAccDmaCh_SetGlobalDummyFunction(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, const uint32 LocValue);
#endif
#if ((DMA_IP_STORE_DST_ADDR_IS_AVAILABLE == STD_OFF) || (DMA_IP_END_OF_PACKET_SIGNAL_IS_AVAILABLE == STD_OFF))
void HwAccDmaCh_SetTransferDummyFunction(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue);
#endif
#if ((DMA_IP_STORE_DST_ADDR_IS_AVAILABLE == STD_OFF) || \
     (DMA_IP_MASTER_ID_REPLICATION_IS_AVAILABLE == STD_OFF) || \
     (DMA_IP_DMACRC_IS_AVAILABLE == STD_OFF))
void HwAccDmaCh_GetParamDummyFunction(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, uint32 * const retValue);
#endif

void hwAccDmaInst_CmdCancelTransfer(const Dma_Ip_LogicInstanceIdType * const pxLocLogicInst);
void hwAccDmaInst_CmdCancelTransferWithError(const Dma_Ip_LogicInstanceIdType * const pxLocLogicInst);
void hwAccDmaInst_CmdHalt(const Dma_Ip_LogicInstanceIdType * const pxLocLogicInst);
void hwAccDmaInst_CmdResume(const Dma_Ip_LogicInstanceIdType * const pxLocLogicInst);

void HwAccDmaCh_CmdSetHwRequest(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh);
void HwAccDmaCh_CmdClearHwRequest(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh);
void HwAccDmaCh_CmdSetSwRequest(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh);
void HwAccDmaCh_CmdClearDone(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh);
void HwAccDmaCh_CmdClearError(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh);

#if (DMA_IP_MASTER_ID_REPLICATION_IS_AVAILABLE == STD_ON)
void HwAccDmaCh_SetControl_EnMasterIdReplication(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, const uint32 LocValue);
#endif /* DMA_IP_MASTER_ID_REPLICATION_IS_AVAILABLE == STD_ON */
#if (DMA_IP_BUFFERED_WRITES_IS_AVAILABLE == STD_ON)
void HwAccDmaCh_SetControl_EnBufferedWrites(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, const uint32 LocValue);
#endif /* DMA_IP_BUFFERED_WRITES_IS_AVAILABLE == STD_ON */
void HwAccDmaCh_SetRequest_EnMuxSource(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, const uint32 LocValue);
void HwAccDmaCh_SetRequest_MuxSource(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, const uint32 LocValue);
void HwAccDmaCh_SetRequest_EnMuxTrigger(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, const uint32 LocValue);
void HwAccDmaCh_SetRequest_EnRequest(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, const uint32 LocValue);
void HwAccDmaCh_SetInterrupt_EnError(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, const uint32 LocValue);
#if (DMA_IP_GROUP_PRIORITY_IS_AVAILABLE == STD_ON)
void HwAccDmaCh_SetPriority_Group(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, const uint32 LocValue);
#endif /* DMA_IP_GROUP_PRIORITY_IS_AVAILABLE == STD_ON */
void HwAccDmaCh_SetPriority_Level(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, const uint32 LocValue);
void HwAccDmaCh_SetPriority_EnPreemption(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, const uint32 LocValue);
void HwAccDmaCh_SetPriority_DisPreempt(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, const uint32 LocValue);

void HwAccDmaCh_SetSource_Address(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue);
void HwAccDmaCh_SetSource_SignedOffset(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue);
void HwAccDmaCh_SetSource_LastAddrAdj(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue);
void HwAccDmaCh_SetSource_TransferSize(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue);
void HwAccDmaCh_SetSource_Modulo(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue);
void HwAccDmaCh_SetDestination_Address(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue);
void HwAccDmaCh_SetDestination_SignedOffset(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue);
void HwAccDmaCh_SetDestination_LastAddrAdj(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue);
void HwAccDmaCh_SetDestination_TransferSize(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue);
void HwAccDmaCh_SetDestination_Modulo(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue);
void HwAccDmaCh_SetMinorLoop_enSrcOffset(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue);
void HwAccDmaCh_SetMinorLoop_enDstOffset(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue);
void HwAccDmaCh_SetMinorLoop_Offset(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue);
void HwAccDmaCh_SetMinorLoop_EnLink(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue);
void HwAccDmaCh_SetMinorLoop_LogicLinkCh(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue);
void HwAccDmaCh_SetMinorLoop_Size(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue);
void HwAccDmaCh_SetMajorLoop_EnLink(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue);
void HwAccDmaCh_SetMajorLoop_LogicLinkCh(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue);
void HwAccDmaCh_SetMajorLoop_Count(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue);
#if (DMA_IP_STORE_DST_ADDR_IS_AVAILABLE == STD_ON)
void HwAccDmaCh_SetControl_StoreDestinationAddress(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue);
#endif
void HwAccDmaCh_SetControl_EnStart(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue);
void HwAccDmaCh_SetControl_EnMajor(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue);
void HwAccDmaCh_SetControl_EnHalfMajor(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue);
void HwAccDmaCh_SetControl_DisAutoHwRequest(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue);
#if (DMA_IP_END_OF_PACKET_SIGNAL_IS_AVAILABLE == STD_ON)
void HwAccDmaCh_SetControl_EnEndOfPacketSignal(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue);
#endif
void HwAccDmaCh_SetControl_BandwidthControl(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue);

#if (DMA_IP_DMACRC_IS_AVAILABLE == STD_ON)
void HwAccDmaCh_SetCrc_ModeSelect(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, const uint32 LocValue);
void HwAccDmaCh_SetCrc_PolynomialSelect(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, const uint32 LocValue);
void HwAccDmaCh_SetCrc_EnableInitialValue(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, const uint32 LocValue);
void HwAccDmaCh_SetCrc_InitialValue(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, const uint32 LocValue);
void HwAccDmaCh_SetCrc_EnableLogic(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, const uint32 LocValue);
void HwAccDmaCh_GetFinalCrc(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, uint32 * const retValue);
#endif

void HwAccDmaCh_GetSourceAddress(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, uint32 * const retValue);
void HwAccDmaCh_GetDestinationAddress(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, uint32 * const retValue);
void HwAccDmaCh_GetBeginIterCount(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, uint32 * const retValue);
void HwAccDmaCh_GetCurrentIterCount(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, uint32 * const retValue);
#if (DMA_IP_STORE_DST_ADDR_IS_AVAILABLE == STD_ON)
void HwAccDmaCh_GetStoreDstAddress(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, uint32 * const retValue);
#endif /* DMA_IP_STORE_DST_ADDR_IS_AVAILABLE == STD_ON */
#if (DMA_IP_MASTER_ID_REPLICATION_IS_AVAILABLE == STD_ON)
void HwAccDmaCh_GetMasterId(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, uint32 * const retValue);
#endif /* DMA_IP_MASTER_ID_REPLICATION_IS_AVAILABLE == STD_ON */
void HwAccDmaCh_GetIntMajor(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, uint32 * const retValue);
void HwAccDmaCh_GetIntHalfMajor(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, uint32 * const retValue);

/*==================================================================================================
 *  VIRTUAL ADDRESS MAPPING FUNCTIONS
==================================================================================================*/
#if (DMA_IP_VIRTUAL_ADDRESS_MAPPING_IS_AVAILABLE == STD_ON)
static uint32 HwAccDma_SetVirtualToPhysicalAddress(const uint32 VirtualAddr);
static uint32 HwAccDma_SetPhysicalToVirtualAddress(const uint32 PhysicalAddr);
#endif /* DMA_IP_VIRTUAL_ADDRESS_MAPPING_IS_AVAILABLE == STD_ON */

/*==================================================================================================
 * SET PARAM DUMMY FUNCTION
==================================================================================================*/
#if ((DMA_IP_MASTER_ID_REPLICATION_IS_AVAILABLE == STD_OFF) || \
     (DMA_IP_BUFFERED_WRITES_IS_AVAILABLE == STD_OFF) || \
     (DMA_IP_PREEMPTION_IS_AVAILABLE == STD_OFF) || \
     (DMA_IP_DISABLE_PREEMPT_IS_AVAILABLE == STD_OFF))
void HwAccDmaCh_SetGlobalDummyFunction(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, const uint32 LocValue)
{
    /* Set global dummy function */
    (void)LocHwVers;
    (void)LocHwInst;
    (void)LocHwCh;
    (void)LocValue;
    DMA_IP_DEV_ASSERT(FALSE);
}
#endif

#if ((DMA_IP_STORE_DST_ADDR_IS_AVAILABLE == STD_OFF) || (DMA_IP_END_OF_PACKET_SIGNAL_IS_AVAILABLE == STD_OFF))
void HwAccDmaCh_SetTransferDummyFunction(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue)
{
    /* Set transfer dummy function */
    (void)LocHwVers;
    (void)pxLocTcd;
    (void)LocValue;
    DMA_IP_DEV_ASSERT(FALSE);
}
#endif

/*==================================================================================================
 * GET PARAM DUMMY FUNCTION
==================================================================================================*/
#if ((DMA_IP_STORE_DST_ADDR_IS_AVAILABLE == STD_OFF) || \
     (DMA_IP_MASTER_ID_REPLICATION_IS_AVAILABLE == STD_OFF) || \
     (DMA_IP_DMACRC_IS_AVAILABLE == STD_OFF))
void HwAccDmaCh_GetParamDummyFunction(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, uint32 * const retValue)
{
    /* Get parameter dummy function */
    (void)LocHwVers;
    (void)LocHwInst;
    (void)LocHwCh;
    (void)retValue;
    DMA_IP_DEV_ASSERT(FALSE);
}
#endif

/*==================================================================================================
 * DMA INSTANCE CONFIG FUNCTIONS
==================================================================================================*/
void HwAccDmaInst_SetConfig(const Dma_Ip_LogicInstanceIdType * const pxLocLogicInst, const Dma_Ip_LogicInstanceConfigType * const pxLocInstConfig)
{
    uint32 LocHwVers = pxLocLogicInst->HwVersId;
    uint32 LocHwInst = pxLocLogicInst->HwInstId;

    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaInst_SetConfig(g_ptHwv2BaseInstPtrArray[LocHwInst], pxLocInstConfig);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaInst_SetConfig(g_ptHwv3BaseInstPtrArray[LocHwInst], pxLocInstConfig);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

#if (DMA_IP_DMACRC_IS_AVAILABLE == STD_ON)
void HwAccDmaInst_SetCrcConfig(const Dma_Ip_LogicInstanceIdType * const pxLocLogicInst, const Dma_Ip_LogicInstanceConfigType * const pxLocInstConfig)
{
    uint32 LocHwInst = pxLocLogicInst->HwInstId;
    hwv3AccInlineDmaInst_SetCrcConfig((Dma_Ip_HwCrcGlobalType *)g_pDmaCrcPtrArray[LocHwInst], pxLocInstConfig);
}
#endif /* #if (DMA_IP_DMACRC_IS_AVAILABLE == STD_ON) */

/*==================================================================================================
 * DMA INSTANCE CMD FUNCTIONS
==================================================================================================*/
void hwAccDmaInst_CmdCancelTransfer(const Dma_Ip_LogicInstanceIdType * const pxLocLogicInst)
{
    uint32 LocHwVers = pxLocLogicInst->HwVersId;
    uint32 LocHwInst = pxLocLogicInst->HwInstId;

    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaInst_CmdCancelTransfer(g_ptHwv2BaseInstPtrArray[LocHwInst]);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaInst_CmdCancelTransfer(g_ptHwv3BaseInstPtrArray[LocHwInst]);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

void hwAccDmaInst_CmdCancelTransferWithError(const Dma_Ip_LogicInstanceIdType * const pxLocLogicInst)
{
    uint32 LocHwVers = pxLocLogicInst->HwVersId;
    uint32 LocHwInst = pxLocLogicInst->HwInstId;

    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaInst_CmdCancelTransferWithError(g_ptHwv2BaseInstPtrArray[LocHwInst]);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaInst_CmdCancelTransferWithError(g_ptHwv3BaseInstPtrArray[LocHwInst]);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

void hwAccDmaInst_CmdHalt(const Dma_Ip_LogicInstanceIdType * const pxLocLogicInst)
{
    uint32 LocHwVers = pxLocLogicInst->HwVersId;
    uint32 LocHwInst = pxLocLogicInst->HwInstId;

    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaInst_CmdHalt(g_ptHwv2BaseInstPtrArray[LocHwInst]);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaInst_CmdHalt(g_ptHwv3BaseInstPtrArray[LocHwInst]);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

void hwAccDmaInst_CmdResume(const Dma_Ip_LogicInstanceIdType * const pxLocLogicInst)
{
    uint32 LocHwVers = pxLocLogicInst->HwVersId;
    uint32 LocHwInst = pxLocLogicInst->HwInstId;

    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaInst_CmdResume(g_ptHwv2BaseInstPtrArray[LocHwInst]);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaInst_CmdResume(g_ptHwv3BaseInstPtrArray[LocHwInst]);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

/*==================================================================================================
 * DMA INSTANCE CMD - FUNCTION POINTER
==================================================================================================*/
void HwAccDmaInst_SetCommand(const uint32 Command, const Dma_Ip_LogicInstanceIdType * const pxLocLogicInst)
{
    static void (* const fpHwAcc_DmaInst_Command[])(const Dma_Ip_LogicInstanceIdType * const pxLocLogicInst) =
    {
        hwAccDmaInst_CmdCancelTransfer,
        hwAccDmaInst_CmdCancelTransferWithError,
        hwAccDmaInst_CmdHalt,
        hwAccDmaInst_CmdResume,
    };
    fpHwAcc_DmaInst_Command[Command](pxLocLogicInst);
}

/*==================================================================================================
 * DMA INSTANCE STATUS FUNCTION
==================================================================================================*/
void HwAccDmaInst_GetStatus(const Dma_Ip_LogicInstanceIdType * const pxLocLogicInst, Dma_Ip_LogicInstanceStatusType * const Status)
{
    uint32 LocHwVers = pxLocLogicInst->HwVersId;
    uint32 LocHwInst = pxLocLogicInst->HwInstId;

    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaInst_GetErrorStatus(g_ptHwv2BaseInstPtrArray[LocHwInst], &Status->Errors);
            hwv2AccInlineDmaInst_GetActiveIdStatus(g_ptHwv2BaseInstPtrArray[LocHwInst], &Status->ActiveId);
            hwv2AccInlineDmaInst_GetActiveStatus(g_ptHwv2BaseInstPtrArray[LocHwInst], &Status->Active);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaInst_GetErrorStatus(g_ptHwv3BaseInstPtrArray[LocHwInst], &Status->Errors);
            hwv3AccInlineDmaInst_GetActiveIdStatus(g_ptHwv3BaseInstPtrArray[LocHwInst], &Status->ActiveId);
            hwv3AccInlineDmaInst_GetActiveStatus(g_ptHwv3BaseInstPtrArray[LocHwInst], &Status->Active);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

/*==================================================================================================
 * DMA CHANNEL CMD FUNCTIONS
==================================================================================================*/
void HwAccDmaCh_CmdSetHwRequest(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_CmdSetRequest(DMA_IP_HWV2_TCD_CH_VALUE(LocHwInst), LocHwCh);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_CmdSetRequest(&DMA_IP_HWV3_TCD_CH_VALUE(LocHwInst, LocHwCh));
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

void HwAccDmaCh_CmdClearHwRequest(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_CmdClearRequest(DMA_IP_HWV2_TCD_CH_VALUE(LocHwInst), LocHwCh);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_CmdClearRequest(&DMA_IP_HWV3_TCD_CH_VALUE(LocHwInst, LocHwCh));
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

void HwAccDmaCh_CmdSetSwRequest(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_CmdSwReqStart(DMA_IP_HWV2_TCD_CH_VALUE(LocHwInst), LocHwCh);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_CmdSwReqStart(&DMA_IP_HWV3_TCD_TCD_VALUE(LocHwInst, LocHwCh));
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

void HwAccDmaCh_CmdClearDone(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_CmdClearDone(DMA_IP_HWV2_TCD_CH_VALUE(LocHwInst), LocHwCh);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_CmdClearDone(&DMA_IP_HWV3_TCD_CH_VALUE(LocHwInst, LocHwCh));
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

void HwAccDmaCh_CmdClearError(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_CmdClearError(DMA_IP_HWV2_TCD_CH_VALUE(LocHwInst), LocHwCh);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_CmdClearError(&DMA_IP_HWV3_TCD_CH_VALUE(LocHwInst, LocHwCh));
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

/*==================================================================================================
 * DMA CHANNEL CMD - FUNCTION POINTER
==================================================================================================*/
void HwAccDmaCh_SetCommand(const uint32 Command, const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh)
{
    static void (* const fpHwAcc_DmaCh_Command[])(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh) =
    {
        HwAccDmaCh_CmdSetHwRequest,
        HwAccDmaCh_CmdClearHwRequest,
        HwAccDmaCh_CmdSetSwRequest,
        HwAccDmaCh_CmdClearDone,
        HwAccDmaCh_CmdClearError
    };
    fpHwAcc_DmaCh_Command[Command](LocHwVers, LocHwInst, LocHwCh);
}

/*==================================================================================================
 * DMA CHANNEL STATUS FUNCTIONS
==================================================================================================*/
void HwAccDmaCh_GetStatus(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, Dma_Ip_LogicChannelStatusType * const pChStatus)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_GetActiveStatus(&DMA_IP_HWV2_TCD_TCD_VALUE(LocHwInst, LocHwCh), &pChStatus->Active);
            hwv2AccInlineDmaCh_GetDoneStatus(&DMA_IP_HWV2_TCD_TCD_VALUE(LocHwInst, LocHwCh), &pChStatus->Done);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_GetActiveStatus(&DMA_IP_HWV3_TCD_CH_VALUE(LocHwInst, LocHwCh), &pChStatus->Active);
            hwv3AccInlineDmaCh_GetDoneStatus(&DMA_IP_HWV3_TCD_CH_VALUE(LocHwInst, LocHwCh), &pChStatus->Done);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

void HwAccDmaCh_GetStatus_Error(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, uint32 * const pLocError)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            (void)LocHwCh;
            hwv2AccInlineDmaCh_GetErrorStatus(LocHwCh, DMA_IP_HWV2_TCD_CH_VALUE(LocHwInst), pLocError);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_GetErrorStatus(&DMA_IP_HWV3_TCD_CH_VALUE(LocHwInst, LocHwCh), pLocError);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

/*==================================================================================================
 * DMA CHANNEL GLOBAL FUNCTIONS
==================================================================================================*/
#if (DMA_IP_MASTER_ID_REPLICATION_IS_AVAILABLE == STD_ON)
void HwAccDmaCh_SetControl_EnMasterIdReplication(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, const uint32 LocValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            (void)LocHwInst;
            (void)LocHwCh;
            (void)LocValue;
            DMA_IP_DEV_ASSERT(FALSE);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_SetControl_EnMasterIdReplication(&DMA_IP_HWV3_TCD_CH_VALUE(LocHwInst, LocHwCh), LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}
#endif /* DMA_IP_MASTER_ID_REPLICATION_IS_AVAILABLE == STD_ON */

#if (DMA_IP_BUFFERED_WRITES_IS_AVAILABLE == STD_ON)
void HwAccDmaCh_SetControl_EnBufferedWrites(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, const uint32 LocValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            (void)LocHwInst;
            (void)LocHwCh;
            (void)LocValue;
            DMA_IP_DEV_ASSERT(FALSE);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_SetControl_EnBufferedWrites(&DMA_IP_HWV3_TCD_CH_VALUE(LocHwInst, LocHwCh), LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}
#endif /* DMA_IP_BUFFERED_WRITES_IS_AVAILABLE == STD_ON */

void HwAccDmaCh_SetRequest_EnMuxSource(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, const uint32 LocValue)
{
    uint32 LocDmaCh = 0U;
    uint32 LocDmaMuxInst = 0U;
    uint32 LocDmaMuxCh = 0U;

    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            LocDmaCh = ((LocHwInst * DMA_IP_HWV2_TCD_NOF_CH) + LocHwCh);
            LocDmaMuxInst = LocDmaCh / DMA_IP_HWV2_DMAMUX_NOF_CHANNELS;
            LocDmaMuxCh = DMA_IP_HWV2_DMAMUX_REG_INDEX_CONV(LocDmaCh % DMA_IP_HWV2_DMAMUX_NOF_CHANNELS);
            hwv2AccInlineDmaCh_SetRequest_EnHwRequestMux((volatile Dma_Ip_MuxRegType*)&g_ptHwv2MuxBasePtrArray[LocDmaMuxInst]->CHCFG[LocDmaMuxCh], LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            #if (DMAMUX_IP_NOT_ALIGNED == STD_ON)
                LocDmaMuxInst = DMA_IP_DMAMUX_REG_INST_CONV(LocHwInst, LocHwCh);
                LocDmaCh = DMA_IP_DMAMUX_REG_CH_CONV(LocHwInst, LocHwCh);
                LocDmaMuxCh = DMA_IP_DMAMUX_REG_INDEX_CONV(LocDmaCh);
                hwv3AccInlineDmaCh_SetRequest_EnHwRequestMux((volatile Dma_Ip_MuxRegType*)&g_ptHwv3MuxBasePtrArray[LocDmaMuxInst]->CHCFG[LocDmaMuxCh], LocValue);
            #else
                LocDmaCh = ((LocHwInst * DMA_IP_TCD_NOF_HWV3_CH) + LocHwCh);
                LocDmaMuxInst = LocDmaCh / DMA_IP_DMAMUX_NOF_CHANNELS;
                LocDmaMuxCh = DMA_IP_DMAMUX_REG_INDEX_CONV(LocDmaCh % DMA_IP_DMAMUX_NOF_CHANNELS);
                hwv3AccInlineDmaCh_SetRequest_EnHwRequestMux((volatile Dma_Ip_MuxRegType*)&g_ptHwv3MuxBasePtrArray[LocDmaMuxInst]->CHCFG[LocDmaMuxCh], LocValue);
            #endif /* #if (STD_ON == DMAMUX_IP_NOT_ALIGNED) */
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

void HwAccDmaCh_SetRequest_MuxSource(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, const uint32 LocValue)
{
    uint32 LocDmaCh = 0U;
    uint32 LocDmaMuxInst = 0U;
    uint32 LocDmaMuxCh = 0U;

    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            LocDmaCh = ((LocHwInst * DMA_IP_HWV2_TCD_NOF_CH) + LocHwCh);
            LocDmaMuxInst = LocDmaCh / DMA_IP_HWV2_DMAMUX_NOF_CHANNELS;
            LocDmaMuxCh = DMA_IP_HWV2_DMAMUX_REG_INDEX_CONV(LocDmaCh % DMA_IP_HWV2_DMAMUX_NOF_CHANNELS);
            hwv2AccInlineDmaCh_SetRequest_SourceMux((volatile Dma_Ip_MuxRegType*)&g_ptHwv2MuxBasePtrArray[LocDmaMuxInst]->CHCFG[LocDmaMuxCh], LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            #if (DMAMUX_IP_NOT_ALIGNED == STD_ON)
                LocDmaMuxInst = DMA_IP_DMAMUX_REG_INST_CONV(LocHwInst, LocHwCh);
                LocDmaCh = DMA_IP_DMAMUX_REG_CH_CONV(LocHwInst, LocHwCh);
                LocDmaMuxCh = DMA_IP_DMAMUX_REG_INDEX_CONV(LocDmaCh);
                hwv3AccInlineDmaCh_SetRequest_SourceMux((volatile Dma_Ip_MuxRegType*)&g_ptHwv3MuxBasePtrArray[LocDmaMuxInst]->CHCFG[LocDmaMuxCh], LocValue);
            #else
                LocDmaCh = ((LocHwInst * DMA_IP_TCD_NOF_HWV3_CH) + LocHwCh);
                LocDmaMuxInst = LocDmaCh / DMA_IP_DMAMUX_NOF_CHANNELS;
                LocDmaMuxCh = DMA_IP_DMAMUX_REG_INDEX_CONV(LocDmaCh % DMA_IP_DMAMUX_NOF_CHANNELS);
                hwv3AccInlineDmaCh_SetRequest_SourceMux((volatile Dma_Ip_MuxRegType*)&g_ptHwv3MuxBasePtrArray[LocDmaMuxInst]->CHCFG[LocDmaMuxCh], LocValue);
            #endif /* #if (STD_ON == DMAMUX_IP_NOT_ALIGNED) */
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

void HwAccDmaCh_SetRequest_EnMuxTrigger(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, const uint32 LocValue)
{
    uint32 LocDmaCh = 0U;
    uint32 LocDmaMuxInst = 0U;
    uint32 LocDmaMuxCh = 0U;

    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            LocDmaCh = ((LocHwInst * DMA_IP_HWV2_TCD_NOF_CH) + LocHwCh);
            LocDmaMuxInst = LocDmaCh / DMA_IP_HWV2_DMAMUX_NOF_CHANNELS;
            LocDmaMuxCh = DMA_IP_HWV2_DMAMUX_REG_INDEX_CONV(LocDmaCh % DMA_IP_HWV2_DMAMUX_NOF_CHANNELS);
            hwv2AccInlineDmaCh_SetRequest_EnTriggerMux((volatile Dma_Ip_MuxRegType*)&g_ptHwv2MuxBasePtrArray[LocDmaMuxInst]->CHCFG[LocDmaMuxCh], LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            #if (DMAMUX_IP_NOT_ALIGNED == STD_ON)
                LocDmaMuxInst = DMA_IP_DMAMUX_REG_INST_CONV(LocHwInst, LocHwCh);
                LocDmaCh = DMA_IP_DMAMUX_REG_CH_CONV(LocHwInst, LocHwCh);
                LocDmaMuxCh = DMA_IP_DMAMUX_REG_INDEX_CONV(LocDmaCh);
                hwv3AccInlineDmaCh_SetRequest_EnTriggerMux((volatile Dma_Ip_MuxRegType*)&g_ptHwv3MuxBasePtrArray[LocDmaMuxInst]->CHCFG[LocDmaMuxCh], LocValue);
            #else
                LocDmaCh = ((LocHwInst * DMA_IP_TCD_NOF_HWV3_CH) + LocHwCh);
                LocDmaMuxInst = LocDmaCh / DMA_IP_DMAMUX_NOF_CHANNELS;
                LocDmaMuxCh = DMA_IP_DMAMUX_REG_INDEX_CONV(LocDmaCh % DMA_IP_DMAMUX_NOF_CHANNELS);
                hwv3AccInlineDmaCh_SetRequest_EnTriggerMux((volatile Dma_Ip_MuxRegType*)&g_ptHwv3MuxBasePtrArray[LocDmaMuxInst]->CHCFG[LocDmaMuxCh], LocValue);
            #endif /* #if (STD_ON == DMAMUX_IP_NOT_ALIGNED) */
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

void HwAccDmaCh_SetRequest_EnRequest(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, const uint32 LocValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_SetRequest_EnHwRequest(DMA_IP_HWV2_TCD_CH_VALUE(LocHwInst), LocHwCh, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_SetRequest_EnHwRequest(&DMA_IP_HWV3_TCD_CH_VALUE(LocHwInst, LocHwCh), LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

void HwAccDmaCh_SetInterrupt_EnError(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, const uint32 LocValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_SetInterrupt_EnError(DMA_IP_HWV2_TCD_CH_VALUE(LocHwInst), LocHwCh, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_SetInterrupt_EnError(&DMA_IP_HWV3_TCD_CH_VALUE(LocHwInst, LocHwCh), LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

#if (DMA_IP_GROUP_PRIORITY_IS_AVAILABLE == STD_ON)
void HwAccDmaCh_SetPriority_Group(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, const uint32 LocValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            (void)LocHwInst;
            (void)LocHwCh;
            (void)LocValue;
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_SetPriority_Group((volatile uint32 *)&g_ptHwv3BaseInstPtrArray[LocHwInst]->reg_CH_GRPRI[LocHwCh], LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}
#endif /* DMA_IP_GROUP_PRIORITY_IS_AVAILABLE == STD_ON */

void HwAccDmaCh_SetPriority_Level(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, const uint32 LocValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_SetPriority_Level(DMA_IP_HWV2_TCD_CH_VALUE(LocHwInst), DMA_CHN_TO_DCHPRI_INDEX(LocHwCh), LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_SetPriority_Level(&DMA_IP_HWV3_TCD_CH_VALUE(LocHwInst, LocHwCh), LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

#if (DMA_IP_PREEMPTION_IS_AVAILABLE == STD_ON)
void HwAccDmaCh_SetPriority_EnPreemption(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, const uint32 LocValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_SetPriority_EnPreemption(DMA_IP_HWV2_TCD_CH_VALUE(LocHwInst), DMA_CHN_TO_DCHPRI_INDEX(LocHwCh), LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_SetPriority_EnPreemption(&DMA_IP_HWV3_TCD_CH_VALUE(LocHwInst, LocHwCh), LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}
#endif /* #if (DMA_IP_PREEMPTION_IS_AVAILABLE == STD_ON) */

#if (DMA_IP_DISABLE_PREEMPT_IS_AVAILABLE == STD_ON)
void HwAccDmaCh_SetPriority_DisPreempt(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, const uint32 LocValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_SetPriority_DisPreempt(DMA_IP_HWV2_TCD_CH_VALUE(LocHwInst), DMA_CHN_TO_DCHPRI_INDEX(LocHwCh), LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_SetPriority_DisPreempt(&DMA_IP_HWV3_TCD_CH_VALUE(LocHwInst, LocHwCh), LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}
#endif /* #if (DMA_IP_DISABLE_PREEMPT_IS_AVAILABLE == STD_ON) */

/*==================================================================================================
 * DMA CHANNEL SET GLOBAL PARAMETER - FUNCTION POINTER
==================================================================================================*/
void HwAccDmaCh_SetGlobalParam(const uint32 Parameter, const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, const uint32 LocValue)
{
    static void (* const fpHwAcc_DmaCh_SetGlobalParam[])(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, const uint32 LocValue) =
    {
#if (DMA_IP_MASTER_ID_REPLICATION_IS_AVAILABLE == STD_ON)
        HwAccDmaCh_SetControl_EnMasterIdReplication,
#else
        HwAccDmaCh_SetGlobalDummyFunction,
#endif
#if (DMA_IP_BUFFERED_WRITES_IS_AVAILABLE == STD_ON)
        HwAccDmaCh_SetControl_EnBufferedWrites,
#else
        HwAccDmaCh_SetGlobalDummyFunction,
#endif
        HwAccDmaCh_SetRequest_EnMuxSource,
        HwAccDmaCh_SetRequest_MuxSource,
        HwAccDmaCh_SetRequest_EnMuxTrigger,
        HwAccDmaCh_SetRequest_EnRequest,
        HwAccDmaCh_SetInterrupt_EnError,
#if (DMA_IP_GROUP_PRIORITY_IS_AVAILABLE == STD_ON)
        HwAccDmaCh_SetPriority_Group,
#else
        HwAccDmaCh_SetGlobalDummyFunction,
#endif /* DMA_IP_GROUP_PRIORITY_IS_AVAILABLE == STD_ON */
        HwAccDmaCh_SetPriority_Level,
#if (DMA_IP_PREEMPTION_IS_AVAILABLE == STD_ON)
        HwAccDmaCh_SetPriority_EnPreemption,
#else
        HwAccDmaCh_SetGlobalDummyFunction,
#endif
#if (DMA_IP_DISABLE_PREEMPT_IS_AVAILABLE == STD_ON)
        HwAccDmaCh_SetPriority_DisPreempt,
#else
        HwAccDmaCh_SetGlobalDummyFunction,
#endif
    };
    fpHwAcc_DmaCh_SetGlobalParam[Parameter](LocHwVers, LocHwInst, LocHwCh, LocValue);
}

/*==================================================================================================
 * DMA CHANNEL TRANSFER FUNCTIONS
==================================================================================================*/
void HwAccDmaCh_SetSource_Address(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
        #if (DMA_IP_VIRTUAL_ADDRESS_MAPPING_IS_AVAILABLE == STD_ON)
            hwv2AccInlineDmaCh_SetSource_Address(pxLocTcd, HwAccDma_SetVirtualToPhysicalAddress(LocValue));
        #else
            hwv2AccInlineDmaCh_SetSource_Address(pxLocTcd, LocValue);
        #endif /* DMA_IP_VIRTUAL_ADDRESS_MAPPING_IS_AVAILABLE == STD_ON */
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
        #if (DMA_IP_VIRTUAL_ADDRESS_MAPPING_IS_AVAILABLE == STD_ON)
            hwv3AccInlineDmaCh_SetSource_Address(pxLocTcd, HwAccDma_SetVirtualToPhysicalAddress(LocValue));
        #else
            hwv3AccInlineDmaCh_SetSource_Address(pxLocTcd, LocValue);
        #endif /* DMA_IP_VIRTUAL_ADDRESS_MAPPING_IS_AVAILABLE == STD_ON */
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

void HwAccDmaCh_SetSource_SignedOffset(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_SetSource_SignedOffset(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
    #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_SetSource_SignedOffset(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

void HwAccDmaCh_SetSource_LastAddrAdj(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_SetSource_SignedLastAddrAdj(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_SetAuxiliary_EnDestinationStoreAddress(pxLocTcd, FALSE);
            hwv3AccInlineDmaCh_SetSource_SignedLastAddrAdj(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

void HwAccDmaCh_SetSource_TransferSize(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_SetSource_TransferSize(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_SetSource_TransferSize(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

void HwAccDmaCh_SetSource_Modulo(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_SetSource_Modulo(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_SetSource_Modulo(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

void HwAccDmaCh_SetDestination_Address(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
        #if (DMA_IP_VIRTUAL_ADDRESS_MAPPING_IS_AVAILABLE == STD_ON)
            hwv2AccInlineDmaCh_SetDestination_Address(pxLocTcd, HwAccDma_SetVirtualToPhysicalAddress(LocValue));
        #else
            hwv2AccInlineDmaCh_SetDestination_Address(pxLocTcd, LocValue);
        #endif /* DMA_IP_VIRTUAL_ADDRESS_MAPPING_IS_AVAILABLE == STD_ON */
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
        #if (DMA_IP_VIRTUAL_ADDRESS_MAPPING_IS_AVAILABLE == STD_ON)
            hwv3AccInlineDmaCh_SetDestination_Address(pxLocTcd, HwAccDma_SetVirtualToPhysicalAddress(LocValue));
        #else
            hwv3AccInlineDmaCh_SetDestination_Address(pxLocTcd, LocValue);
        #endif /* DMA_IP_VIRTUAL_ADDRESS_MAPPING_IS_AVAILABLE == STD_ON */
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

void HwAccDmaCh_SetDestination_SignedOffset(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_SetDestination_SignedOffset(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_SetDestination_SignedOffset(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

void HwAccDmaCh_SetDestination_LastAddrAdj(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_SetDestination_LastAddrAdj(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_SetDestination_LastAddrAdj(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

void HwAccDmaCh_SetDestination_TransferSize(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_SetDestination_TransferSize(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_SetDestination_TransferSize(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

void HwAccDmaCh_SetDestination_Modulo(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_SetDestination_Modulo(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_SetDestination_Modulo(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

void HwAccDmaCh_SetMinorLoop_enSrcOffset(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_SetMinorLoop_enSrcOffset(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_SetMinorLoop_enSrcOffset(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

void HwAccDmaCh_SetMinorLoop_enDstOffset(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_SetMinorLoop_enDstOffset(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_SetMinorLoop_enDstOffset(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

void HwAccDmaCh_SetMinorLoop_Offset(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_SetMinorLoop_SignedOffset(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_SetMinorLoop_SignedOffset(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

void HwAccDmaCh_SetMinorLoop_EnLink(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_SetMinorLoop_EnLink(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_SetMinorLoop_EnLink(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

void HwAccDmaCh_SetMinorLoop_LogicLinkCh(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue)
{
    uint32 hwLinkCh = Dma_Ip_ConvertLogicChToHwCh(LocValue);

    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_SetMinorLoop_LinkCh(pxLocTcd, hwLinkCh);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_SetMinorLoop_LinkCh(pxLocTcd, hwLinkCh);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

void HwAccDmaCh_SetMinorLoop_Size(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_SetMinorLoop_Size(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_SetMinorLoop_Size(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

void HwAccDmaCh_SetMajorLoop_EnLink(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_SetMajorLoop_EnLink(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_SetMajorLoop_EnLink(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

void HwAccDmaCh_SetMajorLoop_LogicLinkCh(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue)
{
    uint32 hwLinkCh = Dma_Ip_ConvertLogicChToHwCh(LocValue);

    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_SetMajorLoop_LinkCh(pxLocTcd, hwLinkCh);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_SetMajorLoop_LinkCh(pxLocTcd, hwLinkCh);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

void HwAccDmaCh_SetMajorLoop_Count(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_SetMajorLoop_Count(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_SetMajorLoop_Count(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

#if (DMA_IP_STORE_DST_ADDR_IS_AVAILABLE == STD_ON)
void HwAccDmaCh_SetControl_StoreDestinationAddress(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
        #if (DMA_IP_VIRTUAL_ADDRESS_MAPPING_IS_AVAILABLE == STD_ON)
            hwv3AccInlineDmaCh_SetControl_StoreDestinationAddress(pxLocTcd, HwAccDma_SetVirtualToPhysicalAddress(LocValue));
        #else
            hwv3AccInlineDmaCh_SetControl_StoreDestinationAddress(pxLocTcd, LocValue);
        #endif /* DMA_IP_VIRTUAL_ADDRESS_MAPPING_IS_AVAILABLE == STD_ON */
            hwv3AccInlineDmaCh_SetAuxiliary_EnDestinationStoreAddress(pxLocTcd, TRUE);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}
#endif

void HwAccDmaCh_SetControl_EnStart(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_SetControl_EnStart(pxLocTcd, ((LocValue != 0U) ? TRUE : FALSE));
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_SetControl_EnStart(pxLocTcd, ((LocValue != 0U) ? TRUE : FALSE));
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

void HwAccDmaCh_SetControl_EnMajor(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_SetControl_EnMajor(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_SetControl_EnMajor(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

void HwAccDmaCh_SetControl_EnHalfMajor(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_SetControl_EnHalfMajor(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_SetControl_EnHalfMajor(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

void HwAccDmaCh_SetControl_DisAutoHwRequest(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_SetControl_DisAutoHwRequest(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_SetControl_DisAutoHwRequest(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

#if (DMA_IP_END_OF_PACKET_SIGNAL_IS_AVAILABLE == STD_ON)
void HwAccDmaCh_SetControl_EnEndOfPacketSignal(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_SetControl_EnEndOfPacketSignal(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_SetControl_EnEndOfPacketSignal(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}
#endif

void HwAccDmaCh_SetControl_BandwidthControl(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_SetControl_BandwidthControl(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_SetControl_BandwidthControl(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

/*==================================================================================================
 * DMA CHANNEL SET TRANSFER PARAMETER - FUNCTION POINTER
==================================================================================================*/
void HwAccDmaCh_SetTransferParam(const uint32 Parameter, const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue)
{
    static void (* const fpHwAcc_DmaCh_SetTransferParam[])(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue) =
    {
        HwAccDmaCh_SetSource_Address,
        HwAccDmaCh_SetSource_SignedOffset,
        HwAccDmaCh_SetSource_LastAddrAdj,
        HwAccDmaCh_SetSource_TransferSize,
        HwAccDmaCh_SetSource_Modulo,
        HwAccDmaCh_SetDestination_Address,
        HwAccDmaCh_SetDestination_SignedOffset,
        HwAccDmaCh_SetDestination_LastAddrAdj,
        HwAccDmaCh_SetDestination_TransferSize,
        HwAccDmaCh_SetDestination_Modulo,
        HwAccDmaCh_SetMinorLoop_enSrcOffset,
        HwAccDmaCh_SetMinorLoop_enDstOffset,
        HwAccDmaCh_SetMinorLoop_Offset,
        HwAccDmaCh_SetMinorLoop_EnLink,
        HwAccDmaCh_SetMinorLoop_LogicLinkCh,
        HwAccDmaCh_SetMinorLoop_Size,
        HwAccDmaCh_SetMajorLoop_EnLink,
        HwAccDmaCh_SetMajorLoop_LogicLinkCh,
        HwAccDmaCh_SetMajorLoop_Count,
#if (DMA_IP_STORE_DST_ADDR_IS_AVAILABLE == STD_ON)
        HwAccDmaCh_SetControl_StoreDestinationAddress,
#else
        HwAccDmaCh_SetTransferDummyFunction,
#endif
        HwAccDmaCh_SetControl_EnStart,
        HwAccDmaCh_SetControl_EnMajor,
        HwAccDmaCh_SetControl_EnHalfMajor,
        HwAccDmaCh_SetControl_DisAutoHwRequest,
#if (DMA_IP_END_OF_PACKET_SIGNAL_IS_AVAILABLE == STD_ON)
        HwAccDmaCh_SetControl_EnEndOfPacketSignal,
#else
        HwAccDmaCh_SetTransferDummyFunction,
#endif
        HwAccDmaCh_SetControl_BandwidthControl,
    };
    fpHwAcc_DmaCh_SetTransferParam[Parameter](LocHwVers, pxLocTcd, LocValue);
}

#if (DMA_IP_DMACRC_IS_AVAILABLE == STD_ON)
/*==================================================================================================
 * DMA CHANNEL CRC FUNCTIONS
==================================================================================================*/
void HwAccDmaCh_SetCrc_ModeSelect(const uint32 LocHwVers, const uint32 LocHwCrcInst, const uint32 LocHwCrcCh, const uint32 LocValue)
{
    hwv3AccInlineDmaCh_SetCrc_ModeSelect((Dma_Ip_HwCrcCtrlType*)&g_pDmaCrcPtrArray[LocHwCrcInst]->CONTROL_REGISTER[LocHwCrcCh], LocValue);
}
void HwAccDmaCh_SetCrc_PolynomialSelect(const uint32 LocHwVers, const uint32 LocHwCrcInst, const uint32 LocHwCrcCh, const uint32 LocValue)
{
    hwv3AccInlineDmaCh_SetCrc_PolynomialSelect((Dma_Ip_HwCrcCtrlType*)&g_pDmaCrcPtrArray[LocHwCrcInst]->CONTROL_REGISTER[LocHwCrcCh], LocValue);
}
void HwAccDmaCh_SetCrc_EnableInitialValue(const uint32 LocHwVers, const uint32 LocHwCrcInst, const uint32 LocHwCrcCh, const uint32 LocValue)
{
    hwv3AccInlineDmaCh_SetCrc_EnableInitialValue((Dma_Ip_HwCrcCtrlType*)&g_pDmaCrcPtrArray[LocHwCrcInst]->CONTROL_REGISTER[LocHwCrcCh], LocValue);
}
void HwAccDmaCh_SetCrc_InitialValue(const uint32 LocHwVers, const uint32 LocHwCrcInst, const uint32 LocHwCrcCh, const uint32 LocValue)
{
    hwv3AccInlineDmaCh_SetCrc_InitialValue((Dma_Ip_HwCrcCtrlType*)&g_pDmaCrcPtrArray[LocHwCrcInst]->CONTROL_REGISTER[LocHwCrcCh], LocValue);
}
void HwAccDmaCh_SetCrc_EnableLogic(const uint32 LocHwVers, const uint32 LocHwCrcInst, const uint32 LocHwCrcCh, const uint32 LocValue)
{
    hwv3AccInlineDmaCh_SetCrc_EnableLogic((Dma_Ip_HwCrcCtrlType*)&g_pDmaCrcPtrArray[LocHwCrcInst]->CONTROL_REGISTER[LocHwCrcCh], LocValue);
}

/*==================================================================================================
 * DMA CHANNEL CRC PARAMETER - FUNCTION POINTER
==================================================================================================*/
void HwAccDmaCh_SetCrcParam(const uint32 Parameter, const uint32 LocHwVers, const uint32 LocHwCrcInst, const uint32 LocHwCrcCh, const uint32 LocValue)
{
    static void (*fpHwAcc_DmaCh_SetCrcParam[])(const uint32 LocHwVers, const uint32 LocHwCrcInst, const uint32 LocHwCrcCh, const uint32 LocValue) =
    {
        HwAccDmaCh_SetCrc_ModeSelect,
        HwAccDmaCh_SetCrc_PolynomialSelect,
        HwAccDmaCh_SetCrc_EnableInitialValue,
        HwAccDmaCh_SetCrc_InitialValue,
        HwAccDmaCh_SetCrc_EnableLogic
    };
    fpHwAcc_DmaCh_SetCrcParam[Parameter](LocHwVers, LocHwCrcInst, LocHwCrcCh, LocValue);
}
#endif /* #if (DMA_IP_DMACRC_IS_AVAILABLE == STD_ON) */

/*==================================================================================================
 * DMA CHANNEL GET PARAMETER
==================================================================================================*/
void HwAccDmaCh_GetSourceAddress(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, uint32 * const retValue)
{
    uint32 LocPhysicalAddress;

    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_GetSourceAddress(&DMA_IP_HWV2_TCD_TCD_VALUE(LocHwInst, LocHwCh), &LocPhysicalAddress);
        #if (DMA_IP_VIRTUAL_ADDRESS_MAPPING_IS_AVAILABLE == STD_ON)
            *retValue = HwAccDma_SetPhysicalToVirtualAddress(LocPhysicalAddress);
        #else
            *retValue = LocPhysicalAddress;
        #endif /* DMA_IP_VIRTUAL_ADDRESS_MAPPING_IS_AVAILABLE == STD_ON */
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_GetSourceAddress(&DMA_IP_HWV3_TCD_TCD_VALUE(LocHwInst, LocHwCh), &LocPhysicalAddress);
        #if (DMA_IP_VIRTUAL_ADDRESS_MAPPING_IS_AVAILABLE == STD_ON)
            *retValue = HwAccDma_SetPhysicalToVirtualAddress(LocPhysicalAddress);
        #else
            *retValue = LocPhysicalAddress;
        #endif /* DMA_IP_VIRTUAL_ADDRESS_MAPPING_IS_AVAILABLE == STD_ON */
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

void HwAccDmaCh_GetDestinationAddress(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, uint32 * const retValue)
{
    uint32 LocPhysicalAddress;

    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_GetDestinationAddress(&DMA_IP_HWV2_TCD_TCD_VALUE(LocHwInst, LocHwCh), &LocPhysicalAddress);
        #if (DMA_IP_VIRTUAL_ADDRESS_MAPPING_IS_AVAILABLE == STD_ON)
            *retValue = HwAccDma_SetPhysicalToVirtualAddress(LocPhysicalAddress);
        #else
            *retValue = LocPhysicalAddress;
        #endif /* DMA_IP_VIRTUAL_ADDRESS_MAPPING_IS_AVAILABLE == STD_ON */
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_GetDestinationAddress(&DMA_IP_HWV3_TCD_TCD_VALUE(LocHwInst, LocHwCh), &LocPhysicalAddress);
        #if (DMA_IP_VIRTUAL_ADDRESS_MAPPING_IS_AVAILABLE == STD_ON)
            *retValue = HwAccDma_SetPhysicalToVirtualAddress(LocPhysicalAddress);
        #else
            *retValue = LocPhysicalAddress;
        #endif /* DMA_IP_VIRTUAL_ADDRESS_MAPPING_IS_AVAILABLE == STD_ON */
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

void HwAccDmaCh_GetBeginIterCount(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, uint32 * const retValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_GetBeginIterCount(&DMA_IP_HWV2_TCD_TCD_VALUE(LocHwInst, LocHwCh), retValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_GetBeginIterCount(&DMA_IP_HWV3_TCD_TCD_VALUE(LocHwInst, LocHwCh), retValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

void HwAccDmaCh_GetCurrentIterCount(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, uint32 * const retValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_GetCurrentIterCount(&DMA_IP_HWV2_TCD_TCD_VALUE(LocHwInst, LocHwCh), retValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_GetCurrentIterCount(&DMA_IP_HWV3_TCD_TCD_VALUE(LocHwInst, LocHwCh), retValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

#if (DMA_IP_STORE_DST_ADDR_IS_AVAILABLE == STD_ON)
void HwAccDmaCh_GetStoreDstAddress(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, uint32 * const retValue)
{
    uint32 LocPhysicalAddress;

    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_GetStoreDstAddress(&DMA_IP_HWV3_TCD_TCD_VALUE(LocHwInst, LocHwCh), &LocPhysicalAddress);
        #if (DMA_IP_VIRTUAL_ADDRESS_MAPPING_IS_AVAILABLE == STD_ON)
            *retValue = HwAccDma_SetPhysicalToVirtualAddress(LocPhysicalAddress);
        #else
            *retValue = LocPhysicalAddress;
        #endif /* DMA_IP_VIRTUAL_ADDRESS_MAPPING_IS_AVAILABLE == STD_ON */
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}
#endif

#if (DMA_IP_MASTER_ID_REPLICATION_IS_AVAILABLE == STD_ON)
void HwAccDmaCh_GetMasterId(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, uint32 * const retValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_GetMasterId(&DMA_IP_HWV3_TCD_CH_VALUE(LocHwInst, LocHwCh), retValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}
#endif

void HwAccDmaCh_GetIntMajor(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, uint32 * const retValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_GetIntMajor(&DMA_IP_HWV2_TCD_TCD_VALUE(LocHwInst, LocHwCh), retValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_GetIntMajor(&DMA_IP_HWV3_TCD_TCD_VALUE(LocHwInst, LocHwCh), retValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

void HwAccDmaCh_GetIntHalfMajor(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, uint32 * const retValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_GetIntHalfMajor(&DMA_IP_HWV2_TCD_TCD_VALUE(LocHwInst, LocHwCh), retValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_GetIntHalfMajor(&DMA_IP_HWV3_TCD_TCD_VALUE(LocHwInst, LocHwCh), retValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

#if (DMA_IP_DMACRC_IS_AVAILABLE == STD_ON)
void HwAccDmaCh_GetFinalCrc(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, uint32 * const retValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_GetFinalCrc((Dma_Ip_HwCrcCtrlType*)&g_pDmaCrcPtrArray[LocHwInst]->CONTROL_REGISTER[LocHwCh], retValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}
#endif /* #if (DMA_IP_DMACRC_IS_AVAILABLE == STD_ON) */

/*==================================================================================================
 * DMA CHANNEL GET PARAMETER - FUNCTION POINTER
==================================================================================================*/
void HwAccDmaCh_GetParam(const uint32 Parameter, const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, uint32 * const retValue)
{
    static void (* const fpHwAcc_DmaCh_GetParam[])(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, uint32 * const retValue) =
    {
        HwAccDmaCh_GetSourceAddress,
        HwAccDmaCh_GetDestinationAddress,
        HwAccDmaCh_GetBeginIterCount,
        HwAccDmaCh_GetCurrentIterCount,
#if (DMA_IP_STORE_DST_ADDR_IS_AVAILABLE == STD_ON)
        HwAccDmaCh_GetStoreDstAddress,
#else
        HwAccDmaCh_GetParamDummyFunction,
#endif
#if (DMA_IP_MASTER_ID_REPLICATION_IS_AVAILABLE == STD_ON)
        HwAccDmaCh_GetMasterId,
#else
        HwAccDmaCh_GetParamDummyFunction,
#endif
        HwAccDmaCh_GetIntMajor,
        HwAccDmaCh_GetIntHalfMajor,
#if (DMA_IP_DMACRC_IS_AVAILABLE == STD_ON)
        HwAccDmaCh_GetFinalCrc,
#else
        HwAccDmaCh_GetParamDummyFunction,
#endif
    };
    fpHwAcc_DmaCh_GetParam[Parameter](LocHwVers, LocHwInst, LocHwCh, retValue);
}

/*==================================================================================================
 *  DMA LOGIC CHANNEL SOFTWARE TCD -> LOAD WITH CONFIGURATION
==================================================================================================*/
void HwAccDmaCh_LoadConfigIntoSoftwareTcd(uint32 HwVersId, const Dma_Ip_ScatterGatherConfigType * const pxLocScatterGather, const uint32 ElementId, const boolean NotLastElement)
{
    uint32 hwLinkCh;

#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
    if(DMA_IP_HARDWARE_VERSION_3 == HwVersId)
    {
        /* Enable SGA bit and set SGA next software TCD address */
        if(TRUE == NotLastElement)
        {
            hwv3AccInlineDmaCh_SetControl_ScatterGatherAddress(pxLocScatterGather->Stcd, (uint32)pxLocScatterGather->NextConfig->Stcd);
        }
        else
        {
             hwv3AccInlineDmaCh_SetControl_ScatterGatherAddress(pxLocScatterGather->Stcd, (uint32)0U);
        }
        hwv3AccInlineDmaCh_SetAuxiliary_EnScatterGatherProcessing(pxLocScatterGather->Stcd, NotLastElement);
        if(NULL_PTR != pxLocScatterGather->TransferConfig)
        {
            /* Control */
            hwv3AccInlineDmaCh_SetControl_EnStart(pxLocScatterGather->Stcd, pxLocScatterGather->TransferConfig->Control.EnStart);
            hwv3AccInlineDmaCh_SetControl_BandwidthControl(pxLocScatterGather->Stcd, pxLocScatterGather->TransferConfig->Control.BandwidthControl);
            hwv3AccInlineDmaCh_SetControl_EnMajor(pxLocScatterGather->Stcd, (uint32)pxLocScatterGather->TransferConfig->Control.EnMajorInt);
            hwv3AccInlineDmaCh_SetControl_EnHalfMajor(pxLocScatterGather->Stcd, (uint32)pxLocScatterGather->TransferConfig->Control.EnHalfMajorInt);
            hwv3AccInlineDmaCh_SetControl_DisAutoHwRequest(pxLocScatterGather->Stcd, (uint32)pxLocScatterGather->TransferConfig->Control.DisAutoHwRequest);
            hwv3AccInlineDmaCh_SetControl_EnEndOfPacketSignal(pxLocScatterGather->Stcd, (uint32)pxLocScatterGather->TransferConfig->Control.EnEndOfPacketSignal);
            /* Source */
            hwv3AccInlineDmaCh_SetSource_Address(pxLocScatterGather->Stcd, pxLocScatterGather->TransferConfig->Source.Addr);
            hwv3AccInlineDmaCh_SetSource_SignedOffset(pxLocScatterGather->Stcd, (uint32)pxLocScatterGather->TransferConfig->Source.SignedOffset);
            hwv3AccInlineDmaCh_SetSource_TransferSize(pxLocScatterGather->Stcd, pxLocScatterGather->TransferConfig->Source.TransferSize);
            hwv3AccInlineDmaCh_SetSource_Modulo(pxLocScatterGather->Stcd, pxLocScatterGather->TransferConfig->Source.Modulo);
            /* Destination */
            hwv3AccInlineDmaCh_SetDestination_Address(pxLocScatterGather->Stcd, pxLocScatterGather->TransferConfig->Destination.Addr);
            hwv3AccInlineDmaCh_SetDestination_SignedOffset(pxLocScatterGather->Stcd, (uint32)pxLocScatterGather->TransferConfig->Destination.SignedOffset);
            hwv3AccInlineDmaCh_SetDestination_TransferSize(pxLocScatterGather->Stcd, pxLocScatterGather->TransferConfig->Destination.TransferSize);
            hwv3AccInlineDmaCh_SetDestination_Modulo(pxLocScatterGather->Stcd, pxLocScatterGather->TransferConfig->Destination.Modulo);
            /* MinorLoop */
            hwv3AccInlineDmaCh_SetMinorLoop_enSrcOffset(pxLocScatterGather->Stcd, (uint32)pxLocScatterGather->TransferConfig->MinorLoop.EnSrcOffset);
            hwv3AccInlineDmaCh_SetMinorLoop_enDstOffset(pxLocScatterGather->Stcd, (uint32)pxLocScatterGather->TransferConfig->MinorLoop.EnDstOffset);
            hwv3AccInlineDmaCh_SetMinorLoop_SignedOffset(pxLocScatterGather->Stcd, (uint32)pxLocScatterGather->TransferConfig->MinorLoop.Offset);
            hwv3AccInlineDmaCh_SetMinorLoop_EnLink(pxLocScatterGather->Stcd, (uint32)pxLocScatterGather->TransferConfig->MinorLoop.EnLink);
            hwLinkCh = Dma_Ip_ConvertLogicChToHwCh(pxLocScatterGather->TransferConfig->MinorLoop.LogicLinkCh);
            hwv3AccInlineDmaCh_SetMinorLoop_LinkCh(pxLocScatterGather->Stcd, hwLinkCh);
            hwv3AccInlineDmaCh_SetMinorLoop_Size(pxLocScatterGather->Stcd, pxLocScatterGather->TransferConfig->MinorLoop.Size);
            /* MajorLoop */
            hwv3AccInlineDmaCh_SetMajorLoop_EnLink(pxLocScatterGather->Stcd, (uint32)pxLocScatterGather->TransferConfig->MajorLoop.EnLink);
            if(TRUE == pxLocScatterGather->TransferConfig->MajorLoop.EnLink)
            {
                hwLinkCh = Dma_Ip_ConvertLogicChToHwCh(pxLocScatterGather->TransferConfig->MajorLoop.LogicLinkCh);
                hwv3AccInlineDmaCh_SetMajorLoop_LinkCh(pxLocScatterGather->Stcd, hwLinkCh);
            }
            else
            {
                hwv3AccInlineDmaCh_SetMajorLoop_LinkCh(pxLocScatterGather->Stcd, ElementId);
            }
            hwv3AccInlineDmaCh_SetMajorLoop_Count(pxLocScatterGather->Stcd, pxLocScatterGather->TransferConfig->MajorLoop.Count);
            /* At initialization, Store Destination Address can't be set. */
            hwv3AccInlineDmaCh_SetAuxiliary_EnDestinationStoreAddress(pxLocScatterGather->Stcd, FALSE);
            hwv3AccInlineDmaCh_SetSource_SignedLastAddrAdj(pxLocScatterGather->Stcd, (uint32)pxLocScatterGather->TransferConfig->Source.LastAddrAdj);
        }
    }
    else
    {
        /* Do Nothing */
    }
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
    if(DMA_IP_HARDWARE_VERSION_2 == HwVersId)
    {
        /* Enable SGA bit and set SGA next software TCD address */
        if(TRUE == NotLastElement)
        {
            hwv2AccInlineDmaCh_SetControl_ScatterGatherAddress(pxLocScatterGather->Stcd, (uint32)pxLocScatterGather->NextConfig->Stcd);
        }
        else
        {
             hwv2AccInlineDmaCh_SetControl_ScatterGatherAddress(pxLocScatterGather->Stcd, (uint32)0U);
        }
        hwv2AccInlineDmaCh_SetAuxiliary_EnScatterGatherProcessing(pxLocScatterGather->Stcd, NotLastElement);
        if(NULL_PTR != pxLocScatterGather->TransferConfig)
        {
            /* Control and Status */
            hwv2AccInlineDmaCh_SetControlAndStatus(pxLocScatterGather->Stcd, pxLocScatterGather);
            /* Source */
            hwv2AccInlineDmaCh_SetSource_Address(pxLocScatterGather->Stcd, pxLocScatterGather->TransferConfig->Source.Addr);
            hwv2AccInlineDmaCh_SetSource_SignedOffset(pxLocScatterGather->Stcd, (uint32)pxLocScatterGather->TransferConfig->Source.SignedOffset);
            /* Destination */
            hwv2AccInlineDmaCh_SetDestination_Address(pxLocScatterGather->Stcd, pxLocScatterGather->TransferConfig->Destination.Addr);
            hwv2AccInlineDmaCh_SetDestination_SignedOffset(pxLocScatterGather->Stcd, (uint32)pxLocScatterGather->TransferConfig->Destination.SignedOffset);
            /* Transfer Attributes */
            hwv2AccInlineDmaCh_SetTransferAttributes(pxLocScatterGather->Stcd, pxLocScatterGather);
            /* Signed minor loop offset */
            hwv2AccInlineDmaCh_SetSignedMinorLoopOffset(pxLocScatterGather->Stcd, pxLocScatterGather);
            /* MinorLoop */
            hwv2AccInlineDmaCh_SetMinorLoop_EnLink(pxLocScatterGather->Stcd, pxLocScatterGather->TransferConfig->MinorLoop.EnLink ? 1U : 0U);
            hwLinkCh = Dma_Ip_ConvertLogicChToHwCh(pxLocScatterGather->TransferConfig->MinorLoop.LogicLinkCh);
            hwv2AccInlineDmaCh_SetMinorLoop_LinkCh(pxLocScatterGather->Stcd, hwLinkCh);
            hwv2AccInlineDmaCh_SetMinorLoop_Size(pxLocScatterGather->Stcd, pxLocScatterGather->TransferConfig->MinorLoop.Size);
            /* MajorLoop */
            hwv2AccInlineDmaCh_SetMajorLoop_EnLink(pxLocScatterGather->Stcd, pxLocScatterGather->TransferConfig->MajorLoop.EnLink ? 1U : 0U);
            if(TRUE == pxLocScatterGather->TransferConfig->MajorLoop.EnLink)
            {
                hwLinkCh = Dma_Ip_ConvertLogicChToHwCh(pxLocScatterGather->TransferConfig->MajorLoop.LogicLinkCh);
                hwv2AccInlineDmaCh_SetMajorLoop_LinkCh(pxLocScatterGather->Stcd, hwLinkCh);
            }
            else
            {
                hwv2AccInlineDmaCh_SetMajorLoop_LinkCh(pxLocScatterGather->Stcd, ElementId);
            }
            hwv2AccInlineDmaCh_SetMajorLoop_Count(pxLocScatterGather->Stcd, pxLocScatterGather->TransferConfig->MajorLoop.Count);
            hwv2AccInlineDmaCh_SetSource_SignedLastAddrAdj(pxLocScatterGather->Stcd, (uint32)pxLocScatterGather->TransferConfig->Source.LastAddrAdj);
        }
    }
    else
    {
        /* Do Nothing */
    }
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
}

/*==================================================================================================
 *  DMA LOGIC CHANNEL HARDWARE TCD -> LOAD WITH SOFTWARE TCD
==================================================================================================*/
void HwAccDmaCh_LoadSoftwareTcdIntoHardwareTcd(const Dma_Ip_LogicChannelIdType * const pxLocLogicCh, const Dma_Ip_ScatterGatherConfigType * const pxLocScatterGather)
{
    uint32 LocHwVers = pxLocLogicCh->HwVersId;
    uint32 LocHwInst = pxLocLogicCh->HwInstId;
    uint32 LocHwCh   = pxLocLogicCh->HwChId;

#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
    if(DMA_IP_HARDWARE_VERSION_3 == LocHwVers)
    {
        /* Force channel to retire: Clear DONE bit in order to write the ESG bit */
        hwv3AccInlineDmaCh_CmdClearDone(&DMA_IP_HWV3_TCD_CH_VALUE(LocHwInst, LocHwCh));
        /* Update Hardware TCD */
        DMA_IP_HWV3_TCD_TCD_VALUE(LocHwInst, LocHwCh).reg_SADDR = pxLocScatterGather->Stcd->reg_SADDR;
        DMA_IP_HWV3_TCD_TCD_VALUE(LocHwInst, LocHwCh).reg_SOFF = pxLocScatterGather->Stcd->reg_SOFF;
        DMA_IP_HWV3_TCD_TCD_VALUE(LocHwInst, LocHwCh).reg_ATTR = pxLocScatterGather->Stcd->reg_ATTR;
        DMA_IP_HWV3_TCD_TCD_VALUE(LocHwInst, LocHwCh).reg_NBYTES.reg_MLOFFYES = pxLocScatterGather->Stcd->reg_NBYTES.reg_MLOFFYES;
        DMA_IP_HWV3_TCD_TCD_VALUE(LocHwInst, LocHwCh).reg_SLAST_SDA = pxLocScatterGather->Stcd->reg_SLAST_SDA;
        DMA_IP_HWV3_TCD_TCD_VALUE(LocHwInst, LocHwCh).reg_DADDR = pxLocScatterGather->Stcd->reg_DADDR;
        DMA_IP_HWV3_TCD_TCD_VALUE(LocHwInst, LocHwCh).reg_DOFF = pxLocScatterGather->Stcd->reg_DOFF;
        DMA_IP_HWV3_TCD_TCD_VALUE(LocHwInst, LocHwCh).reg_CITER.reg_ELINKYES = pxLocScatterGather->Stcd->reg_CITER.reg_ELINKYES;
        DMA_IP_HWV3_TCD_TCD_VALUE(LocHwInst, LocHwCh).reg_DLAST_SGA = pxLocScatterGather->Stcd->reg_DLAST_SGA;
        DMA_IP_HWV3_TCD_TCD_VALUE(LocHwInst, LocHwCh).reg_BITER.reg_ELINKYES = pxLocScatterGather->Stcd->reg_BITER.reg_ELINKYES;
        /* CSR shall be loaded last due to Start bit */
        DMA_IP_HWV3_TCD_TCD_VALUE(LocHwInst, LocHwCh).reg_CSR = pxLocScatterGather->Stcd->reg_CSR;
    }
    else
    {
        /* Do Nothing */
    }
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
    if(DMA_IP_HARDWARE_VERSION_2 == LocHwVers)
    {
        /* Force channel to retire: Clear DONE bit in order to write the ESG bit */
        hwv2AccInlineDmaCh_CmdClearDone(DMA_IP_HWV2_TCD_CH_VALUE(LocHwInst), LocHwCh);
        /* Update Hardware TCD */
        DMA_IP_HWV2_TCD_TCD_VALUE(LocHwInst, LocHwCh).reg_SADDR = pxLocScatterGather->Stcd->reg_SADDR;
        DMA_IP_HWV2_TCD_TCD_VALUE(LocHwInst, LocHwCh).reg_SOFF = pxLocScatterGather->Stcd->reg_SOFF;
        DMA_IP_HWV2_TCD_TCD_VALUE(LocHwInst, LocHwCh).reg_ATTR = pxLocScatterGather->Stcd->reg_ATTR;
        DMA_IP_HWV2_TCD_TCD_VALUE(LocHwInst, LocHwCh).reg_NBYTES.reg_MLOFFYES = pxLocScatterGather->Stcd->reg_NBYTES.reg_MLOFFYES;
        DMA_IP_HWV2_TCD_TCD_VALUE(LocHwInst, LocHwCh).reg_SLAST = pxLocScatterGather->Stcd->reg_SLAST;
        DMA_IP_HWV2_TCD_TCD_VALUE(LocHwInst, LocHwCh).reg_DADDR = pxLocScatterGather->Stcd->reg_DADDR;
        DMA_IP_HWV2_TCD_TCD_VALUE(LocHwInst, LocHwCh).reg_DOFF = pxLocScatterGather->Stcd->reg_DOFF;
        DMA_IP_HWV2_TCD_TCD_VALUE(LocHwInst, LocHwCh).reg_CITER.reg_ELINKYES = pxLocScatterGather->Stcd->reg_CITER.reg_ELINKYES;
        DMA_IP_HWV2_TCD_TCD_VALUE(LocHwInst, LocHwCh).reg_DLAST_SGA = pxLocScatterGather->Stcd->reg_DLAST_SGA;
        DMA_IP_HWV2_TCD_TCD_VALUE(LocHwInst, LocHwCh).reg_BITER.reg_ELINKYES = pxLocScatterGather->Stcd->reg_BITER.reg_ELINKYES;
        /* CSR shall be loaded last due to Start bit */
        DMA_IP_HWV2_TCD_TCD_VALUE(LocHwInst, LocHwCh).reg_CSR = pxLocScatterGather->Stcd->reg_CSR;
    }
    else
    {
        /* Do Nothing */
    }
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
}

/*==================================================================================================
 *  IP INTERNAL FUNCTIONS
==================================================================================================*/
void HwAccDmaCh_SetControl_ScatterGatherAddress(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, uint32 LocValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_SetControl_ScatterGatherAddress(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_SetControl_ScatterGatherAddress(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

void HwAccDmaCh_SetControl_EnScatterGatherProcessing(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, boolean LocValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            hwv2AccInlineDmaCh_SetAuxiliary_EnScatterGatherProcessing(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_SetAuxiliary_EnScatterGatherProcessing(pxLocTcd, LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}

#if (DMA_IP_DMACRC_IS_AVAILABLE == STD_ON)
void HwAccDmaCh_SetCrc_InstanceChannelSelect(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, const uint32 LocValue)
{
    switch (LocHwVers)
    {
#if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_2:
            (void)LocHwInst;
            (void)LocHwCh;
            (void)LocValue;
            DMA_IP_DEV_ASSERT(FALSE);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV2_IS_AVAILABLE) */
#if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE)
        case DMA_IP_HARDWARE_VERSION_3:
            hwv3AccInlineDmaCh_SetCrc_InstanceChannelSelect((Dma_Ip_HwCrcCtrlType*)&g_pDmaCrcPtrArray[LocHwInst]->CONTROL_REGISTER[LocHwCh], LocValue);
        break;
#endif /* #if (STD_ON == DMA_IP_HWV3_IS_AVAILABLE) */
        default:
            DMA_IP_DEV_ASSERT(FALSE);
        break;
    }
}
#endif /* #if (DMA_IP_DMACRC_IS_AVAILABLE == STD_ON) */

/*==================================================================================================
 *  VIRTUAL ADDRESS MAPPING FUNCTIONS
==================================================================================================*/
#if (DMA_IP_VIRTUAL_ADDRESS_MAPPING_IS_AVAILABLE == STD_ON)
static uint32 HwAccDma_SetVirtualToPhysicalAddress(const uint32 VirtualAddr)
{
    uint32 PhysicAddr = VirtualAddr;
    uint8 SectionIdx;
    const Dma_Ip_InitType * ConfigPtr;

    /* Get the initial pointer */
    ConfigPtr = Dma_Ip_GetInitPtr();
    for(SectionIdx = 0; SectionIdx < ConfigPtr->pxVirtualMemoryConfig->NumOfSection; SectionIdx++)
    {
        if((VirtualAddr >= (*(ConfigPtr->pxVirtualMemoryConfig->pSectionConfig))[SectionIdx].VirtualAddrStart) && (VirtualAddr < (*(ConfigPtr->pxVirtualMemoryConfig->pSectionConfig))[SectionIdx].VirtualAddrEnd))
        {
            /* Convert from Virtual address to Physical address */
            PhysicAddr = (VirtualAddr - (*(ConfigPtr->pxVirtualMemoryConfig->pSectionConfig))[SectionIdx].VirtualAddrStart) + (*(ConfigPtr->pxVirtualMemoryConfig->pSectionConfig))[SectionIdx].PhysicalAddrStart;
        }
    }
    return PhysicAddr;
}

static uint32 HwAccDma_SetPhysicalToVirtualAddress(const uint32 PhysicalAddr)
{
    uint32 VirtualAddr = PhysicalAddr;
    uint8 SectionIdx;
    const Dma_Ip_InitType * ConfigPtr;

    /* Get the initial pointer */
    ConfigPtr = Dma_Ip_GetInitPtr();
    for(SectionIdx = 0; SectionIdx < ConfigPtr->pxVirtualMemoryConfig->NumOfSection; SectionIdx++)
    {
        if((PhysicalAddr >= (*(ConfigPtr->pxVirtualMemoryConfig->pSectionConfig))[SectionIdx].PhysicalAddrStart) && (PhysicalAddr < (*(ConfigPtr->pxVirtualMemoryConfig->pSectionConfig))[SectionIdx].PhysicalAddrEnd))
        {
            /* Convert from Physical address to Virtual address */
            VirtualAddr = (PhysicalAddr - (*(ConfigPtr->pxVirtualMemoryConfig->pSectionConfig))[SectionIdx].PhysicalAddrStart) + (*(ConfigPtr->pxVirtualMemoryConfig->pSectionConfig))[SectionIdx].VirtualAddrStart;
        }
    }
    return VirtualAddr;
}
#endif /* DMA_IP_VIRTUAL_ADDRESS_MAPPING_IS_AVAILABLE == STD_ON */

#define MCL_STOP_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

#endif /* #if (DMA_IP_IS_AVAILABLE == STD_ON) */

/** @} */

/*==================================================================================================
 *                                        END OF FILE
==================================================================================================*/
