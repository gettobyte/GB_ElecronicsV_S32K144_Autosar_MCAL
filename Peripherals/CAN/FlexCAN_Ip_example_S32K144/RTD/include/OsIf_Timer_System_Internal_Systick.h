/*==================================================================================================
* Project : RTD AUTOSAR 4.4
* Platform : CORTEXM
* Peripheral : S32K14X
* Dependencies : none
*
* Autosar Version : 4.4.0
* Autosar Revision : ASR_REL_4_4_REV_0000
* Autosar Conf.Variant :
* SW Version : 1.0.0
* Build Version : S32K1_RTD_1_0_0_D2108_ASR_REL_4_4_REV_0000_20210810
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
#ifndef OSIF_TIMER_SYSTEM_INTERNAL_SYSTICK
#define OSIF_TIMER_SYSTEM_INTERNAL_SYSTICK

/**
*   @file
*
*   @addtogroup osif_drv
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
#include "OsIf_DeviceRegisters.h"

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define OSIF_TIMER_SYSTEM_INTERNAL_SYSTICK_VENDOR_ID                    43
#define OSIF_TIMER_SYSTEM_INTERNAL_SYSTICK_AR_RELEASE_MAJOR_VERSION     4
#define OSIF_TIMER_SYSTEM_INTERNAL_SYSTICK_AR_RELEASE_MINOR_VERSION     4
#define OSIF_TIMER_SYSTEM_INTERNAL_SYSTICK_AR_RELEASE_REVISION_VERSION  0
#define OSIF_TIMER_SYSTEM_INTERNAL_SYSTICK_SW_MAJOR_VERSION             1
#define OSIF_TIMER_SYSTEM_INTERNAL_SYSTICK_SW_MINOR_VERSION             0
#define OSIF_TIMER_SYSTEM_INTERNAL_SYSTICK_SW_PATCH_VERSION             0

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
/* Checks against OsIf_DeviceRegisters.h */
#if (OSIF_TIMER_SYSTEM_INTERNAL_SYSTICK_VENDOR_ID != OSIF_DEVICE_REGISTERS_VENDOR_ID)
    #error "OsIf_Timer_System_Internal_Systick.h and OsIf_DeviceRegisters.h have different vendor ids"
#endif
#if ((OSIF_TIMER_SYSTEM_INTERNAL_SYSTICK_AR_RELEASE_MAJOR_VERSION    != OSIF_DEVICE_REGISTERS_AR_RELEASE_MAJOR_VERSION) || \
     (OSIF_TIMER_SYSTEM_INTERNAL_SYSTICK_AR_RELEASE_MINOR_VERSION    != OSIF_DEVICE_REGISTERS_AR_RELEASE_MINOR_VERSION) || \
     (OSIF_TIMER_SYSTEM_INTERNAL_SYSTICK_AR_RELEASE_REVISION_VERSION != OSIF_DEVICE_REGISTERS_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR Version Numbers of OsIf_Timer_System_Internal_Systick.h and OsIf_DeviceRegisters.h are different"
#endif
#if ((OSIF_TIMER_SYSTEM_INTERNAL_SYSTICK_SW_MAJOR_VERSION != OSIF_DEVICE_REGISTERS_SW_MAJOR_VERSION) || \
     (OSIF_TIMER_SYSTEM_INTERNAL_SYSTICK_SW_MINOR_VERSION != OSIF_DEVICE_REGISTERS_SW_MINOR_VERSION) || \
     (OSIF_TIMER_SYSTEM_INTERNAL_SYSTICK_SW_PATCH_VERSION != OSIF_DEVICE_REGISTERS_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of OsIf_Timer_System_Internal_Systick.h and OsIf_DeviceRegisters.h are different"
#endif

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/
#define SYSTICK_GET_COUNTER() ((S32_SysTick->CVR) & S32_SysTick_CVR_CURRENT_MASK)
#define SYSTICK_DELTA_OUTER(high, low, max) ((max) - ((high) - (low)))
#define SYSTICK_DELTA_INNER(high, low) ((high) - (low))
#define SYSTICK_MAX (0xFFFFFFu)

#define SYSTICK_OVERFLOWED(curr, ref) (curr > ref)

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
#define BASE_START_SEC_CODE
#include "Base_MemMap.h"

static inline void OsIf_Timer_System_Internal_Init(void);
static inline uint32 OsIf_Timer_System_Internal_GetCounter(void);
static inline uint32 OsIf_Timer_System_Internal_GetElapsed(uint32 * const CurrentRef);

#define BASE_STOP_SEC_CODE
#include "Base_MemMap.h"

/*==================================================================================================
*                                         LOCAL FUNCTIONS
==================================================================================================*/
#define BASE_START_SEC_CODE
#include "Base_MemMap.h"

static inline void OsIf_Timer_System_Internal_Init(void)
{
    /* For Cortex-M0 devices the systick counter is initialized with an undefined
     value, so make sure to initialize it to 0 before starting */
    S32_SysTick->CSRr = S32_SysTick_CSR_ENABLE(0u);
    S32_SysTick->RVR = S32_SysTick_RVR_RELOAD(SYSTICK_MAX);
    S32_SysTick->CVR = S32_SysTick_CVR_CURRENT(0U);
    S32_SysTick->CSRr = S32_SysTick_CSR_ENABLE(1u) | S32_SysTick_CSR_TICKINT(0u) | S32_SysTick_CSR_CLKSOURCE(1u);
}

static inline uint32 OsIf_Timer_System_Internal_GetCounter(void)
{
    return SYSTICK_GET_COUNTER();
}

static inline uint32 OsIf_Timer_System_Internal_GetElapsed(uint32 * const CurrentRef)
{
    uint32 CurrentVal = SYSTICK_GET_COUNTER();
    uint32 dif = 0u;
    if (SYSTICK_OVERFLOWED((CurrentVal), (*CurrentRef)))
    {
        /* overflow occurred */
        dif = SYSTICK_DELTA_OUTER(CurrentVal, *CurrentRef, S32_SysTick->RVR);
    }
    else
    {
        /* overflow did not occur */
        dif = SYSTICK_DELTA_INNER(*CurrentRef, CurrentVal);
    }
    *CurrentRef = CurrentVal;
    return dif;
}

#define BASE_STOP_SEC_CODE
#include "Base_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* OSIF_TIMER_SYSTEM_INTERNAL_SYSTICK */
