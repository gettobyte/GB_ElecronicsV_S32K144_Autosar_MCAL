/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : 
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
*   @file       Power_Ip_SCG.c
*   @version    1.0.0
*
*   @brief
*   @brief   POWER driver implementations.
*   @details POWER driver implementations.
*
*   @addtogroup POWER_DRIVER Power Ip Driver
*   @{
*/


#ifdef __cplusplus
extern "C"{
#endif





/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Power_Ip.h"
#include "Power_Ip_SCG.h"
#include "Power_Ip_Private.h"

#if (defined(POWER_IP_ENABLE_USER_MODE_SUPPORT) && (STD_ON == POWER_IP_ENABLE_USER_MODE_SUPPORT))
  #if (defined(MCAL_SMC_REG_PROT_AVAILABLE))
    #if (STD_ON == MCAL_SMC_REG_PROT_AVAILABLE)
      #define USER_MODE_REG_PROT_ENABLED      (STD_ON)
      #include "RegLockMacros.h"
    #endif /* (STD_ON == MCAL_PMC_REG_PROT_AVAILABLE) */
  #endif
#endif /* (STD_ON == POWER_IP_ENABLE_USER_MODE_SUPPORT) */


/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define POWER_IP_SCG_VENDOR_ID_C                      43
#define POWER_IP_SCG_AR_RELEASE_MAJOR_VERSION_C       4
#define POWER_IP_SCG_AR_RELEASE_MINOR_VERSION_C       4
#define POWER_IP_SCG_AR_RELEASE_REVISION_VERSION_C    0
#define POWER_IP_SCG_SW_MAJOR_VERSION_C               1
#define POWER_IP_SCG_SW_MINOR_VERSION_C               0
#define POWER_IP_SCG_SW_PATCH_VERSION_C               0


/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Power_Ip_SCG.c file and Power_Ip.h file are of the same vendor */
#if (POWER_IP_SCG_VENDOR_ID_C != POWER_IP_VENDOR_ID)
    #error "Power_Ip_SCG.c and Power_Ip.h have different vendor ids"
#endif

/* Check if Power_Ip_SCG.c file and Power_Ip.h file are of the same Autosar version */
#if ((POWER_IP_SCG_AR_RELEASE_MAJOR_VERSION_C != POWER_IP_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_SCG_AR_RELEASE_MINOR_VERSION_C != POWER_IP_AR_RELEASE_MINOR_VERSION) || \
     (POWER_IP_SCG_AR_RELEASE_REVISION_VERSION_C != POWER_IP_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Power_Ip_SCG.c and Power_Ip.h are different"
#endif

/* Check if Power_Ip_SCG.c file and Power_Ip.h file are of the same Software version */
#if ((POWER_IP_SCG_SW_MAJOR_VERSION_C != POWER_IP_SW_MAJOR_VERSION) || \
     (POWER_IP_SCG_SW_MINOR_VERSION_C != POWER_IP_SW_MINOR_VERSION) || \
     (POWER_IP_SCG_SW_PATCH_VERSION_C != POWER_IP_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Power_Ip_SCG.c and Power_Ip.h are different"
#endif

/* Check if Power_Ip_SCG.c file and Power_Ip_SCG.h file are of the same vendor */
#if (POWER_IP_SCG_VENDOR_ID_C != POWER_IP_SCG_VENDOR_ID)
    #error "Power_Ip_SCG.c and Power_Ip_SCG.h have different vendor ids"
#endif

/* Check if Power_Ip_SCG.c file and Power_Ip_SCG.h file are of the same Autosar version */
#if ((POWER_IP_SCG_AR_RELEASE_MAJOR_VERSION_C != POWER_IP_SCG_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_SCG_AR_RELEASE_MINOR_VERSION_C != POWER_IP_SCG_AR_RELEASE_MINOR_VERSION) || \
     (POWER_IP_SCG_AR_RELEASE_REVISION_VERSION_C != POWER_IP_SCG_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Power_Ip_SCG.c and Power_Ip_SCG.h are different"
#endif

/* Check if Power_Ip_SCG.c file and Power_Ip_SCG.h file are of the same Software version */
#if ((POWER_IP_SCG_SW_MAJOR_VERSION_C != POWER_IP_SCG_SW_MAJOR_VERSION) || \
     (POWER_IP_SCG_SW_MINOR_VERSION_C != POWER_IP_SCG_SW_MINOR_VERSION) || \
     (POWER_IP_SCG_SW_PATCH_VERSION_C != POWER_IP_SCG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Power_Ip_SCG.c and Power_Ip_SCG.h are different"
#endif

/* Check if Power_Ip_SCG.c file and Power_Ip_Private.h file are of the same vendor */
#if (POWER_IP_SCG_VENDOR_ID_C != POWER_IP_PRIVATE_VENDOR_ID)
    #error "Power_Ip_SCG.c and Power_Ip_Private.h have different vendor ids"
#endif

/* Check if Power_Ip_SCG.c file and Power_Ip_Private.h file are of the same Autosar version */
#if ((POWER_IP_SCG_AR_RELEASE_MAJOR_VERSION_C != POWER_IP_PRIVATE_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_SCG_AR_RELEASE_MINOR_VERSION_C != POWER_IP_PRIVATE_AR_RELEASE_MINOR_VERSION) || \
     (POWER_IP_SCG_AR_RELEASE_REVISION_VERSION_C != POWER_IP_PRIVATE_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Power_Ip_SCG.c and Power_Ip_Private.h are different"
#endif

/* Check if Power_Ip_SCG.c file and Power_Ip_Private.h file are of the same Software version */
#if ((POWER_IP_SCG_SW_MAJOR_VERSION_C != POWER_IP_PRIVATE_SW_MAJOR_VERSION) || \
     (POWER_IP_SCG_SW_MINOR_VERSION_C != POWER_IP_PRIVATE_SW_MINOR_VERSION) || \
     (POWER_IP_SCG_SW_PATCH_VERSION_C != POWER_IP_PRIVATE_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Power_Ip_SCG.c and Power_Ip_Private.h are different"
#endif
/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/


/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/


/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define MCU_START_SEC_CODE
#include "Mcu_MemMap.h"

/**
* @brief            This function will disable all clock monitors
*/
void Power_Ip_SCG_DisableClockMonitors(void)
{
    IP_SCG->SOSCCSR &= (~(SCG_SOSCCSR_SOSCCM_MASK));
#if (POWER_IP_NO_PLL == STD_OFF)
    IP_SCG->SPLLCSR &= (~(SCG_SPLLCSR_SPLLCM_MASK));
#endif  /* POWER_IP_NO_PLL */
}

#if (POWER_IP_NO_PLL == STD_OFF)
/**
* @brief            This function will disable PLL clock
*/
void Power_Ip_SCG_DisableSpllClock(void)
{  
    IP_SCG->SPLLCSR &= (~(SCG_SPLLCSR_SPLLEN_MASK));
}
#endif  /* POWER_IP_NO_PLL */

#if (MCU_ENTER_LOW_POWER_MODE == STD_ON)
/**
* @brief            This function will configurable SIRC as system clock.
*/
void Power_Ip_SCG_DropSysClkToSircInRunMode(void)
{
    uint32 u32RegValue = 0U;
    uint32 u32TmpValue = 0U;
    uint32 StartTime;
    uint32 ElapsedTime;
    uint32 TimeoutTicks;
    boolean TimeoutOccurred = FALSE;

    /* Set SIRC as system clock in Run mode */
    u32TmpValue = IP_SCG->RCCR;
    u32TmpValue &= (uint32)(~SCG_RCCR_SCS_MASK);
    u32TmpValue |= (uint32)(SCG_RCCR_SCS(SCG_SCS_SIRC_U32));
    IP_SCG->RCCR = u32TmpValue;

    /* Wait for switching system clock source done. */
#ifdef ERR_IPV_SCG_ERR010777
#if (ERR_IPV_SCG_ERR010777 == STD_ON)
    /* Support for e10777 errata: SCG_RCCR[SCS] and SCG_HCCR[SCS] should be read twice by software to get correctly value */
    u32RegValue = ((IP_SCG->RCCR & SCG_RCCR_SCS_MASK) >> SCG_RCCR_SCS_SHIFT);
#endif
#endif
    PowerStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, POWER_TIMEOUT_VALUE_US);
    do
    {
        TimeoutOccurred = PowerTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);

        u32RegValue = ((IP_SCG->RCCR & SCG_RCCR_SCS_MASK) >> SCG_RCCR_SCS_SHIFT);
    }
    while ((SCG_SCS_SIRC_U32 != u32RegValue) && (!TimeoutOccurred));
    /* Raise an error report if the timeout is expired */
    if(TimeoutOccurred)
    {
        ReportPowerErrors(POWER_IP_REPORT_TIMEOUT_ERROR, POWER_IP_ERR_CODE_RESERVED);
    }
}

/**
* @brief            This function will disable FIRC clock.
*/
void Power_Ip_SCG_DisableFircClock(void)
{
    /* Disable FIRC clock */
    IP_SCG->FIRCCSR &= (~(SCG_FIRCCSR_FIRCEN_MASK));
}

/**
* @brief            This function will disable SOSC clock.
*/
void Power_Ip_SCG_DisableSoscClock(void)
{
    /* Disable SOSC clock */
    IP_SCG->SOSCCSR &= (~(SCG_SOSCCSR_SOSCEN_MASK));
}
#endif

#define MCU_STOP_SEC_CODE
#include "Mcu_MemMap.h"


#ifdef __cplusplus
}
#endif

/** @} */
