/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : FLEXIO
*   Dependencies         : 
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
#ifndef FLEXIO_UART_IP_BOARD_INITPERIPHERALS_PBCFG_H
#define FLEXIO_UART_IP_BOARD_INITPERIPHERALS_PBCFG_H

/**
*   @file Flexio_Uart_Ip_PBcfg.h
*   @defgroup flexio_uart_ip Flexio UART IPL
*   @addtogroup  flexio_uart_ip Flexio UART IPL
*   @{
*/


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
#include "Flexio_Uart_Ip_Types.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define FLEXIO_UART_IP_PBCFG_BOARD_INITPERIPHERALS_VENDOR_ID                     43
#define FLEXIO_UART_IP_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_MAJOR_VERSION      4
#define FLEXIO_UART_IP_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_MINOR_VERSION      4
#define FLEXIO_UART_IP_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_REVISION_VERSION   0
#define FLEXIO_UART_IP_PBCFG_BOARD_INITPERIPHERALS_SW_MAJOR_VERSION              1
#define FLEXIO_UART_IP_PBCFG_BOARD_INITPERIPHERALS_SW_MINOR_VERSION              0
#define FLEXIO_UART_IP_PBCFG_BOARD_INITPERIPHERALS_SW_PATCH_VERSION              0


/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Checks against Flexio_Uart_Ip_Types.h */
#if (FLEXIO_UART_IP_PBCFG_BOARD_INITPERIPHERALS_VENDOR_ID != FLEXIO_UART_IP_TYPES_VENDOR_ID)
    #error "Flexio_Uart_Ip_PBCfg_BOARD_InitPeripherals.h and Flexio_Uart_Ip_Types.h have different vendor ids"
#endif
#if ((FLEXIO_UART_IP_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_MAJOR_VERSION   != FLEXIO_UART_IP_TYPES_AR_RELEASE_MAJOR_VERSION)|| \
     (FLEXIO_UART_IP_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_MINOR_VERSION   != FLEXIO_UART_IP_TYPES_AR_RELEASE_MINOR_VERSION)|| \
     (FLEXIO_UART_IP_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_REVISION_VERSION!= FLEXIO_UART_IP_TYPES_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR Version Numbers of Flexio_Uart_Ip_BOARD_InitPeripherals.h and Flexio_Uart_Ip_Types.h are different"
#endif
#if ((FLEXIO_UART_IP_PBCFG_BOARD_INITPERIPHERALS_SW_MAJOR_VERSION!= FLEXIO_UART_IP_TYPES_SW_MAJOR_VERSION)|| \
     (FLEXIO_UART_IP_PBCFG_BOARD_INITPERIPHERALS_SW_MINOR_VERSION!= FLEXIO_UART_IP_TYPES_SW_MINOR_VERSION)|| \
     (FLEXIO_UART_IP_PBCFG_BOARD_INITPERIPHERALS_SW_PATCH_VERSION!= FLEXIO_UART_IP_TYPES_SW_PATCH_VERSION))
    #error "Software Version Numbers of Flexio_Uart_Ip_PBCfg_BOARD_InitPeripherals.h and Flexio_Uart_Ip_Types.h are different"
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

/*==================================================================================================
                        GLOBAL VARIABLES AND GLOBAL FUNCTION PROTOTYPES
==================================================================================================*/
/**
* @brief    Declare callback functions if any .
*/
/**
* @brief    Hardware configuration for Flexio Uart Hardware - Configuration.
*/
#define FLEXIO_UART_IP_CONFIG_BOARD_INITPERIPHERALS_PB \
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

#endif /* FLEXIO_UART_BOARD_INITPERIPHERALS_PBCFG_H */

