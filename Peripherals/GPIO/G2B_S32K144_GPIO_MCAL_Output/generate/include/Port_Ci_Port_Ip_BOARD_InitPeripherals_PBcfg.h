/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : PORT_CI
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

#ifndef PORT_CI_PORT_IP_BOARD_InitPeripherals_PBCFG_H
#define PORT_CI_PORT_IP_BOARD_InitPeripherals_PBCFG_H

/**
*   @file    Port_Ci_Port_Ip_BOARD_InitPeripherals_PBcfg.h
*
*   @addtogroup Port_CFG
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
==================================================================================================*/

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/**
* @brief        Parameters that shall be published within the Port driver header file and also in the
*               module description file
* @details      The integration of incompatible files shall be avoided.
*
*/
#define PORT_CI_PORT_IP_VENDOR_ID_BOARD_InitPeripherals_PBCFG_H                       43
#define PORT_CI_PORT_IP_AR_RELEASE_MAJOR_VERSION_BOARD_InitPeripherals_PBCFG_H        4
#define PORT_CI_PORT_IP_AR_RELEASE_MINOR_VERSION_BOARD_InitPeripherals_PBCFG_H        4
#define PORT_CI_PORT_IP_AR_RELEASE_REVISION_VERSION_BOARD_InitPeripherals_PBCFG_H     0
#define PORT_CI_PORT_IP_SW_MAJOR_VERSION_BOARD_InitPeripherals_PBCFG_H                1
#define PORT_CI_PORT_IP_SW_MINOR_VERSION_BOARD_InitPeripherals_PBCFG_H                0
#define PORT_CI_PORT_IP_SW_PATCH_VERSION_BOARD_InitPeripherals_PBCFG_H                1

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/

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
/*! @brief User configuration structure */
#define PORT_CI_PORT_CONFIG_BOARD_InitPeripherals_PB \
extern const Port_Ci_Port_Ip_PinSettingsConfig g_pin_mux_InitConfigArr_BOARD_InitPeripherals[NUM_OF_CONFIGURED_PINS];

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */

#endif /* PORT_CI_PORT_IP_BOARD_InitPeripherals_PBCFG_H */

