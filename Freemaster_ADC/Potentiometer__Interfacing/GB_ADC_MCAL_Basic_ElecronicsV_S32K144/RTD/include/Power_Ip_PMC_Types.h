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
*   @file       Power_Ip_PMC_Types.h
*   @version    1.0.0
*
*   @brief   POWER IP driver header file.
*   @details POWER IP driver header file.
*
*   @addtogroup POWER_DRIVER Power Ip Driver
*   @{
*/



#ifndef POWER_IP_PMC_TYPES_H
#define POWER_IP_PMC_TYPES_H


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
  #include "S32K116_PMC.h"
#elif defined(POWER_IP_S32K118)
  #include "S32K118_PMC.h"
#elif defined(POWER_IP_S32K142)
  #include "S32K142_PMC.h"
#elif defined(POWER_IP_S32K142W)
  #include "S32K142W_PMC.h"
#elif defined(POWER_IP_S32K144)
  #include "S32K144_PMC.h"
#elif defined(POWER_IP_S32K144W)
  #include "S32K144W_PMC.h"
#elif defined(POWER_IP_S32K146)
  #include "S32K146_PMC.h"
#elif defined(POWER_IP_S32K148)
  #include "S32K148_PMC.h"
#else
  #error "Derivative not found"
#endif

#include "Mcal.h"

/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define POWER_IP_PMC_TYPES_VENDOR_ID                       43
#define POWER_IP_PMC_TYPES_AR_RELEASE_MAJOR_VERSION        4
#define POWER_IP_PMC_TYPES_AR_RELEASE_MINOR_VERSION        4
#define POWER_IP_PMC_TYPES_AR_RELEASE_REVISION_VERSION     0
#define POWER_IP_PMC_TYPES_SW_MAJOR_VERSION                1
#define POWER_IP_PMC_TYPES_SW_MINOR_VERSION                0
#define POWER_IP_PMC_TYPES_SW_PATCH_VERSION                0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if Power_Ip_PMC_Types.h file and Mcal.h file are of the same Autosar version */
#if ((POWER_IP_PMC_TYPES_AR_RELEASE_MAJOR_VERSION    != MCAL_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_PMC_TYPES_AR_RELEASE_MINOR_VERSION    != MCAL_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Power_Ip_PMC_Types.h and Mcal.h are different"
#endif
#endif

/* Check if Power_Ip_PMC_Types.h file and Power_Ip_Cfg_Defines.h file have same versions */
#if (POWER_IP_PMC_TYPES_VENDOR_ID  != POWER_IP_CFG_DEFINES_VENDOR_ID)
    #error "Power_Ip_PMC_Types.h and Power_Ip_Cfg_Defines.h have different vendor IDs"
#endif

/* Check if Power_Ip_PMC_Types.h file and Power_Ip_Cfg_Defines.h file are of the same Autosar version */
#if ((POWER_IP_PMC_TYPES_AR_RELEASE_MAJOR_VERSION    != POWER_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_PMC_TYPES_AR_RELEASE_MINOR_VERSION    != POWER_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION) || \
     (POWER_IP_PMC_TYPES_AR_RELEASE_REVISION_VERSION != POWER_IP_CFG_DEFINES_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Power_Ip_PMC_Types.h and Power_Ip_Cfg_Defines.h are different"
#endif

/* Check if Power_Ip_PMC_Types.h file and Power_Ip_Cfg_Defines.h file are of the same Software version */
#if ((POWER_IP_PMC_TYPES_SW_MAJOR_VERSION != POWER_IP_CFG_DEFINES_SW_MAJOR_VERSION) || \
     (POWER_IP_PMC_TYPES_SW_MINOR_VERSION != POWER_IP_CFG_DEFINES_SW_MINOR_VERSION) || \
     (POWER_IP_PMC_TYPES_SW_PATCH_VERSION != POWER_IP_CFG_DEFINES_SW_PATCH_VERSION))
    #error "Software Version Numbers of Power_Ip_PMC_Types.h and Power_Ip_Cfg_Defines.h are different"
#endif

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/
#define PMC_LVDSC1_LVD_ENABLE_U8           ((uint8)(0x20))
#define PMC_LVDSC1_LVD_DISABLE_U8          ((uint8)(0x00))
#define PMC_LVDSC1_LVDRE_ENABLE_U8         ((uint8)(0x10))
#define PMC_LVDSC1_LVDRE_DISABLE_U8        ((uint8)(0x00))
#define PMC_LVDSC2_LVW_ENABLE_U8           ((uint8)(0x20))
#define PMC_LVDSC2_LVW_DISABLE_U8          ((uint8)(0x00))

#define PMC_REGSC_LPO_ENABLE_U8            ((uint8)(0x00))
#define PMC_REGSC_LPO_DISABLE_U8           ((uint8)(0x80))
#define PMC_REGSC_BIAS_ENABLE_U8           ((uint8)(0x01))
#define PMC_REGSC_BIAS_DISABLE_U8          ((uint8)(0x00))
#define PMC_REGSC_CLKBIAS_DISABLE_U8       ((uint8)(0x02))
#define PMC_REGSC_CLKBIAS_ENABLE_U8        ((uint8)(0x00))

#define PMC_LVDSC1_RWBITS_MASK8     ((uint8)PMC_LVDSC1_LVDRE_MASK  | \
                                            PMC_LVDSC1_LVDIE_MASK  | \
                                            PMC_LVDSC1_LVDACK_MASK | \
                                            PMC_LVDSC1_LVDF_MASK)

#define PMC_LVDSC2_RWBITS_MASK8     ((uint8)PMC_LVDSC2_LVWIE_MASK  | \
                                            PMC_LVDSC2_LVWACK_MASK | \
                                            PMC_LVDSC2_LVWF_MASK)

#define PMC_REGSC_RWBITS_MASK8      ((uint8)PMC_REGSC_BIASEN_MASK     | \
                                            PMC_REGSC_CLKBIASDIS_MASK | \
                                            PMC_REGSC_REGFPM_MASK     | \
                                            PMC_REGSC_LPOSTAT_MASK    | \
                                            PMC_REGSC_LPODIS_MASK)
/*==================================================================================================
*                                             ENUMS
==================================================================================================*/


/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
* @brief            Configuration for PMC.
* @details          The power control unit (PMC) acts as a bridge for mapping the PMC peripheral
 *                  to the PMC address space.
*/
typedef struct
{
#if(STD_ON == POWER_IP_PMC_LVDSC1_SUPPORT)
    uint8 u8Lvdsc1;                   /**< @brief Trimming Register (PMC_LVDSC1). */
#endif
    uint8 u8Lvdsc2;                   /**< @brief Trimming Register (PMC_LVDSC2). */
    uint8 u8Regsc;                    /**< @brief Trimming Register (PMC_REGSC). */
} Power_Ip_PMC_ConfigType;

#if (defined(POWER_IP_VOLTAGE_ERROR_ISR_USED))
  #if(POWER_IP_VOLTAGE_ERROR_ISR_USED == STD_ON)
typedef enum
{
    PMC_UNINIT = 0,  /**< @brief The PMC driver is uninitialized. */
    PMC_INIT = 1     /**< @brief The PMC driver is initialized. */
} PMC_StatusType;
  #endif
#endif
/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/


/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif

#endif /* POWER_IP_PMC_TYPES_H */

/** @} */
