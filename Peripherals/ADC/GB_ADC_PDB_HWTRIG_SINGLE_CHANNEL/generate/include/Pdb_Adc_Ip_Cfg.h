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

#ifndef PDB_ADC_IP_CFG_H
#define PDB_ADC_IP_CFG_H

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
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Pdb_Adc_Ip_Types.h"
#include "Pdb_Adc_Ip_BOARD_InitPeripherals_PBcfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define PDB_ADC_IP_VENDOR_ID_CFG_H                      43
#define PDB_ADC_IP_AR_RELEASE_MAJOR_VERSION_CFG_H       4
#define PDB_ADC_IP_AR_RELEASE_MINOR_VERSION_CFG_H       4
#define PDB_ADC_IP_AR_RELEASE_REVISION_VERSION_CFG_H    0
#define PDB_ADC_IP_SW_MAJOR_VERSION_CFG_H               1
#define PDB_ADC_IP_SW_MINOR_VERSION_CFG_H               0
#define PDB_ADC_IP_SW_PATCH_VERSION_CFG_H               0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Pdb_Adc_Ip_Cfg.h file and Pdb_Adc_Ip_Types.h file are of the same vendor */
#if (PDB_ADC_IP_VENDOR_ID_CFG_H != PDB_ADC_IP_VENDOR_ID_TYPES_H)
    #error "Pdb_Adc_Ip_Cfg.h and Pdb_Adc_Ip_Types.h have different vendor ids"
#endif

/* Check if Pdb_Adc_Ip_Cfg.h file and Pdb_Adc_Ip_Types.h file are of the same Autosar version */
#if ((PDB_ADC_IP_AR_RELEASE_MAJOR_VERSION_CFG_H != PDB_ADC_IP_AR_RELEASE_MAJOR_VERSION_TYPES_H) || \
     (PDB_ADC_IP_AR_RELEASE_MINOR_VERSION_CFG_H != PDB_ADC_IP_AR_RELEASE_MINOR_VERSION_TYPES_H) || \
     (PDB_ADC_IP_AR_RELEASE_REVISION_VERSION_CFG_H != PDB_ADC_IP_AR_RELEASE_REVISION_VERSION_TYPES_H) \
    )
    #error "AutoSar Version Numbers of Pdb_Adc_Ip_Cfg.h and Pdb_Adc_Ip_Types.h are different"
#endif

/* Check if Pdb_Adc_Ip_Cfg.h file and Pdb_Adc_Ip_Types.h file are of the same Software version */
#if ((PDB_ADC_IP_SW_MAJOR_VERSION_CFG_H != PDB_ADC_IP_SW_MAJOR_VERSION_TYPES_H) || \
     (PDB_ADC_IP_SW_MINOR_VERSION_CFG_H != PDB_ADC_IP_SW_MINOR_VERSION_TYPES_H) || \
     (PDB_ADC_IP_SW_PATCH_VERSION_CFG_H != PDB_ADC_IP_SW_PATCH_VERSION_TYPES_H) \
    )
  #error "Software Version Numbers of Pdb_Adc_Ip_Cfg.h and Pdb_Adc_Ip_Types.h are different"
#endif

/* Check if Pdb_Adc_Ip_Cfg.h file and Pdb_Adc_Ip_BOARD_INITPERIPHERALS_PBcfg.h file are of the same vendor */
#if (PDB_ADC_IP_VENDOR_ID_CFG_H != PDB_ADC_IP_VENDOR_ID_BOARD_INITPERIPHERALS_PBCFG_H)
    #error "Pdb_Adc_Ip_Cfg.h and Pdb_Adc_Ip_BOARD_INITPERIPHERALS_PBcfg.h have different vendor ids"
#endif

/* Check if Pdb_Adc_Ip_Cfg.h file and Pdb_Adc_Ip_BOARD_INITPERIPHERALS_PBcfg.h file are of the same Autosar version */
#if ((PDB_ADC_IP_AR_RELEASE_MAJOR_VERSION_CFG_H != PDB_ADC_IP_AR_RELEASE_MAJOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_H) || \
     (PDB_ADC_IP_AR_RELEASE_MINOR_VERSION_CFG_H != PDB_ADC_IP_AR_RELEASE_MINOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_H) || \
     (PDB_ADC_IP_AR_RELEASE_REVISION_VERSION_CFG_H != PDB_ADC_IP_AR_RELEASE_REVISION_VERSION_BOARD_INITPERIPHERALS_PBCFG_H) \
    )
    #error "AutoSar Version Numbers of Pdb_Adc_Ip_Cfg.h and Pdb_Adc_Ip_BOARD_INITPERIPHERALS_PBcfg.h are different"
#endif

/* Check if Pdb_Adc_Ip_Cfg.h file and Pdb_Adc_Ip_BOARD_INITPERIPHERALS_PBcfg.h file are of the same Software version */
#if ((PDB_ADC_IP_SW_MAJOR_VERSION_CFG_H != PDB_ADC_IP_SW_MAJOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_H) || \
     (PDB_ADC_IP_SW_MINOR_VERSION_CFG_H != PDB_ADC_IP_SW_MINOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_H) || \
     (PDB_ADC_IP_SW_PATCH_VERSION_CFG_H != PDB_ADC_IP_SW_PATCH_VERSION_BOARD_INITPERIPHERALS_PBCFG_H) \
    )
  #error "Software Version Numbers of Pdb_Adc_Ip_Cfg.h and Pdb_Adc_Ip_BOARD_INITPERIPHERALS_PBcfg.h are different"
#endif

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* PDB_ADC_IP_CFG_H */

