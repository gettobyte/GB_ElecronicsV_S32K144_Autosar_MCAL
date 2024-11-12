/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : Ftm Lpit Lptmr Port_Ci LpCmp
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
#ifndef ICU_IPW_CFG_H
#define ICU_IPW_CFG_H

/**
 *   @file Icu_Ipw_Cfg.h
 *   @version 1.0.1
 *
 *   @brief   AUTOSAR Icu - contains the configuration data of the ICU driver
 *   @details Contains the configuration data of the ICU driver
 *   @internal
 *   @addtogroup icu_ipw
 *   @{
 */

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Icu_Ipw_BOARD_InitPeripherals_PBcfg.h"

/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define ICU_IPW_CFG_VENDOR_ID                   43
#define ICU_IPW_CFG_AR_RELEASE_MAJOR_VERSION    4
#define ICU_IPW_CFG_AR_RELEASE_MINOR_VERSION    4
#define ICU_IPW_CFG_AR_RELEASE_REVISION_VERSION 0
#define ICU_IPW_CFG_SW_MAJOR_VERSION            1
#define ICU_IPW_CFG_SW_MINOR_VERSION            0
#define ICU_IPW_CFG_SW_PATCH_VERSION            1

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
#if (ICU_IPW_CFG_VENDOR_ID != ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_VENDOR_ID)
    #error "Icu_Ipw_Cfg.h and Icu_Ipw_BOARD_INITPERIPHERALS_PBcfg.h have different vendor ids"
#endif

/* Check if  header file and Icu_Ipw_BOARD_INITPERIPHERALS_PBcfg.h file are of the same Autosar version */
#if ((ICU_IPW_CFG_AR_RELEASE_MAJOR_VERSION    != ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MAJOR_VERSION) || \
     (ICU_IPW_CFG_AR_RELEASE_MINOR_VERSION    != ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MINOR_VERSION) || \
     (ICU_IPW_CFG_AR_RELEASE_REVISION_VERSION != ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Icu_Ipw_Cfg.h and Icu_Ipw_BOARD_INITPERIPHERALS_PBcfg.h are different"
#endif

/* Check if header file and Icu_Ipw_BOARD_INITPERIPHERALS_PBcfg.h file are of the same Software version */
#if ((ICU_IPW_CFG_SW_MAJOR_VERSION != ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_MAJOR_VERSION) || \
     (ICU_IPW_CFG_SW_MINOR_VERSION != ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_MINOR_VERSION) || \
     (ICU_IPW_CFG_SW_PATCH_VERSION != ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_PATCH_VERSION))
    #error "Software Version Numbers of Icu_Ipw_Cfg.h and Icu_Ipw_BOARD_INITPERIPHERALS_PBcfg.h are different"
#endif

/*==================================================================================================
                                           CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
                                             ENUMS
==================================================================================================*/

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* ICU_IPW_CFG_H */

