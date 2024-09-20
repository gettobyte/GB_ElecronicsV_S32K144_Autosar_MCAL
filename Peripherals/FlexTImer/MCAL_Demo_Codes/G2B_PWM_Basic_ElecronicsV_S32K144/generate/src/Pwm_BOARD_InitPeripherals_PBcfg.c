/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : Ftm Flexio
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
*   @file       Pwm_PBcfg.c
*
*   @addtogroup pwm_driver Pwm Driver
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
#include "StandardTypes.h"
#include "Pwm.h"

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define PWM_BOARD_InitPeripherals_PB_CFG_VENDOR_ID_C                       43
#define PWM_BOARD_InitPeripherals_PB_CFG_MODULE_ID_C                       121
#define PWM_BOARD_InitPeripherals_PB_CFG_AR_RELEASE_MAJOR_VERSION_C        4
#define PWM_BOARD_InitPeripherals_PB_CFG_AR_RELEASE_MINOR_VERSION_C        4
#define PWM_BOARD_InitPeripherals_PB_CFG_AR_RELEASE_REVISION_VERSION_C     0
#define PWM_BOARD_InitPeripherals_PB_CFG_SW_MAJOR_VERSION_C                1
#define PWM_BOARD_InitPeripherals_PB_CFG_SW_MINOR_VERSION_C                0
#define PWM_BOARD_InitPeripherals_PB_CFG_SW_PATCH_VERSION_C                1

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if source file and StandardTypes.h are of the same AUTOSAR version */
    #if ((PWM_BOARD_InitPeripherals_PB_CFG_AR_RELEASE_MAJOR_VERSION_C != STD_AR_RELEASE_MAJOR_VERSION) || \
         (PWM_BOARD_InitPeripherals_PB_CFG_AR_RELEASE_MINOR_VERSION_C != STD_AR_RELEASE_MINOR_VERSION))
        #error "AUTOSAR version numbers of Pwm_BOARD_InitPeripherals_PBcfg.c and StandardTypes.h are different."
    #endif
#endif

#if (PWM_BOARD_InitPeripherals_PB_CFG_VENDOR_ID_C != PWM_VENDOR_ID)
    #error "Pwm_BOARD_InitPeripherals_PBcfg.c and Pwm.h have different vendor ids"
#endif

#if ((PWM_BOARD_InitPeripherals_PB_CFG_AR_RELEASE_MAJOR_VERSION_C    != PWM_AR_RELEASE_MAJOR_VERSION) || \
     (PWM_BOARD_InitPeripherals_PB_CFG_AR_RELEASE_MINOR_VERSION_C    != PWM_AR_RELEASE_MINOR_VERSION) || \
     (PWM_BOARD_InitPeripherals_PB_CFG_AR_RELEASE_REVISION_VERSION_C != PWM_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR version numbers of Pwm_BOARD_InitPeripherals_PBcfg.c and Pwm.h are different"
#endif

#if ((PWM_BOARD_InitPeripherals_PB_CFG_SW_MAJOR_VERSION_C != PWM_SW_MAJOR_VERSION) || \
     (PWM_BOARD_InitPeripherals_PB_CFG_SW_MINOR_VERSION_C != PWM_SW_MINOR_VERSION) || \
     (PWM_BOARD_InitPeripherals_PB_CFG_SW_PATCH_VERSION_C != PWM_SW_PATCH_VERSION))
    #error "Software version numbers of Pwm_BOARD_InitPeripherals_PBcfg.c and Pwm.h are different"
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

/*==================================================================================================
*                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define PWM_START_SEC_CODE
#include "Pwm_MemMap.h"


/** @brief  Prototypes of PWM channels User Notifications */

extern void pwm_callback(void);

#define PWM_STOP_SEC_CODE
#include "Pwm_MemMap.h"

/*==================================================================================================
*                                        GLOBAL VARIABLES
==================================================================================================*/
#define PWM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Pwm_MemMap.h"

/*============================== Channels configuration ===================================*/
/**
* @brief        Array of configured PWM channels
*
*/
const Pwm_ChannelConfigType Pwm_Channels_BOARD_InitPeripherals_PB[PWM_BOARD_InitPeripherals_PB_CFG_CHANNELS_COUNT] =
{
    /* PwmChannel_0 */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)0U,
        /** @brief  Channel class */
        PWM_VARIABLE_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_FTM,
            /** @brief  Hardware Channel Configuration Pointer */
            (const void *)(&Ftm_Pwm_Ip_BOARD_InitPeripherals_I0_Ch0),
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)FTM_PWM_IP_BOARD_InitPeripherals_I0_CH0_CFG,
            /** @brief The duty cycle of this channel */
            3000U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_HIGH,
        &pwm_callback
    },
    /* PwmChannel_1 */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)1U,
        /** @brief  Channel class */
        PWM_VARIABLE_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_FTM,
            /** @brief  Hardware Channel Configuration Pointer */
            (const void *)(&Ftm_Pwm_Ip_BOARD_InitPeripherals_I0_Ch1),
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)FTM_PWM_IP_BOARD_InitPeripherals_I0_CH1_CFG,
            /** @brief The duty cycle of this channel */
            0U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_HIGH,
        NULL_PTR
    },
    /* PwmChannel_2 */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)2U,
        /** @brief  Channel class */
        PWM_VARIABLE_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_FTM,
            /** @brief  Hardware Channel Configuration Pointer */
            (const void *)(&Ftm_Pwm_Ip_BOARD_InitPeripherals_I0_Ch2),
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)FTM_PWM_IP_BOARD_InitPeripherals_I0_CH2_CFG,
            /** @brief The duty cycle of this channel */
            2000U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_HIGH,
        NULL_PTR
    }
};

/*============================== Instances configuration ===================================*/

#if (PWM_HW_INSTANCE_USED == STD_ON)
/** @brief        Array of configured Pwm instances */
const Pwm_IpwInstanceConfigType Pwm_Instances_BOARD_InitPeripherals_PB[PWM_BOARD_InitPeripherals_PB_CFG_INSTANCES_COUNT] =
{
    {
        /** @brief  The Id instance configured */
        0U,
        /** @brief  The type of ip instance configured */
        PWM_INSTANCE_FTM,
        /** @brief  Pointer to the ip instance configuration structure */
        (const void *)(&Ftm_Pwm_Ip_BOARD_InitPeripherals_UserCfg0)
    }

};
#endif
/*============================== High level configuration ===================================*/
const Pwm_ConfigType Pwm_Config_BOARD_InitPeripherals =
{
    /** @brief  Number of configured PWM channels */
    (Pwm_ChannelType)PWM_BOARD_InitPeripherals_PB_CFG_CHANNELS_COUNT,
    /** @brief  Pointer to array of PWM channels */
    &Pwm_Channels_BOARD_InitPeripherals_PB,
#if (PWM_HW_INSTANCE_USED == STD_ON)
    /** @brief  Number of Pwm configured instances */
    (Pwm_InstanceType)PWM_BOARD_InitPeripherals_PB_CFG_INSTANCES_COUNT,
    /** @brief  Pointer to the list of Pwm configured channels */
    &Pwm_Instances_BOARD_InitPeripherals_PB,
#endif
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
    /** @brief  Hardware to logic channel map. Array containing a number of elements
                equal to total number of available channels on all IP. */
    {
        /* Index of channels 0 - 7 of FTM_0 in the array of logic PWM channels */
        (Pwm_ChannelType)0, (Pwm_ChannelType)1, (Pwm_ChannelType)2, (Pwm_ChannelType)255, (Pwm_ChannelType)255, (Pwm_ChannelType)255, (Pwm_ChannelType)255, (Pwm_ChannelType)255,
        /* Index of channels 0 - 7 of FTM_1 in the array of logic PWM channels */
        (Pwm_ChannelType)255, (Pwm_ChannelType)255, (Pwm_ChannelType)255, (Pwm_ChannelType)255, (Pwm_ChannelType)255, (Pwm_ChannelType)255, (Pwm_ChannelType)255, (Pwm_ChannelType)255,
        /* Index of channels 0 - 7 of FTM_2 in the array of logic PWM channels */
        (Pwm_ChannelType)255, (Pwm_ChannelType)255, (Pwm_ChannelType)255, (Pwm_ChannelType)255, (Pwm_ChannelType)255, (Pwm_ChannelType)255, (Pwm_ChannelType)255, (Pwm_ChannelType)255,
        /* Index of channels 0 - 7 of FTM_3 in the array of logic PWM channels */
        (Pwm_ChannelType)255, (Pwm_ChannelType)255, (Pwm_ChannelType)255, (Pwm_ChannelType)255, (Pwm_ChannelType)255, (Pwm_ChannelType)255, (Pwm_ChannelType)255, (Pwm_ChannelType)255,
        /*---------------------Flexio_0---------------------------*/
        (Pwm_ChannelType)255,            /* Flexio_0_0 unused */
        (Pwm_ChannelType)255,            /* Flexio_0_1 unused */
        (Pwm_ChannelType)255,            /* Flexio_0_2 unused */
        (Pwm_ChannelType)255            /* Flexio_0_3 unused */
    }
#endif
};

#define PWM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Pwm_MemMap.h"


#ifdef __cplusplus
}
#endif

/** @} */

