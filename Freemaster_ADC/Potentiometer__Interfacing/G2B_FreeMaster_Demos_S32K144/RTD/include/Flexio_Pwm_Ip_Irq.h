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

#ifndef FLEXIO_PWM_IP_IRQ_H
#define FLEXIO_PWM_IP_IRQ_H

/**
*   @file Flexio_Pwm_Ip_Irq.h
*
*   @internal
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
#include "StandardTypes.h"
#include "Flexio_Pwm_Ip_Types.h"

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define FLEXIO_PWM_IP_IRQ_VENDOR_ID                    43
#define FLEXIO_PWM_IP_IRQ_MODULE_ID                    121
#define FLEXIO_PWM_IP_IRQ_AR_RELEASE_MAJOR_VERSION     4
#define FLEXIO_PWM_IP_IRQ_AR_RELEASE_MINOR_VERSION     4
#define FLEXIO_PWM_IP_IRQ_AR_RELEASE_REVISION_VERSION  0
#define FLEXIO_PWM_IP_IRQ_SW_MAJOR_VERSION             1
#define FLEXIO_PWM_IP_IRQ_SW_MINOR_VERSION             0
#define FLEXIO_PWM_IP_IRQ_SW_PATCH_VERSION             0

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/

/* Check if header file and StandardTypes.h are of the same AUTOSAR version */
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    #if ((FLEXIO_PWM_IP_IRQ_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION) || \
         (FLEXIO_PWM_IP_IRQ_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION))
        #error "AUTOSAR version numbers of Flexio_Pwm_Ip_Irq.h and StandardTypes.h are different."
    #endif
#endif

/* Check if source file and Flexio_Pwm_Ip_Types.h file are of the same vendor */
#if (FLEXIO_PWM_IP_IRQ_VENDOR_ID != FLEXIO_PWM_IP_TYPES_VENDOR_ID)
    #error "Vendor IDs of Flexio_Pwm_Ip_Irq.h and Flexio_Pwm_Ip_Types.h are different."
#endif

/* Check if source file and Flexio_Pwm_Ip_Types.h file are of the same AUTOSAR version */
#if ((FLEXIO_PWM_IP_IRQ_AR_RELEASE_MAJOR_VERSION    != FLEXIO_PWM_IP_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (FLEXIO_PWM_IP_IRQ_AR_RELEASE_MINOR_VERSION    != FLEXIO_PWM_IP_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (FLEXIO_PWM_IP_IRQ_AR_RELEASE_REVISION_VERSION != FLEXIO_PWM_IP_TYPES_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR version numbers of Flexio_Pwm_Ip_Irq.h and Flexio_Pwm_Ip_Types.h are different."
#endif

/* Check if source file and Flexio_Pwm_Ip_Types.h file are of the same Software version */
#if ((FLEXIO_PWM_IP_IRQ_SW_MAJOR_VERSION != FLEXIO_PWM_IP_TYPES_SW_MAJOR_VERSION)  || \
     (FLEXIO_PWM_IP_IRQ_SW_MINOR_VERSION != FLEXIO_PWM_IP_TYPES_SW_MINOR_VERSION)  || \
     (FLEXIO_PWM_IP_IRQ_SW_PATCH_VERSION != FLEXIO_PWM_IP_TYPES_SW_PATCH_VERSION))
    #error "Software version numbers of Flexio_Pwm_Ip_Irq.h and Flexio_Pwm_Ip_Types.h are different."
#endif
/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                              ENUMS
==================================================================================================*/

/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                       FUNCTION PROTOTYPES
==================================================================================================*/
#define PWM_START_SEC_CODE
#include "Pwm_MemMap.h"

/**
 * @brief Flexio Pwm Interrupt Request handler
 * @details The function will determine the type of interrupt that occurred and call the user
 * callback.
 *
 * @param[in] channelId The channel id on which the interrupt occurred
 * @param[in] timerFlags Mask with set timer flags
 * @param[in] pinFlags Mask with set pin flags
 * @return void
 *
 * @internal
 */
void Flexio_Pwm_Ip_IrqHandler(uint8 channelId,
                              uint8 timerFlags
#if (defined(FLEXIO_PWM_IP_HAS_PIN_OVERRIDE) && (FLEXIO_PWM_IP_HAS_PIN_OVERRIDE == STD_ON))
                              , 
                              uint32 pinFlags
#endif
                              );

#define PWM_STOP_SEC_CODE
#include "Pwm_MemMap.h"


#ifdef __cplusplus
}
#endif

/** @} */

#endif /* FLEXIO_PWM_IP_IRQ_H */