/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : 
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
/**
*   @file       Power_Ip.h
*   @version    1.0.0
*
*   @brief   POWER IP driver header file.
*   @details POWER IP driver header file.
*
*   @addtogroup POWER_DRIVER Power Ip Driver
*   @{
*/


#ifndef POWER_IP_H
#define POWER_IP_H


#ifdef __cplusplus
extern "C"{
#endif




/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Mcal.h"
#include "Power_Ip_Types.h"
#include "Power_Ip_Cfg.h"

/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define POWER_IP_VENDOR_ID                       43
#define POWER_IP_AR_RELEASE_MAJOR_VERSION        4
#define POWER_IP_AR_RELEASE_MINOR_VERSION        4
#define POWER_IP_AR_RELEASE_REVISION_VERSION     0
#define POWER_IP_SW_MAJOR_VERSION                1
#define POWER_IP_SW_MINOR_VERSION                0
#define POWER_IP_SW_PATCH_VERSION                0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if Power_Ip.h header file and Mcal.h header file are of the same Autosar version */
#if ((POWER_IP_AR_RELEASE_MAJOR_VERSION != MCAL_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_AR_RELEASE_MINOR_VERSION != MCAL_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Power_Ip.h and Mcal.h are different"
#endif
#endif

/* Check if Power_Ip.h file and Power_Ip_Types.h file have same versions */
#if (POWER_IP_VENDOR_ID  != POWER_IP_TYPES_VENDOR_ID)
    #error "Power_Ip.h and Power_Ip_Types.h have different vendor IDs"
#endif

/* Check if Power_Ip.h file and Power_Ip_Types.h file are of the same Autosar version */
#if ((POWER_IP_AR_RELEASE_MAJOR_VERSION    != POWER_IP_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_AR_RELEASE_MINOR_VERSION    != POWER_IP_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (POWER_IP_AR_RELEASE_REVISION_VERSION != POWER_IP_TYPES_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Power_Ip.h and Power_Ip_Types.h are different"
#endif

/* Check if Power_Ip.h file and Power_Ip_Types.h file are of the same Software version */
#if ((POWER_IP_SW_MAJOR_VERSION != POWER_IP_TYPES_SW_MAJOR_VERSION) || \
     (POWER_IP_SW_MINOR_VERSION != POWER_IP_TYPES_SW_MINOR_VERSION) || \
     (POWER_IP_SW_PATCH_VERSION != POWER_IP_TYPES_SW_PATCH_VERSION))
    #error "Software Version Numbers of Power_Ip.h and Power_Ip_Types.h are different"
#endif

/* Check if Power_Ip.h file and Power_Ip_Cfg.h file have same versions */
#if (POWER_IP_VENDOR_ID  != POWER_IP_CFG_VENDOR_ID)
    #error "Power_Ip.h and Power_Ip_Cfg.h have different vendor IDs"
#endif

/* Check if Power_Ip.h file and Power_Ip_Cfg.h file are of the same Autosar version */
#if ((POWER_IP_AR_RELEASE_MAJOR_VERSION    != POWER_IP_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_AR_RELEASE_MINOR_VERSION    != POWER_IP_CFG_AR_RELEASE_MINOR_VERSION) || \
     (POWER_IP_AR_RELEASE_REVISION_VERSION != POWER_IP_CFG_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Power_Ip.h and Power_Ip_Cfg.h are different"
#endif

/* Check if Power_Ip.h file and Power_Ip_Cfg.h file are of the same Software version */
#if ((POWER_IP_SW_MAJOR_VERSION != POWER_IP_CFG_SW_MAJOR_VERSION) || \
     (POWER_IP_SW_MINOR_VERSION != POWER_IP_CFG_SW_MINOR_VERSION) || \
     (POWER_IP_SW_PATCH_VERSION != POWER_IP_CFG_SW_PATCH_VERSION))
    #error "Software Version Numbers of Power_Ip.h and Power_Ip_Cfg.h are different"
#endif
#if 0
/* Check if Power_Ip.h file and Power_Ip_CortexM7.h file have same versions */
#if (POWER_IP_VENDOR_ID  != POWER_IP_CORTEXM7_VENDOR_ID)
    #error "Power_Ip.h and Power_Ip_CortexM7.h have different vendor IDs"
#endif

/* Check if Power_Ip.h file and Power_Ip_CortexM7.h file are of the same Autosar version */
#if ((POWER_IP_AR_RELEASE_MAJOR_VERSION    != POWER_IP_CORTEXM7_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_AR_RELEASE_MINOR_VERSION    != POWER_IP_CORTEXM7_AR_RELEASE_MINOR_VERSION) || \
     (POWER_IP_AR_RELEASE_REVISION_VERSION != POWER_IP_CORTEXM7_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Power_Ip.h and Power_Ip_CortexM7.h are different"
#endif

/* Check if Power_Ip.h file and Power_Ip_CortexM7.h file are of the same Software version */
#if ((POWER_IP_SW_MAJOR_VERSION != POWER_IP_CORTEXM7_SW_MAJOR_VERSION) || \
     (POWER_IP_SW_MINOR_VERSION != POWER_IP_CORTEXM7_SW_MINOR_VERSION) || \
     (POWER_IP_SW_PATCH_VERSION != POWER_IP_CORTEXM7_SW_PATCH_VERSION))
    #error "Software Version Numbers of Power_Ip.h and Power_Ip_CortexM7.h are different"
#endif
#endif
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/


/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/


/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/


/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/


/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/
#define MCU_START_SEC_CODE

#include "Mcu_MemMap.h"

#if (defined(POWER_IP_DISABLE_RCM_INIT) && (STD_OFF == POWER_IP_DISABLE_RCM_INIT))
/*!
 * @brief Reset initialization
 *
 * This function reset initialization
 *
 * @param[in] Power_Ip_pHwIPsConfigPtr  reset initialization configuration.
 *
 * @return void
 */
void Power_Ip_InitReset (const Power_Ip_HwIPsConfigType * Power_Ip_pHwIPsConfigPtr);
#endif

/*!
 * @brief Power initialization
 *
 * This function power initialization
 *
 * @param[in] Power_Ip_pHwIPsConfigPtr  power initialization configuration.
 *
 * @return void
 */
void Power_Ip_InitPower (const Power_Ip_HwIPsConfigType * Power_Ip_pHwIPsConfigPtr);


/*!
 * @brief Sets mode
 *
 * This function sets mode.
 *
 * @param[in] Power_Ip_pHwIPsConfigPtr  power set mote configuration.
 *
 * @return void
 */
void Power_Ip_SetMode (const Power_Ip_ModeConfigType * Power_Ip_pModeConfigPtr);

#ifdef POWER_IP_POWERMODE_STATE_API
#if (STD_ON == POWER_IP_POWERMODE_STATE_API)
Power_Ip_PowerModeStateType Power_Ip_GetPowerModeState(void);
#endif
#endif

#if (MCU_PERFORM_RESET_API == STD_ON)
/*!
 * @brief Performs reset
 *
 * This function performs reset.
 *
 * @param[in] Power_Ip_HwIPsConfigType  reset initialization configuration.
 *
 * @return void
 */
void Power_Ip_PerformReset(const Power_Ip_HwIPsConfigType * Power_Ip_pHwIPsConfigPtr);
#endif /* (MCU_PERFORM_RESET_API == STD_ON) */

/*!
 * @brief Returns reset type
 *
 * This function returns reset type.
 *
 * @return Power_Ip_ResetType   Reset type
 */
Power_Ip_ResetType Power_Ip_GetResetReason(void);

/*!
 * @brief Returns raw reset type
 *
 * This function returns raw reset type.
 *
 * @return Power_Ip_RawResetType   Raw reset type
 */
Power_Ip_RawResetType Power_Ip_GetResetRawValue(void);

/*!
 * @brief Install report error callback
 *
 * This function installs a callback for reporting errors from power driver
 *
 *
 * @param[in] Power_Ip_ReportErrorCallbackType      Callback to be installed.
 *
 * @return void
 */
void Power_Ip_InstallNotificationsCallback(Power_Ip_ReportErrorsCallbackType reportErrorsCallback);

#ifdef POWER_IP_SLEEPONEXIT_SUPPORT
  #if (POWER_IP_SLEEPONEXIT_SUPPORT == STD_ON)

void Power_Ip_DisableSleepOnExit(void);
void Power_Ip_EnableSleepOnExit(void);

  #endif
#endif
#ifdef POWER_IP_SRAM_RETEN_CONFIG_API
#if (POWER_IP_SRAM_RETEN_CONFIG_API == STD_ON)
void Power_Ip_SRAMRetentionConfig(Power_Ip_SRAMRetenConfigType eSRAMRetenConfig);
#endif
#endif

#define MCU_STOP_SEC_CODE

#include "Mcu_MemMap.h"


#ifdef __cplusplus
}
#endif


#endif /* POWER_IP_H */

/** @} */
