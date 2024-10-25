/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : GPIO
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
#ifndef GPIO_DIO_IP_CFG_H
#define GPIO_DIO_IP_CFG_H

/**
*   @file Gpio_Dio_Ip_Cfg.h
*
*   @addtogroup DIO_IPL
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "S32K144_GPIO.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define GPIO_DIO_IP_VENDOR_ID_CFG_H                       43
#define GPIO_DIO_IP_AR_RELEASE_MAJOR_VERSION_CFG_H        4
#define GPIO_DIO_IP_AR_RELEASE_MINOR_VERSION_CFG_H        4
#define GPIO_DIO_IP_AR_RELEASE_REVISION_VERSION_CFG_H     0
#define GPIO_DIO_IP_SW_MAJOR_VERSION_CFG_H                1
#define GPIO_DIO_IP_SW_MINOR_VERSION_CFG_H                0
#define GPIO_DIO_IP_SW_PATCH_VERSION_CFG_H                1

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*//**
* @brief          Pre-processor switch to enable/disable development error detection for Gpio Ip API
*
* @implements     GpioDioErrorDetect_define
*/
#define GPIO_DIO_IP_DEV_ERROR_DETECT                         (STD_OFF)

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


#ifdef __cplusplus
}
#endif

#endif /* GPIO_DIO_IP_CFG_H */

/** @} */

