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

#ifndef UART_BOARD_INITPERIPHERALS_PBCFG_H
#define UART_BOARD_INITPERIPHERALS_PBCFG_H

/**
*   @file
*
*   @defgroup uart_driver UART Driver
*   @addtogroup  uart_driver UART Driver
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
==================================================================================================*/
#include "Uart_Types.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define UART_PBCFG_BOARD_INITPERIPHERALS_VENDOR_ID                     43
#define UART_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_MAJOR_VERSION      4
#define UART_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_MINOR_VERSION      4
#define UART_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_REVISION_VERSION   0
#define UART_PBCFG_BOARD_INITPERIPHERALS_SW_MAJOR_VERSION              1
#define UART_PBCFG_BOARD_INITPERIPHERALS_SW_MINOR_VERSION              0
#define UART_PBCFG_BOARD_INITPERIPHERALS_SW_PATCH_VERSION              0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/

/* Checks against Uart_Types.h */
#if (UART_PBCFG_BOARD_INITPERIPHERALS_VENDOR_ID != UART_TYPES_VENDOR_ID)
    #error "Uart_BOARD_INITPERIPHERALS_PBcfg.h and Uart_Types.h have different vendor ids"
#endif
#if ((UART_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_MAJOR_VERSION   != UART_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (UART_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_MINOR_VERSION   != UART_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (UART_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_REVISION_VERSION!= UART_TYPES_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR Version Numbers of Uart_BOARD_INITPERIPHERALS_PBcfg.h and Uart_Types.h are different"
#endif
#if ((UART_PBCFG_BOARD_INITPERIPHERALS_SW_MAJOR_VERSION!= UART_TYPES_SW_MAJOR_VERSION) || \
     (UART_PBCFG_BOARD_INITPERIPHERALS_SW_MINOR_VERSION!= UART_TYPES_SW_MINOR_VERSION) || \
     (UART_PBCFG_BOARD_INITPERIPHERALS_SW_PATCH_VERSION!= UART_TYPES_SW_PATCH_VERSION))
    #error "Software Version Numbers of Uart_BOARD_INITPERIPHERALS_PBcfg.h and Uart_Types.h are different"
#endif


/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                  EXTERNAL CONSTANTS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */

#endif  /* UART_BOARD_INITPERIPHERALS_PBCFG_H */

