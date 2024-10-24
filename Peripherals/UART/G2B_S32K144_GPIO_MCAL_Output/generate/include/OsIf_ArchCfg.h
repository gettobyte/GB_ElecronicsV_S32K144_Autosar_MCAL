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
* Build Version : S32K1_RTD_1_0_0_ASR_REL_4_4_REV_0000_20210810
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
/**
*   @file       OsIf_ArchCfg.h
*   
*   @version 0.8.0
*
*
*   @addtogroup OSIF_DRIVER
*   @{
*/

#ifndef OSIF_ARCHCFG_H
#define OSIF_ARCHCFG_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "StandardTypes.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define OSIF_ARCHCFG_VENDOR_ID                    43
#define OSIF_ARCHCFG_AR_RELEASE_MAJOR_VERSION     4
#define OSIF_ARCHCFG_AR_RELEASE_MINOR_VERSION     4
#define OSIF_ARCHCFG_AR_RELEASE_REVISION_VERSION  0
#define OSIF_ARCHCFG_SW_MAJOR_VERSION             1
#define OSIF_ARCHCFG_SW_MINOR_VERSION             0
#define OSIF_ARCHCFG_SW_PATCH_VERSION             1

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/
#define MCAL_ARM_MARCH      (16)  /* for ARM M4 Thumb2      */
#define MCAL_ARM_AARCH32    (32)  /* for ARM ARCH32         */
#define MCAL_ARM_AARCH64    (64)  /* for ARM ARCH64         */
#define MCAL_ARM_RARCH      (52)  /* for ARM R platform     */

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
#if defined(CPU_CORTEX_A53)
    #define MCAL_PLATFORM_ARM  MCAL_ARM_AARCH64
#elif (defined(CPU_CORTEX_M7) || defined(CPU_CORTEX_M4F) || defined(CPU_CORTEX_M0P))
    #define MCAL_PLATFORM_ARM  MCAL_ARM_MARCH
#endif

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
                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* OSIF_ARCHCFG_H */
/** @} */

