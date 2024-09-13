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

#ifndef LPUART_UART_IP_DEFINES_H
#define LPUART_UART_IP_DEFINES_H

/**
*   @file
*   @defgroup lpuart_uart_ip Lpuart UART IPL
*   @addtogroup  lpuart_uart_ip Lpuart UART IPL
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
* 4) user callback header files
==================================================================================================*/
#include "Mcal.h"
#include "S32K144_LPUART.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define LPUART_UART_IP_DEFINES_VENDOR_ID                     43
#define LPUART_UART_IP_DEFINES_AR_RELEASE_MAJOR_VERSION      4
#define LPUART_UART_IP_DEFINES_AR_RELEASE_MINOR_VERSION      4
#define LPUART_UART_IP_DEFINES_AR_RELEASE_REVISION_VERSION   0
#define LPUART_UART_IP_DEFINES_SW_MAJOR_VERSION              1
#define LPUART_UART_IP_DEFINES_SW_MINOR_VERSION              0
#define LPUART_UART_IP_DEFINES_SW_PATCH_VERSION              1

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Checks against Mcal.h */
    #if ((LPUART_UART_IP_DEFINES_AR_RELEASE_MAJOR_VERSION != MCAL_AR_RELEASE_MAJOR_VERSION) || \
         (LPUART_UART_IP_DEFINES_AR_RELEASE_MINOR_VERSION != MCAL_AR_RELEASE_MINOR_VERSION))
        #error "AUTOSAR Version Numbers of Lpuart_Uart_Ip_Defines.h and Mcal.h are different"
    #endif
#endif
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
 *                                     DEFINES AND MACROS
==================================================================================================*/
/* @brief Development error detection */
#define LPUART_UART_IP_DEV_ERROR_DETECT         (STD_ON)

/* @brief Number of available hardware instances */
#define LPUART_UART_IP_NUMBER_OF_INSTANCES      (3U)

/* @brief Uart Osif source counter. This parameter is used to select between different OsIf counter implementation */
#define LPUART_UART_IP_TIMEOUT_TYPE             (OSIF_COUNTER_DUMMY)

/* @brief Number of loops before returning STATUS_TIMEOUT.*/
#define LPUART_UART_IP_TIMEOUT_VALUE_US         (1000)

/* @brief Lpuart DMA support */
#define LPUART_UART_IP_HAS_DMA_ENABLED          (STD_OFF)

/* @brief Lpuart Usermode support */
#define LPUART_UART_IP_ENABLE_USER_MODE_SUPPORT (STD_OFF) /* Disable User Mode */

/* @brief Support for Internal Loopback. If this parameter has been configured to TRUE, the Uart driver will be executed in Loopback mode. */
#define LPUART_UART_IP_ENABLE_INTERNAL_LOOPBACK  (STD_OFF)

#if (STD_ON == LPUART_UART_IP_ENABLE_INTERNAL_LOOPBACK)
    /* @brief Array of instances that have loopback mode enabled. */
    #define LPUART_UART_IP_ENABLE_INTERNAL_LOOPBACK_PER_INSTANCE  {(boolean) FALSE, (boolean) FALSE, (boolean) FALSE}
#endif

/*==================================================================================================
*                                            ENUMS
==================================================================================================*/

/*==================================================================================================
*                               STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/



#ifdef __cplusplus
}
#endif

/** @} */

#endif /* LPUART_UART_IP_DEFINES_H */

