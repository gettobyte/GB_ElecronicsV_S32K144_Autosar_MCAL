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

#ifndef PWM_IPW_H
#define PWM_IPW_H

/**
*   @file       Pwm_Ipw.h
*
*   @internal
*   @addtogroup pwm_driver Pwm Driver
*   @{
*/


#ifdef __cplusplus
extern "C" {
#endif

/*===============================================================================================
*                                         INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
===============================================================================================*/

#include "Pwm_Ipw_Types.h"

#include "Pwm.h"

/*===============================================================================================
*                               SOURCE FILE VERSION INFORMATION
===============================================================================================*/
#define PWM_IPW_VENDOR_ID                         43
#define PWM_IPW_AR_RELEASE_MAJOR_VERSION          4
#define PWM_IPW_AR_RELEASE_MINOR_VERSION          4
#define PWM_IPW_AR_RELEASE_REVISION_VERSION       0
#define PWM_IPW_SW_MAJOR_VERSION                  1
#define PWM_IPW_SW_MINOR_VERSION                  0
#define PWM_IPW_SW_PATCH_VERSION                  0

/*===============================================================================================
*                                      FILE VERSION CHECKS
===============================================================================================*/

/* Check if header file and Pwm_Ipw_Types header file are of the same vendor */
#if (PWM_IPW_VENDOR_ID != PWM_IPW_TYPES_VENDOR_ID)
    #error "Vendor IDs of Pwm_Ipw.h and Pwm_Ipw_Types.h are different."
#endif

/* Check if header file and Pwm_Ipw_Types header file are of the same AUTOSAR version */
#if ((PWM_IPW_AR_RELEASE_MAJOR_VERSION    != PWM_IPW_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (PWM_IPW_AR_RELEASE_MINOR_VERSION    != PWM_IPW_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (PWM_IPW_AR_RELEASE_REVISION_VERSION != PWM_IPW_TYPES_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR version numbers of Pwm_Ipw.h and Pwm_Ipw_Types.h are different."
#endif

/* Check if header file and Pwm_Ipw_Types header file are of the same software version */
#if ((PWM_IPW_SW_MAJOR_VERSION != PWM_IPW_TYPES_SW_MAJOR_VERSION) || \
     (PWM_IPW_SW_MINOR_VERSION != PWM_IPW_TYPES_SW_MINOR_VERSION) || \
     (PWM_IPW_SW_PATCH_VERSION != PWM_IPW_TYPES_SW_PATCH_VERSION))
    #error "Software version numbers of Pwm_Ipw.h and Pwm_Ipw_Types.h are different."
#endif



/* Check if header file and Pwm header file are of the same vendor */
#if (PWM_IPW_VENDOR_ID != PWM_VENDOR_ID)
    #error "Pwm_Ipw.h and Pwm.h have different vendor ids"
#endif

/* Check if header file and Pwm header file are of the same AUTOSAR version */
#if ((PWM_IPW_AR_RELEASE_MAJOR_VERSION    != PWM_AR_RELEASE_MAJOR_VERSION) || \
     (PWM_IPW_AR_RELEASE_MINOR_VERSION    != PWM_AR_RELEASE_MINOR_VERSION) || \
     (PWM_IPW_AR_RELEASE_REVISION_VERSION != PWM_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR version numbers of Pwm_Ipw.h and Pwm.h are different"
#endif

/* Check if header file and Pwm header file are of the same software version */
#if ((PWM_IPW_SW_MAJOR_VERSION != PWM_SW_MAJOR_VERSION) || \
     (PWM_IPW_SW_MINOR_VERSION != PWM_SW_MINOR_VERSION) || \
     (PWM_IPW_SW_PATCH_VERSION != PWM_SW_PATCH_VERSION))
    #error "Software version numbers of Pwm_Ipw.h and Pwm.h are different"
#endif

/*===============================================================================================
*                                     FUNCTION PROTOTYPES
===============================================================================================*/

#define PWM_START_SEC_CODE
#include "Pwm_MemMap.h"


/**
* @brief        Pwm_Ipw_Init
* @details      This function call the supported IP initialization functions.
*
* @param[in]    ipConfig       Pointer to PWM top configuration structure
*
* @return       void
*
*/
void Pwm_Ipw_Init(const Pwm_IpwChannelConfigType * const ipConfig);

#if (PWM_HW_INSTANCE_USED == STD_ON)
/**
* @brief        Pwm driver Autosar independent and IP dependent initialization function.
* @details      This Pwm_Ipw_InitInstance is called once for each channel in the used configuration.
*               It determines the type of the HW channel (e.g. Ftm,etc...) and calls the
*               appropriate IP function in order to initializes the hardware timer.
*
* @param[in]    ipConfig    Pointer to the channel configuration structure dependent by platform
*
* @return       void
*
*/
void Pwm_Ipw_InitInstance(const Pwm_IpwInstanceConfigType * const ipConfig);
#endif /* PWM_HW_INSTANCE_USED == STD_ON */


#if (PWM_DE_INIT_API == STD_ON)
/**
* @brief        Pwm_Ipw_DeInit
* @details      This function call the supported IP de-initialization functions.
*
* @param[in]    ipConfig       Pointer to PWM top configuration structure
* @param[in]    channelIdleState    The state of the channel output in idle mode
*
* @return       void
*
*/
void Pwm_Ipw_DeInit(const Pwm_IpwChannelConfigType * const ipConfig, Pwm_OutputStateType channelIdleState);

#if (PWM_HW_INSTANCE_USED == STD_ON)
/**
* @brief        Pwm_Ipw_DeInitInstance
* @details      This function call the supported IP de-initialization functions.
*
* @param[in]    ipConfig       Pointer to PWM top configuration structure
*
* @return       void
*
*/
void Pwm_Ipw_DeInitInstance(const Pwm_IpwInstanceConfigType * const ipConfig);
#endif

#endif /* PWM_DE_INIT_API */


#if (PWM_SET_DUTY_CYCLE_API == STD_ON)
/**
* @brief        Pwm_Ipw_SetDutyCycle
* @details      This function will call SetDutyCycle function for the corresponding IP of PwmChannel
*
* @param[in]    dutyCycle      Duty cycle value 0x0000 for 0% ... 0x8000 for 100%
* @param[in]    ipConfig       Pointer to PWM top configuration structure
*
* @return       void
*
*/
Std_ReturnType Pwm_Ipw_SetDutyCycle(uint16 dutyCycle,
                                    const Pwm_IpwChannelConfigType * const ipConfig);
#endif /* PWM_SET_DUTY_CYCLE_API */


#if (PWM_SET_PERIOD_AND_DUTY_API == STD_ON)
/**
* @brief        Pwm_Ipw_SetPeriodAndDuty
* @details      This function will call SetPeriodAndDuty function for the corresponding IP of PwmChannel
*
* @param[in]    period         Period value for this channel
* @param[in]    dutyCycle      Duty cycle value 0x0000 for 0% ... 0x8000 for 100%
* @param[in]    ipConfig       Pointer to PWM top configuration structure
*
* @return       void
*
*/
void Pwm_Ipw_SetPeriodAndDuty(Pwm_PeriodType                 period,
                              uint16                         dutyCycle,
                              const Pwm_IpwChannelConfigType * const ipConfig);
#endif /* PWM_SET_PERIOD_AND_DUTY_API */


#if (PWM_SET_OUTPUT_TO_IDLE_API == STD_ON)
/**
* @brief        Pwm_Ipw_SetOutputToIdle
* @details      This function will call SetOutputToIdle function for the corresponding IP of PwmChannel
*
* @param[in]    ipConfig       Pointer to PWM top configuration structure
*
* @return       void
*
*/
void Pwm_Ipw_SetOutputToIdle(const Pwm_OutputStateType idleState, const Pwm_IpwChannelConfigType * const ipConfig);
#endif /* PWM_SET_OUTPUT_TO_IDLE_API */


#if (PWM_GET_OUTPUT_STATE_API == STD_ON)
/**
* @brief        Pwm_Ipw_GetOutputState
* @details      This function will call GetOutputState function for the corresponding IP of PwmChannel
*
* @param[in]    ipConfig       Pointer to PWM top configuration structure
*
* @return       Pwm_OutputStateType
*
*/
Pwm_OutputStateType Pwm_Ipw_GetOutputState(const Pwm_IpwChannelConfigType * const ipConfig);

#endif /* PWM_GET_OUTPUT_STATE_API */


#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
/**
* @brief        Pwm_Ipw_DisableNotification
* @details      This function will call DisableNotification function for the corresponding IP of PwmChannel
*
* @param[in]    ipConfig       Pointer to PWM top configuration structure
*
* @return       void
*
*/
void Pwm_Ipw_DisableNotification(const Pwm_IpwChannelConfigType * const ipConfig);

#endif /* PWM_NOTIFICATION_SUPPORTED */


#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
/**
* @brief        Pwm_Ipw_EnableNotification
* @details      This function will call EnableNotification function for the corresponding IP of PwmChannel
*
* @param[in]    notification   Notification edge type to be enabled
* @param[in]    ipConfig       Pointer to PWM top configuration structure
*
* @return       void
*
*/
void Pwm_Ipw_EnableNotification(Pwm_EdgeNotificationType        notification,
                                const Pwm_IpwChannelConfigType * const ipConfig);
#endif /* PWM_NOTIFICATION_SUPPORTED */


#if (PWM_GET_CHANNEL_STATE_API == STD_ON)
/**
* @brief        Pwm_Ipw_GetChannelState
* @details      This function will call GetChannelState function for the corresponding IP of PwmChannel
*
* @param[in]    channelNumber  PWM logical channel ID in top configuration structure
* @param[in]    ipConfig       Pointer to PWM top configuration structure
*
* @return       uint16
*
*/
uint16 Pwm_Ipw_GetChannelState(const Pwm_IpwChannelConfigType * const ipConfig);
#endif /* PWM_GET_CHANNEL_STATE_API */


#if (PWM_FORCE_OUTPUT_TO_ZERO_API == STD_ON)
/**
* @brief        Pwm_Ipw_ForceOutputToZero
* @details      This function will call ForceOutputToZero function only if then channel is a
*               FTM channel
*
* @param[in]    channelNumber  PWM logical channel ID in top configuration structure
* @param[in]    force          Flag to state if force to zero should be applied or not
* @param[in]    ipConfig       Pointer to PWM top configuration structure
*
* @return       void
*
*/
void Pwm_Ipw_ForceOutputToZero(boolean                        force,
                               const Pwm_IpwChannelConfigType * const ipConfig);
#endif /* PWM_FORCE_OUTPUT_TO_ZERO_API */


#if (PWM_SET_CLOCK_MODE_API == STD_ON)
/**
* @brief        Pwm_Ipw_SetClockMode
* @details      This function will call SetClockMode function of all configured hardware modules.
*
* @param[in]    prescaler      Pre-scaler type
* @param[in]    ipConfig       Pointer to PWM top configuration structure
*
* @return       void
*
*/
void Pwm_Ipw_SetClockMode(Pwm_PrescalerType              prescaler,
                          const Pwm_IpwInstanceConfigType * const ipConfig);
#endif /* PWM_SET_CLOCK_MODE_API */


#if (PWM_SET_CHANNEL_DEAD_TIME_API == STD_ON)
/**
* @brief        
* @details      This function is used to update the deadtime at runtime for Pwm channels.
*
* @param[in]    channelNumber       pwm channel id
* @param[in]    deadTimeTicks       dead Time value
*
* @return       void
*
*
*/
void Pwm_Ipw_SetChannelDeadTime(uint16 deadTimeTicks,
                                const Pwm_IpwChannelConfigType * const ipConfig);
#endif /*PWM_SET_CHANNEL_DEAD_TIME_API*/
                                
                                
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
* @param[in]        triggerHostId  FTM module ID
* @param[in]        triggerMask    bit mask will be clear for FTM_EXTTRIG.
* @param[in]        ipConfig       Pointer to PWM top configuration structure
*
* @return           void
*
*/
void Pwm_Ipw_EnableTrigger(uint8                          triggerHostId,
                           uint16                         triggerMask,
                           const Pwm_IpwInstanceConfigType * const ipConfig);
#endif /* PWM_ENABLE_TRIGGER_API */


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
* @param[in]        triggerHostId  FTM module ID
* @param[in]        triggerMask    bit mask will be clear for FTM_EXTTRIG.
* @param[in]        ipConfig       Pointer to PWM top configuration structure
*
* @return           void
*
*/
void Pwm_Ipw_DisableTrigger(uint8                          triggerHostId,
                            uint16                         triggerMask,
                            const Pwm_IpwInstanceConfigType * const ipConfig);
#endif /* PWM_DISABLE_TRIGGER_API */


#if (PWM_RESET_COUNTER_API == STD_ON)
/**
* @brief        Pwm_Ipw_ResetCounterEnable
* @details      This function enables counter reset by Pwm_SyncUpdate() call
*
* @param[in]    moduleId      FTM module ID
* @param[in]    ipConfig      Pointer to PWM top configuration structure
*
* @return       void
*
*/
void Pwm_Ipw_ResetCounterEnable(uint8                          moduleId,
                                 const Pwm_IpwInstanceConfigType * const ipConfig);
#endif /* PWM_RESET_COUNTER_API */


#if (PWM_RESET_COUNTER_API == STD_ON)
/**
* @brief        Pwm_Ipw_ResetCounterDisable
* @details      This function disables counter reset by Pwm_SyncUpdate() call
*
* @param[in]    moduleId      FTM module ID
* @param[in]    ipConfig      Pointer to PWM top configuration structure
*
* @return       void
*
*/
void Pwm_Ipw_ResetCounterDisable(uint8                          moduleId,
                                  const Pwm_IpwInstanceConfigType * const ipConfig);
#endif /* PWM_RESET_COUNTER_API */


#if (PWM_ENABLE_MASKING_OPERATIONS == STD_ON)
/**
* @brief        This function force channels output to their inactive state
* @details      Corresponding bits with channel will be masked:
*                   Bit 0   Channel 0 Output Mask
*                   Bit 1   Channel 1 Output Mask
*                   Bit 2   Channel 2 Output Mask
*                   Bit 3   Channel 3 Output Mask
*                   Bit 4   Channel 4 Output Mask
*                   Bit 5   Channel 5 Output Mask
*
* @param[in]        moduleId      FTM module ID
* @param[in]        channelMask   bit mask will be set for FTM_OUTMASK.
* @param[in]        ipConfig      Pointer to PWM top configuration structure
*
* @return       void
*
*/
void Pwm_Ipw_MaskOutputs(uint8                          moduleId,
                         uint8                          channelMask,
                         const Pwm_IpwInstanceConfigType * const ipConfig);
#endif /* PWM_ENABLE_MASKING_OPERATIONS */


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
* @param[in]        moduleId      FTM module ID
* @param[in]        channelMask   bit mask will be set for FTM_OUTMASK.
* @param[in]        ipConfig      Pointer to PWM top configuration structure
*
* @return       void
*
*/
void Pwm_Ipw_UnMaskOutputs(uint8                          moduleId,
                           uint8                          channelMask,
                          const Pwm_IpwInstanceConfigType * const ipConfig);
#endif /* PWM_ENABLE_MASKING_OPERATIONS */


#if (PWM_SET_PHASE_SHIFT_API == STD_ON)
/**
* @brief        This function set phase shift value and also force duty cycle to 50%. The output will
*               effect immediately after calling this function.
* @details      In order to have Phase-Shifted Full-Bridge controller, Pwm_SetPhaseShift is introduced.
*               This function bases on FTM Combine mode with Cn and C(n+1) combine to generate leading
*               edge and trailing edge. Pwm_SetPhaseShift allows to set both phase shift value and period,
*               the duty value is fixed to 50%.
*
* @param[in]    channelNumber  PWM logical channel ID in top configuration structure
* @param[in]    period         Period value for this channel
* @param[in]    phaseShift     Phase shift value
* @param[in]    ipConfig       Pointer to PWM top configuration structure
*
* @return       void
*
*/
void Pwm_Ipw_SetPhaseShift(uint16                           period,
                           uint16                           phaseShift,
                           const Pwm_IpwChannelConfigType * const ipConfig);
#endif /*PWM_SET_PHASE_SHIFT_API*/


#if (PWM_SET_DUTY_PHASE_SHIFT_API == STD_ON)
/**
* @brief        This function set phase shift and duty cycle value (as immediate or synchronized base on API parameter SyncUpdate)
*
* @details      Pwm_Ipw_SetDutyPhaseShift allows to set both phase shift and duty cycle value,
*               The phase shift is the offset of the leading edge of the signal in respect to period starting point.
*
* @param[in]    dutyCycle               Pwm duty cycle value 0x0000 for 0% ... 0x8000 for 100%
* @param[in]    phaseShift              Phase shift value (in ticks)
* @param[in]    boolean                 SyncUpdate
*                      TRUE             Set the phase shift and duty cycle value base on the synchronization when calling Pwm_SyncUpdate.
*                      FALSE            Set phase shift and duty cycle value immediately
*
* @return       void
*
*/
void Pwm_Ipw_SetDutyPhaseShift(uint16                           dutyCycle,
                               uint16                           phaseShift,
                               const Pwm_IpwChannelConfigType * const ipConfig,
                               boolean                          SyncUpdate);
#endif /*PWM_SET_DUTY_PHASE_SHIFT_API*/


#if ((PWM_UPDATE_DUTY_SYNCHRONOUS == STD_ON) && (PWM_SET_DUTY_CYCLE_NO_UPDATE_API == STD_ON))
/**
* @brief        Pwm_Ipw_SetDutyCycle_NoUpdate
* @details      This function will call Ftm_Pwm_Ip_SetDutyCycle (synchronous mode) if
*               the given channel is a FTM channel
*
* @param[in]    dutyCycle      Duty cycle value 0x0000 for 0% ... 0x8000 for 100%
* @param[in]    ipConfig       Pointer to PWM top configuration structure
*
* @return       void
*
*/
Std_ReturnType Pwm_Ipw_SetDutyCycle_NoUpdate(uint16                         dutyCycle,
                                             const Pwm_IpwChannelConfigType * const ipConfig);
#endif /* PWM_UPDATE_DUTY_SYNCHRONOUS && PWM_SET_DUTY_CYCLE_NO_UPDATE_API */


#if ((PWM_UPDATE_DUTY_SYNCHRONOUS == STD_ON) && (PWM_SET_PERIOD_AND_DUTY_NO_UPDATE_API == STD_ON))
/**
* @brief        Pwm_Ipw_SetPeriodAndDuty_NoUpdate
* @details      This function will call Ftm_Pwm_Ip_SetPeriodAndDuty (synchronous mode)
*               if the given channel is a FTM channel
*
* @param[in]    channelNumber  PWM logical channel ID in top configuration structure
* @param[in]    period         Period value for this channel
* @param[in]    dutyCycle      Duty cycle value 0x0000 for 0% ... 0x8000 for 100%
* @param[in]    ipConfig       Pointer to PWM top configuration structure
*
* @return       void
*
*/
void Pwm_Ipw_SetPeriodAndDuty_NoUpdate(Pwm_PeriodType                 period,
                                       uint16                         dutyCycle,
                                       const Pwm_IpwChannelConfigType * const ipConfig);
#endif /* PWM_UPDATE_DUTY_SYNCHRONOUS && PWM_SET_PERIOD_AND_DUTY_NO_UPDATE_API */


#if ((PWM_UPDATE_DUTY_SYNCHRONOUS == STD_ON) && (PWM_SET_PHASE_SHIFT_NO_UPDATE_API == STD_ON))
/**
* @brief        This function set phase shift value and also force duty cycle to 50%. The output will take
*               effect after Pwm_SyncUpdate be called.
* @details      In order to have Phase-Shifted Full-Bridge controller, Pwm_SetPhaseShift is introduced.
*               This function bases on FTM Combine mode with Cn and C(n+1) combine to generate leading
*               edge and trailing edge. Pwm_SetPhaseShift allows to set both phase shift value and period,
*               the duty value is fixed to 50%.
*
* @param[in]    channelNumber  PWM logical channel ID in top configuration structure
* @param[in]    period         Period value for this channel
* @param[in]    phaseShift     Phase shift value
* @param[in]    ipConfig       Pointer to PWM top configuration structure
*
* @return       void
*
*/
void Pwm_Ipw_SetPhaseShift_NoUpdate(uint16                         period,
                                    uint16                         phaseShift,
                                    const Pwm_IpwChannelConfigType * const ipConfig);
#endif /* PWM_SET_PHASE_SHIFT_NO_UPDATE_API */


#if ((PWM_UPDATE_DUTY_SYNCHRONOUS == STD_ON) && (PWM_SYNC_UPDATE_API == STD_ON))
/**
* @brief        Pwm_Ipw_SyncUpdate
* @details      This function will call Ftm_Pwm_Ip_SyncUpdate to allow synchronized loading
*               of the duty registers for all the channels of a given FTM module
*
* @param[in]    moduleId      Instance Id of FTM
*                              Ex:  PWM_FTM_INSTANCE_0
*                                   PWM_FTM_INSTANCE_1
*                                   ....
*
* @return       void
*
*/
void Pwm_Ipw_SyncUpdate(uint8 moduleId);
#endif /* PWM_UPDATE_DUTY_SYNCHRONOUS && PWM_SYNC_UPDATE_API */


#if ((PWM_DEV_ERROR_DETECT == STD_ON) && (PWM_SET_CHANNEL_DEAD_TIME_API == STD_ON))
/**
* @brief        Pwm_Ipw_ValidateDeadTime
* @details      This function will check validate operation mode of current channel to use
*               trigger delay feature.
*
* @param[in]    ipConfig        Pointer to PWM top configuration structure
*
* @return       Std_ReturnType
*               E_NOT_OK        Current channel mode is invalid
*               E_OK            Current channel mode is valid
*
*/
Std_ReturnType Pwm_Ipw_ValidateDeadTime(const Pwm_IpwChannelConfigType * const ipConfig);

/**
* @brief        Pwm_Ipw_ValidateParamDeadTime
* @details      This function will check validate operation mode of current channel to use
*               trigger delay feature.
*
* @param[in]    ipConfig        Pointer to PWM top configuration structure
*
* @return       Std_ReturnType
*               E_NOT_OK        Current channel mode is invalid
*               E_OK            Current channel mode is valid
*
*/
Std_ReturnType Pwm_Ipw_ValidateParamDeadTime(uint16   deadTimeTicks,
                                             const Pwm_IpwChannelConfigType * const ipConfig);

#endif /* ((PWM_DEV_ERROR_DETECT == STD_ON) && (PWM_SET_CHANNEL_DEAD_TIME_API == STD_ON)) */


#if ((PWM_DEV_ERROR_DETECT == STD_ON) && (PWM_NOTIFICATION_SUPPORTED == STD_ON))
/**
* @brief        Pwm_Ipw_ValidateNotification
* @details      This function will check given channel with notification supported
*
* @param[in]    channelNumber  PWM logical channel ID in top configuration structure
* @param[in]    notification   Notification edge type
* @param[in]    ipConfig       Pointer to PWM top configuration structure
*
* @return       Std_ReturnType
*               E_NOT_OK      Notification handler is not valid
*               E_OK          Notification handler is valid
*
*/
Std_ReturnType Pwm_Ipw_ValidateNotification(Pwm_EdgeNotificationType       notification,
                                            const Pwm_IpwChannelConfigType * const ipConfig);
#endif /* PWM_DEV_ERROR_DETECT && PWM_NOTIFICATION_SUPPORTED */


#if ((PWM_DEV_ERROR_DETECT == STD_ON) && (PWM_FORCE_OUTPUT_TO_ZERO_API == STD_ON))
/**
* @brief        Pwm_Ipw_ValidateForceOutputToZero
* @details      This function will check validate of force zero output feature
*
* @param[in]    channelNumber  PWM channel ID in top configuration structure
* @param[in]    ipConfig       Pointer to PWM top configuration structure
*
* @retval       Std_ReturnType
*               E_NOT_OK        Force zero output not support
*               E_OK            Force zero output is valid
*
*/
Std_ReturnType Pwm_Ipw_ValidateForceOutputToZero(const Pwm_IpwChannelConfigType * const ipConfig);

#endif  /* ((PWM_DEV_ERROR_DETECT == STD_ON) && (PWM_FORCE_OUTPUT_TO_ZERO_API == STD_ON)) */


#if ((PWM_DEV_ERROR_DETECT == STD_ON) && ((PWM_SET_PHASE_SHIFT_API == STD_ON) || (PWM_SET_PHASE_SHIFT_NO_UPDATE_API == STD_ON) || (PWM_SET_DUTY_PHASE_SHIFT_API == STD_ON)))
/**
* @brief        Pwm_Ipw_ValidateSetPhaseShift
* @details      This function will check given channel with phase shift supported
*
* @param[in]    channelNumber  PWM logical channel ID in top configuration structure
* @param[in]    ipConfig       Pointer to PWM top configuration structure
*
* @return       Std_ReturnType
*               E_NOT_OK        Phase shift is not supported this channel
*               E_OK            Phase shift is supported this channel
*
*/
Std_ReturnType Pwm_Ipw_ValidateSetPhaseShift(const Pwm_IpwChannelConfigType * const ipConfig);
#endif /* PWM_DEV_ERROR_DETECT && (PWM_SET_PHASE_SHIFT_API || PWM_SET_PHASE_SHIFT_NO_UPDATE_API) */


#if ((PWM_DEV_ERROR_DETECT == STD_ON) && ((PWM_SET_PHASE_SHIFT_API == STD_ON) || (PWM_SET_PHASE_SHIFT_NO_UPDATE_API == STD_ON)))
/**
* @brief        Pwm_Ipw_ValidateSetPhaseShiftParams
* @details      This function will check phase shift value, has to be equal or lower than duty 50%
*
* @param[in]    phaseShift   Phase shift value
*
* @return       Std_ReturnType  
*               E_NOT_OK    Phase shift value is invalid
*               E_OK        Phase shift value is valid
*
*/
Std_ReturnType Pwm_Ipw_ValidateSetPhaseShiftParams(uint16 phaseShift);
#endif


#if ((PWM_DEV_ERROR_DETECT == STD_ON) && (PWM_SET_DUTY_PHASE_SHIFT_API == STD_ON))
/**
* @brief        Pwm_Ipw_ValidateSetPhaseShiftParams
* @details      This function will check phase shift and duty cycle value
*
* @param[in]    phaseShift   Phase shift value
* @param[in]    dutycycle    Duty Cycle value
*
* @return       Std_ReturnType  
*               E_NOT_OK    Phase shift or duty cycle value is invalid
*               E_OK        Phase shift or duty cycle is valid
*
*/
Std_ReturnType Pwm_Ipw_ValidateSetDutyPhaseShiftParams(uint16 phaseShift,
                                                       uint16 dutyCycle,
                                                       const Pwm_IpwChannelConfigType * const ipConfig);
#endif


#if ((PWM_DEV_ERROR_DETECT == STD_ON) && ((PWM_SET_DUTY_CYCLE_NO_UPDATE_API == STD_ON) || (PWM_SET_PERIOD_AND_DUTY_NO_UPDATE_API == STD_ON) || (PWM_SET_PHASE_SHIFT_NO_UPDATE_API == STD_ON) || (PWM_SYNC_UPDATE_API == STD_ON)))
/**
* @brief        Pwm_Ipw_ValidateUpdateSynchronous
* @details      This function will check given channel with synchronization supported
*
* @param[in]    channelNumber  PWM logical channel ID in top configuration structure
* @param[in]    ipConfig       Pointer to PWM top configuration structure
*
* @return       Std_ReturnType  
*               E_NOT_OK   synchronization is not supported this channel
*               E_OK       synchronization is supported this channel
*
*/
Std_ReturnType Pwm_Ipw_ValidateUpdateSynchronous(const Pwm_IpwChannelConfigType * const ipConfig);
#endif /* PWM_DEV_ERROR_DETECT && (PWM_SET_DUTY_CYCLE_NO_UPDATE_API || PWM_SET_PERIOD_AND_DUTY_NO_UPDATE_API) */


#if ((PWM_DEV_ERROR_DETECT == STD_ON) && ((PWM_ENABLE_TRIGGER_API == STD_ON) || (PWM_DISABLE_TRIGGER_API == STD_ON)))
/**
* @brief        This function will check bit mask.
* @details      Bit mask will be process at lower layer has to be compatible with hardware register
*
* @param[in]    triggerMask    Trigger mask value
* @param[in]    ipConfig       Pointer to PWM top configuration structure
*
* @return       Std_ReturnType  
*               E_NOT_OK  Bit mask is not compatible.
*               E_OK      Bit mask is compatible.
*/
Std_ReturnType Pwm_Ipw_ValidateTriggerMask(uint32 triggerMask,
                                            const Pwm_IpwChannelConfigType * const ipConfig);
#endif /* PWM_DEV_ERROR_DETECT && (PWM_ENABLE_TRIGGER_API || PWM_DISABLE_TRIGGER_API) */


#if ((PWM_SET_OUTPUT_TO_IDLE_API == STD_ON) && (PWM_DEV_ERROR_DETECT == STD_ON))
#if (defined(PWM_SETOUTPUTTOIDLE_PLAUSABILITY) && (PWM_SETOUTPUTTOIDLE_PLAUSABILITY == STD_ON))
/**
* @brief            Pwm_Ipw_ValidateSetOutPutToIdle
* @details          This function will check the validation when calling the Pwm_SetOutputToIdle api.
*
* @param[in]        ipConfig        Pointer to PWM top configuration structure
*
* @retVal           retVal          E_NOT_OK  Set output to idle is not valid
                                    E_OK      Set output to idle is valid
*/
Std_ReturnType Pwm_Ipw_ValidateSetOutPutToIdle(const Pwm_IpwChannelConfigType * const ipConfig);
#endif /* (defined(PWM_SETOUTPUTTOIDLE_PLAUSABILITY) && (PWM_SETOUTPUTTOIDLE_PLAUSABILITY == STD_ON)) */
#endif /* (PWM_SET_OUTPUT_TO_IDLE_API == STD_ON) && (PWM_DEV_ERROR_DETECT == STD_ON) */


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
* @param[in]    moduleId        The Id of the ipv module
*
* @return       Std_ReturnType
*               E_NOT_OK        The moduleId is invalid
*               E_OK            The moduleId is valid
*
*/     
Std_ReturnType  Pwm_Ipw_ValidateModuleId(uint8 moduleId);
    #endif
#endif


#if (PWM_MAX_PERIOD_PLAUSABILITY == STD_ON)
    #if ((PWM_SET_PERIOD_AND_DUTY_API == STD_ON) || (PWM_SET_PERIOD_AND_DUTY_NO_UPDATE_API == STD_ON) || \
         (PWM_SET_PHASE_SHIFT_API == STD_ON) || (PWM_SET_PHASE_SHIFT_NO_UPDATE_API == STD_ON))
/**
* @brief        Pwm_Ipw_GetMaxPeriodValue
* @details      Get the maximum period in specific hardware module.
*
* @param[in]    ipConfig        Pointer to PWM top configuration structure
*
* @return       uint32
*
*/  
uint32 Pwm_Ipw_GetMaxPeriodValue(const Pwm_IpwChannelConfigType * const ipConfig);

    #endif /* ((PWM_SET_PERIOD_AND_DUTY_API == STD_ON) || (PWM_SET_PERIOD_AND_DUTY_NO_UPDATE_API == STD_ON)) */
#endif


#if (PWM_POWER_STATE_SUPPORTED == STD_ON)
/**
* @brief        Pwm_Ipw_ValidateIdleState
* @details      This function will call ValidateIdleState function of all configured hardware modules
*
* @param[in]    ipConfig        Pointer to PWM top configuration structure
*
* @return       Std_ReturnType
*               E_NOT_OK        The Idle state is not ready
*               E_OK            The Idle state is ready
*
*/
Std_ReturnType Pwm_Ipw_ValidateIdleState(const Pwm_IpwChannelConfigType * const ipConfig);
#endif /* PWM_POWER_STATE_SUPPORTED */


#if (PWM_POWER_STATE_SUPPORTED == STD_ON)
/**
* @brief        Pwm_Ipw_SetPowerState
* @details      This function will call SetPowerState function of all configured hardware modules
*
* @param[in]    powerState     Target power mode
* @param[in]    ipConfig       Pointer to PWM top configuration structure
*
* @return       void
*
*/
void Pwm_Ipw_SetPowerState(const Pwm_IpwInstanceConfigType * const ipConfig,
                           Pwm_PowerStateType       powerState);
#endif /* PWM_POWER_STATE_SUPPORTED */


#define PWM_STOP_SEC_CODE
#include "Pwm_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* PWM_IPW_H */
