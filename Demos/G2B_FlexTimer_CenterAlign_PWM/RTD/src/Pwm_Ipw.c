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
*   @file       Pwm_Ipw.c
*
*   @addtogroup pwm_driver Pwm Driver
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/*===============================================================================================
*                                         INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
===============================================================================================*/
#include "Pwm_Ipw.h"
#include "Pwm_Ipw_Notif.h"
#include "Ftm_Pwm_Ip.h"
#if (PWM_FLEXIO_USED == STD_ON)
    #include "Flexio_Pwm_Ip.h"
#endif

/*===============================================================================================
*                                        SOURCE FILE VERSION INFORMATION
===============================================================================================*/
#define PWM_IPW_VENDOR_ID_C                     43
#define PWM_IPW_AR_RELEASE_MAJOR_VERSION_C      4
#define PWM_IPW_AR_RELEASE_MINOR_VERSION_C      4
#define PWM_IPW_AR_RELEASE_REVISION_VERSION_C   0
#define PWM_IPW_SW_MAJOR_VERSION_C              1
#define PWM_IPW_SW_MINOR_VERSION_C              0
#define PWM_IPW_SW_PATCH_VERSION_C              1

/*===============================================================================================
*                                      FILE VERSION CHECKS
===============================================================================================*/
/* Check if source file and Pwm_Ipw.h header file are of the same vendor */
#if (PWM_IPW_VENDOR_ID_C != PWM_IPW_VENDOR_ID)
    #error "Vendor IDs of Pwm_Ipw.c and Pwm_Ipw.h are different."
#endif

/* Check if source file and Pwm_Ipw.h header file are of the same AUTOSAR version */
#if ((PWM_IPW_AR_RELEASE_MAJOR_VERSION_C    != PWM_IPW_AR_RELEASE_MAJOR_VERSION) || \
     (PWM_IPW_AR_RELEASE_MINOR_VERSION_C    != PWM_IPW_AR_RELEASE_MINOR_VERSION) || \
     (PWM_IPW_AR_RELEASE_REVISION_VERSION_C != PWM_IPW_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR version numbers of Pwm_Ipw.c and Pwm_Ipw.h are different."
#endif

/* Check if source file and Pwm_Ipw.h header file are of the same software version */
#if ((PWM_IPW_SW_MAJOR_VERSION_C != PWM_IPW_SW_MAJOR_VERSION) || \
     (PWM_IPW_SW_MINOR_VERSION_C != PWM_IPW_SW_MINOR_VERSION) || \
     (PWM_IPW_SW_PATCH_VERSION_C != PWM_IPW_SW_PATCH_VERSION))
    #error "Software version numbers of Pwm_Ipw.c and Pwm_Ipw.h are different."
#endif

/* Check if source file and Pwm_Ipw_Notif.h header file are of the same vendor */
#if (PWM_IPW_VENDOR_ID_C != PWM_IPW_NOTIF_VENDOR_ID)
    #error "Vendor IDs of Pwm_Ipw.c and Pwm_Ipw_Notif.h are different."
#endif

/* Check if source file and Pwm_Ipw_Notif.h header file are of the same AUTOSAR version */
#if ((PWM_IPW_AR_RELEASE_MAJOR_VERSION_C    != PWM_IPW_NOTIF_AR_RELEASE_MAJOR_VERSION) || \
     (PWM_IPW_AR_RELEASE_MINOR_VERSION_C    != PWM_IPW_NOTIF_AR_RELEASE_MINOR_VERSION) || \
     (PWM_IPW_AR_RELEASE_REVISION_VERSION_C != PWM_IPW_NOTIF_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR version numbers of Pwm_Ipw.c and Pwm_Ipw_Notif.h are different."
#endif

/* Check if source file and Pwm_Ipw_Notif.h header file are of the same software version */
#if ((PWM_IPW_SW_MAJOR_VERSION_C != PWM_IPW_NOTIF_SW_MAJOR_VERSION) || \
     (PWM_IPW_SW_MINOR_VERSION_C != PWM_IPW_NOTIF_SW_MINOR_VERSION) || \
     (PWM_IPW_SW_PATCH_VERSION_C != PWM_IPW_NOTIF_SW_PATCH_VERSION))
    #error "Software version numbers of Pwm_Ipw.c and Pwm_Ipw_Notif.h are different."
#endif

/* Check if source file and Ftm_Pwm_Ip.h header file are of the same vendor */
#if (PWM_IPW_VENDOR_ID_C != FTM_PWM_IP_VENDOR_ID)
    #error "Vendor IDs of Pwm_Ipw.c and Ftm_Pwm_Ip.h are different."
#endif

/* Check if source file and Ftm_Pwm_Ip.h header file are of the same AUTOSAR version */
#if ((PWM_IPW_AR_RELEASE_MAJOR_VERSION_C    != FTM_PWM_IP_AR_RELEASE_MAJOR_VERSION) || \
     (PWM_IPW_AR_RELEASE_MINOR_VERSION_C    != FTM_PWM_IP_AR_RELEASE_MINOR_VERSION) || \
     (PWM_IPW_AR_RELEASE_REVISION_VERSION_C != FTM_PWM_IP_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR version numbers of Pwm_Ipw.c and Ftm_Pwm_Ip.h are different."
#endif

/* Check if source file and Ftm_Pwm_Ip.h header file are of the same software version */
#if ((PWM_IPW_SW_MAJOR_VERSION_C != FTM_PWM_IP_SW_MAJOR_VERSION) || \
     (PWM_IPW_SW_MINOR_VERSION_C != FTM_PWM_IP_SW_MINOR_VERSION) || \
     (PWM_IPW_SW_PATCH_VERSION_C != FTM_PWM_IP_SW_PATCH_VERSION))
    #error "Software version numbers of Pwm_Ipw.c and Ftm_Pwm_Ip.h are different."
#endif

#if (PWM_FLEXIO_USED == STD_ON)
    /* Check if source file and Flexio_Pwm_Ip.h header file are of the same vendor */
    #if (PWM_IPW_VENDOR_ID_C != FLEXIO_PWM_IP_VENDOR_ID)
        #error "Vendor IDs of Pwm_Ipw.c and Flexio_Pwm_Ip.h are different."
    #endif

    /* Check if source file and Flexio_Pwm_Ip.h header file are of the same AUTOSAR version */
    #if ((PWM_IPW_AR_RELEASE_MAJOR_VERSION_C    != FLEXIO_PWM_IP_AR_RELEASE_MAJOR_VERSION) || \
         (PWM_IPW_AR_RELEASE_MINOR_VERSION_C    != FLEXIO_PWM_IP_AR_RELEASE_MINOR_VERSION) || \
         (PWM_IPW_AR_RELEASE_REVISION_VERSION_C != FLEXIO_PWM_IP_AR_RELEASE_REVISION_VERSION))
        #error "AUTOSAR version numbers of Pwm_Ipw.c and Flexio_Pwm_Ip.h are different."
    #endif

    /* Check if source file and Flexio_Pwm_Ip.h header file are of the same software version */
    #if ((PWM_IPW_SW_MAJOR_VERSION_C != FLEXIO_PWM_IP_SW_MAJOR_VERSION) || \
         (PWM_IPW_SW_MINOR_VERSION_C != FLEXIO_PWM_IP_SW_MINOR_VERSION) || \
         (PWM_IPW_SW_PATCH_VERSION_C != FLEXIO_PWM_IP_SW_PATCH_VERSION))
        #error "Software version numbers of Pwm_Ipw.c and Flexio_Pwm_Ip.h are different."
    #endif
#endif

/*===============================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
===============================================================================================*/

#if ((PWM_DEV_ERROR_DETECT == STD_ON) && ((PWM_SET_PHASE_SHIFT_API == STD_ON) || (PWM_SET_PHASE_SHIFT_NO_UPDATE_API == STD_ON)))
/**
* @brief        Duty cycle 50%
*
*/
#define PWM_HALF_PERIOD_DUTY            ((uint16)0x4000U)
#endif

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/
#define PWM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Pwm_MemMap.h"

/*! @brief Arrays to store the state of channel */
extern Ftm_Pwm_Ip_ChannelStateType Ftm_Pwm_Ip_aChannelState[FTM_PWM_IP_INSTANCE_COUNT][FTM_PWM_IP_CHANNEL_COUNT];

/*! @brief Arrays to store the previous state of each channel */
extern Ftm_Pwm_Ip_ChannelStateType Ftm_Pwm_Ip_aPreviousChannelState[FTM_PWM_IP_INSTANCE_COUNT][FTM_PWM_IP_CHANNEL_COUNT];

/*! @brief Arrays to store the period values for each instance */
extern uint16 Ftm_Pwm_Ip_aPeriod[FTM_PWM_IP_INSTANCE_COUNT];

/*! @brief Arrays to store the type of notification for each channel */
extern Ftm_Pwm_Ip_EdgeInterruptType Ftm_Pwm_Ip_aNotifIrq[FTM_PWM_IP_INSTANCE_COUNT][FTM_PWM_IP_CHANNEL_COUNT];

#define PWM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Pwm_MemMap.h"

#define PWM_START_SEC_VAR_CLEARED_16
#include "Pwm_MemMap.h"

#if (PWM_FTM_USED == STD_ON) 
/** @brief Array to save the duty cycle of the ftm channel */
uint16 Pwm_Ipw_aFtmDutyCycle[FTM_PWM_IP_INSTANCE_COUNT][FTM_PWM_IP_CHANNEL_COUNT];
#endif

#if (PWM_FLEXIO_USED == STD_ON)
/** @brief Array to save the duty cycle of the flexio channel */
uint16 Pwm_Ipw_aFlexioDutyCycle[FLEXIO_PWM_IP_INSTANCE_COUNT][FLEXIO_PWM_IP_CHANNEL_COUNT];  
#endif

#define PWM_STOP_SEC_VAR_CLEARED_16
#include "Pwm_MemMap.h"
/*===============================================================================================
*                                       GLOBAL FUNCTIONS
===============================================================================================*/

#define PWM_START_SEC_CODE
#include "Pwm_MemMap.h"

/*=============================================================================================*/
/**
* @brief        Pwm_Ipw_Init
* @details      This function call the supported IP initialization functions.
*
* @param[in]    IpConfig       Pointer to PWM top configuration structure
*
* @return       void
*
*/
void Pwm_Ipw_Init(const Pwm_IpwChannelConfigType * const IpConfig)
{

    switch(IpConfig->ChannelType)
    {
#if (PWM_FTM_USED == STD_ON)
        case PWM_CHANNEL_FTM:
            /* Duty cycle of Ftm Ip */
            Pwm_Ipw_aFtmDutyCycle[IpConfig->ChannelInstanceId][((const Ftm_Pwm_Ip_ChannelConfigType *)IpConfig->FtmChConfig)->ChannelId] = IpConfig->ChannelDutyCycle;
            break;
#endif
#if (PWM_FLEXIO_USED == STD_ON)
        case PWM_CHANNEL_FLEXIO:
            if (NULL_PTR != IpConfig->FlexioChConfig)
            {
                /* Call Flexio IP initialize function */
                (void)Flexio_Pwm_Ip_InitChannel(IpConfig->ChannelInstanceId, (const Flexio_Pwm_Ip_ChannelConfigType *)IpConfig->FlexioChConfig);
                /* Duty cycle of Flexio Ip */
                Pwm_Ipw_aFlexioDutyCycle[IpConfig->ChannelInstanceId][(IpConfig->FlexioChConfig)->TimerId] = IpConfig->ChannelDutyCycle;
            }
            break;
#endif
        case PWM_CHANNEL_NONE:
            /* Nothing to do. No hw channel assigned to the logical channel */
            break;
        default:
            /* Nothing to do. */
            break;
    }
}

/*=============================================================================================*/
#if (PWM_HW_INSTANCE_USED == STD_ON)
/**
* @brief        Pwm_Ipw_InitInstance
* @details      This Pwm_Ipw_InitInstance is called once for each channel in the used configuration.
*               It determines the type of the HW channel (e.g. Ftm,etc...) and calls the
*               appropriate IP function in order to initializes the hardware timer.
*
* @param[in]    IpConfig       Pointer to PWM top configuration structure
*
* @return       void
*
*/
void Pwm_Ipw_InitInstance(const Pwm_IpwInstanceConfigType * const IpConfig)
{

    switch(IpConfig->InstanceType)
    {
#if (PWM_FTM_USED == STD_ON)
        case PWM_INSTANCE_FTM:
            if (NULL_PTR != IpConfig->FtmInsConfig)
            {
                /* Call Ftm IP initialize instances */
                Ftm_Pwm_Ip_Init(IpConfig->InstanceId, (const Ftm_Pwm_Ip_UserCfgType *)IpConfig->FtmInsConfig);
            }
            break;
#endif
        case PWM_INSTANCE_NONE:
            /* Nothing to do. No hw instance assigned to the logical instance */
            break;
        default:
            /* Nothing to do. */
            break;
    }
}
#endif /* PWM_HW_INSTANCE_USED == STD_ON */

/*===============================================================================================*/
#if (PWM_DE_INIT_API == STD_ON)
/**
* @brief        Pwm_Ipw_DeInit
* @details      This function call the supported IP de-initialization functions.
*
* @param[in]    IpConfig       Pointer to PWM top configuration structure
*
* @return       void
*
*/
void Pwm_Ipw_DeInit(const Pwm_IpwChannelConfigType * const IpConfig, Pwm_OutputStateType ChannelIdleState)
{

    switch(IpConfig->ChannelType)
    {
#if (PWM_FTM_USED == STD_ON)
        case PWM_CHANNEL_FTM:
            /* Duty cycle of Ftm Ip */
            Pwm_Ipw_aFtmDutyCycle[IpConfig->ChannelInstanceId][((const Ftm_Pwm_Ip_ChannelConfigType *)IpConfig->FtmChConfig)->ChannelId] = 0U;
            break;
#endif
#if (PWM_FLEXIO_USED == STD_ON)
        case PWM_CHANNEL_FLEXIO:
            if (NULL_PTR != IpConfig->FlexioChConfig)
            {
                (void)Flexio_Pwm_Ip_DeInitChannel(IpConfig->ChannelInstanceId, ((const Flexio_Pwm_Ip_ChannelConfigType *)IpConfig->FlexioChConfig)->TimerId);
                /* Duty cycle of Flexio Ip */
                Pwm_Ipw_aFlexioDutyCycle[IpConfig->ChannelInstanceId][(IpConfig->FlexioChConfig)->TimerId] = 0U;
            }
            break;
#endif
        case PWM_CHANNEL_NONE:
            /* Nothing to do. No hw channel assigned to the logical channel */
            break;
        default:
            /* Nothing to do. */
            break;
    }
    (void) ChannelIdleState;

}

/**
* @brief        Pwm_Ipw_DeInitInstance
* @details      This function call the supported IP de-initialization instances.
*
* @param[in]    IpConfig       Pointer to PWM top configuration structure
*
* @return       void
*
*/
#if (PWM_HW_INSTANCE_USED == STD_ON)
void Pwm_Ipw_DeInitInstance(const Pwm_IpwInstanceConfigType * const IpConfig)
{

    switch(IpConfig->InstanceType)
    {
#if (PWM_FTM_USED == STD_ON)
        case PWM_INSTANCE_FTM:
            if (NULL_PTR != IpConfig->FtmInsConfig)
            {
                /* Call Ftm IP initialize instances */
                Ftm_Pwm_Ip_DeInit(IpConfig->InstanceId);
            }
            break;
#endif
        case PWM_INSTANCE_NONE:
            /* Nothing to do. No hw instance assigned to the logical instance */
            break;
        default:
            /* Nothing to do. */
            break;
    }
}
#endif
#endif /* PWM_DE_INIT_API */

/*===============================================================================================*/
#if (PWM_SET_DUTY_CYCLE_API == STD_ON)
/**
* @brief        Pwm_Ipw_SetDutyCycle
* @details      This function will call SetDutyCycle function for the corresponding IP of PwmChannel
*
* @param[in]    DutyCycle      Duty cycle value 0x0000 for 0% ... 0x8000 for 100%
* @param[in]    IpConfig       Pointer to PWM top configuration structure
*
* @return       Std_ReturnType
*
*/
Std_ReturnType Pwm_Ipw_SetDutyCycle(uint16 DutyCycle,
                                    const Pwm_IpwChannelConfigType * const IpConfig)
{

    Std_ReturnType RetVal = (Std_ReturnType)E_OK;
#if (PWM_FTM_USED == STD_ON)
    uint16 FtmDutyCycle = 0U;
#endif
#if (PWM_FLEXIO_USED == STD_ON)
    uint16 FlexioChDuty = 0U;
    uint16 FlexioPeriod = 0U;
#endif
    switch(IpConfig->ChannelType)
    {
#if (PWM_FTM_USED == STD_ON)
        case PWM_CHANNEL_FTM:
            if (NULL_PTR != IpConfig->FtmChConfig)
            {
                FtmDutyCycle = (uint16)(((uint32)Ftm_Pwm_Ip_aPeriod[IpConfig->ChannelInstanceId] * DutyCycle) / 0x8000U);
                /* Call Ftm IP initialize function */
                Ftm_Pwm_Ip_UpdatePwmDutyCycleChannel(IpConfig->ChannelInstanceId,
                                                     ((const Ftm_Pwm_Ip_ChannelConfigType *)IpConfig->FtmChConfig)->ChannelId,
                                                     FtmDutyCycle,
                                                     TRUE);
                /* Duty cycle of Ftm Ip */
                Pwm_Ipw_aFtmDutyCycle[IpConfig->ChannelInstanceId][((const Ftm_Pwm_Ip_ChannelConfigType *)IpConfig->FtmChConfig)->ChannelId] = DutyCycle;
            }
            break;
#endif
#if (PWM_FLEXIO_USED == STD_ON)
        case PWM_CHANNEL_FLEXIO:
            FlexioPeriod = Flexio_Pwm_Ip_GetPeriod(IpConfig->ChannelInstanceId,
                                                   IpConfig->FlexioChConfig->TimerId);
            /* Calculate new duty value in ticks */
            FlexioChDuty = (uint16)(((uint32)FlexioPeriod * DutyCycle)/0x8000U);
            /* Call Flexio api for setting the period and duty cycle */
            (void)Flexio_Pwm_Ip_UpdatePeriodDuty(IpConfig->ChannelInstanceId,
                                                 IpConfig->FlexioChConfig->TimerId,
                                                 FlexioPeriod,
                                                 FlexioChDuty);
            /* Duty cycle of Flexio Ip */
            Pwm_Ipw_aFlexioDutyCycle[IpConfig->ChannelInstanceId][(IpConfig->FlexioChConfig)->TimerId] = DutyCycle;
            break;
#endif
        case PWM_CHANNEL_NONE:
            /* Nothing to do. No hw channel assigned to the logical channel */
            break;
        default:
            /* Nothing to do. */
            break;
    }

    return RetVal;
}
#endif /* PWM_SET_DUTY_CYCLE_API */

/*===============================================================================================*/
#if (PWM_SET_PERIOD_AND_DUTY_API == STD_ON)
/**
* @brief        Pwm_Ipw_SetPeriodAndDuty
* @details      This function will call SetPeriodAndDuty function for the corresponding IP of PwmChannel
*
* @param[in]    Period          Period value for this channel
* @param[in]    DutyCycle    Duty cycle value 0x0000 for 0% ... 0x8000 for 100%
* @param[in]    IpConfig       Pointer to PWM top configuration structure
*
* @return       void
*
*/
void Pwm_Ipw_SetPeriodAndDuty(Pwm_PeriodType                 Period,
                              uint16                         DutyCycle,
                              const Pwm_IpwChannelConfigType * const IpConfig)
{

#if (PWM_FTM_USED == STD_ON)
    uint16 FtmDutyCycle = 0U;
#endif
#if (PWM_FLEXIO_USED == STD_ON)
    uint16 FlexioChDuty = 0U;
#endif

    switch(IpConfig->ChannelType)
    {
#if (PWM_FTM_USED == STD_ON)
        case PWM_CHANNEL_FTM:
            if (NULL_PTR != IpConfig->FtmChConfig)
            {
                FtmDutyCycle = (uint16)(((uint32)Period * DutyCycle) / 0x8000U);
                /* Call Ftm IP initialize function */
                Ftm_Pwm_Ip_UpdatePwmPeriodAndDuty(IpConfig->ChannelInstanceId,
                                                  ((const Ftm_Pwm_Ip_ChannelConfigType *)IpConfig->FtmChConfig)->ChannelId,
                                                  Period,
                                                  FtmDutyCycle,
                                                  TRUE);
                /* Duty cycle of Ftm Ip */
                Pwm_Ipw_aFtmDutyCycle[IpConfig->ChannelInstanceId][((const Ftm_Pwm_Ip_ChannelConfigType *)IpConfig->FtmChConfig)->ChannelId] = DutyCycle;
            }
            break;
#endif
#if (PWM_FLEXIO_USED == STD_ON)
        case PWM_CHANNEL_FLEXIO:
            /* Calculate new duty value in ticks */
            FlexioChDuty = (uint16)(((uint32)Period * DutyCycle)/0x8000U);
            /* Call Flexio api for setting the period and duty cycle */
            (void)Flexio_Pwm_Ip_UpdatePeriodDuty(IpConfig->ChannelInstanceId,
                                                 IpConfig->FlexioChConfig->TimerId,
                                                 Period,
                                                 FlexioChDuty);
            /* Duty cycle of Flexio Ip */
            Pwm_Ipw_aFlexioDutyCycle[IpConfig->ChannelInstanceId][(IpConfig->FlexioChConfig)->TimerId] = DutyCycle;
            break;
#endif
        case PWM_CHANNEL_NONE:
            /* Nothing to do. No hw channel assigned to the logical channel */
            break;
        default:
            /* Nothing to do. */
            break;
    }

}
#endif /* PWM_SET_PERIOD_AND_DUTY_API */

/*===============================================================================================*/
#if (PWM_SET_OUTPUT_TO_IDLE_API == STD_ON)
/**
* @brief        Pwm_Ipw_SetOutputToIdle
* @details      This function will call SetOutputToIdle function for the corresponding IP of PwmChannel
*
* @param[in]    IpConfig       Pointer to PWM top configuration structure
*
* @return       void
*
*/
void Pwm_Ipw_SetOutputToIdle(const Pwm_OutputStateType IdleState, const Pwm_IpwChannelConfigType * const IpConfig)
{
#if (PWM_FTM_USED == STD_ON)
    uint8 Instance  =  IpConfig->ChannelInstanceId;
    uint8 Channel   =  ((const Ftm_Pwm_Ip_ChannelConfigType *)IpConfig->FtmChConfig)->ChannelId;
#endif

    switch(IpConfig->ChannelType)
    {
#if (PWM_FTM_USED == STD_ON)
        case PWM_CHANNEL_FTM:
            if ((Ftm_Pwm_Ip_ChannelStateType)FTM_PWM_IP_CHANNEL_RUNNING == Ftm_Pwm_Ip_aChannelState[Instance][Channel])
            {
                /* update new state of channel */
                Ftm_Pwm_Ip_aChannelState[Instance][Channel] = (Ftm_Pwm_Ip_ChannelStateType)FTM_PWM_IP_CHANNEL_IDLE;
                
                Ftm_Pwm_Ip_SwOutputControl(Instance,
                                           Channel,
                                           ((const Ftm_Pwm_Ip_ChannelConfigType *)IpConfig->FtmChConfig)->InitOut,
                                           TRUE);
                /* Duty cycle of Ftm Ip */
                Pwm_Ipw_aFtmDutyCycle[IpConfig->ChannelInstanceId][((const Ftm_Pwm_Ip_ChannelConfigType *)IpConfig->FtmChConfig)->ChannelId] = 0U;
            }
            else
            {
                /* Do Nothing */
            }
            break;
#endif
#if (PWM_FLEXIO_USED == STD_ON)
        case PWM_CHANNEL_FLEXIO:
            /* Nothing to do. this feature is not supported for Flexio */
            break;
#endif
        case PWM_CHANNEL_NONE:
            /* Nothing to do. No hw channel assigned to the logical channel */
            break;
        default:
            /* Nothing to do. */
            break;
    }

    (void) IdleState;

}
#endif /* PWM_SET_OUTPUT_TO_IDLE_API */

/*===============================================================================================*/
#if (PWM_GET_OUTPUT_STATE_API == STD_ON)
/**
* @brief        Pwm_Ipw_GetOutputState
* @details      This function will call GetOutputState function for the corresponding IP of PwmChannel
*
* @param[in]    IpConfig        Pointer to PWM top configuration structure
*
* @return       Pwm_OutputStateType
*
*/
Pwm_OutputStateType Pwm_Ipw_GetOutputState(const Pwm_IpwChannelConfigType * const IpConfig)
{

    /** @brief  Return value */
    Pwm_OutputStateType                      RetVal = PWM_LOW;

#if (PWM_FTM_USED == STD_ON)
    Ftm_Pwm_Ip_OutputStateType               FtmRetVal = FTM_PWM_IP_OUTPUT_STATE_LOW;
#endif
#if (PWM_FLEXIO_USED == STD_ON)
    boolean FlexioChState = FALSE;
#endif

    switch(IpConfig->ChannelType)
    {
#if (PWM_FTM_USED == STD_ON)
        case PWM_CHANNEL_FTM:
            if (NULL_PTR != IpConfig->FtmChConfig)
            {
                    /* Call FTM IP function */
                FtmRetVal = Ftm_Pwm_Ip_GetOutputState(IpConfig->ChannelInstanceId,
                                                      ((const Ftm_Pwm_Ip_ChannelConfigType *)IpConfig->FtmChConfig)->ChannelId);

                if (FTM_PWM_IP_OUTPUT_STATE_LOW == FtmRetVal)
                {
                    RetVal = PWM_LOW;
                }
                else
                {
                    RetVal = PWM_HIGH;
                }
            }
            break;
#endif
#if (PWM_FLEXIO_USED == STD_ON)
        case PWM_CHANNEL_FLEXIO:
            /* Call Flexio IP function */
            FlexioChState = Flexio_Pwm_Ip_GetOutputState(IpConfig->ChannelInstanceId,
                                                         IpConfig->FlexioChConfig->TimerId);

            if (TRUE == FlexioChState)
            {
                RetVal = PWM_HIGH;
            }
            else
            {
                RetVal = PWM_LOW;
            }
            break;
#endif
        case PWM_CHANNEL_NONE:
            /* Nothing to do. No hw channel assigned to the logical channel */
            break;
        default:
            /* Nothing to do. */
            break;
    }

    return RetVal;

}
#endif /* PWM_GET_OUTPUT_STATE_API */

/*===============================================================================================*/
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
/**
* @brief        Pwm_Ipw_DisableNotification
* @details      This function will call DisableNotification function for the corresponding IP of PwmChannel
*
* @param[in]    IpConfig       Pointer to PWM top configuration structure
*
* @return       void
*
*/
void Pwm_Ipw_DisableNotification(const Pwm_IpwChannelConfigType * const IpConfig)
{

    switch(IpConfig->ChannelType)
    {
#if (PWM_FTM_USED == STD_ON)
        case PWM_CHANNEL_FTM:
            if (NULL_PTR != IpConfig->FtmChConfig)
            {
                /* Call Ftm IP initialize function */
                Ftm_Pwm_Ip_DisableNotification(IpConfig->ChannelInstanceId,
                                              ((const Ftm_Pwm_Ip_ChannelConfigType *)IpConfig->FtmChConfig)->ChannelId);


            }
            break;
#endif
#if (PWM_FLEXIO_USED == STD_ON)
        case PWM_CHANNEL_FLEXIO:
            /* Call Flexio IP function */
            (void)Flexio_Pwm_Ip_UpdateInterruptMode(IpConfig->ChannelInstanceId,
                                                    IpConfig->FlexioChConfig->TimerId,
                                                    FLEXIO_PWM_IP_IRQ_DISABLED);
            break;
#endif
        case PWM_CHANNEL_NONE:
            /* Nothing to do. No hw channel assigned to the logical channel */
            break;
        default:
            /* Nothing to do. */
            break;
    }

}
#endif /* PWM_NOTIFICATION_SUPPORTED */

/*===============================================================================================*/
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
/**
* @brief        Pwm_Ipw_EnableNotification
* @details      This function will call EnableNotification function for the corresponding IP of PwmChannel
*
* @param[in]    Notification   Notification edge type to be enabled
* @param[in]    IpConfig       Pointer to PWM top configuration structure
*
* @return       void
*
*/
void Pwm_Ipw_EnableNotification(Pwm_EdgeNotificationType       Notification,
                                const Pwm_IpwChannelConfigType * const IpConfig)
{

#if (PWM_FTM_USED == STD_ON)
    Ftm_Ftm_Ip_EdgeNotifType       FtmNotification;

    if (PWM_RISING_EDGE == Notification)
    {
        FtmNotification = FTM_PWM_IP_RISING_EDGE;
    }
    else if (PWM_FALLING_EDGE == Notification)
    {
        FtmNotification = FTM_PWM_IP_FALLING_EDGE;
    }
    else
    {
        FtmNotification = FTM_PWM_IP_BOTH_EDGES;
    }
#endif

    switch(IpConfig->ChannelType)
    {
#if (PWM_FTM_USED == STD_ON)
        case PWM_CHANNEL_FTM:
            if (NULL_PTR != IpConfig->FtmChConfig)
            {
                /* Call Ftm IP initialize function */
                Ftm_Pwm_Ip_EnableNotification(IpConfig->ChannelInstanceId,
                                              ((const Ftm_Pwm_Ip_ChannelConfigType *)IpConfig->FtmChConfig)->ChannelId,
                                               FtmNotification);


            }
            break;
#endif
#if (PWM_FLEXIO_USED == STD_ON)
        case PWM_CHANNEL_FLEXIO:
            /* Call Flexio IP function */
            switch (Notification)
            {
                case PWM_RISING_EDGE:
                    (void)Flexio_Pwm_Ip_UpdateInterruptMode(IpConfig->ChannelInstanceId,
                                                      IpConfig->FlexioChConfig->TimerId,
                                                      FLEXIO_PWM_IP_IRQ_ON_PERIOD_END);
                    break;
                case PWM_FALLING_EDGE:
                case PWM_BOTH_EDGES:
                default:
                    /* Noting to do */
                    break;
            }
            break;
#endif
        case PWM_CHANNEL_NONE:
            /* Nothing to do. No hw channel assigned to the logical channel */
            break;
        default:
            /* Nothing to do. */
            break;
    }
}
#endif /* PWM_NOTIFICATION_SUPPORTED */

/*===============================================================================================*/
#if (PWM_FAULT_SUPPORTED == STD_ON)
/**
* @brief        Pwm_Ipw_GetFtmIpConfigPtr
* @details      This function is called from Pwm_Ftm.c file in order to get the pointer
*               to the FTM IP configuration. This function is required only by FTM
*               Fault functionality
*
* @param        void
*
* @return       Pwm_FlexPwm_IpConfigType*   Pointer to the FTM IP configuration structure
*
*/
const Ftm_Pwm_Ip_IpConfigType * Pwm_Ipw_GetFtmIpConfigPtr(void)
{

    const Pwm_IpConfigType *     IpConfig;
    const Ftm_Pwm_Ip_IpConfigType *     FtmIpConfigRet;

    IpConfig = Pwm_GetIpConfigPtr();

    /* If returned value was NULL, return NULL pointer */
    if (NULL_PTR == IpConfig)
    {
        FtmIpConfigRet = NULL_PTR;
    }
    else
    {
        FtmIpConfigRet = IpConfig->pFtmIpConfig;
    }

    return FtmIpConfigRet;

}
#endif /* PWM_FAULT_SUPPORTED */

/*===============================================================================================*/
#if (PWM_GET_CHANNEL_STATE_API == STD_ON)
/**
* @brief        Pwm_Ipw_GetChannelState
* @details      This function will call GetChannelState function for the corresponding IP of PwmChannel
*
* @param[in]    channelNumber  PWM logical channel ID in top configuration structure
* @param[in]    IpConfig       Pointer to PWM top configuration structure
*
* @return       uint16
*
*/
uint16 Pwm_Ipw_GetChannelState(const Pwm_IpwChannelConfigType * const IpConfig)
{

    /** @brief  Return duty cycle value */
    uint16                      DutyCycle = (uint16)0U;

    switch(IpConfig->ChannelType)
    {
#if (PWM_FTM_USED == STD_ON)
        case PWM_CHANNEL_FTM:
            /* Get Duty cycle of Ftm Ip */
            DutyCycle =  Pwm_Ipw_aFtmDutyCycle[IpConfig->ChannelInstanceId][((const Ftm_Pwm_Ip_ChannelConfigType *)IpConfig->FtmChConfig)->ChannelId];
            break;
#endif
#if (PWM_FLEXIO_USED == STD_ON)
        case PWM_CHANNEL_FLEXIO:
            /* Get Duty cycle of Flexio Ip */
            DutyCycle =  Pwm_Ipw_aFlexioDutyCycle[IpConfig->ChannelInstanceId][(IpConfig->FlexioChConfig)->TimerId];
            break;
#endif
        case PWM_CHANNEL_NONE:
        default:
            /* Nothing to do */
            break;
    }

    return DutyCycle;
}
#endif /* PWM_GET_CHANNEL_STATE_API */

/*===============================================================================================*/
#if (PWM_FORCE_OUTPUT_TO_ZERO_API == STD_ON)
/**
* @brief        Pwm_Ipw_ForceOutputToZero
* @details      This function will call ForceOutputToZero function only if then channel is a
*               FTM channel
*
* @param[in]    channelNumber  PWM logical channel ID in top configuration structure
* @param[in]    Force          Flag to state if Force to zero should be applied or not
* @param[in]    IpConfig       Pointer to PWM top configuration structure
*
* @return       void
* @implements   Pwm_Ipw_ForceOutputToZero_Activity
*/
void Pwm_Ipw_ForceOutputToZero(boolean                        Force,
                               const Pwm_IpwChannelConfigType * const IpConfig)
{

    uint8 Instance                         =  IpConfig->ChannelInstanceId;
    uint8 Channel                          =  ((const Ftm_Pwm_Ip_ChannelConfigType *)IpConfig->FtmChConfig)->ChannelId;
    boolean ForceOutput                    =  Force;
    Ftm_Pwm_Ip_PolarityType    PolCh       =  ((const Ftm_Pwm_Ip_ChannelConfigType *)IpConfig->FtmChConfig)->Polarity;
    Ftm_Pwm_Ip_OutputStateType OutputState =  (FTM_PWM_IP_POLARITY_LOW == PolCh)? FTM_PWM_IP_OUTPUT_STATE_HIGH : FTM_PWM_IP_OUTPUT_STATE_LOW;

    if (FTM_PWM_IP_CHANNEL_OUTPUT_FORCED != Ftm_Pwm_Ip_aChannelState[Instance][Channel])
    {
        if(TRUE == ForceOutput)
        {
            /* Store this current state into previous state array */
            Ftm_Pwm_Ip_aPreviousChannelState[Instance][Channel] = Ftm_Pwm_Ip_aChannelState[Instance][Channel];
            
            Ftm_Pwm_Ip_aChannelState[Instance][Channel] = (Ftm_Pwm_Ip_ChannelStateType)FTM_PWM_IP_CHANNEL_OUTPUT_FORCED;
        }
        else
        {
            /* Do Nothing*/
        }
    }
    else
    {
        if(FALSE == ForceOutput)
        {
            /* ..then get the last operation then store into current state array */
            Ftm_Pwm_Ip_aChannelState[Instance][Channel] = Ftm_Pwm_Ip_aPreviousChannelState[Instance][Channel];
            
            if ((Ftm_Pwm_Ip_ChannelStateType)FTM_PWM_IP_CHANNEL_IDLE == Ftm_Pwm_Ip_aChannelState[Instance][Channel])
            {
                OutputState = ((const Ftm_Pwm_Ip_ChannelConfigType *)IpConfig->FtmChConfig)->InitOut;
                ForceOutput = TRUE;
            }
        }
        else
        {
            /* Do Nothing*/
        }
    }

    if (PWM_CHANNEL_FTM == IpConfig->ChannelType)
    {
        Ftm_Pwm_Ip_SwOutputControl(Instance,
                               Channel,
                               OutputState,
                               ForceOutput);
        
    }
    else
    {
        /* Do Nothing with other IPL */
    }                  
}
#endif /* PWM_FORCE_OUTPUT_TO_ZERO_API */

/*===============================================================================================*/
#if (PWM_SET_CLOCK_MODE_API == STD_ON)
/**
* @brief        Pwm_Ipw_SetClockMode
* @details      This function will call SetClockMode function of all configured hardware eMIOS modules.
*
* @param[in]    Prescaler      Pre-scaler type
* @param[in]    IpConfig       Pointer to PWM top configuration structure
*
* @return       void
*
*/
void Pwm_Ipw_SetClockMode(Pwm_PrescalerType              Prescaler,
                          const Pwm_IpwInstanceConfigType * const IpConfig)
{

#if (PWM_FTM_USED == STD_ON)
    Ftm_Pwm_Ip_PrescalerType                     FtmPrescaler;

    if (PWM_PRIMARY_PRESCALER == Prescaler)
    {
        FtmPrescaler = FTM_PWM_IP_PRIMARY_PRESCALER;
    }
    else
    {
        FtmPrescaler = FTM_PWM_IP_ALTERNATIVE_PRESCALER;
    }
#endif
    switch(IpConfig->InstanceType)
    {
#if (PWM_FTM_USED == STD_ON)
        case PWM_INSTANCE_FTM:
            Ftm_Pwm_Ip_SetClockMode(IpConfig->InstanceId,
                                    FtmPrescaler);

            break;
#endif
        case PWM_INSTANCE_NONE:
            /* Nothing to do. No hw instance assigned to the logical instance */
            break;
        default:
            /* Nothing to do. */
            break;
    }
    (void)Prescaler;
}
#endif /* PWM_SET_CLOCK_MODE_API */

/*===============================================================================================*/
#if (PWM_SET_CHANNEL_DEAD_TIME_API == STD_ON)
/**
* @brief
* @details      This function is used to update the deadtime at runtime for Pwm channels.
*
* @param[in]    channelNumber       pwm channel id
* @param[in]    DeadTimeTicks       dead Time value
*
* @return       void
*
*
*/
void Pwm_Ipw_SetChannelDeadTime(uint16 DeadTimeTicks,
                                const Pwm_IpwChannelConfigType * const IpConfig)
{
    if (PWM_CHANNEL_FTM == IpConfig->ChannelType)
    {
        /* Call FTM IP function */
        Ftm_Pwm_Ip_SetChannelDeadTime
        (
            IpConfig->ChannelInstanceId,
            ((const Ftm_Pwm_Ip_ChannelConfigType *)IpConfig->FtmChConfig)->ChannelId,
            DeadTimeTicks
        );
    }
    else
    {
        /* Nothing to do. This switch branch is empty because it shall not be executed for normal behaviour */
    }
}

#endif /* PWM_SET_CHANNEL_DEAD_TIME_API */

/*===============================================================================================*/
#if (PWM_ENABLE_TRIGGER_API == STD_ON)
/**
* @brief        This function enables trigger generation for specific source
* @details      Corresponding bits with trigger source as bellow:
*                   Bit 0   Channel 2 Trigger Enable
*                   Bit 1   Channel 3 Trigger Enable
*                   Bit 2   Channel 4 Trigger Enable
*                   Bit 3   Channel 5 Trigger Enable
*                   Bit 4   Channel 0 Trigger Enable
*                   Bit 5   Channel 1 Trigger Enable
*                   Bit 6   Initialization Trigger Enable
*
* @param[in]        TriggerHostId FTM module ID
* @param[in]        TriggerMask  bit mask will be clear for FTM_EXTTRIG.
* @param[in]        IpConfig       Pointer to PWM top configuration structure
*
* @return       void
*
*/
void Pwm_Ipw_EnableTrigger(uint8                            TriggerHostId,
                           uint16                           TriggerMask,
                           const Pwm_IpwInstanceConfigType * const IpConfig)
{

    if (TriggerHostId == IpConfig->InstanceId)
    {
        /* Call FTM IP function */
        Ftm_Pwm_Ip_EnableTrigger(TriggerHostId, (uint32)TriggerMask);
    }
    else
    {
        /* This parameter is not used */
        (void)TriggerHostId;
        (void)TriggerMask;
    }

}
#endif /* PWM_ENABLE_TRIGGER_API */

/*===============================================================================================*/
#if (PWM_DISABLE_TRIGGER_API == STD_ON)
/**
* @brief        This function disables trigger generation for specific source
* @details      Corresponding bits with trigger source as bellow:
*                   Bit 0   Channel 2 Trigger Enable
*                   Bit 1   Channel 3 Trigger Enable
*                   Bit 2   Channel 4 Trigger Enable
*                   Bit 3   Channel 5 Trigger Enable
*                   Bit 4   Channel 0 Trigger Enable
*                   Bit 5   Channel 1 Trigger Enable
*                   Bit 6   Initialization Trigger Enable
*
* @param[in]        TriggerHostId FTM module ID
* @param[in]        TriggerMask  bit mask will be clear for FTM_EXTTRIG.
* @param[in]        IpConfig       Pointer to PWM top configuration structure
*
* @return       void
*
*/
void Pwm_Ipw_DisableTrigger(uint8                           TriggerHostId,
                            uint16                          TriggerMask,
                            const Pwm_IpwInstanceConfigType * const IpConfig)
{
    if (TriggerHostId == IpConfig->InstanceId)
    {
        /* Call FTM IP function */
        Ftm_Pwm_Ip_DisableTrigger(TriggerHostId, (uint32)TriggerMask);
    }
    else
    {
        /* This parameter is not used */
        (void)TriggerHostId;
        (void)TriggerMask;
    }

}
#endif /* PWM_DISABLE_TRIGGER_API */

/*===============================================================================================*/
#if (PWM_RESET_COUNTER_API == STD_ON)
/**
* @brief        Pwm_Ipw_ResetCounterEnable
* @details      This function enables counter reset by Pwm_SyncUpdate() call
*
* @param[in]    ModuleId       FTM module ID
* @param[in]    IpConfig       Pointer to PWM top configuration structure
*
* @return       void
*
*/
void Pwm_Ipw_ResetCounterEnable(uint8                           ModuleId,
                                const Pwm_IpwInstanceConfigType * const IpConfig)
{

    if (ModuleId == IpConfig->InstanceId)
    {
        /* Call FTM IP function */
        Ftm_Pwm_Ip_ResetCounter(ModuleId, TRUE);
    }
    else
    {
        /* This parameter is not used */
        (void)ModuleId;

    }
}
#endif /* PWM_RESET_COUNTER_API */

/*===============================================================================================*/
#if (PWM_RESET_COUNTER_API == STD_ON)
/**
* @brief        Pwm_Ipw_ResetCounterDisable
* @details      This function disables counter reset by Pwm_SyncUpdate() call
*
* @param[in]    ModuleId      FTM module ID
* @param[in]    IpConfig       Pointer to PWM top configuration structure
*
* @return       void
*
*/
void Pwm_Ipw_ResetCounterDisable(uint8                           ModuleId,
                                 const Pwm_IpwInstanceConfigType * const IpConfig)
{

    if (ModuleId == IpConfig->InstanceId)
    {
        /* Call FTM IP function */
        Ftm_Pwm_Ip_ResetCounter(ModuleId, FALSE);
    }
    else
    {
        /* This parameter is not used */
        (void)ModuleId;
    }
}
#endif /* PWM_RESET_COUNTER_API */

/*===============================================================================================*/
#if (PWM_ENABLE_MASKING_OPERATIONS == STD_ON)
/**
* @brief        This function Force channels output to their inactive state
* @details      Corresponding bits with channel will be masked:
*                   Bit 0   Channel 0 Output Mask
*                   Bit 1   Channel 1 Output Mask
*                   Bit 2   Channel 2 Output Mask
*                   Bit 3   Channel 3 Output Mask
*                   Bit 4   Channel 4 Output Mask
*                   Bit 5   Channel 5 Output Mask
*
* @param[in]        ModuleId      FTM module ID
* @param[in]        ChannelMask   bit mask will be set for FTM_OUTMASK.
* @param[in]        IpConfig      Pointer to PWM top configuration structure
*
* @return       void
*
*/
void Pwm_Ipw_MaskOutputs(uint8                             ModuleId,
                         uint8                             ChannelMask,
                         const Pwm_IpwInstanceConfigType * const IpConfig)
{

    if (ModuleId == IpConfig->InstanceId)
    {
         /* Call FTM IP function */
        Ftm_Pwm_Ip_MaskOutputChannels(ModuleId, ChannelMask, TRUE);
    }
    else
    {
        /* This parameter is not used */
        (void)ModuleId;
        (void)ChannelMask;
    }
}
#endif /* PWM_ENABLE_MASKING_OPERATIONS */

/*===============================================================================================*/
#if (PWM_ENABLE_MASKING_OPERATIONS == STD_ON)
/**
* @brief        This function puts channels output to normal operation state
* @details      Corresponding bits with channel will be masked:
*                   Bit 0   Channel 0 Output Mask
*                   Bit 1   Channel 1 Output Mask
*                   Bit 2   Channel 2 Output Mask
*                   Bit 3   Channel 3 Output Mask
*                   Bit 4   Channel 4 Output Mask
*                   Bit 5   Channel 5 Output Mask
*
* @param[in]        ModuleId      FTM module ID
* @param[in]        ChannelMask   bit mask will be set for FTM_OUTMASK.
* @param[in]        IpConfig      Pointer to PWM top configuration structure
*
* @return       void
*
*/
void Pwm_Ipw_UnMaskOutputs(uint8                           ModuleId,
                           uint8                           ChannelMask,
                           const Pwm_IpwInstanceConfigType * const IpConfig)
{

    if (ModuleId == IpConfig->InstanceId)
    {
        /* Call FTM IP function */
        Ftm_Pwm_Ip_UnMaskOutputChannels(ModuleId, ChannelMask, TRUE);
    }
    else
    {
        /* This parameter is not used */
        (void)ModuleId;
        (void)ChannelMask;
    }
}
#endif /* PWM_ENABLE_MASKING_OPERATIONS */

/*===============================================================================================*/
#if (PWM_SET_PHASE_SHIFT_API == STD_ON)
/**
* @brief        This function set phase shift value and also Force duty cycle to 50%. The output will
*               effect immediately after calling this function.
* @details      In order to have Phase-Shifted Full-Bridge controller, Pwm_SetPhaseShift is introduced.
*               This function bases on FTM Combine mode with Cn and C(n+1) combine to generate leading
*               edge and trailing edge. Pwm_SetPhaseShift allows to set both phase shift value and Period,
*               the duty value is fixed to 50%.
*
* @param[in]    channelNumber  PWM logical channel ID in top configuration structure
* @param[in]    Period         Period value for this channel
* @param[in]    PhaseShift     Phase shift value
* @param[in]    IpConfig       Pointer to PWM top configuration structure
*
* @return       void
*
*/
void Pwm_Ipw_SetPhaseShift(uint16                         Period,
                           uint16                         PhaseShift,
                           const Pwm_IpwChannelConfigType * const IpConfig)
{

    uint16 PhaseShiftVal = 0U;
 
    if (PWM_CHANNEL_FTM == IpConfig->ChannelType)
    {
        /* Calculate the phase shift value in ticks*/
        PhaseShiftVal = (uint16) ((((uint32)Period * (uint32)PhaseShift) >> FTM_PWM_IP_DUTY_TO_TICKS_SHIFT) + 1U);

        /* Call FTM IP function */
        Ftm_Pwm_Ip_SetPhaseShift(IpConfig->ChannelInstanceId,
                                 ((const Ftm_Pwm_Ip_ChannelConfigType *)IpConfig->FtmChConfig)->ChannelId,
                                  Period,
                                  PhaseShiftVal,
                                  TRUE);
    }
    else
    {
        /* Nothing to do. This switch branch is empty because it shall not be executed for normal behaviour */
        (void)PhaseShiftVal;
        (void)Period;
        (void)PhaseShift;     
    }
}
#endif /* PWM_SET_PHASE_SHIFT_API */

/*===============================================================================================*/
#if (PWM_SET_DUTY_PHASE_SHIFT_API == STD_ON)
/**
* @brief        This function set phase shift and duty cycle value (as immediate or synchronized base on API parameter SyncUpdate)
*
* @details      Pwm_Ipw_SetDutyPhaseShift allows to set both phase shift and duty cycle value,
*               The phase shift is the offset of the leading edge of the signal in respect to Period starting point.
*
* @param[in]    DutyCycle               Pwm duty cycle value 0x0000 for 0% ... 0x8000 for 100%
* @param[in]    PhaseShift              Phase shift value (in ticks)
* @param[in]    boolean                 SyncUpdate
*                      TRUE             Set the phase shift and duty cycle value base on the synchronization when calling Pwm_SyncUpdate.
                       FALSE            Set phase shift and duty cycle value immediately
*
* @return       void
*
*/
void Pwm_Ipw_SetDutyPhaseShift(uint16                           DutyCycle,
                               uint16                           PhaseShift,
                               const Pwm_IpwChannelConfigType * const IpConfig,
                               boolean                          SyncUpdate)
{

    uint16 FtmDutyCycle = 0U;
    
    if (PWM_CHANNEL_FTM == IpConfig->ChannelType)
    {
#if (PWM_FTM_USED == STD_ON)
        FtmDutyCycle = (uint16)(((uint32)Ftm_Pwm_Ip_aPeriod[IpConfig->ChannelInstanceId] * DutyCycle) / 0x8000U);
        
        /* Call FTM IP function */
        Ftm_Pwm_Ip_SetDutyPhaseShift(IpConfig->ChannelInstanceId,
                                   ((const Ftm_Pwm_Ip_ChannelConfigType *)IpConfig->FtmChConfig)->ChannelId,
                                    FtmDutyCycle,
                                    PhaseShift,
                                    SyncUpdate);
                                    
        /* Duty cycle of Ftm Ip */
        Pwm_Ipw_aFtmDutyCycle[IpConfig->ChannelInstanceId][((const Ftm_Pwm_Ip_ChannelConfigType *)IpConfig->FtmChConfig)->ChannelId] = DutyCycle;
#endif
    }
    else
    {
        /* Nothing to do. This switch branch is empty because it shall not be executed for normal behaviour */
        (void)FtmDutyCycle;
        (void)DutyCycle;
        (void)PhaseShift; 
        (void)SyncUpdate; 
    }
}
#endif /* PWM_SET_DUTY_PHASE_SHIFT_API */

/*===============================================================================================*/
#if ((PWM_UPDATE_DUTY_SYNCHRONOUS == STD_ON) && (PWM_SET_DUTY_CYCLE_NO_UPDATE_API == STD_ON))
/**
* @brief        Pwm_Ipw_SetDutyCycle_NoUpdate
* @details      This function will call Ftm_Pwm_Ip_SetDutyCycle (synchronous mode) if
*               the given channel is a FTM channel
*
* @param[in]    channelNumber  PWM logical channel ID in top configuration structure
* @param[in]    DutyCycle      Duty cycle value 0x0000 for 0% ... 0x8000 for 100%
* @param[in]    IpConfig       Pointer to PWM top configuration structure
*
* @return       void
*
*/
Std_ReturnType Pwm_Ipw_SetDutyCycle_NoUpdate(uint16                           DutyCycle,
                                             const Pwm_IpwChannelConfigType * const IpConfig)
{

    Std_ReturnType RetVal = (Std_ReturnType)E_OK;
    uint16 FtmDutyCycle = 0U;

    if (PWM_CHANNEL_FTM == IpConfig->ChannelType)
    {
#if (PWM_FTM_USED == STD_ON)
        FtmDutyCycle = (uint16)(((uint32)Ftm_Pwm_Ip_aPeriod[IpConfig->ChannelInstanceId] * DutyCycle) / 0x8000U);
        /* Call FTM IP function */
        Ftm_Pwm_Ip_UpdatePwmDutyCycleChannel
        (
            IpConfig->ChannelInstanceId,
            ((const Ftm_Pwm_Ip_ChannelConfigType *)IpConfig->FtmChConfig)->ChannelId,
            FtmDutyCycle,
            FALSE
        );
        /* Duty cycle of Ftm Ip */
        Pwm_Ipw_aFtmDutyCycle[IpConfig->ChannelInstanceId][((const Ftm_Pwm_Ip_ChannelConfigType *)IpConfig->FtmChConfig)->ChannelId] = DutyCycle;
#endif
    }
    else
    {
        /* Nothing to do. This switch branch is empty because it shall not be executed for normal behaviour */
        (void)FtmDutyCycle;
        (void)DutyCycle; 
    }

    return RetVal;
}
#endif /* PWM_UPDATE_DUTY_SYNCHRONOUS && PWM_SET_DUTY_CYCLE_NO_UPDATE_API */

/*===============================================================================================*/
#if ((PWM_UPDATE_DUTY_SYNCHRONOUS == STD_ON) && (PWM_SET_PERIOD_AND_DUTY_NO_UPDATE_API == STD_ON))
/**
* @brief        Pwm_Ipw_SetPeriodAndDuty_NoUpdate
* @details      This function will call Ftm_Pwm_Ip_SetPeriodAndDuty (synchronous mode)
*               if the given channel is a FTM channel
*
* @param[in]    channelNumber  PWM logical channel ID in top configuration structure
* @param[in]    Period         Period value for this channel
* @param[in]    DutyCycle      Duty cycle value 0x0000 for 0% ... 0x8000 for 100%
* @param[in]    IpConfig       Pointer to PWM top configuration structure
*
* @return       void
*
*/
void Pwm_Ipw_SetPeriodAndDuty_NoUpdate(Pwm_PeriodType                 Period,
                                       uint16                         DutyCycle,
                                       const Pwm_IpwChannelConfigType * const IpConfig)
{

    uint16 FtmDutyCycle = 0U;
    
    if (PWM_CHANNEL_FTM == IpConfig->ChannelType)
    {
#if (PWM_FTM_USED == STD_ON)
        FtmDutyCycle = (uint16)(((uint32)Period * DutyCycle) / 0x8000U);
        /* Call FTM IP function */
        Ftm_Pwm_Ip_UpdatePwmPeriodAndDuty
        (
            IpConfig->ChannelInstanceId,
            ((const Ftm_Pwm_Ip_ChannelConfigType *)IpConfig->FtmChConfig)->ChannelId,
            Period,
            FtmDutyCycle,
            FALSE
        );
        
        /* Duty cycle of Ftm Ip */
        Pwm_Ipw_aFtmDutyCycle[IpConfig->ChannelInstanceId][((const Ftm_Pwm_Ip_ChannelConfigType *)IpConfig->FtmChConfig)->ChannelId] = DutyCycle;
#endif
    }
    else
    {
        /* Nothing to do. This switch branch is empty because it shall not be executed for normal behaviour */
        (void)FtmDutyCycle;
        (void)DutyCycle;
        (void)Period;
    }
}
#endif /* PWM_UPDATE_DUTY_SYNCHRONOUS && PWM_SET_PERIOD_AND_DUTY_NO_UPDATE_API */

/*===============================================================================================*/
#if ((PWM_UPDATE_DUTY_SYNCHRONOUS == STD_ON) && (PWM_SET_PHASE_SHIFT_NO_UPDATE_API == STD_ON))
/**
* @brief        This function set phase shift value and also Force duty cycle to 50%. The output will take
*               effect after Pwm_SyncUpdate be called.
* @details      In order to have Phase-Shifted Full-Bridge controller, Pwm_SetPhaseShift is introduced.
*               This function bases on FTM Combine mode with Cn and C(n+1) combine to generate leading
*               edge and trailing edge. Pwm_SetPhaseShift allows to set both phase shift value and Period,
*               the duty value is fixed to 50%.
*
* @param[in]    channelNumber  PWM logical channel ID in top configuration structure
* @param[in]    Period         Period value for this channel
* @param[in]    PhaseShift     Phase shift value
* @param[in]    IpConfig       Pointer to PWM top configuration structure
*
* @return       void
*
*/
void Pwm_Ipw_SetPhaseShift_NoUpdate(uint16                         Period,
                                    uint16                         PhaseShift,
                                    const Pwm_IpwChannelConfigType * const IpConfig)
{
    uint16 PhaseShiftVal = 0U;

    if (PWM_CHANNEL_FTM == IpConfig->ChannelType)
    {     
        /* Calculate phase shift value in ticks*/
        PhaseShiftVal = (uint16) ((((uint32)Period * (uint32)PhaseShift) >> FTM_PWM_IP_DUTY_TO_TICKS_SHIFT) + 1U);

        /* Call FTM IP function */
        Ftm_Pwm_Ip_SetPhaseShift(IpConfig->ChannelInstanceId,
                                ((const Ftm_Pwm_Ip_ChannelConfigType *)IpConfig->FtmChConfig)->ChannelId,
                                 Period,
                                 PhaseShiftVal,
                                 FALSE);
    }
    else
    {
        /* Nothing to do. This switch branch is empty because it shall not be executed for normal behaviour */
        (void)PhaseShiftVal;
        (void)PhaseShift;
        (void)Period;
    }
}
#endif /* PWM_SET_PHASE_SHIFT_NO_UPDATE_API */

/*===============================================================================================*/
#if ((PWM_UPDATE_DUTY_SYNCHRONOUS == STD_ON) && (PWM_SYNC_UPDATE_API == STD_ON))
/**
* @brief        Pwm_Ipw_SyncUpdate
* @details      This function will call Ftm_Pwm_Ip_SyncUpdate to allow synchronized loading
*               of the duty registers for all the channels of a given FTM module
*
* @param[in]    ModuleId      Instance Id of FTM
*                              Ex:  PWM_FTM_INSTANCE_0
*                                   PWM_FTM_INSTANCE_1
*                                   ....
*
* @return       void
*
*/
void Pwm_Ipw_SyncUpdate(uint8  ModuleId)
{

#if (PWM_FTM_USED == STD_ON)
    /* Call FTM IP function */
    Ftm_Pwm_Ip_SyncUpdate
    (
       ModuleId
    );
#else
    /* Nothing to do. This switch branch is empty because it shall not be executed for normal behaviour */
    (void)ModuleId;
#endif
}
#endif /* PWM_UPDATE_DUTY_SYNCHRONOUS && PWM_SYNC_UPDATE_API */

/*===============================================================================================*/
#if ((PWM_DEV_ERROR_DETECT == STD_ON) && (PWM_SET_CHANNEL_DEAD_TIME_API == STD_ON))
/**
* @brief        Pwm_Ipw_ValidateDeadTime
* @details      This function will check validate operation mode of current channel to use
*               deadtime feature.
*
* @param[in]    IpConfig        Pointer to PWM top configuration structure
*
* @return       Std_ReturnType
*               E_NOT_OK        Current channel mode is invalid
*               E_OK            Current channel mode is valid
*
*/
Std_ReturnType Pwm_Ipw_ValidateDeadTime(const Pwm_IpwChannelConfigType * const IpConfig)
{
    /** @brief  Variable to store the value returned by the function */
    Std_ReturnType RetVal = (Std_ReturnType)E_OK;
    
    const Ftm_Pwm_Ip_PairCfgType * FtmPairCfg;
    FtmPairCfg = ((const Ftm_Pwm_Ip_ChannelConfigType *)IpConfig->FtmChConfig)->PairCfg;

    if (PWM_CHANNEL_FTM == IpConfig->ChannelType)
    {
        if (NULL_PTR == FtmPairCfg)
        {
            RetVal = (Std_ReturnType)E_NOT_OK;
        }
        else
        {
            if ((TRUE == FtmPairCfg->DeadtimeEn) && (TRUE == FtmPairCfg->ComplementaryModeEn))
            {
                RetVal = (Std_ReturnType)E_OK;
            }
            else
            {
                RetVal = (Std_ReturnType)E_NOT_OK;
            }
        }
    }
    else
    {
        RetVal = (Std_ReturnType)E_NOT_OK;
    }

    return RetVal;
}

/**
* @brief        Pwm_Ipw_ValidateParamDeadTime
* @details      This function will check validate input value of current channel to use
*               deadtime feature.
*
* @param[in]    DeadTimeTicks        The deadtime input value
* @param[in]    IpConfig             Pointer to PWM top configuration structure
*
* @return       Std_ReturnType
*               E_NOT_OK        DeadTimeTicks value is invalid
*               E_OK            DeadTimeTicks value is valid
*
*/
Std_ReturnType Pwm_Ipw_ValidateParamDeadTime(uint16   DeadTimeTicks,
                                             const Pwm_IpwChannelConfigType * const IpConfig)
{
    /** @brief  Variable to store the value returned by the function */
    Std_ReturnType RetVal = (Std_ReturnType)E_NOT_OK;

    if ((DeadTimeTicks < 1024U) && (DeadTimeTicks > 0U))
    {
        RetVal = (Std_ReturnType)E_OK;
    }

    /* Avoid the compiler warning */
    (void)IpConfig;

    return RetVal;
}

#endif /* ((PWM_DEV_ERROR_DETECT == STD_ON) && (PWM_SET_CHANNEL_DEAD_TIME_API == STD_ON)) */

/*===============================================================================================*/
#if ((PWM_DEV_ERROR_DETECT == STD_ON) && (PWM_NOTIFICATION_SUPPORTED == STD_ON))
/**
* @brief        Pwm_Ipw_ValidateNotification
* @details      This function will check given channel with Notification supported
*
* @param[in]    channelNumber  PWM logical channel ID in top configuration structure
* @param[in]    Notification   Notification edge type
* @param[in]    IpConfig       Pointer to PWM top configuration structure
*
* @return       Std_ReturnType
*               E_NOT_OK Notification handler is not valid
*               E_OK     Notification handler is valid
*
*/
Std_ReturnType Pwm_Ipw_ValidateNotification(Pwm_EdgeNotificationType  Notification,
                                            const Pwm_IpwChannelConfigType * const IpConfig)
{

    /** @brief  Variable to store the value returned by the function */
    Std_ReturnType                      RetVal = (Std_ReturnType)E_OK;
   
    switch(IpConfig->ChannelType)
    {
#if (PWM_FTM_USED == STD_ON)
        case PWM_CHANNEL_FTM:
            RetVal = (Std_ReturnType)E_OK;
            break;
#endif
#if (PWM_FLEXIO_USED == STD_ON)
        case PWM_CHANNEL_FLEXIO:
            if ((PWM_BOTH_EDGES == Notification) || (PWM_FALLING_EDGE == Notification))
            {
                RetVal = (Std_ReturnType)E_NOT_OK;
            }
            else
            {
                RetVal = (Std_ReturnType)E_OK;
            }
            break;
#endif
        case PWM_CHANNEL_NONE:
        default:
            RetVal = (Std_ReturnType)E_NOT_OK;
            break;
    }
    (void)Notification;

    return RetVal;
}
#endif /* PWM_DEV_ERROR_DETECT && PWM_NOTIFICATION_SUPPORTED */

/*=============================================================================================*/
#if ((PWM_DEV_ERROR_DETECT == STD_ON) && (PWM_FORCE_OUTPUT_TO_ZERO_API == STD_ON))
/**
* @brief        Pwm_Ipw_ValidateForceOutputToZero
* @details      This function will check validate of Force zero output feature
*
* @param[in]    channelNumber  PWM channel ID in top configuration structure
* @param[in]    IpConfig       Pointer to PWM top configuration structure
*
* @retval       Std_ReturnType
*               E_NOT_OK        Force zero output not support
*               E_OK            Force zero output is valid
*
*/
Std_ReturnType Pwm_Ipw_ValidateForceOutputToZero(const Pwm_IpwChannelConfigType * const IpConfig)
{
    /** @brief  Variable to store the value returned by the function */
    Std_ReturnType                      RetVal = (Std_ReturnType)E_OK;

    (void)IpConfig;

    return RetVal;
}
#endif

/*===============================================================================================*/
#if ((PWM_DEV_ERROR_DETECT == STD_ON) && ((PWM_SET_PHASE_SHIFT_API == STD_ON) || (PWM_SET_PHASE_SHIFT_NO_UPDATE_API == STD_ON) || (PWM_SET_DUTY_PHASE_SHIFT_API == STD_ON)))
/**
* @brief        Pwm_Ipw_ValidateSetPhaseShift
* @details      This function will check given channel with phase shift supported
*
* @param[in]    channelNumber  PWM logical channel ID in top configuration structure
* @param[in]    IpConfig       Pointer to PWM top configuration structure
*
* @return       Std_ReturnType
*               E_NOT_OK        Phase shift is not supported this channel
*               E_OK            Phase shift is supported this channel
*
*/
Std_ReturnType Pwm_Ipw_ValidateSetPhaseShift(const Pwm_IpwChannelConfigType * const IpConfig)
{

    /** @brief  Variable to store the value returned by the function */
    Std_ReturnType                      RetVal = (Std_ReturnType)E_OK;
#if (PWM_FTM_USED == STD_ON)
    Ftm_Pwm_Ip_ChannelModeType          ChMode;
#endif

    switch(IpConfig->ChannelType)
    {
#if (PWM_FTM_USED == STD_ON)
        case PWM_CHANNEL_FTM:
            ChMode = (Ftm_Pwm_Ip_ChannelModeType)(((const Ftm_Pwm_Ip_ChannelConfigType *)IpConfig->FtmChConfig)->ChannelMode);
        
            if (( FTM_PWM_IP_MODE_COMBINE_HIGH          != ChMode) &&
        #if (defined(FTM_PWM_IP_HAS_MODIFIED_COMBINE_MODE) && (FTM_PWM_IP_HAS_MODIFIED_COMBINE_MODE == STD_ON))
                ( FTM_PWM_IP_MODE_MODIFIED_COMBINE_HIGH != ChMode) &&
                ( FTM_PWM_IP_MODE_MODIFIED_COMBINE_LOW  != ChMode) &&
        #endif
                ( FTM_PWM_IP_MODE_COMBINE_LOW           != ChMode))
            {
                RetVal = (Std_ReturnType)E_NOT_OK;
            }
            break;
#endif
#if (PWM_FLEXIO_USED == STD_ON)
        case PWM_CHANNEL_FLEXIO:
            RetVal = (Std_ReturnType)E_NOT_OK;
            break;
#endif
        case PWM_CHANNEL_NONE:
        default:
            RetVal = (Std_ReturnType)E_NOT_OK;
            break;

    }

    return RetVal; 
}
#endif /* PWM_DEV_ERROR_DETECT && (PWM_SET_PHASE_SHIFT_API || PWM_SET_PHASE_SHIFT_NO_UPDATE_API || PWM_SET_DUTY_PHASE_SHIFT_API == STD_ON) */

/*===============================================================================================*/
#if ((PWM_DEV_ERROR_DETECT == STD_ON) && ((PWM_SET_PHASE_SHIFT_API == STD_ON) || (PWM_SET_PHASE_SHIFT_NO_UPDATE_API == STD_ON)))
/**
* @brief        Pwm_Ipw_ValidateSetPhaseShiftParams
* @details      This function will check phase shift value, has to be equal or lower than duty 50%
*
* @param[in]    PhaseShift   Phase shift value
*
* @return       Std_ReturnType
*               E_NOT_OK    Phase shift value is invalid
*               E_OK        Phase shift value is valid
*
*/
Std_ReturnType Pwm_Ipw_ValidateSetPhaseShiftParams(uint16 PhaseShift)
{

    /** @brief  Variable to store the value returned by the function */
    Std_ReturnType                      RetVal = (Std_ReturnType)E_OK;

    if (PWM_HALF_PERIOD_DUTY < PhaseShift)
    {
        RetVal = (Std_ReturnType)E_NOT_OK;
    }

    return RetVal;

}
#endif /* PWM_DEV_ERROR_DETECT && (PWM_SET_PHASE_SHIFT_API || PWM_SET_PHASE_SHIFT_NO_UPDATE_API) */

/*===============================================================================================*/
#if ((PWM_DEV_ERROR_DETECT == STD_ON) && (PWM_SET_DUTY_PHASE_SHIFT_API == STD_ON))
/**
* @brief        Pwm_Ipw_ValidateSetPhaseShiftParams
* @details      This function will check phase shift and duty cycle value
*
* @param[in]    PhaseShift   Phase shift value
* @param[in]    dutycycle    Duty Cycle value
*
* @return       Std_ReturnType  
*               E_NOT_OK    Phase shift or duty cycle value is invalid
*               E_OK        Phase shift or duty cycle is valid
*
*/
Std_ReturnType Pwm_Ipw_ValidateSetDutyPhaseShiftParams(uint16 PhaseShift,
                                                       uint16 DutyCycle,
                                                       const Pwm_IpwChannelConfigType * const IpConfig)
{
        /** @brief  Variable to store the value returned by the function */
    Std_ReturnType  RetVal = (Std_ReturnType)E_OK;

    if ((FTM_PWM_IP_MAX_DUTY_CYCLE != DutyCycle) && (0U != DutyCycle))
    {
        if (Ftm_Pwm_Ip_aPeriod[IpConfig->ChannelInstanceId] <= PhaseShift)
        {
            RetVal = (Std_ReturnType)E_NOT_OK;
        }
    }

    return RetVal;
}
#endif

/*===============================================================================================*/
#if ((PWM_DEV_ERROR_DETECT == STD_ON) && ((PWM_SET_DUTY_CYCLE_NO_UPDATE_API == STD_ON) || (PWM_SET_PERIOD_AND_DUTY_NO_UPDATE_API == STD_ON) || (PWM_SET_PHASE_SHIFT_NO_UPDATE_API == STD_ON) || (PWM_SYNC_UPDATE_API == STD_ON)))
/**
* @brief        Pwm_Ipw_ValidateUpdateSynchronous
* @details      This function will check given channel with synchronization supported
*
* @param[in]    channelNumber  PWM logical channel ID in top configuration structure
* @param[in]    IpConfig       Pointer to PWM top configuration structure
*
* @return       Std_ReturnType
*               E_NOT_OK   synchronization is not supported this channel
*               E_OK       synchronization is supported this channel
*
*/
Std_ReturnType Pwm_Ipw_ValidateUpdateSynchronous(const Pwm_IpwChannelConfigType * const IpConfig)
{

    /** @brief  Variable to store the value returned by the function */
    Std_ReturnType                      RetVal = (Std_ReturnType)E_OK;

    switch(IpConfig->ChannelType)
    {
#if (PWM_FTM_USED == STD_ON)
        case PWM_CHANNEL_FTM:
            RetVal = (Std_ReturnType)E_OK;
            break;
#endif
#if (PWM_FLEXIO_USED == STD_ON)
        case PWM_CHANNEL_FLEXIO:
            RetVal = (Std_ReturnType)E_NOT_OK;
            break;
#endif
        case PWM_CHANNEL_NONE:
        default:
            RetVal = (Std_ReturnType)E_NOT_OK;
            break;

    }

    return RetVal;
}
#endif /* PWM_DEV_ERROR_DETECT && (PWM_SET_DUTY_CYCLE_NO_UPDATE_API || PWM_SET_PERIOD_AND_DUTY_NO_UPDATE_API) */

/*===============================================================================================*/
#if ((PWM_DEV_ERROR_DETECT == STD_ON) && ((PWM_ENABLE_TRIGGER_API == STD_ON) || (PWM_DISABLE_TRIGGER_API == STD_ON)))
/**
* @brief        This function will check bit mask.
* @details      Bit mask will be process at lower layer has to be compatible with hardware register
*
* @param[in]    TriggerMask  Trigger mask value
* @param[in]    IpConfig       Pointer to PWM top configuration structure
*
* @return       Std_ReturnType
*               E_NOT_OK  Bit mask is not compatible.
*               E_OK      Bit mask is compatible.
*/
Std_ReturnType Pwm_Ipw_ValidateTriggerMask(uint32 TriggerMask,
                                           const Pwm_IpwChannelConfigType * const IpConfig)
{

    /** @brief  Variable to store the value returned by the function */
    Std_ReturnType                      RetVal = (Std_ReturnType)E_OK;
 
    if ((uint32)0U != (
                        TriggerMask &
                        (~(uint32)((uint32)FTM_EXTTRIG_CH0TRIG_MASK |
                               (uint32)FTM_EXTTRIG_CH1TRIG_MASK |
                               (uint32)FTM_EXTTRIG_CH2TRIG_MASK |
                               (uint32)FTM_EXTTRIG_CH3TRIG_MASK |
                               (uint32)FTM_EXTTRIG_CH4TRIG_MASK |
                               (uint32)FTM_EXTTRIG_CH5TRIG_MASK |
                               (uint32)FTM_EXTTRIG_INITTRIGEN_MASK))
                       )
       )

    {
        RetVal = (Std_ReturnType)E_NOT_OK;
    }

    /* This parameter is not used */
    (void)IpConfig;

    return RetVal;

}
#endif /* PWM_DEV_ERROR_DETECT && (PWM_ENABLE_TRIGGER_API || PWM_DISABLE_TRIGGER_API) */

/*===============================================================================================*/
#if ((PWM_SET_OUTPUT_TO_IDLE_API == STD_ON) && (PWM_DEV_ERROR_DETECT == STD_ON))
#if (defined(PWM_SETOUTPUTTOIDLE_PLAUSABILITY) && (PWM_SETOUTPUTTOIDLE_PLAUSABILITY == STD_ON))
/**
* @brief            Pwm_Ipw_ValidateSetOutPutToIdle
* @details          This function will check the validation when calling the Pwm_SetOutputToIdle api.
*
* @param[in]        IpConfig        Pointer to PWM top configuration structure
*
* @RetVal           RetVal          E_NOT_OK  Set output to idle is not valid
                                    E_OK      Set output to idle is valid
*/
Std_ReturnType Pwm_Ipw_ValidateSetOutPutToIdle(const Pwm_IpwChannelConfigType * const IpConfig)
{
    /** @brief  Variable to store the value returned by the function */
    Std_ReturnType      RetVal = (Std_ReturnType)E_OK;
    
    switch(IpConfig->ChannelType)
    {
#if (PWM_FTM_USED == STD_ON)
        case PWM_CHANNEL_FTM:
            RetVal = (Std_ReturnType)E_OK;
            break;
#endif
#if (PWM_FLEXIO_USED == STD_ON)
        case PWM_CHANNEL_FLEXIO:
            RetVal = (Std_ReturnType)E_NOT_OK;
            break;
#endif
        case PWM_CHANNEL_NONE:
        default:
            RetVal = (Std_ReturnType)E_NOT_OK;
            break;

    }

    return RetVal; 
}
#endif /* (defined(PWM_SETOUTPUTTOIDLE_PLAUSABILITY) && (PWM_SETOUTPUTTOIDLE_PLAUSABILITY == STD_ON)) */
#endif /* (PWM_SET_OUTPUT_TO_IDLE_API == STD_ON) && (PWM_DEV_ERROR_DETECT == STD_ON) */

/*===============================================================================================*/
#if (PWM_DEV_ERROR_DETECT == STD_ON)
    #if ((PWM_SYNC_UPDATE_API            == STD_ON) || \
         (PWM_ENABLE_TRIGGER_API         == STD_ON) || \
         (PWM_DISABLE_TRIGGER_API        == STD_ON) || \
         (PWM_RESET_COUNTER_API          == STD_ON) || \
         (PWM_ENABLE_MASKING_OPERATIONS  == STD_ON) || \
         (PWM_RELOAD_NOTIF_SUPPORTED     == STD_ON))
/**
* @brief        Pwm_Ipw_ValidateModuleId
* @details      Validate the module id.
*               In order to be valid, the module id should less than number of module that supported
*
* @param[in]    ModuleId        The Id of the ipv module
*
* @return       Std_ReturnType
*               E_NOT_OK        The ModuleId is invalid
*               E_OK            The ModuleId is valid
*
*/     
Std_ReturnType  Pwm_Ipw_ValidateModuleId(uint8 ModuleId)
{
    /** @brief  Variable to store the value returned by the function */
    Std_ReturnType      RetVal = (Std_ReturnType)E_OK;
#if (PWM_FTM_USED == STD_ON)    
    if(PWM_HW_MODULE_FTM_NO <= ModuleId)
    {
        RetVal = (Std_ReturnType)E_NOT_OK;
    }
    else
    {
        RetVal = (Std_ReturnType)E_OK;
    }
#else
    RetVal = (Std_ReturnType)E_NOT_OK;
    (void)ModuleId;
#endif

    return RetVal;
}
    #endif
#endif

/*===============================================================================================*/
#if (PWM_MAX_PERIOD_PLAUSABILITY == STD_ON)
    #if ((PWM_SET_PERIOD_AND_DUTY_API == STD_ON) || (PWM_SET_PERIOD_AND_DUTY_NO_UPDATE_API == STD_ON) || \
         (PWM_SET_PHASE_SHIFT_API == STD_ON) || (PWM_SET_PHASE_SHIFT_NO_UPDATE_API == STD_ON))
/**
* @brief        Pwm_Ipw_GetMaxPeriodValue
* @details      Get the maximum Period in specific hardware module.
*
* @param[in]    IpConfig        Pointer to PWM top configuration structure
*
* @return       uint32
*
*/  
uint32 Pwm_Ipw_GetMaxPeriodValue(const Pwm_IpwChannelConfigType * const IpConfig)
{
    /** @brief  Store return value */
    uint32               RetVal = (uint32)0xFFFFU;

    switch(IpConfig->ChannelType)
    {
#if (PWM_FTM_USED == STD_ON)
        case PWM_CHANNEL_FTM:
            RetVal = (uint32)0xFFFEU;
            break;
#endif
#if (PWM_FLEXIO_USED == STD_ON)
        case PWM_CHANNEL_FLEXIO:
            RetVal = (uint32)0x200U;
            break;
#endif
        case PWM_CHANNEL_NONE:
        default:
            /* Do Nothing */
            break;
    }

    return RetVal;
}
    #endif /* ((PWM_SET_PERIOD_AND_DUTY_API == STD_ON) || (PWM_SET_PERIOD_AND_DUTY_NO_UPDATE_API == STD_ON)) */
#endif

/*===============================================================================================*/
#if (PWM_POWER_STATE_SUPPORTED == STD_ON)
/**
* @brief        Pwm_Ipw_ValidateIdleState
* @details      This function will call ValidateIdleState function of all configured hardware eMIOS modules
*
* @param[in]    IpConfig        Pointer to PWM top configuration structure
*
* @return       Std_ReturnType
*               E_NOT_OK        The Idle state is not ready
*               E_OK            The Idle state is ready
*
*/
Std_ReturnType Pwm_Ipw_ValidateIdleState(const Pwm_IpwChannelConfigType * const IpConfig)
{

    /** @brief  Variable to store the value returned by the function */
    Std_ReturnType                      RetVal = (Std_ReturnType)E_OK;
                                    
    if (FTM_PWM_IP_CHANNEL_RUNNING == Ftm_Pwm_Ip_aChannelState[IpConfig->ChannelInstanceId][((const Ftm_Pwm_Ip_ChannelConfigType *)IpConfig->FtmChConfig)->ChannelId])
    {
        RetVal = (Std_ReturnType)E_NOT_OK;
    }
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
    if (FTM_PWM_IP_NO_EDGE != Ftm_Pwm_Ip_aNotifIrq[IpConfig->ChannelInstanceId][((const Ftm_Pwm_Ip_ChannelConfigType *)IpConfig->FtmChConfig)->ChannelId])
    {
        RetVal = (Std_ReturnType)E_NOT_OK;
    }
#endif
    return RetVal;

}
#endif /* PWM_POWER_STATE_SUPPORTED */

/*===============================================================================================*/
#if (PWM_POWER_STATE_SUPPORTED == STD_ON)
/**
* @brief        Pwm_Ipw_SetPowerState
* @details      This function will call SetPowerState function of all configured hardware eMIOS modules
*
* @param[in]    PowerState     Target power mode
* @param[in]    IpConfig       Pointer to PWM top configuration structure
*
* @return       void
*
*/
void Pwm_Ipw_SetPowerState(const Pwm_IpwInstanceConfigType * const IpConfig,
                           Pwm_PowerStateType       PowerState)
{

#if (PWM_FTM_USED == STD_ON)
    Ftm_Pwm_Ip_PowerStateType        FtmPowerState;

    if (PWM_FULL_POWER == PowerState)
    {
        FtmPowerState = FTM_PWM_IP_FULL_POWER;
    }
    else
    {
        FtmPowerState = FTM_PWM_IP_LOW_POWER;
    }
#endif
    switch(IpConfig->InstanceType)
    {
#if (PWM_FTM_USED == STD_ON)
        case PWM_INSTANCE_FTM:
            if (NULL_PTR != IpConfig->FtmInsConfig)
            {
                /* Call Ftm IP initialize instances */
                Ftm_Pwm_Ip_SetPowerState(IpConfig->InstanceId,
                                         FtmPowerState);
            }
            break;
#endif
        case PWM_INSTANCE_NONE:
            /* Nothing to do. No hw channel assigned to the logical channel */
            break;
        default:
            /* Nothing to do. */
            break;
    }
    (void)PowerState;

}
#endif /* PWM_POWER_STATE_SUPPORTED */

#define PWM_STOP_SEC_CODE
#include "Pwm_MemMap.h"


#ifdef __cplusplus
}
#endif

/** @} */
