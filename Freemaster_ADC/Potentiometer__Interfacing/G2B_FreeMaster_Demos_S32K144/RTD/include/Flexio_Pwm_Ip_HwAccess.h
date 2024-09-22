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

#ifndef FLEXIO_PWM_IP_HWACCESS_H
#define FLEXIO_PWM_IP_HWACCESS_H

/**
*   @file Flexio_Pwm_Ip_HwAccess.h
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
#include "Flexio_Pwm_Ip_Cfg.h"
#include "Flexio_Pwm_Ip_Types.h"

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define FLEXIO_PWM_IP_HWACCESS_VENDOR_ID                    43
#define FLEXIO_PWM_IP_HWACCESS_MODULE_ID                    121
#define FLEXIO_PWM_IP_HWACCESS_AR_RELEASE_MAJOR_VERSION     4
#define FLEXIO_PWM_IP_HWACCESS_AR_RELEASE_MINOR_VERSION     4
#define FLEXIO_PWM_IP_HWACCESS_AR_RELEASE_REVISION_VERSION  0
#define FLEXIO_PWM_IP_HWACCESS_SW_MAJOR_VERSION             1
#define FLEXIO_PWM_IP_HWACCESS_SW_MINOR_VERSION             0
#define FLEXIO_PWM_IP_HWACCESS_SW_PATCH_VERSION             0

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if header file and StandardTypes.h are of the same AUTOSAR version */
    #if ((FLEXIO_PWM_IP_HWACCESS_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION) || \
         (FLEXIO_PWM_IP_HWACCESS_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION))
        #error "AUTOSAR Version Numbers of Flexio_Pwm_Ip_HwAccess.h and StandardTypes.h are different"
    #endif
#endif

/* Check if header file and Flexio_Pwm_Ip_Cfg.h header file are of the same vendor */
#if (FLEXIO_PWM_IP_HWACCESS_VENDOR_ID != FLEXIO_PWM_IP_CFG_VENDOR_ID)
    #error "Vendor IDs of Flexio_Pwm_Ip_HwAccess.h and Flexio_Pwm_Ip_Cfg.h are different."
#endif

/* Check if header file and Flexio_Pwm_Ip_Cfg.h header file are of the same AUTOSAR version */
#if ((FLEXIO_PWM_IP_HWACCESS_AR_RELEASE_MAJOR_VERSION    != FLEXIO_PWM_IP_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (FLEXIO_PWM_IP_HWACCESS_AR_RELEASE_MINOR_VERSION    != FLEXIO_PWM_IP_CFG_AR_RELEASE_MINOR_VERSION) || \
     (FLEXIO_PWM_IP_HWACCESS_AR_RELEASE_REVISION_VERSION != FLEXIO_PWM_IP_CFG_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR version numbers of Flexio_Pwm_Ip_HwAccess.h and Flexio_Pwm_Ip_Cfg.h are different."
#endif

/* Check if header file and Flexio_Pwm_Ip_Cfg.h header file are of the same software version */
#if ((FLEXIO_PWM_IP_HWACCESS_SW_MAJOR_VERSION != FLEXIO_PWM_IP_CFG_SW_MAJOR_VERSION) || \
     (FLEXIO_PWM_IP_HWACCESS_SW_MINOR_VERSION != FLEXIO_PWM_IP_CFG_SW_MINOR_VERSION) || \
     (FLEXIO_PWM_IP_HWACCESS_SW_PATCH_VERSION != FLEXIO_PWM_IP_CFG_SW_PATCH_VERSION))
    #error "Software version numbers of Flexio_Pwm_Ip_HwAccess.h and Flexio_Pwm_Ip_Cfg.h are different."
#endif

/* Check if header file and Flexio_Pwm_Ip_Types.h header file are of the same vendor */
#if (FLEXIO_PWM_IP_HWACCESS_VENDOR_ID != FLEXIO_PWM_IP_TYPES_VENDOR_ID)
    #error "Vendor IDs of Flexio_Pwm_Ip_HwAccess.h and Flexio_Pwm_Ip_Types.h are different."
#endif

/* Check if header file and Flexio_Pwm_Ip_Types.h header file are of the same AUTOSAR version */
#if ((FLEXIO_PWM_IP_HWACCESS_AR_RELEASE_MAJOR_VERSION    != FLEXIO_PWM_IP_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (FLEXIO_PWM_IP_HWACCESS_AR_RELEASE_MINOR_VERSION    != FLEXIO_PWM_IP_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (FLEXIO_PWM_IP_HWACCESS_AR_RELEASE_REVISION_VERSION != FLEXIO_PWM_IP_TYPES_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR version numbers of Flexio_Pwm_Ip_HwAccess.h and Flexio_Pwm_Ip_Types.h are different."
#endif

/* Check if header file and Flexio_Pwm_Ip_Types.h header file are of the same software version */
#if ((FLEXIO_PWM_IP_HWACCESS_SW_MAJOR_VERSION != FLEXIO_PWM_IP_TYPES_SW_MAJOR_VERSION) || \
     (FLEXIO_PWM_IP_HWACCESS_SW_MINOR_VERSION != FLEXIO_PWM_IP_TYPES_SW_MINOR_VERSION) || \
     (FLEXIO_PWM_IP_HWACCESS_SW_PATCH_VERSION != FLEXIO_PWM_IP_TYPES_SW_PATCH_VERSION))
    #error "Software version numbers of Flexio_Pwm_Ip_HwAccess.h and Flexio_Pwm_Ip_Types.h are different."
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
/**
 *  @brief      Timer Pin ouput states
 *  @details    This enumeration specifies timer pin out states Flexio
 *
 *  @internal
 */
typedef enum
{
    /** @brief Timer Pin output disabled */
    FLEXIO_PWM_IP_TIMER_PIN_OUTPUT_DISABLE  = 0x00U,
    /** @brief Timer Pin Output mode */
    FLEXIO_PWM_IP_TIMER_PIN_OUTPUT_ENABLE   = 0x03U
} Flexio_Pwm_Ip_TimerPinType;

/**
 *  @brief      Timer initial states
 *  @details    This enumeration specifies timer initial output states
 *
 *  @internal
 */
typedef enum
{
    /** @brief Timer Initial output is logic one */
    FLEXIO_PWM_IP_TIMER_INIT_HIGH   = 0x00U,
    /** @brief Timer Initial output is logic zero */
    FLEXIO_PWM_IP_TIMER_INIT_LOW    = 0x1U
} Flexio_Pwm_Ip_TimerInitType;

/**
 *  @brief      Timer modes
 *  @details    This enumeration specifies timer modes for Pwm generation
 *
 *  @internal
 */
typedef enum
{
    /** @brief Timer disabled */
    FLEXIO_PWM_IP_TIMER_DISABLED  = 0x00U,
    /** @brief Timer in 8 bit Pwm High mode */
    FLEXIO_PWM_IP_TIMER_PWM_HIGH  = 0x02U,
    /** @brief Timer in 8 bit Pwm Low mode */
    FLEXIO_PWM_IP_TIMER_PWM_LOW   = 0x06U
} Flexio_Pwm_Ip_TimerModeType;


/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                       FUNCTION PROTOTYPES
==================================================================================================*/
#define PWM_START_SEC_CODE
#include "Pwm_MemMap.h"

/*========================================= PIN Register =========================================*/
/**
 *  @brief      Return logic state of the pin output
 *
 *  @param[in]  base The Flexio base address pointer
 *  @param[in]  pin The Pin id for the given instance
 *
 *  @return     Logic state of the selected pin
 *
 *  @internal
 */
static inline boolean Flexio_Pwm_Ip_GetPinState(const Flexio_Pwm_Ip_HwAddrType *const base, uint8 pin)
{
    return (boolean)((((base->PIN & FLEXIO_PIN_PDI_MASK) >> pin) & 0x1U) == 0x1U)? TRUE : FALSE;
}

/*======================================= TIMSTAT Register =======================================*/
/**
 *  @brief      Return if the flag event occurred on one timer
 *
 *  @param[in]  base The Flexio base address pointer
 *  @param[in]  timer The Timer id for the given instance
 *
 *  @return     Value of the flag for selected timer
 *
 *  @internal
 */
static inline boolean Flexio_Pwm_Ip_GetTimerFlag(const Flexio_Pwm_Ip_HwAddrType *const base, uint8 timer)
{
    return (boolean)((((base->PIN & FLEXIO_TIMSTAT_TSF_MASK) >> timer) & 0x1U) == 0x1U)? TRUE : FALSE;
}

#if (defined(FLEXIO_PWM_IP_HAS_PIN_OVERRIDE) && (FLEXIO_PWM_IP_HAS_PIN_OVERRIDE == STD_ON))
/*======================================= PINSTAT Register =======================================*/
/**
 *  @brief      Return if the flag event occurred on one pin
 *
 *  @param[in]  base The Flexio base address pointer
 *  @param[in]  pin The Pin id for the given instance
 *
 *  @return     Value of the flag for selected timer
 *
 *  @internal
 */
static inline boolean Flexio_Pwm_Ip_GetPinFlag(const Flexio_Pwm_Ip_HwAddrType *const base, uint8 pin)
{
    return (boolean)((((base->PIN & FLEXIO_PINSTAT_PSF_MASK) >> pin) & 0x1U) == 0x1U)? TRUE : FALSE;
}


/**
 *  @brief      Clear the flag of one pin
 *
 *  @param[in]  base The Flexio base address pointer
 *  @param[in]  pin The Pin id for the given instance
 *
 *  @return     void
 *
 *  @internal
 */
static inline void Flexio_Pwm_Ip_ClearPinFlag(Flexio_Pwm_Ip_HwAddrType * base, uint8 pin)
{
    base->PINSTAT = FLEXIO_PINSTAT_PSF((uint32)0x1U << pin);
}

/*======================================= PINIEN Register ========================================*/
/**
 *  @brief      Enable/Disable Interrupt generation based on pin flag
 *
 *  @param[in]  base The Flexio base address pointer
 *  @param[in]  pin The Pin id for the given instance
 *  @param[in]  enabled True if IRQ should be generate on pin flag, false otherwise
 *
 *  @return     void
 *
 *  @internal
 */
static inline void Flexio_Pwm_Ip_ConfigurePinIrq(Flexio_Pwm_Ip_HwAddrType * base, uint8 pin, boolean enabled)
{
    base->PINIEN = (base->PINIEN & ~FLEXIO_PINIEN_PSIE_MASK) | FLEXIO_PINIEN_PSIE((uint32)((TRUE == enabled) ? (uint32)0x1U : (uint32)0x0U) << pin);
}

/*======================================= PINREN Register ========================================*/
/**
 *  @brief      Enable/Disable flag generation on pin rising edge
 *
 *  @param[in]  base The Flexio base address pointer
 *  @param[in]  pin The Pin id for the given instance
 *  @param[in]  enabled True if flag should be generate on pin rising edge, false otherwise
 *
 *  @return     void
 *
 *  @internal
 */
static inline void Flexio_Pwm_Ip_ConfigurePinRisingEdge(Flexio_Pwm_Ip_HwAddrType * base, uint8 pin, boolean enabled)
{
    base->PINREN = (base->PINREN & ~FLEXIO_PINREN_PRE_MASK) | FLEXIO_PINREN_PRE((uint32)((TRUE == enabled) ? (uint32)0x1U : (uint32)0x0U) << pin);
}

/*======================================= PINFEN Register ========================================*/
/**
 *  @brief      Enable/Disable flag generation on pin falling edge
 *
 *  @param[in]  base The Flexio base address pointer
 *  @param[in]  pin The Pin id for the given instance
 *  @param[in]  enabled True if flag should be generate on pin falling edge, false otherwise
 *
 *  @return     void
 *
 *  @internal
 */
static inline void Flexio_Pwm_Ip_ConfigurePinFallingEdge(Flexio_Pwm_Ip_HwAddrType * base, uint8 pin, boolean enabled)
{
    base->PINFEN = (base->PINFEN & ~FLEXIO_PINFEN_PFE_MASK) | FLEXIO_PINFEN_PFE((uint32)((TRUE == enabled) ? (uint32)0x1U : (uint32)0x0U) << pin);
}

/*======================================= PINOUTD Register =======================================*/
/**
 *  @brief      Set the pin output level when pin override is enabled
 *
 *  @param[in]  base The Flexio base address pointer
 *  @param[in]  pin The Pin id for the given instance
 *  @param[in]  level True if logic high should be outputted on pin, false otherwise
 *
 *  @return     void
 *
 *  @internal
 */
static inline void Flexio_Pwm_Ip_SetPinLevel(Flexio_Pwm_Ip_HwAddrType * base, uint8 pin, boolean level)
{
    base->PINOUTD = (base->PINOUTD & ~((uint32)((uint32)1U << pin))) | (FLEXIO_PINOUTD_OUTD((uint32)((TRUE == level) ? (uint32)0x1U : (uint32)0x0U) << pin));
}

/*======================================= PINOUTE Register =======================================*/
/**
 *  @brief      Enable/Disable pin override
 *
 *  @param[in]  base The Flexio base address pointer
 *  @param[in]  pin The Pin id for the given instance
 *  @param[in]  enabled True if pin override should be enabled, false otherwise
 *
 *  @return     void
 *
 *  @internal
 */
static inline void Flexio_Pwm_Ip_ConfigurePinOverride(Flexio_Pwm_Ip_HwAddrType * base, uint8 pin, boolean enabled)
{
    base->PINOUTE = (base->PINOUTE & ~((uint32)((uint32)1U << pin))) | FLEXIO_PINOUTE_OUTE((uint32)((TRUE == enabled) ? (uint32)0x1U : (uint32)0x0U) << pin);
}

/**
 *  @brief      Get pin override
 *
 *  @param[in]  base The Flexio base address pointer
 *  @param[in]  pin The Pin id for the given instance
 *
 *  @return     True if pin override is enabled, false otherwise
 *
 *  @internal
 */
static inline boolean Flexio_Pwm_Ip_GetPinOverride(const Flexio_Pwm_Ip_HwAddrType *const base, uint8 pin)
{
    return ((base->PINOUTE & (uint32)((uint32)1U << pin)) != 0UL);
}
#endif /* (defined(FLEXIO_PWM_IP_HAS_PIN_OVERRIDE) && (FLEXIO_PWM_IP_HAS_PIN_OVERRIDE == STD_ON)) */

/*======================================= TIMCTLn Register =======================================*/
/**
 *  @brief      Enable/Disable the pin out for the selected timer
 *
 *  @param[in]  base The Flexio base address pointer
 *  @param[in]  timer The Timer id for the given instance
 *  @param[in]  pinMode The Timer Pin output mode
 *
 *  @return     void
 *
 *  @internal
 */
static inline void Flexio_Pwm_Ip_SetTimerPinOutput(Flexio_Pwm_Ip_HwAddrType * base, uint8 timer, Flexio_Pwm_Ip_TimerPinType pinMode)
{
    base->TIMCTL[timer] = (base->TIMCTL[timer] & ~FLEXIO_TIMCTL_PINCFG_MASK) | FLEXIO_TIMCTL_PINCFG(pinMode);
}

/**
 *  @brief      Select the pin that the selected timer will ouput the signal
 *
 *  @param[in]  base The Flexio base address pointer
 *  @param[in]  timer The Timer id for the given instance
 *  @param[in]  pin The Pin id used to output pwm signal
 *
 *  @return     void
 *
 *  @internal
 */
static inline void Flexio_Pwm_Ip_SetTimerPin(Flexio_Pwm_Ip_HwAddrType * base, uint8 timer, uint8 pin)
{
    base->TIMCTL[timer] = (base->TIMCTL[timer] & ~FLEXIO_TIMCTL_PINSEL_MASK) | FLEXIO_TIMCTL_PINSEL(pin);
}

#if (defined(FLEXIO_PWM_IP_HAS_LOW_MODE) && (FLEXIO_PWM_IP_HAS_LOW_MODE == STD_ON))
/**
 *  @brief      Select the pin polarity
 *
 *  @param[in]  base The Flexio base address pointer
 *  @param[in]  timer The Timer id for the given instance
 *  @param[in]  polarity The Pin polarity type
 *
 *  @return     void
 *
 *  @internal
 */
static inline void Flexio_Pwm_Ip_SetTimerPinPolarity(Flexio_Pwm_Ip_HwAddrType * base, uint8 timer, Flexio_Pwm_Ip_PolarityType polarity)
{
    base->TIMCTL[timer] = (base->TIMCTL[timer] & ~FLEXIO_TIMCTL_PINPOL_MASK) | FLEXIO_TIMCTL_PINPOL(polarity);
}
#endif

/**
 *  @brief      Select the timer mode used for pwm generation
 *
 *  @param[in]  base The Flexio base address pointer
 *  @param[in]  timer The Timer id for the given instance
 *  @param[in]  timerMode The Pin id used to output pwm signal
 *
 *  @return     void
 *
 *  @internal
 */
static inline void Flexio_Pwm_Ip_SetTimerMode(Flexio_Pwm_Ip_HwAddrType * base, uint8 timer, Flexio_Pwm_Ip_TimerModeType timerMode)
{
    base->TIMCTL[timer] = (base->TIMCTL[timer] & ~FLEXIO_TIMCTL_TIMOD_MASK) | FLEXIO_TIMCTL_TIMOD(timerMode);
}

/*======================================= TIMCFGn Register =======================================*/
/**
 *  @brief      Select the timer initial state
 *
 *  @param[in]  base The Flexio base address pointer
 *  @param[in]  timer The Timer id for the given instance
 *  @param[in]  timerInitOut The Timer initial ouput value
 *
 *  @return     void
 *
 *  @internal
 */
static inline void Flexio_Pwm_Ip_SetTimerInitMode(Flexio_Pwm_Ip_HwAddrType * base, uint8 timer, Flexio_Pwm_Ip_TimerInitType timerInitOut)
{
    base->TIMCFG[timer] = (base->TIMCFG[timer] & ~FLEXIO_TIMCFG_TIMOUT_MASK) | FLEXIO_TIMCFG_TIMOUT(timerInitOut);
}

#if (defined(FLEXIO_PWM_IP_HAS_PRESCALER) && (FLEXIO_PWM_IP_HAS_PRESCALER == STD_ON))
/**
 *  @brief      Select the timer decrement mode
 *
 *  @param[in]  base The Flexio base address pointer
 *  @param[in]  timer The Timer id for the given instance
 *  @param[in]  prescaler The Timer counter decrement clock source
 *
 *  @return     void
 *
 *  @internal
 */
static inline void Flexio_Pwm_Ip_SetTimerPrescaler(Flexio_Pwm_Ip_HwAddrType * base, uint8 timer, Flexio_Pwm_Ip_ClockPrescalerType prescaler)
{
    base->TIMCFG[timer] = (base->TIMCFG[timer] & ~FLEXIO_TIMCFG_TIMDEC_MASK) | FLEXIO_TIMCFG_TIMDEC(prescaler);
}
#endif
/*======================================= TIMCMPn Register =======================================*/
/**
 *  @brief      Set the upper 8 bit value for timer comparator
 *
 *  @param[in]  base The Flexio base address pointer
 *  @param[in]  timer The Timer id for the given instance
 *  @param[in]  prescaler The Timer counter decrement clock source
 *
 *  @return     void
 *
 *  @internal
 */
static inline void Flexio_Pwm_Ip_SetUpperValue(Flexio_Pwm_Ip_HwAddrType * base, uint8 timer, uint8 value)
{
    base->TIMCMP[timer] = (base->TIMCMP[timer] & ~FLEXIO_PWM_IP_TIMCMP_CMP_UPPER_MASK)
                        | FLEXIO_PWM_IP_TIMCMP_CMP_UPPER(value);
}

/**
 *  @brief      Set the lower 8 bit value for timer comparator
 *
 *  @param[in]  base The Flexio base address pointer
 *  @param[in]  timer The Timer id for the given instance
 *  @param[in]  prescaler The Timer counter decrement clock source
 *
 *  @return     void
 *
 *  @internal
 */
static inline void Flexio_Pwm_Ip_SetLowerValue(Flexio_Pwm_Ip_HwAddrType * base, uint8 timer, uint8 value)
{
    base->TIMCMP[timer] = (base->TIMCMP[timer] & ~FLEXIO_PWM_IP_TIMCMP_CMP_LOWER_MASK)
                        | FLEXIO_PWM_IP_TIMCMP_CMP_LOWER(value);
}

/**
 *  @brief      Get the upper 8 bit value for timer comparator
 *
 *  @param[in]  base The Flexio base address pointer
 *  @param[in]  timer The Timer id for the given instance
 *
 *  @return     The value of the upper 8 bits of timer comparator
 *
 *  @internal
 */
static inline uint8 Flexio_Pwm_Ip_GetUpperValue(const Flexio_Pwm_Ip_HwAddrType *const base, uint8 timer)
{
    return (uint8)(((uint32)base->TIMCMP[timer] & FLEXIO_PWM_IP_TIMCMP_CMP_UPPER_MASK) >> FLEXIO_PWM_IP_TIMCMP_CMP_UPPER_SHIFT);
}

/**
 *  @brief      Get the lower 8 bit value for timer comparator
 *
 *  @param[in]  base The Flexio base address pointer
 *  @param[in]  timer The Timer id for the given instance
 *
 *  @return     The value of the lower 8 bits of timer comparator
 *
 *  @internal
 */
static inline uint8 Flexio_Pwm_Ip_GetLowerValue(const Flexio_Pwm_Ip_HwAddrType *const base, uint8 timer)
{
    return (uint8)(((uint32)base->TIMCMP[timer] & FLEXIO_PWM_IP_TIMCMP_CMP_LOWER_MASK) >> FLEXIO_PWM_IP_TIMCMP_CMP_LOWER_SHIFT);
}

#define PWM_STOP_SEC_CODE
#include "Pwm_MemMap.h"


#ifdef __cplusplus
}
#endif

/** @} */

#endif /* FLEXIO_PWM_IP_HWACCESS_H */
