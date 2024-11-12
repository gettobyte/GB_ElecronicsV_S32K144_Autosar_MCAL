/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : 
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
*   @file       Power_Ip_PMC.c
*   @version    1.0.1
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
#include "Power_Ip_PMC.h"
#include "Power_Ip_Private.h"

#if (defined(POWER_IP_ENABLE_USER_MODE_SUPPORT) && (STD_ON == POWER_IP_ENABLE_USER_MODE_SUPPORT))
  #if (defined(MCAL_PMC_REG_PROT_AVAILABLE))
    #if (STD_ON == MCAL_PMC_REG_PROT_AVAILABLE)
      #define USER_MODE_REG_PROT_ENABLED      (STD_ON)
      #include "RegLockMacros.h"
    #endif /* (STD_ON == MCAL_PMC_REG_PROT_AVAILABLE) */
  #endif
#endif /* (STD_ON == POWER_IP_ENABLE_USER_MODE_SUPPORT) */


/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define POWER_IP_PMC_VENDOR_ID_C                      43
#define POWER_IP_PMC_AR_RELEASE_MAJOR_VERSION_C       4
#define POWER_IP_PMC_AR_RELEASE_MINOR_VERSION_C       4
#define POWER_IP_PMC_AR_RELEASE_REVISION_VERSION_C    0
#define POWER_IP_PMC_SW_MAJOR_VERSION_C               1
#define POWER_IP_PMC_SW_MINOR_VERSION_C               0
#define POWER_IP_PMC_SW_PATCH_VERSION_C               1

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Power_Ip_PMC.c file and Power_Ip_PMC.h file are of the same vendor */
#if (POWER_IP_PMC_VENDOR_ID_C != POWER_IP_PMC_VENDOR_ID)
    #error "Power_Ip_PMC.c and Power_Ip_PMC.h have different vendor ids"
#endif

/* Check if Power_Ip_PMC.c file and Power_Ip_PMC.h file are of the same Autosar version */
#if ((POWER_IP_PMC_AR_RELEASE_MAJOR_VERSION_C != POWER_IP_PMC_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_PMC_AR_RELEASE_MINOR_VERSION_C != POWER_IP_PMC_AR_RELEASE_MINOR_VERSION) || \
     (POWER_IP_PMC_AR_RELEASE_REVISION_VERSION_C != POWER_IP_PMC_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Power_Ip_PMC.c and Power_Ip_PMC.h are different"
#endif

/* Check if Power_Ip_PMC.c file and Power_Ip_PMC.h file are of the same Software version */
#if ((POWER_IP_PMC_SW_MAJOR_VERSION_C != POWER_IP_PMC_SW_MAJOR_VERSION) || \
     (POWER_IP_PMC_SW_MINOR_VERSION_C != POWER_IP_PMC_SW_MINOR_VERSION) || \
     (POWER_IP_PMC_SW_PATCH_VERSION_C != POWER_IP_PMC_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Power_Ip_PMC.c and Power_Ip_PMC.h are different"
#endif

/* Check if Power_Ip_PMC.c file and Power_Ip_Private.h file are of the same vendor */
#if (POWER_IP_PMC_VENDOR_ID_C != POWER_IP_PRIVATE_VENDOR_ID)
    #error "Power_Ip_PMC.c and Power_Ip_Private.h have different vendor ids"
#endif

/* Check if Power_Ip_PMC.c file and Power_Ip_Private.h file are of the same Autosar version */
#if ((POWER_IP_PMC_AR_RELEASE_MAJOR_VERSION_C != POWER_IP_PRIVATE_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_PMC_AR_RELEASE_MINOR_VERSION_C != POWER_IP_PRIVATE_AR_RELEASE_MINOR_VERSION) || \
     (POWER_IP_PMC_AR_RELEASE_REVISION_VERSION_C != POWER_IP_PRIVATE_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Power_Ip_PMC.c and Power_Ip_Private.h are different"
#endif

/* Check if Power_Ip_PMC.c file and Power_Ip_Private.h file are of the same Software version */
#if ((POWER_IP_PMC_SW_MAJOR_VERSION_C != POWER_IP_PRIVATE_SW_MAJOR_VERSION) || \
     (POWER_IP_PMC_SW_MINOR_VERSION_C != POWER_IP_PRIVATE_SW_MINOR_VERSION) || \
     (POWER_IP_PMC_SW_PATCH_VERSION_C != POWER_IP_PRIVATE_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Power_Ip_PMC.c and Power_Ip_Private.h are different"
#endif

#if (defined(POWER_IP_ENABLE_USER_MODE_SUPPORT) && (STD_ON == POWER_IP_ENABLE_USER_MODE_SUPPORT))
  #if (defined(MCAL_PMC_REG_PROT_AVAILABLE))
    #if (STD_ON == MCAL_PMC_REG_PROT_AVAILABLE)
        #ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
        /* Check if Power_Ip_PMC.c file and RegLockMacros.h file are of the same Autosar version */
            #if ((POWER_IP_PMC_AR_RELEASE_MAJOR_VERSION_C    != REGLOCKMACROS_AR_RELEASE_MAJOR_VERSION) || \
                (POWER_IP_PMC_AR_RELEASE_MINOR_VERSION_C    != REGLOCKMACROS_AR_RELEASE_MINOR_VERSION))
                #error "AutoSar Version Numbers of Power_Ip_PMC.c and RegLockMacros.h are different"
            #endif
        #endif
    #endif /* (STD_ON == MCAL_PMC_REG_PROT_AVAILABLE) */
  #endif
#endif /* (STD_ON == POWER_IP_ENABLE_USER_MODE_SUPPORT) */
/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/


/*==================================================================================================
                                       LOCAL MACROS
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
#if (defined(POWER_IP_VOLTAGE_ERROR_ISR_USED))
  #if (POWER_IP_VOLTAGE_ERROR_ISR_USED == STD_ON)

#define MCU_START_SEC_VAR_INIT_UNSPECIFIED
#include "Mcu_MemMap.h"

static volatile Power_Ip_PMC_StatusType Power_Ip_ePmcStatus = PMC_UNINIT;

#define MCU_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Mcu_MemMap.h"

  #endif
#endif
/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/


/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/
#define MCU_START_SEC_CODE

#include "Mcu_MemMap.h"


/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/
#if (defined(POWER_IP_DISABLE_PMC_INIT) && (STD_OFF == POWER_IP_DISABLE_PMC_INIT))
/**
* @brief            This function configure the Power Management Controller
* @details          The operating voltages are monitored by a set of on-chip supervisory circuits
*                   to ensure that this device works within the correct voltage range.
*
* @param[in]        ConfigPtr   Pointer to PMC configuration structure.
*
* @return           void
*
*/
void Power_Ip_PMC_PowerInit(const Power_Ip_PMC_ConfigType * ConfigPtr)
{
    uint8 Tmp;

#if(STD_ON == POWER_IP_PMC_LVDSC1_SUPPORT)
    Tmp = (uint8)IP_PMC->LVDSC1;
    Tmp = (uint8)(Tmp & (uint8)(~PMC_LVDSC1_RWBITS_MASK8));
    Tmp = (uint8)(Tmp | (uint8)(ConfigPtr->Lvdsc1));
    IP_PMC->LVDSC1 = Tmp;
#endif
    Tmp = (uint8)IP_PMC->LVDSC2;
    Tmp = (uint8)(Tmp & (uint8)(~PMC_LVDSC2_RWBITS_MASK8));
    Tmp = (uint8)(Tmp | (uint8)(ConfigPtr->Lvdsc2));
    IP_PMC->LVDSC2 = Tmp;

    Tmp = (uint8)IP_PMC->REGSC;
    Tmp = (uint8)(Tmp & (uint8)(~PMC_REGSC_RWBITS_MASK8));
    Tmp = (uint8)(Tmp | (uint8)(ConfigPtr->Regsc));
    IP_PMC->REGSC = Tmp;

#if (defined(POWER_IP_VOLTAGE_ERROR_ISR_USED))
  #if (POWER_IP_VOLTAGE_ERROR_ISR_USED == STD_ON)
    /* make Status of PMC to initialized to check in the interrupt function */
    Power_Ip_ePmcStatus = PMC_INIT;
  #endif
#endif
}
#endif

#if (POWER_IP_VOLTAGE_ERROR_ISR_USED == STD_ON)
/**
* @brief            This function get status voltage error
*
* @return           uint8
*
*/
uint8 Power_Ip_PMC_GetInterruptStatus(void)
{
    uint8 VoltageStatus = 0U;
#if(STD_ON == POWER_IP_PMC_LVDSC1_SUPPORT)
    /* Read Low Voltage Detect Flag */
    VoltageStatus = ((IP_PMC->LVDSC1) & PMC_LVDSC1_LVDF_MASK);
#endif
    /* Read Low Voltage Warning Flag */
    VoltageStatus |= ((IP_PMC->LVDSC2) & PMC_LVDSC2_LVWF_MASK);

    return VoltageStatus;
}

/**
* @brief            This function handle the voltage error detection.
*
* @return           void
*
* @isr
* @implements Power_Ip_PMC_VoltageErrorIsr_Activity
*/
void Power_Ip_PMC_VoltageErrorIsr(void)
{
#if(STD_ON == POWER_IP_PMC_LVDSC1_SUPPORT)
    uint8 VoltageDetectStatus;
    uint8 VoltageDetectEnable;
#endif
    uint8 VoltageWarningStatus;
    uint8 VoltageWarningEnable;

#if(STD_ON == POWER_IP_PMC_LVDSC1_SUPPORT)
    /* Read Low Voltage Detect Flag */
    VoltageDetectStatus = ((IP_PMC->LVDSC1) & PMC_LVDSC1_LVDF_MASK);
    /* clear IRQ flags */
    IP_PMC->LVDSC1 |= (VoltageDetectStatus & PMC_LVDSC1_LVDF_MASK);
#endif

    /* Read Low Voltage Warning Flag */
    VoltageWarningStatus = ((IP_PMC->LVDSC2) & PMC_LVDSC2_LVWF_MASK);
    /* clear IRQ flags */
    IP_PMC->LVDSC2 |= (VoltageWarningStatus & PMC_LVDSC2_LVWF_MASK);

    if(PMC_UNINIT != Power_Ip_ePmcStatus)
    {
#if(STD_ON == POWER_IP_PMC_LVDSC1_SUPPORT)
        /* Read Low Voltage Detect Reset Enable */
        VoltageDetectEnable = ((IP_PMC->LVDSC1) & PMC_LVDSC1_LVDIE_MASK);
#endif
        /* Read Low-Voltage Warning Interrupt Enable */
        VoltageWarningEnable = ((IP_PMC->LVDSC2) & PMC_LVDSC2_LVWIE_MASK);
        /* check if there is an event to report */
#if(STD_ON == POWER_IP_PMC_LVDSC1_SUPPORT)
        if((((uint8)0x00U != VoltageDetectStatus) && ((uint8)0x00U != VoltageDetectEnable)) ||
           (((uint8)0x00U != VoltageWarningStatus) && ((uint8)0x00U != VoltageWarningEnable)))
#else
        if(((uint8)0x00U != VoltageWarningStatus) && ((uint8)0x00U != VoltageWarningEnable))
#endif
        {
#ifdef POWER_IP_ERROR_ISR_NOTIFICATION
            POWER_IP_ERROR_ISR_NOTIFICATION(POWER_IP_E_ISR_VOLTAGE_ERROR);
#else
            Power_Ip_ReportPowerErrors(POWER_IP_ISR_ERROR, POWER_IP_E_ISR_VOLTAGE_ERROR);
#endif
        }
    }
}
#endif

#define MCU_STOP_SEC_CODE
#include "Mcu_MemMap.h"


#ifdef __cplusplus
}
#endif

/** @} */
