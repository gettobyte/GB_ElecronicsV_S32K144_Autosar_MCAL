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

#ifndef UART_CFG_H
#define UART_CFG_H

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
#include "Mcal.h"
#include "Uart_BOARD_InitPeripherals_PBcfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define UART_CFG_VENDOR_ID                    43
#define UART_CFG_AR_RELEASE_MAJOR_VERSION     4
#define UART_CFG_AR_RELEASE_MINOR_VERSION     4
#define UART_CFG_AR_RELEASE_REVISION_VERSION  0
#define UART_CFG_SW_MAJOR_VERSION             1
#define UART_CFG_SW_MINOR_VERSION             0
#define UART_CFG_SW_PATCH_VERSION             1
/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Checks against Uart_BOARD_InitPeripherals_PBcfg.h */
#if (UART_CFG_VENDOR_ID != UART_PBCFG_BOARD_INITPERIPHERALS_VENDOR_ID)
    #error "Uart_Cfg.h and Uart_BOARD_InitPeripherals_PBcfg.h have different vendor ids"
#endif
#if ((UART_CFG_AR_RELEASE_MAJOR_VERSION    != UART_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_MAJOR_VERSION) || \
     (UART_CFG_AR_RELEASE_MINOR_VERSION    != UART_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_MINOR_VERSION) || \
     (UART_CFG_AR_RELEASE_REVISION_VERSION != UART_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_REVISION_VERSION))
     #error "AUTOSAR Version Numbers of Uart_Cfg.h and Uart_BOARD_InitPeripherals_PBcfg.h are different"
#endif
#if ((UART_CFG_SW_MAJOR_VERSION != UART_PBCFG_BOARD_INITPERIPHERALS_SW_MAJOR_VERSION) || \
     (UART_CFG_SW_MINOR_VERSION != UART_PBCFG_BOARD_INITPERIPHERALS_SW_MINOR_VERSION) || \
     (UART_CFG_SW_PATCH_VERSION != UART_PBCFG_BOARD_INITPERIPHERALS_SW_PATCH_VERSION))
    #error "Software Version Numbers of Uart_Cfg.h and Uart_BOARD_InitPeripherals_PBcfg.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Checks against Mcal.h */
    #if ((UART_CFG_AR_RELEASE_MAJOR_VERSION != MCAL_AR_RELEASE_MAJOR_VERSION) || \
         (UART_CFG_AR_RELEASE_MINOR_VERSION != MCAL_AR_RELEASE_MINOR_VERSION))
        #error "AUTOSAR Version Numbers of Uart_Cfg.h and Mcal.h are different"
    #endif
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

#endif /* UART_CFG_H */

