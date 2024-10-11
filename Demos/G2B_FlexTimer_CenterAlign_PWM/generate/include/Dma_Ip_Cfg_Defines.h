/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : DMA,CACHE,TRGMUX,FLEXIO
*   Dependencies         : none
*
*   Autosar Version      : 4.4.0
*   Autosar Revision     : ASR_REL_4_4_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 1.0.1
*   Build Version        : S32K1_RTD_1_0_1_D2202_ASR_REL_4_4_REV_0000_20220224
*
*   (c) Copyright 2020-2022 NXP Semiconductors
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
#ifndef DMA_IP_CFG_DEFINES_H_
#define DMA_IP_CFG_DEFINES_H_

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "StandardTypes.h"
#include "BasicTypes.h"

/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define DMA_IP_CFG_DEFINES_VENDOR_ID                       43
#define DMA_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION        4
#define DMA_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION        4
#define DMA_IP_CFG_DEFINES_AR_RELEASE_REVISION_VERSION     0
#define DMA_IP_CFG_DEFINES_SW_MAJOR_VERSION                1
#define DMA_IP_CFG_DEFINES_SW_MINOR_VERSION                0
#define DMA_IP_CFG_DEFINES_SW_PATCH_VERSION                1

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if header file and StandardTypes header file are of the same Autosar version */
#if ((DMA_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION) || \
     (DMA_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Dma_Ip_Cfg_Defines.h and StandardTypes.h are different"
#endif
#endif

/*===============================================================================================
                                       DEFINES AND MACROS
===============================================================================================*/
/*------------------------------------------------------/
/         DMA IP USER MODE SUPPORT                      /
/------------------------------------------------------*/

#define DMA_IP_USER_MODE_SUPPORT_IS_AVAILABLE    STD_OFF

#define DMA_IP_REG_PROT_AVAILABLE                  STD_OFF

#define DMA_IP_MP_REG_PROT_AVAILABLE               STD_OFF

#define DMA_IP_TCD_REG_PROT_AVAILABLE              STD_OFF

#define DMA_IP_DMAMUX_REG_PROT_AVAILABLE           STD_OFF
/*-----------------------------------------------/
/  DMAMUX IP SUPPORT                             /
/-----------------------------------------------*/
#define DMA_IP_DMAMUX_IS_AVAILABLE                         STD_ON
/*-----------------------------------------------/
/  DMA IP DEV ERROR DETECT SUPPORT               /
/-----------------------------------------------*/
#define DMA_IP_DEV_ERROR_DETECT                 STD_OFF
/*-----------------------------------------------/
/  DMAMUX NOT ALIGNED                            /
/-----------------------------------------------*/
#define DMAMUX_IP_NOT_ALIGNED                   STD_OFF

/*-----------------------------------------------/
/  DMA IP SUPPORT                                /
/-----------------------------------------------*/
#define DMA_IP_IS_AVAILABLE                              STD_OFF

#define DMA_IP_DMACRC_IS_AVAILABLE                       STD_OFF

#define DMA_IP_MULTICORE_IS_AVAILABLE                    STD_OFF

#define DMA_IP_MASTER_ID_REPLICATION_IS_AVAILABLE        STD_OFF

#define DMA_IP_BUFFERED_WRITES_IS_AVAILABLE              STD_OFF

#define DMA_IP_STORE_DST_ADDR_IS_AVAILABLE               STD_OFF

#define DMA_IP_END_OF_PACKET_SIGNAL_IS_AVAILABLE         STD_OFF

#define DMA_IP_PREEMPTION_IS_AVAILABLE                   STD_OFF

#define DMA_IP_DISABLE_PREEMPT_IS_AVAILABLE              STD_OFF

#define DMA_IP_GROUP_PRIORITY_IS_AVAILABLE               STD_OFF
/*-----------------------------------------------/
/  DMA HARDWARE VERSION                          /
/-----------------------------------------------*/
#define DMA_IP_HWV2_IS_AVAILABLE                         STD_ON
#define DMA_IP_HARDWARE_VERSION_2                        ((uint8)2U)
#define DMA_IP_HWV3_IS_AVAILABLE                         STD_OFF
#define DMA_IP_HARDWARE_VERSION_3                        ((uint8)3U)

/*-----------------------------------------------/
/  DMA HARDWARE INSTANCES                        /
/-----------------------------------------------*/
#define DMA_IP_HW_INST_0                                 ((uint8)(0U))

/*-----------------------------------------------/
/  DMA HARDWARE CHANNELS                         /
/-----------------------------------------------*/
#define DMA_IP_HW_CH_0                                   ((uint8)(0U))
#define DMA_IP_HW_CH_1                                   ((uint8)(1U))
#define DMA_IP_HW_CH_2                                   ((uint8)(2U))
#define DMA_IP_HW_CH_3                                   ((uint8)(3U))
#define DMA_IP_HW_CH_4                                   ((uint8)(4U))
#define DMA_IP_HW_CH_5                                   ((uint8)(5U))
#define DMA_IP_HW_CH_6                                   ((uint8)(6U))
#define DMA_IP_HW_CH_7                                   ((uint8)(7U))
#define DMA_IP_HW_CH_8                                   ((uint8)(8U))
#define DMA_IP_HW_CH_9                                   ((uint8)(9U))
#define DMA_IP_HW_CH_10                                  ((uint8)(10U))
#define DMA_IP_HW_CH_11                                  ((uint8)(11U))
#define DMA_IP_HW_CH_12                                  ((uint8)(12U))
#define DMA_IP_HW_CH_13                                  ((uint8)(13U))
#define DMA_IP_HW_CH_14                                  ((uint8)(14U))
#define DMA_IP_HW_CH_15                                  ((uint8)(15U))

/*-----------------------------------------------/
/  DMA REQUESTS                                  /
/-----------------------------------------------*/

#define DMA_IP_REQ_MUX0_DISABLED                         ((uint8)(0U))
#define DMA_IP_REQ_MUX0_ENET_TIMER_CH0_CH3               ((uint8)(1U))
#define DMA_IP_REQ_MUX0_LPUART0_RX                       ((uint8)(2U))
#define DMA_IP_REQ_MUX0_LPUART0_TX                       ((uint8)(3U))
#define DMA_IP_REQ_MUX0_LPUART1_RX                       ((uint8)(4U))
#define DMA_IP_REQ_MUX0_LPUART1_TX                       ((uint8)(5U))
#define DMA_IP_REQ_MUX0_LPUART2_RX                       ((uint8)(6U))
#define DMA_IP_REQ_MUX0_LPUART2_TX                       ((uint8)(7U))
#define DMA_IP_REQ_MUX0_LPI2C1_RX                        ((uint8)(8U))
#define DMA_IP_REQ_MUX0_LPI2C1_TX                        ((uint8)(9U))
#define DMA_IP_REQ_MUX0_FLEXIO_SHIFTER0                  ((uint8)(10U))
#define DMA_IP_REQ_MUX0_FLEXIO_SHIFTER1                  ((uint8)(11U))
#define DMA_IP_REQ_MUX0_FLEXIO_SHIFTER2                  ((uint8)(12U))
#define DMA_IP_REQ_MUX0_FLEXIO_SHIFTER3                  ((uint8)(13U))
#define DMA_IP_REQ_MUX0_FLEXIO_SHIFTER2_SAI1_RX          ((uint8)(12U))
#define DMA_IP_REQ_MUX0_FLEXIO_SHIFTER3_SAI1_TX          ((uint8)(13U))
#define DMA_IP_REQ_MUX0_LPSPI0_RX                        ((uint8)(14U))
#define DMA_IP_REQ_MUX0_LPSPI0_TX                        ((uint8)(15U))
#define DMA_IP_REQ_MUX0_LPSPI1_RX                        ((uint8)(16U))
#define DMA_IP_REQ_MUX0_LPSPI1_TX                        ((uint8)(17U))
#define DMA_IP_REQ_MUX0_LPSPI2_RX                        ((uint8)(18U))
#define DMA_IP_REQ_MUX0_LPSPI2_TX                        ((uint8)(19U))
#define DMA_IP_REQ_MUX0_FTM1_CHANNEL_0                   ((uint8)(20U))
#define DMA_IP_REQ_MUX0_FTM1_CHANNEL_1                   ((uint8)(21U))
#define DMA_IP_REQ_MUX0_FTM1_CHANNEL_2                   ((uint8)(22U))
#define DMA_IP_REQ_MUX0_FTM1_CHANNEL_3                   ((uint8)(23U))
#define DMA_IP_REQ_MUX0_FTM1_CHANNEL_4                   ((uint8)(24U))
#define DMA_IP_REQ_MUX0_FTM1_CHANNEL_5                   ((uint8)(25U))
#define DMA_IP_REQ_MUX0_FTM1_CHANNEL_6                   ((uint8)(26U))
#define DMA_IP_REQ_MUX0_FTM1_CHANNEL_7                   ((uint8)(27U))
#define DMA_IP_REQ_MUX0_FTM2_CHANNEL_0                   ((uint8)(28U))
#define DMA_IP_REQ_MUX0_FTM2_CHANNEL_1                   ((uint8)(29U))
#define DMA_IP_REQ_MUX0_FTM2_CHANNEL_2                   ((uint8)(30U))
#define DMA_IP_REQ_MUX0_FTM2_CHANNEL_3                   ((uint8)(31U))
#define DMA_IP_REQ_MUX0_FTM2_CHANNEL_4                   ((uint8)(32U))
#define DMA_IP_REQ_MUX0_FTM2_CHANNEL_5                   ((uint8)(33U))
#define DMA_IP_REQ_MUX0_FTM2_CHANNEL_6                   ((uint8)(34U))
#define DMA_IP_REQ_MUX0_FTM2_CHANNEL_7                   ((uint8)(35U))
#define DMA_IP_REQ_MUX0_FTM0_OR_CH0_CH7                  ((uint8)(36U))
#define DMA_IP_REQ_MUX0_FTM3_OR_CH0_CH7                  ((uint8)(37U))
#define DMA_IP_REQ_MUX0_FTM4_OR_CH0_CH7                  ((uint8)(38U))
#define DMA_IP_REQ_MUX0_FTM5_OR_CH0_CH7                  ((uint8)(39U))
#define DMA_IP_REQ_MUX0_FTM6_OR_CH0_CH7                  ((uint8)(40U))
#define DMA_IP_REQ_MUX0_FTM7_OR_CH0_CH7                  ((uint8)(41U))
#define DMA_IP_REQ_MUX0_ADC0                             ((uint8)(42U))
#define DMA_IP_REQ_MUX0_ADC1                             ((uint8)(43U))
#define DMA_IP_REQ_MUX0_LPI2C0_RX                        ((uint8)(44U))
#define DMA_IP_REQ_MUX0_LPI2C0_TX                        ((uint8)(45U))
#define DMA_IP_REQ_MUX0_PDB0                             ((uint8)(46U))
#define DMA_IP_REQ_MUX0_PDB1                             ((uint8)(47U))
#define DMA_IP_REQ_MUX0_CMP0                             ((uint8)(48U))
#define DMA_IP_REQ_MUX0_PORTA                            ((uint8)(49U))
#define DMA_IP_REQ_MUX0_PORTB                            ((uint8)(50U))
#define DMA_IP_REQ_MUX0_PORTC                            ((uint8)(51U))
#define DMA_IP_REQ_MUX0_PORTD                            ((uint8)(52U))
#define DMA_IP_REQ_MUX0_PORTE                            ((uint8)(53U))
#define DMA_IP_REQ_MUX0_FLEXCAN0                         ((uint8)(54U))
#define DMA_IP_REQ_MUX0_FLEXCAN1                         ((uint8)(55U))
#define DMA_IP_REQ_MUX0_FLEXCAN2                         ((uint8)(56U))
#define DMA_IP_REQ_MUX0_SAI0_RX                          ((uint8)(57U))
#define DMA_IP_REQ_MUX0_SAI0_TX                          ((uint8)(58U))
#define DMA_IP_REQ_MUX0_LPTMR0                           ((uint8)(59U))
#define DMA_IP_REQ_MUX0_QUADSPI_RX                       ((uint8)(60U))
#define DMA_IP_REQ_MUX0_QUADSPI_TX                       ((uint8)(61U))
#define DMA_IP_REQ_MUX0_ALWAYS_ON0                       ((uint8)(62U))
#define DMA_IP_REQ_MUX0_ALWAYS_ON1                       ((uint8)(63U))

/*-----------------------------------------------/
/  DMA CHANNEL PRIORITY                          /
/-----------------------------------------------*/
#define DMA_IP_LEVEL_PRIO0                               ((uint8)(0U))
#define DMA_IP_LEVEL_PRIO1                               ((uint8)(1U))
#define DMA_IP_LEVEL_PRIO2                               ((uint8)(2U))
#define DMA_IP_LEVEL_PRIO3                               ((uint8)(3U))
#define DMA_IP_LEVEL_PRIO4                               ((uint8)(4U))
#define DMA_IP_LEVEL_PRIO5                               ((uint8)(5U))
#define DMA_IP_LEVEL_PRIO6                               ((uint8)(6U))
#define DMA_IP_LEVEL_PRIO7                               ((uint8)(7U))
#define DMA_IP_LEVEL_PRIO8                               ((uint8)(8U))
#define DMA_IP_LEVEL_PRIO9                               ((uint8)(9U))
#define DMA_IP_LEVEL_PRIO10                              ((uint8)(10U))
#define DMA_IP_LEVEL_PRIO11                              ((uint8)(11U))
#define DMA_IP_LEVEL_PRIO12                              ((uint8)(12U))
#define DMA_IP_LEVEL_PRIO13                              ((uint8)(13U))
#define DMA_IP_LEVEL_PRIO14                              ((uint8)(14U))
#define DMA_IP_LEVEL_PRIO15                              ((uint8)(15U))

/*-----------------------------------------------/
/  DMA TRANSFER SIZE                             /
/-----------------------------------------------*/
#define DMA_IP_TRANSFER_SIZE_1_BYTE                      ((uint8)(0U))
#define DMA_IP_TRANSFER_SIZE_2_BYTE                      ((uint8)(1U))
#define DMA_IP_TRANSFER_SIZE_4_BYTE                      ((uint8)(2U))
#define DMA_IP_TRANSFER_SIZE_16_BYTE                     ((uint8)(4U))
#define DMA_IP_TRANSFER_SIZE_32_BYTE                     ((uint8)(5U))

/*-----------------------------------------------/
/  DMA BANDWIDTH CONTROL                         /
/-----------------------------------------------*/
#define DMA_IP_BWC_ENGINE_NO_STALL                       ((uint8)(0U))
#define DMA_IP_BWC_ENGINE_4CYCLE_STALL                   ((uint8)(2U))
#define DMA_IP_BWC_ENGINE_8CYCLE_STALL                   ((uint8)(3U))

/*-----------------------------------------------/
/  DMA CONVERT DCHPRI                            /
/-----------------------------------------------*/
#define DMA_CHN_TO_DCHPRI_INDEX(x)                       ((x) ^ 3U)

#ifdef __cplusplus
}
#endif

#endif  /* #ifndef DMA_IP_CFG_DEFINES_H_ */

/*==================================================================================================
 *                                        END OF FILE
==================================================================================================*/

