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

#ifndef FTM_OCU_IP_TYPES_H
#define FTM_OCU_IP_TYPES_H

/**
*   @file         Ftm_Ocu_Ip_Types.h
*
*   @addtogroup   ocu_ip Ocu IPL
*   @brief        Ocu FTM driver header file specific to OCU driver
*   @details      FTM specific defines which need to be exported to external application
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

#include "Ftm_Ocu_Ip_CfgDefines.h"
/*==================================================================================================
*                               HEADER FILE VERSION INFORMATION
==================================================================================================*/
#define FTM_OCU_IP_TYPES_VENDOR_ID                       43
#define FTM_OCU_IP_TYPES_AR_RELEASE_MAJOR_VERSION        4
#define FTM_OCU_IP_TYPES_AR_RELEASE_MINOR_VERSION        4
#define FTM_OCU_IP_TYPES_AR_RELEASE_REVISION_VERSION     0
#define FTM_OCU_IP_TYPES_SW_MAJOR_VERSION                1
#define FTM_OCU_IP_TYPES_SW_MINOR_VERSION                0
#define FTM_OCU_IP_TYPES_SW_PATCH_VERSION                0
/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/
#if (FTM_OCU_IP_TYPES_VENDOR_ID != FTM_OCU_IP_CFGDEFINES_VENDOR_ID)
    #error "Ftm_Ocu_Ip_Types.h and Ftm_Ocu_Ip_CfgDefines.h have different vendor ids"
#endif

/* Check if  header file and Ftm_Ocu_Ip_CfgDefines.h file are of the same Autosar version */
#if ((FTM_OCU_IP_TYPES_AR_RELEASE_MAJOR_VERSION != FTM_OCU_IP_CFGDEFINES_AR_RELEASE_MAJOR_VERSION) || \
     (FTM_OCU_IP_TYPES_AR_RELEASE_MINOR_VERSION != FTM_OCU_IP_CFGDEFINES_AR_RELEASE_MINOR_VERSION) || \
     (FTM_OCU_IP_TYPES_AR_RELEASE_REVISION_VERSION != FTM_OCU_IP_CFGDEFINES_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Ftm_Ocu_Ip_Types.h and Ftm_Ocu_Ip_CfgDefines.h are different"
#endif

/* Check if header file and Ftm_Ocu_Ip_CfgDefines.h file are of the same Software version */
#if ((FTM_OCU_IP_TYPES_SW_MAJOR_VERSION != FTM_OCU_IP_CFGDEFINES_SW_MAJOR_VERSION) || \
     (FTM_OCU_IP_TYPES_SW_MINOR_VERSION != FTM_OCU_IP_CFGDEFINES_SW_MINOR_VERSION) || \
     (FTM_OCU_IP_TYPES_SW_PATCH_VERSION != FTM_OCU_IP_CFGDEFINES_SW_PATCH_VERSION))
    #error "Software Version Numbers of Ftm_Ocu_Ip_Types.h and Ftm_Ocu_Ip_CfgDefines.h are different"
#endif
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

/** @brief Combine control width for channel combine function */
#define FTM_COMBINE_CH_CTRL_WIDTH  (8U)

/** @brief invalid FTM channel number */
#define OCU_FTM_INVALID_CHANNEL_NUM     255U

/**
* @{
* @brief          FTM channels defines
* @details        There are defines used for the FTM channel encoding -> channel_id
*
* @note           a FTM module generally has only 6 channels so by using this method 
*                 there will be gaps of 2 channels between different FTM modules because
*                 [              5 bit  | 3 bit               ]
*                 [ module id: 31 ... 0 | channel id: 7 ... 0 ]
*/
#define FTM_MOD_MASK_U8     (0xF8U)

#define FTM_MOD_SHIFT       (3U)

#define FTM_CH_MASK_U8      (0x07U)

#define FTM_CH_SHIFT        (0U)
/** @} */


/**
* @brief FTM 0 channel 0
*/
#define FTM_0_CH_0    (0x00U)
/**
* @brief FTM 0 channel 1 
*/
#define FTM_0_CH_1    (0x01U)
/**
* @brief FTM 0 channel 2 
*/
#define FTM_0_CH_2    (0x02U)
/**
* @brief FTM 0 channel 3 
*/
#define FTM_0_CH_3    (0x03U)
/**
* @brief FTM 0 channel 4 
*/
#define FTM_0_CH_4    (0x04U)
/**
* @brief FTM 0 channel 5 
*/
#define FTM_0_CH_5    (0x05U)
/**
* @brief FTM 0 channel 6 
*/
#define FTM_0_CH_6    (0x06U)
/**
* @brief FTM 0 channel 7 
*/
#define FTM_0_CH_7    (0x07U)

/**
* @brief FTM 1 channel 0
*/
#define FTM_1_CH_0    ((uint8)((1U << FTM_MOD_SHIFT) + 0x00U))
/**
* @brief FTM 1 channel 1
*/
#define FTM_1_CH_1    ((uint8)((1U << FTM_MOD_SHIFT) + 0x01U))
/**
* @brief FTM 1 channel 2
*/
#define FTM_1_CH_2    ((uint8)((1U << FTM_MOD_SHIFT) + 0x02U))
/**
* @brief FTM 1 channel 3
*/
#define FTM_1_CH_3    ((uint8)((1U << FTM_MOD_SHIFT) + 0x03U))
/**
* @brief FTM 1 channel 4
*/
#define FTM_1_CH_4    ((uint8)((1U << FTM_MOD_SHIFT) + 0x04U))
/**
* @brief FTM 1 channel 5
*/
#define FTM_1_CH_5    ((uint8)((1U << FTM_MOD_SHIFT) + 0x05U))
/**
* @brief FTM 1 channel 6
*/
#define FTM_1_CH_6    ((uint8)((1U << FTM_MOD_SHIFT) + 0x06U))
/**
* @brief FTM 1 channel 7
*/
#define FTM_1_CH_7    ((uint8)((1U << FTM_MOD_SHIFT) + 0x07U))

/**
* @brief FTM 2 channel 0
*/
#define FTM_2_CH_0    ((uint8)((2U << FTM_MOD_SHIFT) + 0x00U))
/**
* @brief FTM 2 channel 1
*/
#define FTM_2_CH_1    ((uint8)((2U << FTM_MOD_SHIFT) + 0x01U))
/**
* @brief FTM 2 channel 2
*/
#define FTM_2_CH_2    ((uint8)((2U << FTM_MOD_SHIFT) + 0x02U))
/**
* @brief FTM 2 channel 3
*/
#define FTM_2_CH_3    ((uint8)((2U << FTM_MOD_SHIFT) + 0x03U))
/**
* @brief FTM 2 channel 4
*/
#define FTM_2_CH_4    ((uint8)((2U << FTM_MOD_SHIFT) + 0x04U))
/**
* @brief FTM 2 channel 5
*/
#define FTM_2_CH_5    ((uint8)((2U << FTM_MOD_SHIFT) + 0x05U))
/**
* @brief FTM 2 channel 6
*/
#define FTM_2_CH_6    ((uint8)((2U << FTM_MOD_SHIFT) + 0x06U))
/**
* @brief FTM 2 channel 7
*/
#define FTM_2_CH_7    ((uint8)((2U << FTM_MOD_SHIFT) + 0x07U))

/**
* @brief FTM 3 channel 0
*/
#define FTM_3_CH_0    ((uint8)((3U << FTM_MOD_SHIFT) + 0x00U))
/**
* @brief FTM 3 channel 1
*/
#define FTM_3_CH_1    ((uint8)((3U << FTM_MOD_SHIFT) + 0x01U))
/**
* @brief FTM 3 channel 2
*/
#define FTM_3_CH_2    ((uint8)((3U << FTM_MOD_SHIFT) + 0x02U))
/**
* @brief FTM 3 channel 3
*/
#define FTM_3_CH_3    ((uint8)((3U << FTM_MOD_SHIFT) + 0x03U))
/**
* @brief FTM 3 channel 4
*/
#define FTM_3_CH_4    ((uint8)((3U << FTM_MOD_SHIFT) + 0x04U))
/**
* @brief FTM 3 channel 5
*/
#define FTM_3_CH_5    ((uint8)((3U << FTM_MOD_SHIFT) + 0x05U))
/**
* @brief FTM 3 channel 6
*/
#define FTM_3_CH_6    ((uint8)((3U << FTM_MOD_SHIFT) + 0x06U))
/**
* @brief FTM 3 channel 7
*/
#define FTM_3_CH_7    ((uint8)((3U << FTM_MOD_SHIFT) + 0x07U))

/**
* @brief FTM 4 channel 0
*/
#define FTM_4_CH_0    ((uint8)((4U << FTM_MOD_SHIFT) + 0x00U))
/**
* @brief FTM 4 channel 1
*/
#define FTM_4_CH_1    ((uint8)((4U << FTM_MOD_SHIFT) + 0x01U))
/**
* @brief FTM 4 channel 2
*/
#define FTM_4_CH_2    ((uint8)((4U << FTM_MOD_SHIFT) + 0x02U))
/**
* @brief FTM 4 channel 3
*/
#define FTM_4_CH_3    ((uint8)((4U << FTM_MOD_SHIFT) + 0x03U))
/**
* @brief FTM 4 channel 4
*/
#define FTM_4_CH_4    ((uint8)((4U << FTM_MOD_SHIFT) + 0x04U))
/**
* @brief FTM 4 channel 5
*/
#define FTM_4_CH_5    ((uint8)((4U << FTM_MOD_SHIFT) + 0x05U))
/**
* @brief FTM 4 channel 6
*/
#define FTM_4_CH_6    ((uint8)((4U << FTM_MOD_SHIFT) + 0x06U))
/**
* @brief FTM 4 channel 7
*/
#define FTM_4_CH_7    ((uint8)((4U << FTM_MOD_SHIFT) + 0x07U))

/**
* @brief FTM 5 channel 0
*/
#define FTM_5_CH_0    ((uint8)((5U << FTM_MOD_SHIFT) + 0x00U))
/**
* @brief FTM 5 channel 1
*/
#define FTM_5_CH_1    ((uint8)((5U << FTM_MOD_SHIFT) + 0x01U))
/**
* @brief FTM 5 channel 2
*/
#define FTM_5_CH_2    ((uint8)((5U << FTM_MOD_SHIFT) + 0x02U))
/**
* @brief FTM 5 channel 3
*/
#define FTM_5_CH_3    ((uint8)((5U << FTM_MOD_SHIFT) + 0x03U))
/**
* @brief FTM 5 channel 4
*/
#define FTM_5_CH_4    ((uint8)((5U << FTM_MOD_SHIFT) + 0x04U))
/**
* @brief FTM 5 channel 5
*/
#define FTM_5_CH_5    ((uint8)((5U << FTM_MOD_SHIFT) + 0x05U))
/**
* @brief FTM 5 channel 6
*/
#define FTM_5_CH_6    ((uint8)((5U << FTM_MOD_SHIFT) + 0x06U))
/**
* @brief FTM 5 channel 7
*/
#define FTM_5_CH_7    ((uint8)((5U << FTM_MOD_SHIFT) + 0x07U))

/**
* @brief FTM 6 channel 0
*/
#define FTM_6_CH_0    ((uint8)((6U << FTM_MOD_SHIFT) + 0x00U))
/**
* @brief FTM 6 channel 1
*/
#define FTM_6_CH_1    ((uint8)((6U << FTM_MOD_SHIFT) + 0x01U))
/**
* @brief FTM 6 channel 2
*/
#define FTM_6_CH_2    ((uint8)((6U << FTM_MOD_SHIFT) + 0x02U))
/**
* @brief FTM 6 channel 3
*/
#define FTM_6_CH_3    ((uint8)((6U << FTM_MOD_SHIFT) + 0x03U))
/**
* @brief FTM 6 channel 4
*/
#define FTM_6_CH_4    ((uint8)((6U << FTM_MOD_SHIFT) + 0x04U))
/**
* @brief FTM 6 channel 5
*/
#define FTM_6_CH_5    ((uint8)((6U << FTM_MOD_SHIFT) + 0x05U))
/**
* @brief FTM 6 channel 6
*/
#define FTM_6_CH_6    ((uint8)((6U << FTM_MOD_SHIFT) + 0x06U))
/**
* @brief FTM 6 channel 7
*/
#define FTM_6_CH_7    ((uint8)((6U << FTM_MOD_SHIFT) + 0x07U))

/**
* @brief FTM 7 channel 0
*/
#define FTM_7_CH_0    ((uint8)((7U << FTM_MOD_SHIFT) + 0x00U))
/**
* @brief FTM 7 channel 1
*/
#define FTM_7_CH_1    ((uint8)((7U << FTM_MOD_SHIFT) + 0x01U))
/**
* @brief FTM 7 channel 2
*/
#define FTM_7_CH_2    ((uint8)((7U << FTM_MOD_SHIFT) + 0x02U))
/**
* @brief FTM 7 channel 3
*/
#define FTM_7_CH_3    ((uint8)((7U << FTM_MOD_SHIFT) + 0x03U))
/**
* @brief FTM 7 channel 4
*/
#define FTM_7_CH_4    ((uint8)((7U << FTM_MOD_SHIFT) + 0x04U))
/**
* @brief FTM 7 channel 5
*/
#define FTM_7_CH_5    ((uint8)((7U << FTM_MOD_SHIFT) + 0x05U))
/**
* @brief FTM 7 channel 6
*/
#define FTM_7_CH_6    ((uint8)((7U << FTM_MOD_SHIFT) + 0x06U))
/**
* @brief FTM 7 channel 7
*/
#define FTM_7_CH_7    ((uint8)((7U << FTM_MOD_SHIFT) + 0x07U))

/**
* @{
* @brief FTM register define used to configure counter clock source.
*/

#define OCU_FTM_OUTPUTDISABLED      (0U)

#ifndef OCU_FTM_CLOCK_SOURCE_SHIFT
#define OCU_FTM_CLOCK_SOURCE_SHIFT      (6U)
#define OCU_FTM_CLOCK_SOURCE_MASK_U8    (0x03U << OCU_FTM_CLOCK_SOURCE_SHIFT)
#endif

#ifndef OCU_FTM_CLOCK_DIV_SHIFT
#define OCU_FTM_CLOCK_DIV_SHIFT         (3U)
#define OCU_FTM_CLOCK_DIV_MASK_U8       (0x07U << OCU_FTM_CLOCK_DIV_SHIFT)
#endif

#ifndef FTM_CONF_BDMMODE_SHIFT_U8
#define FTM_CONF_BDMMODE_SHIFT_U8          (1U)
#define FTM_CONF_BDMMODE_MASK_U8        (0x03U << FTM_CONF_BDMMODE_SHIFT_U8)
#endif

#ifndef OCU_FTM_ALT_CLOCK_DIV_SHIFT
#define OCU_FTM_ALT_CLOCK_DIV_SHIFT     (5U)
#define OCU_FTM_ALT_CLOCK_DIV_MASK_U8   (0x07U << OCU_FTM_ALT_CLOCK_DIV_SHIFT)
#endif

#ifndef OCU_FTM_OUTPIN_USED_SHIFT
#define OCU_FTM_OUTPIN_USED_SHIFT       (7U)
#define OCU_FTM_OUTPIN_USED_MASK_U8     (0x01U << OCU_FTM_OUTPIN_USED_SHIFT)
#endif

#ifndef OCU_FTM_PIN_STATE_SHIFT
#define OCU_FTM_PIN_STATE_SHIFT         (6U)
#define OCU_FTM_PIN_STATE_MASK_U8       (0x01U << OCU_FTM_PIN_STATE_SHIFT)
#endif

#ifndef OCU_FTM_PIN_ACTION_SHIFT
#define OCU_FTM_PIN_ACTION_SHIFT        (4U)
#define OCU_FTM_PIN_ACTION_MASK_U8      (0x03U << OCU_FTM_PIN_ACTION_SHIFT)
#endif

#define FTM_SC_PS_DIV1_U32      (0UL)
#define FTM_SC_PS_DIV2_U32      (1UL)
#define FTM_SC_PS_DIV4_U32      (2UL)
#define FTM_SC_PS_DIV8_U32      (3UL)
#define FTM_SC_PS_DIV16_U32     (4UL)
#define FTM_SC_PS_DIV32_U32     (5UL)
#define FTM_SC_PS_DIV64_U32     (6UL)
#define FTM_SC_PS_DIV128_U32    (7UL)

/**@}*/

/* @brief   Offset for PWMENn bits */
#define OCU_FTM_SC_PWMEN_SHIFT_U8   (16U)

/* @brief   Offset for CHnOCV bits */
#define OCU_FTM_SWOCTRL_FORCED_VALUE_OFFSET  (8U)

/*!
 * @brief Options for the FlexTimer behavior in BDM Mode
 *
 */
#define FTM_BDM_MODE_00 0x00U   /*!< FTM counter stopped, CH(n)F bit can be set, FTM channels
                                 *   in functional mode, writes to MOD, CNTIN and C(n)V registers bypass
                                 *   the register buffers */
#define FTM_BDM_MODE_01 0x01U   /*!< FTM counter stopped, CH(n)F bit is not set, FTM channels
                                 *   outputs are forced to their safe value, writes to MOD, CNTIN and
                                 *   C(n)V registers bypass the register buffers */
#define FTM_BDM_MODE_10 0x02U   /*!< FTM counter stopped, CH(n)F bit is not set, FTM channels
                                 *    outputs are frozen when chip enters in BDM mode, writes to MOD,
                                 *    CNTIN and C(n)V registers bypass the register buffers */
#define FTM_BDM_MODE_11 0x03U   /*!< FTM counter in functional mode, CH(n)F bit can be set,
                                 *   FTM channels in functional mode, writes to MOD, CNTIN and C(n)V
                                 *   registers is in fully functional mode */

/*!
 * @brief FlexTimer Clock Source Selection
 *
 */
#define FTM_CLOCK_SOURCE_NONE           0x00U   /*!< None use clock for FTM  */
#define FTM_CLOCK_SOURCE_SYSTEMCLK      0x01U   /*!< System clock            */
#define FTM_CLOCK_SOURCE_FIXEDCLK       0x02U   /*!< Fixed clock             */
#define FTM_CLOCK_SOURCE_EXTERNALCLK    0x03U   /*!< External clock          */

/*!
 * @brief FlexTimer Prescale Factor Selections bits (PS).
 * @details Selects one of 8 division factors for the clock source selected by CLKS.
 *          The new prescaler factor affects the clock source on the next FTM input clock cycle
 *          after the new value is updated into the register bits.
 *          This field is write protected. It can be written only when MODE[WPDIS] = 1.
 *            000b - Divide by 1
 *            001b - Divide by 2
 *            010b - Divide by 4
 *            011b - Divide by 8
 *            100b - Divide by 16
 *            101b - Divide by 32
 *            110b - Divide by 64
 *            111b - Divide by 128
 *
 */
#define FTM_CLOCK_DIVID_BY_1    0x00U   /*!< Divide by 1   */
#define FTM_CLOCK_DIVID_BY_2    0x01U   /*!< Divide by 2   */
#define FTM_CLOCK_DIVID_BY_4    0x02U   /*!< Divide by 4   */
#define FTM_CLOCK_DIVID_BY_8    0x03U   /*!< Divide by 8   */
#define FTM_CLOCK_DIVID_BY_16   0x04U   /*!< Divide by 16  */
#define FTM_CLOCK_DIVID_BY_32   0x05U   /*!< Divide by 32  */
#define FTM_CLOCK_DIVID_BY_64   0x06U   /*!< Divide by 64  */
#define FTM_CLOCK_DIVID_BY_128  0x07U   /*!< Divide by 128 */

/**
 * @brief   Edge Pin Action values
 * @details Automatic action (by hardware) to be performed on a pin attached to an OCU channel.
 */
/** @brief The channel pin will be set HIGH upon compare match. */
#define FTM_OCU_SET_LOW     0U
/** @brief The channel pin will be set LOW upon compare match. */
#define FTM_OCU_SET_HIGH    1U
/** @brief The channel pin will be set to the opposite of its current level HIGH upon compare match. */
#define FTM_OCU_SET_TOGGLE  2U
/** @brief The channel pin will remain at its current level upon compare match. */
#define FTM_OCU_SET_DISABLE 3U

/**
 * @brief      Pin State levels
 * @details    Output state of the pin linked to an OCU channel.
 *
 */
/** @brief Ocu Pin level is logic low */
#define OCU_FTM_LOW     0U
/** @brief Ocu Pin level is logic high */
#define OCU_FTM_HIGH    1U

/**
 * @brief      Prescaler values
 * @details    Possible values of prescallers used to configure base-clock timers
 *
 */
/** @brief Selected value is the default/primary prescaler */
#define FTM_OCU_PRIMARY_PRESCALER       0U
/** @brief Selected value is the alternative configured prescaler */
#define FTM_OCU_ALTERNATIVE_PRESCALER   1U

/**
 * @brief      Ocu Return values
 * @details    Return information after setting a new threshold value.
 *
 */
/** @brief The compare match will occur inside the current Reference Interval. */
#define OCU_FTM_CM_IN_REF_INTERVAL  0U
/** @brief The compare match will not occur inside the current Reference Interval. */
#define OCU_FTM_CM_OUT_REF_INTERVAL 1U

/*==================================================================================================
*                                              ENUMS
==================================================================================================*/

/*! @brief FlexTimer output compare edge mode. Toggle, clear or set.*/
typedef enum
{
    FTM_DISABLE_OUTPUT  = 0x00U,
    FTM_TOGGLE_ON_MATCH = 0x01U,
    FTM_CLEAR_ON_MATCH  = 0x02U,
    FTM_SET_ON_MATCH    = 0x03U
} Ftm_Ocu_Ip_OutputCompareModeType;

/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
 * @brief      Edge Pin Action type
 * @details    Automatic action (by hardware) to be performed on a pin attached to an OCU channel.
 *
 */
typedef uint8 Ftm_Ocu_Ip_PinActionType;

/**
 * @brief      Pin State level
 * @details    Output state of the pin linked to an OCU channel.
 *
 */
typedef uint8 Ftm_Ocu_Ip_PinStateType;

/**
 * @brief      Prescaler type
 * @details    Specifies the possible values of prescallers used to configure base-clock timers
 *
 */
typedef uint8 Ftm_Ocu_Ip_SelectPrescalerType;

/**
 * @brief      Ocu Return Type
 * @details    Return information after setting a new threshold value.
 *
 */
typedef uint8 Ftm_Ocu_Ip_ReturnType;

/** Redefine FTM Register Layout Typedef from header file to comply with coding guidelines */
typedef FTM_Type Ftm_Ocu_Ip_xRegLayoutType;

/** @brief      Channel notification typedef */
typedef void (*Ftm_Ocu_Ip_CallbackType)(uint16 CallbackParam);

#if((OCU_GET_COUNTER_API == STD_ON)||(OCU_SET_RELATIVE_THRESHOLD_API == STD_ON)||(OCU_SET_ABSOLUTE_THRESHOLD_API == STD_ON))
/**
* @brief        FTM Value type (the value of the period is platform dependent and thus configurable)
* @details      Type for reading the counter and writing the threshold values (in number of ticks)
*
*/
typedef uint16 Ftm_Ocu_Ip_ValueType ;
#endif

#if (OCU_NOTIFICATION_SUPPORTED == STD_ON)
/**
 * @brief internal context structure
 *
 * This structure is used by the IPL driver for internal logic. 
 * The content is populated on Init
 */
typedef struct
{
    boolean                 mChannelInit;
    Ftm_Ocu_Ip_CallbackType mCallbackFunc;
    uint16                  mCallbackParam;
} Ftm_Ocu_Ip_ChStateType;
#endif

/** @brief  FTM IP channel specific configuration structure for the Ocu functionality */
typedef struct
{
    /** @brief Assigned FTM channel Id */
    const uint16 HwChannel;
    /** @brief Compare match threshold for the current channel*/
    const uint16 DefaultThreshold;    
    /** @brief FTM channel parameters */
    /** Bits 7        --> 1: Output Pin is Used / 0: Output Pin is not used
        Bit  6        --> Default Pin State: 0: PIN_LOW; 1: PIN_HIGH
        Bits 5 .. 4   --> Pin Action behaviour on compare match: SET_PIN_LOW; 2: SET_PIN_HIGH; 1: PIN_TOGLE; 0: OUTPUT_DISABLE
        Bits 3 .. 0   --> Reserved for future use*/
    const uint8 ChannelControlValue;
#if (OCU_NOTIFICATION_SUPPORTED == STD_ON)
    /** @brief  Channel notification function */
    Ftm_Ocu_Ip_CallbackType mCallbackFunc;
    /** @brief  Channel notification parameter */
    uint16                  mCallbackParam;
#endif
} Ftm_Ocu_Ip_ChannelConfigType;

/** @brief  FTM IP module specific configuration structure for the Ocu functionality */
typedef struct
{
    /** @brief Assigned FTM module Id */
    const uint8 ModuleId;
    /** @brief Assigned FTM module Id */
    const uint16 MaxCounterValue;
    /** @brief FTM module parameters */
    /** Bits 7 .. 6   --> Clock source
        Bits 5 .. 3   --> Normal prescale
        Bit  2 .. 1   --> Debug mode config
        Bits 0        --> Reserved for future use*/
    const uint8 ModuleControlValue;  
#if (OCU_SET_CLOCK_MODE_API == STD_ON)    
    /** @brief FTM channel parameters */
    /** Bits 7 .. 5 --> Alternate Prescaler configuration
        Bits 4 .. 0 --> Reserved for future use*/
    const uint8 AlternateCtrVal;
#endif
} Ftm_Ocu_Ip_SpecificIpConfigType;

/** @brief  FTM IP specific configuration structure type */
typedef struct
{
    /** @brief Number of FTM channels in the Ocu configuration */
    const uint8 NumChannels;
    /** @brief Number of FTM modules in the Ocu configuration */
    const uint8 NumModules;
    /** @brief Pointer to the configured channels for FTM */
    const Ftm_Ocu_Ip_ChannelConfigType (*pcxChannelsConfig)[];
    /** @brief Pointer to the configured channels for FTM */
    const Ftm_Ocu_Ip_SpecificIpConfigType (*pcxModulesConfig)[];     
} Ftm_Ocu_Ip_ModuleConfigType;

/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                      FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */

#endif  /* FTM_OCU_IP_TYPES_H */
