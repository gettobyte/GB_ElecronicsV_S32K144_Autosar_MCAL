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
*   @file       Power_Ip_CMU.h
*   @version    1.0.0
*
*   @brief   POWER IP driver header file.
*   @details POWER IP driver header file.
*
*   @addtogroup POWER_DRIVER Power Ip Driver
*   @{
*/


#ifndef POWER_IP_CMU_H
#define POWER_IP_CMU_H


#ifdef __cplusplus
extern "C"{
#endif



/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Power_Ip_Cfg_Defines.h"

#ifdef MCU_ENABLE_CMU_PERIPHERAL
#if(MCU_ENABLE_CMU_PERIPHERAL == STD_ON)

#if defined(POWER_IP_S32K116)
  #include "S32K116_CMU.h"
#elif defined(POWER_IP_S32K118)
  #include "S32K118_CMU.h"
#else
  #error "Derivative not found"
#endif
#endif
#endif

#include "StandardTypes.h"
#include "Mcal.h"

/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define POWER_IP_CMU_VENDOR_ID                       43
#define POWER_IP_CMU_AR_RELEASE_MAJOR_VERSION        4
#define POWER_IP_CMU_AR_RELEASE_MINOR_VERSION        4
#define POWER_IP_CMU_AR_RELEASE_REVISION_VERSION     0
#define POWER_IP_CMU_SW_MAJOR_VERSION                1
#define POWER_IP_CMU_SW_MINOR_VERSION                0
#define POWER_IP_CMU_SW_PATCH_VERSION                0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if Power_Ip_CMU.h file and Power_Ip_Cfg_Defines.h file are of the same vendor */
#if (POWER_IP_CMU_VENDOR_ID != POWER_IP_CFG_DEFINES_VENDOR_ID)
    #error "Power_Ip_CMU.h and Power_Ip_Cfg_Defines.h have different vendor ids"
#endif

/* Check if Power_Ip_CMU.h file and Power_Ip_Cfg_Defines.h file are of the same Autosar version */
#if ((POWER_IP_CMU_AR_RELEASE_MAJOR_VERSION != POWER_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_CMU_AR_RELEASE_MINOR_VERSION != POWER_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION) || \
     (POWER_IP_CMU_AR_RELEASE_REVISION_VERSION != POWER_IP_CFG_DEFINES_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Power_Ip_CMU.h and Power_Ip_Cfg_Defines.h are different"
#endif

/* Check if Power_Ip_CMU.h file and Power_Ip_Cfg_Defines.h file are of the same Software version */
#if ((POWER_IP_CMU_SW_MAJOR_VERSION != POWER_IP_CFG_DEFINES_SW_MAJOR_VERSION) || \
     (POWER_IP_CMU_SW_MINOR_VERSION != POWER_IP_CFG_DEFINES_SW_MINOR_VERSION) || \
     (POWER_IP_CMU_SW_PATCH_VERSION != POWER_IP_CFG_DEFINES_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Power_Ip_CMU.h and Power_Ip_Cfg_Defines.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if Power_Ip_CMU.h file and StandardTypes.h file are of the same Autosar version */
#if ((POWER_IP_CMU_AR_RELEASE_MAJOR_VERSION    != STD_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_CMU_AR_RELEASE_MINOR_VERSION    != STD_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Power_Ip_CMU.h and StandardTypes.h are different"
#endif
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if Power_Ip_CMU.h file and Mcal.h file are of the same Autosar version */
#if ((POWER_IP_CMU_AR_RELEASE_MAJOR_VERSION    != MCAL_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_CMU_AR_RELEASE_MINOR_VERSION    != MCAL_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Power_Ip_CMU.h and Mcal.h are different"
#endif
#endif
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/


/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/
#ifdef MCU_ENABLE_CMU_PERIPHERAL
#if(MCU_ENABLE_CMU_PERIPHERAL == STD_ON)

/* define CMU0  */
#define CMU0_CHANNEL                    ((uint8)0U)
/* define CMU1  */
#define CMU1_CHANNEL                    ((uint8)1U)

#endif
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
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#define MCU_START_SEC_CODE
#include "Mcu_MemMap.h"

#ifdef MCU_ENABLE_CMU_PERIPHERAL
#if(MCU_ENABLE_CMU_PERIPHERAL == STD_ON)
void Power_Ip_CMU_Disable_CMU(uint8 u8IndexCmu);
#endif
#endif
#define MCU_STOP_SEC_CODE
#include "Mcu_MemMap.h"


#ifdef __cplusplus
}
#endif

#endif /* POWER_IP_CMU_H */

/** @} */
