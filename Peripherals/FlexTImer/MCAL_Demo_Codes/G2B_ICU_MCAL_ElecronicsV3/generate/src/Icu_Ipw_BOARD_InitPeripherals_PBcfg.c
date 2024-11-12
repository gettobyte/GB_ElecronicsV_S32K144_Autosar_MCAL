/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : Ftm Lpit Lptmr Port_Ci LpCmp
*   Dependencies         : none
*
*   Autosar Version      : 4.4.0
*   Autosar Revision     : ASR_REL_4_4_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 1.0.1
*   Build Version        : S32K1_RTD_1_0_1_D2202_ASR_REL_4_4_REV_0000_20220224
*
*   (c) Copyright 2020-2022 NXP Semiconductors
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
 *   @file          Icu_Ipw_PBCfg.c
 *   @implements    Icu_Ipw_PBCfg.c_Artifact
 *   @version   1.0.0
 *
 *   @brief   AUTOSAR Icu - contains the data exported by the Icu module
 *   @details Contains the information that will be exported by the module, as requested by Autosar.
 *
 *   @addtogroup ICU_MODULE
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
*================================================================================================*/
#include "StandardTypes.h"
#include "Icu_Ipw_Types.h"
#include "Ftm_Icu_Ip.h"
#include "Lpit_Icu_Ip.h"
#include "Lptmr_Icu_Ip.h"
#include "Port_Ci_Icu_Ip.h"
#include "Cmp_Ip.h"

/*==================================================================================================
 *                              SOURCE FILE VERSION INFORMATION
 *================================================================================================*/
#define ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_VENDOR_ID_C    43

#define ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MAJOR_VERSION_C    4
#define ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MINOR_VERSION_C    4
#define ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_REVISION_VERSION_C 0

#define ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_MAJOR_VERSION_C            1
#define ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_MINOR_VERSION_C            0
#define ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_PATCH_VERSION_C            1

/*==================================================================================================
 *                                      FILE VERSION CHECKS
 *================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* TO DO Check if header file and Devassert.h file are of the same Autosar version */
    /* Check if header file and StandardTypes.h file are of the same Autosar version */
    #if ((ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MAJOR_VERSION_C != STD_AR_RELEASE_MAJOR_VERSION) || \
         (ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MINOR_VERSION_C != STD_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of Icu_Ipw_BOARD_INITPERIPHERALS_PBCfg.c and StandardTypes.h are different"
    #endif
#endif

/* Check if source file and ICU header file are of the same vendor */
#if (ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_VENDOR_ID_C != ICU_IPW_TYPES_VENDOR_ID)
    #error "Icu_Ipw_BOARD_INITPERIPHERALS_PBCfg.c and Icu_Ipw_Types.h have different vendor IDs"
#endif
/* Check if source file and ICU header file are of the same AutoSar version */
#if ((ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MAJOR_VERSION_C    != ICU_IPW_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MINOR_VERSION_C    != ICU_IPW_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_REVISION_VERSION_C != ICU_IPW_TYPES_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Icu_Ipw_BOARD_INITPERIPHERALS_PBCfg.c and Icu_Ipw_Types.h are different"
#endif
/* Check if source file and ICU header file are of the same Software version */
#if ((ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_MAJOR_VERSION_C != ICU_IPW_TYPES_SW_MAJOR_VERSION) || \
     (ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_MINOR_VERSION_C != ICU_IPW_TYPES_SW_MINOR_VERSION) || \
     (ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_PATCH_VERSION_C != ICU_IPW_TYPES_SW_PATCH_VERSION))
    #error "Software Version Numbers of Icu_Ipw_BOARD_INITPERIPHERALS_PBCfg.c and Icu_Ipw_Types.h are different"
#endif

/* Check if source file and ICU header file are of the same vendor */
#if (ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_VENDOR_ID_C != LPTMR_ICU_IP_VENDOR_ID)
    #error "Icu_Ipw_BOARD_INITPERIPHERALS_PBCfg.c and Lptmr_Icu_Ip.h have different vendor IDs"
#endif
/* Check if source file and ICU header file are of the same AutoSar version */
#if ((ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MAJOR_VERSION_C  != LPTMR_ICU_IP_AR_RELEASE_MAJOR_VERSION) || \
     (ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MINOR_VERSION_C  != LPTMR_ICU_IP_AR_RELEASE_MINOR_VERSION) || \
     (ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_REVISION_VERSION_C   != LPTMR_ICU_IP_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Icu_Ipw_BOARD_INITPERIPHERALS_PBCfg.c and Lptmr_Icu_Ip.h are different"
#endif
/* Check if source file and ICU header file are of the same Software version */
#if ((ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_MAJOR_VERSION_C  != LPTMR_ICU_IP_SW_MAJOR_VERSION) || \
     (ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_MINOR_VERSION_C  != LPTMR_ICU_IP_SW_MINOR_VERSION) || \
     (ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_PATCH_VERSION_C  != LPTMR_ICU_IP_SW_PATCH_VERSION))
#error "Software Version Numbers of Icu_Ipw_BOARD_INITPERIPHERALS_PBCfg.c and Lptmr_Icu_Ip.h are different"
#endif

/* Check if source file and Lpit_Icu_Ip.h header file are of the same vendor */
#if (ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_VENDOR_ID_C != LPIT_ICU_IP_VENDOR_ID)
    #error "Icu_Ipw_BOARD_INITPERIPHERALS_PBCfg.c and Lpit_Icu_Ip.h have different vendor ids"
#endif
/* Check if  source file and Lpit_Icu_Ip.h file are of the same Autosar version */
#if ((ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MAJOR_VERSION_C    != LPIT_ICU_IP_AR_RELEASE_MAJOR_VERSION) || \
     (ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MINOR_VERSION_C    != LPIT_ICU_IP_AR_RELEASE_MINOR_VERSION) || \
     (ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_REVISION_VERSION_C != LPIT_ICU_IP_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Icu_Ipw_BOARD_INITPERIPHERALS_PBCfg.c and Lpit_Icu_Ip.h are different"
#endif
/* Check if source file and Lpit_Icu_Ip.h file are of the same Software version */
#if ((ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_MAJOR_VERSION_C != LPIT_ICU_IP_SW_MAJOR_VERSION) || \
     (ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_MINOR_VERSION_C != LPIT_ICU_IP_SW_MINOR_VERSION) || \
     (ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_PATCH_VERSION_C != LPIT_ICU_IP_SW_PATCH_VERSION))
    #error "Software Version Numbers of Icu_Ipw_BOARD_INITPERIPHERALS_PBCfg.c and Lpit_Icu_Ip.h are different"
#endif

#if (ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_VENDOR_ID_C != FTM_ICU_IP_VENDOR_ID)
    #error "Icu_Ipw_BOARD_INITPERIPHERALS_PBCfg.c and Ftm_Icu_Ip.h have different vendor ids"
#endif

/* Check if  source file and Ftm_Icu_Ip.h file are of the same Autosar version */
#if ((ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MAJOR_VERSION_C != FTM_ICU_IP_AR_RELEASE_MAJOR_VERSION) || \
     (ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MINOR_VERSION_C != FTM_ICU_IP_AR_RELEASE_MINOR_VERSION) || \
     (ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_REVISION_VERSION_C != FTM_ICU_IP_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Icu_Ipw_BOARD_INITPERIPHERALS_PBCfg.c and Ftm_Icu_Ip.h are different"
#endif

/* Check if source file and Ftm_Icu_Ip.h file are of the same Software version */
#if ((ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_MAJOR_VERSION_C != FTM_ICU_IP_SW_MAJOR_VERSION) || \
     (ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_MINOR_VERSION_C != FTM_ICU_IP_SW_MINOR_VERSION) || \
     (ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_PATCH_VERSION_C != FTM_ICU_IP_SW_PATCH_VERSION))
    #error "Software Version Numbers of Icu_Ipw_BOARD_INITPERIPHERALS_PBCfg.c and Ftm_Icu_Ip.h are different"
#endif

/* Check if source file and Port_Ci_Icu_Ip.h header file are of the same vendor */
#if (ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_VENDOR_ID_C != PORT_CI_ICU_IP_VENDOR_ID)
    #error "Icu_Ipw_BOARD_INITPERIPHERALS_PBCfg.c and Port_Ci_Icu_Ip.h have different vendor ids"
#endif
/* Check if  source file and Port_Ci_Icu_Ip.h file are of the same Autosar version */
#if ((ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MAJOR_VERSION_C != PORT_CI_ICU_IP_AR_RELEASE_MAJOR_VERSION) || \
     (ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MINOR_VERSION_C != PORT_CI_ICU_IP_AR_RELEASE_MINOR_VERSION) || \
     (ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_REVISION_VERSION_C != PORT_CI_ICU_IP_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Icu_Ipw_BOARD_INITPERIPHERALS_PBCfg.c and Port_Ci_Icu_Ip.h are different"
#endif
/* Check if source file and Port_Ci_Icu_Ip.h file are of the same Software version */
#if ((ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_MAJOR_VERSION_C != PORT_CI_ICU_IP_SW_MAJOR_VERSION) || \
     (ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_MINOR_VERSION_C != PORT_CI_ICU_IP_SW_MINOR_VERSION) || \
     (ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_PATCH_VERSION_C != PORT_CI_ICU_IP_SW_PATCH_VERSION))
    #error "Software Version Numbers of Icu_Ipw_BOARD_INITPERIPHERALS_PBCfg.c and Port_Ci_Icu_Ip.h are different"
#endif

/* Check if source file and Cmp_Ip.h header file are of the same vendor */
#if (ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_VENDOR_ID_C != CMP_IP_VENDOR_ID)
    #error "Icu_Ipw_BOARD_INITPERIPHERALS_PBCfg.c and Cmp_Ip.h have different vendor ids"
#endif
/* Check if  source file and Cmp_Ip.h file are of the same Autosar version */
#if ((ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MAJOR_VERSION_C != CMP_IP_AR_RELEASE_MAJOR_VERSION) || \
     (ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MINOR_VERSION_C != CMP_IP_AR_RELEASE_MINOR_VERSION) || \
     (ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_REVISION_VERSION_C != CMP_IP_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Icu_Ipw_BOARD_INITPERIPHERALS_PBCfg.c and Cmp_Ip.h are different"
#endif
/* Check if source file and Cmp_Ip.h file are of the same Software version */
#if ((ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_MAJOR_VERSION_C != CMP_IP_SW_MAJOR_VERSION) || \
     (ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_MINOR_VERSION_C != CMP_IP_SW_MINOR_VERSION) || \
     (ICU_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_PATCH_VERSION_C != CMP_IP_SW_PATCH_VERSION))
    #error "Software Version Numbers of Icu_Ipw_BOARD_INITPERIPHERALS_PBCfg.c and Cmp_Ip.h are different"
#endif

/*==================================================================================================
 *                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
 *================================================================================================*/

/*==================================================================================================
 *                                       LOCAL MACROS
 *================================================================================================*/

/*==================================================================================================
 *                                      LOCAL CONSTANTS
 *================================================================================================*/

/*==================================================================================================
 *                                       LOCAL VARIABLES
 *================================================================================================*/

/*==================================================================================================
 *                                       GLOBAL CONSTANTS
 *================================================================================================*/

/*==================================================================================================
 *                                       GLOBAL VARIABLES
 *================================================================================================*/

#define ICU_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Icu_MemMap.h"

/*
*   @brief This index relates the Hardware channels with the respective ICU channel. *
*   When an normal interrupt is asserted this index is used to locate the corresponding ICU channel
*/

/** 
 * @brief   Icu channels IP related configuration array
 */
const Icu_Ipw_ChannelConfigType Icu_Ipw_IpChannelConfig_BOARD_InitPeripherals[2U] =
{

    {
        /** @brief IP type of this channel */
        ICU_FTM_MODULE,
        /** @brief Instance number */
        (uint8)1,
        /** @brief Ftm IP channel pointer */
        &Ftm_Icu_Ip_1_ChannelConfig_PB_BOARD_InitPeripherals[0U],
        /** @brief Lpit IP channel pointer */
        NULL_PTR,
        /** @brief Lptmr IP channel pointer */
        NULL_PTR,
        /** @brief Port Ci IP channel pointer */
        NULL_PTR,
        /** @brief Cmp IP channel pointer */
        NULL_PTR,
        /** @brief Index in the configuration table of the FTM channels */
        (uint8)0
    },
    {
        /** @brief IP type of this channel */
        ICU_PORT_CI_MODULE,
        /** @brief Instance number */
        (uint8)2,
        /** @brief Ftm IP channel pointer */
        NULL_PTR,
        /** @brief Lpit IP channel pointer */
        NULL_PTR,
        /** @brief Lptmr IP channel pointer */
        NULL_PTR,
        /** @brief Port Ci IP channel pointer */
        &Port_Ci_Icu_Ip_2_ChannelConfig_PB_BOARD_InitPeripherals[0U],
        /** @brief Cmp IP channel pointer */
        NULL_PTR,
        /** @brief Index in the configuration table of the PORT CI channels */
        (uint8)0
    }
};

/** 
 * @brief   Icu instances related configuration array
 */

const Icu_Ipw_IpConfigType Icu_Ipw_IpConfig_BOARD_InitPeripherals[2U] =
{
    {
        /** @brief IP type */
        ICU_FTM_MODULE,
        /** @brief IP instance number */
        1U,
        /** @brief pointer to Ftm HW configuration of instance */
        &Ftm_Icu_Ip_1_Config_PB_BOARD_InitPeripherals,
        /** @brief pointer to Lpit HW configuration of instance */
        NULL_PTR,
        /** @brief pointer to Lptmr HW configuration of instance */
        NULL_PTR,
        /** @brief pointer to Port Ci HW configuration of instance */
        NULL_PTR,
        /** @brief pointer to Cmp HW configuration of instance */
        NULL_PTR
    },
    {
        /** @brief IP type */
        ICU_PORT_CI_MODULE,
        /** @brief IP instance number */
        2U,
        /** @brief pointer to Ftm HW configuration of instance */
        NULL_PTR,
        /** @brief pointer to Lpit HW configuration of instance */
        NULL_PTR,
        /** @brief pointer to Lptmr HW configuration of instance */
        NULL_PTR,
        /** @brief pointer to Port Ci HW configuration of instance */
        &Port_Ci_Icu_Ip_2_Config_PB_BOARD_InitPeripherals,
        /** @brief pointer to Cmp HW configuration of instance */
        NULL_PTR
    }

};

#define ICU_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Icu_MemMap.h"
/*==================================================================================================
 *                                   LOCAL FUNCTION PROTOTYPES
 *================================================================================================*/


/*==================================================================================================
 *                                       LOCAL FUNCTIONS
 *================================================================================================*/


#ifdef __cplusplus
}
#endif
/** @} */

