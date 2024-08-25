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
/**
*   @file          Ftm_Ocu_Ip_BOARD_InitPeripherals_PBcfg.c
*                  
*   @addtogroup    ocu_ip Ocu IPL
*   @brief         Ocu IPL Postbuild configuration source file.
*   @details       Postbuild configuration structure instances.
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
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define FTM_OCU_IP_BOARD_INITPERIPHERALS_PBCFG_VENDOR_ID_C                       43
#define FTM_OCU_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MAJOR_VERSION_C        4
#define FTM_OCU_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MINOR_VERSION_C        4
#define FTM_OCU_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_REVISION_VERSION_C     0
#define FTM_OCU_IP_BOARD_INITPERIPHERALS_PBCFG_SW_MAJOR_VERSION_C                1
#define FTM_OCU_IP_BOARD_INITPERIPHERALS_PBCFG_SW_MINOR_VERSION_C                0
#define FTM_OCU_IP_BOARD_INITPERIPHERALS_PBCFG_SW_PATCH_VERSION_C                0
/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/
#if (FTM_OCU_IP_BOARD_INITPERIPHERALS_PBCFG_VENDOR_ID_C != FTM_OCU_IP_BOARD_INITPERIPHERALS_PBCFG_VENDOR_ID)
    #error "Ftm_Ocu_Ip_BOARD_InitPeripherals_PBcfg.c and Ftm_Ocu_Ip_BOARD_InitPeripherals_PBcfg.h have different vendor ids"
#endif

/* Check if  source file and Ftm_Ocu_Ip_BOARD_InitPeripherals_PBcfg.h file are of the same Autosar version */
#if ((FTM_OCU_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MAJOR_VERSION_C != FTM_OCU_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MAJOR_VERSION) || \
     (FTM_OCU_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MINOR_VERSION_C != FTM_OCU_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MINOR_VERSION) || \
     (FTM_OCU_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_REVISION_VERSION_C != FTM_OCU_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Ftm_Ocu_Ip_BOARD_InitPeripherals_PBcfg.c and Ftm_Ocu_Ip_BOARD_InitPeripherals_PBcfg.h are different"
#endif

/* Check if source file and Ftm_Ocu_Ip_BOARD_InitPeripherals_PBcfg.h file are of the same Software version */
#if ((FTM_OCU_IP_BOARD_INITPERIPHERALS_PBCFG_SW_MAJOR_VERSION_C != FTM_OCU_IP_BOARD_INITPERIPHERALS_PBCFG_SW_MAJOR_VERSION) || \
     (FTM_OCU_IP_BOARD_INITPERIPHERALS_PBCFG_SW_MINOR_VERSION_C != FTM_OCU_IP_BOARD_INITPERIPHERALS_PBCFG_SW_MINOR_VERSION) || \
     (FTM_OCU_IP_BOARD_INITPERIPHERALS_PBCFG_SW_PATCH_VERSION_C != FTM_OCU_IP_BOARD_INITPERIPHERALS_PBCFG_SW_PATCH_VERSION))
    #error "Software Version Numbers of Ftm_Ocu_Ip_BOARD_InitPeripherals_PBcfg.c and Ftm_Ocu_Ip_BOARD_InitPeripherals_PBcfg.h are different"
#endif

/*===============================================================================================
*                                       LOCAL MACROS
===============================================================================================*/

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL FUNCTION PROTOTYPES
==================================================================================================*/
#define OCU_START_SEC_CODE
#include "Ocu_MemMap.h"

#if (OCU_NOTIFICATION_SUPPORTED == STD_ON)
extern void OcuNotification(uint16 Channel);
#endif

#define OCU_STOP_SEC_CODE
#include "Ocu_MemMap.h"

/*==================================================================================================
*                                       GLOBAL CONSTANTS
==================================================================================================*/

#define OCU_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Ocu_MemMap.h"

/** @brief Number of configured Ocu channels */
#define NUMBER_CHANNEL_BOARD_INITPERIPHERALS 1U



/***************************** Configuration for Ftm ********************/

/** @brief    Configurations for OCU channels using Ftm */
static const Ftm_Ocu_Ip_ChannelConfigType Ftm_Ocu_Ip_ChannelConfig_PB_BOARD_INITPERIPHERALS[NUMBER_CHANNEL_BOARD_INITPERIPHERALS] = 
{
    /* OcuChannel_0 -> FTM_0_CH_0 */
    {
        /** @brief  Ftm hardware channel index */
        (uint16)FTM_0_CH_0,
        /** @brief  Default threshold: 32000*/
        (uint16)0x7D00U,
        /** @brief  Ftm Control Value */
        (uint8)
        (
            (1UL << OCU_FTM_OUTPIN_USED_SHIFT) | ((uint8)OCU_FTM_HIGH << OCU_FTM_PIN_STATE_SHIFT)   |  /* Output Pin Enable and default state */
            ((uint8)(FTM_OCU_SET_TOGGLE) << OCU_FTM_PIN_ACTION_SHIFT)     /* Output Pin default action */
        ),
#if (OCU_NOTIFICATION_SUPPORTED == STD_ON)
        /** @brief Ftm callback function Name */
        &OcuNotification,
        /** @brief Ftm callback param */
        (uint16)0
#endif
    }
};

/** @brief    Configurations for OCU modules using Ftm */
static const Ftm_Ocu_Ip_SpecificIpConfigType Ftm_Ocu_Ip_SpecificIpConfig_PB_BOARD_INITPERIPHERALS[OCU_CONF_FTM_MODULES_PB] = 
{
    /* OcuHWSpecificSettings_0 -> FTM_0 */
    {
        /** @brief  Ftm hardware module index */
        (uint8)0,
        /** @brief  Max Counter Value */
        (uint16)0xFDE8,
        /** @brief  Ftm Control Value */
        (uint8)
        (
            (uint8)(FTM_CLOCK_SOURCE_SYSTEMCLK) << OCU_FTM_CLOCK_SOURCE_SHIFT | /* Clock source */
            (uint8)((uint32)(FTM_SC_PS_DIV8_U32 << OCU_FTM_CLOCK_DIV_SHIFT))   | /* Timer clock prescaler configuration */
            ((uint8)(FTM_BDM_MODE_10) << FTM_CONF_BDMMODE_SHIFT_U8)      /* Timer debug config */
        ),
#if (OCU_SET_CLOCK_MODE_API == STD_ON)
        /** @brief  Alternate prescaler */
        ((uint8)((uint32)(FTM_SC_PS_DIV1_U32) << OCU_FTM_ALT_CLOCK_DIV_SHIFT))
#endif
    }
};

/** @brief    Ftm IP configuration */
const Ftm_Ocu_Ip_ModuleConfigType Ftm_Ocu_Ip_ModuleCfgPB_BOARD_INITPERIPHERALS = {
    /** @brief  Number of Ftm channels in the OCU configuration */
    (uint8)NUMBER_CHANNEL_BOARD_INITPERIPHERALS,
    /** @brief  Number of Ftm modules in the OCU configuration */
    (uint8)1,
    /** @brief  Pointer to the array of Ftm channel enabled OCU channel configurations */
    &Ftm_Ocu_Ip_ChannelConfig_PB_BOARD_INITPERIPHERALS,
    /** @brief  Pointer to the array of Ftm module enabled OCU channel configurations */
    &Ftm_Ocu_Ip_SpecificIpConfig_PB_BOARD_INITPERIPHERALS 
};

#define OCU_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Ocu_MemMap.h"

/*==================================================================================================
*                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                        LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL FUNCTIONS
==================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */
