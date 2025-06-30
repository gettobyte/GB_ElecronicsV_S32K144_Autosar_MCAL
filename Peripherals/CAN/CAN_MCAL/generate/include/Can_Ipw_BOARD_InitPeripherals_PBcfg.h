/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : FLEXCAN
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

#ifndef CAN_IPW_BOARD_INITPERIPHERALS_PBCFG_H
#define CAN_IPW_BOARD_INITPERIPHERALS_PBCFG_H

/**
*   @file
*
*   @addtogroup CAN_DRIVER_CONFIGURATION Can Driver Configurations
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                         INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/*
* @file           Can_Ipw_BOARD_InitPeripherals_PBcfg.h
*/
#define CAN_VENDOR_ID_BOARD_InitPeripherals_IPW_PBCFG_H                    43
#define CAN_AR_RELEASE_MAJOR_VERSION_BOARD_InitPeripherals_IPW_PBCFG_H     4
#define CAN_AR_RELEASE_MINOR_VERSION_BOARD_InitPeripherals_IPW_PBCFG_H     4
#define CAN_AR_RELEASE_REVISION_VERSION_BOARD_InitPeripherals_IPW_PBCFG_H  0
#define CAN_SW_MAJOR_VERSION_BOARD_InitPeripherals_IPW_PBCFG_H             1
#define CAN_SW_MINOR_VERSION_BOARD_InitPeripherals_IPW_PBCFG_H             0
#define CAN_SW_PATCH_VERSION_BOARD_InitPeripherals_IPW_PBCFG_H             0
/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
#define CAN_IPW_CONFIG_BOARD_InitPeripherals_PB \
    extern const Can_Ipw_HwChannelConfigType CanIpwHwChannelConfig_BOARD_InitPeripherals0;

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

#endif /* CAN_IPW_BOARD_INITPERIPHERALS_PBCFG_H */

