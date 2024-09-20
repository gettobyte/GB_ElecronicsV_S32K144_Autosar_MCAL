/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : DMA,CACHE,TRGMUX,FLEXIO
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
 *   @file       Flexio_Mcl_Ip.h
 *
 *   @version    1.0.0
 *
 *   @brief      AUTOSAR Mcl - Flexio Common driver header file.
 *
 *   @addtogroup FLEXIO_IP_DRIVER FLEXIO IP Driver
 *   @{
 */

#ifndef FLEXIO_MCL_IP_H
#define FLEXIO_MCL_IP_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Mcal.h"
#include "PlatformTypes.h"
#include "Flexio_Mcl_Ip_HwAccess.h"
#include "Flexio_Mcl_Ip_Cfg.h"
#include "Flexio_Mcl_Ip_Types.h"

#if (FLEXIO_MCL_IP_DEV_ERROR_DETECT == STD_ON)
#include "Devassert.h"
#endif

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define FLEXIO_MCL_IP_VENDOR_ID_H                       43
#define FLEXIO_MCL_IP_AR_RELEASE_MAJOR_VERSION_H        4
#define FLEXIO_MCL_IP_AR_RELEASE_MINOR_VERSION_H        4
#define FLEXIO_MCL_IP_AR_RELEASE_REVISION_VERSION_H     0
#define FLEXIO_MCL_IP_SW_MAJOR_VERSION_H                1
#define FLEXIO_MCL_IP_SW_MINOR_VERSION_H                0
#define FLEXIO_MCL_IP_SW_PATCH_VERSION_H                0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if header file and Mcal header file are of the same Autosar version */
#if ((FLEXIO_MCL_IP_AR_RELEASE_MAJOR_VERSION_H != MCAL_AR_RELEASE_MAJOR_VERSION) || \
     (FLEXIO_MCL_IP_AR_RELEASE_MINOR_VERSION_H != MCAL_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Flexio_Mcl_Ip.h and Mcal.h are different"
#endif

/* Check if header file and PlatformTypes header file are of the same Autosar version */
#if ((FLEXIO_MCL_IP_AR_RELEASE_MAJOR_VERSION_H != PLATFORM_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (FLEXIO_MCL_IP_AR_RELEASE_MINOR_VERSION_H != PLATFORM_TYPES_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Flexio_Mcl_Ip.h and PlatformTypes.h are different"
#endif

#if (FLEXIO_MCL_IP_DEV_ERROR_DETECT == STD_ON)
/* Check if header file and Devassert header file are of the same Autosar version */
#if ((FLEXIO_MCL_IP_AR_RELEASE_MAJOR_VERSION_H != DEVASSERT_AR_RELEASE_MAJOR_VERSION) || \
     (FLEXIO_MCL_IP_AR_RELEASE_MINOR_VERSION_H != DEVASSERT_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Flexio_Mcl_Ip.h and Devassert.h are different"
#endif
#endif /* (FLEXIO_MCL_IP_DEV_ERROR_DETECT == STD_ON) */
#endif /* DISABLE_MCAL_INTERMODULE_ASR_CHECK */

/* Check if header file and Flexio_Mcl_Ip_HwAccess.h file are of the same vendor */
#if (FLEXIO_MCL_IP_VENDOR_ID_H != FLEXIO_IP_HW_ACCESS_VENDOR_ID_H)
    #error "Flexio_Mcl_Ip.h and Flexio_Mcl_Ip_HwAccess.h have different vendor ids"
#endif

/* Check if header file and Flexio_Mcl_Ip_HwAccess.h file are of the same Autosar version */
#if ((FLEXIO_MCL_IP_AR_RELEASE_MAJOR_VERSION_H != FLEXIO_IP_HW_ACCESS_AR_RELEASE_MAJOR_VERSION_H) || \
     (FLEXIO_MCL_IP_AR_RELEASE_MINOR_VERSION_H != FLEXIO_IP_HW_ACCESS_AR_RELEASE_MINOR_VERSION_H) || \
     (FLEXIO_MCL_IP_AR_RELEASE_REVISION_VERSION_H != FLEXIO_IP_HW_ACCESS_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Flexio_Mcl_Ip.h and Flexio_Mcl_Ip_HwAccess.h are different"
#endif

/* Check if header file and Flexio_Mcl_Ip_HwAccess.h file are of the same Software version */
#if ((FLEXIO_MCL_IP_SW_MAJOR_VERSION_H != FLEXIO_IP_HW_ACCESS_SW_MAJOR_VERSION_H) || \
     (FLEXIO_MCL_IP_SW_MINOR_VERSION_H != FLEXIO_IP_HW_ACCESS_SW_MINOR_VERSION_H) || \
     (FLEXIO_MCL_IP_SW_PATCH_VERSION_H != FLEXIO_IP_HW_ACCESS_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Flexio_Mcl_Ip.h and Flexio_Mcl_Ip_HwAccess.h are different"
#endif

/* Check if header file and Flexio_Mcl_Ip_Cfg.h file are of the same vendor */
#if (FLEXIO_MCL_IP_VENDOR_ID_H != FLEXIO_MCL_IP_CFG_VENDOR_ID_H)
    #error "Flexio_Mcl_Ip.h and Flexio_Mcl_Ip_Cfg.h have different vendor ids"
#endif

/* Check if header file and Flexio_Mcl_Ip_Cfg.h file are of the same Autosar version */
#if ((FLEXIO_MCL_IP_AR_RELEASE_MAJOR_VERSION_H != FLEXIO_MCL_IP_CFG_AR_RELEASE_MAJOR_VERSION_H) || \
     (FLEXIO_MCL_IP_AR_RELEASE_MINOR_VERSION_H != FLEXIO_MCL_IP_CFG_AR_RELEASE_MINOR_VERSION_H) || \
     (FLEXIO_MCL_IP_AR_RELEASE_REVISION_VERSION_H != FLEXIO_MCL_IP_CFG_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Flexio_Mcl_Ip.h and Flexio_Mcl_Ip_Cfg.h are different"
#endif

/* Check if header file and Flexio_Mcl_Ip_Cfg.h file are of the same Software version */
#if ((FLEXIO_MCL_IP_SW_MAJOR_VERSION_H != FLEXIO_MCL_IP_CFG_SW_MAJOR_VERSION_H) || \
     (FLEXIO_MCL_IP_SW_MINOR_VERSION_H != FLEXIO_MCL_IP_CFG_SW_MINOR_VERSION_H) || \
     (FLEXIO_MCL_IP_SW_PATCH_VERSION_H != FLEXIO_MCL_IP_CFG_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Flexio_Mcl_Ip.h and Flexio_Mcl_Ip_Cfg.h are different"
#endif

/* Check if header file and Flexio_Mcl_Ip_Types.h file are of the same vendor */
#if (FLEXIO_MCL_IP_VENDOR_ID_H != FLEXIO_MCL_IP_TYPES_VENDOR_ID_H)
    #error "Flexio_Mcl_Ip.h and Flexio_Mcl_Ip_Types.h have different vendor ids"
#endif

/* Check if header file and Flexio_Mcl_Ip_Types.h file are of the same Autosar version */
#if ((FLEXIO_MCL_IP_AR_RELEASE_MAJOR_VERSION_H != FLEXIO_MCL_IP_TYPES_AR_RELEASE_MAJOR_VERSION_H) || \
     (FLEXIO_MCL_IP_AR_RELEASE_MINOR_VERSION_H != FLEXIO_MCL_IP_TYPES_AR_RELEASE_MINOR_VERSION_H) || \
     (FLEXIO_MCL_IP_AR_RELEASE_REVISION_VERSION_H != FLEXIO_MCL_IP_TYPES_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Flexio_Mcl_Ip.h and Flexio_Mcl_Ip_Types.h are different"
#endif

/* Check if header file and Flexio_Mcl_Ip_Types.h file are of the same Software version */
#if ((FLEXIO_MCL_IP_SW_MAJOR_VERSION_H != FLEXIO_MCL_IP_TYPES_SW_MAJOR_VERSION_H) || \
     (FLEXIO_MCL_IP_SW_MINOR_VERSION_H != FLEXIO_MCL_IP_TYPES_SW_MINOR_VERSION_H) || \
     (FLEXIO_MCL_IP_SW_PATCH_VERSION_H != FLEXIO_MCL_IP_TYPES_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Flexio_Mcl_Ip.h and Flexio_Mcl_Ip_Types.h are different"
#endif

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                            ENUMS
==================================================================================================*/

/*==================================================================================================
*                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
#define MCL_START_SEC_CONST_UNSPECIFIED
#include "Mcl_MemMap.h"
/* Table of base addresses for FLEXIO instances. */
extern FLEXIO_Type * const flexioBase[FLEXIO_INSTANCE_COUNT];

#define MCL_STOP_SEC_CONST_UNSPECIFIED
#include "Mcl_MemMap.h"

#define MCL_START_SEC_VAR_CLEARED_BOOLEAN
#include "Mcl_MemMap.h"
/* Table of base addresses for FLEXIO instances. */
extern boolean Flexio_Ip_IpIsInitialized[FLEXIO_INSTANCE_COUNT];

#define MCL_STOP_SEC_VAR_CLEARED_BOOLEAN
#include "Mcl_MemMap.h"
/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#define MCL_START_SEC_CODE
#include "Mcl_MemMap.h"

/* Implementation of Flexio handler named in startup code. */
ISR(MCL_FLEXIO_ISR);

void Flexio_Mcl_Ip_DeinitDevice(uint32 instance);

Flexio_Ip_CommonStatusType Flexio_Mcl_Ip_InitDevice(const Flexio_Ip_InstanceConfigType * const pFlexioInitType);

#define MCL_STOP_SEC_CODE
#include "Mcl_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* FLEXIO_MCL_IP_H */
