/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : FLEXIO
*   Dependencies         : 
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

#ifndef LPUART_UART_IP_CFG_H
#define LPUART_UART_IP_CFG_H

/**
*   @file Lpuart_Uart_Ip_Cfg.h
*   @defgroup lpuart_uart_ip Lpuart UART IPL
*   @addtogroup  lpuart_uart_ip Lpuart UART IPL
*   @{
*/


#ifdef __cplusplus
extern "C"
{
#endif


/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
* 4) user callback header files
==================================================================================================*/
#include "Lpuart_Uart_Ip_BOARD_InitPeripherals_PBcfg.h"
#include "StandardTypes.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define LPUART_UART_IP_CFG_VENDOR_ID                     43
#define LPUART_UART_IP_CFG_AR_RELEASE_MAJOR_VERSION      4
#define LPUART_UART_IP_CFG_AR_RELEASE_MINOR_VERSION      4
#define LPUART_UART_IP_CFG_AR_RELEASE_REVISION_VERSION   0
#define LPUART_UART_IP_CFG_SW_MAJOR_VERSION              1
#define LPUART_UART_IP_CFG_SW_MINOR_VERSION              0
#define LPUART_UART_IP_CFG_SW_PATCH_VERSION              1

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Checks against Lpuart_Uart_Ip_BOARD_InitPeripherals_PBcfg.h */
#if (LPUART_UART_IP_CFG_VENDOR_ID != LPUART_UART_IP_PBCFG_BOARD_INITPERIPHERALS_VENDOR_ID)
    #error "Lpuart_Uart_Ip_Cfg.h and Lpuart_Uart_Ip_BOARD_InitPeripherals_PBcfg.h have different vendor ids"
#endif
#if ((LPUART_UART_IP_CFG_AR_RELEASE_MAJOR_VERSION    != LPUART_UART_IP_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_MAJOR_VERSION) || \
     (LPUART_UART_IP_CFG_AR_RELEASE_MINOR_VERSION    != LPUART_UART_IP_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_MINOR_VERSION) || \
     (LPUART_UART_IP_CFG_AR_RELEASE_REVISION_VERSION != LPUART_UART_IP_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_REVISION_VERSION))
     #error "AUTOSAR Version Numbers of Lpuart_Uart_Ip_Cfg.h and Lpuart_Uart_Ip_BOARD_InitPeripherals_PBcfg.h are different"
#endif
#if ((LPUART_UART_IP_CFG_SW_MAJOR_VERSION != LPUART_UART_IP_PBCFG_BOARD_INITPERIPHERALS_SW_MAJOR_VERSION) || \
     (LPUART_UART_IP_CFG_SW_MINOR_VERSION != LPUART_UART_IP_PBCFG_BOARD_INITPERIPHERALS_SW_MINOR_VERSION) || \
     (LPUART_UART_IP_CFG_SW_PATCH_VERSION != LPUART_UART_IP_PBCFG_BOARD_INITPERIPHERALS_SW_PATCH_VERSION))
    #error "Software Version Numbers of Lpuart_Uart_Ip_Cfg.h and Lpuart_Uart_Ip_BOARD_InitPeripherals_PBcfg.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if current file and StandardTypes.h header file are of the same Autosar version */
    #if ((LPUART_UART_IP_CFG_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION) || \
            (LPUART_UART_IP_CFG_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of Lpuart_Uart_Ip_Cfg.h and StandardTypes.h are different"
    #endif
#endif
/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/


/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/

#define LPUART_UART_IP_CONFIG_EXT \
     LPUART_UART_IP_CONFIG_BOARD_INITPERIPHERALS_PB \

/*==================================================================================================
                                       GLOBAL MACROS
==================================================================================================*/


/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/


/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */

#endif /* LPUART_UART_IP_CFG_H */

