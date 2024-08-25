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

#ifndef FTM_OCU_IP_H
#define FTM_OCU_IP_H

/**
*   @file         Ftm_Ocu_Ip.h
*
*   @addtogroup   ocu_ip Ocu IPL
*   @brief        Ocu FTM driver header file.
*   @details      FTM driver interface.
*
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

#include "Ftm_Ocu_Ip_Types.h"
#include "Ftm_Ocu_Ip_Cfg.h"
#if (OCU_ENABLE_USER_MODE_SUPPORT == STD_ON)
    #include "Reg_eSys.h"
#endif

/*==================================================================================================
*                               HEADER FILE VERSION INFORMATION
==================================================================================================*/
#define FTM_OCU_IP_VENDOR_ID                       43
#define FTM_OCU_IP_AR_RELEASE_MAJOR_VERSION        4
#define FTM_OCU_IP_AR_RELEASE_MINOR_VERSION        4
#define FTM_OCU_IP_AR_RELEASE_REVISION_VERSION     0
#define FTM_OCU_IP_SW_MAJOR_VERSION                1
#define FTM_OCU_IP_SW_MINOR_VERSION                0
#define FTM_OCU_IP_SW_PATCH_VERSION                0
/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/
#if (FTM_OCU_IP_VENDOR_ID != FTM_OCU_IP_TYPES_VENDOR_ID)
    #error "Ftm_Ocu_Ip.h and Ftm_Ocu_Ip_Types.h have different vendor ids"
#endif

/* Check if  header file and Ftm_Ocu_Ip_Types.h file are of the same Autosar version */
#if ((FTM_OCU_IP_AR_RELEASE_MAJOR_VERSION != FTM_OCU_IP_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (FTM_OCU_IP_AR_RELEASE_MINOR_VERSION != FTM_OCU_IP_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (FTM_OCU_IP_AR_RELEASE_REVISION_VERSION != FTM_OCU_IP_TYPES_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Ftm_Ocu_Ip.h and Ftm_Ocu_Ip_Types.h are different"
#endif

/* Check if header file and Ftm_Ocu_Ip_Types.h file are of the same Software version */
#if ((FTM_OCU_IP_SW_MAJOR_VERSION != FTM_OCU_IP_TYPES_SW_MAJOR_VERSION) || \
     (FTM_OCU_IP_SW_MINOR_VERSION != FTM_OCU_IP_TYPES_SW_MINOR_VERSION) || \
     (FTM_OCU_IP_SW_PATCH_VERSION != FTM_OCU_IP_TYPES_SW_PATCH_VERSION))
    #error "Software Version Numbers of Ftm_Ocu_Ip.h and Ftm_Ocu_Ip_Types.h are different"
#endif

#if (FTM_OCU_IP_VENDOR_ID != FTM_OCU_IP_CFG_VENDOR_ID)
    #error "Ftm_Ocu_Ip.h and Ftm_Ocu_Ip_Cfg.h have different vendor ids"
#endif

/* Check if  header file and Ftm_Ocu_Ip_Cfg.h file are of the same Autosar version */
#if ((FTM_OCU_IP_AR_RELEASE_MAJOR_VERSION != FTM_OCU_IP_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (FTM_OCU_IP_AR_RELEASE_MINOR_VERSION != FTM_OCU_IP_CFG_AR_RELEASE_MINOR_VERSION) || \
     (FTM_OCU_IP_AR_RELEASE_REVISION_VERSION != FTM_OCU_IP_CFG_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Ftm_Ocu_Ip.h and Ftm_Ocu_Ip_Cfg.h are different"
#endif

/* Check if header file and Ftm_Ocu_Ip_Cfg.h file are of the same Software version */
#if ((FTM_OCU_IP_SW_MAJOR_VERSION != FTM_OCU_IP_CFG_SW_MAJOR_VERSION) || \
     (FTM_OCU_IP_SW_MINOR_VERSION != FTM_OCU_IP_CFG_SW_MINOR_VERSION) || \
     (FTM_OCU_IP_SW_PATCH_VERSION != FTM_OCU_IP_CFG_SW_PATCH_VERSION))
    #error "Software Version Numbers of Ftm_Ocu_Ip.h and Ftm_Ocu_Ip_Cfg.h are different"
#endif

#if (OCU_ENABLE_USER_MODE_SUPPORT == STD_ON)
    #ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
        /* Check if this header file and Reg_eSys.h file are of the same Autosar version */
        #if ((FTM_OCU_IP_AR_RELEASE_MAJOR_VERSION != REG_ESYS_AR_RELEASE_MAJOR_VERSION) || \
            (FTM_OCU_IP_AR_RELEASE_MINOR_VERSION != REG_ESYS_AR_RELEASE_MINOR_VERSION))
            #error "AutoSar Version Numbers of Ftm_Ocu_Ip.h and Reg_eSys.h are different"
        #endif
    #endif
#endif
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                            ENUMS
==================================================================================================*/

/*==================================================================================================
*                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/


/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#define OCU_START_SEC_CODE
#include "Ocu_MemMap.h"

/*
 * FTM channel encoding
 *
 *      [              5 bits | 3 bits              ]
 *      [ module id: 31 ... 0 | channel id: 7 ... 0 ]
 */

/**
 * @brief        Get FTM instance number from hardcoded channel Id
 *
 * @param[in]    HwChannelId - FTM hardcoded channel Id
 * return        FTM instance number
 */
static inline uint8 Ftm_Ocu_Ip_GetInstanceNum(uint16 HwChannelId)
{
    return (uint8)((HwChannelId & FTM_MOD_MASK_U8) >> FTM_MOD_SHIFT);
}

/**
 * @brief        Get FTM Channel number from hardcoded channel Id
 *
 * @param[in]    HwChannelId - FTM hardcoded channel Id
 * return        Channel number in the FTM instance
 */
static inline uint8 Ftm_Ocu_Ip_GetChannelNum(uint16 HwChannelId)
{
    return (uint8)((HwChannelId & FTM_CH_MASK_U8) >> FTM_CH_SHIFT);
}

/*=================================================================================================================*/
/**
 * @brief   This function initializes all internals variables of the driver.
 * @details This function will initialize with default values all FTM registers.
 *          Will loop through all FTM modules and channels in the configuration structure and will
 *          setup required registers for each channel and module
 *
 * @param[in]   pFtmIpConfig - Pointer to FTM IP configuration structure
 *
 * @implements  Ftm_Ocu_Ip_Init_Activity
 */
void Ftm_Ocu_Ip_Init(const Ftm_Ocu_Ip_ModuleConfigType * const pFtmIpConfig);

/*=================================================================================================================*/
#if(OCU_DEINIT_API == STD_ON)
/**
 * @brief   This function deinitializes the driver.
 * @details This function will set to idle state all FTM channels.
 *          Will stop all FTM modules. Disables all FTM channels interrupts.
 *
 * @implements   Ftm_Ocu_Ip_DeInit_Activity
 *
 */
void Ftm_Ocu_Ip_DeInit(void);
#endif /* OCU_DE_INIT_API */

/*=================================================================================================================*/
/**
 * @brief   Ocu driver function for starting the FTM timer channel.
 * @details This function:
 *              Configure ELSB:ELSA
 *              Release software control
 *              Clear flag and enable interrupt
 *
 * @param[in]   InstNum - FTM instance number
 * @param[in]   ChNum - Channel number in the FTM instance
 *
 * @implements  Ftm_Ocu_Ip_StartChannel_Activity
 */
void Ftm_Ocu_Ip_StartChannel(uint8 InstNum, uint8 ChNum);

/*=================================================================================================================*/
/**
 * @brief   Ocu driver function for stopping the FTM timer channel.
 * @details This function:
 *          - stop the timer channel by writing the ELSB:ELSA = 0:0
 *          - Clear flag and disable interrupt
 *
 * @param[in]   InstNum - FTM instance number
 * @param[in]   ChNum - Channel number in the FTM instance
 *
 * @implements   Ftm_Ocu_Ip_StopChannel_Activity
 */
void Ftm_Ocu_Ip_StopChannel(uint8 InstNum, uint8 ChNum);

/*=================================================================================================================*/
#if (OCU_GET_COUNTER_API == STD_ON)
/**
 * @brief       Ocu driver function for getting the current counter value for a FTM timer channel.
 * @details     This function is called for reading the FTM channel counter register.
 *
 * @param[in]   InstNum - FTM instance number
 *
 * return       register CNTR current value
 *
 * @implements   Ftm_Ocu_Ip_GetCounter_Activity
 */
Ftm_Ocu_Ip_ValueType Ftm_Ocu_Ip_GetCounter(uint8 InstNum);

#endif /* OCU_GET_COUNTER_API == STD_ON */

/*=================================================================================================================*/ 
#if (OCU_SET_PIN_ACTION_API == STD_ON)
/**
 * @brief   Ocu driver function for setting the Pin Action for the current FTM channel
 *
 * @param[in]   InstNum - FTM instance number
 * @param[in]   ChNum - Channel number in the FTM instance
 *              PinAction - Type of action: FTM_OCU_SET_LOW, FTM_OCU_SET_HIGH, FTM_OCU_SET_TOGGLE
 *
 * @implements  Ftm_Ocu_Ip_SetPinAction_Activity
 */
void Ftm_Ocu_Ip_SetPinAction(uint8 InstNum, uint8 ChNum, Ftm_Ocu_Ip_PinActionType PinAction);

#endif /* OCU_SET_PIN_ACTION_API == STD_ON */

/*=================================================================================================================*/
#if (OCU_SET_PIN_STATE_API == STD_ON)
/**
 * @brief   Ocu driver function for setting the Pin State for the current FTM channel
 *
 * @param[in]   InstNum - FTM instance number
 * @param[in]   ChNum - Channel number in the FTM instance
 *              PinState - Expectation state of pin: OCU_FTM_HIGH, OCU_FTM_LOW
 *
 * @implements  Ftm_Ocu_Ip_SetPinState_Activity
 */
void Ftm_Ocu_Ip_SetPinState(uint8 InstNum, uint8 ChNum, Ftm_Ocu_Ip_PinStateType PinState);
#endif /* OCU_SET_PIN_STATE_API == STD_ON */

/*=================================================================================================================*/
#if (OCU_SET_RELATIVE_THRESHOLD_API == STD_ON)
/**
 * @brief      The function sets the value of the channel threshold relative to the current value of the counter.
 * @details    On entry, the API reads the counter value (ReadValue). Then the new threshold value is computed and written
 *             according to the following formula: 
 *             NewThresholdValue = ReadValue + RelativeValue or
 *             NewThresholdValue = (ReadValue + RelativeValue) - MaxCounterValue if matching occur at next cycle
 *
 * @param[in]   InstNum - FTM instance number
 * @param[in]   ChNum - Channel number in the FTM instance
 *              RelativeValue - Channel timeout value
 *
 * return   Tells the caller whether the compare match will occur (or has already occured) during the current Refence Interval,
 *          as a result of setting the new threshold value.
 *
 * @implements    Ftm_Ocu_Ip_SetRelativeThreshold_Activity
 */
Ftm_Ocu_Ip_ReturnType Ftm_Ocu_Ip_SetRelativeThreshold(uint8 InstNum, uint8 ChNum, Ftm_Ocu_Ip_ValueType RelativeValue);

#endif /* OCU_SET_RELATIVE_THRESHOLD_API == STD_ON */

/*=================================================================================================================*/
#if (OCU_SET_ABSOLUTE_THRESHOLD_API == STD_ON)
/**
 * @brief      The function set the value of the channel threshold using an absolute input data.
 *
 * @param[in]   InstNum - FTM instance number
 * @param[in]   ChNum - Channel number in the FTM instance
 * @param[in]   ReferenceValue - Value given by the upper layer and used as a base to determine 
 *                               whether to call the notification before the function exits or not.
 * @param[in]   AbsoluteValue - channel timeout value
 *
 * return       Tells the caller whether the compare match will occur (or has already occured) during the current Refence Interval,
 *              as a result of setting the new threshold value.
 *
 * @implements  Ftm_Ocu_Ip_SetAbsoluteThreshold_Activity
 */
Ftm_Ocu_Ip_ReturnType Ftm_Ocu_Ip_SetAbsoluteThreshold(uint8 InstNum, uint8 ChNum, Ftm_Ocu_Ip_ValueType ReferenceValue, Ftm_Ocu_Ip_ValueType AbsoluteValue);

#endif /* OCU_SET_ABSOLUTE_THRESHOLD_API == STD_ON */

/*=================================================================================================================*/
#if (OCU_SET_CLOCK_MODE_API == STD_ON)
/**
 * @brief       The function changes the prescaler of FTM channel.
 * @details     This function changes the value prescaler in SC registers
 *
 * @param[in]   Prescaler - Prescaler type: normal or alternative
 *
 *
 */
void Ftm_Ocu_Ip_SetClockMode(Ftm_Ocu_Ip_SelectPrescalerType Prescaler);

#endif

/*===============================================================================================*/
#if ((OCU_SET_RELATIVE_THRESHOLD_API == STD_ON) || (OCU_SET_ABSOLUTE_THRESHOLD_API == STD_ON))
/**
 * @brief        Ftm_Ocu_Ip_GetMaxCounterValue
 * @details      This function will return max counter value for given channel
 *
 * @param[in]   InstNum - FTM instance number
 * @param[in]   ChNum - Channel number in the FTM instance
 * @return      uint16   - Max counter value for given channel
 */
uint16 Ftm_Ocu_Ip_GetMaxCounterValue(uint8 InstNum, uint8 ChNum);
#endif

#if (STD_ON == OCU_NOTIFICATION_SUPPORTED)
/**
 * @brief   This function is used to disable the OCU compare match notification.
 *
 * @param[in]   InstNum - FTM instance number
 * @param[in]   ChNum - Channel number in the FTM instance
 *
 * @return none
 *
 * @implements   Ftm_Ocu_Ip_DisableNotification_Activity
 */
void Ftm_Ocu_Ip_DisableNotification(uint8 InstNum, uint8 ChNum);

/**
 * @brief   This function is used to enable the OCU compare match notification of the indexed channel.
 *
 * @param[in]   InstNum - FTM instance number
 * @param[in]   ChNum - Channel number in the FTM instance
 *
 * @return none
 *
 * @implements   Ftm_Ocu_Ip_EnableNotification_Activity
 */
void Ftm_Ocu_Ip_EnableNotification(uint8 InstNum, uint8 ChNum);
#endif


#define OCU_STOP_SEC_CODE
#include "Ocu_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* FTM_OCU_IP_H */
