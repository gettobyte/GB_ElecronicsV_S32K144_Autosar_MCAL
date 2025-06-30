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
*   @file       Power_Ip_Types.h
*   @version    1.0.0
*
*   @brief   POWER IP type header file.
*   @details POWER IP type header file.
*
*   @addtogroup POWER_DRIVER Power Ip Driver
*   @{
*/


#ifndef POWER_IP_TYPES_H
#define POWER_IP_TYPES_H


#ifdef __cplusplus
extern "C"{
#endif




/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Power_Ip_Cfg_Defines.h"
#include "Power_Ip_SMC_Types.h"
#include "Power_Ip_RCM_Types.h"
#include "Power_Ip_PMC_Types.h"

/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define POWER_IP_TYPES_VENDOR_ID                       43
#define POWER_IP_TYPES_AR_RELEASE_MAJOR_VERSION        4
#define POWER_IP_TYPES_AR_RELEASE_MINOR_VERSION        4
#define POWER_IP_TYPES_AR_RELEASE_REVISION_VERSION     0
#define POWER_IP_TYPES_SW_MAJOR_VERSION                1
#define POWER_IP_TYPES_SW_MINOR_VERSION                0
#define POWER_IP_TYPES_SW_PATCH_VERSION                0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if Power_Ip_Types.h file and Power_Ip_Cfg_Defines.h file have same versions */
#if (POWER_IP_TYPES_VENDOR_ID  != POWER_IP_CFG_DEFINES_VENDOR_ID)
    #error "Power_Ip_Types.h and Power_Ip_Cfg_Defines.h have different vendor IDs"
#endif

/* Check if Power_Ip_Types.h file and Power_Ip_Cfg_Defines.h file are of the same Autosar version */
#if ((POWER_IP_TYPES_AR_RELEASE_MAJOR_VERSION    != POWER_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_TYPES_AR_RELEASE_MINOR_VERSION    != POWER_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION) || \
     (POWER_IP_TYPES_AR_RELEASE_REVISION_VERSION != POWER_IP_CFG_DEFINES_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Power_Ip_Types.h and Power_Ip_Cfg_Defines.h are different"
#endif

/* Check if Power_Ip_Types.h file and Power_Ip_Cfg_Defines.h file are of the same Software version */
#if ((POWER_IP_TYPES_SW_MAJOR_VERSION != POWER_IP_CFG_DEFINES_SW_MAJOR_VERSION) || \
     (POWER_IP_TYPES_SW_MINOR_VERSION != POWER_IP_CFG_DEFINES_SW_MINOR_VERSION) || \
     (POWER_IP_TYPES_SW_PATCH_VERSION != POWER_IP_CFG_DEFINES_SW_PATCH_VERSION))
    #error "Software Version Numbers of Power_Ip_Types.h and Power_Ip_Cfg_Defines.h are different"
#endif

/* Check if Power_Ip_Types.h file and Power_Ip_SMC_Types.h file have same versions */
#if (POWER_IP_TYPES_VENDOR_ID  != POWER_IP_SMC_TYPES_VENDOR_ID)
    #error "Power_Ip_Types.h and Power_Ip_SMC_Types.h have different vendor IDs"
#endif

/* Check if Power_Ip_Types.h file and Power_Ip_SMC_Types.h file are of the same Autosar version */
#if ((POWER_IP_TYPES_AR_RELEASE_MAJOR_VERSION    != POWER_IP_SMC_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_TYPES_AR_RELEASE_MINOR_VERSION    != POWER_IP_SMC_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (POWER_IP_TYPES_AR_RELEASE_REVISION_VERSION != POWER_IP_SMC_TYPES_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Power_Ip_Types.h and Power_Ip_SMC_Types.h are different"
#endif

/* Check if Power_Ip_Types.h file and Power_Ip_SMC_Types.h file are of the same Software version */
#if ((POWER_IP_TYPES_SW_MAJOR_VERSION != POWER_IP_SMC_TYPES_SW_MAJOR_VERSION) || \
     (POWER_IP_TYPES_SW_MINOR_VERSION != POWER_IP_SMC_TYPES_SW_MINOR_VERSION) || \
     (POWER_IP_TYPES_SW_PATCH_VERSION != POWER_IP_SMC_TYPES_SW_PATCH_VERSION))
    #error "Software Version Numbers of Power_Ip_Types.h and Power_Ip_SMC_Types.h are different"
#endif

/* Check if Power_Ip_Types.h file and Power_Ip_RCM_Types.h file have same versions */
#if (POWER_IP_TYPES_VENDOR_ID  != POWER_IP_RCM_TYPES_VENDOR_ID)
    #error "Power_Ip_Types.h and Power_Ip_RCM_Types.h have different vendor IDs"
#endif

/* Check if Power_Ip_Types.h file and Power_Ip_RCM_Types.h file are of the same Autosar version */
#if ((POWER_IP_TYPES_AR_RELEASE_MAJOR_VERSION    != POWER_IP_RCM_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_TYPES_AR_RELEASE_MINOR_VERSION    != POWER_IP_RCM_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (POWER_IP_TYPES_AR_RELEASE_REVISION_VERSION != POWER_IP_RCM_TYPES_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Power_Ip_Types.h and Power_Ip_RCM_Types.h are different"
#endif

/* Check if Power_Ip_Types.h file and Power_Ip_RCM_Types.h file are of the same Software version */
#if ((POWER_IP_TYPES_SW_MAJOR_VERSION != POWER_IP_RCM_TYPES_SW_MAJOR_VERSION) || \
     (POWER_IP_TYPES_SW_MINOR_VERSION != POWER_IP_RCM_TYPES_SW_MINOR_VERSION) || \
     (POWER_IP_TYPES_SW_PATCH_VERSION != POWER_IP_RCM_TYPES_SW_PATCH_VERSION))
    #error "Software Version Numbers of Power_Ip_Types.h and Power_Ip_RCM_Types.h are different"
#endif

/* Check if Power_Ip_Types.h file and Power_Ip_PMC_Types.h file have same versions */
#if (POWER_IP_TYPES_VENDOR_ID  != POWER_IP_PMC_TYPES_VENDOR_ID)
    #error "Power_Ip_Types.h and Power_Ip_PMC_Types.h have different vendor IDs"
#endif

/* Check if Power_Ip_Types.h file and Power_Ip_PMC_Types.h file are of the same Autosar version */
#if ((POWER_IP_TYPES_AR_RELEASE_MAJOR_VERSION    != POWER_IP_PMC_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_TYPES_AR_RELEASE_MINOR_VERSION    != POWER_IP_PMC_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (POWER_IP_TYPES_AR_RELEASE_REVISION_VERSION != POWER_IP_PMC_TYPES_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Power_Ip_Types.h and Power_Ip_PMC_Types.h are different"
#endif

/* Check if Power_Ip_Types.h file and Power_Ip_PMC_Types.h file are of the same Software version */
#if ((POWER_IP_TYPES_SW_MAJOR_VERSION != POWER_IP_PMC_TYPES_SW_MAJOR_VERSION) || \
     (POWER_IP_TYPES_SW_MINOR_VERSION != POWER_IP_PMC_TYPES_SW_MINOR_VERSION) || \
     (POWER_IP_TYPES_SW_PATCH_VERSION != POWER_IP_PMC_TYPES_SW_PATCH_VERSION))
    #error "Software Version Numbers of Power_Ip_Types.h and Power_Ip_PMC_Types.h are different"
#endif

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/


/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/
#define POWER_IP_ERR_CODE_RESERVED   0xFF

#if (defined(POWER_IP_VOLTAGE_ERROR_ISR_USED))
  #if (POWER_IP_VOLTAGE_ERROR_ISR_USED == STD_ON)
#define POWER_E_ISR_VOLTAGE_ERROR                 ((uint8)0x06U)
  #endif
#endif

#if (defined(POWER_IP_RESET_ALTERNATE_ISR_USED) && (POWER_IP_RESET_ALTERNATE_ISR_USED == STD_ON))
#define POWER_E_ISR_RESET_ALT_FAILURE             ((uint8)0x08U)
#endif
/*==================================================================================================
*                                             ENUMS
==================================================================================================*/


/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
* @brief            The Power_Ip_ModeType specifies the identification (ID) for a MCU mode, configured via configuration structure.
* @details          The type shall be uint8, uint16 or uint32.
*
*/
typedef uint32 Power_Ip_ModeType;

/**
* @brief            
* @details          
*/
typedef struct
{
    /**< @brief Configuration for RCM (Reset Generation Module) hardware IP. */
    const Power_Ip_RCM_ConfigType * RCM_pConfig;
    /**< @brief Configuration for PMC (Power Management Unit) hardware IP, part of PMC. */
    const Power_Ip_PMC_ConfigType * PMC_pConfig;
    /**< @brief Configuration for SMC hardware IP. */
    const Power_Ip_SMC_ConfigType * SMC_pConfig;

} Power_Ip_HwIPsConfigType;

/**
* @brief            Power Modes encoding.
* @details          Supported power modes for SMC hw IP.
*/
typedef enum
{
    POWER_IP_RUN_MODE    = 0x00U,   /**< @brief Run Mode. */
    POWER_IP_HSRUN_MODE  = 0x01U,   /**< @brief High Speed Mode. */
    POWER_IP_VLPR_MODE   = 0x02U,   /**< @brief Very Low Power Run Mode. */
    POWER_IP_VLPS_MODE   = 0x03U,   /**< @brief Very Low Power Stop Mode. */
    POWER_IP_STOP1_MODE  = 0x04U,   /**< @brief Stop 1 Mode. */
    POWER_IP_STOP2_MODE  = 0x05U,   /**< @brief Stop 2 Mode. */
} Power_Ip_PowerModeType;

/**
* @brief            Definition of a MCU mode section in the configuration structure.
* @details          Specifies the system behaviour during the selected target mode.
*                   Data set and configured by Mcu_SetMode call.
*/
typedef struct
{
    /**< @brief The ID for Power Mode configuration. */
    Power_Ip_ModeType Power_Ip_ModeConfigId;
   /**< @brief Power modes control configuration */
    Power_Ip_PowerModeType Power_Ip_ePowerMode;
    /**< @brief Indicates sleep-on-exit configuration */
    uint8 Power_Ip_SleepOnExit;
} Power_Ip_ModeConfigType;

/**
* @brief            The type Mcu_RawResetType specifies the reset reason in raw register format, read from a reset status register.
* @details          The type shall be uint8, uint16 or uint32 based on best performance.
*
* @implements Mcu_RawResetType_typedef
*
*/
typedef uint32 Power_Ip_RawResetType;   /**< @brief Destructive and Functional Reset Events Log. */

/** @brief Power ip report error types. */
typedef enum
{
    POWER_IP_REPORT_TIMEOUT_ERROR             = 0U,   /**< @brief Report Timeout Error. */
    POWER_IP_ERROR_ISR_NOTIFICATION           = 1U,   /**< @brief Notification Error. */
    POWER_IP_PMC_NOTIFICATION                 = 2U,   /**< @brief Notification PMC. */
    POWER_IP_REPORT_SWITCH_MODE_ERROR         = 3U,   /**< @brief Report switch mode Error. */
    POWER_IP_REPORT_VLPSA_NOTIFICATION        = 4U,   /**< @brief Report the VLPS transition was aborted. */
} Power_Ip_PowerReportErrorType;

/*!
 * @brief Power report error callback structure.
 * Implements PowerReportErrorCallbackType_Class
 */
typedef void (*Power_Ip_ReportErrorsCallbackType)(Power_Ip_PowerReportErrorType error, uint8 u8ErrorCode);

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/


/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif


#endif /* POWER_IP_TYPES_H */

/** @} */
