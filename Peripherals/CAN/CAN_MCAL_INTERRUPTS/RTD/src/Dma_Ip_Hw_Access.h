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
#ifndef DMA_IP_HW_ACCESS_H_
#define DMA_IP_HW_ACCESS_H_

/**
*   @file    Dma_Ip_Hw_Access.h
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
#include "Dma_Ip.h"
#include "Dma_Ip_Devassert.h"

#if (DMA_IP_IS_AVAILABLE == STD_ON)
/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define DMA_IP_HW_ACCESS_VENDOR_ID_H                       43
#define DMA_IP_HW_ACCESS_AR_RELEASE_MAJOR_VERSION_H        4
#define DMA_IP_HW_ACCESS_AR_RELEASE_MINOR_VERSION_H        4
#define DMA_IP_HW_ACCESS_AR_RELEASE_REVISION_VERSION_H     0
#define DMA_IP_HW_ACCESS_SW_MAJOR_VERSION_H                1
#define DMA_IP_HW_ACCESS_SW_MINOR_VERSION_H                0
#define DMA_IP_HW_ACCESS_SW_PATCH_VERSION_H                0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if header file and Dma_Ip.h file are of the same vendor */
#if (DMA_IP_HW_ACCESS_VENDOR_ID_H != DMA_IP_VENDOR_ID_H)
    #error "Dma_Ip_Hw_Access.h and Dma_Ip.h have different vendor ids"
#endif

/* Check if header file and Dma_Ip.h file are of the same Autosar version */
#if ((DMA_IP_HW_ACCESS_AR_RELEASE_MAJOR_VERSION_H != DMA_IP_AR_RELEASE_MAJOR_VERSION_H) || \
     (DMA_IP_HW_ACCESS_AR_RELEASE_MINOR_VERSION_H != DMA_IP_AR_RELEASE_MINOR_VERSION_H) || \
     (DMA_IP_HW_ACCESS_AR_RELEASE_REVISION_VERSION_H != DMA_IP_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Dma_Ip_Hw_Access.h and Dma_Ip.h are different"
#endif

/* Check if header file and Dma_Ip.h file are of the same Software version */
#if ((DMA_IP_HW_ACCESS_SW_MAJOR_VERSION_H != DMA_IP_SW_MAJOR_VERSION_H) || \
     (DMA_IP_HW_ACCESS_SW_MINOR_VERSION_H != DMA_IP_SW_MINOR_VERSION_H) || \
     (DMA_IP_HW_ACCESS_SW_PATCH_VERSION_H != DMA_IP_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Dma_Ip_Hw_Access.h and Dma_Ip.h are different"
#endif

/* Check if header file and Dma_Ip_Devassert.h file are of the same vendor */
#if (DMA_IP_HW_ACCESS_VENDOR_ID_H != DMA_IP_DEVASSERT_VENDOR_ID_H)
    #error "Dma_Ip_Hw_Access.h and Dma_Ip_Devassert.h have different vendor ids"
#endif

/* Check if header file and Dma_Ip_Devassert.h file are of the same Autosar version */
#if ((DMA_IP_HW_ACCESS_AR_RELEASE_MAJOR_VERSION_H != DMA_IP_DEVASSERT_AR_RELEASE_MAJOR_VERSION_H) || \
     (DMA_IP_HW_ACCESS_AR_RELEASE_MINOR_VERSION_H != DMA_IP_DEVASSERT_AR_RELEASE_MINOR_VERSION_H) || \
     (DMA_IP_HW_ACCESS_AR_RELEASE_REVISION_VERSION_H != DMA_IP_DEVASSERT_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Dma_Ip_Hw_Access.h and Dma_Ip_Devassert.h are different"
#endif

/* Check if header file and Dma_Ip_Devassert.h file are of the same Software version */
#if ((DMA_IP_HW_ACCESS_SW_MAJOR_VERSION_H != DMA_IP_DEVASSERT_SW_MAJOR_VERSION_H) || \
     (DMA_IP_HW_ACCESS_SW_MINOR_VERSION_H != DMA_IP_DEVASSERT_SW_MINOR_VERSION_H) || \
     (DMA_IP_HW_ACCESS_SW_PATCH_VERSION_H != DMA_IP_DEVASSERT_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Dma_Ip_Hw_Access.h and Dma_Ip_Devassert.h are different"
#endif

/*==================================================================================================
 *                                        REGISTERS
==================================================================================================*/
#define MCL_START_SEC_VAR_INIT_UNSPECIFIED
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"


#if (DMA_IP_HWV2_IS_AVAILABLE == STD_ON)
    static DMAMUX_Type                  * const g_ptHwv2MuxBasePtrArray[DMA_IP_HWV2_DMAMUX_NOF_INST] = DMA_IP_DMAMUX_BASE_PTRS;
    static Dma_Ip_Hwv2InstRegType       * const g_ptHwv2BaseInstPtrArray[DMA_IP_HWV2_DMA_NOF_INST] = DMA_IP_DMA_HWV2_BASE_PTRS;
    #define DMA_IP_HWV2_TCD_CH_VALUE(INST)      g_ptHwv2BaseInstPtrArray[INST]
    static Dma_Ip_Hwv2TcdArrayType      * const g_ptHwv2BaseTcdPtrArray[DMA_IP_HWV2_TCD_NOF_INST] = DMA_IP_TCD_HWV2_BASE_PTRS;
    #define DMA_IP_HWV2_TCD_TCD_VALUE(INST,CH)  g_ptHwv2BaseTcdPtrArray[INST]->TCD_RSV[CH].tChTcdReg.tTcdReg
#endif /* #if (DMA_IP_HWV2_IS_AVAILABLE == STD_ON) */

#if (DMA_IP_HWV3_IS_AVAILABLE == STD_ON)
    #if (DMAMUX_IP_NOT_ALIGNED == STD_ON)
        static DMAMUX_IP_Type             * const g_ptHwv3MuxBasePtrArray[DMAMUX_NOT_ALIGNED_CHCFG_COUNT] = DMAMUX_NOT_ALIGNED_BASE_PTRS;
    #else
        static DMAMUX_Type             * const g_ptHwv3MuxBasePtrArray[DMA_IP_DMAMUX_NOF_INST] = IP_DMAMUX_BASE_PTRS;
    #endif
    static Dma_Ip_Hwv3InstRegType  * const g_ptHwv3BaseInstPtrArray[DMA_IP_DMA_NOF_HWV3_INST] = DMA_IP_DMA_BASE_PTRS;

    #if (DMA_IP_TCD_NOT_ALIGNED == STD_ON)
        static Dma_Ip_Hwv3ChTcdRegType      * const g_ptHwChTcdPtrArray[DMA_IP_TCD_NOF_HWV3_CH_INST][DMA_IP_TCD_NOF_HWV3_CH] = DMA_IP_TCD_PTR_ARRAY;
        #define DMA_IP_HWV3_TCD_CH_VALUE(INST,CH)   g_ptHwChTcdPtrArray[INST][CH]->tChReg
        #define DMA_IP_HWV3_TCD_TCD_VALUE(INST,CH)  g_ptHwChTcdPtrArray[INST][CH]->tTcdReg
    #else
        static Dma_Ip_Hwv3TcdArrayType      * const g_ptHwv3BaseTcdPtrArray[DMA_IP_TCD_NOF_HWV3_CH_INST] = DMA_IP_TCD_BASE_PTRS;
        #define DMA_IP_HWV3_TCD_CH_VALUE(INST,CH)   g_ptHwv3BaseTcdPtrArray[INST]->TCD_RSV[CH].tChTcdReg.tChReg
        #define DMA_IP_HWV3_TCD_TCD_VALUE(INST,CH)  g_ptHwv3BaseTcdPtrArray[INST]->TCD_RSV[CH].tChTcdReg.tTcdReg
    #endif

    #if (DMA_IP_DMACRC_IS_AVAILABLE == STD_ON)
        static DMA_CRC_Type            * const g_pDmaCrcPtrArray[DMA_IP_DMACRC_NOF_INST] = IP_DMA_CRC_BASE_PTRS;
    #endif /* #if (DMA_IP_DMACRC_IS_AVAILABLE == STD_ON) */
#endif /* #if (DMA_IP_HWV3_IS_AVAILABLE == STD_ON) */


#define MCL_STOP_SEC_VAR_INIT_UNSPECIFIED
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

/*==================================================================================================
 *                                    FUNCTION PROTOTYPE
==================================================================================================*/
#define MCL_START_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

/*==================================================================================================
 *  VIRTUAL ADDRESS MAPPING FUNCTIONS
==================================================================================================*/
#if (DMA_IP_VIRTUAL_ADDRESS_MAPPING_IS_AVAILABLE == STD_ON)
const Dma_Ip_InitType * Dma_Ip_GetInitPtr(void);
#endif /* DMA_IP_VIRTUAL_ADDRESS_MAPPING_IS_AVAILABLE == STD_ON */

/*==================================================================================================
 * DMA INSTANCE FUNCTIONS
==================================================================================================*/
void HwAccDmaInst_SetConfig(const Dma_Ip_LogicInstanceIdType * const pxLocLogicInst, const Dma_Ip_LogicInstanceConfigType * const pxLocInstConfig);
#if (DMA_IP_DMACRC_IS_AVAILABLE == STD_ON)
void HwAccDmaInst_SetCrcConfig(const Dma_Ip_LogicInstanceIdType * const pxLocLogicInst, const Dma_Ip_LogicInstanceConfigType * const pxLocInstConfig);
#endif /* #if (DMA_IP_DMACRC_IS_AVAILABLE == STD_ON) */
void HwAccDmaInst_SetCommand(const uint32 Command, const Dma_Ip_LogicInstanceIdType * const pxLocLogicInst);
void HwAccDmaInst_GetStatus(const Dma_Ip_LogicInstanceIdType * const pxLocLogicInst, Dma_Ip_LogicInstanceStatusType * const Status);

/*==================================================================================================
 * DMA CHANNEL FUNCTIONS
==================================================================================================*/
void HwAccDmaCh_SetCommand(const uint32 Command, const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh);
void HwAccDmaCh_GetStatus(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, Dma_Ip_LogicChannelStatusType * const pChStatus);
void HwAccDmaCh_SetGlobalParam(const uint32 Parameter, const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, const uint32 LocValue);
void HwAccDmaCh_SetTransferParam(const uint32 Parameter, const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, const uint32 LocValue);
#if (DMA_IP_DMACRC_IS_AVAILABLE == STD_ON)
void HwAccDmaCh_SetCrcParam(const uint32 Parameter, const uint32 LocHwVers, const uint32 LocHwCrcInst, const uint32 LocHwCrcCh, const uint32 LocValue);
#endif /* #if (DMA_IP_DMACRC_IS_AVAILABLE == STD_ON) */
void HwAccDmaCh_GetParam(const uint32 Parameter, const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, uint32 * const retValue);

/*==================================================================================================
 *  DMA CHANNEL SOFTWARE TCD FUNCTIONS
==================================================================================================*/
void HwAccDmaCh_LoadConfigIntoSoftwareTcd(uint32 HwVersId, const Dma_Ip_ScatterGatherConfigType * const pxLocScatterGather, const uint32 ElementId, const boolean NotLastElement);
void HwAccDmaCh_LoadSoftwareTcdIntoHardwareTcd(const Dma_Ip_LogicChannelIdType * const pxLocLogicCh, const Dma_Ip_ScatterGatherConfigType * const pxLocScatterGather);

/*==================================================================================================
 *  IP INTERNAL FUNCTIONS
==================================================================================================*/
void HwAccDmaCh_GetStatus_Error(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh, uint32 * const pLocError);
void HwAccDmaCh_SetControl_ScatterGatherAddress(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, uint32 LocValue);
void HwAccDmaCh_SetControl_EnScatterGatherProcessing(const uint32 LocHwVers, Dma_Ip_TcdRegType * pxLocTcd, boolean LocValue);
#if (DMA_IP_DMACRC_IS_AVAILABLE == STD_ON)
void HwAccDmaCh_SetCrc_InstanceChannelSelect(const uint32 LocHwVers,const uint32 LocHwInst, const uint32 LocHwCh, const uint32 LocValue);
#endif /* #if (DMA_IP_DMACRC_IS_AVAILABLE == STD_ON) */

uint32 Dma_Ip_ConvertLogicChToHwCh(uint32 LogicCh);

#define MCL_STOP_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

#endif /* #if (DMA_IP_IS_AVAILABLE == STD_ON) */

/** @} */

#endif  /* #ifndef DMA_IP_HW_ACCESS_H_ */

/*==================================================================================================
 *                                        END OF FILE
==================================================================================================*/
