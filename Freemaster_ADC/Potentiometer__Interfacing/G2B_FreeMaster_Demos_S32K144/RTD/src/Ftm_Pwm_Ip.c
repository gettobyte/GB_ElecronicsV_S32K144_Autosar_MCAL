/*==================================================================================================
* Project              : RTD AUTOSAR 4.4
* Platform             : CORTEXM
* Peripheral           : Ftm Flexio
* Dependencies         : none
*
* Autosar Version      : 4.4.0
* Autosar Revision     : ASR_REL_4_4_REV_0000
* Autosar Conf.Variant :
* SW Version           : 1.0.0
* Build Version        : S32K1_RTD_1_0_0_D2108_ASR_REL_4_4_REV_0000_20210810
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

/**
*   @file       Ftm_Pwm_Ip.c
*
*   @addtogroup ftm_pwm_ip Ftm Pwm IPL
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                          INCLUDE FILES
*  1) system and project includes
*  2) needed interfaces from external units
*  3) internal and external interfaces from this unit
==================================================================================================*/

#include "Ftm_Pwm_Ip.h"
#include "Ftm_Pwm_Ip_HwAccess.h"
#include "StandardTypes.h"
#include "SchM_Pwm.h"

#if ((STD_ON == FTM_PWM_IP_USER_ACCESS_ALLOWED_AVAILABLE) || (STD_ON == FTM_PWM_IP_SIM_AVAILABLE))
    #define USER_MODE_REG_PROT_ENABLED      (STD_ON)
    #include "RegLockMacros.h"
#endif /* (FTM_PWM_IP_USER_ACCESS_ALLOWED_AVAILABLE) */

#include "Mcal.h"
/*===============================================================================================
*                            SOURCE FILE VERSION INFORMATION
===============================================================================================*/

#define FTM_PWM_IP_VENDOR_ID_C                         43
#define FTM_PWM_IP_MODULE_ID_C                         121
#define FTM_PWM_IP_AR_RELEASE_MAJOR_VERSION_C          4
#define FTM_PWM_IP_AR_RELEASE_MINOR_VERSION_C          4
#define FTM_PWM_IP_AR_RELEASE_REVISION_VERSION_C       0
#define FTM_PWM_IP_SW_MAJOR_VERSION_C                  1
#define FTM_PWM_IP_SW_MINOR_VERSION_C                  0
#define FTM_PWM_IP_SW_PATCH_VERSION_C                  0


/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if source file and StandardTypes.h are of the same AUTOSAR version */
    #if ((FTM_PWM_IP_AR_RELEASE_MAJOR_VERSION_C != STD_AR_RELEASE_MAJOR_VERSION) || \
         (FTM_PWM_IP_AR_RELEASE_MINOR_VERSION_C != STD_AR_RELEASE_MINOR_VERSION))
        #error "AUTOSAR version numbers of Ftm_Pwm_Ip.c and StandardTypes.h are different."
    #endif

    /* Check if source file and SchM_Pwm.h are of the same AUTOSAR version */
    #if ((FTM_PWM_IP_AR_RELEASE_MAJOR_VERSION_C != SCHM_PWM_AR_RELEASE_MAJOR_VERSION) || \
         (FTM_PWM_IP_AR_RELEASE_MINOR_VERSION_C != SCHM_PWM_AR_RELEASE_MINOR_VERSION))
        #error "AUTOSAR version numbers of Ftm_Pwm_Ip.c and SchM_Pwm.h are different."
    #endif

    /* Check if source file and Mcal.h are of the same AUTOSAR version */
    #if ((FTM_PWM_IP_AR_RELEASE_MAJOR_VERSION_C != MCAL_AR_RELEASE_MAJOR_VERSION) || \
         (FTM_PWM_IP_AR_RELEASE_MINOR_VERSION_C != MCAL_AR_RELEASE_MINOR_VERSION))
        #error "AUTOSAR version numbers of Ftm_Pwm_Ip.c and Mcal.h are different."
    #endif

    #if ((STD_ON == FTM_PWM_IP_USER_ACCESS_ALLOWED_AVAILABLE) || (STD_ON == FTM_PWM_IP_SIM_AVAILABLE))
        /* Check if source file and RegLockMacros.h are of the same AUTOSAR version */
        #if ((FTM_PWM_IP_AR_RELEASE_MAJOR_VERSION_C != REGLOCKMACROS_AR_RELEASE_MAJOR_VERSION) || \
             (FTM_PWM_IP_AR_RELEASE_MINOR_VERSION_C != REGLOCKMACROS_AR_RELEASE_MINOR_VERSION))
            #error "AUTOSAR version numbers of Ftm_Pwm_Ip.c and RegLockMacros.h are different."
        #endif
    #endif
#endif

/* Check if source file and Ftm_Pwm_Ip_HwAccess.h header file are of the same vendor */
#if (FTM_PWM_IP_VENDOR_ID_C != FTM_PWM_IP_HWACCESS_VENDOR_ID)
    #error "Vendor IDs of Ftm_Pwm_Ip.c and Ftm_Pwm_Ip_HwAccess.h are different."
#endif

/* Check if source file and Ftm_Pwm_Ip_HwAccess.h header file are of the same AUTOSAR version */
#if ((FTM_PWM_IP_AR_RELEASE_MAJOR_VERSION_C    != FTM_PWM_IP_HWACCESS_AR_RELEASE_MAJOR_VERSION) || \
     (FTM_PWM_IP_AR_RELEASE_MINOR_VERSION_C    != FTM_PWM_IP_HWACCESS_AR_RELEASE_MINOR_VERSION) || \
     (FTM_PWM_IP_AR_RELEASE_REVISION_VERSION_C != FTM_PWM_IP_HWACCESS_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR version numbers of Ftm_Pwm_Ip.c and Ftm_Pwm_Ip_HwAccess.h are different."
#endif

/* Check if header file and Ftm_Pwm_Ip_HwAccess.h header file are of the same software version */
#if ((FTM_PWM_IP_SW_MAJOR_VERSION_C != FTM_PWM_IP_HWACCESS_SW_MAJOR_VERSION) || \
     (FTM_PWM_IP_SW_MINOR_VERSION_C != FTM_PWM_IP_HWACCESS_SW_MINOR_VERSION) || \
     (FTM_PWM_IP_SW_PATCH_VERSION_C != FTM_PWM_IP_HWACCESS_SW_PATCH_VERSION))
    #error "Software version numbers of Ftm_Pwm_Ip.c and Ftm_Pwm_Ip_HwAccess.h are different."
#endif

/* Check if source file and Ftm_Pwm_Ip.h header file are of the same vendor */
#if (FTM_PWM_IP_VENDOR_ID_C != FTM_PWM_IP_VENDOR_ID)
    #error "Vendor IDs of Ftm_Pwm_Ip.c and Ftm_Pwm_Ip.h are different."
#endif

/* Check if source file and Ftm_Pwm_Ip.h header file are of the same AUTOSAR version */
#if ((FTM_PWM_IP_AR_RELEASE_MAJOR_VERSION_C    != FTM_PWM_IP_AR_RELEASE_MAJOR_VERSION) || \
     (FTM_PWM_IP_AR_RELEASE_MINOR_VERSION_C    != FTM_PWM_IP_AR_RELEASE_MINOR_VERSION) || \
     (FTM_PWM_IP_AR_RELEASE_REVISION_VERSION_C != FTM_PWM_IP_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR version numbers of Ftm_Pwm_Ip.c and Ftm_Pwm_Ip.h are different."
#endif

/* Check if header file and Ftm_Pwm_Ip.h header file are of the same software version */
#if ((FTM_PWM_IP_SW_MAJOR_VERSION_C != FTM_PWM_IP_SW_MAJOR_VERSION) || \
     (FTM_PWM_IP_SW_MINOR_VERSION_C != FTM_PWM_IP_SW_MINOR_VERSION) || \
     (FTM_PWM_IP_SW_PATCH_VERSION_C != FTM_PWM_IP_SW_PATCH_VERSION))
    #error "Software version numbers of Ftm_Pwm_Ip.c and Ftm_Pwm_Ip.h are different."
#endif


/*===============================================================================================
*                                       GLOBAL VARIABLES
===============================================================================================*/
#define PWM_START_SEC_VAR_CLEARED_8
#include "Pwm_MemMap.h"

#ifdef ERR_IPV_FTM_ERR010856
#if ((STD_ON == ERR_IPV_FTM_ERR010856) && (STD_ON == FTM_PWM_HAS_FAULT))
/* A variable to indicate that a fault was detected or not.*/
uint8 Ftm_Pwm_Ip_FaultCheck;
#endif
#endif

#define PWM_STOP_SEC_VAR_CLEARED_8
#include "Pwm_MemMap.h"

#define PWM_START_SEC_VAR_CLEARED_16
#include "Pwm_MemMap.h"

/*! @brief Arrays to store the period values for each instance */
uint16 Ftm_Pwm_Ip_Period[FTM_PWM_INSTANCE_COUNT];

/*! @brief Arrays to store the duty cycle values for each channel */
static uint16 Ftm_Pwm_Ip_DutyCycle[FTM_PWM_INSTANCE_COUNT][FTM_PWM_CHANNEL_COUNT];

/*! @brief Arrays to store the shift values for each channel */
static uint16 Ftm_Pwm_Ip_PhaseShift[FTM_PWM_INSTANCE_COUNT][FTM_PWM_PAIR_COUNT];

#define PWM_STOP_SEC_VAR_CLEARED_16
#include "Pwm_MemMap.h"

#define PWM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Pwm_MemMap.h"

#if (defined(FTM_PWM_HAS_FAULT) && (FTM_PWM_HAS_FAULT == STD_ON))
/*! @brief Arrays for irq fault notifications */
Ftm_Pwm_Ip_FaultCallbackType Ftm_Pwm_Ip_pFaultIrqCallback[FTM_PWM_INSTANCE_COUNT][FTM_FAULT_NUMBER_CHANNELS];
#endif

/*! @brief Arrays for irq channel notifications of each channel*/
Ftm_Pwm_Ip_CallbackCfgType  Ftm_Pwm_Ip_aChIrqCallbacks[FTM_PWM_INSTANCE_COUNT][FTM_PWM_CHANNEL_IRQ_COUNT];

/*! @brief Arrays for irq overflow timer notifications of each instance */
Ftm_Pwm_Ip_CallbackCfgType Ftm_Pwm_Ip_pOverflowIrqCallback[FTM_PWM_INSTANCE_COUNT];

/*! @brief Arrays to store the state of channel */
Ftm_Pwm_Ip_ChannelStateType Ftm_Pwm_Ip_ChannelState[FTM_PWM_INSTANCE_COUNT][FTM_PWM_CHANNEL_COUNT];

/*! @brief Arrays to store the previous state of each channel */
Ftm_Pwm_Ip_ChannelStateType Ftm_Pwm_Ip_PreviousChannelState[FTM_PWM_INSTANCE_COUNT][FTM_PWM_CHANNEL_COUNT];

/*! @brief Arrays to store the type of notification for each channel */
Ftm_Pwm_Ip_EdgeInterruptType Ftm_Pwm_Ip_NotifIrq[FTM_PWM_INSTANCE_COUNT][FTM_PWM_CHANNEL_COUNT];

/*! @brief Arrays to store the output state of each channel */
static Ftm_Pwm_Ip_OutputStateType Ftm_Pwm_Ip_IdleState[FTM_PWM_INSTANCE_COUNT][FTM_PWM_CHANNEL_COUNT];

/*! @brief Arrays to store the polarity of each channel */
static Ftm_Pwm_Ip_PolarityType Ftm_Pwm_Ip_Polarity[FTM_PWM_INSTANCE_COUNT][FTM_PWM_CHANNEL_COUNT];

/*! @brief Arrays to store the clock source of each instance */
static Ftm_Pwm_Ip_ClkSourceType Ftm_Pwm_Ip_ClockSource[FTM_PWM_INSTANCE_COUNT];

/*! @brief Arrays to store the clock pre-scaler of each instance */
static Ftm_Pwm_Ip_ClkPrescalerType Ftm_Pwm_Ip_ClockPrescaler[FTM_PWM_INSTANCE_COUNT];

/*! @brief Arrays to store the alternate clock pre-scaler of each instance */
static Ftm_Pwm_Ip_ClkPrescalerType Ftm_Pwm_Ip_AlternateClockPrescaler[FTM_PWM_INSTANCE_COUNT];

#define PWM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Pwm_MemMap.h"

#define PWM_START_SEC_CONST_UNSPECIFIED
#include "Pwm_MemMap.h"

/*! @brief Arrays of base addresses for FTM instances. */
Ftm_Pwm_Ip_HwAddrType * const Ftm_Pwm_Ip_aFtmBase[FTM_PWM_INSTANCE_COUNT] = IP_FTM_BASE_PTRS;

#if (defined(FTM_PWM_IP_SIM_AVAILABLE) && (FTM_PWM_IP_SIM_AVAILABLE == STD_ON))
/*! @brief Arrays of base addresses for SIM instances. */
Ftm_Pwm_Ip_SimType * const Ftm_Pwm_Ip_aSimBase[FTM_PWM_SIM_INSTANCE_COUNT] = IP_SIM_BASE_PTRS;
#endif

#define PWM_STOP_SEC_CONST_UNSPECIFIED
#include "Pwm_MemMap.h"
/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define PWM_START_SEC_CODE
#include "Pwm_MemMap.h"

#if (FTM_PWM_IP_DEV_ERROR_DETECT == STD_ON)

/**
* @brief        Ftm_Pwm_Ip_ValidateParamDeadTime
* @details      This function will check the deadtime Value.
*/  
static boolean Ftm_Pwm_Ip_ValidateParamDeadTime(uint8 instance,
                                                uint8 channel,
                                                uint16 deadTimeVal);
#endif


static uint16 Ftm_Pwm_Ip_CalculatePhaseShift(uint8 instance, uint16 dutyCycle, uint16 phaseShift);

static void Ftm_Pwm_Ip_UpdateNotificationState(uint8 instance, uint8 channel, Ftm_Ftm_Ip_EdgeNotifType edgeNotif);

static void Ftm_Pwm_Ip_UpdateNotificationStateCombine(uint8 instance, uint8 channel, Ftm_Ftm_Ip_EdgeNotifType edgeNotif);

static void Ftm_Pwm_Ip_ConfigureSWandHWSync(uint8 instance, const Ftm_Pwm_Ip_SyncCfgType * syncCfg);

static void Ftm_Pwm_Ip_ConfigureSyncType(uint8 instance, const Ftm_Pwm_Ip_SyncCfgType * syncCfg);

static void  Ftm_Pwm_Ip_InitPair(uint8 instance,
                                 const Ftm_Pwm_Ip_PairCfgType * userPairCfg);

static void Ftm_Pwm_Ip_DisableCmpIrq(uint8 instance, uint8 channel);

static Ftm_Pwm_Ip_StatusType Ftm_Pwm_Ip_UpdateSync(uint8 instance,
                                                   const Ftm_Pwm_Ip_SyncCfgType * syncCfg);

#if (defined(FTM_PWM_IP_NOTIFICATION_SUPPORTED) && (FTM_PWM_IP_NOTIFICATION_SUPPORTED == STD_ON))
static void Ftm_Pwm_Ip_CheckNotification(uint8 instance, uint8 channel);
#endif

#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
    #if (STD_ON == FTM_PWM_IP_USER_ACCESS_ALLOWED_AVAILABLE)
static void Ftm_Pwm_Ip_SetUserAccessAllowed(uint8 instance);

static void Ftm_Pwm_Ip_ClrUserAccessAllowed(uint8 instance);
    #endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
#endif /* (STD_ON == FTM_PWM_IP_USER_ACCESS_ALLOWED_AVAILABLE) */

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
#if (defined(FTM_PWM_IP_NOTIFICATION_SUPPORTED) && (FTM_PWM_IP_NOTIFICATION_SUPPORTED == STD_ON))    
static void Ftm_Pwm_Ip_SetOutputForIdleChannel(uint8 instance,
                                uint8 channel)
{
    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];
       
    /* If given channel is using time-overflow interrupt */
    if (FTM_PWM_NO_EDGE != (Ftm_Pwm_Ip_NotifIrq[instance][channel] & FTM_PWM_TOF_IRQ_EDGE))
    {
        /* Mark given channel as not using time-overflow interrupt, but still remember notification
           is on so when this channel is set to have pulse again, notification will come back */
        Ftm_Pwm_Ip_NotifIrq[instance][channel] |= FTM_PWM_IRQ_NO_EDGE_NOTIF;
    }

#ifdef ERR_IPV_FTM_ERR010856
#if ((STD_ON == ERR_IPV_FTM_ERR010856) && (STD_ON == FTM_PWM_HAS_FAULT))
    /* Notify that given FTM module enable TOF interrupt to check fault */
    if ((TRUE == Ftm_Pwm_Ip_IsEnableFaultControlMode(ftmBase)) && (TRUE == Ftm_Pwm_Ip_IsEnableFaultInput(ftmBase)))
    {
       /* Notify that given FTM module enable TOF interrupt to check fault */
       Ftm_Pwm_Ip_NotifIrq[instance][channel] |= FTM_PWM_TOF_FAULT_DETECT;
       /* TOF is enable for related faut errata */
       Ftm_Pwm_Ip_SetTimerOverflowInt(ftmBase, TRUE);
    }
#endif
#endif
    
    /* Disable interrupts for given channel */
    Ftm_Pwm_Ip_DisableCmpIrq(instance, channel);
}

static void Ftm_Pwm_Ip_SetOutputForForcedChannel(uint8 instance,
                                          uint8 channel,
                                          boolean activeState)
{
    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];

    if(TRUE == activeState)
    {
        /* Disable match compare interrupts for each channel */
        Ftm_Pwm_Ip_DisableCmpIrq(instance, channel);
    }
    else
    {
       
        if (FTM_PWM_NO_EDGE != (Ftm_Pwm_Ip_NotifIrq[instance][channel] & FTM_PWM_TOF_IRQ_EDGE))
        {
            /* Enable TOIE interrupt */
            Ftm_Pwm_Ip_SetTimerOverflowInt(ftmBase, TRUE);
        }

        if (FTM_PWM_NO_EDGE != (Ftm_Pwm_Ip_NotifIrq[instance][channel] & FTM_PWM_CHF_IRQ_EDGE))
        {
            /* Enable interrupts for the given channel */
            Ftm_Pwm_Ip_UpdateChnInt(ftmBase, channel, TRUE);
        }
    }
}
#endif

#if (FTM_PWM_IP_DEV_ERROR_DETECT == STD_ON)

/*FUNCTION**********************************************************************
 *
 * Function Name : Ftm_Pwm_Ip_ValidateParamDeadTime
 * Description   : This function will check the deadtime Value.
 *
 *END**************************************************************************/  
static boolean Ftm_Pwm_Ip_ValidateParamDeadTime(uint8 instance,
                                         uint8 channel,
                                         uint16 deadTimeVal)
{
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];
    boolean retVal = FALSE;

    uint8 pairId = channel >> 1U;
    uint16 evenCounterVal = Ftm_Pwm_Ip_GetChnCountVal(ftmBase, (pairId * 2U));
    uint16 oddCounterVal  = Ftm_Pwm_Ip_GetChnCountVal(ftmBase, ((pairId * 2U) + 1U));
    uint8 prescaler = Ftm_Pwm_Ip_GetClockPs(ftmBase);
    uint8 deadTimePs = Ftm_Pwm_Ip_GetDeadtimePrescaler(ftmBase);

    uint16 compareEven = (oddCounterVal - evenCounterVal);
    uint16 compareOdd = Ftm_Pwm_Ip_Period[instance] - compareEven;
    /* Validate the range deadtime value is less than 1024U and greater than 0U */
    if ((deadTimeVal < 1024U) && (deadTimeVal > 0U))
    {
        retVal = TRUE;
    }
    /* Deadtime insertion corner cases */
    /* The deadtime delay is less than the channel (n) duty cycle */
    /* The deadtime delay is less than the channel (n+1) duty cycle */
    if ((0U == prescaler) && ((0U == deadTimePs) || (1U == deadTimePs)))
    { 
        if ((deadTimeVal < compareEven) && (deadTimeVal < compareOdd))
        {
            retVal = TRUE;
        }
        else
        {
            retVal = FALSE;
        }
    }

    return retVal;
}
#endif

/*FUNCTION**********************************************************************
 *
 * Function Name : Ftm_Pwm_Ip_CalculatePhaseShift
 * Description   : This function calculates the value of the CnV register for channel (n+1)
 *                 in phase-shifted mode
 *
 *END**************************************************************************/
static uint16 Ftm_Pwm_Ip_CalculatePhaseShift(uint8 instance,
                                             uint16 dutyCycle,
                                             uint16 phaseShift)
{
    uint16 CnVValue = 0U;

    /* If 100% duty cycle, C(n+1)V > MOD.
    Then choose C(n+1)V = Period = MOD + 1 for optimization. */
    if (Ftm_Pwm_Ip_Period[instance] == dutyCycle)
    {
        CnVValue = Ftm_Pwm_Ip_Period[instance];
        (void) phaseShift;
    }
    /* If 0% duty cycle, C(n+1)V = CnV = phase-shift value. */
    else if (0U == dutyCycle)
    {
        CnVValue = phaseShift;
        (void) instance;
    }
    else
    {
        /* The n+1 match can occur at the next cycle */
        CnVValue = phaseShift + dutyCycle;
    }

    return CnVValue;

}

/*FUNCTION**********************************************************************
 *
 * Function Name : Ftm_Pwm_Ip_InitPair
 * Description   : Configures the PWM signal for the combined channel.
 *
 *END**************************************************************************/
static void  Ftm_Pwm_Ip_InitPair(uint8 instance,
                                 const Ftm_Pwm_Ip_PairCfgType * userPairCfg)
{
    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];
    uint8 mainChId = 0U;
    uint8 pairChId = 0U;

#if (FTM_PWM_IP_DEV_ERROR_DETECT == STD_ON)
    DevAssert(FTM_PWM_INSTANCE_COUNT > instance);
    DevAssert(NULL_PTR != userPairCfg);
    DevAssert(FTM_PWM_PAIR_COUNT > userPairCfg->pairId);
    /* Check that deadtime is used in complementary mode */
    if (TRUE == userPairCfg->deadtimeEn)
    {
        DevAssert(TRUE == userPairCfg->complementaryModeEn);
    }
#endif

    /* Get channel ids for pair */
    mainChId = (uint8)(userPairCfg->pairId * 2U);
    pairChId = (uint8)(mainChId + 1U);

    Ftm_Pwm_Ip_PhaseShift[instance][userPairCfg->pairId] = userPairCfg->phaseShiftValue;

    /* Configure Complementary mode for the Pair */
    Ftm_Pwm_Ip_SetDualChnCompCmd(ftmBase, userPairCfg->pairId, userPairCfg->complementaryModeEn);

    /* Configure polarity of the PWM signal taking into consideration POL of main channel */
    if (TRUE == userPairCfg->complementaryModeEn)
    {
        /* Complementary mode active. Second channel active state is inverted. */
        if (FTM_PWM_POLARITY_LOW == Ftm_Pwm_Ip_GetChnOutputPolarity(ftmBase, mainChId))
        {
            /* Main channel polarity is Active Low */
            if (FTM_PWM_MAIN_DUPLICATED == userPairCfg->pairChPolarity)
            {
                /* User wants to duplicate main channel active state. Set polarity to Active High. */
                Ftm_Pwm_Ip_SetChnOutputPolarityCmd(ftmBase, pairChId, FTM_PWM_POLARITY_HIGH);
            }
            else
            {
                /* User wants to invert main channel active state. Set polarity to Active Low. */
                Ftm_Pwm_Ip_SetChnOutputPolarityCmd(ftmBase, pairChId, FTM_PWM_POLARITY_LOW);
            }
        }
        else
        {
            /* Main channel polarity is Active High */
            if (FTM_PWM_MAIN_DUPLICATED == userPairCfg->pairChPolarity)
            {
                /* User wants to duplicate main channel active state. Set polarity to Active Low. */
                Ftm_Pwm_Ip_SetChnOutputPolarityCmd(ftmBase, pairChId, FTM_PWM_POLARITY_LOW);
            }
            else
            {
                /* User wants to invert main channel active state. Set polarity to Active High. */
                Ftm_Pwm_Ip_SetChnOutputPolarityCmd(ftmBase, pairChId, FTM_PWM_POLARITY_HIGH);
            }
        }
    }
#if (defined(FTM_PWM_HAS_CHANNEL_PWM_ENABLE) && (FTM_PWM_HAS_CHANNEL_PWM_ENABLE == STD_ON))
    /* Enable PWM output */
    Ftm_Pwm_Ip_EnablePwmChannelOutputs(ftmBase, pairChId);
#endif

    /* Configure sync control for channels CV registers */
    Ftm_Pwm_Ip_SetDualChnPwmSyncCmd(ftmBase, userPairCfg->pairId, userPairCfg->pairSyncEn);
    /* Configure dead time */
    Ftm_Pwm_Ip_SetDualChnDeadtimeCmd(ftmBase, userPairCfg->pairId, userPairCfg->deadtimeEn);
    /* Configure the generation of external trigger on the channel (n+1) */
    Ftm_Pwm_Ip_SetChnTriggerCmd(ftmBase, pairChId, userPairCfg->pairExtTrigEn);
    /* Sync Write buffered registers */
    Ftm_Pwm_Ip_SetSoftwareTriggerCmd(ftmBase, TRUE);
}

/*FUNCTION**********************************************************************
 *
 * Function Name : Ftm_Pwm_Ip_DisableCmpIrq
 * Description   : This function clear enable interrupt and flag of match-compare (CHIE, CHF) and
 *                 time-overflow (TOIE, TOF) for the specified channel.
 *
 *END**************************************************************************/
static void Ftm_Pwm_Ip_DisableCmpIrq(uint8 instance,
                                     uint8 channel)
{

    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];
    Ftm_Pwm_Ip_OutputStateType        outputValue = FTM_PWM_OUTPUT_STATE_LOW;
    Ftm_Pwm_Ip_EdgeInterruptType      notifyState;
    uint8                             index;

    /* Clear CHIE bit in CnSC register for the given channel to disable match-compare interrupts */
    Ftm_Pwm_Ip_UpdateChnInt(ftmBase, channel, FALSE);
    /* Clear CHnF bit interrupt flag */
    Ftm_Pwm_Ip_ClearChnEventFlag(ftmBase, channel);

    /* For all channels of the given module check if it is possible to disable TOIE interrupt - this means that at this stage for all channels
     * the TOF behavior array should have the value  PWM_NO_EDGE. If something else is detected then TOIE can not be disabled. */
    for (index = 0U; index < FTM_PWM_CHANNEL_COUNT; index++)
    {
#ifdef ERR_IPV_FTM_ERR010856
    #if ((STD_ON == ERR_IPV_FTM_ERR010856) && (STD_ON == FTM_PWM_HAS_FAULT))
        notifyState = (Ftm_Pwm_Ip_NotifIrq[instance][index] & (FTM_PWM_TOF_IRQ_EDGE | FTM_PWM_TOF_FAULT_DETECT));
    #else
        notifyState = (Ftm_Pwm_Ip_NotifIrq[instance][index] & FTM_PWM_TOF_IRQ_EDGE);
    #endif
#else
        notifyState = (Ftm_Pwm_Ip_NotifIrq[instance][index] & FTM_PWM_TOF_IRQ_EDGE);
#endif
        /* If there is channel using time-overflow interrupt */
        if (FTM_PWM_NO_EDGE != notifyState)
        {
            outputValue = FTM_PWM_OUTPUT_STATE_HIGH;

            /* Intentional break to optimize run time */
            break;
        }
    }

    if (FTM_PWM_OUTPUT_STATE_LOW == outputValue)
    {
        Ftm_Pwm_Ip_SetTimerOverflowInt(ftmBase, FALSE);
    }

    Ftm_Pwm_Ip_ClearTimerOverflow(ftmBase);

}

/*FUNCTION**********************************************************************
 *
 * Function Name : Ftm_Pwm_Ip_UpdateNotificationState
 * Description   : This function update the notification state for given logical channel into
 *                 global array, this applies to all mode, except Combine and Modified Combine mode.
 *
 *END**************************************************************************/
static void Ftm_Pwm_Ip_UpdateNotificationState(uint8 instance, uint8 channel, Ftm_Ftm_Ip_EdgeNotifType edgeNotif)
{

    switch (edgeNotif)
    {
        case FTM_PWM_BOTH_EDGES:
        {
            Ftm_Pwm_Ip_NotifIrq[instance][channel] |= (Ftm_Pwm_Ip_EdgeInterruptType)(FTM_PWM_TOF_IRQ_EDGE | FTM_PWM_CHF_IRQ_EDGE);

            break;
        }
        case FTM_PWM_RISING_EDGE:
        {
            if (FTM_PWM_POLARITY_HIGH == Ftm_Pwm_Ip_Polarity[instance][channel])
            {
                Ftm_Pwm_Ip_NotifIrq[instance][channel] |= FTM_PWM_TOF_IRQ_EDGE;
            }
            else
            {
                Ftm_Pwm_Ip_NotifIrq[instance][channel] |= FTM_PWM_CHF_IRQ_EDGE;
            }

            break;
        }
        case FTM_PWM_FALLING_EDGE:
        {
            if (FTM_PWM_POLARITY_LOW == Ftm_Pwm_Ip_Polarity[instance][channel])
            {
                Ftm_Pwm_Ip_NotifIrq[instance][channel] |= FTM_PWM_TOF_IRQ_EDGE;
            }
            else
            {
                Ftm_Pwm_Ip_NotifIrq[instance][channel] |= FTM_PWM_CHF_IRQ_EDGE;
            }

            break;
        }
        default:
        {
            /* Do nothing */
            break;
        }
    }
}

/*FUNCTION**********************************************************************
 *
 * Function Name : Ftm_Pwm_Ip_UpdateNotificationStateCombine
 * Description   : This function update the notification state for given logical channel into
*               global array, this applies to only Combine/ Modified Combine mode.
 *END**************************************************************************/
static void Ftm_Pwm_Ip_UpdateNotificationStateCombine(uint8 instance, uint8 channel, Ftm_Ftm_Ip_EdgeNotifType edgeNotif)
{
    /* Writing new notification type for given channel in combine mode */
    switch (edgeNotif)
    {
        case FTM_PWM_BOTH_EDGES:
        {
            Ftm_Pwm_Ip_NotifIrq[instance][channel]      |= FTM_PWM_CHF_IRQ_EDGE;
            Ftm_Pwm_Ip_NotifIrq[instance][channel + 1U]   |= FTM_PWM_CHF_IRQ_EDGE;

            break;
        }
        case FTM_PWM_RISING_EDGE:
        {
            if (FTM_PWM_POLARITY_HIGH == Ftm_Pwm_Ip_Polarity[instance][channel])
            {
                Ftm_Pwm_Ip_NotifIrq[instance][channel]      |= FTM_PWM_CHF_IRQ_EDGE;
            }
            else
            {
                Ftm_Pwm_Ip_NotifIrq[instance][channel + 1U]   |= FTM_PWM_CHF_IRQ_EDGE;
            }

            break;
        }
        case FTM_PWM_FALLING_EDGE:
        {
            if (FTM_PWM_POLARITY_LOW == Ftm_Pwm_Ip_Polarity[instance][channel])
            {
                Ftm_Pwm_Ip_NotifIrq[instance][channel + 1U]   |= FTM_PWM_CHF_IRQ_EDGE;
            }
            else
            {
                Ftm_Pwm_Ip_NotifIrq[instance][channel]      |= FTM_PWM_CHF_IRQ_EDGE;
            }

            break;
        }
        default:
        {
            /* Do nothing */
            break;
        }
    }
}

static void Ftm_Pwm_Ip_ConfigureSWandHWSync(uint8 instance, const Ftm_Pwm_Ip_SyncCfgType * syncCfg)
{
    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];
    switch (syncCfg->syncMode)
    {
        case FTM_PWM_SYNC_SWTRIGGER:
            /* Configure sync for OUTMASK register */
            Ftm_Pwm_Ip_SetOutmaskSoftwareSyncModeCmd(ftmBase, (syncCfg->outMaskSync != FTM_PWM_SYNC_DISABLED));
            Ftm_Pwm_Ip_SetOutmaskHardwareSyncModeCmd(ftmBase, FALSE);
            /* Configure sync for INVCTRL register */
            Ftm_Pwm_Ip_SetInvctrlSoftwareSyncModeCmd(ftmBase, (syncCfg->inverterSync != FTM_PWM_SYNC_DISABLED));
            Ftm_Pwm_Ip_SetInvctrlHardwareSyncModeCmd(ftmBase, FALSE);
            /* Configure sync for SWOCTRL register */
            Ftm_Pwm_Ip_SetSwoctrlSoftwareSyncModeCmd(ftmBase, (syncCfg->outRegSync != FTM_PWM_SYNC_DISABLED));
            Ftm_Pwm_Ip_SetInvctrlHardwareSyncModeCmd(ftmBase, FALSE);
            /* Configure sync for MOD, HCR, CNTIN, and CV registers */
            Ftm_Pwm_Ip_SetModCntinCvSoftwareSyncModeCmd(ftmBase, (syncCfg->initCounterSync != FTM_PWM_SYNC_DISABLED));
            Ftm_Pwm_Ip_SetModCntinCvHardwareSyncModeCmd(ftmBase, FALSE);
            /* Configure sync for FTM counter reset */
            Ftm_Pwm_Ip_SetCounterSoftwareSyncModeCmd(ftmBase, (syncCfg->counterSync != FTM_PWM_SYNC_DISABLED));
            Ftm_Pwm_Ip_SetCounterHardwareSyncModeCmd(ftmBase, FALSE);
            break;
        case FTM_PWM_SYNC_HWTRIGGER:
            /* Configure sync for OUTMASK register */
            Ftm_Pwm_Ip_SetOutmaskSoftwareSyncModeCmd(ftmBase, FALSE);
            Ftm_Pwm_Ip_SetOutmaskHardwareSyncModeCmd(ftmBase, (syncCfg->outMaskSync != FTM_PWM_SYNC_DISABLED));
            /* Configure sync for INVCTRL register */
            Ftm_Pwm_Ip_SetInvctrlSoftwareSyncModeCmd(ftmBase, FALSE);
            Ftm_Pwm_Ip_SetInvctrlHardwareSyncModeCmd(ftmBase, (syncCfg->inverterSync != FTM_PWM_SYNC_DISABLED));
            /* Configure sync for SWOCTRL register */
            Ftm_Pwm_Ip_SetSwoctrlSoftwareSyncModeCmd(ftmBase, FALSE);
            Ftm_Pwm_Ip_SetInvctrlHardwareSyncModeCmd(ftmBase, (syncCfg->outRegSync != FTM_PWM_SYNC_DISABLED));
            /* Configure sync for MOD, HCR, CNTIN, and CV registers */
            Ftm_Pwm_Ip_SetModCntinCvSoftwareSyncModeCmd(ftmBase, FALSE);
            Ftm_Pwm_Ip_SetModCntinCvHardwareSyncModeCmd(ftmBase, (syncCfg->initCounterSync != FTM_PWM_SYNC_DISABLED));
            /* Configure sync for FTM counter reset */
            Ftm_Pwm_Ip_SetCounterSoftwareSyncModeCmd(ftmBase, FALSE);
            Ftm_Pwm_Ip_SetCounterHardwareSyncModeCmd(ftmBase, (syncCfg->counterSync != FTM_PWM_SYNC_DISABLED));
            break;

        default:    /* Nothing to do */
            break;
    }
}


static void Ftm_Pwm_Ip_ConfigureSyncType(uint8 instance, const Ftm_Pwm_Ip_SyncCfgType * syncCfg)
{
    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];

    /* Configure sync for OUTMASK register */
    Ftm_Pwm_Ip_SetOutmaskPwmSyncModeCmd(ftmBase, (syncCfg->outMaskSync  == FTM_PWM_SYNC_DISABLED)? FALSE : TRUE);
    /* Configure sync for INVCTRL register */
    Ftm_Pwm_Ip_SetInvctrlPwmSyncModeCmd(ftmBase, (syncCfg->inverterSync  == FTM_PWM_SYNC_DISABLED)? FALSE : TRUE);
    /* Configure sync for SWOCTRL register */
    Ftm_Pwm_Ip_SetSwoctrlPwmSyncModeCmd(ftmBase, (syncCfg->outRegSync  == FTM_PWM_SYNC_DISABLED)? FALSE : TRUE);
    /* Configure sync for MOD, HCR, CNTIN, and CV registers */
    Ftm_Pwm_Ip_SetCntinPwmSyncModeCmd(ftmBase, (syncCfg->initCounterSync  == FTM_PWM_SYNC_DISABLED)? FALSE : TRUE);
}

/*FUNCTION**********************************************************************
 *
 * Function Name : Ftm_Pwm_Ip_UpdateSync
 * Description   : This function configure the synchronization for PWM register.
 * If this function is used whit wrong parameters it's possible to generate
 * wrong waveform.
 *
 * Implements : Ftm_Pwm_Ip_UpdateSync_Activity
 *END**************************************************************************/
static Ftm_Pwm_Ip_StatusType Ftm_Pwm_Ip_UpdateSync(uint8 instance,
                                                   const Ftm_Pwm_Ip_SyncCfgType * syncCfg)
{

    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];
    Ftm_Pwm_Ip_StatusType retStatus = FTM_PWM_STATUS_SUCCESS;
    boolean hardwareSync = FALSE;

#if (FTM_PWM_IP_DEV_ERROR_DETECT == STD_ON)
    DevAssert(instance < FTM_PWM_INSTANCE_COUNT);
    DevAssert(syncCfg != NULL_PTR);
#endif

    hardwareSync = syncCfg->hwSync0 || syncCfg->hwSync1 || syncCfg->hwSync2;

    /* Software and hardware triggers are not allowed at the same time */
    if ((syncCfg->syncMode == FTM_PWM_SYNC_SWTRIGGER) && (hardwareSync == TRUE))
    {
        retStatus = FTM_PWM_STATUS_ERROR;
    }
    if (syncCfg->counterSync == FTM_PWM_SYNC_ON_CLK)
    {
        retStatus = FTM_PWM_STATUS_ERROR;
    }

    if (retStatus == FTM_PWM_STATUS_SUCCESS)
    {
        Ftm_Pwm_Ip_ConfigureSWandHWSync(instance, syncCfg);
        /* Enhanced PWM sync is used */
        Ftm_Pwm_Ip_SetPwmSyncModeCmd(ftmBase, TRUE);
        /* Configure trigger source for sync */
        Ftm_Pwm_Ip_SetHardwareSyncTriggerSrc(ftmBase, 0U, syncCfg->hwSync0);
        Ftm_Pwm_Ip_SetHardwareSyncTriggerSrc(ftmBase, 1U, syncCfg->hwSync1);
        Ftm_Pwm_Ip_SetHardwareSyncTriggerSrc(ftmBase, 2U, syncCfg->hwSync2);
        /* Configure if FTM clears TRIGn (n=0,1,2) when the hardware trigger n is detected. */
        Ftm_Pwm_Ip_SetHwTriggerSyncModeCmd(ftmBase, syncCfg->hwTriggerAutoClear);

        /* Configure loading points */
        Ftm_Pwm_Ip_SetMaxLoadingCmd(ftmBase, syncCfg->maxLoadPoint);
        Ftm_Pwm_Ip_SetMinLoadingCmd(ftmBase, syncCfg->minLoadPoint);

#if (defined(FTM_PWM_HAS_HALF_CYCLE_RELOAD) && (FTM_PWM_HAS_HALF_CYCLE_RELOAD == STD_ON))
        Ftm_Pwm_Ip_SetHalfCycleCmd(ftmBase, syncCfg->halfCycleLoadPoint);
#endif
        /* Sets the frequency of reload points */
        Ftm_Pwm_Ip_SetLoadFreq(ftmBase, syncCfg->loadPointFreq);
        
        Ftm_Pwm_Ip_ConfigureSyncType(instance, syncCfg);
    }

    return retStatus;
}

#if (defined(FTM_PWM_IP_NOTIFICATION_SUPPORTED) && (FTM_PWM_IP_NOTIFICATION_SUPPORTED == STD_ON))
static void Ftm_Pwm_Ip_SpecialCheckNotification(uint8 instance, uint8 channel)
{
    Ftm_Pwm_Ip_ChannelModeType chMode;
    uint8 pairChId = channel >> 1U;
    
    chMode = (Ftm_Pwm_Ip_ChannelModeType)Ftm_Pwm_Ip_GetChannelMode(Ftm_Pwm_Ip_aFtmBase[instance], channel);
    /* If given channel is using time-overflow interrupt */
    if (FTM_PWM_NO_EDGE != (Ftm_Pwm_Ip_NotifIrq[instance][channel] & FTM_PWM_TOF_IRQ_EDGE))
    {
         /* Mark given channel as not using time-overflow interrupt, but still remember notification
           is on so when this channel is set to have pulse again, notification will come back */
        Ftm_Pwm_Ip_NotifIrq[instance][channel] |= FTM_PWM_IRQ_NO_EDGE_NOTIF;
    }
#ifdef ERR_IPV_FTM_ERR010856
#if ((STD_ON == ERR_IPV_FTM_ERR010856) && (STD_ON == FTM_PWM_HAS_FAULT))
    /* If given channel is using time-overflow interrupt for errata workaround */
    if (FTM_PWM_NO_EDGE != (Ftm_Pwm_Ip_NotifIrq[instance][channel] & FTM_PWM_TOF_FAULT_DETECT))
    {
        /* Clear check fault notification */
        Ftm_Pwm_Ip_NotifIrq[instance][channel] &= (uint8)~(FTM_PWM_TOF_FAULT_DETECT);
    }
#endif
#endif

    /* Disable interrupts for given channel */
    Ftm_Pwm_Ip_DisableCmpIrq(instance, channel);

    if (( FTM_PWM_MODE_COMBINE_HIGH          == chMode) ||
#if (defined(FTM_PWM_HAS_MODIFIED_COMBINE_MODE) && (FTM_PWM_HAS_MODIFIED_COMBINE_MODE == STD_ON))
         ( FTM_PWM_MODE_MODIFIED_COMBINE_HIGH == chMode) ||
         ( FTM_PWM_MODE_MODIFIED_COMBINE_LOW  == chMode) ||
#endif
         ( FTM_PWM_MODE_COMBINE_LOW           == chMode))
    {
        /* Disable interrupts for an even channel */
        Ftm_Pwm_Ip_DisableCmpIrq(instance, (uint8)(pairChId * 2U));
        /* Disable interrupts for an odd channel */
        Ftm_Pwm_Ip_DisableCmpIrq(instance, (uint8)((pairChId * 2U) + 1U));
    }
}

static void Ftm_Pwm_Ip_NormalCheckNotification(uint8 instance, uint8 channel)
{
    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];
    Ftm_Pwm_Ip_ChannelModeType chMode;
    uint8 pairChId = channel >> 1U;
    
    chMode = (Ftm_Pwm_Ip_ChannelModeType)Ftm_Pwm_Ip_GetChannelMode(ftmBase, channel);

    /* If given channel is using time-overflow interrupt */
    if (FTM_PWM_NO_EDGE != (Ftm_Pwm_Ip_NotifIrq[instance][channel] & FTM_PWM_TOF_IRQ_EDGE))
    {
        /* Clear this bit to indicate that given channel has pulse and ready to set notification */
        Ftm_Pwm_Ip_NotifIrq[instance][channel] &= (uint8)(~(FTM_PWM_IRQ_NO_EDGE_NOTIF));
        /* Set TOIE bit for enable time-overflow interrupt */
        Ftm_Pwm_Ip_SetTimerOverflowInt(ftmBase, TRUE);
    }
#ifdef ERR_IPV_FTM_ERR010856
#if ((STD_ON == ERR_IPV_FTM_ERR010856) && (STD_ON == FTM_PWM_HAS_FAULT))
    /* If given channel is using time-overflow interrupt for errata workaround */
    if (FTM_PWM_NO_EDGE != (Ftm_Pwm_Ip_NotifIrq[instance][channel] & FTM_PWM_TOF_FAULT_DETECT))
    {
        /* Clear check fault notification */
        Ftm_Pwm_Ip_NotifIrq[instance][channel] &= (uint8)~(FTM_PWM_TOF_FAULT_DETECT);
        /* Disable interrupts for given channel */
        Ftm_Pwm_Ip_DisableCmpIrq(instance, channel);

        if (( FTM_PWM_MODE_COMBINE_HIGH          == chMode) ||
#if (defined(FTM_PWM_HAS_MODIFIED_COMBINE_MODE) && (FTM_PWM_HAS_MODIFIED_COMBINE_MODE == STD_ON))
            ( FTM_PWM_MODE_MODIFIED_COMBINE_HIGH == chMode) ||
            ( FTM_PWM_MODE_MODIFIED_COMBINE_LOW  == chMode) ||
#endif
            ( FTM_PWM_MODE_COMBINE_LOW           == chMode))
        {
            /* Disable interrupts for an even channel */
            Ftm_Pwm_Ip_DisableCmpIrq(instance, (uint8)(pairChId * 2U));
            /* Disable interrupts for an odd channel */
            Ftm_Pwm_Ip_DisableCmpIrq(instance, (uint8)((pairChId * 2U) + 1U));
        }
    }
#endif
#endif
    /* If given channel is using match-compare interrupt */
    if (FTM_PWM_NO_EDGE != (Ftm_Pwm_Ip_NotifIrq[instance][channel] & FTM_PWM_CHF_IRQ_EDGE))
    {
        /* Set CHIE bit for enable match-compare interrupt */
        Ftm_Pwm_Ip_UpdateChnInt(ftmBase, channel, TRUE);
    }

    if (( FTM_PWM_MODE_COMBINE_HIGH          == chMode) ||
#if (defined(FTM_PWM_HAS_MODIFIED_COMBINE_MODE) && (FTM_PWM_HAS_MODIFIED_COMBINE_MODE == STD_ON))
         ( FTM_PWM_MODE_MODIFIED_COMBINE_HIGH == chMode) ||
         ( FTM_PWM_MODE_MODIFIED_COMBINE_LOW  == chMode) ||
#endif
         ( FTM_PWM_MODE_COMBINE_LOW           == chMode))
    {
        if (FTM_PWM_NO_EDGE != (Ftm_Pwm_Ip_NotifIrq[instance][(uint8)(pairChId * 2U)] & FTM_PWM_CHF_IRQ_EDGE))
        {
            /* Set CHIE bit for enable match-compare interrupt for an even channel */
            Ftm_Pwm_Ip_UpdateChnInt(ftmBase, (uint8)(pairChId * 2U), TRUE);
        }
        
        if (FTM_PWM_NO_EDGE != (Ftm_Pwm_Ip_NotifIrq[instance][(uint8)((pairChId * 2U) + 1U)] & FTM_PWM_CHF_IRQ_EDGE))
        {
            /* Set CHIE bit for enable match-compare interrupt for an odd channel */
            Ftm_Pwm_Ip_UpdateChnInt(ftmBase, (uint8)((pairChId * 2U) + 1U), TRUE);
        }
    }
}    

static void Ftm_Pwm_Ip_CheckNotification(uint8 instance, uint8 channel)
{
    /* If duty cycle is 0% or 100% */
    if ((Ftm_Pwm_Ip_Period[instance] == Ftm_Pwm_Ip_DutyCycle[instance][channel]) || (0U == Ftm_Pwm_Ip_DutyCycle[instance][channel]))
    {
        Ftm_Pwm_Ip_SpecialCheckNotification(instance, channel);
    }
    /* If duty cycle is not 0% and 100% */
    else
    {
        Ftm_Pwm_Ip_NormalCheckNotification(instance, channel);
    }
}
#endif

#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
#if (STD_ON == FTM_PWM_IP_USER_ACCESS_ALLOWED_AVAILABLE)
/*FUNCTION**********************************************************************
 *
 * Function Name : Ftm_Pwm_Ip_SetUserAccessAllowed
 * Description   : Sets the UAA bit in REG_PROT to make the instance accessible in user mode.
 *
 *END**************************************************************************/
static void Ftm_Pwm_Ip_SetUserAccessAllowed(uint8 instance)
{
    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];
    SET_USER_ACCESS_ALLOWED((uint32)ftmBase, FTM_PROT_MEM_U32);
}

/*FUNCTION**********************************************************************
 *
 * Function Name : Ftm_Pwm_Ip_ClrUserAccessAllowed
 * Description   : Clears the UAA bit in REG_PROT to make the instance not accessible in user mode.
 *
 *END**************************************************************************/
static void Ftm_Pwm_Ip_ClrUserAccessAllowed(uint8 instance)
{
    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];
    CLR_USER_ACCESS_ALLOWED((uint32)ftmBase, FTM_PROT_MEM_U32);
}
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
#endif /* (STD_ON == FTM_PWM_IP_USER_ACCESS_ALLOWED_AVAILABLE) */


static void Ftm_Pwm_Ip_ResetAndFirstConfigure(uint8 instance, const Ftm_Pwm_Ip_InstanceCfgType * userInstCfg)
{
    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];

    Ftm_Pwm_Ip_Reset(ftmBase);
    /* Disable counter clock */
    Ftm_Pwm_Ip_SetClockSource(ftmBase, FTM_PWM_CLOCK_SOURCE_NONE);
    /* Clear the overflow flag */
    Ftm_Pwm_Ip_ClearTimerOverflow(ftmBase);
    /* Set Counter mode */
    Ftm_Pwm_Ip_SetCpwms(ftmBase, (userInstCfg->cntMode == FTM_PWM_EDGE_ALIGNED)? FALSE : TRUE);
    /* Disable FTM mode */
    Ftm_Pwm_Ip_Enable(ftmBase, FALSE);
    /* Configure debug mode */
    Ftm_Pwm_Ip_SetBdmMode(ftmBase, userInstCfg->debugMode);
    /* Configure Deadtime insertion */
    Ftm_Pwm_Ip_SetDeadtimeCount(ftmBase, (uint8)(userInstCfg->deadTimeValue & FTM_DEADTIME_DTVAL_MASK));
    Ftm_Pwm_Ip_SetExtDeadtimeValue(ftmBase, (uint8)(userInstCfg->deadTimeValue >> FTM_DEADTIME_DTVAL_WIDTH));
    Ftm_Pwm_Ip_SetDeadtimePrescaler(ftmBase, userInstCfg->deadTimePs);
}

/*FUNCTION**********************************************************************
 *
 * Function Name : Ftm_Pwm_Ip_InitInstance
 * Description   : Configures the FTM instance in PWM mode and all general registers.
 *
 *END**************************************************************************/
static void Ftm_Pwm_Ip_InitInstance(uint8 instance,
                                    const Ftm_Pwm_Ip_InstanceCfgType * userInstCfg)
{
    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];

#if (defined(FTM_PWM_IP_SIM_AVAILABLE) && (FTM_PWM_IP_SIM_AVAILABLE == STD_ON))
    Ftm_Pwm_Ip_SimType * simBase  = Ftm_Pwm_Ip_aSimBase[0U];
#endif

#if (FTM_PWM_IP_DEV_ERROR_DETECT == STD_ON)
    DevAssert(FTM_PWM_INSTANCE_COUNT > instance);
    DevAssert(NULL_PTR != userInstCfg);
    /* Maximum value for Deadtime is 1023 including the extension */
    DevAssert((uint16)0x3FF >= userInstCfg->deadTimeValue);

    if (FTM_PWM_CENTER_ALIGNED == userInstCfg->cntMode)
    {
        /* In Center Aligned mode MOD value should not be greater than 0x7FFF. Ambiguous results may occur. */
        DevAssert((uint16)0x7FFF > userInstCfg->pwmPeriod);
    }
#endif

#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
#if (STD_ON == FTM_PWM_IP_USER_ACCESS_ALLOWED_AVAILABLE)
    /* Set the UAA bit in REG_PROT to make the instance accessible in user mode */
    OsIf_Trusted_Call1param(Ftm_Pwm_Ip_SetUserAccessAllowed, instance);
#endif
#endif

#if (defined(FTM_PWM_IP_SIM_AVAILABLE) && (FTM_PWM_IP_SIM_AVAILABLE == STD_ON))
#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
    /* The FTM channel output state is retained when the channel is in output mode.*/
    OsIf_Trusted_Call2params(Ftm_Pwm_Ip_SetSimOutputBufferEn, simBase, instance);
#else   
    /* The FTM channel output state is retained when the channel is in output mode.*/
    Ftm_Pwm_Ip_SetSimOutputBufferEn(simBase, instance);
#endif
#endif

    Ftm_Pwm_Ip_ResetAndFirstConfigure(instance, userInstCfg);

    /* Configure the synchronization and reload points */
    (void)Ftm_Pwm_Ip_UpdateSync(instance, userInstCfg->syncCfg);

    /* Configure PWM period */
    Ftm_Pwm_Ip_SetCounterInitVal(ftmBase, 0x00U);

    Ftm_Pwm_Ip_Period[instance] = userInstCfg->pwmPeriod;

    Ftm_Pwm_Ip_ClockSource[instance] = userInstCfg->clkSrc;

    Ftm_Pwm_Ip_ClockPrescaler[instance] = userInstCfg->clkPs;

    Ftm_Pwm_Ip_AlternateClockPrescaler[instance] = userInstCfg->alternateClkPs;

    if (TRUE == userInstCfg->overflowIrqEn)
    {
        Ftm_Pwm_Ip_pOverflowIrqCallback[instance].functionCallback = userInstCfg->overflowCb.functionCallback;
        Ftm_Pwm_Ip_pOverflowIrqCallback[instance].cbParam = userInstCfg->overflowCb.cbParam;
    }

    if (FTM_PWM_CENTER_ALIGNED == userInstCfg->cntMode)
    {
        /* For Center Aligned mode MOD register should be divided by 2. Period is 2 * (MOD − CNTIN) */
        Ftm_Pwm_Ip_SetMod(ftmBase, (uint16)(userInstCfg->pwmPeriod >> 1U));
    }
    else
    {
        /* For Edge Aligned mode period is determined by: MOD-CNTIN+1 */
        Ftm_Pwm_Ip_SetMod(ftmBase, (uint16)(userInstCfg->pwmPeriod - 1U));
    }

#if (defined(FTM_PWM_HAS_DITHERING) && (FTM_PWM_HAS_DITHERING == STD_ON))
    /* Configure PWM period dither */
    Ftm_Pwm_Ip_SetModFracVal(ftmBase, userInstCfg->pwmPeriodDither);
#endif

    /* Configure Initialization feature */
    Ftm_Pwm_Ip_SetInitTriggerCmd(ftmBase, userInstCfg->initTriggerEn);
#if (defined(FTM_PWM_HAS_RELOAD_POINT) && (FTM_PWM_HAS_RELOAD_POINT == STD_ON))
    Ftm_Pwm_Ip_SetInitTriggerMode(ftmBase, userInstCfg->initTrigMode);
#endif
}

/*FUNCTION**********************************************************************
 *
 * Function Name : Ftm_Pwm_Ip_InitInstanceStart
 * Description   : Configures the FTM clock and pre-scaler, enable FTM mode
 *
 *END**************************************************************************/
static void Ftm_Pwm_Ip_InitInstanceStart(uint8 instance,
                                         const Ftm_Pwm_Ip_InstanceCfgType * userInstCfg)
{
    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];

#if (FTM_PWM_IP_DEV_ERROR_DETECT == STD_ON)
    DevAssert(FTM_PWM_INSTANCE_COUNT > instance);
    DevAssert(NULL_PTR != userInstCfg);

    if (FTM_PWM_CENTER_ALIGNED == userInstCfg->cntMode)
    {
        /* In Center Aligned mode MOD value should not be greater than 0x7FFF. Ambiguous results may occur. */
        DevAssert((uint16)0x7FFF > userInstCfg->pwmPeriod);
    }
#endif

#if (defined(FTM_PWM_HAS_FAULT) && (FTM_PWM_HAS_FAULT == STD_ON))
    /* Set Fault Input Filter Value */  
    Ftm_Pwm_Ip_SetFaultFilterValue(ftmBase, userInstCfg->faultInFilter);
    /* Set Fault output state */  
    Ftm_Pwm_Ip_SetFaultOutputState(ftmBase, userInstCfg->faultOutState);
    /* Defines the FTM fault control mode */
    Ftm_Pwm_Ip_SetFaultControlMode(ftmBase, userInstCfg->faultCtrMode);
    /* Enables the generation of an interrupt when a fault is detected by FTM and the FTM fault control is enabled.*/
    if(TRUE == userInstCfg->faultIrqEn)
    {
        Ftm_Pwm_Ip_SetFaultInterruptEnable(ftmBase, TRUE);
    }
#endif

    /* Enable FTM mode */
    Ftm_Pwm_Ip_Enable(ftmBase, TRUE);

    Ftm_Pwm_Ip_SetPwmSyncMode(ftmBase, TRUE);

    /* Configure the clock prescaler */
    Ftm_Pwm_Ip_SetClockPs(ftmBase, userInstCfg->clkPs);
    /* Configure the clock source */
    Ftm_Pwm_Ip_SetClockSource(ftmBase, userInstCfg->clkSrc);
}

static void Ftm_Pwm_Ip_ConfigurePairedChannelCombinedMode(uint8 instance, const Ftm_Pwm_Ip_ChannelConfigType * userChCfg)
{
    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];
    uint8 channelId = 0U;
    uint8 chPairId = 0U;
    
    /* Configure the PWM channel */
    channelId = userChCfg->channelId;
    chPairId =  (uint8)(channelId >> 1U);
    /* Enable sync control for channels*/
    Ftm_Pwm_Ip_SetDualChnPwmSyncCmd(ftmBase, chPairId, TRUE);
#if (defined(FTM_PWM_HAS_FAULT) && (FTM_PWM_HAS_FAULT == STD_ON))
    /* Enables the fault control in pair of channels */
    Ftm_Pwm_Ip_SetDualChFaultCtr(ftmBase, chPairId, TRUE);
#endif
    /* Configure Paired channel for combined/mCombined modes */
    if ((FTM_PWM_MODE_COMBINE_HIGH == userChCfg->channelMode) ||
        (FTM_PWM_MODE_COMBINE_LOW == userChCfg->channelMode))
    {
        /* Configure ELSA/ELSB for an odd channel*/
        Ftm_Pwm_Ip_SetChnEdgeLevel(ftmBase, (uint8)((chPairId * 2U) + 1U), userChCfg->channelMode);
        /* Enable State of channel pair output combine mode */
        Ftm_Pwm_Ip_SetDualChnCombineCmd(ftmBase, chPairId, TRUE);
    }
#if (defined(FTM_PWM_HAS_MODIFIED_COMBINE_MODE) && (FTM_PWM_HAS_MODIFIED_COMBINE_MODE == STD_ON))
    else if ((FTM_PWM_MODE_MODIFIED_COMBINE_HIGH == userChCfg->channelMode) ||
             (FTM_PWM_MODE_MODIFIED_COMBINE_LOW == userChCfg->channelMode))
    {
        /* Configure ELSA/ELSB for an odd channel*/
        Ftm_Pwm_Ip_SetChnEdgeLevel(ftmBase, (uint8)((chPairId * 2U) + 1U), userChCfg->channelMode);
        /* Enable State of channel pair output combine mode */
        Ftm_Pwm_Ip_SetDualChnCombineCmd(ftmBase, chPairId, TRUE);
        /* Enables the FTM peripheral timer channel modified combine mode.*/
        Ftm_Pwm_Ip_SetDualChnMCombineCmd(ftmBase, chPairId, TRUE);
    }
#endif
    else
    {
        /* Do Nothing */
    }

    /* Configure paired channel and pair */
    if (NULL_PTR != userChCfg->pairCfg)
    {
        Ftm_Pwm_Ip_InitPair(instance, userChCfg->pairCfg);
    }
}

static void Ftm_Pwm_Ip_SetChnTriggerAndSoftwareCtrl(uint8 instance, const Ftm_Pwm_Ip_ChannelConfigType * userChCfg)
{
    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];
    uint8 channelId = 0U;
    
    /* Configure External Trigger */
    Ftm_Pwm_Ip_SetChnTriggerCmd(ftmBase, channelId, userChCfg->extTrigEn);

    /* Configure Ch Match Reload point */
    Ftm_Pwm_Ip_SetPwmLoadChnSelCmd(ftmBase, channelId, userChCfg->chMatchLoadEn);

    /* Configure  Software Output Control Enable */
    Ftm_Pwm_Ip_SetChnSoftwareCtrlCmd(ftmBase, channelId, userChCfg->swControlEn);

    /* Configure Channel Software Output Control Value */
    Ftm_Pwm_Ip_SetChnSoftwareCtrlVal(ftmBase, channelId, userChCfg->swControlVal);

    /* Sync Write buffered registers */
    Ftm_Pwm_Ip_SetSoftwareTriggerCmd(ftmBase, TRUE);
}

/*FUNCTION**********************************************************************
 *
 * Function Name : Ftm_Pwm_Ip_InitChannel
 * Description   : Configures the PWM signal for the ftm channel.
 *
 *END**************************************************************************/
static void Ftm_Pwm_Ip_InitChannel(uint8 instance,
                                   const Ftm_Pwm_Ip_ChannelConfigType * userChCfg)
{

    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];
    uint8 channelId = 0U;

#if (FTM_PWM_IP_DEV_ERROR_DETECT == STD_ON)
    DevAssert(FTM_PWM_INSTANCE_COUNT > instance);
    DevAssert(NULL_PTR != userChCfg);
#endif

    /* Configure the PWM channel */
    channelId = userChCfg->channelId;

#if (FTM_PWM_IP_DEV_ERROR_DETECT == STD_ON)

    /* Center Aligned PWM is available only in FTM CPWM counter mode */
    if ((FTM_PWM_MODE_CENTER_ALIGNED_HIGH == userChCfg->channelMode) ||
        (FTM_PWM_MODE_CENTER_ALIGNED_LOW == userChCfg->channelMode))
    {
        DevAssert(FTM_PWM_CENTER_ALIGNED == Ftm_Pwm_Ip_GetCpwms(ftmBase));
    }
    /* Only the main channel of a pair can have the pairCfg pointer set */
    if (NULL_PTR != userChCfg->pairCfg)
    {
        if (0x01U == (channelId % 2U))
        {
            DevAssert(FALSE);
        }/* Check if pair configuration */
        else if ((userChCfg->pairCfg->pairId * 2U) != channelId)
        {
            DevAssert(FALSE);
        }
        else
        {
            /* MISRA Rule 15.7 All if...else if constructs shall be terminated with an else statement */
        }
    }

    if ((FTM_PWM_MODE_COMBINE_HIGH == userChCfg->channelMode) ||
#if (defined(FTM_PWM_HAS_MODIFIED_COMBINE_MODE) && (FTM_PWM_HAS_MODIFIED_COMBINE_MODE == STD_ON))
        (FTM_PWM_MODE_MODIFIED_COMBINE_HIGH == userChCfg->channelMode) ||
        (FTM_PWM_MODE_MODIFIED_COMBINE_LOW == userChCfg->channelMode) ||
#endif
        (FTM_PWM_MODE_COMBINE_LOW == userChCfg->channelMode))

    {
        DevAssert(NULL_PTR != userChCfg->pairCfg);
    }
#endif

#if (defined(FTM_PWM_IP_NOTIFICATION_SUPPORTED) && (FTM_PWM_IP_NOTIFICATION_SUPPORTED == STD_ON))
    Ftm_Pwm_Ip_NotifIrq[instance][channelId] = (Ftm_Pwm_Ip_EdgeInterruptType)FTM_PWM_NO_EDGE;
#endif

    Ftm_Pwm_Ip_DutyCycle[instance][channelId] = userChCfg->dutyCycle;

    Ftm_Pwm_Ip_IdleState[instance][channelId] = userChCfg->initOut;

    Ftm_Pwm_Ip_Polarity[instance][channelId] = userChCfg->polarity;

    /* Configure POL bits */
    Ftm_Pwm_Ip_SetChnOutputPolarityCmd(ftmBase, channelId, userChCfg->polarity);
    /* Configure initial output state */
    Ftm_Pwm_Ip_SetChnOutputInitStateCmd(ftmBase, channelId, userChCfg->initOut);

    /* Configure Channel Mode */
    /* Configure ELSA/ELSB */
    Ftm_Pwm_Ip_SetChnEdgeLevel(ftmBase, channelId, userChCfg->channelMode);
    /* Set MSB and MSA bits*/
    Ftm_Pwm_Ip_SetChnMSBAMode(ftmBase, channelId, userChCfg->channelMode);

    Ftm_Pwm_Ip_ConfigurePairedChannelCombinedMode(instance, userChCfg);

    Ftm_Pwm_Ip_UpdatePwmDutyCycleChannel(instance,
                                         channelId,
                                         Ftm_Pwm_Ip_DutyCycle[instance][channelId],
                                         TRUE);

    Ftm_Pwm_Ip_SetChnTriggerAndSoftwareCtrl(instance, userChCfg);

#if (defined(FTM_PWM_HAS_CHANNEL_PWM_ENABLE) && (FTM_PWM_HAS_CHANNEL_PWM_ENABLE == STD_ON))
    /* Enable PWM output */
    if(TRUE == userChCfg->chOutputEn)
    {
        Ftm_Pwm_Ip_EnablePwmChannelOutputs(ftmBase, channelId);
    }
#endif
    Ftm_Pwm_Ip_ChannelState[instance][channelId] = (Ftm_Pwm_Ip_ChannelStateType)FTM_PWM_CHANNEL_RUNNING;

    if(TRUE == userChCfg->chIrqEn)
    {
        Ftm_Pwm_Ip_aChIrqCallbacks[instance][channelId].functionCallback = userChCfg->channelCb.functionCallback;
        Ftm_Pwm_Ip_aChIrqCallbacks[instance][channelId].cbParam          = userChCfg->channelCb.cbParam;
    }

}

/*FUNCTION**********************************************************************
 *
 * Function Name : Ftm_Pwm_Ip_DeinitInstance
 * Description   : Stops all PWM channels.
 *
 *END**************************************************************************/
static void Ftm_Pwm_Ip_DeInitInstance(uint8 instance)
{

    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];

#if (FTM_PWM_IP_DEV_ERROR_DETECT)
    DevAssert(instance < FTM_PWM_INSTANCE_COUNT);
#endif

    /* Stop the FTM counter */
    Ftm_Pwm_Ip_SetClockSource(ftmBase, FTM_PWM_CLOCK_SOURCE_NONE);

    /* Clear the dead-time pre-scaler and value */
    Ftm_Pwm_Ip_SetExtDeadtimeValue(ftmBase, 0U);
    Ftm_Pwm_Ip_SetDeadtimePrescaler(ftmBase, FTM_PWM_DEADTIME_DIV_1);
    Ftm_Pwm_Ip_SetDeadtimeCount(ftmBase, 0U);

    /* Configure debug mode */
    Ftm_Pwm_Ip_SetBdmMode(ftmBase, FTM_PWM_BDM_MODE_00);
    /* Disable overflow interrupt */
    Ftm_Pwm_Ip_SetTimerOverflowInt(ftmBase, FALSE);
    /* Clear the module value of the registers */
    Ftm_Pwm_Ip_SetMod(ftmBase, 0U);
    Ftm_Pwm_Ip_SetCounter(ftmBase, 0U);

#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
#if (STD_ON == FTM_PWM_IP_USER_ACCESS_ALLOWED_AVAILABLE)
    /* Clear the UAA bit in REG_PROT */
    OsIf_Trusted_Call1param(Ftm_Pwm_Ip_ClrUserAccessAllowed, instance);
#endif
#endif

}

/*FUNCTION**********************************************************************
 *
 * Function Name : Ftm_Pwm_Ip_DeinitChannel
 * Description   : Stops all PWM channels.
 *
 *END**************************************************************************/
static void Ftm_Pwm_Ip_DeInitChannel(uint8 instance,
                                     uint8 channel)
{

    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];
    uint8 pairId = (uint8)(channel >> 1U);
#if (FTM_PWM_IP_DEV_ERROR_DETECT == STD_ON)
    DevAssert(FTM_PWM_INSTANCE_COUNT > instance);
#endif

    /* Disable interrupts for given channel */
    Ftm_Pwm_Ip_DisableCmpIrq(instance, channel);
    /* Set current channel channels to IDLE */
    Ftm_Pwm_Ip_SwOutputControl(instance,
                               channel,
                               Ftm_Pwm_Ip_IdleState[instance][channel],
                               TRUE);
    /* Clear SWSYNC bit - has to be cleared to generate SW trigger */
    Ftm_Pwm_Ip_SetSoftwareTriggerCmd(ftmBase, FALSE);
    /* OUTMASK register is updated with the value of its buffer only by the PWM synchronization */
    Ftm_Pwm_Ip_SetOutmaskPwmSyncModeCmd(ftmBase, TRUE);
    /* The software trigger activates the OUTMASK register synchronization */
    Ftm_Pwm_Ip_SetOutmaskSoftwareSyncModeCmd(ftmBase, TRUE);
    /* Channel output is not masked. It continues to operate normally */
    Ftm_Pwm_Ip_SetChnOutputMask(ftmBase, channel, FALSE);
    /* set SWSYNC bit - has to be cleared to generate SW trigger */
    Ftm_Pwm_Ip_SetSoftwareTriggerCmd(ftmBase, TRUE);
    /* Clear the type of notification for each channel (n) in paired channel*/
    Ftm_Pwm_Ip_NotifIrq[instance][(pairId * 2U)] = (Ftm_Pwm_Ip_EdgeInterruptType)FTM_PWM_NO_EDGE;
    /* Clear the type of notification for each channel (n+1) in paired channel*/
    Ftm_Pwm_Ip_NotifIrq[instance][((pairId * 2U) + 1U)] = (Ftm_Pwm_Ip_EdgeInterruptType)FTM_PWM_NO_EDGE;

}

#if (defined(FTM_PWM_HAS_FAULT) && (FTM_PWM_HAS_FAULT == STD_ON))
/*FUNCTION**********************************************************************
 *
 * Function Name : Ftm_Pwm_Ip_InitChFault
 * Description   : Configures the fault channels are available on the Pwm configuration.
 *
 *END**************************************************************************/
static void Ftm_Pwm_Ip_InitChFault(uint8 instance,
                                   const Ftm_Pwm_Ip_FaultChCfgType * faultChCfg)
{
    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];
    /* Set the fault inputs polarity. */
    Ftm_Pwm_Ip_SetFaultPolarity(ftmBase, faultChCfg->faultId, faultChCfg->faultPol);
    /* Enables/Disables the filter for the fault input. */
    Ftm_Pwm_Ip_SetFaultFilterEn(ftmBase, faultChCfg->faultId, faultChCfg->faultFilEn);
    /* Enables/Disables the fault inputs. */
    Ftm_Pwm_Ip_SetFaultInputEn(ftmBase, faultChCfg->faultId, TRUE);
    /* Fault Irq Callback*/
    Ftm_Pwm_Ip_pFaultIrqCallback[instance][faultChCfg->faultId] = faultChCfg->faultCb;
}
#endif

/**
 *
 * Function Name : Ftm_Pwm_Ip_Init
 * Description   : Initializes the FTM instance and all configured channels.
 * Resets the instance and configures it with the values from the user configuration.
 * Configures the synchronization and reload mechanisms.
 * Configures all channels and the pairs of channels.
 *
 * @implements Ftm_Pwm_Ip_Init_Activity
 */
void Ftm_Pwm_Ip_Init(uint8 instance,
                     const Ftm_Pwm_Ip_UserCfgType * userCfg)
{

    uint8 index = 0U;

#if (FTM_PWM_IP_DEV_ERROR_DETECT == STD_ON)
    DevAssert(FTM_PWM_INSTANCE_COUNT > instance);
    DevAssert(NULL_PTR != userCfg);
#endif

#ifdef ERR_IPV_FTM_ERR010856
#if ((STD_ON == ERR_IPV_FTM_ERR010856) && (STD_ON == FTM_PWM_HAS_FAULT))
    /* Set a variable to indicate that a fault was not detected when initializing */
    Ftm_Pwm_Ip_FaultCheck = (uint8)0U;
#endif
#endif
    /* Configure FTM instance in PWM mode */
    Ftm_Pwm_Ip_InitInstance(instance, userCfg->instanceCfg);

    /* Configure all channels in the user cfg */
    for (index = 0; index < userCfg->noOfConfiguredCh; index++)
    {
        /* Configure PWM channels */
        Ftm_Pwm_Ip_InitChannel(instance, userCfg->configuredChArray[index]);
    }

#if (defined(FTM_PWM_HAS_FAULT) && (FTM_PWM_HAS_FAULT == STD_ON))
    if (userCfg->noOfFaultCfg > 0U)
    {
        for (index = 0; index < userCfg->noOfFaultCfg; index++)
        {
            /* Configure fault channels */
            Ftm_Pwm_Ip_InitChFault(instance, userCfg->configuredFaultArray[index]);
        }
    }
#endif

    Ftm_Pwm_Ip_InitInstanceStart(instance, userCfg->instanceCfg);
}

/**
 *
 * Function Name : Ftm_Pwm_Ip_DeInit
 * Description   : Shuts down the FTM driver.
 * Firstly, Ftm_Pwm_Ip_Init must be called. Then this function will disables the FTM module.
 *
 * @implements Ftm_Pwm_Ip_DeInit_Activity
 */
void Ftm_Pwm_Ip_DeInit(uint8 instance)
{

    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];
    uint8 channelIdex = 0U;
#if (FTM_PWM_IP_DEV_ERROR_DETECT == STD_ON)
    DevAssert(instance < FTM_PWM_INSTANCE_COUNT);
#endif
    /* Reset all FTM register */
    Ftm_Pwm_Ip_Reset(ftmBase);
    
    /* Configure all channels in the user cfg */
    for (channelIdex = 0U; channelIdex < FTM_PWM_CHANNEL_COUNT; channelIdex++)
    {
        if (FTM_PWM_CHANNEL_UNINIT != Ftm_Pwm_Ip_ChannelState[instance][channelIdex])
        {
            /* De-Initialize FTM channels */
            Ftm_Pwm_Ip_DeInitChannel(instance, channelIdex);
        }
    }
    /* De-Initialize FTM Instance */
    Ftm_Pwm_Ip_DeInitInstance(instance);
}


/*FUNCTION**********************************************************************
 *
 * Function Name : Ftm_Pwm_Ip_UpdatePwmDutyCycleChannel
 * Description   : This function will update the duty cycle for the PWM signal
 *
 *END**************************************************************************/
void Ftm_Pwm_Ip_UpdatePwmDutyCycleChannel(uint8 instance,
                                          uint8 channel,
                                          uint16 dutyCycle,
                                          boolean softwareTrigger)
{
    uint16 firstEdge;
    uint8 pairId;
    const Ftm_Pwm_Ip_HwAddrType *const  ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];
    Ftm_Pwm_Ip_ChannelModeType chMode;

    pairId = channel >> 1U;

    Ftm_Pwm_Ip_DutyCycle[instance][channel] = dutyCycle;

    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_00();

    chMode = (Ftm_Pwm_Ip_ChannelModeType)Ftm_Pwm_Ip_GetChannelMode(ftmBase, channel);

    firstEdge = dutyCycle;

#if (defined(FTM_PWM_IP_NOTIFICATION_SUPPORTED) && (FTM_PWM_IP_NOTIFICATION_SUPPORTED == STD_ON))
    Ftm_Pwm_Ip_CheckNotification(instance, channel);
#endif

    if((Ftm_Pwm_Ip_ChannelStateType)FTM_PWM_CHANNEL_IDLE == Ftm_Pwm_Ip_ChannelState[instance][channel])
    {
        /* Update the state of current channel*/
        Ftm_Pwm_Ip_ChannelState[instance][channel] = (Ftm_Pwm_Ip_ChannelStateType)FTM_PWM_CHANNEL_RUNNING;
        /* Set output for current channel*/
        Ftm_Pwm_Ip_SwOutputControl(instance,
                                   channel,
                                   FTM_PWM_OUTPUT_STATE_LOW,
                                   FALSE);
    }

    if ((FTM_PWM_MODE_EDGE_ALIGNED_HIGH   == chMode) ||
        (FTM_PWM_MODE_EDGE_ALIGNED_LOW    == chMode) ||
        (FTM_PWM_MODE_CENTER_ALIGNED_HIGH == chMode) ||
        (FTM_PWM_MODE_CENTER_ALIGNED_LOW  == chMode))
    {
        /* Write CV registers and setup duty cycle and phase values */
        (void) Ftm_Pwm_Ip_UpdatePwmChannel(instance,
                                      channel,
                                      firstEdge,
                                      0U,
                                      softwareTrigger);
    }
    else if (( FTM_PWM_MODE_COMBINE_HIGH          == chMode) ||
#if (defined(FTM_PWM_HAS_MODIFIED_COMBINE_MODE) && (FTM_PWM_HAS_MODIFIED_COMBINE_MODE == STD_ON))
             ( FTM_PWM_MODE_MODIFIED_COMBINE_HIGH == chMode) ||
             ( FTM_PWM_MODE_MODIFIED_COMBINE_LOW  == chMode) ||
#endif
             ( FTM_PWM_MODE_COMBINE_LOW           == chMode))

    {
        if((uint16)0U == Ftm_Pwm_Ip_PhaseShift[instance][pairId])
        {
            /* Write CV registers and setup duty cycle and phase values */
            (void) Ftm_Pwm_Ip_UpdatePwmChannel(instance,
                                               channel,
                                               0U,
                                               firstEdge,
                                               softwareTrigger);
        }
        else
        {
            firstEdge = Ftm_Pwm_Ip_CalculatePhaseShift(instance, dutyCycle, Ftm_Pwm_Ip_PhaseShift[instance][pairId]);
            /* Write CV registers and setup duty cycle and phase values */
            (void) Ftm_Pwm_Ip_UpdatePwmChannel(instance,
                                               channel,
                                               Ftm_Pwm_Ip_PhaseShift[instance][pairId],
                                               firstEdge,
                                               softwareTrigger);

        }

    }
    else
    {
        /* Do Nothing */
    }

    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_00();

}


/**
 *
 * Function Name : Ftm_Pwm_Ip_UpdatePwmPeriodAndDuty
 * Description   : The function shall update the period and duty cycle of the selected channels immediately or synchronized
 *
 * @implements   Ftm_Pwm_Ip_UpdatePwmPeriodAndDuty_Activity
 **/
void Ftm_Pwm_Ip_UpdatePwmPeriodAndDuty(uint8 instance,
                                       uint8 channel,
                                       uint16 period,
                                       uint16 dutyCycle,
                                       boolean softwareTrigger)
{

    uint16 tempDutyCycle = 0U;
    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];

#if (FTM_PWM_IP_DEV_ERROR_DETECT == STD_ON)
    DevAssert(instance < FTM_PWM_INSTANCE_COUNT);
    DevAssert(channel < FTM_PWM_CHANNEL_COUNT);
#endif

    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_01();

    if((Ftm_Pwm_Ip_ChannelStateType)FTM_PWM_CHANNEL_IDLE == Ftm_Pwm_Ip_ChannelState[instance][channel])
    {
        /* Update the state of current channel*/
        Ftm_Pwm_Ip_ChannelState[instance][channel] = (Ftm_Pwm_Ip_ChannelStateType)FTM_PWM_CHANNEL_RUNNING;
        /* Set output for current channel*/
        Ftm_Pwm_Ip_SwOutputControl(instance,
                                   channel,
                                   FTM_PWM_OUTPUT_STATE_LOW,
                                   FALSE);
    }
    else
    {
        /* Do Nothing */
    }

    (void) Ftm_Pwm_Ip_UpdatePwmPeriod(instance,
                               period,
                               FALSE);
    Ftm_Pwm_Ip_Period[instance] = period;

    if (0U == period)
    {
        tempDutyCycle = (uint16)0U;
    }
    else
    {
        tempDutyCycle = dutyCycle;
    }


    Ftm_Pwm_Ip_UpdatePwmDutyCycleChannel(instance,
                                         channel,
                                         tempDutyCycle,
                                         softwareTrigger);

    Ftm_Pwm_Ip_SetSoftwareTriggerCmd(ftmBase, softwareTrigger);

    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_01();
}




/**
 *
 * Function Name : Ftm_Pwm_Ip_SwOutputControl
 * Description   : This function will set the output for the PWM signal
 *
 * @implements Ftm_Pwm_Ip_SwOutputControl_Activity
 **/
void Ftm_Pwm_Ip_SwOutputControl(uint8 instance,
                                uint8 channel,
                                Ftm_Pwm_Ip_OutputStateType outputState,
                                boolean activeState)
{

    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];
    uint16 swoCtrlRegVal = 0U;
    uint16 channelMask = 0U;
    uint16 swoCtrlBitMask = 0U;
    uint16 tempPolVal = 0U;
    
    Ftm_Pwm_Ip_ChannelModeType chMode = (Ftm_Pwm_Ip_ChannelModeType)Ftm_Pwm_Ip_GetChannelMode(ftmBase, channel);

#if (FTM_PWM_IP_DEV_ERROR_DETECT == STD_ON)
    DevAssert(FTM_PWM_INSTANCE_COUNT > instance);
    DevAssert(channel < FTM_PWM_CHANNEL_COUNT);
#endif
    if((Ftm_Pwm_Ip_ChannelStateType)FTM_PWM_CHANNEL_IDLE == Ftm_Pwm_Ip_ChannelState[instance][channel])
    {
        Ftm_Pwm_Ip_DutyCycle[instance][channel] = (uint16)0U;
#if (defined(FTM_PWM_IP_NOTIFICATION_SUPPORTED) && (FTM_PWM_IP_NOTIFICATION_SUPPORTED == STD_ON))        
        Ftm_Pwm_Ip_SetOutputForIdleChannel(instance, channel);
    }
    else if ((Ftm_Pwm_Ip_ChannelStateType)FTM_PWM_CHANNEL_OUTPUT_FORCED == Ftm_Pwm_Ip_ChannelState[instance][channel])
    {
        Ftm_Pwm_Ip_SetOutputForForcedChannel(instance, channel, activeState);
    }
#else
    }
#endif
    else
    {
        /* Do Nothing */
    }

    swoCtrlRegVal = Ftm_Pwm_Ip_GetSoftwareOutputControl(ftmBase);

    if ((FTM_PWM_MODE_COMBINE_HIGH          == chMode) ||
#if (defined(FTM_PWM_HAS_MODIFIED_COMBINE_MODE) && (FTM_PWM_HAS_MODIFIED_COMBINE_MODE == STD_ON))
        (FTM_PWM_MODE_MODIFIED_COMBINE_HIGH == chMode) ||
        (FTM_PWM_MODE_MODIFIED_COMBINE_LOW  == chMode) ||
#endif
        (FTM_PWM_MODE_COMBINE_LOW           == chMode))
    {
        /* Two consecutive bits (n and n+1) */
        channelMask = (uint16)3U;
    }
    else
    {
        channelMask = (uint16)1U;
    }

    tempPolVal = (uint16)Ftm_Pwm_Ip_GetPolInstance(ftmBase) & (uint16)((uint32)channelMask << (uint16)channel);

    /* Shift the polarity bit to match the output control value position (CHnOCV) in SWOCTRL register */
    tempPolVal = (uint16)((uint32)tempPolVal << FTM_SWOCTRL_CH0OCV_SHIFT);

    /* Clear the CHnOCV bit(s) from the swoCtrlRegVal for the given channel
       and next odd channel if phase-shifted or combined */
    swoCtrlRegVal &= (uint16)(~((uint32)channelMask << ((uint16)channel + FTM_SWOCTRL_CH0OCV_SHIFT)));

     /* If software output control is enabled */
    if (TRUE == activeState)
    {
        if (FTM_PWM_OUTPUT_STATE_HIGH == outputState)
        {
            /* Sw control on given channel was requested so corresponding channel bits will be set to "1" */
            swoCtrlBitMask = (uint16)((uint32)channelMask << ((uint16)channel + FTM_SWOCTRL_CH0OCV_SHIFT));
        }
        else
        {
            swoCtrlBitMask = (uint16)0U;
        }

        /* XOR between polarity bit(s) of the given channel register (shifted left by 8) and the desired sw output value
           will provide the correct values of the SWOCTRL*/
        swoCtrlRegVal |= (swoCtrlBitMask ^ tempPolVal);

        /* Software output control is requested so CHnOC bit of given channel will be set */
        swoCtrlRegVal |= (uint16)((uint32)channelMask << (uint16)channel);
    }
    else
    {
        /* Software output control is disabled so CHnOC bit of given channel will be cleared */
        swoCtrlRegVal &= (uint16)(~((uint32)channelMask << (uint16)channel));
    }

    /* Write temporary variable into SWOCTRL register */
    Ftm_Pwm_Ip_SoftwareOutputControl(ftmBase, swoCtrlRegVal);

    /* Use software synchronization to update SWOCTRL register immediately */
    Ftm_Pwm_Ip_SetSoftwareTriggerCmd(ftmBase, TRUE);
}


/**
 *
 * Function Name : Ftm_Pwm_Ip_UpdatePwmChannel
 * Description   : This function will update the duty cycle of PWM output.
 * - If the type of update in the duty cycle, this function will convert the input parameters representing
 * frequency in Hz to a period value in ticks needed by the hardware timer. Period is calculated depending
 * on the operating mode of the FTM module and is stored in internal state structure.
 * firstEdge and secondEdge can have value between 0 - FTM_PWM_MAX_DUTY_CYCLE(0 = 0% duty
 * and FTM_PWM_MAX_DUTY_CYCLE = 100% duty). secondEdge value is used only whenFTM module is used in PWM combine mode.
 * - If the type of update in ticks, this function will get value in ticks to the hardware timer.
 * firstEdge and secondEdge variables can have value between 0 and ftmPeriod is stored in the state structure.
 * - in the modified combine mode, the firstEdge parameter is fixed value and only can modify the secondEdge variables
 * which is the initial value in the channel (n+1) match edge when the FTM counter has been ran.
 *
 * @implements Ftm_Pwm_Ip_UpdatePwmChannel_Activity
 **/
Ftm_Pwm_Ip_StatusType Ftm_Pwm_Ip_UpdatePwmChannel(uint8 instance,
                                                  uint8 channel,
                                                  uint16 firstEdge,
                                                  uint16 secondEdge,
                                                  boolean softwareTrigger)
{
    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];
    Ftm_Pwm_Ip_StatusType retStatus = FTM_PWM_STATUS_SUCCESS;
    uint16 hwFirstEdge = 0U;
    uint16 hwSecondEdge = 0U;
    uint16 ftmPeriod = 0U;
    uint8 chPairId = (uint8)(channel >> 1U);

#if (FTM_PWM_IP_DEV_ERROR_DETECT == STD_ON)
    DevAssert(instance < FTM_PWM_INSTANCE_COUNT);
    DevAssert(channel < FTM_PWM_CHANNEL_COUNT);
#endif

    /* Get the period in the FTM instance */
    ftmPeriod = Ftm_Pwm_Ip_Period[instance];

    if (((firstEdge <= ftmPeriod) && (secondEdge <= ftmPeriod)) || (0U == ftmPeriod))
    {
        hwFirstEdge = firstEdge;
        hwSecondEdge = secondEdge;
    }
    else
    {
        retStatus = FTM_PWM_STATUS_ERROR;
    }

    if (FTM_PWM_STATUS_SUCCESS == retStatus)
    {
        if (TRUE == Ftm_Pwm_Ip_GetDualChnCombineCmd(ftmBase, chPairId))
        {
#if (defined(FTM_PWM_HAS_MODIFIED_COMBINE_MODE) && (FTM_PWM_HAS_MODIFIED_COMBINE_MODE == STD_ON))
            if (TRUE == Ftm_Pwm_Ip_GetDualChnMCombineCmd(ftmBase, chPairId))
            {
                /* Check the clock source for FTM counter is disabled or not */
                if (Ftm_Pwm_Ip_GetClockSource(ftmBase) == 0U)
                {
                    Ftm_Pwm_Ip_SetChnCountVal(ftmBase, (uint8)(chPairId * 2U), hwFirstEdge);
                }
            }
            else
#endif
            {
                Ftm_Pwm_Ip_SetChnCountVal(ftmBase, (uint8)(chPairId * 2U), hwFirstEdge);
            }

            /* Modify the initial value in the channel (n+1) match edge */
            Ftm_Pwm_Ip_SetChnCountVal(ftmBase, (uint8)((chPairId * 2U) + 1U), hwSecondEdge);
        }
        else
        {
            /* Channel value is divided by 2 for up down counter mode to keep same duty */
            if (FTM_PWM_CENTER_ALIGNED == Ftm_Pwm_Ip_GetCpwms(ftmBase))
            {
                Ftm_Pwm_Ip_SetChnCountVal(ftmBase, channel, (uint16)(hwFirstEdge >> 1U));
            }
            else
            {
                Ftm_Pwm_Ip_SetChnCountVal(ftmBase, channel, hwFirstEdge);
            }
        }

        /* Software trigger is generated to change CV registers */
        /* Before this please configure sync mechanism to use software trigger */
        Ftm_Pwm_Ip_SetSoftwareTriggerCmd(ftmBase, softwareTrigger);
    }

    return retStatus;
}


/**
 *
 * Function Name : Ftm_Pwm_Ip_UpdatePwmPeriod
 * Description   : This function will update the new period in the frequency or
 * in the counter value into mode register which modify the period of PWM signal
 * on the channel output.
 * - If the type of update in the duty cycle which is reused in Ftm_Pwm_Ip_UpdatePwmChannel
 * function to convert the newValue parameters representing frequency in Hz to
 * a period value to update the MOD register. The newValue parameter must be value
 * between 1U and maximum is the frequency of the FTM counter.
 * - If the type of update in ticks, this function will get value in counting to
 * the MOD register. The newValue parameter must be value between 1U and 0xFFFFU
 *
 * @implements Ftm_Pwm_Ip_UpdatePwmPeriod_Activity
 **/
Ftm_Pwm_Ip_StatusType Ftm_Pwm_Ip_UpdatePwmPeriod(uint8 instance,
                                                 uint32 newValue,
                                                 boolean softwareTrigger)
{

    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];
    uint32 ftmPeriod = 0U;
#if (FTM_PWM_IP_DEV_ERROR_DETECT == STD_ON)
    DevAssert(instance < FTM_PWM_INSTANCE_COUNT);
#endif
    ftmPeriod = newValue;
    
    /* Store the new period */
    Ftm_Pwm_Ip_Period[instance] = (uint16)newValue;

    /* Check the signal operation in which PWM mode */
    if (FTM_PWM_CENTER_ALIGNED == Ftm_Pwm_Ip_GetCpwms(ftmBase))
    {
        ftmPeriod = (ftmPeriod >> 1U);
    }
    else
    {
        ftmPeriod = (ftmPeriod - 1U);
    }
    /* Set the new modulo value into MOD register */
    Ftm_Pwm_Ip_SetMod(ftmBase, (uint16)(ftmPeriod));
    /* Software trigger is generated to change MOD registers */
    Ftm_Pwm_Ip_SetSoftwareTriggerCmd(ftmBase, softwareTrigger);

    return FTM_PWM_STATUS_SUCCESS;
}


/**
 *
 * Function Name : Ftm_Pwm_Ip_GetOutputState
 * Description   : The function shall return current output state of the selected channel output pin.
 *
 * @implements Ftm_Pwm_Ip_GetOutputState_Activity
 **/
Ftm_Pwm_Ip_OutputStateType Ftm_Pwm_Ip_GetOutputState(uint8 instance,
                                                     uint8 channel)
{

    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];
    Ftm_Pwm_Ip_OutputStateType outputValue;

#if (FTM_PWM_IP_DEV_ERROR_DETECT == STD_ON)
    DevAssert(instance < FTM_PWM_INSTANCE_COUNT);
    DevAssert(channel < FTM_PWM_CHANNEL_COUNT);
#endif

    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_03();

    if (TRUE == Ftm_Pwm_Ip_GetChOutputValue(ftmBase, channel))
    {
        outputValue = FTM_PWM_OUTPUT_STATE_HIGH;
    }
    else
    {
        outputValue = FTM_PWM_OUTPUT_STATE_LOW;
    }

    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_03();

    return outputValue;
}


/**
 *
 * Function Name : Ftm_Pwm_Ip_DisableNotification
 * Description   : This function disables the user notifications of given channel
 *
 * @implements Ftm_Pwm_Ip_DisableNotification_Activity
 **/
void Ftm_Pwm_Ip_DisableNotification(uint8 instance, uint8 channel)
{

    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];
    Ftm_Pwm_Ip_ChannelModeType chMode;
    uint8 pairChId = (uint8)(channel >> 1U);

#if (FTM_PWM_IP_DEV_ERROR_DETECT == STD_ON)
    DevAssert(instance < FTM_PWM_INSTANCE_COUNT);
    DevAssert(channel < FTM_PWM_CHANNEL_COUNT);
#endif

    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_04();

    /* Get the mode of channels */
    chMode = (Ftm_Pwm_Ip_ChannelModeType)Ftm_Pwm_Ip_GetChannelMode(ftmBase, channel);
    /* Clear notification state of given channel */
    Ftm_Pwm_Ip_NotifIrq[instance][channel] = FTM_PWM_NO_EDGE;
    /* Disable interrupts for given channel */
    Ftm_Pwm_Ip_DisableCmpIrq(instance, channel);

    if (( FTM_PWM_MODE_COMBINE_HIGH          == chMode) ||
#if (defined(FTM_PWM_HAS_MODIFIED_COMBINE_MODE) && (FTM_PWM_HAS_MODIFIED_COMBINE_MODE == STD_ON))
         ( FTM_PWM_MODE_MODIFIED_COMBINE_HIGH == chMode) ||
         ( FTM_PWM_MODE_MODIFIED_COMBINE_LOW  == chMode) ||
#endif
         ( FTM_PWM_MODE_COMBINE_LOW           == chMode))
    {
        /* Clear notification state of an even channel */
        Ftm_Pwm_Ip_NotifIrq[instance][(uint8)(pairChId * 2U)] = FTM_PWM_NO_EDGE;
        /* Clear notification state of an odd channel */
        Ftm_Pwm_Ip_NotifIrq[instance][(uint8)((pairChId * 2U) + 1U)] = FTM_PWM_NO_EDGE;
        /* Disable interrupts for an even channel */
        Ftm_Pwm_Ip_DisableCmpIrq(instance,(uint8)(pairChId * 2U));
        /* Disable interrupts for an odd channel */
        Ftm_Pwm_Ip_DisableCmpIrq(instance,(uint8)((pairChId * 2U) + 1U));
    }

    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_04();
}

static void Ftm_Pwm_Ip_SetNormalNotificationCase(uint8 instance, uint8 channel)
{
    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];
    Ftm_Pwm_Ip_ChannelModeType chMode;
    uint8 pairChId = (uint8)(channel >> 1U);

    chMode = (Ftm_Pwm_Ip_ChannelModeType)Ftm_Pwm_Ip_GetChannelMode(ftmBase, channel);
    /* If notification state includes time-overflow interrupt */
    if (FTM_PWM_TOF_IRQ_EDGE == (Ftm_Pwm_Ip_NotifIrq[instance][channel] & FTM_PWM_TOF_IRQ_EDGE))
    {
        /* Enable time-overflow interrupt */
        Ftm_Pwm_Ip_SetTimerOverflowInt(ftmBase, TRUE);
    }
    else
    {
        /* Do Nothing*/
    }

    if (FTM_PWM_CHF_IRQ_EDGE == (Ftm_Pwm_Ip_NotifIrq[instance][channel] & FTM_PWM_CHF_IRQ_EDGE))
    {
        /* Enable match-compare interrupt */
        Ftm_Pwm_Ip_UpdateChnInt(ftmBase, channel, TRUE);
    }
    else
    {
        Ftm_Pwm_Ip_UpdateChnInt(ftmBase, channel, FALSE);
    }

    if (( FTM_PWM_MODE_COMBINE_HIGH          == chMode) ||
#if (defined(FTM_PWM_HAS_MODIFIED_COMBINE_MODE) && (FTM_PWM_HAS_MODIFIED_COMBINE_MODE == STD_ON))
     ( FTM_PWM_MODE_MODIFIED_COMBINE_HIGH == chMode) ||
     ( FTM_PWM_MODE_MODIFIED_COMBINE_LOW  == chMode) ||
#endif
     ( FTM_PWM_MODE_COMBINE_LOW           == chMode))
    {
        /* Clear match-compare interrupt flag of given channel (n+1) */
        Ftm_Pwm_Ip_ClearChnEventFlag(ftmBase, ((pairChId * 2U) + 1U));
        /* Check the edge of interrupt with an even channel */
        if (FTM_PWM_CHF_IRQ_EDGE == (Ftm_Pwm_Ip_NotifIrq[instance][(uint8)(pairChId * 2U)] & FTM_PWM_CHF_IRQ_EDGE))
        {
            Ftm_Pwm_Ip_UpdateChnInt(ftmBase, (uint8)(pairChId * 2U), TRUE);
        }
        else
        {
            Ftm_Pwm_Ip_UpdateChnInt(ftmBase, (uint8)(pairChId * 2U), FALSE);
        }
        /* Check the edge of interrupt with an odd channel */
        if (FTM_PWM_CHF_IRQ_EDGE == (Ftm_Pwm_Ip_NotifIrq[instance][(uint8)((pairChId * 2U) + 1U)] & FTM_PWM_CHF_IRQ_EDGE))
        {
            Ftm_Pwm_Ip_UpdateChnInt(ftmBase, (uint8)((pairChId * 2U) + 1U), TRUE);
        }
        else
        {
            Ftm_Pwm_Ip_UpdateChnInt(ftmBase, (uint8)((pairChId * 2U) + 1U), FALSE);
        }
    }
}

/**
 *
 * Function Name : Ftm_Pwm_Ip_EnableNotification
 * Description   : This function enables the user notifications of given channel
 *
 * @implements Ftm_Pwm_Ip_EnableNotification_Activity
 **/
void Ftm_Pwm_Ip_EnableNotification(uint8 instance,
                                   uint8 channel,
                                   Ftm_Ftm_Ip_EdgeNotifType edgeNotif)
{

    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];
    Ftm_Pwm_Ip_ChannelModeType chMode;

#if (FTM_PWM_IP_DEV_ERROR_DETECT == STD_ON)
    DevAssert(instance < FTM_PWM_INSTANCE_COUNT);
    DevAssert(channel < FTM_PWM_CHANNEL_COUNT);
#endif

    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_05();

    /* Clear notification type of given channel in global array to prepare writing new value */
    Ftm_Pwm_Ip_NotifIrq[instance][channel] &= (uint8)(~(uint32)(FTM_PWM_CHF_IRQ_EDGE | FTM_PWM_TOF_IRQ_EDGE));

    /* Clear match-compare interrupt flag of given channel */
    Ftm_Pwm_Ip_ClearChnEventFlag(ftmBase, channel);

    /* Clear time-overflow interrupt flag of given channel */
    Ftm_Pwm_Ip_ClearTimerOverflow(ftmBase);

    /* Get mode of channel*/
    chMode = (Ftm_Pwm_Ip_ChannelModeType)Ftm_Pwm_Ip_GetChannelMode(ftmBase, channel);

    if ((FTM_PWM_MODE_EDGE_ALIGNED_HIGH   == chMode) ||
        (FTM_PWM_MODE_EDGE_ALIGNED_LOW    == chMode) ||
        (FTM_PWM_MODE_CENTER_ALIGNED_HIGH == chMode) ||
        (FTM_PWM_MODE_CENTER_ALIGNED_LOW  == chMode))
    {
        Ftm_Pwm_Ip_UpdateNotificationState(instance, channel, edgeNotif);
    }
    else
    {
        Ftm_Pwm_Ip_UpdateNotificationStateCombine(instance, channel, edgeNotif);
    }

    /* If duty cycle is not 0% and 100% */
    if ((0U != Ftm_Pwm_Ip_DutyCycle[instance][channel]) &&
        (Ftm_Pwm_Ip_Period[instance] != Ftm_Pwm_Ip_DutyCycle[instance][channel]))
    {
        Ftm_Pwm_Ip_SetNormalNotificationCase(instance, channel);
    }
    else
    {
        /* Mark channel as notification disabled */
        Ftm_Pwm_Ip_NotifIrq[instance][channel] |= FTM_PWM_IRQ_NO_EDGE_NOTIF;
        /* Disable interrupt for given channel */
        Ftm_Pwm_Ip_DisableCmpIrq(instance, channel);
    }

    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_05();

}


/**
 *
 * Function Name : Ftm_Pwm_Ip_SetPowerState
 * Description   : The function shall disable or enable the Ftm instance clock based on the powerState parameter.
 *
 * @implements Ftm_Pwm_Ip_SetPowerState_Activity
 **/
void Ftm_Pwm_Ip_SetPowerState(uint8 instance,
                              Ftm_Pwm_Ip_PowerStateType powerState)
{
    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];
    
#if (FTM_PWM_IP_DEV_ERROR_DETECT == STD_ON)
    DevAssert(instance < FTM_PWM_INSTANCE_COUNT);
#endif

    if (FTM_PWM_LOW_POWER == powerState)
    {
        /* Disable counter clock */
        Ftm_Pwm_Ip_SetClockSource(ftmBase, FTM_PWM_CLOCK_SOURCE_NONE);
    }
    else
    {
        Ftm_Pwm_Ip_SetClockSource(ftmBase, Ftm_Pwm_Ip_ClockSource[instance]);
    }
}


/**
 *
 * Function Name : Ftm_Pwm_Ip_SetClockMode
 * Description   : This function sets the prescaler depending on the value ePrescaler parameter.
 *
 * @implements Ftm_Pwm_Ip_SetClockMode_Activity
 **/
void Ftm_Pwm_Ip_SetClockMode(uint8 instance,
                             Ftm_Pwm_Ip_PrescalerType prescaler)
{
    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];
    
#if (FTM_PWM_IP_DEV_ERROR_DETECT == STD_ON)
    DevAssert(instance < FTM_PWM_INSTANCE_COUNT);
#endif

    if (FTM_PWM_ALTERNATIVE_PRESCALER == prescaler)
    {
        Ftm_Pwm_Ip_SetClockPs(ftmBase, Ftm_Pwm_Ip_AlternateClockPrescaler[instance]);
    }
    else
    {
        Ftm_Pwm_Ip_SetClockPs(ftmBase, Ftm_Pwm_Ip_ClockPrescaler[instance]);
    }
}


/**
 *
 * Function Name : Ftm_Pwm_Ip_ResetCounter
 * Description   : This function endabel/disabled counter reset by Pwm_SyncUpdate() call
 *
 * @implements Ftm_Pwm_Ip_ResetCounter_Activity
 **/
void Ftm_Pwm_Ip_ResetCounter(uint8 instance,
                             boolean isResetCnt)
{
    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];

#if (FTM_PWM_IP_DEV_ERROR_DETECT == STD_ON)
    DevAssert(instance < FTM_PWM_INSTANCE_COUNT);
#endif

    Ftm_Pwm_Ip_SetCounterSoftwareSyncModeCmd(ftmBase, isResetCnt);

}


/**
 *
 * Function Name : Ftm_Pwm_Ip_GetChannelState
 * Description   : The function shall return the duty cycle value of the selected channel.
 *
 * @implements  Ftm_Pwm_Ip_GetChannelState_Activity
 **/
uint16 Ftm_Pwm_Ip_GetChannelState(uint8 instance, uint8 channel)
{
    uint16 dutyCycle;
    
#if (FTM_PWM_IP_DEV_ERROR_DETECT == STD_ON)
    DevAssert(instance < FTM_PWM_INSTANCE_COUNT);
    DevAssert(channel < FTM_PWM_CHANNEL_COUNT);
#endif
    dutyCycle = Ftm_Pwm_Ip_DutyCycle[instance][channel];

    return dutyCycle;
}


/**
 *
 * Function Name : Ftm_Pwm_Ip_FastUpdatePwmDuty
 * Description   : This function will update the duty cycle of PWM output for multiple channels.
 *
 * @implements Ftm_Pwm_Ip_FastUpdatePwmDuty_Activity
 **/
void Ftm_Pwm_Ip_FastUpdatePwmDuty(uint8 instance,
                                  uint8 numberOfChannels,
                                  const uint8 * channels,
                                  const uint16 * duty,
                                  boolean softwareTrigger)
{

    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];
    uint8 index;

#if (FTM_PWM_IP_DEV_ERROR_DETECT == STD_ON)
    DevAssert(instance < FTM_PWM_INSTANCE_COUNT);
    DevAssert(numberOfChannels <= FTM_PWM_CHANNEL_COUNT);
#endif
    for (index = 0U; index < numberOfChannels; index++)
    {
        Ftm_Pwm_Ip_SetChnCountVal(ftmBase, channels[index], duty[index]);
        Ftm_Pwm_Ip_DutyCycle[instance][channels[index]] = duty[index];
    }

    Ftm_Pwm_Ip_SetSoftwareTriggerCmd(ftmBase, softwareTrigger);
}


 /**
 *
 * Function Name : Ftm_Pwm_Ip_MaskOutputChannels
 * Description   : This function will mask the output of the channels and at match
 * events will be ignored by the masked channels.
 *
 * @implements Ftm_Pwm_Ip_MaskOutputChannels_Activity
 */
void Ftm_Pwm_Ip_MaskOutputChannels(uint8 instance,
                                   uint32 channelsMask,
                                   boolean softwareTrigger)
{
    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];
#if (FTM_PWM_IP_DEV_ERROR_DETECT == STD_ON)
    DevAssert(instance < FTM_PWM_INSTANCE_COUNT);
#endif

    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_07();

    Ftm_Pwm_Ip_SetOutmaskReg(ftmBase, channelsMask);
    Ftm_Pwm_Ip_SetSoftwareTriggerCmd(ftmBase, softwareTrigger);

    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_07();
}


/**
 *
 * Function Name : Ftm_Pwm_Ip_UnMaskOutputChannels
 * Description   : This function will unmask the output of the channels and at match
 * events will be ignored by the masked channels.
 *
 * @implements Ftm_Pwm_Ip_UnMaskOutputChannels_Activity
 **/
void Ftm_Pwm_Ip_UnMaskOutputChannels(uint8 instance,
                                     uint32 channelsMask,
                                     boolean softwareTrigger)
{
    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];
#if (FTM_PWM_IP_DEV_ERROR_DETECT == STD_ON)
    DevAssert(instance < FTM_PWM_INSTANCE_COUNT);
#endif

    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_08();

    Ftm_Pwm_Ip_ClearOutmaskReg(ftmBase, channelsMask);
    Ftm_Pwm_Ip_SetSoftwareTriggerCmd(ftmBase, softwareTrigger);

    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_08();
}


/**
 *
 * Function Name : Ftm_Pwm_Ip_SetPhaseShift
 * Description   : The function shall set phase shift, update the period and set duty cycle to 50% value immediately or synchronized.
 *
 * @implements  Ftm_Pwm_Ip_SetPhaseShift_Activity
 **/
void Ftm_Pwm_Ip_SetPhaseShift(uint8 instance,
                              uint8 channel,
                              uint16 period,
                              uint16 phaseShift,
                              boolean softwareTrigger)
{
    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];
    uint8 pairChId;
    uint16 dutyCycleVal;
#if (FTM_PWM_IP_DEV_ERROR_DETECT == STD_ON)
    Ftm_Pwm_Ip_ChannelModeType chMode;
    uint16  CnVValue = 0U;
    boolean checkChMode = TRUE;
    boolean retVal = TRUE;

    DevAssert(instance < FTM_PWM_INSTANCE_COUNT);
    DevAssert(channel < FTM_PWM_CHANNEL_COUNT);
    
    chMode = (Ftm_Pwm_Ip_ChannelModeType)Ftm_Pwm_Ip_GetChannelMode(ftmBase, channel);
    
    if (( FTM_PWM_MODE_COMBINE_HIGH          != chMode) &&
#if (defined(FTM_PWM_HAS_MODIFIED_COMBINE_MODE) && (FTM_PWM_HAS_MODIFIED_COMBINE_MODE == STD_ON))
        ( FTM_PWM_MODE_MODIFIED_COMBINE_HIGH != chMode) &&
        ( FTM_PWM_MODE_MODIFIED_COMBINE_LOW  != chMode) &&
#endif
        ( FTM_PWM_MODE_COMBINE_LOW           != chMode))
    {
        checkChMode = FALSE;
    }
    DevAssert(checkChMode != FALSE);
    
    CnVValue = phaseShift + (uint16)(period >> 1U);
    if ((CnVValue <= phaseShift) || (period <= CnVValue))
    {
        retVal = FALSE;
    }
    DevAssert(retVal != FALSE);
#endif
    pairChId = channel >> 1U;
    Ftm_Pwm_Ip_Period[instance] = period;

    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_09();

    if (FTM_PWM_CENTER_ALIGNED == Ftm_Pwm_Ip_GetCpwms(ftmBase))
    {
        /* For Center Aligned mode MOD register should be divided by 2. Period is 2 * (MOD − CNTIN) */
        Ftm_Pwm_Ip_SetMod(ftmBase, (uint16)(period >> 1U));
    }
    else
    {
        /* For Edge Aligned mode period is determined by: MOD-CNTIN+1 */
        Ftm_Pwm_Ip_SetMod(ftmBase, (uint16)(period - 1U));
    }

    Ftm_Pwm_Ip_SetChnCountVal(ftmBase, (uint8)(pairChId * 2U), phaseShift);

    /* Fix duty cycle to 50% */
    dutyCycleVal = (uint16)(period >> 1U);
    
    Ftm_Pwm_Ip_DutyCycle[instance][channel] = dutyCycleVal;
    /* Write C(n+1)V register */
    Ftm_Pwm_Ip_SetChnCountVal(ftmBase, (uint8)((pairChId * 2U) + 1U), (phaseShift + dutyCycleVal));

    Ftm_Pwm_Ip_SetSoftwareTriggerCmd(ftmBase, softwareTrigger);

    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_09();
}


/**
* @brief        This function set phase shift and duty cycle value (as immediate or synchronized base on API parameter SyncUpdate)
*
* @details      Ftm_Pwm_Ip_SetDutyPhaseShift allows to set both phase shift and duty cycle value,
*               The phase shift is the offset of the leading edge of the signal in respect to period starting point.
*
* @param[in]    dutyCycle               Pwm duty cycle value in ticks
* @param[in]    phaseShift              Phase shift value (in ticks)
* @param[in]    boolean                 syncUpdate
*                      TRUE             Set the phase shift and duty cycle value base on the synchronization when calling Pwm_SyncUpdate.
*                      FALSE            Set phase shift and duty cycle value immediately
*
* @return       void
* @implements   Ftm_Pwm_Ip_SetDutyPhaseShift_Activity
*/
void Ftm_Pwm_Ip_SetDutyPhaseShift(uint8 instance,
                                  uint8 channel,
                                  uint16 dutyCycle,
                                  uint16 phaseShift,
                                  boolean syncUpdate)
{

    uint16 firstEdge;
    uint16 secondEdgeEdge;
    uint8 pairId;
    boolean softwareTrigger ;
#if (FTM_PWM_IP_DEV_ERROR_DETECT == STD_ON)
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];
    Ftm_Pwm_Ip_ChannelModeType chMode;
    uint16  CnVValue = 0U;
    boolean checkChMode = TRUE;
    boolean retVal = TRUE;

    DevAssert(instance < FTM_PWM_INSTANCE_COUNT);
    DevAssert(channel < FTM_PWM_CHANNEL_COUNT);
    
    chMode = (Ftm_Pwm_Ip_ChannelModeType)Ftm_Pwm_Ip_GetChannelMode(ftmBase, channel);
    
    if (( FTM_PWM_MODE_COMBINE_HIGH          != chMode) &&
#if (defined(FTM_PWM_HAS_MODIFIED_COMBINE_MODE) && (FTM_PWM_HAS_MODIFIED_COMBINE_MODE == STD_ON))
        ( FTM_PWM_MODE_MODIFIED_COMBINE_HIGH != chMode) &&
        ( FTM_PWM_MODE_MODIFIED_COMBINE_LOW  != chMode) &&
#endif
        ( FTM_PWM_MODE_COMBINE_LOW           != chMode))
    {
        checkChMode = FALSE;
    }
    DevAssert(checkChMode != FALSE);
    
    if ((Ftm_Pwm_Ip_Period[instance] != dutyCycle) && (0U != dutyCycle))
    {
        CnVValue = phaseShift + dutyCycle;
        if ((CnVValue <= phaseShift) || (Ftm_Pwm_Ip_Period[instance] <= CnVValue))
        {
            retVal = FALSE;
        }
    }
    DevAssert(retVal != FALSE);
#endif
    pairId = channel >> 1U;

    Ftm_Pwm_Ip_PhaseShift[instance][pairId] = phaseShift;
    
    Ftm_Pwm_Ip_DutyCycle[instance][channel] = dutyCycle;

    if(0U == phaseShift)
    {
        firstEdge = 1U;
    }
    else
    {
        firstEdge = phaseShift;
    }

    secondEdgeEdge = Ftm_Pwm_Ip_CalculatePhaseShift(instance, dutyCycle, phaseShift);

    if (TRUE == syncUpdate)
    {
        softwareTrigger = FALSE;
    }
    else
    {
        softwareTrigger = TRUE;
    }

    /* Write CV registers and setup duty cycle and phase values */
    (void)Ftm_Pwm_Ip_UpdatePwmChannel(instance,
                                      channel,
                                      firstEdge,
                                      secondEdgeEdge,
                                      softwareTrigger);
}


/**
*
* @brief        The function shall disable the trigger generation for the selected sources.
* @details      Corresponding bits with trigger source as bellow:
*
* @implements Ftm_Pwm_Ip_DisableTrigger_Activity
**/
void  Ftm_Pwm_Ip_DisableTrigger(uint8 instance,
                                uint32 triggerMask)
{

    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];
#if (FTM_PWM_IP_DEV_ERROR_DETECT == STD_ON)
    DevAssert(instance < FTM_PWM_INSTANCE_COUNT);
#endif
    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_10();

    Ftm_Pwm_Ip_DisableTriggerMask(ftmBase, triggerMask);

    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_10();
}


/**
*
* @brief        The function shall enable the trigger generation for the selected sources.
* @details      Corresponding bits with trigger source as bellow:
*
* @implements Ftm_Pwm_Ip_EnableTrigger_Activity
**/
void  Ftm_Pwm_Ip_EnableTrigger(uint8 instance,
                               uint32 triggerMask)
{

    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];
#if (FTM_PWM_IP_DEV_ERROR_DETECT == STD_ON)
    DevAssert(instance < FTM_PWM_INSTANCE_COUNT);
#endif
    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_11();

    Ftm_Pwm_Ip_EnableTriggerMask(ftmBase, triggerMask);

    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_11();
}


/**
 *
 * Function Name : Ftm_Pwm_Ip_SyncUpdate
 * Description   : This function will allow synchronized loading
 *                of the duty registers for all the channels of a given FTM module
 * @implements Ftm_Pwm_Ip_SyncUpdate_Activity
 **/
void Ftm_Pwm_Ip_SyncUpdate(uint8 instance)
{
    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];
#if (FTM_PWM_IP_DEV_ERROR_DETECT == STD_ON)
    DevAssert(instance < FTM_PWM_INSTANCE_COUNT);
#endif
    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_12();

    Ftm_Pwm_Ip_SetSoftwareTriggerCmd(ftmBase, TRUE);

    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_12();
}


/**
 *
 * Function Name : Ftm_Pwm_Ip_SetChannelDeadTime
 * Description   : The function shall update the dead time at runtime for the selected channel.
 *
 * @implements Ftm_Pwm_Ip_SetChannelDeadTime_Activity
 **/
void Ftm_Pwm_Ip_SetChannelDeadTime(uint8 instance,
                                   uint8 channel,
                                   uint16 deadTimeVal)
{
    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];
#if (FTM_PWM_IP_DEV_ERROR_DETECT == STD_ON)

    DevAssert(instance < FTM_PWM_INSTANCE_COUNT);
    DevAssert(channel < FTM_PWM_CHANNEL_COUNT);
    DevAssert(TRUE == Ftm_Pwm_Ip_GetDualChnCompCmd(ftmBase, channel));
    DevAssert(TRUE == Ftm_Pwm_Ip_GetDualChnDeadtimeCmd(ftmBase, channel));
    DevAssert(TRUE == Ftm_Pwm_Ip_ValidateParamDeadTime(instance, channel, deadTimeVal));
   
#else
    (void)channel;
#endif

    SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_13();

    if (deadTimeVal < 64U)
    {   /* Set the Deadtime Value */
        Ftm_Pwm_Ip_SetDeadtimeCount(ftmBase, (uint8)deadTimeVal);
        /* Set the Extended Deadtime Value */
        Ftm_Pwm_Ip_SetExtDeadtimeValue(ftmBase, 0U);
    }
    else
    {
        /* Set the Deadtime Value */
        Ftm_Pwm_Ip_SetDeadtimeCount (ftmBase, (uint8)(deadTimeVal & (uint8)0x3F));
        /* Set the Extended Deadtime Value */
        Ftm_Pwm_Ip_SetExtDeadtimeValue(ftmBase, (uint8)(deadTimeVal >> 6U));
    }

    SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_13();
}

#define PWM_STOP_SEC_CODE
#include "Pwm_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
