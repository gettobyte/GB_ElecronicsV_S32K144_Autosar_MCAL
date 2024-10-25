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

/**
 *   @file       Ftm_Icu_Ip_BOARD_InitPeripherals_PBcfg.c
 *   @version    1.0.0
 *
 *   @brief      AUTOSAR Icu - contains the data exported by the ICU module.
 *   @details    Contains the information that will be exported by the module, as requested by AUTOSAR.
 *
 *   @addtogroup ftm_icu_ip FTM IPL
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
#include "Ftm_Icu_Ip_Types.h"

/*==================================================================================================
 *                              SOURCE FILE VERSION INFORMATION
 *================================================================================================*/
#define FTM_ICU_IP_BOARD_INITPERIPHERALS_PBCFG_VENDOR_ID_C                    43
#define FTM_ICU_IP_BOARD_INITPERIPHERALS_PBCFG_MODULE_ID_C                    122
#define FTM_ICU_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MAJOR_VERSION_C     4
#define FTM_ICU_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MINOR_VERSION_C     4
#define FTM_ICU_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_REVISION_VERSION_C  0
#define FTM_ICU_IP_BOARD_INITPERIPHERALS_PBCFG_SW_MAJOR_VERSION_C             1
#define FTM_ICU_IP_BOARD_INITPERIPHERALS_PBCFG_SW_MINOR_VERSION_C             0
#define FTM_ICU_IP_BOARD_INITPERIPHERALS_PBCFG_SW_PATCH_VERSION_C             1

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
/* Check if source file and ICU header file are of the same vendor */
#if (FTM_ICU_IP_BOARD_INITPERIPHERALS_PBCFG_VENDOR_ID_C != FTM_ICU_IP_TYPES_VENDOR_ID)
    #error "Ftm_Icu_IpBOARD_InitPeripherals_PBcfg.c and Ftm_Icu_Ip_Types.h have different vendor IDs"
#endif
/* Check if source file and ICU header file are of the same AutoSar version */
#if ((FTM_ICU_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MAJOR_VERSION_C    != FTM_ICU_IP_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (FTM_ICU_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MINOR_VERSION_C    != FTM_ICU_IP_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (FTM_ICU_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_REVISION_VERSION_C != FTM_ICU_IP_TYPES_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Ftm_Icu_IpBOARD_InitPeripherals_PBcfg.c and Ftm_Icu_Ip_Types.h are different"
#endif
/* Check if source file and ICU header file are of the same Software version */
#if ((FTM_ICU_IP_BOARD_INITPERIPHERALS_PBCFG_SW_MAJOR_VERSION_C != FTM_ICU_IP_TYPES_SW_MAJOR_VERSION) || \
     (FTM_ICU_IP_BOARD_INITPERIPHERALS_PBCFG_SW_MINOR_VERSION_C != FTM_ICU_IP_TYPES_SW_MINOR_VERSION) || \
     (FTM_ICU_IP_BOARD_INITPERIPHERALS_PBCFG_SW_PATCH_VERSION_C != FTM_ICU_IP_TYPES_SW_PATCH_VERSION))
    #error "Software Version Numbers of Ftm_Icu_IpBOARD_InitPeripherals_PBcfg.c and Ftm_Icu_Ip_Types.h are different"
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
*                                        GLOBAL FUNCTIONS
==================================================================================================*/
#define ICU_START_SEC_CODE
#include "Icu_MemMap.h"
extern void input_capture_callback(void);
#define ICU_STOP_SEC_CODE
#include "Icu_MemMap.h"
/*==================================================================================================
*                                        GLOBAL CONSTANTS
==================================================================================================*/
#define ICU_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Icu_MemMap.h"

/**
 *  @brief PB_BOARD_InitPeripherals FTM Channels Configuration
 */
const Ftm_Icu_Ip_ChannelConfigType Ftm_Icu_Ip_1_ChannelConfig_PB_BOARD_InitPeripherals[1U] =
{
    /** @brief IcuFtm_1_Channel_0 */
    {
        /** @brief ID of FTM hardware channel used. */
        (uint8)0,
        /** @brief FTM IP layer mode of operation. */
        FTM_ICU_MODE_SIGNAL_MEASUREMENT,
        /** @brief DMA support for timestamp measurement. */
        FTM_ICU_MODE_WITHOUT_DMA,
        /** @brief Measurement mode for signal measurement. */
        FTM_ICU_DUTY_CYCLE,
        /** @brief Edge alignment for signal measurement. */
        FTM_ICU_FALLING_EDGE,
        /** @brief Continuos measurement enable/disable. */
        FALSE,
        /** @brief FTM Channel Input Filter value */
        (uint8)0,
        /** @brief Callback function for channels. */
        NULL_PTR,
        /* Dummy callback param. This param is not used for IPL mode. */
        (uint16)255U,
#if (FTM_ICU_TIMESTAMP_API == STD_ON)
        /** @brief Timestamp buffer type for timestamp mode. */
        FTM_ICU_NO_TIMESTAMP,
#endif
        NULL_PTR,
        /** @brief The notification functions for TIME_STAMP or SIGNAL_EDGE_DETECT mode. */
        NULL_PTR,
        /** @brief Icu_Channel_OverflowNotification. */
        &input_capture_callback
    }
};

/**
 *  @brief PB_BOARD_InitPeripherals FTM 1 Instance Configuration
 */
const Ftm_Icu_Ip_InstanceConfigType Ftm_Icu_Ip_1_InstanceConfig_PB_BOARD_InitPeripherals = 
{
    /** @brief FTM clock source */
    FTM_EXTERNAL_CLOCK,
    /** @brief FTM instance prescaler  */
    (uint8)1,
#if (FTM_ICU_DUAL_CLOCK_MODE_API == STD_ON)
    /** @brief FTM instance alternate prescaler  */
    (uint8)1,
#endif
    /** @brief FTM debug mode  */
    MODE_3,
    /** @brief FTM maxim counter value */
    (uint16)65535
};
        
/*
 *  @brief    BOARD_InitPeripherals 1 IP Configuration
 */
const Ftm_Icu_Ip_ConfigType Ftm_Icu_Ip_1_Config_PB_BOARD_InitPeripherals = 
{
    /** @brief Number of FTM channels in the Icu configuration */
    (uint8)1,
    /** @brief The FTM instance configuration */
    &Ftm_Icu_Ip_1_InstanceConfig_PB_BOARD_InitPeripherals,
    /** @brief Pointer to the array of FTM channel configurations */
    &Ftm_Icu_Ip_1_ChannelConfig_PB_BOARD_InitPeripherals
};  


#define ICU_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Icu_MemMap.h"

/*==================================================================================================
*                                        GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL FUNCTIONS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */

