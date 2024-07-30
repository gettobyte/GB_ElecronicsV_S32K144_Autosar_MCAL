/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : 
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

#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
                                         INCLUDE FILES
==================================================================================================*/
#include "IntCtrl_Ip_Cfg.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define PLATFORM_INTCTRL_IP_CFG_VENDOR_ID_C                          43
#define PLATFORM_INTCTRL_IP_CFG_SW_MAJOR_VERSION_C                   1
#define PLATFORM_INTCTRL_IP_CFG_SW_MINOR_VERSION_C                   0
#define PLATFORM_INTCTRL_IP_CFG_SW_PATCH_VERSION_C                   0
/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and IntCtrl_Ip_Cfg header file are of the same vendor */
#if (PLATFORM_INTCTRL_IP_CFG_VENDOR_ID_C != PLATFORM_INTCTRL_IP_CFG_VENDOR_ID)
    #error "IntCtrl_Ip_Cfg.c and IntCtrl_Ip_Cfg.h have different vendor ids"
#endif

/* Check if current file and IntCtrl_Ip_Cfg header file are of the same Software version */
#if ((PLATFORM_INTCTRL_IP_CFG_SW_MAJOR_VERSION_C != PLATFORM_INTCTRL_IP_CFG_SW_MAJOR_VERSION) || \
     (PLATFORM_INTCTRL_IP_CFG_SW_MINOR_VERSION_C != PLATFORM_INTCTRL_IP_CFG_SW_MINOR_VERSION) || \
     (PLATFORM_INTCTRL_IP_CFG_SW_PATCH_VERSION_C != PLATFORM_INTCTRL_IP_CFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of IntCtrl_Ip_Cfg.c and IntCtrl_Ip_Cfg.h are different"
#endif
/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/
#define PLATFORM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Platform_MemMap.h"

/* List of configurations for routing interrupts */
static const IntCtrl_Ip_IrqRouteConfigType aIrqRouteConfig[] = {
    {DMA0_IRQn, 0U, undefined_handler},
    {DMA1_IRQn, 0U, undefined_handler},
    {DMA2_IRQn, 0U, undefined_handler},
    {DMA3_IRQn, 0U, undefined_handler},
    {DMA4_IRQn, 0U, undefined_handler},
    {DMA5_IRQn, 0U, undefined_handler},
    {DMA6_IRQn, 0U, undefined_handler},
    {DMA7_IRQn, 0U, undefined_handler},
    {DMA8_IRQn, 0U, undefined_handler},
    {DMA9_IRQn, 0U, undefined_handler},
    {DMA10_IRQn, 0U, undefined_handler},
    {DMA11_IRQn, 0U, undefined_handler},
    {DMA12_IRQn, 0U, undefined_handler},
    {DMA13_IRQn, 0U, undefined_handler},
    {DMA14_IRQn, 0U, undefined_handler},
    {DMA15_IRQn, 0U, undefined_handler},
    {DMA_Error_IRQn, 0U, undefined_handler},
    {MCM_IRQn, 0U, undefined_handler},
    {FTFC_CMD_IRQn, 0U, undefined_handler},
    {FTFC_Read_Collision_IRQn, 0U, undefined_handler},
    {LVD_LVW_IRQn, 0U, undefined_handler},
    {FTFC_Fault_IRQn, 0U, undefined_handler},
    {WDOG_EWM_IRQn, 0U, undefined_handler},
    {RCM_IRQn, 0U, undefined_handler},
    {LPI2C0_Master_IRQn, 0U, undefined_handler},
    {LPI2C0_Slave_IRQn, 0U, undefined_handler},
    {LPSPI0_IRQn, 0U, undefined_handler},
    {LPSPI1_IRQn, 0U, undefined_handler},
    {LPSPI2_IRQn, 0U, undefined_handler},
    {LPUART0_RxTx_IRQn, 0U, undefined_handler},
    {LPUART1_RxTx_IRQn, 0U, undefined_handler},
    {LPUART2_RxTx_IRQn, 0U, undefined_handler},
    {ADC0_IRQn, 0U, undefined_handler},
    {ADC1_IRQn, 0U, undefined_handler},
    {CMP0_IRQn, 0U, undefined_handler},
    {ERM_single_fault_IRQn, 0U, undefined_handler},
    {ERM_double_fault_IRQn, 0U, undefined_handler},
    {RTC_IRQn, 0U, undefined_handler},
    {RTC_Seconds_IRQn, 0U, undefined_handler},
    {LPIT0_Ch0_IRQn, 0U, undefined_handler},
    {LPIT0_Ch1_IRQn, 0U, undefined_handler},
    {LPIT0_Ch2_IRQn, 0U, undefined_handler},
    {LPIT0_Ch3_IRQn, 0U, undefined_handler},
    {PDB0_IRQn, 0U, undefined_handler},
    {SCG_IRQn, 0U, undefined_handler},
    {LPTMR0_IRQn, 0U, undefined_handler},
    {PORTA_IRQn, 0U, undefined_handler},
    {PORTB_IRQn, 0U, undefined_handler},
    {PORTC_IRQn, 0U, undefined_handler},
    {PORTD_IRQn, 0U, undefined_handler},
    {PORTE_IRQn, 0U, undefined_handler},
    {SWI_IRQn, 0U, undefined_handler},
    {PDB1_IRQn, 0U, undefined_handler},
    {FLEXIO_IRQn, 0U, undefined_handler},
    {CAN0_ORed_IRQn, 0U, undefined_handler},
    {CAN0_Error_IRQn, 0U, undefined_handler},
    {CAN0_Wake_Up_IRQn, 0U, undefined_handler},
    {CAN0_ORed_0_15_MB_IRQn, 0U, undefined_handler},
    {CAN0_ORed_16_31_MB_IRQn, 0U, undefined_handler},
    {CAN1_ORed_IRQn, 0U, undefined_handler},
    {CAN1_Error_IRQn, 0U, undefined_handler},
    {CAN1_ORed_0_15_MB_IRQn, 0U, undefined_handler},
    {CAN2_ORed_IRQn, 0U, undefined_handler},
    {CAN2_Error_IRQn, 0U, undefined_handler},
    {CAN2_ORed_0_15_MB_IRQn, 0U, undefined_handler},
    {FTM0_Ch0_Ch1_IRQn, 0U, undefined_handler},
    {FTM0_Ch2_Ch3_IRQn, 0U, undefined_handler},
    {FTM0_Ch4_Ch5_IRQn, 0U, undefined_handler},
    {FTM0_Ch6_Ch7_IRQn, 0U, undefined_handler},
    {FTM0_Fault_IRQn, 0U, undefined_handler},
    {FTM0_Ovf_Reload_IRQn, 0U, undefined_handler},
    {FTM1_Ch0_Ch1_IRQn, 0U, undefined_handler},
    {FTM1_Ch2_Ch3_IRQn, 0U, undefined_handler},
    {FTM1_Ch4_Ch5_IRQn, 0U, undefined_handler},
    {FTM1_Ch6_Ch7_IRQn, 0U, undefined_handler},
    {FTM1_Fault_IRQn, 0U, undefined_handler},
    {FTM1_Ovf_Reload_IRQn, 0U, undefined_handler},
    {FTM2_Ch0_Ch1_IRQn, 0U, undefined_handler},
    {FTM2_Ch2_Ch3_IRQn, 0U, undefined_handler},
    {FTM2_Ch4_Ch5_IRQn, 0U, undefined_handler},
    {FTM2_Ch6_Ch7_IRQn, 0U, undefined_handler},
    {FTM2_Fault_IRQn, 0U, undefined_handler},
    {FTM2_Ovf_Reload_IRQn, 0U, undefined_handler},
    {FTM3_Ch0_Ch1_IRQn, 0U, undefined_handler},
    {FTM3_Ch2_Ch3_IRQn, 0U, undefined_handler},
    {FTM3_Ch4_Ch5_IRQn, 0U, undefined_handler},
    {FTM3_Ch6_Ch7_IRQn, 0U, undefined_handler},
    {FTM3_Fault_IRQn, 0U, undefined_handler},
    {FTM3_Ovf_Reload_IRQn, 0U, undefined_handler},
};
/* Configuration structure for interrupt routing */
const IntCtrl_Ip_GlobalRouteConfigType intRouteConfig = {
    89U,
    aIrqRouteConfig
};

#define PLATFORM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Platform_MemMap.h"

#ifdef __cplusplus
}
#endif

