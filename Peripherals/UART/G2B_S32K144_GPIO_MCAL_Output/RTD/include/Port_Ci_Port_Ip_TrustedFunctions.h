/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : PORT_CI
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

#ifndef PORT_CI_PORT_IP_TRUSTEDFUNCTIONS_H
#define PORT_CI_PORT_IP_TRUSTEDFUNCTIONS_H

/**
*   @file Port_Ci_Port_Ip_TrustedFunctions.h
*
*   @addtogroup Port_IPL Port IPL
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

#include "StandardTypes.h"
#include "Port_Ci_Port_Ip_Types.h"
#include "Port_Ci_Port_Ip_Defines.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define PORT_CI_PORT_IP_TRUSTEDFUNCTIONS_VENDOR_ID_H                       43
#define PORT_CI_PORT_IP_TRUSTEDFUNCTIONS_AR_RELEASE_MAJOR_VERSION_H        4
#define PORT_CI_PORT_IP_TRUSTEDFUNCTIONS_AR_RELEASE_MINOR_VERSION_H        4
#define PORT_CI_PORT_IP_TRUSTEDFUNCTIONS_AR_RELEASE_REVISION_VERSION_H     0
#define PORT_CI_PORT_IP_TRUSTEDFUNCTIONS_SW_MAJOR_VERSION_H                1
#define PORT_CI_PORT_IP_TRUSTEDFUNCTIONS_SW_MINOR_VERSION_H                0
#define PORT_CI_PORT_IP_TRUSTEDFUNCTIONS_SW_PATCH_VERSION_H                1


/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if header file and Port_Ci_Port_Ip_TrustedFunctions.h file are of the same Autosar version */
    #if ((PORT_CI_PORT_IP_TRUSTEDFUNCTIONS_AR_RELEASE_MAJOR_VERSION_H != STD_AR_RELEASE_MAJOR_VERSION) || \
         (PORT_CI_PORT_IP_TRUSTEDFUNCTIONS_AR_RELEASE_MINOR_VERSION_H != STD_AR_RELEASE_MINOR_VERSION)    \
        )
        #error "AutoSar Version Numbers of StandardTypes.h and Port_Ci_Port_Ip_TrustedFunctions.h are different"
    #endif
#endif

/* Check if the files Port_Ci_Port_Ip_TrustedFunctions.h and Port_Ci_Port_Ip_Defines.h are of the same version */
#if (PORT_CI_PORT_IP_TRUSTEDFUNCTIONS_VENDOR_ID_H != PORT_CI_PORT_IP_VENDOR_ID_DEFINES_H)
    #error "Port_Ci_Port_Ip_TrustedFunctions.h and Port_Ci_Port_Ip_Defines.h have different vendor ids"
#endif
/* Check if Port_Ci_Port_Ip_TrustedFunctions.h and Port_Ci_Port_Ip_Defines.h are of the same Autosar version */
#if ((PORT_CI_PORT_IP_TRUSTEDFUNCTIONS_AR_RELEASE_MAJOR_VERSION_H    != PORT_CI_PORT_IP_AR_RELEASE_MAJOR_VERSION_DEFINES_H) || \
     (PORT_CI_PORT_IP_TRUSTEDFUNCTIONS_AR_RELEASE_MINOR_VERSION_H    != PORT_CI_PORT_IP_AR_RELEASE_MINOR_VERSION_DEFINES_H) || \
     (PORT_CI_PORT_IP_TRUSTEDFUNCTIONS_AR_RELEASE_REVISION_VERSION_H != PORT_CI_PORT_IP_AR_RELEASE_REVISION_VERSION_DEFINES_H) \
    )
    #error "AutoSar Version Numbers of Port_Ci_Port_Ip_TrustedFunctions.h and Port_Ci_Port_Ip_Defines.h are different"
#endif
/* Check if Port_Ci_Port_Ip_TrustedFunctions.h and Port_Ci_Port_Ip_Defines.h are of the same Software version */
#if ((PORT_CI_PORT_IP_TRUSTEDFUNCTIONS_SW_MAJOR_VERSION_H != PORT_CI_PORT_IP_SW_MAJOR_VERSION_DEFINES_H) || \
     (PORT_CI_PORT_IP_TRUSTEDFUNCTIONS_SW_MINOR_VERSION_H != PORT_CI_PORT_IP_SW_MINOR_VERSION_DEFINES_H) || \
     (PORT_CI_PORT_IP_TRUSTEDFUNCTIONS_SW_PATCH_VERSION_H != PORT_CI_PORT_IP_SW_PATCH_VERSION_DEFINES_H)    \
    )
    #error "Software Version Numbers of Port_Ci_Port_Ip_TrustedFunctions.h and Port_Ci_Port_Ip_Defines.h are different"
#endif

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                     FUNCTION PROTOTYPES
==================================================================================================*/
#define PORT_START_SEC_CODE
#include "Port_MemMap.h"

#ifndef FEATURE_PORT_CI_PORT_IP_S32K11X_DERIVATIVE
/**
* @brief        Configure the Interleave feature
*
* @details      Configure the Interleave feature
*
* @param[in] base Port base pointer (PORTA, PORTB, PORTC, etc.)
* @param[in] pin Port pin number
* @param[in] muxing Pin muxing slot selection
* @retval       none
*
* @pre          The user mode is enabled
*
*/
extern Port_Ci_Port_Ip_PortMux Port_Ci_Port_Ip_ConfigureInterleave
(
    PORT_Type * const base,
    uint32 pin,
    Port_Ci_Port_Ip_PortMux muxing
);
#endif /* FEATURE_PORT_CI_PORT_IP_S32K11X_DERIVATIVE */

#define PORT_STOP_SEC_CODE
#include "Port_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* PORT_CI_PORT_IP_TRUSTEDFUNCTIONS_H */
