/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : 
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
#define PLATFORM_INTCTRL_IP_CFG_SW_PATCH_VERSION_C                   1
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

/* List of configuration for interrupts  */
static const IntCtrl_Ip_IrqConfigType aIrqConfiguration[] = {
    {DMA0_IRQn, (boolean)FALSE, 0U},
    {DMA1_IRQn, (boolean)FALSE, 0U},
    {DMA2_IRQn, (boolean)FALSE, 0U},
    {DMA3_IRQn, (boolean)FALSE, 0U},
    {DMA4_IRQn, (boolean)FALSE, 0U},
    {DMA5_IRQn, (boolean)FALSE, 0U},
    {DMA6_IRQn, (boolean)FALSE, 0U},
    {DMA7_IRQn, (boolean)FALSE, 0U},
    {DMA8_IRQn, (boolean)FALSE, 0U},
    {DMA9_IRQn, (boolean)FALSE, 0U},
    {DMA10_IRQn, (boolean)FALSE, 0U},
    {DMA11_IRQn, (boolean)FALSE, 0U},
    {DMA12_IRQn, (boolean)FALSE, 0U},
    {DMA13_IRQn, (boolean)FALSE, 0U},
    {DMA14_IRQn, (boolean)FALSE, 0U},
    {DMA15_IRQn, (boolean)FALSE, 0U},
    {DMA_Error_IRQn, (boolean)FALSE, 0U},
    {MCM_IRQn, (boolean)FALSE, 0U},
    {FTFC_CMD_IRQn, (boolean)FALSE, 0U},
    {FTFC_Read_Collision_IRQn, (boolean)FALSE, 0U},
    {LVD_LVW_IRQn, (boolean)FALSE, 0U},
    {FTFC_Fault_IRQn, (boolean)FALSE, 0U},
    {WDOG_EWM_IRQn, (boolean)FALSE, 0U},
    {RCM_IRQn, (boolean)FALSE, 0U},
    {LPI2C0_Master_IRQn, (boolean)FALSE, 0U},
    {LPI2C0_Slave_IRQn, (boolean)FALSE, 0U},
    {LPSPI0_IRQn, (boolean)FALSE, 0U},
    {LPSPI1_IRQn, (boolean)FALSE, 0U},
    {LPSPI2_IRQn, (boolean)FALSE, 0U},
    {LPUART0_RxTx_IRQn, (boolean)FALSE, 0U},
    {LPUART1_RxTx_IRQn, (boolean)TRUE, 0U},
    {LPUART2_RxTx_IRQn, (boolean)FALSE, 0U},
    {ADC0_IRQn, (boolean)FALSE, 0U},
    {ADC1_IRQn, (boolean)FALSE, 0U},
    {CMP0_IRQn, (boolean)FALSE, 0U},
    {ERM_single_fault_IRQn, (boolean)FALSE, 0U},
    {ERM_double_fault_IRQn, (boolean)FALSE, 0U},
    {RTC_IRQn, (boolean)FALSE, 0U},
    {RTC_Seconds_IRQn, (boolean)FALSE, 0U},
    {LPIT0_Ch0_IRQn, (boolean)FALSE, 0U},
    {LPIT0_Ch1_IRQn, (boolean)FALSE, 0U},
    {LPIT0_Ch2_IRQn, (boolean)FALSE, 0U},
    {LPIT0_Ch3_IRQn, (boolean)FALSE, 0U},
    {PDB0_IRQn, (boolean)FALSE, 0U},
    {SCG_IRQn, (boolean)FALSE, 0U},
    {LPTMR0_IRQn, (boolean)FALSE, 0U},
    {PORTA_IRQn, (boolean)FALSE, 0U},
    {PORTB_IRQn, (boolean)FALSE, 0U},
    {PORTC_IRQn, (boolean)FALSE, 0U},
    {PORTD_IRQn, (boolean)FALSE, 0U},
    {PORTE_IRQn, (boolean)FALSE, 0U},
    {SWI_IRQn, (boolean)FALSE, 0U},
    {PDB1_IRQn, (boolean)FALSE, 0U},
    {FLEXIO_IRQn, (boolean)FALSE, 0U},
    {CAN0_ORed_IRQn, (boolean)FALSE, 0U},
    {CAN0_Error_IRQn, (boolean)FALSE, 0U},
    {CAN0_Wake_Up_IRQn, (boolean)FALSE, 0U},
    {CAN0_ORed_0_15_MB_IRQn, (boolean)FALSE, 0U},
    {CAN0_ORed_16_31_MB_IRQn, (boolean)FALSE, 0U},
    {CAN1_ORed_IRQn, (boolean)FALSE, 0U},
    {CAN1_Error_IRQn, (boolean)FALSE, 0U},
    {CAN1_ORed_0_15_MB_IRQn, (boolean)FALSE, 0U},
    {CAN2_ORed_IRQn, (boolean)FALSE, 0U},
    {CAN2_Error_IRQn, (boolean)FALSE, 0U},
    {CAN2_ORed_0_15_MB_IRQn, (boolean)FALSE, 0U},
    {FTM0_Ch0_Ch1_IRQn, (boolean)FALSE, 0U},
    {FTM0_Ch2_Ch3_IRQn, (boolean)FALSE, 0U},
    {FTM0_Ch4_Ch5_IRQn, (boolean)FALSE, 0U},
    {FTM0_Ch6_Ch7_IRQn, (boolean)FALSE, 0U},
    {FTM0_Fault_IRQn, (boolean)FALSE, 0U},
    {FTM0_Ovf_Reload_IRQn, (boolean)FALSE, 0U},
    {FTM1_Ch0_Ch1_IRQn, (boolean)FALSE, 0U},
    {FTM1_Ch2_Ch3_IRQn, (boolean)FALSE, 0U},
    {FTM1_Ch4_Ch5_IRQn, (boolean)FALSE, 0U},
    {FTM1_Ch6_Ch7_IRQn, (boolean)FALSE, 0U},
    {FTM1_Fault_IRQn, (boolean)FALSE, 0U},
    {FTM1_Ovf_Reload_IRQn, (boolean)FALSE, 0U},
    {FTM2_Ch0_Ch1_IRQn, (boolean)FALSE, 0U},
    {FTM2_Ch2_Ch3_IRQn, (boolean)FALSE, 0U},
    {FTM2_Ch4_Ch5_IRQn, (boolean)FALSE, 0U},
    {FTM2_Ch6_Ch7_IRQn, (boolean)FALSE, 0U},
    {FTM2_Fault_IRQn, (boolean)FALSE, 0U},
    {FTM2_Ovf_Reload_IRQn, (boolean)FALSE, 0U},
    {FTM3_Ch0_Ch1_IRQn, (boolean)FALSE, 0U},
    {FTM3_Ch2_Ch3_IRQn, (boolean)FALSE, 0U},
    {FTM3_Ch4_Ch5_IRQn, (boolean)FALSE, 0U},
    {FTM3_Ch6_Ch7_IRQn, (boolean)FALSE, 0U},
    {FTM3_Fault_IRQn, (boolean)FALSE, 0U},
    {FTM3_Ovf_Reload_IRQn, (boolean)FALSE, 0U},
};
const IntCtrl_Ip_CtrlConfigType intCtrlConfig = {
    89U,
    aIrqConfiguration
};

#define PLATFORM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Platform_MemMap.h"

#ifdef __cplusplus
}
#endif

