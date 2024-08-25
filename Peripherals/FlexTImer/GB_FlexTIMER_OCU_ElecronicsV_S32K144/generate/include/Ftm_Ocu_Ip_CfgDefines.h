/*==================================================================================================
* Project : RTD AUTOSAR 4.4
* Platform : CORTEXM
* Peripheral : Ftm
* Dependencies : none
*
* Autosar Version : 4.4.0
* Autosar Revision : ASR_REL_4_4_REV_0000
* Autosar Conf.Variant :
* SW Version : 1.0.0
* Build Version : S32K1_RTD_1_0_0_D2108_ASR_REL_4_4_REV_0000_20210810
*
* (c) Copyright 2020-2021 NXP Semiconductors
* All Rights Reserved.
*
* NXP Confidential. This software is owned or controlled by NXP and may only be
* used strictly in accordance with the applicable license terms. By expressly
* accepting such terms or by downloading, installing, activating and/or otherwise
* using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms. If you do not agree to be
* bound by the applicable license terms, then you may not retain, install,
* activate or otherwise use the software.
==================================================================================================*/



#ifndef FTM_OCU_IP_CFGDEFINES_H
#define FTM_OCU_IP_CFGDEFINES_H
/**
*   @file           Ftm_Ocu_Ip_CfgDefines.h
*
*   @addtogroup     ocu_ip Ocu IPL
*   @brief          Ocu IPL Precompile defines header file.
*   @details        Precompile defines.
*
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

#include "StandardTypes.h"
#include "S32K144_FTM.h"
#include "S32K144_SIM.h"
/*==================================================================================================
*                               HEADER FILE VERSION INFORMATION
==================================================================================================*/
#define FTM_OCU_IP_CFGDEFINES_VENDOR_ID                       43
#define FTM_OCU_IP_CFGDEFINES_AR_RELEASE_MAJOR_VERSION        4
#define FTM_OCU_IP_CFGDEFINES_AR_RELEASE_MINOR_VERSION        4
#define FTM_OCU_IP_CFGDEFINES_AR_RELEASE_REVISION_VERSION     0
#define FTM_OCU_IP_CFGDEFINES_SW_MAJOR_VERSION                1
#define FTM_OCU_IP_CFGDEFINES_SW_MINOR_VERSION                0
#define FTM_OCU_IP_CFGDEFINES_SW_PATCH_VERSION                0
/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if this header file and StandardTypes.h file are of the same Autosar version */
    #if ((FTM_OCU_IP_CFGDEFINES_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION) || \
        (FTM_OCU_IP_CFGDEFINES_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of Ftm_Ocu_Ip_CfgDefines.h and StandardTypes.h are different"
    #endif
#endif

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/



#ifndef OCU_FTM_USED
/** @brief These defines indicate that at least one channel from each module is used in all configurations. */
#define OCU_FTM_USED  (STD_ON)
#endif

#ifndef OCU_CONF_FTM_CHANNELS_PB
/** @brief Number of configured Ftm channels */
#define OCU_CONF_FTM_CHANNELS_PB      (1U)
#endif

#ifndef OCU_CONF_FTM_MODULES_PB
/** @brief          Number of configured Ftm modules */
#define OCU_CONF_FTM_MODULES_PB     1U
#endif

#ifndef OCU_NOTIFICATION_SUPPORTED
/** @brief   Switch to indicate if the notifications are supported */
#define OCU_NOTIFICATION_SUPPORTED      (STD_ON)
#endif

#ifndef OCU_FTM_INSTANCE_COUNT
/** @brief  The number of Ftm instances available on platform */
#define OCU_FTM_INSTANCE_COUNT    ((uint8)4U)
#endif

#ifndef OCU_FTM_CHANNEL_COUNT
/** @brief  The number of channels available on each Ftm instance */
#define OCU_FTM_CHANNEL_COUNT      ((uint8)8U)
#endif

#ifndef OCU_NUM_HW_CHANNELS
/** @brief maximum number of Ftm channels on this platform */
#define OCU_NUM_HW_CHANNELS         ((OCU_FTM_CHANNEL_COUNT) * (OCU_FTM_INSTANCE_COUNT))
#endif

#ifndef OCU_DEV_ERROR_DETECT
/** @brief   Switch for enabling the development error detection. */
#define OCU_DEV_ERROR_DETECT        (STD_OFF)
#endif

#ifndef OCU_SET_CLOCK_MODE_API
/** @brief  Switch for enabling the dual clock functionality (Ocu_SetClockMode() API) */
#define OCU_SET_CLOCK_MODE_API      (STD_OFF)
#endif

#ifndef OCU_ENABLE_USER_MODE_SUPPORT
/**
* @brief Support for User mode.
*        If this parameter has been configured to TRUE the Ocu driver code can be executed from both supervisor and user mode.
*/  
#define OCU_ENABLE_USER_MODE_SUPPORT    (STD_OFF)
#endif

/* Verification for user mode support. */
#ifndef MCAL_ENABLE_USER_MODE_SUPPORT
    #if (defined(OCU_ENABLE_USER_MODE_SUPPORT) && (STD_ON == OCU_ENABLE_USER_MODE_SUPPORT))
        #error MCAL_ENABLE_USER_MODE_SUPPORT is not enabled. For running OCU in user mode the MCAL_ENABLE_USER_MODE_SUPPORT needs to be defined
    #endif
#endif

/**
*   @brief ISR configured for Ocu channels
*   @details Macros for channels used in ISR
*   @{
*/
#define OCU_FTM_0_CH_0_CH_1_ISR_USED

/** @} */

#ifndef OCU_DEINIT_API
/** @brief      Switch to indicate that Ocu_DeInit() API is supported */
#define OCU_DEINIT_API      (STD_ON)
#endif

#ifndef OCU_SET_PIN_STATE_API
/** @brief  Switch to indicate if Ocu_SetPinState() API is supported */
#define OCU_SET_PIN_STATE_API   (STD_ON)
#endif

#ifndef OCU_SET_PIN_ACTION_API
/** @brief  Switch to indicate if Ocu_SetPinAction() API is supported */
#define OCU_SET_PIN_ACTION_API  (STD_ON)
#endif

#ifndef OCU_GET_COUNTER_API
/** @brief   Switch to indicate if Ocu_GetCounter() API is supported */
#define OCU_GET_COUNTER_API     (STD_ON)
#endif

#ifndef OCU_SET_ABSOLUTE_THRESHOLD_API
/** @brief  Switch to indicate if Ocu_SetAbsoluteThreshold() API is supported */
#define OCU_SET_ABSOLUTE_THRESHOLD_API  (STD_ON)
#endif

#ifndef OCU_SET_RELATIVE_THRESHOLD_API
/** @brief      Switch to indicate if Ocu_SetRelativeThreshold() API is supported */
#define OCU_SET_RELATIVE_THRESHOLD_API  (STD_ON)
#endif

/** @brief    Support for Sim module is available */
#define OCU_SIM_AVAILABLE               (STD_ON)

#ifndef OCU_ENABLE_ISR_BY_EN_DIS_NOTIFICATION
/**
* @brief    Switch to indicate if channel interrupts are enabled/disabled by calling of EnableNotification()/DisableNotification() APIs
*           This feature is not supported for current implementation
*/
#define OCU_ENABLE_ISR_BY_EN_DIS_NOTIFICATION   (STD_OFF)
#endif

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

#ifdef __cplusplus
}
#endif

/** @} */
#endif  /* FTM_OCU_IP_CFGDEFINES_H */

