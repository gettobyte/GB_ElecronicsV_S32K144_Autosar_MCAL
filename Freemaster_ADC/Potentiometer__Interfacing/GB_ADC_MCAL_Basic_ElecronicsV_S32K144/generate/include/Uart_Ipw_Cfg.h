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

#ifndef UART_IPW_CFG_H
#define UART_IPW_CFG_H

/**
*   @file
*   @internal
*   @addtogroup UART_IPW_DRIVER
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

#include "Uart_Ipw_BOARD_InitPeripherals_PBcfg.h"
#include "Uart_Ipw_Types.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define UART_IPW_CFG_VENDOR_ID                    43
#define UART_IPW_CFG_AR_RELEASE_MAJOR_VERSION     4
#define UART_IPW_CFG_AR_RELEASE_MINOR_VERSION     4
#define UART_IPW_CFG_AR_RELEASE_REVISION_VERSION  0
#define UART_IPW_CFG_SW_MAJOR_VERSION             1
#define UART_IPW_CFG_SW_MINOR_VERSION             0
#define UART_IPW_CFG_SW_PATCH_VERSION             0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/

/* Checks against Uart_Ipw_BOARD_InitPeripherals_PBcfg.h */
#if (UART_IPW_CFG_VENDOR_ID != UART_IPW_PBCFG_BOARD_INITPERIPHERALS_VENDOR_ID)
    #error "Uart_Ipw_Cfg.h and Uart_Ipw_BOARD_INITPERIPHERALS_PBcfg.h have different vendor ids"
#endif
#if ((UART_IPW_CFG_AR_RELEASE_MAJOR_VERSION    != UART_IPW_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_MAJOR_VERSION) || \
     (UART_IPW_CFG_AR_RELEASE_MINOR_VERSION    != UART_IPW_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_MINOR_VERSION) || \
     (UART_IPW_CFG_AR_RELEASE_REVISION_VERSION != UART_IPW_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_REVISION_VERSION))
     #error "AUTOSAR Version Numbers of Uart_Ipw_Cfg.h and Uart_Ipw_BOARD_INITPERIPHERALS_PBcfg.h are different"
#endif
#if ((UART_IPW_CFG_SW_MAJOR_VERSION != UART_IPW_PBCFG_BOARD_INITPERIPHERALS_SW_MAJOR_VERSION) || \
     (UART_IPW_CFG_SW_MINOR_VERSION != UART_IPW_PBCFG_BOARD_INITPERIPHERALS_SW_MINOR_VERSION) || \
     (UART_IPW_CFG_SW_PATCH_VERSION != UART_IPW_PBCFG_BOARD_INITPERIPHERALS_SW_PATCH_VERSION))
    #error "Software Version Numbers of Uart_Ipw_Cfg.h and Uart_Ipw_BOARD_INITPERIPHERALS_PBcfg.h are different"
#endif
/*Checks against Uart_Ipw_Types.h */
#if (UART_IPW_CFG_VENDOR_ID!= UART_IPW_TYPES_VENDOR_ID)
    #error "Uart_Ipw_Cfg.h and Uart_Ipw_Types.h have different vendor ids"
#endif
#if ((UART_IPW_CFG_AR_RELEASE_MAJOR_VERSION   != UART_IPW_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (UART_IPW_CFG_AR_RELEASE_MINOR_VERSION   != UART_IPW_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (UART_IPW_CFG_AR_RELEASE_REVISION_VERSION!= UART_IPW_TYPES_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR Version Numbers of Uart_Ipw_Cfg.h and Uart_Ipw_Types.h are different"
#endif
#if ((UART_IPW_CFG_SW_MAJOR_VERSION!= UART_IPW_TYPES_SW_MAJOR_VERSION) || \
     (UART_IPW_CFG_SW_MINOR_VERSION!= UART_IPW_TYPES_SW_MINOR_VERSION) || \
     (UART_IPW_CFG_SW_PATCH_VERSION!= UART_IPW_TYPES_SW_PATCH_VERSION))
    #error "Software Version Numbers of Uart_Ipw_Cfg.h and Uart_Ipw_Types.h are different"
#endif
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
#define UART_IPW_CONFIG_EXT \
    UART_IPW_CONFIG_BOARD_INITPERIPHERALS_PB \


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
                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */

#endif /* UART_IPW_CFG_H */

