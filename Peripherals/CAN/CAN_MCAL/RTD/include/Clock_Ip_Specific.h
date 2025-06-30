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
*   @file    Clock_Ip_Specific.h
*   @version    1.0.0
*
*   @brief   CLOCK IP specific header file.
*   @details CLOCK IP specific header file.

*   @addtogroup CLOCK_DRIVER Clock Ip Driver
*   @{
*/

#if !defined(SPECIFIC_CLOCK_SPECIFIC_H)
#define SPECIFIC_CLOCK_SPECIFIC_H

#include "Clock_Ip_Cfg_Defines.h"

#if defined (CLOCK_IP_S32K148)
#include "S32K148_SIM.h"
#include "S32K148_SCG.h"
#include "S32K148_PCC.h"
#include "S32K148_SMC.h"
#include "S32K148_QUADSPI.h"

#elif defined (CLOCK_IP_S32K116)
#include "S32K116_SIM.h"
#include "S32K116_SCG.h"
#include "S32K116_PCC.h"
#include "S32K116_SMC.h"
#include "S32K116_CMU.h"

#elif defined (CLOCK_IP_S32K118)
#include "S32K118_SIM.h"
#include "S32K118_SCG.h"
#include "S32K118_PCC.h"
#include "S32K118_SMC.h"
#include "S32K118_CMU.h"

#elif defined (CLOCK_IP_S32K142)
#include "S32K142_SIM.h"
#include "S32K142_SCG.h"
#include "S32K142_PCC.h"
#include "S32K142_SMC.h"

#elif defined (CLOCK_IP_S32K142W)
#include "S32K142W_SIM.h"
#include "S32K142W_SCG.h"
#include "S32K142W_PCC.h"
#include "S32K142W_SMC.h"

#elif defined (CLOCK_IP_S32K144)
#include "S32K144_SIM.h"
#include "S32K144_SCG.h"
#include "S32K144_PCC.h"
#include "S32K144_SMC.h"

#elif defined (CLOCK_IP_S32K144W)
#include "S32K144W_SIM.h"
#include "S32K144W_SCG.h"
#include "S32K144W_PCC.h"
#include "S32K144W_SMC.h"

#elif defined (CLOCK_IP_S32K146)
#include "S32K146_SIM.h"
#include "S32K146_SCG.h"
#include "S32K146_PCC.h"
#include "S32K146_SMC.h"

#endif

#include "Mcal.h"

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus*/
/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CLOCK_IP_SPECIFIC_VENDOR_ID                       43
#define CLOCK_IP_SPECIFIC_AR_RELEASE_MAJOR_VERSION        4
#define CLOCK_IP_SPECIFIC_AR_RELEASE_MINOR_VERSION        4
#define CLOCK_IP_SPECIFIC_AR_RELEASE_REVISION_VERSION     0
#define CLOCK_IP_SPECIFIC_SW_MAJOR_VERSION                1
#define CLOCK_IP_SPECIFIC_SW_MINOR_VERSION                0
#define CLOCK_IP_SPECIFIC_SW_PATCH_VERSION                0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if Clock_Ip_Specific.h file and Clock_Ip_Cfg_Defines.h file are of the same vendor */
#if (CLOCK_IP_SPECIFIC_VENDOR_ID != CLOCK_IP_CFG_DEFINES_VENDOR_ID)
    #error "Clock_Ip_Specific.h and Clock_Ip_Cfg_Defines.h have different vendor ids"
#endif

/* Check if Clock_Ip_Specific.h file and Clock_Ip_Cfg_Defines.h file are of the same Autosar version */
#if ((CLOCK_IP_SPECIFIC_AR_RELEASE_MAJOR_VERSION != CLOCK_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_SPECIFIC_AR_RELEASE_MINOR_VERSION != CLOCK_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION) || \
     (CLOCK_IP_SPECIFIC_AR_RELEASE_REVISION_VERSION != CLOCK_IP_CFG_DEFINES_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Clock_Ip_Specific.h and Clock_Ip_Cfg_Defines.h are different"
#endif

/* Check if Clock_Ip_Specific.h file and Clock_Ip_Cfg_Defines.h file are of the same Software version */
#if ((CLOCK_IP_SPECIFIC_SW_MAJOR_VERSION != CLOCK_IP_CFG_DEFINES_SW_MAJOR_VERSION) || \
     (CLOCK_IP_SPECIFIC_SW_MINOR_VERSION != CLOCK_IP_CFG_DEFINES_SW_MINOR_VERSION) || \
     (CLOCK_IP_SPECIFIC_SW_PATCH_VERSION != CLOCK_IP_CFG_DEFINES_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Clock_Ip_Specific.h and Clock_Ip_Cfg_Defines.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if Clock_Ip_Specific.h file and Mcal.h file are of the same Autosar version */
#if ((CLOCK_IP_SPECIFIC_AR_RELEASE_MAJOR_VERSION    != MCAL_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_SPECIFIC_AR_RELEASE_MINOR_VERSION    != MCAL_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Clock_Ip_Specific.h and Mcal.h are different"
#endif
#endif

#if (defined (CLOCK_IP_S32K118) || defined(CLOCK_IP_S32K116))

    #define DIVIDER_CALLBACKS_COUNT                                               11U
    #define SCG_ASYNC_DIV1                                                        1U
    #define SCG_ASYNC_DIV2                                                        2U
    #define SCG_DIVCORE_RUN                                                       3U
    #define SCG_DIVBUS_RUN                                                        4U
    #define SCG_DIVSLOW_RUN                                                       5U
    #define SCG_DIVCORE_VLPR                                                      6U
    #define SCG_DIVBUS_VLPR                                                       7U
    #define SCG_DIVSLOW_VLPR                                                      8U
    #define SIM_CLKOUT_DIV                                                        9U
    #define PCC_PCD_FRAC                                                          10U

    #define DIVIDERTRIGGER_CALLBACKS_COUNT                                        1U

    #define XOSC_CALLBACKS_COUNT                                                  2U
    #define SOSC_ENABLE                                                           1U

    #define IRCOSC_CALLBACKS_COUNT                                                5U
    #define SIRC_ENABLE                                                           1U
    #define SIRC_VLP_ENABLE                                                       2U
    #define SIRC_STOP_ENABLE                                                      3U
    #define FIRC_ENABLE                                                           4U

    #define GATE_CALLBACKS_COUNT                                                  6U
    #define PCC_CGC_ENABLE                                                        1U
    #define SIM_CLKOUT_ENABLE                                                     2U
    #define SIM_LPO32K_ENABLE                                                     3U
    #define SIM_LPO1K_ENABLE                                                      4U
    #define SIM_PLATCGC_CGC                                                       5U

    #define FRACTIONAL_DIVIDER_CALLBACKS_COUNT                                    1U

    #define PLL_CALLBACKS_COUNT                                                   1U

    #define SELECTOR_CALLBACKS_COUNT                                              9U
    #define SCG_SCS_RUN_SEL                                                       1U
    #define SCG_SCS_VLPR_SEL                                                      2U
    #define SIM_RTC_SEL                                                           3U
    #define SIM_LPO_SEL                                                           4U
    #define SCG_CLKOUT_SEL                                                        5U
    #define SIM_FTMOPT_SEL                                                        6U
    #define SIM_CLKOUT_SEL                                                        7U
    #define PCC_PCS_SELECT                                                        8U

    #define PCFS_CALLBACKS_COUNT                                                  1U

    #define CMU_CALLBACKS_COUNT                                                   2U
    #define CMU_FC_FCE_REF_CNT_LFREF_HFREF                                        1U

    #define ALL_CALLBACKS_COUNT                                                   11U

#elif (defined (CLOCK_IP_S32K142W) || defined(CLOCK_IP_S32K144W))

    #define DIVIDER_CALLBACKS_COUNT                                               12U
    #define SCG_ASYNC_DIV1                                                        1U
    #define SCG_ASYNC_DIV2                                                        2U
    #define SCG_DIVCORE_RUN                                                       3U
    #define SCG_DIVBUS_RUN                                                        4U
    #define SCG_DIVSLOW_RUN                                                       5U
    #define SCG_DIVCORE_VLPR                                                      6U
    #define SCG_DIVBUS_VLPR                                                       7U
    #define SCG_DIVSLOW_VLPR                                                      8U
    #define SIM_CLKOUT_DIV                                                        9U
    #define PCC_PCD_FRAC                                                          10U
    #define SIM_TRACE_DIV_MUL                                                     11U

    #define DIVIDERTRIGGER_CALLBACKS_COUNT                                        1U

    #define XOSC_CALLBACKS_COUNT                                                  2U
    #define SOSC_ENABLE                                                           1U

    #define IRCOSC_CALLBACKS_COUNT                                                5U
    #define SIRC_ENABLE                                                           1U
    #define SIRC_VLP_ENABLE                                                       2U
    #define SIRC_STOP_ENABLE                                                      3U
    #define FIRC_ENABLE                                                           4U

    #define GATE_CALLBACKS_COUNT                                                  7U
    #define PCC_CGC_ENABLE                                                        1U
    #define SIM_CLKOUT_ENABLE                                                     2U
    #define SIM_LPO32K_ENABLE                                                     3U
    #define SIM_LPO1K_ENABLE                                                      4U
    #define SIM_PLATCGC_CGC                                                       5U
    #define SIM_TRACE_ENABLE                                                      6U

    #define FRACTIONAL_DIVIDER_CALLBACKS_COUNT                                    1U

    #define PLL_CALLBACKS_COUNT                                                   2U
    #define SPLL_ENABLE                                                           1U

    #define SELECTOR_CALLBACKS_COUNT                                              10U
    #define SCG_SCS_RUN_SEL                                                       1U
    #define SCG_SCS_VLPR_SEL                                                      2U
    #define SIM_RTC_SEL                                                           3U
    #define SIM_LPO_SEL                                                           4U
    #define SCG_CLKOUT_SEL                                                        5U
    #define SIM_FTMOPT_SEL                                                        6U
    #define SIM_CLKOUT_SEL                                                        7U
    #define PCC_PCS_SELECT                                                        8U
    #define SIM_TRACE_SEL                                                         9U

    #define PCFS_CALLBACKS_COUNT                                                  1U

    #define CMU_CALLBACKS_COUNT                                                   1U

    #define ALL_CALLBACKS_COUNT                                                   12U

#elif (defined (CLOCK_IP_S32K142) || defined(CLOCK_IP_S32K144) || defined(CLOCK_IP_S32K146) || defined(CLOCK_IP_S32K148))

    #define DIVIDER_CALLBACKS_COUNT                                               15U
    #define SCG_ASYNC_DIV1                                                        1U
    #define SCG_ASYNC_DIV2                                                        2U
    #define SCG_DIVCORE_RUN                                                       3U
    #define SCG_DIVBUS_RUN                                                        4U
    #define SCG_DIVSLOW_RUN                                                       5U
    #define SCG_DIVCORE_VLPR                                                      6U
    #define SCG_DIVBUS_VLPR                                                       7U
    #define SCG_DIVSLOW_VLPR                                                      8U
    #define SCG_DIVCORE_HSRUN                                                     9U
    #define SCG_DIVBUS_HSRUN                                                      10U
    #define SCG_DIVSLOW_HSRUN                                                     11U
    #define SIM_CLKOUT_DIV                                                        12U
    #define PCC_PCD_FRAC                                                          13U
    #define SIM_TRACE_DIV_MUL                                                     14U
    
    #define DIVIDERTRIGGER_CALLBACKS_COUNT                                        1U
    
    #define XOSC_CALLBACKS_COUNT                                                  2U
    #define SOSC_ENABLE                                                           1U

    #define IRCOSC_CALLBACKS_COUNT                                                5U
    #define SIRC_ENABLE                                                           1U
    #define SIRC_VLP_ENABLE                                                       2U
    #define SIRC_STOP_ENABLE                                                      3U
    #define FIRC_ENABLE                                                           4U

    #define GATE_CALLBACKS_COUNT                                                  7U
    #define PCC_CGC_ENABLE                                                        1U
    #define SIM_CLKOUT_ENABLE                                                     2U
    #define SIM_LPO32K_ENABLE                                                     3U
    #define SIM_LPO1K_ENABLE                                                      4U
    #define SIM_PLATCGC_CGC                                                       5U
    #define SIM_TRACE_ENABLE                                                      6U
    
    #define FRACTIONAL_DIVIDER_CALLBACKS_COUNT                                    1U
    
    #define PLL_CALLBACKS_COUNT                                                   2U
    #define SPLL_ENABLE                                                           1U
    
    #define SELECTOR_CALLBACKS_COUNT                                              11U
    #define SCG_SCS_RUN_SEL                                                       1U
    #define SCG_SCS_VLPR_SEL                                                      2U
    #define SCG_SCS_HSRUN_SEL                                                     3U
    #define SIM_RTC_SEL                                                           4U
    #define SIM_LPO_SEL                                                           5U
    #define SCG_CLKOUT_SEL                                                        6U
    #define SIM_FTMOPT_SEL                                                        7U
    #define SIM_CLKOUT_SEL                                                        8U
    #define PCC_PCS_SELECT                                                        9U
    #define SIM_TRACE_SEL                                                         10U
    
    #define PCFS_CALLBACKS_COUNT                                                  1U
    
    #define CMU_CALLBACKS_COUNT                                                   1U
    
    #define ALL_CALLBACKS_COUNT                                                   15U

#endif

/* The source of HCLK is CORE_CLK. */
#define HCLK        CORE_CLK

typedef struct {

    uint32  ASYNC_DIV;    /* Peripheral asynchronous clock register */

}scgPeriphAsyncDiv_Type;

#if (defined(CLOCK_IP_S32K116) || defined(CLOCK_IP_S32K118))
#define PERIPH_ASYNC_COUNT          3U
#else
#define PERIPH_ASYNC_COUNT             4U
#endif

#if defined(FEATURE_CLOCK_IP_HAS_FIRC_MON1_CLK) || defined(FEATURE_CLOCK_IP_HAS_FIRC_MON2_CLK)
/** CMU - Register Layout Typedef */
typedef struct {
  uint32 GCR;                               /**< Global Configuration Register, offset: 0x0 */
  uint32 RCCR;                              /**< Reference Count Configuration Register, offset: 0x4 */
  uint32 HTCR;                              /**< High Threshold Configuration Register, offset: 0x8 */
  uint32 LTCR;                              /**< Low Threshold Configuration Register, offset: 0xC */
  uint32 SR;                                /**< Status Register, offset: 0x10 */
  uint32 IER;                               /**< Interrupt Enable Register, offset: 0x14 */

} ClockMonitor_Type;

typedef struct{

    Clock_Ip_NameType name;       /* Name of the clock that can be monitored/supports cmu (clock monitor) */
    Clock_Ip_NameType reference;  /* Name of the reference clock */
    Clock_Ip_NameType bus;        /* Name of the bus clock */

    volatile ClockMonitor_Type* cmuInstance;

}cmuInfoType;
#endif

#if (defined(CLOCK_IP_S32K116) || defined(CLOCK_IP_S32K118))
#define NUMBER_OF_HARDWARE_PLL      0U
#define CMU_INSTANCES_ARRAY_SIZE    2U
#define CMU_INFO_SIZE               2U
#else
#define NUMBER_OF_HARDWARE_PLL      1U
#define CMU_INSTANCES_ARRAY_SIZE    0U
#define CMU_INFO_SIZE               0U
#endif

#ifdef CMU_GCR_FCE_MASK
    #define CMU_FC_GCR_FCE_MASK CMU_GCR_FCE_MASK
#endif
#ifdef CMU_GCR_FCE_SHIFT
    #define CMU_FC_GCR_FCE_SHIFT CMU_GCR_FCE_SHIFT
#endif
#ifdef CMU_IER_FHHAIE_MASK
    #define CMU_FC_IER_FHHAIE_MASK CMU_IER_FHHAIE_MASK
#endif
#ifdef CMU_IER_FHHIE_MASK
    #define CMU_FC_IER_FHHIE_MASK CMU_IER_FHHIE_MASK
#endif
#ifdef CMU_IER_FLLAIE_MASK
    #define CMU_FC_IER_FLLAIE_MASK CMU_IER_FLLAIE_MASK
#endif
#ifdef CMU_IER_FLLIE_MASK
    #define CMU_FC_IER_FLLIE_MASK CMU_IER_FLLIE_MASK
#endif
#ifdef CMU_SR_FHH_MASK
    #define CMU_FC_SR_FHH_MASK CMU_SR_FHH_MASK
#endif
#ifdef CMU_SR_FLL_MASK
    #define CMU_FC_SR_FLL_MASK CMU_SR_FLL_MASK
#endif
#ifdef CMU_SR_RS_MASK
    #define CMU_FC_SR_RS_MASK CMU_SR_RS_MASK
#endif

#ifdef CMU_FC_FCE_REF_CNT_LFREF_HFREF
#define CMU_FREQUENCY_CHECK_ENABLED          CMU_FC_GCR_FCE_MASK
#define CMU_FREQUENCY_CHECK_STOPPED          0U
#define CMU_ISR_MASK                         3U
#define CMU_RESET_COUNTER_VALUE              0U
#define CMU_RESET_LOW_LIMIT                  3U
#define CMU_RESET_HIGH_LIMIT                 0x00FFFFFCU
#endif

/* Clock start constant section data */
#define MCU_START_SEC_CONST_UNSPECIFIED
#include "Mcu_MemMap.h"

extern volatile  scgPeriphAsyncDiv_Type* const scgPeriphAsyncDivs[PERIPH_ASYNC_COUNT];
#if CMU_INSTANCES_ARRAY_SIZE > 0U
extern volatile ClockMonitor_Type * const cmu[CMU_INSTANCES_ARRAY_SIZE];
extern Clock_Ip_NameType const cmuNames[CMU_INSTANCES_ARRAY_SIZE];
#endif

#if CMU_INFO_SIZE > 0U
extern const cmuInfoType cmuInfo[CMU_INFO_SIZE];
#endif
/* Clock stop constant section data */
#define MCU_STOP_SEC_CONST_UNSPECIFIED
#include "Mcu_MemMap.h"

/* Clock start constant section data */
#define MCU_START_SEC_CONST_16
#include "Mcu_MemMap.h"

extern const uint8 selectorEntry_hardwareValue[FEATURE_CLOCKS_NO];
extern const uint8 selectorEntrySCS_hardwareValue[FEATURE_CLOCK_PRODUCERS_NO + 1U];
extern const uint8 selectorEntryPCS_hardwareValue[FEATURE_CLOCK_PRODUCERS_NO + 1U];
extern const uint8 dividerValue_hardwareValue[65U];

/* Clock stop constant section data */
#define MCU_STOP_SEC_CONST_16
#include "Mcu_MemMap.h"

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

/* Clock start section code */
#define MCU_START_SEC_CODE

#include "Mcu_MemMap.h"

void DisableSafeClock(Clock_Ip_ClockConfigType const * config);

/* Clock stop section code */
#define MCU_STOP_SEC_CODE

#include "Mcu_MemMap.h"
#if defined(__cplusplus)
}
#endif /* __cplusplus*/


/*! @}*/

#endif /* SPECIFIC_CLOCK_SPECIFIC_H */
/*******************************************************************************
 * EOF
 ******************************************************************************/
