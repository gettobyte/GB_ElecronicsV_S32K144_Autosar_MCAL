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

#ifndef PDB_ADC_IP_CFGDEFINES_H
#define PDB_ADC_IP_CFGDEFINES_H

/**
*   @file
*
*   @addtogroup pdb_adc_ip_config Pdb Adc IPL Configuration
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                         INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "S32K144_PDB.h"
#include "S32K144_SIM.h"
#include "OsIf.h"

/*==================================================================================================
*                                SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define PDB_ADC_IP_VENDOR_ID_CFGDEFINES_H                      43
#define PDB_ADC_IP_AR_RELEASE_MAJOR_VERSION_CFGDEFINES_H       4
#define PDB_ADC_IP_AR_RELEASE_MINOR_VERSION_CFGDEFINES_H       4
#define PDB_ADC_IP_AR_RELEASE_REVISION_VERSION_CFGDEFINES_H    0
#define PDB_ADC_IP_SW_MAJOR_VERSION_CFGDEFINES_H               1
#define PDB_ADC_IP_SW_MINOR_VERSION_CFGDEFINES_H               0
#define PDB_ADC_IP_SW_PATCH_VERSION_CFGDEFINES_H               0
/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check AutoSar version */
#if ((PDB_ADC_IP_AR_RELEASE_MAJOR_VERSION_CFGDEFINES_H != OSIF_AR_RELEASE_MAJOR_VERSION) || \
     (PDB_ADC_IP_AR_RELEASE_MINOR_VERSION_CFGDEFINES_H != OSIF_AR_RELEASE_MINOR_VERSION)    \
    )
    #error "AutoSar Version Numbers of Pdb_Adc_Ip_CfgDefines.h and OsIf.h are different"
#endif
#endif /* DISABLE_MCAL_INTERMODULE_ASR_CHECK */
/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                        LOCAL MACROS
==================================================================================================*/

/* @brief PDB has instance back to back mode between PDB0 CH0 and PDB1 CH0 pre-triggers */
#define FEATURE_PDB_HAS_INSTANCE_BACKTOBACK     (STD_ON)

/* @brief PDB has inter-channel back to back mode between PDBx CH0 and PDBx CH1 pre-triggers */
#define FEATURE_PDB_HAS_INTERCHANNEL_BACKTOBACK (STD_OFF)

#define PDB_ADC_IP_DEV_ERROR_DETECT             (STD_ON)
#define PDB_ADC_IP_ENABLE_USER_MODE_SUPPORT     (STD_OFF)

/*==================================================================================================
*                                       LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* PDB_ADC_IP_CFGDEFINES_H */

