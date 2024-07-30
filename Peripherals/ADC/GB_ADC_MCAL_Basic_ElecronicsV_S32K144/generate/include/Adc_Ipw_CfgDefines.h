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

#ifndef ADC_IPW_CFGDEFINES_H
#define ADC_IPW_CFGDEFINES_H

/**
*   @file
*
*   @addtogroup adc_ipw_config Adc Ipw Configuration
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

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define ADC_VENDOR_ID_IPW_CFGDEFINES_H                     43
#define ADC_AR_RELEASE_MAJOR_VERSION_IPW_CFGDEFINES_H      4
#define ADC_AR_RELEASE_MINOR_VERSION_IPW_CFGDEFINES_H      4
#define ADC_AR_RELEASE_REVISION_VERSION_IPW_CFGDEFINES_H   0
#define ADC_SW_MAJOR_VERSION_IPW_CFGDEFINES_H              1
#define ADC_SW_MINOR_VERSION_IPW_CFGDEFINES_H              0
#define ADC_SW_PATCH_VERSION_IPW_CFGDEFINES_H              0

/*==================================================================================================
*                              DEFINES AND MACROS
==================================================================================================*/
#define ADC_IPW_INVALID_LOGICAL_UNIT_ID     (0xFFU)

#define ADC_IPW_INVALID_DMA_CHANNEL_ID      (0xFFU)

#define ADC_IPW_INVALID_TRANSFER_TYPE       (0xFFU)
/**
 * @brief          Max number of ADC Hw units.
 */
#define ADC_MAX_HW_UNITS                    (2U)


/**
* @brief           PDB available/unavailable (STD_ON/STD_OFF).
*/
#define ADC_PDB_AVAILABLE                   (STD_ON)


/**
* @brief           BCTU available/unavailable (STD_ON/STD_OFF).
*/
#define ADC_BCTU_AVAILABLE                  (STD_OFF)

/**
* @brief           CTU available/unavailable (STD_ON/STD_OFF).
*/
#define ADC_CTU_AVAILABLE                   (STD_OFF)

/**
* @brief           ADC hardware is supported CALSTAT register
*/
#define ADC_CALSTAT_AVAILABLE               (STD_OFF)

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* ADC_IPW_CFGDEFINES_H */

