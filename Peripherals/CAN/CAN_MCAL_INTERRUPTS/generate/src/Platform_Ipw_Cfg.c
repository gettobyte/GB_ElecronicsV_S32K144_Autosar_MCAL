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

#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
                                         INCLUDE FILES
==================================================================================================*/
#include "Platform_Ipw_Cfg.h"
#include "IntCtrl_Ip.h"

#define PLATFORM_PLATFORM_IPW_CFG_VENDOR_ID_C                     43
#define PLATFORM_PLATFORM_IPW_CFG_AR_RELEASE_MAJOR_VERSION_C      4
#define PLATFORM_PLATFORM_IPW_CFG_AR_RELEASE_MINOR_VERSION_C      4
#define PLATFORM_PLATFORM_IPW_CFG_AR_RELEASE_REVISION_VERSION_C   0
#define PLATFORM_PLATFORM_IPW_CFG_SW_MAJOR_VERSION_C              1
#define PLATFORM_PLATFORM_IPW_CFG_SW_MINOR_VERSION_C              0
#define PLATFORM_PLATFORM_IPW_CFG_SW_PATCH_VERSION_C              0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and Platform_Ipw_TypesDef header file are of the same vendor */
#if (PLATFORM_PLATFORM_IPW_CFG_VENDOR_ID_C != PLATFORM_IPW_CFG_VENDOR_ID)
    #error "Platform_Ipw_Cfg.c and Platform_Ipw_TypesDef.h have different vendor ids"
#endif
/* Check if current file and Platform_Ipw_TypesDef header file are of the same Autosar version */
#if ((PLATFORM_PLATFORM_IPW_CFG_AR_RELEASE_MAJOR_VERSION_C    != PLATFORM_IPW_TYPESDEF_AR_RELEASE_MAJOR_VERSION) || \
     (PLATFORM_PLATFORM_IPW_CFG_AR_RELEASE_MINOR_VERSION_C    != PLATFORM_IPW_TYPESDEF_AR_RELEASE_MINOR_VERSION) || \
     (PLATFORM_PLATFORM_IPW_CFG_AR_RELEASE_REVISION_VERSION_C != PLATFORM_IPW_TYPESDEF_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Platform_Ipw_Cfg.c and Platform_Ipw_TypesDef.h are different"
#endif
/* Check if current file and Platform_Ipw_TypesDef header file are of the same Software version */
#if ((PLATFORM_PLATFORM_IPW_CFG_SW_MAJOR_VERSION_C != PLATFORM_IPW_TYPESDEF_SW_MAJOR_VERSION) || \
     (PLATFORM_PLATFORM_IPW_CFG_SW_MINOR_VERSION_C != PLATFORM_IPW_TYPESDEF_SW_MINOR_VERSION) || \
     (PLATFORM_PLATFORM_IPW_CFG_SW_PATCH_VERSION_C != PLATFORM_IPW_TYPESDEF_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Platform_Ipw_Cfg.c and Platform_Ipw_TypesDef.h are different"
#endif


/* Check if current file and IntCtrl_Ip header file are of the same vendor */
#if (PLATFORM_IPW_CFG_VENDOR_ID != PLATFORM_INTCTRL_IP_VENDOR_ID)
    #error "Platform_Ipw_Cfg.c and IntCtrl_Ip.h have different vendor ids"
#endif
/* Check if current file and IntCtrl_Ip header file are of the same Autosar version */
#if ((PLATFORM_IPW_CFG_AR_MAJOR_VERSION    != PLATFORM_IPW_TYPESDEF_AR_RELEASE_MAJOR_VERSION) || \
     (PLATFORM_IPW_CFG_AR_MINOR_VERSION    != PLATFORM_IPW_TYPESDEF_AR_RELEASE_MINOR_VERSION) || \
     (PLATFORM_IPW_CFG_AR_REVISION_VERSION != PLATFORM_IPW_TYPESDEF_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Platform_Ipw_Cfg.c and IntCtrl_Ip.h are different"
#endif
/* Check if current file and IntCtrl_Ip header file are of the same Software version */
#if ((PLATFORM_IPW_CFG_SW_MAJOR_VERSION != PLATFORM_IPW_TYPESDEF_SW_MAJOR_VERSION) || \
     (PLATFORM_IPW_CFG_SW_MINOR_VERSION != PLATFORM_IPW_TYPESDEF_SW_MINOR_VERSION) || \
     (PLATFORM_IPW_CFG_SW_PATCH_VERSION != PLATFORM_IPW_TYPESDEF_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Platform_Ipw_Cfg.c and IntCtrl_Ip.h are different"
#endif


/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/

/* TBD */


/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/
#define PLATFORM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Platform_MemMap.h"

/* Definition of the configuration structure for Platform IPW */
const Platform_Ipw_ConfigType ipwConfig = {
    &intCtrlConfig,
#if (INT_CTRL_IP_CORTEXM4 == STD_ON)
    NULL_PTR,
#endif
};
/* Definition of the configuration structure for non core Platform IPW */
const Platform_Ipw_NonCoreConfigType ipwNonCoreConfig = {
    &intRouteConfig
};

#define PLATFORM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Platform_MemMap.h"

#ifdef __cplusplus
}
#endif

