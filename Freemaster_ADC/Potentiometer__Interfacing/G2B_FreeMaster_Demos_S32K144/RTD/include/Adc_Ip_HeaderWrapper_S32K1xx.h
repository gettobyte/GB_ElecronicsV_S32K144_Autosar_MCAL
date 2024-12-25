/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : ADC
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

#ifndef ADC_IP_HEADERWRAPPER_S32K1XX_H
#define ADC_IP_HEADERWRAPPER_S32K1XX_H

/**
*   @file
*
*   @addtogroup adc_ip Adc IPL
*   @{
*/

/* Important Note: This file cannot be used independently.
*  It depends on platform header files to be included before including it */

/*==================================================================================================
*                                SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define ADC_IP_VENDOR_ID_HEADERWRAPPER_S32K1XX_H                      43
#define ADC_IP_AR_RELEASE_MAJOR_VERSION_HEADERWRAPPER_S32K1XX_H       4
#define ADC_IP_AR_RELEASE_MINOR_VERSION_HEADERWRAPPER_S32K1XX_H       4
#define ADC_IP_AR_RELEASE_REVISION_VERSION_HEADERWRAPPER_S32K1XX_H    0
#define ADC_IP_SW_MAJOR_VERSION_HEADERWRAPPER_S32K1XX_H               1
#define ADC_IP_SW_MINOR_VERSION_HEADERWRAPPER_S32K1XX_H               0
#define ADC_IP_SW_PATCH_VERSION_HEADERWRAPPER_S32K1XX_H               0

/*==================================================================================================
*                                     DEFINITIONS
==================================================================================================*/

#define ADC_MAX_CHAN_COUNT      ADC_SC1_COUNT

/* Register access defines */
#define SC1(Base, RegIndex)     (Base->SC1[RegIndex])
#define R(Base, RegIndex)       (Base->R[RegIndex])



/** @} */
#endif /* ADC_IP_HEADERWRAPPER_S32K1XX_H */
