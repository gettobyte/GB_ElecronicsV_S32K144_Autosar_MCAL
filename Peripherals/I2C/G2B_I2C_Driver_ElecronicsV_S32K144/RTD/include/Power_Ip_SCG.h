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
*   @file       Power_Ip_SCG.h
*   @version    1.0.0
*
*   @brief   POWER IP driver header file.
*   @details POWER IP driver header file.
*
*   @addtogroup POWER_DRIVER Power Ip Driver
*   @{
*/

#ifndef POWER_IP_SCG_H
#define POWER_IP_SCG_H


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

#if defined(POWER_IP_S32K116)
  #include "S32K116_SCG.h"
#elif defined(POWER_IP_S32K118)
  #include "S32K118_SCG.h"
#elif defined(POWER_IP_S32K142)
  #include "S32K142_SCG.h"
#elif defined(POWER_IP_S32K142W)
  #include "S32K142W_SCG.h"
#elif defined(POWER_IP_S32K144)
  #include "S32K144_SCG.h"
#elif defined(POWER_IP_S32K144W)
  #include "S32K144W_SCG.h"
#elif defined(POWER_IP_S32K146)
  #include "S32K146_SCG.h"
#elif defined(POWER_IP_S32K148)
  #include "S32K148_SCG.h"
#else
  #error "Derivative not found"
#endif

#include "StandardTypes.h"
#include "OsIf.h"
#include "Mcal.h"


/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define POWER_IP_SCG_VENDOR_ID                       43
#define POWER_IP_SCG_AR_RELEASE_MAJOR_VERSION        4
#define POWER_IP_SCG_AR_RELEASE_MINOR_VERSION        4
#define POWER_IP_SCG_AR_RELEASE_REVISION_VERSION     0
#define POWER_IP_SCG_SW_MAJOR_VERSION                1
#define POWER_IP_SCG_SW_MINOR_VERSION                0
#define POWER_IP_SCG_SW_PATCH_VERSION                0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if Power_Ip_SCG.h file and StandardTypes.h file are of the same Autosar version */
#if ((POWER_IP_SCG_AR_RELEASE_MAJOR_VERSION    != STD_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_SCG_AR_RELEASE_MINOR_VERSION    != STD_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Power_Ip_SCG.h and StandardTypes.h are different"
#endif

/* Check if Power_Ip_SCG.h file and Mcal.h file are of the same Autosar version */
#if ((POWER_IP_SCG_AR_RELEASE_MAJOR_VERSION    != MCAL_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_SCG_AR_RELEASE_MINOR_VERSION    != MCAL_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Power_Ip_SCG.h and Mcal.h are different"
#endif

/* Check if Power_Ip_SCG.h file and OsIf.h file are of the same Autosar version */
#if ((POWER_IP_SCG_AR_RELEASE_MAJOR_VERSION    != OSIF_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_SCG_AR_RELEASE_MINOR_VERSION    != OSIF_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Power_Ip_SCG.h and OsIf.h are different"
#endif
#endif

/* Check if Power_Ip_SCG.h file and Power_Ip_Cfg_Defines.h file have same versions */
#if (POWER_IP_SCG_VENDOR_ID  != POWER_IP_CFG_DEFINES_VENDOR_ID)
    #error "Power_Ip_SCG.h and Power_Ip_Cfg_Defines.h have different vendor IDs"
#endif

/* Check if Power_Ip_SCG.h file and Power_Ip_Cfg_Defines.h file are of the same Autosar version */
#if ((POWER_IP_SCG_AR_RELEASE_MAJOR_VERSION    != POWER_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_SCG_AR_RELEASE_MINOR_VERSION    != POWER_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION) || \
     (POWER_IP_SCG_AR_RELEASE_REVISION_VERSION != POWER_IP_CFG_DEFINES_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Power_Ip_SCG.h and Power_Ip_Cfg_Defines.h are different"
#endif

/* Check if Power_Ip_SCG.h file and Power_Ip_Cfg_Defines.h file are of the same Software version */
#if ((POWER_IP_SCG_SW_MAJOR_VERSION != POWER_IP_CFG_DEFINES_SW_MAJOR_VERSION) || \
     (POWER_IP_SCG_SW_MINOR_VERSION != POWER_IP_CFG_DEFINES_SW_MINOR_VERSION) || \
     (POWER_IP_SCG_SW_PATCH_VERSION != POWER_IP_CFG_DEFINES_SW_PATCH_VERSION))
    #error "Software Version Numbers of Power_Ip_SCG.h and Power_Ip_Cfg_Defines.h are different"
#endif
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/


/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/
#define SCG_SCS_SIRC_U32                (2U)

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

#ifdef POWER_IP_ENABLE_USER_MODE_SUPPORT
#if (STD_ON == POWER_IP_ENABLE_USER_MODE_SUPPORT)
#define  Call_Power_Ip_SCG_DisableClockMonitors() \
do\
{ \
        OsIf_Trusted_Call(Power_Ip_SCG_DisableClockMonitors); \
}\
while(0)
#else
#define  Call_Power_Ip_SCG_DisableClockMonitors() \
do\
{ \
        Power_Ip_SCG_DisableClockMonitors(); \
}\
while(0)
#endif
#endif

#if (POWER_IP_NO_PLL == STD_OFF)
#ifdef POWER_IP_ENABLE_USER_MODE_SUPPORT
#if (STD_ON == POWER_IP_ENABLE_USER_MODE_SUPPORT)
#define  Call_Power_Ip_SCG_DisableSpllClock() \
do\
{ \
        OsIf_Trusted_Call(Power_Ip_SCG_DisableSpllClock); \
}\
while(0)
#else
#define  Call_Power_Ip_SCG_DisableSpllClock() \
do\
{ \
        Power_Ip_SCG_DisableSpllClock(); \
}\
while(0)
#endif  /* POWER_IP_NO_PLL */
#endif
#endif

#if (MCU_ENTER_LOW_POWER_MODE == STD_ON)

#ifdef POWER_IP_ENABLE_USER_MODE_SUPPORT
#if (STD_ON == POWER_IP_ENABLE_USER_MODE_SUPPORT)
#define  Call_Power_Ip_SCG_DropSysClkToSircInRunMode() \
do\
{ \
        OsIf_Trusted_Call(Power_Ip_SCG_DropSysClkToSircInRunMode); \
}\
while(0)
#else
#define  Call_Power_Ip_SCG_DropSysClkToSircInRunMode() \
do\
{ \
        Power_Ip_SCG_DropSysClkToSircInRunMode(); \
}\
while(0)
#endif
#endif

#ifdef POWER_IP_ENABLE_USER_MODE_SUPPORT
#if (STD_ON == POWER_IP_ENABLE_USER_MODE_SUPPORT)
#define  Call_Power_Ip_SCG_DisableFircClock() \
do\
{ \
        OsIf_Trusted_Call(Power_Ip_SCG_DisableFircClock); \
}\
while(0)
#else
#define  Call_Power_Ip_SCG_DisableFircClock() \
do\
{ \
        Power_Ip_SCG_DisableFircClock(); \
}\
while(0)
#endif
#endif

#ifdef POWER_IP_ENABLE_USER_MODE_SUPPORT
#if (STD_ON == POWER_IP_ENABLE_USER_MODE_SUPPORT)
#define  Call_Power_Ip_SCG_DisableSoscClock() \
do\
{ \
        OsIf_Trusted_Call(Power_Ip_SCG_DisableSoscClock); \
}\
while(0)
#else
#define  Call_Power_Ip_SCG_DisableSoscClock() \
do\
{ \
        Power_Ip_SCG_DisableSoscClock(); \
}\
while(0)
#endif
#endif

#endif /* (MCU_ENTER_LOW_POWER_MODE == STD_ON) */

void Power_Ip_SCG_DisableClockMonitors(void);
#if (POWER_IP_NO_PLL == STD_OFF)
void Power_Ip_SCG_DisableSpllClock(void);
#endif  /* POWER_IP_NO_PLL */
#if (MCU_ENTER_LOW_POWER_MODE == STD_ON)
void Power_Ip_SCG_DropSysClkToSircInRunMode(void);
void Power_Ip_SCG_DisableFircClock(void);
void Power_Ip_SCG_DisableSoscClock(void);
#endif

#define MCU_STOP_SEC_CODE

#include "Mcu_MemMap.h"


#ifdef __cplusplus
}
#endif

#endif /* POWER_IP_SCG_H */

/** @} */
