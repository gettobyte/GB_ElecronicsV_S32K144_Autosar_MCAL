/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : ADC
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
*   @file
*
*   @addtogroup pdb_adc_ip Pdb Adc IPL
*   @{
*/

#include "OsIf.h"
#include "Mcal.h"
#include "Pdb_Adc_Ip_CfgDefines.h"
/*******************************************************************************
 *   Source file version information
 ******************************************************************************/
#define PDB_ADC_IP_VENDOR_ID_ISR_C                      43
#define PDB_ADC_IP_AR_RELEASE_MAJOR_VERSION_ISR_C       4
#define PDB_ADC_IP_AR_RELEASE_MINOR_VERSION_ISR_C       4
#define PDB_ADC_IP_AR_RELEASE_REVISION_VERSION_ISR_C    0
#define PDB_ADC_IP_SW_MAJOR_VERSION_ISR_C               1
#define PDB_ADC_IP_SW_MINOR_VERSION_ISR_C               0
#define PDB_ADC_IP_SW_PATCH_VERSION_ISR_C               0
/*******************************************************************************
 *   File version checks
 ******************************************************************************/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if Pdb_Adc_Ip_Isr.c file and OsIf.h file are of the same Autosar version */
    #if ((PDB_ADC_IP_AR_RELEASE_MAJOR_VERSION_ISR_C != OSIF_AR_RELEASE_MAJOR_VERSION) || \
         (PDB_ADC_IP_AR_RELEASE_MINOR_VERSION_ISR_C != OSIF_AR_RELEASE_MINOR_VERSION)    \
        )
        #error "AutoSar Version Numbers of Pdb_Adc_Ip_Isr.c and OsIf.h are different"
    #endif

    /* Check if Pdb_Adc_Ip_Isr.c file and Mcal.h file are of the same Autosar version */
    #if ((PDB_ADC_IP_AR_RELEASE_MAJOR_VERSION_ISR_C != MCAL_AR_RELEASE_MAJOR_VERSION) || \
         (PDB_ADC_IP_AR_RELEASE_MINOR_VERSION_ISR_C != MCAL_AR_RELEASE_MINOR_VERSION)    \
        )
        #error "AutoSar Version Numbers of Pdb_Adc_Ip_Isr.c and Mcal.h are different"
    #endif
#endif /* DISABLE_MCAL_INTERMODULE_ASR_CHECK */

/* Check if Pdb_Adc_Ip_Isr.c file and Pdb_Adc_Ip_CfgDefines.h file are of the same vendor */
#if (PDB_ADC_IP_VENDOR_ID_ISR_C != PDB_ADC_IP_VENDOR_ID_CFGDEFINES_H)
    #error "Pdb_Adc_Ip_Isr.c and Pdb_Adc_Ip_CfgDefines.h have different vendor ids"
#endif

/* Check if Pdb_Adc_Ip_Isr.c file and Pdb_Adc_Ip_CfgDefines.h file are of the same Autosar version */
#if ((PDB_ADC_IP_AR_RELEASE_MAJOR_VERSION_ISR_C != PDB_ADC_IP_AR_RELEASE_MAJOR_VERSION_CFGDEFINES_H) || \
     (PDB_ADC_IP_AR_RELEASE_MINOR_VERSION_ISR_C != PDB_ADC_IP_AR_RELEASE_MINOR_VERSION_CFGDEFINES_H) || \
     (PDB_ADC_IP_AR_RELEASE_REVISION_VERSION_ISR_C != PDB_ADC_IP_AR_RELEASE_REVISION_VERSION_CFGDEFINES_H) \
    )
    #error "AutoSar Version Numbers of Pdb_Adc_Ip_Isr.c and Pdb_Adc_Ip_CfgDefines.h are different"
#endif

/* Check if Pdb_Adc_Ip_Isr.c file and Pdb_Adc_Ip_CfgDefines.h file are of the same Software version */
#if ((PDB_ADC_IP_SW_MAJOR_VERSION_ISR_C != PDB_ADC_IP_SW_MAJOR_VERSION_CFGDEFINES_H) || \
     (PDB_ADC_IP_SW_MINOR_VERSION_ISR_C != PDB_ADC_IP_SW_MINOR_VERSION_CFGDEFINES_H) || \
     (PDB_ADC_IP_SW_PATCH_VERSION_ISR_C != PDB_ADC_IP_SW_PATCH_VERSION_CFGDEFINES_H) \
    )
  #error "Software Version Numbers of Pdb_Adc_Ip_Isr.c and Pdb_Adc_Ip_CfgDefines.h are different"
#endif
/******************************************************************************/
#define ADC_START_SEC_CODE
#include "Adc_MemMap.h"

extern void Pdb_Adc_Ip_IRQHandler(const uint32 Instance);

ISR(Pdb_0_Isr); /* IAR requires prototypes. */
ISR(Pdb_0_Isr)
{
    Pdb_Adc_Ip_IRQHandler(0UL);

    EXIT_INTERRUPT();
}

#if (PDB_INSTANCE_COUNT >= 1)
ISR(Pdb_1_Isr); /* IAR requires prototypes. */
ISR(Pdb_1_Isr)
{
    Pdb_Adc_Ip_IRQHandler(1UL);

    EXIT_INTERRUPT();
}
#endif /* (PDB_INSTANCE_COUNT >= 1) */

#define ADC_STOP_SEC_CODE
#include "Adc_MemMap.h"

/** @} */
