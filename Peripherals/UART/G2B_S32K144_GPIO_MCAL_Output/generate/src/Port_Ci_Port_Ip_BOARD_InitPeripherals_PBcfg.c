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

/**
*   @file    Port_Ci_Port_Ip_BOARD_InitPeripherals_PBcfg.c
*
*   @addtogroup Port_CFG
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                          INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Port_Ci_Port_Ip.h"

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/**
* @brief        Parameters that shall be published within the Port driver header file and also in the
*               module description file
* @details      The integration of incompatible files shall be avoided.
*
*/
#define PORT_CI_PORT_IP_VENDOR_ID_BOARD_InitPeripherals_PBCFG_C                       43
#define PORT_CI_PORT_IP_AR_RELEASE_MAJOR_VERSION_BOARD_InitPeripherals_PBCFG_C        4
#define PORT_CI_PORT_IP_AR_RELEASE_MINOR_VERSION_BOARD_InitPeripherals_PBCFG_C        4
#define PORT_CI_PORT_IP_AR_RELEASE_REVISION_VERSION_BOARD_InitPeripherals_PBCFG_C     0
#define PORT_CI_PORT_IP_SW_MAJOR_VERSION_BOARD_InitPeripherals_PBCFG_C                1
#define PORT_CI_PORT_IP_SW_MINOR_VERSION_BOARD_InitPeripherals_PBCFG_C                0
#define PORT_CI_PORT_IP_SW_PATCH_VERSION_BOARD_InitPeripherals_PBCFG_C                1

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if the files Port_Ci_Port_Ip_BOARD_InitPeripherals_PBcfg.c and Port_Ci_Port_Ip.h are of the same vendor */
#if (PORT_CI_PORT_IP_VENDOR_ID_BOARD_InitPeripherals_PBCFG_C != PORT_CI_PORT_IP_VENDOR_ID_H)
    #error "Port_Ci_Port_Ip_BOARD_InitPeripherals_PBcfg.c and Port_Ci_Port_Ip.h have different vendor ids"
#endif
/* Check if the files Port_Ci_Port_Ip_BOARD_InitPeripherals_PBcfg.c and Port_Ci_Port_Ip.h are of the same Autosar version */
#if ((PORT_CI_PORT_IP_AR_RELEASE_MAJOR_VERSION_BOARD_InitPeripherals_PBCFG_C    != PORT_CI_PORT_IP_AR_RELEASE_MAJOR_VERSION_H)  || \
     (PORT_CI_PORT_IP_AR_RELEASE_MINOR_VERSION_BOARD_InitPeripherals_PBCFG_C    != PORT_CI_PORT_IP_AR_RELEASE_MINOR_VERSION_H)  || \
     (PORT_CI_PORT_IP_AR_RELEASE_REVISION_VERSION_BOARD_InitPeripherals_PBCFG_C != PORT_CI_PORT_IP_AR_RELEASE_REVISION_VERSION_H)  \
    )
    #error "AutoSar Version Numbers of Port_Ci_Port_Ip_BOARD_InitPeripherals_PBcfg.c and Port_Ci_Port_Ip.h are different"
#endif
/* Check if the files Port_Ci_Port_Ip_BOARD_InitPeripherals_PBcfg.c and Port_Ci_Port_Ip.h are of the same software version */
#if ((PORT_CI_PORT_IP_SW_MAJOR_VERSION_BOARD_InitPeripherals_PBCFG_C != PORT_CI_PORT_IP_SW_MAJOR_VERSION_H) || \
     (PORT_CI_PORT_IP_SW_MINOR_VERSION_BOARD_InitPeripherals_PBCFG_C != PORT_CI_PORT_IP_SW_MINOR_VERSION_H) || \
     (PORT_CI_PORT_IP_SW_PATCH_VERSION_BOARD_InitPeripherals_PBCFG_C != PORT_CI_PORT_IP_SW_PATCH_VERSION_H)    \
    )
    #error "Software Version Numbers of Port_Ci_Port_Ip_BOARD_InitPeripherals_PBcfg.c and Port_Ci_Port_Ip.h are different"
#endif

/*==================================================================================================
*                           LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/


/*==================================================================================================
*                                          LOCAL MACROS
==================================================================================================*/


/*==================================================================================================
*                                         LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL VARIABLES
==================================================================================================*/

#define PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Port_MemMap.h"
const Port_Ci_Port_Ip_PinSettingsConfig g_pin_mux_InitConfigArr_BOARD_InitPeripherals[NUM_OF_CONFIGURED_PINS] = 
{
    {
        .portBase              = IP_PORTD,
        .gpioBase              = IP_PTD,
        .pinPortIdx            = 15,
        .mux                   = PORT_MUX_AS_GPIO,
        .direction             = PORT_CI_PORT_PIN_OUT,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter         = (boolean)FALSE,
        .lockRegister          = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter         = (boolean)FALSE,
        .initValue             = 1
    },
    {
        .portBase              = IP_PORTD,
        .gpioBase              = IP_PTD,
        .pinPortIdx            = 16,
        .mux                   = PORT_MUX_AS_GPIO,
        .direction             = PORT_CI_PORT_PIN_OUT,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter         = (boolean)FALSE,
        .lockRegister          = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter         = (boolean)FALSE,
        .initValue             = 1
    },
    {
        .portBase              = IP_PORTD,
        .gpioBase              = IP_PTD,
        .pinPortIdx            = 0,
        .mux                   = PORT_MUX_AS_GPIO,
        .direction             = PORT_CI_PORT_PIN_OUT,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter         = (boolean)FALSE,
        .lockRegister          = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter         = (boolean)FALSE,
        .initValue             = 1
    },
    {
        .portBase              = IP_PORTC,
        .gpioBase              = IP_PTC,
        .pinPortIdx            = 12,
        .mux                   = PORT_MUX_AS_GPIO,
        .direction             = PORT_CI_PORT_PIN_IN,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter         = (boolean)FALSE,
        .lockRegister          = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter         = (boolean)FALSE,
        .initValue             = 1
    },
    {
        .portBase              = IP_PORTC,
        .gpioBase              = IP_PTC,
        .pinPortIdx            = 13,
        .mux                   = PORT_MUX_AS_GPIO,
        .direction             = PORT_CI_PORT_PIN_IN,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter         = (boolean)FALSE,
        .lockRegister          = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter         = (boolean)FALSE,
        .initValue             = 1
    }
};
#define PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Port_MemMap.h"

/*==================================================================================================
*                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL FUNCTIONS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */
