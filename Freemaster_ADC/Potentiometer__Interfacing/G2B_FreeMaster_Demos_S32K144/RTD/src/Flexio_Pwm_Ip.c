/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : Ftm Flexio
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
*   @file Flexio_Pwm_Ip.c
*
*   @addtogroup flexio_pwm_ip FlexIO Pwm IPL
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
#include "Flexio_Pwm_Ip.h"
#include "Flexio_Pwm_Ip_HwAccess.h"
#include "Flexio_Mcl_Ip_HwAccess.h"
#include "SchM_Pwm.h"

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define FLEXIO_PWM_IP_VENDOR_ID_C                      43
#define FLEXIO_PWM_IP_AR_RELEASE_MAJOR_VERSION_C       4
#define FLEXIO_PWM_IP_AR_RELEASE_MINOR_VERSION_C       4
#define FLEXIO_PWM_IP_AR_RELEASE_REVISION_VERSION_C    0
#define FLEXIO_PWM_IP_SW_MAJOR_VERSION_C               1
#define FLEXIO_PWM_IP_SW_MINOR_VERSION_C               0
#define FLEXIO_PWM_IP_SW_PATCH_VERSION_C               0

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if source file and Flexio_Mcl_Ip_HwAccess.h are of the same AUTOSAR version */
    #if ((FLEXIO_PWM_IP_AR_RELEASE_MAJOR_VERSION_C != FLEXIO_IP_HW_ACCESS_AR_RELEASE_MAJOR_VERSION_H) || \
         (FLEXIO_PWM_IP_AR_RELEASE_MINOR_VERSION_C != FLEXIO_IP_HW_ACCESS_AR_RELEASE_MINOR_VERSION_H))
        #error "AUTOSAR Version Numbers of Flexio_Pwm_Ip_Types.h and Flexio_Mcl_Ip_HwAccess.h are different"
    #endif

    /* Check if source file and SchM_Pwm.h are of the same AUTOSAR version */
    #if ((FLEXIO_PWM_IP_AR_RELEASE_MAJOR_VERSION_C != SCHM_PWM_AR_RELEASE_MAJOR_VERSION) || \
         (FLEXIO_PWM_IP_AR_RELEASE_MINOR_VERSION_C != SCHM_PWM_AR_RELEASE_MINOR_VERSION))
        #error "AUTOSAR version numbers of Flexio_Pwm_Ip.c and SchM_Pwm.h are different."
    #endif
#endif

/* Check if source file and Flexio_Pwm_Ip.h file are of the same vendor */
#if (FLEXIO_PWM_IP_VENDOR_ID_C != FLEXIO_PWM_IP_VENDOR_ID)
    #error "Vendor IDs of Flexio_Pwm_Ip.c and Flexio_Pwm_Ip.h are different."
#endif

/* Check if source file and Flexio_Pwm_Ip.h file are of the same AUTOSAR version */
#if ((FLEXIO_PWM_IP_AR_RELEASE_MAJOR_VERSION_C    != FLEXIO_PWM_IP_AR_RELEASE_MAJOR_VERSION) || \
     (FLEXIO_PWM_IP_AR_RELEASE_MINOR_VERSION_C    != FLEXIO_PWM_IP_AR_RELEASE_MINOR_VERSION) || \
     (FLEXIO_PWM_IP_AR_RELEASE_REVISION_VERSION_C != FLEXIO_PWM_IP_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR version numbers of Flexio_Pwm_Ip.c and Flexio_Pwm_Ip.h are different."
#endif

/* Check if source file and Flexio_Pwm_Ip.h file are of the same Software version */
#if ((FLEXIO_PWM_IP_SW_MAJOR_VERSION_C != FLEXIO_PWM_IP_SW_MAJOR_VERSION)  || \
     (FLEXIO_PWM_IP_SW_MINOR_VERSION_C != FLEXIO_PWM_IP_SW_MINOR_VERSION)  || \
     (FLEXIO_PWM_IP_SW_PATCH_VERSION_C != FLEXIO_PWM_IP_SW_PATCH_VERSION))
    #error "Software version numbers of Flexio_Pwm_Ip.c and Flexio_Pwm_Ip.h are different."
#endif

/* Check if source file and Flexio_Pwm_Ip_HwAccess.h file are of the same vendor */
#if (FLEXIO_PWM_IP_VENDOR_ID_C != FLEXIO_PWM_IP_HWACCESS_VENDOR_ID)
    #error "Vendor IDs of Flexio_Pwm_Ip.c and Flexio_Pwm_Ip_HwAccess.h are different."
#endif

/* Check if source file and Flexio_Pwm_Ip_HwAccess.h file are of the same AUTOSAR version */
#if ((FLEXIO_PWM_IP_AR_RELEASE_MAJOR_VERSION_C    != FLEXIO_PWM_IP_HWACCESS_AR_RELEASE_MAJOR_VERSION) || \
     (FLEXIO_PWM_IP_AR_RELEASE_MINOR_VERSION_C    != FLEXIO_PWM_IP_HWACCESS_AR_RELEASE_MINOR_VERSION) || \
     (FLEXIO_PWM_IP_AR_RELEASE_REVISION_VERSION_C != FLEXIO_PWM_IP_HWACCESS_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR version numbers of Flexio_Pwm_Ip.c and Flexio_Pwm_Ip_HwAccess.h are different."
#endif

/* Check if source file and Flexio_Pwm_Ip_HwAccess.h file are of the same Software version */
#if ((FLEXIO_PWM_IP_SW_MAJOR_VERSION_C != FLEXIO_PWM_IP_HWACCESS_SW_MAJOR_VERSION)  || \
     (FLEXIO_PWM_IP_SW_MINOR_VERSION_C != FLEXIO_PWM_IP_HWACCESS_SW_MINOR_VERSION)  || \
     (FLEXIO_PWM_IP_SW_PATCH_VERSION_C != FLEXIO_PWM_IP_HWACCESS_SW_PATCH_VERSION))
    #error "Software version numbers of Flexio_Pwm_Ip.c and Flexio_Pwm_Ip_HwAccess.h are different."
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
#define PWM_START_SEC_CONST_UNSPECIFIED
#include "Pwm_MemMap.h"

/** @brief Array with base addresses for Flexio instances available on platform */
Flexio_Pwm_Ip_HwAddrType * const Flexio_Pwm_Ip_aBasePtr[FLEXIO_PWM_IP_INSTANCE_COUNT] = IP_FLEXIO_BASE_PTRS;

#define PWM_STOP_SEC_CONST_UNSPECIFIED
#include "Pwm_MemMap.h"

#define PWM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Pwm_MemMap.h"

/** @brief Array with pointers to user cfg structs*/
const Flexio_Pwm_Ip_ChannelConfigType * Flexio_Pwm_Ip_aState[FLEXIO_PWM_IP_CHANNEL_COUNT];

#define PWM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Pwm_MemMap.h"

#define PWM_START_SEC_VAR_CLEARED_8
#include "Pwm_MemMap.h"

/** @brief Interrupt enable masks for used timers */
volatile uint8 timerIrqMask;

#define PWM_STOP_SEC_VAR_CLEARED_8
#include "Pwm_MemMap.h"

#define PWM_START_SEC_VAR_CLEARED_32
#include "Pwm_MemMap.h"

/** @brief Interrupt enable masks for used pins */
volatile uint32 pinIrqMask;

#define PWM_STOP_SEC_VAR_CLEARED_32
#include "Pwm_MemMap.h"

/*==================================================================================================
*                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL FUNCTIONS
==================================================================================================*/
#define PWM_START_SEC_CODE
#include "Pwm_MemMap.h"

#if (defined(FLEXIO_PWM_IP_HAS_PIN_OVERRIDE) && (FLEXIO_PWM_IP_HAS_PIN_OVERRIDE == STD_ON))
/*FUNCTION**********************************************************************
 *
 * Function Name : Flexio_Pwm_Ip_PinOverrideNeeded
 * Description   : Configure the pin override value based on channel polarity
 * and duty cycle case 0% or 100%. Returns true if pin overide was enabled, false
 * otherwise.
 *END**************************************************************************/
static boolean Flexio_Pwm_Ip_PinOverrideNeeded(uint8 instanceId, uint8 channel, uint16 period, uint16 dutyCycle)
{
    boolean retStatus = TRUE;
    Flexio_Pwm_Ip_StatusType status = FLEXIO_PWM_IP_STATUS_SUCCESS;
    /* Check if duty is 0% or 100% to not create spikes on the output */
    if ((0U == dutyCycle) || (0U == period))
    {
#if (defined(FLEXIO_PWM_IP_HAS_LOW_MODE) && (FLEXIO_PWM_IP_HAS_LOW_MODE == STD_ON))
        /* Case 0% duty cycle -> Ouput driven to Idle state */
        if (FLEXIO_PWM_IP_ACTIVE_HIGH == Flexio_Pwm_Ip_aState[channel]->polarity)
        {
#endif
            status = Flexio_Pwm_Ip_ForceOuputLevel(instanceId, channel, FALSE);
#if (defined(FLEXIO_PWM_IP_HAS_LOW_MODE) && (FLEXIO_PWM_IP_HAS_LOW_MODE == STD_ON))
        }
        else
        {
            status = Flexio_Pwm_Ip_ForceOuputLevel(instanceId, channel, TRUE);
        }
#endif
    }
    else if (dutyCycle == period)
    {
#if (defined(FLEXIO_PWM_IP_HAS_LOW_MODE) && (FLEXIO_PWM_IP_HAS_LOW_MODE == STD_ON))
        /* Case 100% duty cycle -> Ouput driven to Active state */
        if (FLEXIO_PWM_IP_ACTIVE_HIGH == Flexio_Pwm_Ip_aState[channel]->polarity)
        {
#endif
            status = Flexio_Pwm_Ip_ForceOuputLevel(instanceId, channel, TRUE);
#if (defined(FLEXIO_PWM_IP_HAS_LOW_MODE) && (FLEXIO_PWM_IP_HAS_LOW_MODE == STD_ON))
        }
        else
        {
            status = Flexio_Pwm_Ip_ForceOuputLevel(instanceId, channel, FALSE);
        }
#endif
    }
    else
    {
        retStatus = FALSE;
    }
    (void)status;

    return retStatus;
}
#endif /* (defined(FLEXIO_PWM_IP_HAS_PIN_OVERRIDE) && (FLEXIO_PWM_IP_HAS_PIN_OVERRIDE == STD_ON)) */

#define PWM_STOP_SEC_CODE
#include "Pwm_MemMap.h"

/*==================================================================================================
*                                        GLOBAL FUNCTIONS
==================================================================================================*/
#define PWM_START_SEC_CODE
#include "Pwm_MemMap.h"

/**
 *
 * Function Name : Flexio_Pwm_Ip_InitChannel
 * Description   : Initialize a flexio channel in pwm mode.
 * The function will initialize one timer and pin of the selected flexio channel in pwm
 * mode, with the configuration of the user. The interrupts will be disabled.
 *
 * @implements Flexio_Pwm_Ip_InitChannel_Activity
 */
Flexio_Pwm_Ip_StatusType Flexio_Pwm_Ip_InitChannel(uint8 instanceId, const Flexio_Pwm_Ip_ChannelConfigType * const userCfg)
{
#if ((defined(FLEXIO_PWM_IP_DEV_ERROR_DETECT)) && (FLEXIO_PWM_IP_DEV_ERROR_DETECT == STD_ON))
    /* Check received parameters */
    DevAssert(NULL_PTR != userCfg);
    DevAssert(FLEXIO_INSTANCE_COUNT > instanceId);
    /* Check userCfg period can be achieved with the selected duty cycle */
    DevAssert(userCfg->period >= userCfg->dutyCycle);
    DevAssert(FLEXIO_PWM_IP_TIMER_CMP_MAX_VALUE >= userCfg->dutyCycle);
    DevAssert(FLEXIO_PWM_IP_TIMER_CMP_MAX_VALUE >= (uint16)(userCfg->period - userCfg->dutyCycle));
#endif

    Flexio_Pwm_Ip_HwAddrType * const base = Flexio_Pwm_Ip_aBasePtr[instanceId];
    Flexio_Pwm_Ip_StatusType retStatus = FLEXIO_PWM_IP_STATUS_SUCCESS;

    /* TBD: Check with MCL that the selected timer and pin are mine */

    /* Save the user cfg pointer */
    Flexio_Pwm_Ip_aState[userCfg->timerId] = userCfg;

    /* Make sure the timer is disabled */
    Flexio_Pwm_Ip_SetTimerMode(base, userCfg->timerId, FLEXIO_PWM_IP_TIMER_DISABLED);

#if (defined(FLEXIO_PWM_IP_HAS_LOW_MODE) && (FLEXIO_PWM_IP_HAS_LOW_MODE == STD_ON))
    /* Configure the timer initial and clock source and control register */
    if (FLEXIO_PWM_IP_ACTIVE_HIGH == userCfg->polarity)
    {
#endif
        Flexio_Pwm_Ip_SetTimerInitMode(base, userCfg->timerId, FLEXIO_PWM_IP_TIMER_INIT_HIGH);

#if (defined(FLEXIO_PWM_IP_HAS_LOW_MODE) && (FLEXIO_PWM_IP_HAS_LOW_MODE == STD_ON))
    }
    else
    {
        Flexio_Pwm_Ip_SetTimerInitMode(base, userCfg->timerId, FLEXIO_PWM_IP_TIMER_INIT_LOW);
    }
#endif

#if (defined(FLEXIO_PWM_IP_HAS_PRESCALER) && (FLEXIO_PWM_IP_HAS_PRESCALER == STD_ON))
    Flexio_Pwm_Ip_SetTimerPrescaler(base, userCfg->timerId, userCfg->prescaler);
#endif
    /* Configure timer pin */
    Flexio_Pwm_Ip_SetTimerPinOutput(base, userCfg->timerId, FLEXIO_PWM_IP_TIMER_PIN_OUTPUT_ENABLE);
    Flexio_Pwm_Ip_SetTimerPin(base, userCfg->timerId, userCfg->pinId);

#if (defined(FLEXIO_PWM_IP_HAS_LOW_MODE) && (FLEXIO_PWM_IP_HAS_LOW_MODE == STD_ON))
    Flexio_Pwm_Ip_SetTimerPinPolarity(base, userCfg->timerId, FLEXIO_PWM_IP_ACTIVE_HIGH);
#endif
    /* Disable interrupts as per ASR requirements */
    retStatus = Flexio_Pwm_Ip_UpdateInterruptMode(instanceId, userCfg->timerId, FLEXIO_PWM_IP_IRQ_DISABLED);

#if (defined(FLEXIO_PWM_IP_HAS_PIN_OVERRIDE) && (FLEXIO_PWM_IP_HAS_PIN_OVERRIDE == STD_ON))
    /* If not in 0% 100% duty case start the timer */
    if (Flexio_Pwm_Ip_PinOverrideNeeded(instanceId, userCfg->timerId, userCfg->period, userCfg->dutyCycle) == FALSE)
    {
#endif
        /* Configure the timer comparator with duty and period values */
        Flexio_Pwm_Ip_SetLowerValue(base, userCfg->timerId, (uint8)(userCfg->dutyCycle - 1U));
        Flexio_Pwm_Ip_SetUpperValue(base, userCfg->timerId, (uint8)(userCfg->period - userCfg->dutyCycle - 1U));

#if (defined(FLEXIO_PWM_IP_HAS_LOW_MODE) && (FLEXIO_PWM_IP_HAS_LOW_MODE == STD_ON))
        /* Transition and enable the timer in selected mode */
        if (FLEXIO_PWM_IP_ACTIVE_HIGH == userCfg->polarity)
        {
#endif

            Flexio_Pwm_Ip_SetTimerMode(base, userCfg->timerId, FLEXIO_PWM_IP_TIMER_PWM_HIGH);
#if (defined(FLEXIO_PWM_IP_HAS_LOW_MODE) && (FLEXIO_PWM_IP_HAS_LOW_MODE == STD_ON))
        }
        else
        {
            Flexio_Pwm_Ip_SetTimerMode(base, userCfg->timerId, FLEXIO_PWM_IP_TIMER_PWM_LOW);
        }
#endif

#if (defined(FLEXIO_PWM_IP_HAS_PIN_OVERRIDE) && (FLEXIO_PWM_IP_HAS_PIN_OVERRIDE == STD_ON))
    }
#endif

    return retStatus;
}

/**
 *
 * Function Name : Flexio_Pwm_Ip_DeInitChannel
 * Description   :  Deinitialize a flexio channel.
 * The function will initialize one timer and pin of the selected flexio channel in pwm
 * mode, with the configuration of the user. The interrupts will be disabled.
 *
 * @implements Flexio_Pwm_Ip_DeInitChannel_Activity
 */
Flexio_Pwm_Ip_StatusType Flexio_Pwm_Ip_DeInitChannel(uint8 instanceId, uint8 channel)
{
#if ((defined(FLEXIO_PWM_IP_DEV_ERROR_DETECT)) && (FLEXIO_PWM_IP_DEV_ERROR_DETECT == STD_ON))
    /* Check received parameters */
    DevAssert(FLEXIO_PWM_IP_CHANNEL_COUNT > channel);
    DevAssert(FLEXIO_INSTANCE_COUNT > instanceId);
#endif

    Flexio_Pwm_Ip_HwAddrType * const base = Flexio_Pwm_Ip_aBasePtr[instanceId];
    const Flexio_Pwm_Ip_ChannelConfigType * const userCfg = Flexio_Pwm_Ip_aState[channel];
    Flexio_Pwm_Ip_StatusType retStatus = FLEXIO_PWM_IP_STATUS_SUCCESS;

    /* Disable the timer */
    Flexio_Pwm_Ip_SetTimerMode(base, userCfg->timerId, FLEXIO_PWM_IP_TIMER_DISABLED);

    /* Clear flags for timer and pin */
    retStatus = Flexio_Pwm_Ip_UpdateInterruptMode(instanceId, channel, FLEXIO_PWM_IP_IRQ_DISABLED);

    /* Reset the timer registers */
#if (defined(FLEXIO_PWM_IP_HAS_LOW_MODE) && (FLEXIO_PWM_IP_HAS_LOW_MODE == STD_ON))
    Flexio_Pwm_Ip_SetTimerPinPolarity(base, userCfg->timerId, FLEXIO_PWM_IP_ACTIVE_HIGH);
#endif
    Flexio_Pwm_Ip_SetTimerPin(base, userCfg->timerId, 0U);
    Flexio_Pwm_Ip_SetTimerPinOutput(base, userCfg->timerId, FLEXIO_PWM_IP_TIMER_PIN_OUTPUT_DISABLE);
    Flexio_Pwm_Ip_SetTimerInitMode(base, userCfg->timerId, FLEXIO_PWM_IP_TIMER_INIT_HIGH);
#if (defined(FLEXIO_PWM_IP_HAS_PRESCALER) && (FLEXIO_PWM_IP_HAS_PRESCALER == STD_ON))
    Flexio_Pwm_Ip_SetTimerPrescaler(base, userCfg->timerId, FLEXIO_PWM_IP_CLK_DIV_1);
#endif
    Flexio_Pwm_Ip_SetUpperValue(base, userCfg->timerId, 0U);
    Flexio_Pwm_Ip_SetLowerValue(base, userCfg->timerId, 0U);

#if (defined(FLEXIO_PWM_IP_HAS_PIN_OVERRIDE) && (FLEXIO_PWM_IP_HAS_PIN_OVERRIDE == STD_ON))
    /* Reset the Pin configuration */
    Flexio_Pwm_Ip_ConfigurePinOverride(base, userCfg->pinId, FALSE);

    Flexio_Pwm_Ip_SetPinLevel(base, userCfg->pinId, FALSE);
#endif
    /* Clear pointer to user cfg */
    Flexio_Pwm_Ip_aState[userCfg->timerId] = NULL_PTR;

    return retStatus;
}

#if (defined(FLEXIO_PWM_IP_HAS_PRESCALER) && (FLEXIO_PWM_IP_HAS_PRESCALER == STD_ON))
/**
 *
 * Function Name : Flexio_Pwm_Ip_UpdateClockPrescaler
 * Description   : Set clock prescaler for a flexio channel
 * The function will change the prescaller value for the selected flexio channel.
 *
 * @implements Flexio_Pwm_Ip_UpdateClockPrescaler_Activity
 */
Flexio_Pwm_Ip_StatusType Flexio_Pwm_Ip_UpdateClockPrescaler(uint8 instanceId, uint8 channel, Flexio_Pwm_Ip_ClockPrescalerType prescaler)
{
#if ((defined(FLEXIO_PWM_IP_DEV_ERROR_DETECT)) && (FLEXIO_PWM_IP_DEV_ERROR_DETECT == STD_ON))
    /* Check received parameters */
    DevAssert(FLEXIO_PWM_IP_CHANNEL_COUNT > channel);
    DevAssert(FLEXIO_INSTANCE_COUNT > instanceId);
#endif

    Flexio_Pwm_Ip_HwAddrType * const base = Flexio_Pwm_Ip_aBasePtr[instanceId];
    const Flexio_Pwm_Ip_ChannelConfigType * const userCfg = Flexio_Pwm_Ip_aState[channel];
    Flexio_Pwm_Ip_StatusType retStatus = FLEXIO_PWM_IP_STATUS_SUCCESS;

    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_31();
    
    /* TBD: Check with MCL that the selected timer and pin are mine */
    if (FLEXIO_PWM_IP_STATUS_SUCCESS == retStatus)
    {
        /* update timer configuration register */
        Flexio_Pwm_Ip_SetTimerPrescaler(base, userCfg->timerId, prescaler);
    }
    
    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_31();

    return retStatus;
}
#endif /* (defined(FLEXIO_PWM_IP_HAS_PRESCALER) && (FLEXIO_PWM_IP_HAS_PRESCALER == STD_ON)) */

#if (defined(FLEXIO_PWM_IP_HAS_PIN_OVERRIDE) && (FLEXIO_PWM_IP_HAS_PIN_OVERRIDE == STD_ON))
/**
 *
 * Function Name : Flexio_Pwm_Ip_ForceOuputLevel
 * Description   : Force the pin ouput to logic one or zero
 * The function will override the pin ouput of the selected flexio channel to the desired
 * logic level.
 *
 * @implements Flexio_Pwm_Ip_ForceOuputLevel_Activity
 */
Flexio_Pwm_Ip_StatusType Flexio_Pwm_Ip_ForceOuputLevel(uint8 instanceId, uint8 channel, boolean level)
{
#if ((defined(FLEXIO_PWM_IP_DEV_ERROR_DETECT)) && (FLEXIO_PWM_IP_DEV_ERROR_DETECT == STD_ON))
    /* Check received parameters */
    DevAssert(FLEXIO_PWM_IP_CHANNEL_COUNT > channel);
    DevAssert(FLEXIO_INSTANCE_COUNT > instanceId);
#endif

    Flexio_Pwm_Ip_HwAddrType * const base = Flexio_Pwm_Ip_aBasePtr[instanceId];
    const Flexio_Pwm_Ip_ChannelConfigType * const userCfg = Flexio_Pwm_Ip_aState[channel];
    Flexio_Pwm_Ip_StatusType retStatus = FLEXIO_PWM_IP_STATUS_SUCCESS;
    
    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_32();

    /* TBD: Check with MCL that the selected timer and pin are mine */
    if (FLEXIO_PWM_IP_STATUS_SUCCESS == retStatus)
    {
        /* enable pin override */
        Flexio_Pwm_Ip_SetPinLevel(base, userCfg->pinId, level);
        Flexio_Pwm_Ip_ConfigurePinOverride(base, userCfg->pinId, TRUE);

        /* Clear flags for timer and pin */
        Flexio_Mcl_Ip_ClearTimerStatus(base, userCfg->timerId);
        Flexio_Pwm_Ip_ClearPinFlag(base, userCfg->pinId);

        /* Disable the timer */
        Flexio_Pwm_Ip_SetTimerMode(base, userCfg->timerId, FLEXIO_PWM_IP_TIMER_DISABLED);
    }
    
    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_32();

    return retStatus;
}
#endif /* (defined(FLEXIO_PWM_IP_HAS_PIN_OVERRIDE) && (FLEXIO_PWM_IP_HAS_PIN_OVERRIDE == STD_ON)) */

/**
 *
 * Function Name : Flexio_Pwm_Ip_UpdatePeriodDuty
 * Description   : Set a new value for duty cycle and period of the channel.
 * The function will update the selected flexio channel with the new values for the
 * duty cycle and period.
 *
 * @implements Flexio_Pwm_Ip_UpdatePeriodDuty_Activity
 */
Flexio_Pwm_Ip_StatusType Flexio_Pwm_Ip_UpdatePeriodDuty(uint8 instanceId, uint8 channel, uint16 period, uint16 dutyCycle)
{
#if ((defined(FLEXIO_PWM_IP_DEV_ERROR_DETECT)) && (FLEXIO_PWM_IP_DEV_ERROR_DETECT == STD_ON))
    /* Check received parameters */
    DevAssert(FLEXIO_PWM_IP_CHANNEL_COUNT > channel);
    DevAssert(FLEXIO_INSTANCE_COUNT > instanceId);
    /* Check userCfg period can be achieved with the selected duty cycle */
    DevAssert(period >= dutyCycle);
    DevAssert(FLEXIO_PWM_IP_TIMER_CMP_MAX_VALUE >= dutyCycle);
    DevAssert(FLEXIO_PWM_IP_TIMER_CMP_MAX_VALUE >= (uint16)(period - dutyCycle));
#endif

    Flexio_Pwm_Ip_HwAddrType * const base = Flexio_Pwm_Ip_aBasePtr[instanceId];
#if ((defined(FLEXIO_PWM_IP_HAS_PIN_OVERRIDE) && (FLEXIO_PWM_IP_HAS_PIN_OVERRIDE == STD_ON)) || \
     (defined(FLEXIO_PWM_IP_HAS_LOW_MODE) && (FLEXIO_PWM_IP_HAS_LOW_MODE == STD_ON)))
    const Flexio_Pwm_Ip_ChannelConfigType * const userCfg = Flexio_Pwm_Ip_aState[channel];
#endif

    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_33();
#if (defined(FLEXIO_PWM_IP_HAS_PIN_OVERRIDE) && (FLEXIO_PWM_IP_HAS_PIN_OVERRIDE == STD_ON))
    /* Disable pin override if active */
    if (Flexio_Pwm_Ip_GetPinOverride(base, userCfg->pinId))
    {
#endif

#if (defined(FLEXIO_PWM_IP_HAS_LOW_MODE) && (FLEXIO_PWM_IP_HAS_LOW_MODE == STD_ON))
        if (FLEXIO_PWM_IP_ACTIVE_HIGH == userCfg->polarity)
        {
#endif
            Flexio_Pwm_Ip_SetTimerInitMode(base, channel, FLEXIO_PWM_IP_TIMER_INIT_HIGH);
            Flexio_Pwm_Ip_SetTimerMode(base, channel, FLEXIO_PWM_IP_TIMER_PWM_HIGH);

#if (defined(FLEXIO_PWM_IP_HAS_LOW_MODE) && (FLEXIO_PWM_IP_HAS_LOW_MODE == STD_ON))
        }
        else
        {
            Flexio_Pwm_Ip_SetTimerInitMode(base, channel, FLEXIO_PWM_IP_TIMER_INIT_LOW);
            Flexio_Pwm_Ip_SetTimerMode(base, channel, FLEXIO_PWM_IP_TIMER_PWM_LOW);
        }
#endif

#if (defined(FLEXIO_PWM_IP_HAS_PIN_OVERRIDE) && (FLEXIO_PWM_IP_HAS_PIN_OVERRIDE == STD_ON))
        Flexio_Pwm_Ip_ConfigurePinOverride(base, userCfg->pinId, FALSE);
    }

    /* If not in 0% 100% duty case configure the timer */
    if (Flexio_Pwm_Ip_PinOverrideNeeded(instanceId, channel, period, dutyCycle) == FALSE)
    {
#endif
        /* Configure the timer comparator with duty and period values */
        Flexio_Pwm_Ip_SetLowerValue(base, channel, (uint8)(dutyCycle - 1U));
        Flexio_Pwm_Ip_SetUpperValue(base, channel, (uint8)(period - dutyCycle - 1U));
#if (defined(FLEXIO_PWM_IP_HAS_PIN_OVERRIDE) && (FLEXIO_PWM_IP_HAS_PIN_OVERRIDE == STD_ON))
    }
#endif
    
    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_33();

    return FLEXIO_PWM_IP_STATUS_SUCCESS;
}

/**
 *
 * Function Name : Flexio_Pwm_Ip_GetOutputState
 * Description   : Get the logic level of the channel ouput.
 * The function will return the logic level that the selected flexio channel is driving on
 * on the output pin.
 *
 * @implements Flexio_Pwm_Ip_GetOutputState_Activity
 */
boolean Flexio_Pwm_Ip_GetOutputState(uint8 instanceId, uint8 channel)
{
#if ((defined(FLEXIO_PWM_IP_DEV_ERROR_DETECT)) && (FLEXIO_PWM_IP_DEV_ERROR_DETECT == STD_ON))
    /* Check received parameters */
    DevAssert(FLEXIO_PWM_IP_CHANNEL_COUNT > channel);
    DevAssert(FLEXIO_INSTANCE_COUNT > instanceId);
#endif

    const Flexio_Pwm_Ip_HwAddrType * const base = Flexio_Pwm_Ip_aBasePtr[instanceId];
    const Flexio_Pwm_Ip_ChannelConfigType * const userCfg = Flexio_Pwm_Ip_aState[channel];

    return Flexio_Pwm_Ip_GetPinState(base, userCfg->pinId);
}

/**
 *
 * Function Name : Flexio_Pwm_Ip_UpdateInterruptMode
 * Description   : Update the interrupt mode for a channel.
 * The function will set a new mode for the flag event response on the selected channel.
 *
 * @implements Flexio_Pwm_Ip_UpdateInterruptMode_Activity
 */
Flexio_Pwm_Ip_StatusType Flexio_Pwm_Ip_UpdateInterruptMode(uint8 instanceId, uint8 channel, Flexio_Pwm_Ip_InterruptType irqMode)
{
#if ((defined(FLEXIO_PWM_IP_DEV_ERROR_DETECT)) && (FLEXIO_PWM_IP_DEV_ERROR_DETECT == STD_ON))
    /* Check received parameters */
    DevAssert(FLEXIO_PWM_IP_CHANNEL_COUNT > channel);
    DevAssert(FLEXIO_INSTANCE_COUNT > instanceId);
#endif

    Flexio_Pwm_Ip_HwAddrType * const base = Flexio_Pwm_Ip_aBasePtr[instanceId];
    const Flexio_Pwm_Ip_ChannelConfigType * const userCfg = Flexio_Pwm_Ip_aState[channel];
    Flexio_Pwm_Ip_StatusType retStatus = FLEXIO_PWM_IP_STATUS_SUCCESS;

    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_34();
    
    /* TBD: Check with MCL that the selected timer and pin are mine */
    /* Clear Flags and irq mask for pin and timer */
    Flexio_Mcl_Ip_ClearTimerStatus(base, userCfg->timerId);

#if (defined(FLEXIO_PWM_IP_HAS_PIN_OVERRIDE) && (FLEXIO_PWM_IP_HAS_PIN_OVERRIDE == STD_ON))
    Flexio_Pwm_Ip_ClearPinFlag(base, userCfg->pinId);
#endif

    timerIrqMask = timerIrqMask & ~((uint8)0x01U << userCfg->timerId);
    pinIrqMask = pinIrqMask & ~((uint32)1U << userCfg->pinId);

    /* Stop all Irq for this channel for case FLEXIO_PWM_IP_IRQ_DISABLED */
    Flexio_Mcl_Ip_SetTimerInterrupt(base, (1U << userCfg->timerId), FALSE);

#if (defined(FLEXIO_PWM_IP_HAS_PIN_OVERRIDE) && (FLEXIO_PWM_IP_HAS_PIN_OVERRIDE == STD_ON))
    Flexio_Pwm_Ip_ConfigurePinRisingEdge(base, userCfg->pinId, FALSE);
    Flexio_Pwm_Ip_ConfigurePinFallingEdge(base, userCfg->pinId, FALSE);
    Flexio_Pwm_Ip_ConfigurePinIrq(base, userCfg->pinId, FALSE);
    
    /* Configure interrupt for rising/falling edges of pin */
    if ((FLEXIO_PWM_IP_IRQ_ON_RISING_EDGE == irqMode)
        || (FLEXIO_PWM_IP_IRQ_ON_BOTH_EDGES == irqMode))
    {
        Flexio_Pwm_Ip_ConfigurePinRisingEdge(base, userCfg->pinId, TRUE);
        if ((userCfg->iplCallback.cbFunction != NULL_PTR) || (userCfg->hldCallback.cbFunction != NULL_PTR))
        {
            Flexio_Pwm_Ip_ConfigurePinIrq(base, userCfg->pinId, TRUE);
            pinIrqMask = pinIrqMask | (uint32)((uint32)1U << userCfg->pinId);
        }
    }
    if ((FLEXIO_PWM_IP_IRQ_ON_FALLING_EDGE == irqMode)
        || (FLEXIO_PWM_IP_IRQ_ON_BOTH_EDGES == irqMode))
    {
        Flexio_Pwm_Ip_ConfigurePinFallingEdge(base, userCfg->pinId, TRUE);
        if ((userCfg->iplCallback.cbFunction != NULL_PTR) || (userCfg->hldCallback.cbFunction != NULL_PTR))
        {
            Flexio_Pwm_Ip_ConfigurePinIrq(base, userCfg->pinId, TRUE);
            pinIrqMask = pinIrqMask | (uint32)((uint32)1U << userCfg->pinId);
        }
    }
#endif
    
    if (FLEXIO_PWM_IP_IRQ_ON_PERIOD_END == irqMode)
    {
        Flexio_Mcl_Ip_SetTimerInterrupt(base, (1U << userCfg->timerId), TRUE);
        timerIrqMask = timerIrqMask | (uint8)((uint8)1U << userCfg->timerId);
    }

    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_34();
    
    return retStatus;
}

 /**
 *
 * Function Name : Flexio_Pwm_Ip_GetPeriod
 * Description   : Getting the period for a channel.
 * The function will get the period on the selected channel.
 *
 * @implements Flexio_Pwm_Ip_GetPeriod_Activity
 */
uint16 Flexio_Pwm_Ip_GetPeriod(uint8 instanceId, uint8 channel)
{
#if ((defined(FLEXIO_PWM_IP_DEV_ERROR_DETECT)) && (FLEXIO_PWM_IP_DEV_ERROR_DETECT == STD_ON))
    /* Check received parameters */
    DevAssert(FLEXIO_PWM_IP_CHANNEL_COUNT > channel);
    DevAssert(FLEXIO_INSTANCE_COUNT > instanceId);
#endif

    const Flexio_Pwm_Ip_HwAddrType * const base = Flexio_Pwm_Ip_aBasePtr[instanceId];
    /* Getting the period for a channel. */
    uint16 period = (uint16)Flexio_Pwm_Ip_GetUpperValue(base, channel) + (uint16)Flexio_Pwm_Ip_GetLowerValue(base, channel) + (uint16)2U;
    
    return period;
}

#define PWM_STOP_SEC_CODE
#include "Pwm_MemMap.h"


#ifdef __cplusplus
}
#endif

/** @} */
