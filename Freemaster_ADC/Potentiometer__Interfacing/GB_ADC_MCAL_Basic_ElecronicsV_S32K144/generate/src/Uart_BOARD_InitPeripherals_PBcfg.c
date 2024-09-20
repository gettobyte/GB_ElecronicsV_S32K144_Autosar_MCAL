/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : FLEXIO
*   Dependencies         : 
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
*   @defgroup uart_driver UART Driver
*   @addtogroup  uart_driver UART Driver
*   @{
*/


#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

#include "StandardTypes.h"
#include "Uart_Cfg.h"
#include "Uart_Ipw_Cfg.h"
#include "Uart_Defines.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define UART_PBCFG_BOARD_INITPERIPHERALS_VENDOR_ID_C                     43
#define UART_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_MAJOR_VERSION_C      4
#define UART_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_MINOR_VERSION_C      4
#define UART_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_REVISION_VERSION_C   0
#define UART_PBCFG_BOARD_INITPERIPHERALS_SW_MAJOR_VERSION_C              1
#define UART_PBCFG_BOARD_INITPERIPHERALS_SW_MINOR_VERSION_C              0
#define UART_PBCFG_BOARD_INITPERIPHERALS_SW_PATCH_VERSION_C              0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Checks against Uart_Cfg.h */
#if (UART_PBCFG_BOARD_INITPERIPHERALS_VENDOR_ID_C != UART_CFG_VENDOR_ID)
    #error "Uart_BOARD_InitPeripherals_PBcfg.c and Uart_Cfg.h have different vendor ids"
#endif
#if ((UART_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_MAJOR_VERSION_C    != UART_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (UART_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_MINOR_VERSION_C    != UART_CFG_AR_RELEASE_MINOR_VERSION) || \
     (UART_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_REVISION_VERSION_C != UART_CFG_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR Version Numbers of Uart_BOARD_InitPeripherals_PBcfg.c and Uart_Cfg.h are different"
#endif
#if ((UART_PBCFG_BOARD_INITPERIPHERALS_SW_MAJOR_VERSION_C != UART_CFG_SW_MAJOR_VERSION) || \
     (UART_PBCFG_BOARD_INITPERIPHERALS_SW_MINOR_VERSION_C != UART_CFG_SW_MINOR_VERSION) || \
     (UART_PBCFG_BOARD_INITPERIPHERALS_SW_PATCH_VERSION_C != UART_CFG_SW_PATCH_VERSION))
    #error "Software Version Numbers of Uart_BOARD_InitPeripherals_PBcfg.c and Uart_Cfg.h are different"
#endif
/* Checks against Uart_Ipw_Cfg.h */
#if (UART_PBCFG_BOARD_INITPERIPHERALS_VENDOR_ID_C != UART_IPW_CFG_VENDOR_ID)
    #error "Uart_BOARD_InitPeripherals_PBcfg.c and Uart_Ipw_Cfg.h have different vendor ids"
#endif
#if ((UART_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_MAJOR_VERSION_C    != UART_IPW_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (UART_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_MINOR_VERSION_C    != UART_IPW_CFG_AR_RELEASE_MINOR_VERSION) || \
     (UART_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_REVISION_VERSION_C != UART_IPW_CFG_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR Version Numbers of Uart_BOARD_InitPeripherals_PBcfg.c and Uart_Ipw_Cfg.h are different"
#endif
#if ((UART_PBCFG_BOARD_INITPERIPHERALS_SW_MAJOR_VERSION_C != UART_IPW_CFG_SW_MAJOR_VERSION) || \
     (UART_PBCFG_BOARD_INITPERIPHERALS_SW_MINOR_VERSION_C != UART_IPW_CFG_SW_MINOR_VERSION) || \
     (UART_PBCFG_BOARD_INITPERIPHERALS_SW_PATCH_VERSION_C != UART_IPW_CFG_SW_PATCH_VERSION))
    #error "Software Version Numbers of Uart_BOARD_InitPeripherals_PBcfg.c and Uart_Ipw_Cfg.h are different"
#endif
/* Checks against Uart_Defines.h */
#if (UART_PBCFG_BOARD_INITPERIPHERALS_VENDOR_ID_C != UART_DEFINES_VENDOR_ID_CFG)
    #error "Uart_BOARD_INITPERIPHERALS_PBcfg.c and Uart_Defines.h have different vendor ids"
#endif
#if ((UART_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_MAJOR_VERSION_C    != UART_DEFINES_AR_RELEASE_MAJOR_VERSION_CFG) || \
     (UART_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_MINOR_VERSION_C    != UART_DEFINES_AR_RELEASE_MINOR_VERSION_CFG) || \
     (UART_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_REVISION_VERSION_C != UART_DEFINES_AR_RELEASE_REVISION_VERSION_CFG))
    #error "AUTOSAR Version Numbers of Uart_BOARD_InitPeripherals_PBcfg.c and Uart_Defines.h are different"
#endif
#if ((UART_PBCFG_BOARD_INITPERIPHERALS_SW_MAJOR_VERSION_C != UART_DEFINES_SW_MAJOR_VERSION_CFG) || \
     (UART_PBCFG_BOARD_INITPERIPHERALS_SW_MINOR_VERSION_C != UART_DEFINES_SW_MINOR_VERSION_CFG) || \
     (UART_PBCFG_BOARD_INITPERIPHERALS_SW_PATCH_VERSION_C != UART_DEFINES_SW_PATCH_VERSION_CFG))
    #error "Software Version Numbers of Uart_BOARD_InitPeripherals_PBcfg.c and Uart_Defines.h are different"
#endif
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if current file and StandardTypes.h header file are of the same Autosar version */
    #if ((UART_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_MAJOR_VERSION_C != STD_AR_RELEASE_MAJOR_VERSION) || \
            (UART_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_MINOR_VERSION_C != STD_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of Uart_BOARD_InitPeripherals_PBcfg.c and StandardTypes.h are different"
    #endif
#endif

/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
#define UART_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Uart_MemMap.h"

/**
* @brief   Export IPW configurations.
*/
UART_IPW_CONFIG_EXT

#define UART_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Uart_MemMap.h"
/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/
/**
* @brief        All CoreIDs are supported by Uart driver.
*/
#define UART_CORE_ID       ((uint32)0U)
/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/
#define UART_START_SEC_CONFIG_DATA_UNSPECIFIED
/**
* @violates @ref Uart_BOARD_INITPERIPHERALS_PBcfg_c_REF_1 <MA>_MemMap.h is included
                 after each section define in order to set the current memory section as defined by AUTOSAR.
* @violates @ref Uart_BOARD_INITPERIPHERALS_PBcfg_c_REF_2 This violation is not fixed
                  since the inclusion of <MA>_MemMap.h is as per AUTOSAR requirement [SWS_MemMap_00003].
*/
#include "Uart_MemMap.h"


/**
* @brief          Configuration for Uart Channel 0
*
*
*/
const Uart_ChannelConfigType Uart_ChannelConfig_0 =
{
    (uint8)0U, /* Uart Channel ID */
#if (UART_MULTICORE_SUPPORT == STD_ON)
    (uint32)UART_CORE_ID,   /* Core id on which the Uart channel has been assigned  */
#endif
    (uint32)8000000U, /*ChannelClockFrequency*/
    &Uart_Ipw_xHwConfigPB_0_BOARD_InitPeripherals    /* Pointer to the hardware configuration*/
};

/**
* @brief          Uart Configuration data for UartConfig_0.
*
*/
static const Uart_ConfigType Uart_xConfig=
{
#if (UART_MULTICORE_SUPPORT == STD_ON)
    UART_CORE_ID,
#endif
    {
        &Uart_ChannelConfig_0
    }
};
/**
* @brief          Uart Configuration data for Uart_pxPBcfgVariantPredefined.
*
*/

const Uart_ConfigType* const Uart_pxPBcfgVariantPredefined[UART_MAX_PARTITIONS] =
{
    &Uart_xConfig
};

#define UART_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/**
* @violates @ref Uart_<code>$variantNameLowerCase$</code>_PBcfg_c_REF_1 <MA>_MemMap.h is included
                 after each section define in order to set the current memory section as defined by AUTOSAR.
* @violates @ref Uart_<code>$variantNameLowerCase$</code>_PBcfg_c_REF_2 This violation is not fixed
                  since the inclusion of <MA>_MemMap.h is as per AUTOSAR requirement [SWS_MemMap_00003].
*/
#include "Uart_MemMap.h"

/*==================================================================================================
*                                      GLOBAL VARIABLES
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

/** @} */

#endif

