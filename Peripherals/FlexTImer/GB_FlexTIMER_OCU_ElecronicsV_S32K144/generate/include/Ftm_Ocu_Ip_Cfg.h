/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : Ftm
*   Dependencies         : none
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
#ifndef FTM_OCU_IP_CFG_H
#define FTM_OCU_IP_CFG_H

/**
*   @file           Ftm_Ocu_Ip_Cfg.h
*
*   @addtogroup     ocu_ip Ocu IPL
*   @brief          Ocu IPL Precompile configuration header file.
*   @details        Precompile parameters and extern configuration.
*
*   @{
*/

#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
*                                         INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

#include "Ftm_Ocu_Ip_BOARD_InitPeripherals_PBcfg.h"

/*==================================================================================================
*                               HEADER FILE VERSION INFORMATION
==================================================================================================*/
#define FTM_OCU_IP_CFG_VENDOR_ID                       43
#define FTM_OCU_IP_CFG_AR_RELEASE_MAJOR_VERSION        4
#define FTM_OCU_IP_CFG_AR_RELEASE_MINOR_VERSION        4
#define FTM_OCU_IP_CFG_AR_RELEASE_REVISION_VERSION     0
#define FTM_OCU_IP_CFG_SW_MAJOR_VERSION                1
#define FTM_OCU_IP_CFG_SW_MINOR_VERSION                0
#define FTM_OCU_IP_CFG_SW_PATCH_VERSION                0
/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/

#if (FTM_OCU_IP_CFG_VENDOR_ID != FTM_OCU_IP_BOARD_INITPERIPHERALS_PBCFG_VENDOR_ID)
    #error "Ftm_Ocu_Ip_Cfg.h and Ftm_Ocu_Ip_BOARD_InitPeripherals_PBcfg.h have different vendor ids"
#endif

/* Check if  header file and Ftm_Ocu_Ip_BOARD_InitPeripherals_PBcfg.h file are of the same Autosar version */
#if ((FTM_OCU_IP_CFG_AR_RELEASE_MAJOR_VERSION != FTM_OCU_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MAJOR_VERSION) || \
     (FTM_OCU_IP_CFG_AR_RELEASE_MINOR_VERSION != FTM_OCU_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MINOR_VERSION) || \
     (FTM_OCU_IP_CFG_AR_RELEASE_REVISION_VERSION != FTM_OCU_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Ftm_Ocu_Ip_Cfg.h and Ftm_Ocu_Ip_BOARD_InitPeripherals_PBcfg.h are different"
#endif

/* Check if header file and Ftm_Ocu_Ip_BOARD_InitPeripherals_PBcfg.h file are of the same Software version */
#if ((FTM_OCU_IP_CFG_SW_MAJOR_VERSION != FTM_OCU_IP_BOARD_INITPERIPHERALS_PBCFG_SW_MAJOR_VERSION) || \
     (FTM_OCU_IP_CFG_SW_MINOR_VERSION != FTM_OCU_IP_BOARD_INITPERIPHERALS_PBCFG_SW_MINOR_VERSION) || \
     (FTM_OCU_IP_CFG_SW_PATCH_VERSION != FTM_OCU_IP_BOARD_INITPERIPHERALS_PBCFG_SW_PATCH_VERSION))
    #error "Software Version Numbers of Ftm_Ocu_Ip_Cfg.h and Ftm_Ocu_Ip_BOARD_InitPeripherals_PBcfg.h are different"
#endif

/*==================================================================================================
*                                           CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

/* Macros that indicate FTM instances used by Ocu */
#ifndef FTM_0_USED
    #define FTM_0_USED
#else
    #error "FTM_0 instance cannot be used by Ocu. Instance locked by another driver!"
#endif

/*==================================================================================================
*                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                              ENUMS
==================================================================================================*/

/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
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

#endif    /* FTM_OCU_IP_CFG_H */

/** @} */

