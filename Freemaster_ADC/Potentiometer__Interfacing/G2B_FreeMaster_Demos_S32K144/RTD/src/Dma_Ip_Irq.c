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
*   @file    Dma_Ip_Irq.c
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
#include "Dma_Ip_Cfg.h"
#include "Dma_Ip_Irq.h"
#include "Dma_Ip_Hw_Access.h"

#if (DMA_IP_IS_AVAILABLE == STD_ON)
/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define DMA_IP_IRQ_VENDOR_ID_C                       43
#define DMA_IP_IRQ_AR_RELEASE_MAJOR_VERSION_C        4
#define DMA_IP_IRQ_AR_RELEASE_MINOR_VERSION_C        4
#define DMA_IP_IRQ_AR_RELEASE_REVISION_VERSION_C     0
#define DMA_IP_IRQ_SW_MAJOR_VERSION_C                1
#define DMA_IP_IRQ_SW_MINOR_VERSION_C                0
#define DMA_IP_IRQ_SW_PATCH_VERSION_C                0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if Dma_Ip_Irq.c file and Dma_Ip_Cfg.h file are of the same vendor */
#if (DMA_IP_IRQ_VENDOR_ID_C != DMA_IP_CFG_VENDOR_ID_H)
    #error "Dma_Ip_Irq.c and Dma_Ip_Cfg.h have different vendor ids"
#endif

/* Check if Dma_Ip_Irq.c file and Dma_Ip_Cfg.h file are of the same Autosar version */
#if ((DMA_IP_IRQ_AR_RELEASE_MAJOR_VERSION_C != DMA_IP_CFG_AR_RELEASE_MAJOR_VERSION_H) || \
     (DMA_IP_IRQ_AR_RELEASE_MINOR_VERSION_C != DMA_IP_CFG_AR_RELEASE_MINOR_VERSION_H) || \
     (DMA_IP_IRQ_AR_RELEASE_REVISION_VERSION_C != DMA_IP_CFG_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Dma_Ip_Irq.c and Dma_Ip_Cfg.h are different"
#endif

/* Check if Dma_Ip_Irq.c file and Dma_Ip_Cfg.h file are of the same Software version */
#if ((DMA_IP_IRQ_SW_MAJOR_VERSION_C != DMA_IP_CFG_SW_MAJOR_VERSION_H) || \
     (DMA_IP_IRQ_SW_MINOR_VERSION_C != DMA_IP_CFG_SW_MINOR_VERSION_H) || \
     (DMA_IP_IRQ_SW_PATCH_VERSION_C != DMA_IP_CFG_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Dma_Ip_Irq.c and Dma_Ip_Cfg.h are different"
#endif

/* Check if Dma_Ip_Irq.c file and Dma_Ip_Irq.h file are of the same vendor */
#if (DMA_IP_IRQ_VENDOR_ID_C != DMA_IP_IRQ_VENDOR_ID_H)
    #error "Dma_Ip_Irq.c and Dma_Ip_Irq.h have different vendor ids"
#endif

/* Check if Dma_Ip_Irq.c file and Dma_Ip_Irq.h file are of the same Autosar version */
#if ((DMA_IP_IRQ_AR_RELEASE_MAJOR_VERSION_C != DMA_IP_IRQ_AR_RELEASE_MAJOR_VERSION_H) || \
     (DMA_IP_IRQ_AR_RELEASE_MINOR_VERSION_C != DMA_IP_IRQ_AR_RELEASE_MINOR_VERSION_H) || \
     (DMA_IP_IRQ_AR_RELEASE_REVISION_VERSION_C != DMA_IP_IRQ_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Dma_Ip_Irq.c and Dma_Ip_Irq.h are different"
#endif

/* Check if Dma_Ip_Irq.c file and Dma_Ip_Irq.h file are of the same Software version */
#if ((DMA_IP_IRQ_SW_MAJOR_VERSION_C != DMA_IP_IRQ_SW_MAJOR_VERSION_H) || \
     (DMA_IP_IRQ_SW_MINOR_VERSION_C != DMA_IP_IRQ_SW_MINOR_VERSION_H) || \
     (DMA_IP_IRQ_SW_PATCH_VERSION_C != DMA_IP_IRQ_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Dma_Ip_Irq.c and Dma_Ip_Irq.h are different"
#endif

/* Check if Dma_Ip_Irq.c file and Dma_Ip_Hw_Access.h file are of the same vendor */
#if (DMA_IP_IRQ_VENDOR_ID_C != DMA_IP_HW_ACCESS_VENDOR_ID_H)
    #error "Dma_Ip_Irq.c and Dma_Ip_Hw_Access.h have different vendor ids"
#endif

/* Check if Dma_Ip_Irq.c file and Dma_Ip_Hw_Access.h file are of the same Autosar version */
#if ((DMA_IP_IRQ_AR_RELEASE_MAJOR_VERSION_C != DMA_IP_HW_ACCESS_AR_RELEASE_MAJOR_VERSION_H) || \
     (DMA_IP_IRQ_AR_RELEASE_MINOR_VERSION_C != DMA_IP_HW_ACCESS_AR_RELEASE_MINOR_VERSION_H) || \
     (DMA_IP_IRQ_AR_RELEASE_REVISION_VERSION_C != DMA_IP_HW_ACCESS_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Dma_Ip_Irq.c and Dma_Ip_Hw_Access.h are different"
#endif

/* Check if Dma_Ip_Irq.c file and Dma_Ip_Hw_Access.h file are of the same Software version */
#if ((DMA_IP_IRQ_SW_MAJOR_VERSION_C != DMA_IP_HW_ACCESS_SW_MAJOR_VERSION_H) || \
     (DMA_IP_IRQ_SW_MINOR_VERSION_C != DMA_IP_HW_ACCESS_SW_MINOR_VERSION_H) || \
     (DMA_IP_IRQ_SW_PATCH_VERSION_C != DMA_IP_HW_ACCESS_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Dma_Ip_Irq.c and Dma_Ip_Hw_Access.h are different"
#endif

#if (DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON)
/* Check if Dma_Ip_Irq.c file and Dma_Ip_Multicore.h file are of the same vendor */
#if (DMA_IP_IRQ_VENDOR_ID_C != DMA_IP_MULTICORE_VENDOR_ID_H)
    #error "Dma_Ip_Irq.c and Dma_Ip_Multicore.h have different vendor ids"
#endif

/* Check if Dma_Ip_Irq.c file and Dma_Ip_Multicore.h file are of the same Autosar version */
#if ((DMA_IP_IRQ_AR_RELEASE_MAJOR_VERSION_C != DMA_IP_MULTICORE_AR_RELEASE_MAJOR_VERSION_H) || \
     (DMA_IP_IRQ_AR_RELEASE_MINOR_VERSION_C != DMA_IP_MULTICORE_AR_RELEASE_MINOR_VERSION_H) || \
     (DMA_IP_IRQ_AR_RELEASE_REVISION_VERSION_C != DMA_IP_MULTICORE_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Dma_Ip_Irq.c and Dma_Ip_Multicore.h are different"
#endif

/* Check if Dma_Ip_Irq.c file and Dma_Ip_Multicore.h file are of the same Software version */
#if ((DMA_IP_IRQ_SW_MAJOR_VERSION_C != DMA_IP_MULTICORE_SW_MAJOR_VERSION_H) || \
     (DMA_IP_IRQ_SW_MINOR_VERSION_C != DMA_IP_MULTICORE_SW_MINOR_VERSION_H) || \
     (DMA_IP_IRQ_SW_PATCH_VERSION_C != DMA_IP_MULTICORE_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Dma_Ip_Irq.c and Dma_Ip_Multicore.h are different"
#endif
#endif /* DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON */

/*==================================================================================================
 *                                       FUNCTION PROTOYPES
==================================================================================================*/


/*==================================================================================================
 *                                            FUNCTION
==================================================================================================*/
#define MCL_START_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

/**
 * @brief The function contains Dma Irq Dispatcher
 * @details The function shall Handle DMA interrupt.
 *
 * @param[in]  LocHwVers           Specifies the Logic Hw Version defined by the user.
 * @param[in]  LocHwInst           Specifies the Logic Hw Instance defined by the user.
 * @param[in]  LocHwCh             Specifies the Logic Hw channel defined by the user.
 *
 * @return void
 *
 * @implements Dma_IrqDispatcher_Activity
 * */
static void IntIrqDispatcher(const uint32 LocHwVers, const uint32 LocHwInst, const uint32 LocHwCh)
{
    uint32 chIntStatus = (uint32)(DMA_IP_HWV2_TCD_CH_VALUE(LocHwInst)->reg_INT & ((uint32)1U << LocHwCh));
    uint32 chIntEnable = (uint32)(DMA_IP_HWV2_TCD_TCD_VALUE(LocHwInst, LocHwCh).reg_CSR & ((uint32)DMA_TCD_CSR_INTMAJOR_MASK | (uint32)DMA_TCD_CSR_INTHALF_MASK));

    if(0U != chIntStatus)
    {
        DMA_IP_HWV2_TCD_CH_VALUE(LocHwInst)->reg_CINT = (uint8)LocHwCh;
        if(0U != chIntEnable)
        {
            Dma_Ip_IntIrqHandler(LocHwVers, LocHwInst, LocHwCh);
        }
    }
}

ISR(Dma0_Ch0_IRQHandler)
{
    /* DMA channel 0 IRQ handler */
    IntIrqDispatcher(2U, 0U, 0U);
    EXIT_INTERRUPT();
}
ISR(Dma0_Ch1_IRQHandler)
{
    /* DMA channel 1 IRQ handler */
    IntIrqDispatcher(2U, 0U, 1U);
    EXIT_INTERRUPT();
}
ISR(Dma0_Ch2_IRQHandler)
{
    /* DMA channel 2 IRQ handler */
    IntIrqDispatcher(2U, 0U, 2U);
    EXIT_INTERRUPT();
}
ISR(Dma0_Ch3_IRQHandler)
{
    /* DMA channel 3 IRQ handler */
    IntIrqDispatcher(2U, 0U, 3U);
    EXIT_INTERRUPT();
}
#if (DMA_IP_HWV2_TCD_NOF_CH > 4U)
ISR(Dma0_Ch4_IRQHandler)
{
    /* DMA channel 4 IRQ handler */
    IntIrqDispatcher(2U, 0U, 4U);
    EXIT_INTERRUPT();
}
ISR(Dma0_Ch5_IRQHandler)
{
    /* DMA channel 5 IRQ handler */
    IntIrqDispatcher(2U, 0U, 5U);
    EXIT_INTERRUPT();
}
ISR(Dma0_Ch6_IRQHandler)
{
    /* DMA channel 6 IRQ handler */
    IntIrqDispatcher(2U, 0U, 6U);
    EXIT_INTERRUPT();
}
ISR(Dma0_Ch7_IRQHandler)
{
    /* DMA channel 7 IRQ handler */
    IntIrqDispatcher(2U, 0U, 7U);
    EXIT_INTERRUPT();
}
ISR(Dma0_Ch8_IRQHandler)
{
    /* DMA channel 8 IRQ handler */
    IntIrqDispatcher(2U, 0U, 8U);
    EXIT_INTERRUPT();
}
ISR(Dma0_Ch9_IRQHandler)
{
    /* DMA channel 9 IRQ handler */
    IntIrqDispatcher(2U, 0U, 9U);
    EXIT_INTERRUPT();
}
ISR(Dma0_Ch10_IRQHandler)
{
    /* DMA channel 10 IRQ handler */
    IntIrqDispatcher(2U, 0U, 10U);
    EXIT_INTERRUPT();
}
ISR(Dma0_Ch11_IRQHandler)
{
    /* DMA channel 11 IRQ handler */
    IntIrqDispatcher(2U, 0U, 11U);
    EXIT_INTERRUPT();
}
ISR(Dma0_Ch12_IRQHandler)
{
    /* DMA channel 12 IRQ handler */
    IntIrqDispatcher(2U, 0U, 12U);
    EXIT_INTERRUPT();
}
ISR(Dma0_Ch13_IRQHandler)
{
    /* DMA channel 13 IRQ handler */
    IntIrqDispatcher(2U, 0U, 13U);
    EXIT_INTERRUPT();
}
ISR(Dma0_Ch14_IRQHandler)
{
    /* DMA channel 14 IRQ handler */
    IntIrqDispatcher(2U, 0U, 14U);
    EXIT_INTERRUPT();
}
ISR(Dma0_Ch15_IRQHandler)
{
    /* DMA channel 15 IRQ handler */
    IntIrqDispatcher(2U, 0U, 15U);
    EXIT_INTERRUPT();
}
#endif

/**
 * @brief The function contains Dma Error Irq Dispatcher
 * @details The function shall Handle DMA interrupt.
 *
 * @param[in]  LocHwVers           Specifies the Logic Hw Version defined by the user.
 * @param[in]  LocHwInst           Specifies the Logic Hw Instance defined by the user.
 *
 * @return void
 *
 * */
static void Dma_Ch0_Ch15_ErrorIrqDispatcher(const uint32 LocHwVers, const uint32 LocHwInst)
{
    uint32 LocHwCh = 0U;
    uint32 TmpHwCh = 0U;
    volatile uint32 chErrStatus = 0U;
    volatile uint32 chErrEnable = 0U;
#if (DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON)
    volatile Dma_Ip_ReturnType MulticoreStatus = DMA_IP_STATUS_ERROR;
    volatile Dma_Ip_HwChannelStateType * HwChannelStatePtr = NULL_PTR;
#endif /* DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON */

#if (DMA_IP_HWV2_TCD_NOF_CH > 4U)
    for(LocHwCh = 0U; LocHwCh < 16U; LocHwCh++)
#else
    for(LocHwCh = 0U; LocHwCh < 4U; LocHwCh++)
#endif
    {
        TmpHwCh = (uint32)1U << LocHwCh;
        chErrStatus = (uint32)(DMA_IP_HWV2_TCD_CH_VALUE(LocHwInst)->reg_ERR & TmpHwCh);
        chErrEnable = (uint32)(DMA_IP_HWV2_TCD_CH_VALUE(LocHwInst)->reg_EEI & TmpHwCh);
    #if (DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON)
        HwChannelStatePtr = Dma_Ip_GetHwChannelStatePointer(LocHwVers, LocHwInst, LocHwCh);
        MulticoreStatus = Dma_Ip_ValidateMultiCoreChannelCall(HwChannelStatePtr->LogicChId->LogicChId);
        if (DMA_IP_STATUS_SUCCESS == MulticoreStatus)
        {
    #endif /* DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON */
            if(0U != chErrStatus)
            {
                if(0U != chErrEnable)
                {
                    Dma_Ip_ErrorIrqHandler(LocHwVers, LocHwInst, LocHwCh);
                }
                /* The event status flag is cleared after execution of the irq handler sue to requirement exception. */
                DMA_IP_HWV2_TCD_CH_VALUE(LocHwInst)->reg_CERR = (uint8)LocHwCh;
            }
    #if (DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON)
        }
    #endif /* DMA_IP_MULTICORE_IS_AVAILABLE == STD_ON */
    }
}

ISR(Dma0_Error_IrqHandler)
{
    /* DMA channel 0 to 15 Error IRQ handler */
    Dma_Ch0_Ch15_ErrorIrqDispatcher(2U, 0U);
}

#define MCL_STOP_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

#endif /* #if (DMA_IP_IS_AVAILABLE == STD_ON) */

/** @} */

/*******************************************************************************
 * EOF
 ******************************************************************************/
