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

#ifndef FLEXIO_MCL_IP_CFG_H_
#define FLEXIO_MCL_IP_CFG_H_

#ifdef __cplusplus
extern "C"
{
#endif

/**
* @page misra_violations MISRA-C:2012 violations
**/

/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Flexio_Mcl_Ip_BOARD_InitPeripherals_PBcfg.h"
#include "Flexio_Mcl_Ip_Cfg_Defines.h" 
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define FLEXIO_MCL_IP_CFG_VENDOR_ID_H                    43
#define FLEXIO_MCL_IP_CFG_MODULE_ID_H                    255
#define FLEXIO_MCL_IP_CFG_AR_RELEASE_MAJOR_VERSION_H     4
#define FLEXIO_MCL_IP_CFG_AR_RELEASE_MINOR_VERSION_H     4
#define FLEXIO_MCL_IP_CFG_AR_RELEASE_REVISION_VERSION_H  0
#define FLEXIO_MCL_IP_CFG_SW_MAJOR_VERSION_H             1
#define FLEXIO_MCL_IP_CFG_SW_MINOR_VERSION_H             0
#define FLEXIO_MCL_IP_CFG_SW_PATCH_VERSION_H             0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if header file and Flexio_Mcl_Ip_Cfg_Defines.h file are of the same vendor */
#if (FLEXIO_MCL_IP_CFG_VENDOR_ID_H != FLEXIO_MCL_IP_CFG_DEFINES_VENDOR_ID_H)
    #error "Flexio_Mcl_Ip_Cfg.h and Flexio_Mcl_Ip_Cfg_Defines.h have different vendor ids"
#endif

/* Check if header file and Flexio_Mcl_Ip_Cfg_Defines.h file are of the same Autosar version */
#if ((FLEXIO_MCL_IP_CFG_AR_RELEASE_MAJOR_VERSION_H != FLEXIO_MCL_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION_H) || \
     (FLEXIO_MCL_IP_CFG_AR_RELEASE_MINOR_VERSION_H != FLEXIO_MCL_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION_H) || \
     (FLEXIO_MCL_IP_CFG_AR_RELEASE_REVISION_VERSION_H != FLEXIO_MCL_IP_CFG_DEFINES_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Flexio_Mcl_Ip_Cfg.h and Flexio_Mcl_Ip_Cfg_Defines.h are different"
#endif

/* Check if header file and Flexio_Mcl_Ip_Cfg_Defines.h file are of the same Software version */
#if ((FLEXIO_MCL_IP_CFG_SW_MAJOR_VERSION_H != FLEXIO_MCL_IP_CFG_DEFINES_SW_MAJOR_VERSION_H) || \
     (FLEXIO_MCL_IP_CFG_SW_MINOR_VERSION_H != FLEXIO_MCL_IP_CFG_DEFINES_SW_MINOR_VERSION_H) || \
     (FLEXIO_MCL_IP_CFG_SW_PATCH_VERSION_H != FLEXIO_MCL_IP_CFG_DEFINES_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Flexio_Mcl_Ip_Cfg.h and Flexio_Mcl_Ip_Cfg_Defines.h are different"
#endif
/* Check if header file and Flexio_Mcl_Ip_BOARD_InitPeripherals_PBcfg.h file are of the same vendor */
#if (FLEXIO_MCL_IP_CFG_VENDOR_ID_H != FLEXIO_MCL_IP_BOARD_InitPeripherals_PBCFG_VENDOR_ID_H)
    #error "Flexio_Mcl_Ip_Cfg.h and Flexio_Mcl_Ip_BOARD_InitPeripherals_PBcfg.h have different vendor ids"
#endif

/* Check if header file and Flexio_Mcl_Ip_BOARD_InitPeripherals_PBcfg.h file are of the same Autosar version */
#if ((FLEXIO_MCL_IP_CFG_AR_RELEASE_MAJOR_VERSION_H != FLEXIO_MCL_IP_BOARD_InitPeripherals_PBCFG_AR_RELEASE_MAJOR_VERSION_H) || \
     (FLEXIO_MCL_IP_CFG_AR_RELEASE_MINOR_VERSION_H != FLEXIO_MCL_IP_BOARD_InitPeripherals_PBCFG_AR_RELEASE_MINOR_VERSION_H) || \
     (FLEXIO_MCL_IP_CFG_AR_RELEASE_REVISION_VERSION_H != FLEXIO_MCL_IP_BOARD_InitPeripherals_PBCFG_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Flexio_Mcl_Ip_Cfg.h and Flexio_Mcl_Ip_BOARD_InitPeripherals_PBcfg.h are different"
#endif

/* Check if header file and Flexio_Mcl_Ip_BOARD_InitPeripherals_PBcfg.h file are of the same Software version */
#if ((FLEXIO_MCL_IP_CFG_SW_MAJOR_VERSION_H != FLEXIO_MCL_IP_BOARD_InitPeripherals_PBCFG_SW_MAJOR_VERSION_H) || \
     (FLEXIO_MCL_IP_CFG_SW_MINOR_VERSION_H != FLEXIO_MCL_IP_BOARD_InitPeripherals_PBCFG_SW_MINOR_VERSION_H) || \
     (FLEXIO_MCL_IP_CFG_SW_PATCH_VERSION_H != FLEXIO_MCL_IP_BOARD_InitPeripherals_PBCFG_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Flexio_Mcl_Ip_Cfg.h and Flexio_Mcl_Ip_BOARD_InitPeripherals_PBcfg.h are different"
#endif

/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
                                      LOCAL MACROS
==================================================================================================*/
/* Logic Channel 0 */
#define MclConf_FlexioMclLogicChannels_FlexioMclLogicChannels_0      ((uint32)CHANNEL_0)

/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /* FLEXIO_MCL_IP_CFG_H_ */

/*==================================================================================================
 *                                        END OF FILE
==================================================================================================*/

