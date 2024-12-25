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
*   @file Flexio_Pwm_Ip_Irq.c
*
*   @addtogroup flexio_pwm_ip_irq FlexIO Pwm IPL
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
#include "Flexio_Pwm_Ip_Irq.h"
#include "Flexio_Pwm_Ip_HwAccess.h"

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define FLEXIO_PWM_IP_IRQ_VENDOR_ID_C                      43
#define FLEXIO_PWM_IP_IRQ_AR_RELEASE_MAJOR_VERSION_C       4
#define FLEXIO_PWM_IP_IRQ_AR_RELEASE_MINOR_VERSION_C       4
#define FLEXIO_PWM_IP_IRQ_AR_RELEASE_REVISION_VERSION_C    0
#define FLEXIO_PWM_IP_IRQ_SW_MAJOR_VERSION_C               1
#define FLEXIO_PWM_IP_IRQ_SW_MINOR_VERSION_C               0
#define FLEXIO_PWM_IP_IRQ_SW_PATCH_VERSION_C               0

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
/* Check if source file and Flexio_Pwm_Ip_Irq.h file are of the same vendor */
#if (FLEXIO_PWM_IP_IRQ_VENDOR_ID_C != FLEXIO_PWM_IP_IRQ_VENDOR_ID)
    #error "Vendor IDs of Flexio_Pwm_Ip_Irq.c and Flexio_Pwm_Ip_Irq.h are different."
#endif

/* Check if source file and Flexio_Pwm_Ip_Irq.h file are of the same AUTOSAR version */
#if ((FLEXIO_PWM_IP_IRQ_AR_RELEASE_MAJOR_VERSION_C    != FLEXIO_PWM_IP_IRQ_AR_RELEASE_MAJOR_VERSION) || \
     (FLEXIO_PWM_IP_IRQ_AR_RELEASE_MINOR_VERSION_C    != FLEXIO_PWM_IP_IRQ_AR_RELEASE_MINOR_VERSION) || \
     (FLEXIO_PWM_IP_IRQ_AR_RELEASE_REVISION_VERSION_C != FLEXIO_PWM_IP_IRQ_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR version numbers of Flexio_Pwm_Ip_Irq.c and Flexio_Pwm_Ip_Irq.h are different."
#endif

/* Check if source file and Flexio_Pwm_Ip_Irq.h file are of the same Software version */
#if ((FLEXIO_PWM_IP_IRQ_SW_MAJOR_VERSION_C != FLEXIO_PWM_IP_IRQ_SW_MAJOR_VERSION)  || \
     (FLEXIO_PWM_IP_IRQ_SW_MINOR_VERSION_C != FLEXIO_PWM_IP_IRQ_SW_MINOR_VERSION)  || \
     (FLEXIO_PWM_IP_IRQ_SW_PATCH_VERSION_C != FLEXIO_PWM_IP_IRQ_SW_PATCH_VERSION))
    #error "Software version numbers of Flexio_Pwm_Ip_Irq.c and Flexio_Pwm_Ip_Irq.h are different."
#endif

/* Check if source file and Flexio_Pwm_Ip_HwAccess.h file are of the same vendor */
#if (FLEXIO_PWM_IP_IRQ_VENDOR_ID_C != FLEXIO_PWM_IP_HWACCESS_VENDOR_ID)
    #error "Vendor IDs of Flexio_Pwm_Ip_Irq.c and Flexio_Pwm_Ip_HwAccess.h are different."
#endif

/* Check if source file and Flexio_Pwm_Ip_HwAccess.h file are of the same AUTOSAR version */
#if ((FLEXIO_PWM_IP_IRQ_AR_RELEASE_MAJOR_VERSION_C    != FLEXIO_PWM_IP_HWACCESS_AR_RELEASE_MAJOR_VERSION) || \
     (FLEXIO_PWM_IP_IRQ_AR_RELEASE_MINOR_VERSION_C    != FLEXIO_PWM_IP_HWACCESS_AR_RELEASE_MINOR_VERSION) || \
     (FLEXIO_PWM_IP_IRQ_AR_RELEASE_REVISION_VERSION_C != FLEXIO_PWM_IP_HWACCESS_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR version numbers of Flexio_Pwm_Ip_Irq.c and Flexio_Pwm_Ip_HwAccess.h are different."
#endif

/* Check if source file and Flexio_Pwm_Ip_HwAccess.h file are of the same Software version */
#if ((FLEXIO_PWM_IP_IRQ_SW_MAJOR_VERSION_C != FLEXIO_PWM_IP_HWACCESS_SW_MAJOR_VERSION)  || \
     (FLEXIO_PWM_IP_IRQ_SW_MINOR_VERSION_C != FLEXIO_PWM_IP_HWACCESS_SW_MINOR_VERSION)  || \
     (FLEXIO_PWM_IP_IRQ_SW_PATCH_VERSION_C != FLEXIO_PWM_IP_HWACCESS_SW_PATCH_VERSION))
    #error "Software version numbers of Flexio_Pwm_Ip_Irq.c and Flexio_Pwm_Ip_HwAccess.h are different."
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
extern Flexio_Pwm_Ip_HwAddrType * const Flexio_Pwm_Ip_aBasePtr[FLEXIO_PWM_IP_INSTANCE_COUNT];

#define PWM_STOP_SEC_CONST_UNSPECIFIED
#include "Pwm_MemMap.h"

#define PWM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Pwm_MemMap.h"

/** @brief Array with pointers to user cfg structs*/
extern const Flexio_Pwm_Ip_ChannelConfigType * Flexio_Pwm_Ip_aState[FLEXIO_PWM_IP_CHANNEL_COUNT];

#define PWM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Pwm_MemMap.h"

#define PWM_START_SEC_VAR_CLEARED_8
#include "Pwm_MemMap.h"

/** @brief Interrupt enable masks for used timers */
extern volatile uint8 timerIrqMask;

#define PWM_STOP_SEC_VAR_CLEARED_8
#include "Pwm_MemMap.h"

#define PWM_START_SEC_VAR_CLEARED_32
#include "Pwm_MemMap.h"

/** @brief Interrupt enable masks for used pins */
extern volatile uint32 pinIrqMask;

#define PWM_STOP_SEC_VAR_CLEARED_32
#include "Pwm_MemMap.h"

/*==================================================================================================
*                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL FUNCTIONS
==================================================================================================*/
#define PWM_START_SEC_CODE
#include "Pwm_MemMap.h"

/**
 *
 * Function Name : Flexio_Pwm_Ip_IrqHandler
 * Description   : Flexio Pwm Interrupt Request handler
 * The function will determine the type of interrupt that occurred and call the user
 * callback.
 *
 * @implements Flexio_Pwm_Ip_IrqHandler_Activity
 */
void Flexio_Pwm_Ip_IrqHandler(uint8 channelId,
                              uint8 timerFlags
#if (defined(FLEXIO_PWM_IP_HAS_PIN_OVERRIDE) && (FLEXIO_PWM_IP_HAS_PIN_OVERRIDE == STD_ON))
                              , 
                              uint32 pinFlags
#endif
                              )
{
#if (defined(FLEXIO_PWM_IP_HAS_PIN_OVERRIDE) && (FLEXIO_PWM_IP_HAS_PIN_OVERRIDE == STD_ON))
    Flexio_Pwm_Ip_OccurredIRQType irqType = FLEXIO_PWM_IP_PIN_RISING_EDGE_IRQ;
    boolean pinState = Flexio_Pwm_Ip_GetPinState(
                                            Flexio_Pwm_Ip_aBasePtr[0U],
                                            Flexio_Pwm_Ip_aState[channelId]->pinId);
    
    /* Check if it is a pin interrupt */
    if ((pinFlags & pinIrqMask & (1U << Flexio_Pwm_Ip_aState[channelId]->pinId)) != 0U)
    {
        if(NULL_PTR != Flexio_Pwm_Ip_aState[channelId]->iplCallback.cbFunction)
        {
            if (TRUE ==  pinState)
            {
                /* The Pin falling edge occurred */
                irqType = FLEXIO_PWM_IP_PIN_FALLING_EDGE_IRQ;
            }
            else
            {
                /* The Pin falling edge occurred */
                irqType = FLEXIO_PWM_IP_PIN_RISING_EDGE_IRQ;
            }
            Flexio_Pwm_Ip_aState[channelId]->iplCallback.cbFunction(
                                        irqType,
                                        Flexio_Pwm_Ip_aState[channelId]->iplCallback.cbParameter);
        }
        else
        {
            if(NULL_PTR != Flexio_Pwm_Ip_aState[channelId]->hldCallback.cbFunction)
            {
                Flexio_Pwm_Ip_aState[channelId]->hldCallback.cbFunction(
                            Flexio_Pwm_Ip_aState[channelId]->hldCallback.cbParameter);
            }
        }
    }
#endif

    /* Find what type of interrupt occurred */
    if ((timerFlags & timerIrqMask & (1U << Flexio_Pwm_Ip_aState[channelId]->timerId)) != 0U)
    {
        if(NULL_PTR != Flexio_Pwm_Ip_aState[channelId]->iplCallback.cbFunction)
        {
            /* The timer end of period occurred */
            Flexio_Pwm_Ip_aState[channelId]->iplCallback.cbFunction(
                                        FLEXIO_PWM_IP_TIMER_IRQ,
                                        Flexio_Pwm_Ip_aState[channelId]->iplCallback.cbParameter);
        }
        else
        {
            if(NULL_PTR != Flexio_Pwm_Ip_aState[channelId]->hldCallback.cbFunction)
            {
                Flexio_Pwm_Ip_aState[channelId]->hldCallback.cbFunction(
                            Flexio_Pwm_Ip_aState[channelId]->hldCallback.cbParameter);
            }
        }
    }

    (void)timerFlags;
}

#define PWM_STOP_SEC_CODE
#include "Pwm_MemMap.h"


#ifdef __cplusplus
}
#endif

/** @} */
