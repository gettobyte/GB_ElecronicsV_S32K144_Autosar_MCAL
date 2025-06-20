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
/**
*   @file       OsIf_Cfg.h
*   @implements OsIf_Cfg.h_Artifact
*   @version 1.0.0
*
*
*   @addtogroup OSIF_DRIVER
*   @{
*/

#ifndef OSIF_CFG_H
#define OSIF_CFG_H

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
#include "S32K144_SYSTICK.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define OSIF_CFG_VENDOR_ID                    43
#define OSIF_CFG_AR_RELEASE_MAJOR_VERSION     4
#define OSIF_CFG_AR_RELEASE_MINOR_VERSION     4
#define OSIF_CFG_AR_RELEASE_REVISION_VERSION  0
#define OSIF_CFG_SW_MAJOR_VERSION             1
#define OSIF_CFG_SW_MINOR_VERSION             0
#define OSIF_CFG_SW_PATCH_VERSION             0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Checks against StandardTypes.h */
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    #if ((OSIF_CFG_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION) || \
         (OSIF_CFG_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of OsIf_Cfg.h and StandardTypes.h are different"
    #endif
#endif
/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/
/** @violates @ref Mcal_h_REF_2 unused macro. */
#define MCAL_ARM_MARCH      (16)  /* for ARM M4 Thumb2      */
/** @violates @ref Mcal_h_REF_2 unused macro. */
#define MCAL_ARM_AARCH32    (32)  /* for ARM ARCH32         */
/** @violates @ref Mcal_h_REF_2 unused macro. */
#define MCAL_ARM_AARCH64    (64)  /* for ARM ARCH64         */
/** @violates @ref Mcal_h_REF_2 unused macro. */
#define MCAL_ARM_RARCH      (52)  /* for ARM R platform     */

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/* ARM_MARCH - is used to specify the ARM architecture MCAL_MARCH, MCAL_RARCH, MCAL_AARCH32, MCAL_AARCH64 */
#define MCAL_PLATFORM_ARM  MCAL_ARM_MARCH
        
    

 
/* General OSIF configuration */
#define OSIF_MODULE_ID                   (255U)

#define OSIF_DRIVER_INSTANCE             (255U)

#define OSIF_ENABLE_USER_MODE_SUPPORT     (STD_OFF)

#ifndef MCAL_ENABLE_USER_MODE_SUPPORT
    #if (STD_ON == OSIF_ENABLE_USER_MODE_SUPPORT)
        #error MCAL_ENABLE_USER_MODE_SUPPORT is not enabled. For running OsIf in user mode, MCAL_ENABLE_USER_MODE_SUPPORT needs to be defined.
    #endif /* (STD_ON == OSIF_ENABLE_USER_MODE_SUPPORT */
#endif /* ifndef MCAL_ENABLE_USER_MODE_SUPPORT */

#define OSIF_ENABLE_MULTICORE_SUPPORT    (STD_OFF)

#define OSIF_MAX_COREIDX_SUPPORTED       (1U)

#define OSIF_DEV_ERROR_DETECT            (STD_ON)

#define USING_OS_BAREMETAL

#define OSIF_USE_SYSTEM_TIMER            (STD_OFF)

#define OSIF_USE_CUSTOM_TIMER            (STD_OFF)

/* Autosar OS Specific */

/* Baremetal Specific */
#define OSIF_USE_SYSTICK                 (STD_ON)

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
#endif /* OSIF_CFG_H */
/** @} */

