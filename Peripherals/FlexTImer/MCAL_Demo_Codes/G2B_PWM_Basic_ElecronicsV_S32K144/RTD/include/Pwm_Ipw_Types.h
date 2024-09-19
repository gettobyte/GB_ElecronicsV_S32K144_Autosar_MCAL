/*==================================================================================================
* Project              : RTD AUTOSAR 4.4
* Platform             : CORTEXM
* Peripheral           : Ftm Flexio
* Dependencies         : none
*
* Autosar Version      : 4.4.0
* Autosar Revision     : ASR_REL_4_4_REV_0000
* Autosar Conf.Variant :
* SW Version           : 1.0.1
* Build Version        : S32K1_RTD_1_0_1_D2202_ASR_REL_4_4_REV_0000_20220224
*
* (c) Copyright 2020-2022 NXP Semiconductors
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

#ifndef PWM_IPW_TYPES_H
#define PWM_IPW_TYPES_H

/**
*   @file       Pwm_Ipw_Types.h
*
*   @internal
*   @addtogroup pwm_driver Pwm Driver
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

#include "Pwm_Ipw_Cfg.h"
#include "Ftm_Pwm_Ip.h"

#if (PWM_FLEXIO_USED == STD_ON)
    #include "Flexio_Pwm_Ip_Types.h"
#endif

/*==================================================================================================
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define PWM_IPW_TYPES_VENDOR_ID                         43
#define PWM_IPW_TYPES_AR_RELEASE_MAJOR_VERSION          4
#define PWM_IPW_TYPES_AR_RELEASE_MINOR_VERSION          4
#define PWM_IPW_TYPES_AR_RELEASE_REVISION_VERSION       0
#define PWM_IPW_TYPES_SW_MAJOR_VERSION                  1
#define PWM_IPW_TYPES_SW_MINOR_VERSION                  0
#define PWM_IPW_TYPES_SW_PATCH_VERSION                  1

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if header file and Pwm_Ipw_Cfg.h header file are of the same vendor */
#if (PWM_IPW_TYPES_VENDOR_ID != PWM_IPW_CFG_VENDOR_ID)
    #error "Vendor IDs of Pwm_Ipw_Types.h and Pwm_Ipw_Cfg.h are different."
#endif

/* Check if header file and Pwm_Ipw_Cfg.h header file are of the same AUTOSAR version */
#if ((PWM_IPW_TYPES_AR_RELEASE_MAJOR_VERSION    != PWM_IPW_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (PWM_IPW_TYPES_AR_RELEASE_MINOR_VERSION    != PWM_IPW_CFG_AR_RELEASE_MINOR_VERSION) || \
     (PWM_IPW_TYPES_AR_RELEASE_REVISION_VERSION != PWM_IPW_CFG_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR version numbers of Pwm_Ipw_Types.h and Pwm_Ipw_Cfg.h are different."
#endif

/* Check if header file and Pwm_Ipw_Cfg.h header file are of the same software version */
#if ((PWM_IPW_TYPES_SW_MAJOR_VERSION != PWM_IPW_CFG_SW_MAJOR_VERSION) || \
     (PWM_IPW_TYPES_SW_MINOR_VERSION != PWM_IPW_CFG_SW_MINOR_VERSION) || \
     (PWM_IPW_TYPES_SW_PATCH_VERSION != PWM_IPW_CFG_SW_PATCH_VERSION))
    #error "Software version numbers of Pwm_Ipw_Types.h and Pwm_Ipw_Cfg.h are different."
#endif

/* Check if header file and Ftm_Pwm_Ip.h header file are of the same vendor */
#if (PWM_IPW_TYPES_VENDOR_ID != FTM_PWM_IP_VENDOR_ID)
    #error "Vendor IDs of Pwm_Ipw_Types.h and Ftm_Pwm_Ip.h are different."
#endif

/* Check if header file and Ftm_Pwm_Ip.h header file are of the same AUTOSAR version */
#if ((PWM_IPW_TYPES_AR_RELEASE_MAJOR_VERSION    != FTM_PWM_IP_AR_RELEASE_MAJOR_VERSION) || \
     (PWM_IPW_TYPES_AR_RELEASE_MINOR_VERSION    != FTM_PWM_IP_AR_RELEASE_MINOR_VERSION) || \
     (PWM_IPW_TYPES_AR_RELEASE_REVISION_VERSION != FTM_PWM_IP_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR version numbers of Pwm_Ipw_Types.h and Ftm_Pwm_Ip.h are different."
#endif

/* Check if header file and Ftm_Pwm_Ip.h header file are of the same software version */
#if ((PWM_IPW_TYPES_SW_MAJOR_VERSION != FTM_PWM_IP_SW_MAJOR_VERSION) || \
     (PWM_IPW_TYPES_SW_MINOR_VERSION != FTM_PWM_IP_SW_MINOR_VERSION) || \
     (PWM_IPW_TYPES_SW_PATCH_VERSION != FTM_PWM_IP_SW_PATCH_VERSION))
    #error "Software version numbers of Pwm_Ipw_Types.h and Ftm_Pwm_Ip.h are different."
#endif

#if (PWM_FLEXIO_USED == STD_ON)
    /* Check if source file and Flexio_Pwm_Ip_Types.h header file are of the same vendor */
    #if (PWM_IPW_TYPES_VENDOR_ID != FLEXIO_PWM_IP_TYPES_VENDOR_ID)
        #error "Vendor IDs of Pwm_Ipw.c and Flexio_Pwm_Ip_Types.h are different."
    #endif

    /* Check if source file and Flexio_Pwm_Ip_Types.h header file are of the same AUTOSAR version */
    #if ((PWM_IPW_TYPES_AR_RELEASE_MAJOR_VERSION    != FLEXIO_PWM_IP_TYPES_AR_RELEASE_MAJOR_VERSION) || \
         (PWM_IPW_TYPES_AR_RELEASE_MINOR_VERSION    != FLEXIO_PWM_IP_TYPES_AR_RELEASE_MINOR_VERSION) || \
         (PWM_IPW_TYPES_AR_RELEASE_REVISION_VERSION != FLEXIO_PWM_IP_TYPES_AR_RELEASE_REVISION_VERSION))
        #error "AUTOSAR version numbers of Pwm_Ipw.c and Flexio_Pwm_Ip_Types.h are different."
    #endif

    /* Check if source file and Flexio_Pwm_Ip_Types.h header file are of the same software version */
    #if ((PWM_IPW_TYPES_SW_MAJOR_VERSION != FLEXIO_PWM_IP_TYPES_SW_MAJOR_VERSION) || \
         (PWM_IPW_TYPES_SW_MINOR_VERSION != FLEXIO_PWM_IP_TYPES_SW_MINOR_VERSION) || \
         (PWM_IPW_TYPES_SW_PATCH_VERSION != FLEXIO_PWM_IP_TYPES_SW_PATCH_VERSION))
        #error "Software version numbers of Pwm_Ipw.c and Flexio_Pwm_Ip_Types.h are different."
    #endif
#endif
/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

#if (PWM_SET_CHANNEL_OUTPUT_API == STD_ON)
/**
* @brief        Defines state of PWM channel
* @details      PWM_FTM_ACTIVE   - The PWM pin will be in the same state of configured polarity
*               PWM_FTM_INACTIVE - The PWM pin will be in the opposite state of configured polarity
*/
typedef enum
{
    PWM_FTM_ACTIVE = 0,
    PWM_FTM_INACTIVE
} Pwm_StateType;
#endif

/**
* @brief        PWM instance type
*/
typedef uint8 Pwm_IpwInstanceType;

#if (PWM_HW_INSTANCE_USED == STD_ON)
/**
* @brief     Defines enum for a type of instance
* @details   IPW type used to identify pointer to instance configuration.
*
*/
typedef enum
{
    /** @brief  No instance type */
    PWM_INSTANCE_NONE   = 0x00U,
    /** @brief  Ip instance configured is Ftm */
    PWM_INSTANCE_FTM    = 0x01U
} Pwm_IpwHwInstanceType;
#endif

/**
* @brief        Defines enum for a type of channel
* @details      IPW type used to identify a hardware channel
*
*/
typedef enum
{
    /** @brief  No channel type */
    PWM_CHANNEL_NONE                = 0x00U,
    /** @brief  Channel type is Ftm */
    PWM_CHANNEL_FTM                 = 0x01U,
#if (PWM_FLEXIO_USED == STD_ON)
    /** @brief  Channel type is Flexio */
    PWM_CHANNEL_FLEXIO              = 0x02U
#endif
} Pwm_IpwHwChannelType;

/**
* @internal
* @brief      Defines struct for a hardware channel
* @details    IPW type used to implement a PWM channel
*
*/
typedef struct
{
    /** @brief  The type of ip channel configured */
    const Pwm_IpwHwChannelType               ChannelType;
    /** @brief  Pointer to the ip channel configuration structure */
    const Ftm_Pwm_Ip_ChannelConfigType       * FtmChConfig;
#if (PWM_FLEXIO_USED == STD_ON)
    /** @brief  Pointer to the Flexio ip channel configuration structure */
    const Flexio_Pwm_Ip_ChannelConfigType    * FlexioChConfig;
#endif
    /** @brief Instance id for this channel */
    const Pwm_IpwInstanceType                ChannelInstanceId;
    /** @brief The duty cycle of this channel */
    const uint16                             ChannelDutyCycle;
} Pwm_IpwChannelConfigType;

#if (PWM_HW_INSTANCE_USED == STD_ON)
/**
* @internal
* @brief          Defines struct for a hardware instance
* @details        IPW type used to iplement a PWM HW instance configuration.
*
*/
typedef struct 
{
    /** @brief  The Id instance configured */
    uint8                            InstanceId;
    /** @brief  The type of ip instance configured */
    const Pwm_IpwHwInstanceType      InstanceType;
    /** @brief  Pointer to the ip instance configuration structure */
    const Ftm_Pwm_Ip_UserCfgType     * FtmInsConfig;
} Pwm_IpwInstanceConfigType;
#endif


#ifdef __cplusplus
}
#endif

/** @} */

#endif /* PWM_IPW_TYPES_H */
