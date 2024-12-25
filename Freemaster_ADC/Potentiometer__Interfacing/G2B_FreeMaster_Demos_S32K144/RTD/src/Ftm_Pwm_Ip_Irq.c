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
*     @file
*
*     @addtogroup ftm_ip IPL Driver
*     @{
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
#include "Ftm_Pwm_Ip_Irq.h"
#include "Ftm_Pwm_Ip_HwAccess.h"
#include "Mcal.h"
/*==================================================================================================
*                                SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define FTM_PWM_IP_IRQ_VENDOR_ID_C                      43
#define FTM_PWM_IP_IRQ_MODULE_ID_C                      121
#define FTM_PWM_IP_IRQ_AR_RELEASE_MAJOR_VERSION_C       4
#define FTM_PWM_IP_IRQ_AR_RELEASE_MINOR_VERSION_C       4
#define FTM_PWM_IP_IRQ_AR_RELEASE_REVISION_VERSION_C    0
#define FTM_PWM_IP_IRQ_SW_MAJOR_VERSION_C               1
#define FTM_PWM_IP_IRQ_SW_MINOR_VERSION_C               0
#define FTM_PWM_IP_IRQ_SW_PATCH_VERSION_C               0

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
/* Check if source file and Ftm_Pwm_Ip_Irq.h header file are of the same vendor */
#if (FTM_PWM_IP_IRQ_VENDOR_ID_C != FTM_PWM_IP_IRQ_VENDOR_ID)
    #error "Vendor IDs of Ftm_Pwm_Ip_Irq.c and Ftm_Pwm_Ip_Irq.h are different."
#endif

/* Check if source file and Ftm_Pwm_Ip_Irq.h header file are of the same AUTOSAR version */
#if ((FTM_PWM_IP_IRQ_AR_RELEASE_MAJOR_VERSION_C    != FTM_PWM_IP_IRQ_AR_RELEASE_MAJOR_VERSION) || \
     (FTM_PWM_IP_IRQ_AR_RELEASE_MINOR_VERSION_C    != FTM_PWM_IP_IRQ_AR_RELEASE_MINOR_VERSION) || \
     (FTM_PWM_IP_IRQ_AR_RELEASE_REVISION_VERSION_C != FTM_PWM_IP_IRQ_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR version numbers of Ftm_Pwm_Ip_Irq.c and Ftm_Pwm_Ip_Irq.h are different."
#endif

/* Check if header file and Ftm_Pwm_Ip_Irq.h header file are of the same software version */
#if ((FTM_PWM_IP_IRQ_SW_MAJOR_VERSION_C != FTM_PWM_IP_IRQ_SW_MAJOR_VERSION) || \
     (FTM_PWM_IP_IRQ_SW_MINOR_VERSION_C != FTM_PWM_IP_IRQ_SW_MINOR_VERSION) || \
     (FTM_PWM_IP_IRQ_SW_PATCH_VERSION_C != FTM_PWM_IP_IRQ_SW_PATCH_VERSION))
    #error "Software version numbers of Ftm_Pwm_Ip_Irq.c and Ftm_Pwm_Ip_Irq.h are different."
#endif


/* Check if source file and Ftm_Pwm_Ip_HwAccess.h header file are of the same vendor */
#if (FTM_PWM_IP_IRQ_VENDOR_ID_C != FTM_PWM_IP_HWACCESS_VENDOR_ID)
    #error "Vendor IDs of Ftm_Pwm_Ip_Irq.c and Ftm_Pwm_Ip_HwAccess.h are different."
#endif

/* Check if source file and Ftm_Pwm_Ip_HwAccess.h header file are of the same AUTOSAR version */
#if ((FTM_PWM_IP_IRQ_AR_RELEASE_MAJOR_VERSION_C    != FTM_PWM_IP_HWACCESS_AR_RELEASE_MAJOR_VERSION) || \
     (FTM_PWM_IP_IRQ_AR_RELEASE_MINOR_VERSION_C    != FTM_PWM_IP_HWACCESS_AR_RELEASE_MINOR_VERSION) || \
     (FTM_PWM_IP_IRQ_AR_RELEASE_REVISION_VERSION_C != FTM_PWM_IP_HWACCESS_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR version numbers of Ftm_Pwm_Ip_Irq.c and Ftm_Pwm_Ip_HwAccess.h are different."
#endif

/* Check if header file and Ftm_Pwm_Ip_HwAccess.h header file are of the same software version */
#if ((FTM_PWM_IP_IRQ_SW_MAJOR_VERSION_C != FTM_PWM_IP_HWACCESS_SW_MAJOR_VERSION) || \
     (FTM_PWM_IP_IRQ_SW_MINOR_VERSION_C != FTM_PWM_IP_HWACCESS_SW_MINOR_VERSION) || \
     (FTM_PWM_IP_IRQ_SW_PATCH_VERSION_C != FTM_PWM_IP_HWACCESS_SW_PATCH_VERSION))
    #error "Software version numbers of Ftm_Pwm_Ip_Irq.c and Ftm_Pwm_Ip_HwAccess.h are different."
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if source file and Mcal.h are of the same AUTOSAR version */
    #if ((FTM_PWM_IP_IRQ_AR_RELEASE_MAJOR_VERSION_C != MCAL_AR_RELEASE_MAJOR_VERSION) || \
         (FTM_PWM_IP_IRQ_AR_RELEASE_MINOR_VERSION_C != MCAL_AR_RELEASE_MINOR_VERSION))
        #error "AUTOSAR version numbers of Ftm_Pwm_Ip_Irq.c and Mcal.h are different."
    #endif
#endif
/*==================================================================================================
*                                        GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL VARIABLES
==================================================================================================*/
#define PWM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Pwm_MemMap.h"

/*! @brief Arrays to store the type of notification for each channel */
extern Ftm_Pwm_Ip_EdgeInterruptType Ftm_Pwm_Ip_NotifIrq[FTM_PWM_IRQS_ARR_COUNT][FTM_PWM_CHANNEL_IRQ_COUNT];

 /*! @brief Arrays for irq overflow timer notifications of each instance */
extern Ftm_Pwm_Ip_CallbackCfgType Ftm_Pwm_Ip_pOverflowIrqCallback[FTM_PWM_IRQS_ARR_COUNT];

/*! @brief Arrays for irq channel notifications of each channel*/
extern Ftm_Pwm_Ip_CallbackCfgType Ftm_Pwm_Ip_aChIrqCallbacks[FTM_PWM_IRQS_ARR_COUNT][FTM_PWM_CHANNEL_IRQ_COUNT];

#if (defined(FTM_PWM_HAS_FAULT) && (FTM_PWM_HAS_FAULT == STD_ON))
/*! @brief Arrays for irq fault notifications */
extern Ftm_Pwm_Ip_FaultCallbackType Ftm_Pwm_Ip_pFaultIrqCallback[FTM_PWM_IRQS_ARR_COUNT][FTM_FAULT_NUMBER_CHANNELS];
#endif

#define PWM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Pwm_MemMap.h"

#define PWM_START_SEC_VAR_CLEARED_8
#include "Pwm_MemMap.h"

#ifdef ERR_IPV_FTM_ERR010856
#if ((STD_ON == ERR_IPV_FTM_ERR010856) && (STD_ON == FTM_PWM_HAS_FAULT))
/* A variable to indicate that a fault was detected or not.*/
extern uint8 Ftm_Pwm_Ip_FaultCheck;
#endif
#endif

#define PWM_STOP_SEC_VAR_CLEARED_8
#include "Pwm_MemMap.h"
/*==================================================================================================
*                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#if ((defined FTM_PWM_0_ISR_USED) || (defined FTM_PWM_1_ISR_USED) \
     || (defined FTM_PWM_0_OVF_ISR_USED) || (defined FTM_PWM_1_OVF_ISR_USED) || (defined FTM_PWM_2_OVF_ISR_USED) || (defined FTM_PWM_3_OVF_ISR_USED) \
     || (defined FTM_PWM_4_OVF_ISR_USED) || (defined FTM_PWM_5_OVF_ISR_USED) || (defined FTM_PWM_6_OVF_ISR_USED) || (defined FTM_PWM_7_OVF_ISR_USED))
static void Ftm_Pwm_Ip_ProcessTofInterrupt(uint8 instance);
#endif

#if ((defined FTM_PWM_0_ISR_USED) || (defined FTM_PWM_1_ISR_USED) || \
    (defined FTM_PWM_0_CH_0_CH_1_ISR_USED) || (defined FTM_PWM_0_CH_2_CH_3_ISR_USED) || (defined FTM_PWM_0_CH_4_CH_5_ISR_USED) || (defined FTM_PWM_0_CH_6_CH_7_ISR_USED) || \
    (defined FTM_PWM_1_CH_0_CH_1_ISR_USED) || (defined FTM_PWM_1_CH_2_CH_3_ISR_USED) || (defined FTM_PWM_1_CH_4_CH_5_ISR_USED) || (defined FTM_PWM_1_CH_6_CH_7_ISR_USED) || \
    (defined FTM_PWM_2_CH_0_CH_1_ISR_USED) || (defined FTM_PWM_2_CH_2_CH_3_ISR_USED) || (defined FTM_PWM_2_CH_4_CH_5_ISR_USED) || (defined FTM_PWM_2_CH_6_CH_7_ISR_USED) || \
    (defined FTM_PWM_3_CH_0_CH_1_ISR_USED) || (defined FTM_PWM_3_CH_2_CH_3_ISR_USED) || (defined FTM_PWM_3_CH_4_CH_5_ISR_USED) || (defined FTM_PWM_3_CH_6_CH_7_ISR_USED) || \
    (defined FTM_PWM_4_CH_0_CH_1_ISR_USED) || (defined FTM_PWM_4_CH_2_CH_3_ISR_USED) || (defined FTM_PWM_4_CH_4_CH_5_ISR_USED) || (defined FTM_PWM_4_CH_6_CH_7_ISR_USED) || \
    (defined FTM_PWM_5_CH_0_CH_1_ISR_USED) || (defined FTM_PWM_5_CH_2_CH_3_ISR_USED) || (defined FTM_PWM_5_CH_4_CH_5_ISR_USED) || (defined FTM_PWM_5_CH_6_CH_7_ISR_USED) || \
    (defined FTM_PWM_6_CH_0_CH_1_ISR_USED) || (defined FTM_PWM_6_CH_2_CH_3_ISR_USED) || (defined FTM_PWM_6_CH_4_CH_5_ISR_USED) || (defined FTM_PWM_6_CH_6_CH_7_ISR_USED) || \
    (defined FTM_PWM_7_CH_0_CH_1_ISR_USED) || (defined FTM_PWM_7_CH_2_CH_3_ISR_USED) || (defined FTM_PWM_7_CH_4_CH_5_ISR_USED) || (defined FTM_PWM_7_CH_6_CH_7_ISR_USED))
static void Ftm_Pwm_Ip_ProcessCommonInterrupt(uint8 instance, uint8 hwChannel);
#endif

#if ((defined FTM_PWM_0_FAULT_ISR_USED) || (defined FTM_PWM_1_FAULT_ISR_USED) || (defined FTM_PWM_2_FAULT_ISR_USED) || (defined FTM_PWM_3_FAULT_ISR_USED) \
     || (defined FTM_PWM_4_FAULT_ISR_USED) || (defined FTM_PWM_5_FAULT_ISR_USED) || (defined FTM_PWM_6_FAULT_ISR_USED) || (defined FTM_PWM_7_FAULT_ISR_USED))
static void Ftm_Pwm_Ip_ProcessFaultInterrupt(uint8 instance, uint8 faultId);
#endif

/*==================================================================================================
*                                        LOCAL FUNCTIONS
==================================================================================================*/
#define PWM_START_SEC_CODE
#include "Pwm_MemMap.h"

#if ((defined FTM_PWM_0_ISR_USED) || (defined FTM_PWM_1_ISR_USED) \
     || (defined FTM_PWM_0_OVF_ISR_USED) || (defined FTM_PWM_1_OVF_ISR_USED) || (defined FTM_PWM_2_OVF_ISR_USED) || (defined FTM_PWM_3_OVF_ISR_USED) \
     || (defined FTM_PWM_4_OVF_ISR_USED) || (defined FTM_PWM_5_OVF_ISR_USED) || (defined FTM_PWM_6_OVF_ISR_USED) || (defined FTM_PWM_7_OVF_ISR_USED))

#ifdef ERR_IPV_FTM_ERR010856
#if ((STD_ON == ERR_IPV_FTM_ERR010856) && (STD_ON == FTM_PWM_HAS_FAULT))
static void Ftm_Pwm_Ip_ProcessErrata(uint8 instance)
{
    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];
    boolean faultStatus = Ftm_Pwm_Ip_GetFaultDetectionFlag(ftmBase);
    uint32 temRegVal;

    if (TRUE == faultStatus)
    {  
        /* Set a variable to indicate that a fault was detected */
        Ftm_Pwm_Ip_FaultCheck |= (uint8)1U << instance;
        /* Get FTM_OUTMASK register that were set in last notification */
        temRegVal = (uint32)Ftm_Pwm_Ip_GetSoftwareOutputControl(ftmBase);
        /* Clear the FTM_OUTMASK bits that were set in last notification */
        temRegVal |= (uint32)Ftm_Pwm_Ip_GetOutputMask(ftmBase);
        /* Write the FTM_OUTMASK register to set the bit or bits corresponding to any channels that
           are controlled by FTM_SWOCTRL to temporarily inactivate the channel output. */
        Ftm_Pwm_Ip_SetOutmaskReg(ftmBase, temRegVal);
        /* Clear fault conditions by reading the FTM_FMS register and then writing FTM_FMS with all zeroes.*/
        temRegVal = Ftm_Pwm_Ip_GetFaultModeStatus(ftmBase);
        Ftm_Pwm_Ip_SetFaultModeStatus(ftmBase, (uint32)0U);
        /* Set SWSYNC to synchronize */
        Ftm_Pwm_Ip_SetSoftwareTriggerCmd(ftmBase, TRUE);
    }
    else
    {     
        if ((uint8)0U != (Ftm_Pwm_Ip_FaultCheck & ((uint8)(1U << instance))))
        {
            /* Get FTM_SWOCTRL register  */
            temRegVal = (uint32)Ftm_Pwm_Ip_GetSoftwareOutputControl(ftmBase);
            /* Clear the FTM_SWOCTRL by writing all zeroes to it. */
            Ftm_Pwm_Ip_SoftwareOutputControl(ftmBase, (uint16)0U);
            /* Write FTM_SWOCTRL with the desired value again. */
            Ftm_Pwm_Ip_SoftwareOutputControl(ftmBase, (uint16)temRegVal);
            /* Get FTM_OUTMASK register */
            temRegVal = Ftm_Pwm_Ip_GetOutputMask(ftmBase);
            temRegVal &= (uint32)Ftm_Pwm_Ip_GetSoftwareOutputControl(ftmBase);
            /* Clear the FTM_OUTMASK bits that were set */
            Ftm_Pwm_Ip_ClearOutmaskReg(ftmBase, temRegVal);
            /* Set SWSYNC to synchronize */
            Ftm_Pwm_Ip_SetSoftwareTriggerCmd(ftmBase, TRUE);
            /* Clear the fault variable that was set when the fault condition was originally detected.*/
            Ftm_Pwm_Ip_FaultCheck &= (uint8)~(1U << instance);
        }
    }
}
#endif
#endif
     
/**
 *
 * Function Name : Ftm_Pwm_Ip_ProcessTofInterrupt
 * Description   :
 * @implements Ftm_Pwm_Ip_ProcessTofInterrupt_Activity
 **/
static void Ftm_Pwm_Ip_ProcessTofInterrupt(uint8 instance)
{
    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];

    uint8 toieStatus;
    uint8 tofStatus;
    Ftm_Pwm_Ip_EdgeInterruptType tofState;
    Ftm_Pwm_Ip_EdgeInterruptType tofNoEdgeState;
    uint8 index;

#if (defined (FTM_PWM_IP_NOTIFICATION_SUPPORTED) && (FTM_PWM_IP_NOTIFICATION_SUPPORTED == STD_ON))
    uint8 lgChannelIdx;
    Ftm_Pwm_Ip_ChannelModeType chMode;
#endif

#ifdef ERR_IPV_FTM_ERR010856
#if ((STD_ON == ERR_IPV_FTM_ERR010856) && (STD_ON == FTM_PWM_HAS_FAULT))
    Ftm_Pwm_Ip_ProcessErrata(instance);
#endif
#endif

    /* Get time-overflow enable interrupt status */
    toieStatus = (TRUE == Ftm_Pwm_Ip_IsOverflowIntEnabled(ftmBase))? 0x01U : 0x00U;
    /* Get time-overflow interrupt flag status */
    tofStatus = (TRUE == Ftm_Pwm_Ip_GetTimerOverflow(ftmBase))? 0x01U : 0x00U;
    /* Clear TOF interrupt flag bit */
    Ftm_Pwm_Ip_ClearTimerOverflow(ftmBase);

    if (((uint8)0U != toieStatus) && ((uint8)0U != tofStatus))
    {
        /* Loop all channels in FTM module */
        for (index = (uint8)0U; index < FTM_PWM_CHANNEL_COUNT; index++)
        {
            /* Get state of given channel */
            tofState = (Ftm_Pwm_Ip_NotifIrq[instance][index] & FTM_PWM_TOF_IRQ_EDGE);

            /* Get "time-overflow enable interrupt but not use due to no edge" status of given channel */
            tofNoEdgeState = (Ftm_Pwm_Ip_NotifIrq[instance][index] & FTM_PWM_IRQ_NO_EDGE_NOTIF);

            if ((FTM_PWM_NO_EDGE != tofState) && (FTM_PWM_NO_EDGE == tofNoEdgeState))
            {
#if (defined (FTM_PWM_IP_NOTIFICATION_SUPPORTED) && (FTM_PWM_IP_NOTIFICATION_SUPPORTED == STD_ON))
                              /* Get the mode of channels */
                chMode = (Ftm_Pwm_Ip_ChannelModeType)Ftm_Pwm_Ip_GetChannelMode(ftmBase, index);
                if (( FTM_PWM_MODE_COMBINE_HIGH          != chMode) &&
#if (defined(FTM_PWM_HAS_MODIFIED_COMBINE_MODE) && (FTM_PWM_HAS_MODIFIED_COMBINE_MODE == STD_ON))
                    ( FTM_PWM_MODE_MODIFIED_COMBINE_HIGH != chMode) &&
                    ( FTM_PWM_MODE_MODIFIED_COMBINE_LOW  != chMode) &&
#endif
                    ( FTM_PWM_MODE_COMBINE_LOW           != chMode))
                {
                    lgChannelIdx = (FTM_PWM_CHANNEL_COUNT * instance) + index;
                    (Ftm_Pwm_Ip_pOverflowIrqCallback[instance].functionCallback)(lgChannelIdx);
                }
#else
                if(NULL_PTR != Ftm_Pwm_Ip_pOverflowIrqCallback[instance].functionCallback)
                {
                    (Ftm_Pwm_Ip_pOverflowIrqCallback[instance].functionCallback)(Ftm_Pwm_Ip_pOverflowIrqCallback[instance].cbParam);
                }
#endif    
            }
        }
    }
}
#endif


#if ((defined FTM_PWM_0_ISR_USED) || (defined FTM_PWM_1_ISR_USED) || \
    (defined FTM_PWM_0_CH_0_CH_1_ISR_USED) || (defined FTM_PWM_0_CH_2_CH_3_ISR_USED) || (defined FTM_PWM_0_CH_4_CH_5_ISR_USED) || (defined FTM_PWM_0_CH_6_CH_7_ISR_USED) || \
    (defined FTM_PWM_1_CH_0_CH_1_ISR_USED) || (defined FTM_PWM_1_CH_2_CH_3_ISR_USED) || (defined FTM_PWM_1_CH_4_CH_5_ISR_USED) || (defined FTM_PWM_1_CH_6_CH_7_ISR_USED) || \
    (defined FTM_PWM_2_CH_0_CH_1_ISR_USED) || (defined FTM_PWM_2_CH_2_CH_3_ISR_USED) || (defined FTM_PWM_2_CH_4_CH_5_ISR_USED) || (defined FTM_PWM_2_CH_6_CH_7_ISR_USED) || \
    (defined FTM_PWM_3_CH_0_CH_1_ISR_USED) || (defined FTM_PWM_3_CH_2_CH_3_ISR_USED) || (defined FTM_PWM_3_CH_4_CH_5_ISR_USED) || (defined FTM_PWM_3_CH_6_CH_7_ISR_USED) || \
    (defined FTM_PWM_4_CH_0_CH_1_ISR_USED) || (defined FTM_PWM_4_CH_2_CH_3_ISR_USED) || (defined FTM_PWM_4_CH_4_CH_5_ISR_USED) || (defined FTM_PWM_4_CH_6_CH_7_ISR_USED) || \
    (defined FTM_PWM_5_CH_0_CH_1_ISR_USED) || (defined FTM_PWM_5_CH_2_CH_3_ISR_USED) || (defined FTM_PWM_5_CH_4_CH_5_ISR_USED) || (defined FTM_PWM_5_CH_6_CH_7_ISR_USED) || \
    (defined FTM_PWM_6_CH_0_CH_1_ISR_USED) || (defined FTM_PWM_6_CH_2_CH_3_ISR_USED) || (defined FTM_PWM_6_CH_4_CH_5_ISR_USED) || (defined FTM_PWM_6_CH_6_CH_7_ISR_USED) || \
    (defined FTM_PWM_7_CH_0_CH_1_ISR_USED) || (defined FTM_PWM_7_CH_2_CH_3_ISR_USED) || (defined FTM_PWM_7_CH_4_CH_5_ISR_USED) || (defined FTM_PWM_7_CH_6_CH_7_ISR_USED))
/**
 *
 * Function Name : Ftm_Pwm_Ip_ProcessCommonInterrupt
 * Description   :
 * @implements Ftm_Pwm_Ip_ProcessCommonInterrupt_Activity
 **/
static void Ftm_Pwm_Ip_ProcessCommonInterrupt(uint8 instance,  uint8 hwChannel)
{
    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];
    Ftm_Pwm_Ip_EdgeInterruptType chEdgeState;
    uint8 chieStatus;
    uint8 chfStatus;
#if (defined (FTM_PWM_IP_NOTIFICATION_SUPPORTED) && (FTM_PWM_IP_NOTIFICATION_SUPPORTED == STD_ON))
    uint8 lgChannelIdx;
    Ftm_Pwm_Ip_ChannelModeType chMode;
#endif
    /* Get match-compare enable interrupt status */
    chieStatus = (TRUE == Ftm_Pwm_Ip_IsChnIntEnabled(ftmBase, hwChannel))? 0x01U : 0x00U;
    /* Get match-compare interrupt flag status */
    chfStatus = (TRUE == Ftm_Pwm_Ip_HasChnEventOccurred(ftmBase, hwChannel))? 0x01U : 0x00U;
    /* Get match-compare notification state of given channel */
    chEdgeState =(Ftm_Pwm_Ip_NotifIrq[instance][hwChannel] & FTM_PWM_CHF_IRQ_EDGE);
    /* Clear CHF bit interrupt flag */
    Ftm_Pwm_Ip_ClearChnEventFlag(ftmBase, hwChannel);

    if (((uint8)0U != chieStatus) && ((uint8)0U != chfStatus) && (FTM_PWM_NO_EDGE != chEdgeState))
    {
#if (defined (FTM_PWM_IP_NOTIFICATION_SUPPORTED) && (FTM_PWM_IP_NOTIFICATION_SUPPORTED == STD_ON))
        lgChannelIdx = (FTM_PWM_CHANNEL_COUNT * instance) + hwChannel;

        if ((uint8)1U == (uint8)(hwChannel & 0x01U))
        {
             /* Get the mode of channels */
             chMode = (Ftm_Pwm_Ip_ChannelModeType)Ftm_Pwm_Ip_GetChannelMode(ftmBase, (hwChannel - 1U));
            if (( FTM_PWM_MODE_COMBINE_HIGH     == chMode) ||
#if (defined(FTM_PWM_HAS_MODIFIED_COMBINE_MODE) && (FTM_PWM_HAS_MODIFIED_COMBINE_MODE == STD_ON))
            ( FTM_PWM_MODE_MODIFIED_COMBINE_HIGH == chMode) ||
            ( FTM_PWM_MODE_MODIFIED_COMBINE_LOW  == chMode) ||
#endif
            ( FTM_PWM_MODE_COMBINE_LOW           == chMode))
            {
                (Ftm_Pwm_Ip_pOverflowIrqCallback[instance].functionCallback)(lgChannelIdx - 1U);
            }
            else
            {
                (Ftm_Pwm_Ip_pOverflowIrqCallback[instance].functionCallback)(lgChannelIdx);
            }

        }
        else
        {
            (Ftm_Pwm_Ip_pOverflowIrqCallback[instance].functionCallback)(lgChannelIdx);
        }
#else
        if(NULL_PTR != Ftm_Pwm_Ip_aChIrqCallbacks[instance][hwChannel].functionCallback)
        {
            (Ftm_Pwm_Ip_aChIrqCallbacks[instance][hwChannel].functionCallback)(Ftm_Pwm_Ip_aChIrqCallbacks[instance][hwChannel].cbParam);
        }
#endif

    }
}
#endif


#if ((defined FTM_PWM_0_FAULT_ISR_USED) || (defined FTM_PWM_1_FAULT_ISR_USED) || (defined FTM_PWM_2_FAULT_ISR_USED) || (defined FTM_PWM_3_FAULT_ISR_USED) \
     || (defined FTM_PWM_4_FAULT_ISR_USED) || (defined FTM_PWM_5_FAULT_ISR_USED) || (defined FTM_PWM_6_FAULT_ISR_USED) || (defined FTM_PWM_7_FAULT_ISR_USED))
static void Ftm_Pwm_Ip_ProcessFaultInterrupt(uint8 instance, uint8 faultId)
{
    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instance];
    /* Get fault enable interrupt flag status */
    boolean faultEn = Ftm_Pwm_Ip_IsFaultEnabled(ftmBase);
    /* Get fault interrupt flag status */
    boolean faultStatus = Ftm_Pwm_Ip_GetFaultDetectionFlagId(ftmBase, faultId); 
    /* Clear fault detection flag */
    Ftm_Pwm_Ip_ClearFaultFlagId(ftmBase, faultId);
    
    if (((boolean)TRUE == faultEn) && ((boolean)TRUE == faultStatus))
    {
        if(NULL_PTR != Ftm_Pwm_Ip_pFaultIrqCallback[instance][faultId])
        {
            Ftm_Pwm_Ip_pFaultIrqCallback[instance][faultId]();
        }
    }  
}
#endif

#if (defined FTM_PWM_0_ISR_USED)
ISR(FTM_0_ISR)
{

    uint8 instanceId  = 0U;
    uint8 channeId = 0U;
    uint8 tofStatus;
    uint8 chfStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Get time-overflow interrupt flag status */
    tofStatus = (TRUE == Ftm_Pwm_Ip_GetTimerOverflow(ftmBase))? 0x01U : 0x00U;

    /* Read TOF value and verify if it was an overflow. */
    if (0U != tofStatus )
    {
        Ftm_Pwm_Ip_ProcessTofInterrupt(instanceId);
    }

    /* Verify status for each channel and process interrupt. */
    for (channeId = 0U; channeId < FTM_PWM_CHANNEL_COUNT; channeId++)
    {
        /* Get match-compare interrupt flag status */
        chfStatus = (TRUE == Ftm_Pwm_Ip_HasChnEventOccurred(ftmBase, channeId))? 0x01U : 0x00U;

        if(0U != chfStatus )
        {
            Ftm_Pwm_Ip_ProcessCommonInterrupt(instanceId, channeId);
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_1_ISR_USED)
ISR(FTM_1_ISR)
{

    uint8 instanceId  = 1U;
    uint8 channeId = 0U;
    uint8 tofStatus;
    uint8 chfStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Get time-overflow interrupt flag status */
    tofStatus = (TRUE == Ftm_Pwm_Ip_GetTimerOverflow(ftmBase))? 0x01U : 0x00U;

    /* Read TOF value and verify if it was an overflow. */
    if (0U != tofStatus )
    {
        Ftm_Pwm_Ip_ProcessTofInterrupt(instanceId);
    }

    /* Verify status for each channel and process interrupt. */
    for (channeId = 0U; channeId < FTM_PWM_CHANNEL_COUNT; channeId++)
    {
        /* Get match-compare interrupt flag status */
        chfStatus = (TRUE == Ftm_Pwm_Ip_HasChnEventOccurred(ftmBase, channeId))? 0x01U : 0x00U;

        if(0U != chfStatus )
        {
            Ftm_Pwm_Ip_ProcessCommonInterrupt(instanceId, channeId);
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_0_OVF_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 0 overflow
 */
ISR(FTM_0_OVF_ISR)
{
    uint8 instanceId  = 0U;
    uint8 tofStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Get time-overflow interrupt flag status */
    tofStatus = (TRUE == Ftm_Pwm_Ip_GetTimerOverflow(ftmBase))? 0x01U : 0x00U;

    /* Read TOF value and verify if it was an overflow. */
    if (0U != tofStatus )
    {
        Ftm_Pwm_Ip_ProcessTofInterrupt(instanceId);
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_1_OVF_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 1 overflow
 */
ISR(FTM_1_OVF_ISR)
{
    uint8 instanceId  = 1U;
    uint8 tofStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Get time-overflow interrupt flag status */
    tofStatus = (TRUE == Ftm_Pwm_Ip_GetTimerOverflow(ftmBase))? 0x01U : 0x00U;

    /* Read TOF value and verify if it was an overflow. */
    if (0U != tofStatus )
    {
        Ftm_Pwm_Ip_ProcessTofInterrupt(instanceId);
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_2_OVF_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 2 overflow
 */
ISR(FTM_2_OVF_ISR)
{
    uint8 instanceId  = 2U;
    uint8 tofStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Get time-overflow interrupt flag status */
    tofStatus = (TRUE == Ftm_Pwm_Ip_GetTimerOverflow(ftmBase))? 0x01U : 0x00U;

    /* Read TOF value and verify if it was an overflow. */
    if (0U != tofStatus )
    {
        Ftm_Pwm_Ip_ProcessTofInterrupt(instanceId);
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_3_OVF_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 3 overflow
 */
ISR(FTM_3_OVF_ISR)
{
    uint8 instanceId  = 3U;
    uint8 tofStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Get time-overflow interrupt flag status */
    tofStatus = (TRUE == Ftm_Pwm_Ip_GetTimerOverflow(ftmBase))? 0x01U : 0x00U;

    /* Read TOF value and verify if it was an overflow. */
    if (0U != tofStatus )
    {
        Ftm_Pwm_Ip_ProcessTofInterrupt(instanceId);
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_4_OVF_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 4 overflow
 */
ISR(FTM_4_OVF_ISR)
{
    uint8 instanceId  = 4U;
    uint8 tofStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Get time-overflow interrupt flag status */
    tofStatus = (TRUE == Ftm_Pwm_Ip_GetTimerOverflow(ftmBase))? 0x01U : 0x00U;

    /* Read TOF value and verify if it was an overflow. */
    if (0U != tofStatus )
    {
        Ftm_Pwm_Ip_ProcessTofInterrupt(instanceId);
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_5_OVF_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 5 overflow
 */
ISR(FTM_5_OVF_ISR)
{
    uint8 instanceId  = 5U;
    uint8 tofStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Get time-overflow interrupt flag status */
    tofStatus = (TRUE == Ftm_Pwm_Ip_GetTimerOverflow(ftmBase))? 0x01U : 0x00U;

    /* Read TOF value and verify if it was an overflow. */
    if (0U != tofStatus )
    {
        Ftm_Pwm_Ip_ProcessTofInterrupt(instanceId);
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_6_OVF_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 6 overflow
 */
ISR(FTM_6_OVF_ISR)
{
    uint8 instanceId  = 6U;
    uint8 tofStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Get time-overflow interrupt flag status */
    tofStatus = (TRUE == Ftm_Pwm_Ip_GetTimerOverflow(ftmBase))? 0x01U : 0x00U;

    /* Read TOF value and verify if it was an overflow. */
    if (0U != tofStatus )
    {
        Ftm_Pwm_Ip_ProcessTofInterrupt(instanceId);
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_7_OVF_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 7 overflow
 */
ISR(FTM_7_OVF_ISR)
{
    uint8 instanceId  = 7U;
    uint8 tofStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Get time-overflow interrupt flag status */
    tofStatus = (TRUE == Ftm_Pwm_Ip_GetTimerOverflow(ftmBase))? 0x01U : 0x00U;

    /* Read TOF value and verify if it was an overflow. */
    if (0U != tofStatus )
    {
        Ftm_Pwm_Ip_ProcessTofInterrupt(instanceId);
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_0_CH_0_CH_1_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 0 channel 0 - channel 1.
 */
ISR(FTM_0_CH_0_CH_1_ISR)
{

    uint8 instanceId  = 0U;
    uint8 channeId = 0U;
    uint8 chfStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Verify status for each channel and process interrupt. */
    for (channeId = 0U; channeId < 2U; channeId++)
    {
        /* Get match-compare interrupt flag status */
        chfStatus = (TRUE == Ftm_Pwm_Ip_HasChnEventOccurred(ftmBase, channeId))? 0x01U : 0x00U;

        if(0U != chfStatus )
        {
            Ftm_Pwm_Ip_ProcessCommonInterrupt(instanceId, channeId);
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_0_CH_2_CH_3_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 0 channel 2 - channel 3.
 */
ISR(FTM_0_CH_2_CH_3_ISR)
{

    uint8 instanceId  = 0U;
    uint8 channeId = 2U;
    uint8 chfStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Verify status for each channel and process interrupt. */
    for (channeId = 2U; channeId < 4U; channeId++)
    {
        /* Get match-compare interrupt flag status */
        chfStatus = (TRUE == Ftm_Pwm_Ip_HasChnEventOccurred(ftmBase, channeId))? 0x01U : 0x00U;

        if(0U != chfStatus )
        {
            Ftm_Pwm_Ip_ProcessCommonInterrupt(instanceId, channeId);
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_0_CH_4_CH_5_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 0 channel 4 - channel 5.
 */
ISR(FTM_0_CH_4_CH_5_ISR)
{

    uint8 instanceId  = 0U;
    uint8 channeId = 4U;
    uint8 chfStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Verify status for each channel and process interrupt. */
    for (channeId = 4U; channeId < 6U; channeId++)
    {
        /* Get match-compare interrupt flag status */
        chfStatus = (TRUE == Ftm_Pwm_Ip_HasChnEventOccurred(ftmBase, channeId))? 0x01U : 0x00U;

        if(0U != chfStatus )
        {
            Ftm_Pwm_Ip_ProcessCommonInterrupt(instanceId, channeId);
        }
    }
    EXIT_INTERRUPT();
}

#endif

#if (defined FTM_PWM_0_CH_6_CH_7_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 0 channel 6 - channel 7.
 */
ISR(FTM_0_CH_6_CH_7_ISR)
{

    uint8 instanceId  = 0U;
    uint8 channeId = 6U;
    uint8 chfStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Verify status for each channel and process interrupt. */
    for (channeId = 6U; channeId < 8U; channeId++)
    {
        /* Get match-compare interrupt flag status */
        chfStatus = (TRUE == Ftm_Pwm_Ip_HasChnEventOccurred(ftmBase, channeId))? 0x01U : 0x00U;

        if(0U != chfStatus )
        {
            Ftm_Pwm_Ip_ProcessCommonInterrupt(instanceId, channeId);
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_1_CH_0_CH_1_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 1 channel 0 - channel 1.
 */
ISR(FTM_1_CH_0_CH_1_ISR)
{

    uint8 instanceId  = 1U;
    uint8 channeId = 0U;
    uint8 chfStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Verify status for each channel and process interrupt. */
    for (channeId = 0U; channeId < 2U; channeId++)
    {
        /* Get match-compare interrupt flag status */
        chfStatus = (TRUE == Ftm_Pwm_Ip_HasChnEventOccurred(ftmBase, channeId))? 0x01U : 0x00U;

        if(0U != chfStatus )
        {
            Ftm_Pwm_Ip_ProcessCommonInterrupt(instanceId, channeId);
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_1_CH_2_CH_3_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 1 channel 2 - channel 3.
 */
ISR(FTM_1_CH_2_CH_3_ISR)
{

    uint8 instanceId  = 1U;
    uint8 channeId = 2U;
    uint8 chfStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Verify status for each channel and process interrupt. */
    for (channeId = 2U; channeId < 4U; channeId++)
    {
        /* Get match-compare interrupt flag status */
        chfStatus = (TRUE == Ftm_Pwm_Ip_HasChnEventOccurred(ftmBase, channeId))? 0x01U : 0x00U;

        if(0U != chfStatus )
        {
            Ftm_Pwm_Ip_ProcessCommonInterrupt(instanceId, channeId);
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_1_CH_4_CH_5_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 1 channel 4 - channel 5.
 */
ISR(FTM_1_CH_4_CH_5_ISR)
{

    uint8 instanceId  = 1U;
    uint8 channeId = 4U;
    uint8 chfStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Verify status for each channel and process interrupt. */
    for (channeId = 4U; channeId < 6U; channeId++)
    {
        /* Get match-compare interrupt flag status */
        chfStatus = (TRUE == Ftm_Pwm_Ip_HasChnEventOccurred(ftmBase, channeId))? 0x01U : 0x00U;

        if(0U != chfStatus )
        {
            Ftm_Pwm_Ip_ProcessCommonInterrupt(instanceId, channeId);
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_1_CH_6_CH_7_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 1 channel 6 - channel 7.
 */
ISR(FTM_1_CH_6_CH_7_ISR)
{

    uint8 instanceId  = 1U;
    uint8 channeId = 6U;
    uint8 chfStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Verify status for each channel and process interrupt. */
    for (channeId = 6U; channeId < 8U; channeId++)
    {
        /* Get match-compare interrupt flag status */
        chfStatus = (TRUE == Ftm_Pwm_Ip_HasChnEventOccurred(ftmBase, channeId))? 0x01U : 0x00U;

        if(0U != chfStatus )
        {
            Ftm_Pwm_Ip_ProcessCommonInterrupt(instanceId, channeId);
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_2_CH_0_CH_1_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 2 channel 0 - channel 1.
 */
ISR(FTM_2_CH_0_CH_1_ISR)
{

    uint8 instanceId  = 2U;
    uint8 channeId = 0U;
    uint8 chfStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Verify status for each channel and process interrupt. */
    for (channeId = 0U; channeId < 2U; channeId++)
    {
        /* Get match-compare interrupt flag status */
        chfStatus = (TRUE == Ftm_Pwm_Ip_HasChnEventOccurred(ftmBase, channeId))? 0x01U : 0x00U;

        if(0U != chfStatus )
        {
            Ftm_Pwm_Ip_ProcessCommonInterrupt(instanceId, channeId);
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_2_CH_2_CH_3_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 2 channel 2 - channel 3.
 */
ISR(FTM_2_CH_2_CH_3_ISR)
{

    uint8 instanceId  = 2U;
    uint8 channeId = 2U;
    uint8 chfStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Verify status for each channel and process interrupt. */
    for (channeId = 2U; channeId < 4U; channeId++)
    {
        /* Get match-compare interrupt flag status */
        chfStatus = (TRUE == Ftm_Pwm_Ip_HasChnEventOccurred(ftmBase, channeId))? 0x01U : 0x00U;

        if(0U != chfStatus )
        {
            Ftm_Pwm_Ip_ProcessCommonInterrupt(instanceId, channeId);
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_2_CH_4_CH_5_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 2 channel 4 - channel 5.
 */
ISR(FTM_2_CH_4_CH_5_ISR)
{

    uint8 instanceId  = 2U;
    uint8 channeId = 4U;
    uint8 chfStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Verify status for each channel and process interrupt. */
    for (channeId = 4U; channeId < 6U; channeId++)
    {
        /* Get match-compare interrupt flag status */
        chfStatus = (TRUE == Ftm_Pwm_Ip_HasChnEventOccurred(ftmBase, channeId))? 0x01U : 0x00U;

        if(0U != chfStatus )
        {
            Ftm_Pwm_Ip_ProcessCommonInterrupt(instanceId, channeId);
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_2_CH_6_CH_7_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 2 channel 6 - channel 7.
 */
ISR(FTM_2_CH_6_CH_7_ISR)
{

    uint8 instanceId  = 2U;
    uint8 channeId = 6U;
    uint8 chfStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Verify status for each channel and process interrupt. */
    for (channeId = 6U; channeId < 8U; channeId++)
    {
        /* Get match-compare interrupt flag status */
        chfStatus = (TRUE == Ftm_Pwm_Ip_HasChnEventOccurred(ftmBase, channeId))? 0x01U : 0x00U;

        if(0U != chfStatus )
        {
            Ftm_Pwm_Ip_ProcessCommonInterrupt(instanceId, channeId);
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_3_CH_0_CH_1_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 3 channel 0 - channel 1.
 */
ISR(FTM_3_CH_0_CH_1_ISR)
{

    uint8 instanceId  = 3U;
    uint8 channeId = 0U;
    uint8 chfStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Verify status for each channel and process interrupt. */
    for (channeId = 0U; channeId < 2U; channeId++)
    {
        /* Get match-compare interrupt flag status */
        chfStatus = (TRUE == Ftm_Pwm_Ip_HasChnEventOccurred(ftmBase, channeId))? 0x01U : 0x00U;

        if(0U != chfStatus )
        {
            Ftm_Pwm_Ip_ProcessCommonInterrupt(instanceId, channeId);
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_3_CH_2_CH_3_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 3 channel 2 - channel 3.
 */
ISR(FTM_3_CH_2_CH_3_ISR)
{

    uint8 instanceId  = 3U;
    uint8 channeId = 2U;
    uint8 chfStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Verify status for each channel and process interrupt. */
    for (channeId = 2U; channeId < 4U; channeId++)
    {
        /* Get match-compare interrupt flag status */
        chfStatus = (TRUE == Ftm_Pwm_Ip_HasChnEventOccurred(ftmBase, channeId))? 0x01U : 0x00U;

        if(0U != chfStatus )
        {
            Ftm_Pwm_Ip_ProcessCommonInterrupt(instanceId, channeId);
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_3_CH_4_CH_5_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 3 channel 4 - channel 5.
 */
ISR(FTM_3_CH_4_CH_5_ISR)
{

    uint8 instanceId  = 3U;
    uint8 channeId = 4U;
    uint8 chfStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Verify status for each channel and process interrupt. */
    for (channeId = 4U; channeId < 6U; channeId++)
    {
        /* Get match-compare interrupt flag status */
        chfStatus = (TRUE == Ftm_Pwm_Ip_HasChnEventOccurred(ftmBase, channeId))? 0x01U : 0x00U;

        if(0U != chfStatus )
        {
            Ftm_Pwm_Ip_ProcessCommonInterrupt(instanceId, channeId);
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_3_CH_6_CH_7_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 3 channel 6 - channel 7.
 */
ISR(FTM_3_CH_6_CH_7_ISR)
{

    uint8 instanceId  = 3U;
    uint8 channeId = 6U;
    uint8 chfStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Verify status for each channel and process interrupt. */
    for (channeId = 6U; channeId < 8U; channeId++)
    {
        /* Get match-compare interrupt flag status */
        chfStatus = (TRUE == Ftm_Pwm_Ip_HasChnEventOccurred(ftmBase, channeId))? 0x01U : 0x00U;

        if(0U != chfStatus )
        {
            Ftm_Pwm_Ip_ProcessCommonInterrupt(instanceId, channeId);
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_4_CH_0_CH_1_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 4 channel 0 - channel 1.
 */
ISR(FTM_4_CH_0_CH_1_ISR)
{

    uint8 instanceId  = 4U;
    uint8 channeId = 0U;
    uint8 chfStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Verify status for each channel and process interrupt. */
    for (channeId = 0U; channeId < 2U; channeId++)
    {
        /* Get match-compare interrupt flag status */
        chfStatus = (TRUE == Ftm_Pwm_Ip_HasChnEventOccurred(ftmBase, channeId))? 0x01U : 0x00U;

        if(0U != chfStatus )
        {
            Ftm_Pwm_Ip_ProcessCommonInterrupt(instanceId, channeId);
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_4_CH_2_CH_3_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 4 channel 2 - channel 3.
 */
ISR(FTM_4_CH_2_CH_3_ISR)
{

    uint8 instanceId  = 4U;
    uint8 channeId = 2U;
    uint8 chfStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Verify status for each channel and process interrupt. */
    for (channeId = 2U; channeId < 4U; channeId++)
    {
        /* Get match-compare interrupt flag status */
        chfStatus = (TRUE == Ftm_Pwm_Ip_HasChnEventOccurred(ftmBase, channeId))? 0x01U : 0x00U;

        if(0U != chfStatus )
        {
            Ftm_Pwm_Ip_ProcessCommonInterrupt(instanceId, channeId);
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_4_CH_4_CH_5_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 4 channel 4 - channel 5.
 */
ISR(FTM_4_CH_4_CH_5_ISR)
{

    uint8 instanceId  = 4U;
    uint8 channeId = 4U;
    uint8 chfStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Verify status for each channel and process interrupt. */
    for (channeId = 4U; channeId < 6U; channeId++)
    {
        /* Get match-compare interrupt flag status */
        chfStatus = (TRUE == Ftm_Pwm_Ip_HasChnEventOccurred(ftmBase, channeId))? 0x01U : 0x00U;

        if(0U != chfStatus )
        {
            Ftm_Pwm_Ip_ProcessCommonInterrupt(instanceId, channeId);
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_4_CH_6_CH_7_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 4 channel 6 - channel 7.
 */
ISR(FTM_4_CH_6_CH_7_ISR)
{

    uint8 instanceId  = 4U;
    uint8 channeId = 6U;
    uint8 chfStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Verify status for each channel and process interrupt. */
    for (channeId = 6U; channeId < 8U; channeId++)
    {
        /* Get match-compare interrupt flag status */
        chfStatus = (TRUE == Ftm_Pwm_Ip_HasChnEventOccurred(ftmBase, channeId))? 0x01U : 0x00U;

        if(0U != chfStatus )
        {
            Ftm_Pwm_Ip_ProcessCommonInterrupt(instanceId, channeId);
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_5_CH_0_CH_1_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 5 channel 0 - channel 1.
 */
ISR(FTM_5_CH_0_CH_1_ISR)
{

    uint8 instanceId  = 5U;
    uint8 channeId = 0U;
    uint8 chfStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Verify status for each channel and process interrupt. */
    for (channeId = 0U; channeId < 2U; channeId++)
    {
        /* Get match-compare interrupt flag status */
        chfStatus = (TRUE == Ftm_Pwm_Ip_HasChnEventOccurred(ftmBase, channeId))? 0x01U : 0x00U;

        if(0U != chfStatus )
        {
            Ftm_Pwm_Ip_ProcessCommonInterrupt(instanceId, channeId);
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_5_CH_2_CH_3_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 5 channel 2 - channel 3.
 */
ISR(FTM_5_CH_2_CH_3_ISR)
{

    uint8 instanceId  = 5U;
    uint8 channeId = 2U;
    uint8 chfStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Verify status for each channel and process interrupt. */
    for (channeId = 2U; channeId < 4U; channeId++)
    {
        /* Get match-compare interrupt flag status */
        chfStatus = (TRUE == Ftm_Pwm_Ip_HasChnEventOccurred(ftmBase, channeId))? 0x01U : 0x00U;

        if(0U != chfStatus )
        {
            Ftm_Pwm_Ip_ProcessCommonInterrupt(instanceId, channeId);
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_5_CH_4_CH_5_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 5 channel 4 - channel 5.
 */
ISR(FTM_5_CH_4_CH_5_ISR)
{

    uint8 instanceId  = 5U;
    uint8 channeId = 4U;
    uint8 chfStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Verify status for each channel and process interrupt. */
    for (channeId = 4U; channeId < 6U; channeId++)
    {
        /* Get match-compare interrupt flag status */
        chfStatus = (TRUE == Ftm_Pwm_Ip_HasChnEventOccurred(ftmBase, channeId))? 0x01U : 0x00U;

        if(0U != chfStatus )
        {
            Ftm_Pwm_Ip_ProcessCommonInterrupt(instanceId, channeId);
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_5_CH_6_CH_7_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 5 channel 6 - channel 7.
 */
ISR(FTM_5_CH_6_CH_7_ISR)
{

    uint8 instanceId  = 5U;
    uint8 channeId = 6U;
    uint8 chfStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Verify status for each channel and process interrupt. */
    for (channeId = 6U; channeId < 8U; channeId++)
    {
        /* Get match-compare interrupt flag status */
        chfStatus = (TRUE == Ftm_Pwm_Ip_HasChnEventOccurred(ftmBase, channeId))? 0x01U : 0x00U;

        if(0U != chfStatus )
        {
            Ftm_Pwm_Ip_ProcessCommonInterrupt(instanceId, channeId);
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_6_CH_0_CH_1_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 6 channel 0 - channel 1.
 */
ISR(FTM_6_CH_0_CH_1_ISR)
{

    uint8 instanceId  = 6U;
    uint8 channeId = 0U;
    uint8 chfStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Verify status for each channel and process interrupt. */
    for (channeId = 0U; channeId < 2U; channeId++)
    {
        /* Get match-compare interrupt flag status */
        chfStatus = (TRUE == Ftm_Pwm_Ip_HasChnEventOccurred(ftmBase, channeId))? 0x01U : 0x00U;

        if(0U != chfStatus )
        {
            Ftm_Pwm_Ip_ProcessCommonInterrupt(instanceId, channeId);
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_6_CH_2_CH_3_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 6 channel 2 - channel 3.
 */
ISR(FTM_6_CH_2_CH_3_ISR)
{

    uint8 instanceId  = 6U;
    uint8 channeId = 2U;
    uint8 chfStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Verify status for each channel and process interrupt. */
    for (channeId = 2U; channeId < 4U; channeId++)
    {
        /* Get match-compare interrupt flag status */
        chfStatus = (TRUE == Ftm_Pwm_Ip_HasChnEventOccurred(ftmBase, channeId))? 0x01U : 0x00U;

        if(0U != chfStatus )
        {
            Ftm_Pwm_Ip_ProcessCommonInterrupt(instanceId, channeId);
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_6_CH_4_CH_5_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 6 channel 4 - channel 5.
 */
ISR(FTM_6_CH_4_CH_5_ISR)
{

    uint8 instanceId  = 6U;
    uint8 channeId = 4U;
    uint8 chfStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Verify status for each channel and process interrupt. */
    for (channeId = 4U; channeId < 6U; channeId++)
    {
        /* Get match-compare interrupt flag status */
        chfStatus = (TRUE == Ftm_Pwm_Ip_HasChnEventOccurred(ftmBase, channeId))? 0x01U : 0x00U;

        if(0U != chfStatus )
        {
            Ftm_Pwm_Ip_ProcessCommonInterrupt(instanceId, channeId);
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_6_CH_6_CH_7_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 6 channel 6 - channel 7.
 */
ISR(FTM_6_CH_6_CH_7_ISR)
{

    uint8 instanceId  = 6U;
    uint8 channeId = 6U;
    uint8 chfStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Verify status for each channel and process interrupt. */
    for (channeId = 6U; channeId < 8U; channeId++)
    {
        /* Get match-compare interrupt flag status */
        chfStatus = (TRUE == Ftm_Pwm_Ip_HasChnEventOccurred(ftmBase, channeId))? 0x01U : 0x00U;

        if(0U != chfStatus )
        {
            Ftm_Pwm_Ip_ProcessCommonInterrupt(instanceId, channeId);
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_7_CH_0_CH_1_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 7 channel 0 - channel 1.
 */
ISR(FTM_7_CH_0_CH_1_ISR)
{

    uint8 instanceId  = 7U;
    uint8 channeId = 0U;
    uint8 chfStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Verify status for each channel and process interrupt. */
    for (channeId = 0U; channeId < 2U; channeId++)
    {
        /* Get match-compare interrupt flag status */
        chfStatus = (TRUE == Ftm_Pwm_Ip_HasChnEventOccurred(ftmBase, channeId))? 0x01U : 0x00U;

        if(0U != chfStatus )
        {
            Ftm_Pwm_Ip_ProcessCommonInterrupt(instanceId, channeId);
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_7_CH_2_CH_3_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 7 channel 2 - channel 3.
 */
ISR(FTM_7_CH_2_CH_3_ISR)
{

    uint8 instanceId  = 7U;
    uint8 channeId = 2U;
    uint8 chfStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Verify status for each channel and process interrupt. */
    for (channeId = 2U; channeId < 4U; channeId++)
    {
        /* Get match-compare interrupt flag status */
        chfStatus = (TRUE == Ftm_Pwm_Ip_HasChnEventOccurred(ftmBase, channeId))? 0x01U : 0x00U;

        if(0U != chfStatus )
        {
            Ftm_Pwm_Ip_ProcessCommonInterrupt(instanceId, channeId);
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_7_CH_4_CH_5_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 7 channel 4 - channel 5.
 */
ISR(FTM_7_CH_4_CH_5_ISR)
{

    uint8 instanceId  = 7U;
    uint8 channeId = 4U;
    uint8 chfStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Verify status for each channel and process interrupt. */
    for (channeId = 4U; channeId < 6U; channeId++)
    {
        /* Get match-compare interrupt flag status */
        chfStatus = (TRUE == Ftm_Pwm_Ip_HasChnEventOccurred(ftmBase, channeId))? 0x01U : 0x00U;

        if(0U != chfStatus )
        {
            Ftm_Pwm_Ip_ProcessCommonInterrupt(instanceId, channeId);
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_7_CH_6_CH_7_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 7 channel 6 - channel 7.
 */
ISR(FTM_7_CH_6_CH_7_ISR)
{

    uint8 instanceId  = 7U;
    uint8 channeId = 6U;
    uint8 chfStatus;
    const Ftm_Pwm_Ip_HwAddrType *const ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];

    /* Verify status for each channel and process interrupt. */
    for (channeId = 6U; channeId < 8U; channeId++)
    {
        /* Get match-compare interrupt flag status */
        chfStatus = (TRUE == Ftm_Pwm_Ip_HasChnEventOccurred(ftmBase, channeId))? 0x01U : 0x00U;

        if(0U != chfStatus )
        {
            Ftm_Pwm_Ip_ProcessCommonInterrupt(instanceId, channeId);
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_0_FAULT_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 0 fault
 */
ISR(FTM_0_FAULT_ISR)
{
    uint8 instanceId = 0U;
    uint8 faultId = 0U;
    boolean faultStatus;
    boolean faultChStatus;
    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];
    /* Get fault interrupt flag status */
    faultStatus = Ftm_Pwm_Ip_GetFaultDetectionFlag(ftmBase);
    /* Clear fault detection flag */
    Ftm_Pwm_Ip_ClearFaultFlag(ftmBase);
    /* Read FAULTF value and verify if it was an fault detection. */
    if ((boolean)TRUE == faultStatus )
    {
         /* Verify status for each fault channel and process interrupt. */
        for (faultId = 0U; faultId < FTM_FAULT_NUMBER_CHANNELS; faultId++)
        {
            /* Get fault interrupt flag status for each faultId */
            faultChStatus = Ftm_Pwm_Ip_GetFaultDetectionFlagId(ftmBase, faultId);

            if((boolean)TRUE == faultChStatus )
            {
                Ftm_Pwm_Ip_ProcessFaultInterrupt(instanceId, faultId);
            }
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_1_FAULT_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 1 fault
 */
ISR(FTM_1_FAULT_ISR)
{
    uint8 instanceId = 1U;
    uint8 faultId = 0U;
    boolean faultStatus;
    boolean faultChStatus;
    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];
    /* Get fault interrupt flag status */
    faultStatus = Ftm_Pwm_Ip_GetFaultDetectionFlag(ftmBase);
    /* Clear fault detection flag */
    Ftm_Pwm_Ip_ClearFaultFlag(ftmBase);
    /* Read FAULTF value and verify if it was an fault detection. */
    if ((boolean)TRUE == faultStatus )
    {
         /* Verify status for each fault channel and process interrupt. */
        for (faultId = 0U; faultId < FTM_FAULT_NUMBER_CHANNELS; faultId++)
        {
            /* Get fault interrupt flag status for each faultId */
            faultChStatus = Ftm_Pwm_Ip_GetFaultDetectionFlagId(ftmBase, faultId);

            if((boolean)TRUE == faultChStatus )
            {
                Ftm_Pwm_Ip_ProcessFaultInterrupt(instanceId, faultId);
            }
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_2_FAULT_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 2 fault
 */
ISR(FTM_2_FAULT_ISR)
{
    uint8 instanceId = 2U;
    uint8 faultId = 0U;
    boolean faultStatus;
    boolean faultChStatus;
    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];
    /* Get fault interrupt flag status */
    faultStatus = Ftm_Pwm_Ip_GetFaultDetectionFlag(ftmBase);
    /* Clear fault detection flag */
    Ftm_Pwm_Ip_ClearFaultFlag(ftmBase);
    /* Read FAULTF value and verify if it was an fault detection. */
    if ((boolean)TRUE == faultStatus )
    {
         /* Verify status for each fault channel and process interrupt. */
        for (faultId = 0U; faultId < FTM_FAULT_NUMBER_CHANNELS; faultId++)
        {
            /* Get fault interrupt flag status for each faultId */
            faultChStatus = Ftm_Pwm_Ip_GetFaultDetectionFlagId(ftmBase, faultId);

            if((boolean)TRUE == faultChStatus )
            {
                Ftm_Pwm_Ip_ProcessFaultInterrupt(instanceId, faultId);
            }
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_3_FAULT_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 3 fault
 */
ISR(FTM_3_FAULT_ISR)
{
    uint8 instanceId = 3U;
    uint8 faultId = 0U;
    boolean faultStatus;
    boolean faultChStatus;
    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];
    /* Get fault interrupt flag status */
    faultStatus = Ftm_Pwm_Ip_GetFaultDetectionFlag(ftmBase);
    /* Clear fault detection flag */
    Ftm_Pwm_Ip_ClearFaultFlag(ftmBase);
    /* Read FAULTF value and verify if it was an fault detection. */
    if ((boolean)TRUE == faultStatus )
    {
         /* Verify status for each fault channel and process interrupt. */
        for (faultId = 0U; faultId < FTM_FAULT_NUMBER_CHANNELS; faultId++)
        {
            /* Get fault interrupt flag status for each faultId */
            faultChStatus = Ftm_Pwm_Ip_GetFaultDetectionFlagId(ftmBase, faultId);

            if((boolean)TRUE == faultChStatus )
            {
                Ftm_Pwm_Ip_ProcessFaultInterrupt(instanceId, faultId);
            }
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_4_FAULT_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 4 fault
 */
ISR(FTM_4_FAULT_ISR)
{
    uint8 instanceId = 4U;
    uint8 faultId = 0U;
    boolean faultStatus;
    boolean faultChStatus;
    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];
    /* Get fault interrupt flag status */
    faultStatus = Ftm_Pwm_Ip_GetFaultDetectionFlag(ftmBase);
    /* Clear fault detection flag */
    Ftm_Pwm_Ip_ClearFaultFlag(ftmBase);
    /* Read FAULTF value and verify if it was an fault detection. */
    if ((boolean)TRUE == faultStatus )
    {
         /* Verify status for each fault channel and process interrupt. */
        for (faultId = 0U; faultId < FTM_FAULT_NUMBER_CHANNELS; faultId++)
        {
            /* Get fault interrupt flag status for each faultId */
            faultChStatus = Ftm_Pwm_Ip_GetFaultDetectionFlagId(ftmBase, faultId);

            if((boolean)TRUE == faultChStatus )
            {
                Ftm_Pwm_Ip_ProcessFaultInterrupt(instanceId, faultId);
            }
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_5_FAULT_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 5 fault
 */
ISR(FTM_5_FAULT_ISR)
{
    uint8 instanceId = 5U;
    uint8 faultId = 0U;
    boolean faultStatus;
    boolean faultChStatus;
    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];
    /* Get fault interrupt flag status */
    faultStatus = Ftm_Pwm_Ip_GetFaultDetectionFlag(ftmBase);
    /* Clear fault detection flag */
    Ftm_Pwm_Ip_ClearFaultFlag(ftmBase);
    /* Read FAULTF value and verify if it was an fault detection. */
    if ((boolean)TRUE == faultStatus )
    {
         /* Verify status for each fault channel and process interrupt. */
        for (faultId = 0U; faultId < FTM_FAULT_NUMBER_CHANNELS; faultId++)
        {
            /* Get fault interrupt flag status for each faultId */
            faultChStatus = Ftm_Pwm_Ip_GetFaultDetectionFlagId(ftmBase, faultId);

            if((boolean)TRUE == faultChStatus )
            {
                Ftm_Pwm_Ip_ProcessFaultInterrupt(instanceId, faultId);
            }
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_6_FAULT_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 6 fault
 */
ISR(FTM_6_FAULT_ISR)
{
    uint8 instanceId = 6U;
    uint8 faultId = 0U;
    boolean faultStatus;
    boolean faultChStatus;
    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];
    /* Get fault interrupt flag status */
    faultStatus = Ftm_Pwm_Ip_GetFaultDetectionFlag(ftmBase);
    /* Clear fault detection flag */
    Ftm_Pwm_Ip_ClearFaultFlag(ftmBase);
    /* Read FAULTF value and verify if it was an fault detection. */
    if ((boolean)TRUE == faultStatus )
    {
         /* Verify status for each fault channel and process interrupt. */
        for (faultId = 0U; faultId < FTM_FAULT_NUMBER_CHANNELS; faultId++)
        {
            /* Get fault interrupt flag status for each faultId */
            faultChStatus = Ftm_Pwm_Ip_GetFaultDetectionFlagId(ftmBase, faultId);

            if((boolean)TRUE == faultChStatus )
            {
                Ftm_Pwm_Ip_ProcessFaultInterrupt(instanceId, faultId);
            }
        }
    }
    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_PWM_7_FAULT_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 7 fault
 */
ISR(FTM_7_FAULT_ISR)
{
    uint8 instanceId = 7U;
    uint8 faultId = 0U;
    boolean faultStatus;
    boolean faultChStatus;
    Ftm_Pwm_Ip_HwAddrType * ftmBase = Ftm_Pwm_Ip_aFtmBase[instanceId];
    /* Get fault interrupt flag status */
    faultStatus = Ftm_Pwm_Ip_GetFaultDetectionFlag(ftmBase);
    /* Clear fault detection flag */
    Ftm_Pwm_Ip_ClearFaultFlag(ftmBase);
    /* Read FAULTF value and verify if it was an fault detection. */
    if ((boolean)TRUE == faultStatus )
    {
         /* Verify status for each fault channel and process interrupt. */
        for (faultId = 0U; faultId < FTM_FAULT_NUMBER_CHANNELS; faultId++)
        {
            /* Get fault interrupt flag status for each faultId */
            faultChStatus = Ftm_Pwm_Ip_GetFaultDetectionFlagId(ftmBase, faultId);

            if((boolean)TRUE == faultChStatus )
            {
                Ftm_Pwm_Ip_ProcessFaultInterrupt(instanceId, faultId);
            }
        }
    }
    EXIT_INTERRUPT();
}
#endif

#define PWM_STOP_SEC_CODE
#include "Pwm_MemMap.h"

#ifdef __cplusplus
}

/** @} */

#endif
