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
*   @file    Mcu_IPW_Irq.c
*   @version    1.0.0
*
*   @brief   AUTOSAR Mcu - Mcu driver header file.
*   @details AUTOSAR specific Mcu driver header file.

*   @addtogroup MCU_DRIVER Mcu Driver
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
/* Header file with prototype functions defines in this layer. */
#include "Mcu_IPW.h"
#include "Clock_Ip_Private.h"
#include "Power_Ip_PMC.h"

/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define MCU_IPW_IRQ_VENDOR_ID_C                      43
#define MCU_IPW_IRQ_AR_RELEASE_MAJOR_VERSION_C       4
#define MCU_IPW_IRQ_AR_RELEASE_MINOR_VERSION_C       4
#define MCU_IPW_IRQ_AR_RELEASE_REVISION_VERSION_C    0
#define MCU_IPW_IRQ_SW_MAJOR_VERSION_C               1
#define MCU_IPW_IRQ_SW_MINOR_VERSION_C               0
#define MCU_IPW_IRQ_SW_PATCH_VERSION_C               0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Mcu_IPW_Irq.c file and Mcu_IPW_Irq.h file are of the same vendor */
#if (MCU_IPW_IRQ_VENDOR_ID_C != MCU_IPW_VENDOR_ID)
    #error "Mcu_IPW_Irq.c and Mcu_IPW.h have different vendor ids"
#endif

/* Check if Mcu_IPW_Irq.c file and Mcu_IPW.h file are of the same Autosar version */
#if ((MCU_IPW_IRQ_AR_RELEASE_MAJOR_VERSION_C != MCU_IPW_AR_RELEASE_MAJOR_VERSION) || \
     (MCU_IPW_IRQ_AR_RELEASE_MINOR_VERSION_C != MCU_IPW_AR_RELEASE_MINOR_VERSION) || \
     (MCU_IPW_IRQ_AR_RELEASE_REVISION_VERSION_C != MCU_IPW_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Mcu_IPW_Irq.c and Mcu_IPW.h are different"
#endif

/* Check if Mcu_IPW_Irq.c file and Mcu_IPW.h file are of the same Software version */
#if ((MCU_IPW_IRQ_SW_MAJOR_VERSION_C != MCU_IPW_SW_MAJOR_VERSION) || \
     (MCU_IPW_IRQ_SW_MINOR_VERSION_C != MCU_IPW_SW_MINOR_VERSION) || \
     (MCU_IPW_IRQ_SW_PATCH_VERSION_C != MCU_IPW_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Mcu_IPW_Irq.c and Mcu_IPW.h are different"
#endif

/* Check if Mcu_IPW_Irq.c file and Clock_Ip_Private.h file are of the same vendor */
#if (MCU_IPW_IRQ_VENDOR_ID_C != CLOCK_IP_PRIVATE_VENDOR_ID)
    #error "Mcu_IPW_Irq.c and Clock_Ip_Private.h have different vendor ids"
#endif

/* Check if Mcu_IPW_Irq.c file and Clock_Ip_Private.h file are of the same Autosar version */
#if ((MCU_IPW_IRQ_AR_RELEASE_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MAJOR_VERSION) || \
     (MCU_IPW_IRQ_AR_RELEASE_MINOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MINOR_VERSION) || \
     (MCU_IPW_IRQ_AR_RELEASE_REVISION_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Mcu_IPW_Irq.c and Clock_Ip_Private.h are different"
#endif

/* Check if Mcu_IPW_Irq.c file and Clock_Ip_Private.h file are of the same Software version */
#if ((MCU_IPW_IRQ_SW_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MAJOR_VERSION) || \
     (MCU_IPW_IRQ_SW_MINOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MINOR_VERSION) || \
     (MCU_IPW_IRQ_SW_PATCH_VERSION_C != CLOCK_IP_PRIVATE_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Mcu_IPW_Irq.c and Clock_Ip_Private.h are different"
#endif

/* Check if Mcu_IPW_Irq.c file and Power_Ip_PMC.h file are of the same vendor */
#if (MCU_IPW_IRQ_VENDOR_ID_C != POWER_IP_PMC_VENDOR_ID)
    #error "Mcu_IPW_Irq.c and Power_Ip_PMC.h have different vendor ids"
#endif

/* Check if Mcu_IPW_Irq.c file and Power_Ip_PMC.h file are of the same Autosar version */
#if ((MCU_IPW_IRQ_AR_RELEASE_MAJOR_VERSION_C != POWER_IP_PMC_AR_RELEASE_MAJOR_VERSION) || \
     (MCU_IPW_IRQ_AR_RELEASE_MINOR_VERSION_C != POWER_IP_PMC_AR_RELEASE_MINOR_VERSION) || \
     (MCU_IPW_IRQ_AR_RELEASE_REVISION_VERSION_C != POWER_IP_PMC_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Mcu_IPW_Irq.c and Power_Ip_PMC.h are different"
#endif

/* Check if Mcu_IPW_Irq.c file and Power_Ip_PMC.h file are of the same Software version */
#if ((MCU_IPW_IRQ_SW_MAJOR_VERSION_C != POWER_IP_PMC_SW_MAJOR_VERSION) || \
     (MCU_IPW_IRQ_SW_MINOR_VERSION_C != POWER_IP_PMC_SW_MINOR_VERSION) || \
     (MCU_IPW_IRQ_SW_PATCH_VERSION_C != POWER_IP_PMC_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Mcu_IPW_Irq.c and Power_Ip_PMC.h are different"
#endif
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

/*==================================================================================================
                                   GLOBAL FUNCTION PROTOTYPES
==================================================================================================*/
#define MCU_START_SEC_CODE
#include "Mcu_MemMap.h"

#if (MCU_CMU_PMC_SCG_INTERRUPT == STD_ON)
ISR( Mcu_PMC_SCG_CMU_Isr );

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/

/**
* @brief       This function represents the ISR handler for CMU PMC SCG related events.
* @details     This interrupt is triggered if one of the enabled CMU PMC SCG detect an out of range clock.
*              this function exist only on S32K11X.
*
*
* @isr
*
*/
ISR( Mcu_PMC_SCG_CMU_Isr )
{
#if CMU_INSTANCES_ARRAY_SIZE > 0U
    if (Mcu_CMU_GetInterruptStatus(1U) != 0U)
    {
  #ifdef MCU_CMU_ERROR_ISR_USED
    #if (STD_ON == MCU_CMU_ERROR_ISR_USED)
        /* CMU1 interrupt */
        Mcu_CMU_ClockFailInt();
    #endif
  #endif
    }
#endif

#ifdef MCU_VOLTAGE_ERROR_ISR_USED
  #if (STD_ON == MCU_VOLTAGE_ERROR_ISR_USED)
    if (Power_Ip_PMC_GetInterruptStatus() != 0U)
    {
        /* PMC interrupt */
        Power_Ip_PMC_VoltageErrorIsr();
    }
  #endif
#endif
   
    /* SCG Interrupt */
    EXIT_INTERRUPT();
}

#endif

#define MCU_STOP_SEC_CODE
#include "Mcu_MemMap.h"
/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */

