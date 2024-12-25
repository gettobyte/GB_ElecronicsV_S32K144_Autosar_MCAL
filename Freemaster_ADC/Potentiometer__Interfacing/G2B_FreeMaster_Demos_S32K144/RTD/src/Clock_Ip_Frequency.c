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
*   @file       Clock_Ip_Frequency.c
*   @version    1.0.0
*
*   @brief   CLOCK driver implementations.
*   @details CLOCK driver implementations.
*
*   @addtogroup CLOCK_DRIVER Clock Ip Driver
*   @{
*/


#include "Clock_Ip_Private.h"

#ifdef CLOCK_IP_GET_FREQUENCY_API
#if (CLOCK_IP_GET_FREQUENCY_API == STD_ON)


/*==================================================================================================
*                                     SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CLOCK_IP_FREQUENCY_VENDOR_ID_C                      43
#define CLOCK_IP_FREQUENCY_AR_RELEASE_MAJOR_VERSION_C       4
#define CLOCK_IP_FREQUENCY_AR_RELEASE_MINOR_VERSION_C       4
#define CLOCK_IP_FREQUENCY_AR_RELEASE_REVISION_VERSION_C    0
#define CLOCK_IP_FREQUENCY_SW_MAJOR_VERSION_C               1
#define CLOCK_IP_FREQUENCY_SW_MINOR_VERSION_C               0
#define CLOCK_IP_FREQUENCY_SW_PATCH_VERSION_C               0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Clock_Ip_Frequency.c file and Clock_Ip_Private.h file are of the same vendor */
#if (CLOCK_IP_FREQUENCY_VENDOR_ID_C != CLOCK_IP_PRIVATE_VENDOR_ID)
    #error "Clock_Ip_Frequency.c and Clock_Ip_Private.h have different vendor ids"
#endif

/* Check if Clock_Ip_Frequency.c file and Clock_Ip_Private.h file are of the same Autosar version */
#if ((CLOCK_IP_FREQUENCY_AR_RELEASE_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_FREQUENCY_AR_RELEASE_MINOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MINOR_VERSION) || \
     (CLOCK_IP_FREQUENCY_AR_RELEASE_REVISION_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Clock_Ip_Frequency.c and Clock_Ip_Private.h are different"
#endif

/* Check if Clock_Ip_Frequency.c file and Clock_Ip_Private.h file are of the same Software version */
#if ((CLOCK_IP_FREQUENCY_SW_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MAJOR_VERSION) || \
     (CLOCK_IP_FREQUENCY_SW_MINOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MINOR_VERSION) || \
     (CLOCK_IP_FREQUENCY_SW_PATCH_VERSION_C != CLOCK_IP_PRIVATE_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Clock_Ip_Frequency.c and Clock_Ip_Private.h are different"
#endif

/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

typedef struct{

    Clock_Ip_NameType name;
    uint32 frequency;

}extSignalFreq;

typedef uint32 (*getFreqType)(void);

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

#define EXT_SIGNALS_NO      4U
#define DISABLED            0U
#define ENABLED             0xFFFFFFFFU

#define SIM_CHIPCTL_SELECTOR_HARDWARE_VALUES_NO      16U
#define SIM_FTM_SELECTOR_HARDWARE_VALUES_NO          4U
#define SCG_SELECTOR_HARDWARE_VALUES_NO              8U
#define SCS_SELECTOR_HARDWARE_VALUES_NO              7U
#define PCS1_SELECTOR_HARDWARE_VALUES_NO             7U
#define PCS2_SELECTOR_HARDWARE_VALUES_NO             7U
#define RTC_SELECTOR_HARDWARE_VALUES_NO              4U 
#define LPO_SELECTOR_HARDWARE_VALUES_NO              4U
#define DIVIDER_VALUES_NO                            8U  

#define SPLL_FREQ                        160000000U
#define SPLL_CHECKSUM                    1572864U


/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
/* Clock start section code */
#define MCU_START_SEC_CODE
#include "Mcu_MemMap.h"

static uint32 get_Zero_Frequency(void);
static uint32 get_LPO_128K_CLK_Frequency(void);
static uint32 get_FIRC_CLK_Frequency(void);
static uint32 get_SOSC_CLK_Frequency(void);
static uint32 get_SIRC_CLK_Frequency(void);
#if defined(FEATURE_CLOCK_IP_HAS_SPLL_CLK)
static uint32 get_SPLL_CLK_Frequency(void);
#endif
static uint32 get_SIRCDIV1_CLK_Frequency(void);
static uint32 get_SIRCDIV2_CLK_Frequency(void);
static uint32 get_FIRCDIV1_CLK_Frequency(void);
static uint32 get_FIRCDIV2_CLK_Frequency(void);
static uint32 get_SOSCDIV1_CLK_Frequency(void);
static uint32 get_SOSCDIV2_CLK_Frequency(void);
#if defined(FEATURE_CLOCK_IP_HAS_SPLLDIV1_CLK)
static uint32 get_SPLLDIV1_CLK_Frequency(void);
#endif
#if defined(FEATURE_CLOCK_IP_HAS_SPLLDIV2_CLK)
static uint32 get_SPLLDIV2_CLK_Frequency(void);
#endif
static uint32 get_LPO_32K_CLK_Frequency(void);
static uint32 get_LPO_1K_CLK_Frequency(void);
static uint32 get_tclk0_ref_Frequency(void);
static uint32 get_tclk1_ref_Frequency(void);
static uint32 get_tclk2_ref_Frequency(void);
static uint32 get_rtc_clkin_Frequency(void);
static uint32 get_SCS_CLK_Frequency(void);
static uint32 get_CORE_CLK_Frequency(void);
static uint32 get_BUS_CLK_Frequency(void);
static uint32 get_SLOW_CLK_Frequency(void);
static uint32 get_RTC_CLK_Frequency(void);
static uint32 get_LPO_CLK_Frequency(void);
static uint32 get_SCG_CLKOUT_CLK_Frequency(void);
static uint32 get_FTM0_EXT_CLK_Frequency(void);
static uint32 get_FTM1_EXT_CLK_Frequency(void);
#if defined(FEATURE_CLOCK_IP_HAS_FTM2_EXT_CLK)
static uint32 get_FTM2_EXT_CLK_Frequency(void);
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM3_EXT_CLK)
static uint32 get_FTM3_EXT_CLK_Frequency(void);
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM4_EXT_CLK)
static uint32 get_FTM4_EXT_CLK_Frequency(void);
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM5_EXT_CLK)
static uint32 get_FTM5_EXT_CLK_Frequency(void);
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM6_EXT_CLK)
static uint32 get_FTM6_EXT_CLK_Frequency(void);
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM7_EXT_CLK)
static uint32 get_FTM7_EXT_CLK_Frequency(void);
#endif
static uint32 get_ADC0_CLK_Frequency(void);
#if defined(FEATURE_CLOCK_IP_HAS_ADC1_CLK)
static uint32 get_ADC1_CLK_Frequency(void);
#endif
static uint32 get_CLKOUT0_CLK_Frequency(void);
static uint32 get_CMP0_CLK_Frequency(void);
#if defined(FEATURE_CLOCK_IP_HAS_CMU0_CLK)
static uint32 get_CMU0_CLK_Frequency(void);
#endif
#if defined(FEATURE_CLOCK_IP_HAS_CMU1_CLK)
static uint32 get_CMU1_CLK_Frequency(void);
#endif
static uint32 get_CRC0_CLK_Frequency(void);
static uint32 get_DMA0_CLK_Frequency(void);
static uint32 get_DMAMUX0_CLK_Frequency(void);
static uint32 get_EIM0_CLK_Frequency(void);
#if defined(FEATURE_CLOCK_IP_HAS_ENET_CLK)
static uint32 get_ENET_CLK_Frequency(void);
#endif
static uint32 get_ERM0_CLK_Frequency(void);
#if defined(FEATURE_CLOCK_IP_HAS_EWM0_CLK)
static uint32 get_EWM0_CLK_Frequency(void);
#endif
static uint32 get_FLEXCAN0_CLK_Frequency(void);
#if defined(FEATURE_CLOCK_IP_HAS_FLEXCAN1_CLK)
static uint32 get_FLEXCAN1_CLK_Frequency(void);
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FLEXCAN2_CLK)
static uint32 get_FLEXCAN2_CLK_Frequency(void);
#endif
static uint32 get_FTM0_CLK_Frequency(void);
static uint32 get_FTM1_CLK_Frequency(void);
#if defined(FEATURE_CLOCK_IP_HAS_FTM2_CLK)
static uint32 get_FTM2_CLK_Frequency(void);
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM3_CLK)
static uint32 get_FTM3_CLK_Frequency(void);
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM4_CLK)
static uint32 get_FTM4_CLK_Frequency(void);
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM5_CLK)
static uint32 get_FTM5_CLK_Frequency(void);
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM6_CLK)
static uint32 get_FTM6_CLK_Frequency(void);
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTM7_CLK)
static uint32 get_FTM7_CLK_Frequency(void);
#endif
#if defined(FEATURE_CLOCK_IP_HAS_GPIO0_CLK)
static uint32 get_GPIO0_CLK_Frequency(void);
#endif
static uint32 get_FlexIO_CLK_Frequency(void);
#if defined(FEATURE_CLOCK_IP_HAS_FTFC_CLK)
static uint32 get_FTFC_CLK_Frequency(void);
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FTFM_CLK)
static uint32 get_FTFM_CLK_Frequency(void);
#endif
static uint32 get_LPI2C0_CLK_Frequency(void);
#if defined(FEATURE_CLOCK_IP_HAS_LPI2C1_CLK)
static uint32 get_LPI2C1_CLK_Frequency(void);
#endif
static uint32 get_LPIT0_CLK_Frequency(void);
static uint32 get_LPSPI0_CLK_Frequency(void);
static uint32 get_LPSPI1_CLK_Frequency(void);
#if defined(FEATURE_CLOCK_IP_HAS_LPSPI2_CLK)
static uint32 get_LPSPI2_CLK_Frequency(void);
#endif
static uint32 get_LPTMR0_CLK_Frequency(void);
static uint32 get_LPUART0_CLK_Frequency(void);
static uint32 get_LPUART1_CLK_Frequency(void);
#if defined(FEATURE_CLOCK_IP_HAS_LPUART2_CLK)
static uint32 get_LPUART2_CLK_Frequency(void);
#endif
static uint32 get_MPU0_CLK_Frequency(void);
static uint32 get_MSCM0_CLK_Frequency(void);
static uint32 get_PDB0_CLK_Frequency(void);
#if defined(FEATURE_CLOCK_IP_HAS_PDB1_CLK)
static uint32 get_PDB1_CLK_Frequency(void);
#endif
static uint32 get_PORTA_CLK_Frequency(void);
static uint32 get_PORTB_CLK_Frequency(void);
static uint32 get_PORTC_CLK_Frequency(void);
static uint32 get_PORTD_CLK_Frequency(void);
static uint32 get_PORTE_CLK_Frequency(void);
#if defined(FEATURE_CLOCK_IP_HAS_QSPI_CLK)
static uint32 get_QSPI_CLK_Frequency(void);
#endif
#if defined(FEATURE_CLOCK_IP_HAS_QSPI_SFIF_CLK_HYP_PREMUX_CLK)
static uint32 get_QSPI_SFIF_CLK_HYP_PREMUX_CLK_Frequency(void);
#endif
#if defined(FEATURE_CLOCK_IP_HAS_QSPI_SFIF_CLK)
static uint32 get_QSPI_SFIF_CLK_Frequency(void);
#endif
#if defined(FEATURE_CLOCK_IP_HAS_QSPI_2xSFIF_CLK)
static uint32 get_QSPI_2xSFIF_CLK_Frequency(void);
#endif
static uint32 get_RTC0_CLK_Frequency(void);
#if defined(FEATURE_CLOCK_IP_HAS_SAI0_CLK)
static uint32 get_SAI0_CLK_Frequency(void);
#endif
#if defined(FEATURE_CLOCK_IP_HAS_SAI1_CLK)
static uint32 get_SAI1_CLK_Frequency(void);
#endif
#if defined(FEATURE_CLOCK_IP_HAS_TRACE_CLK)
static uint32 get_TRACE_CLK_Frequency(void);
#endif
#if defined(FEATURE_CLOCK_IP_HAS_SPLL_CLK)
static uint32 PLL_VCO(SCG_Type const *base);
#endif

/* Clock stop section code */
#define MCU_STOP_SEC_CODE
#include "Mcu_MemMap.h"

/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/

/* Clock start constant section data */
#define MCU_START_SEC_CONST_UNSPECIFIED
#include "Mcu_MemMap.h"

static const uint32 enableClock[2U] = {DISABLED,ENABLED};
static const uint32 enableGate[2U] = {DISABLED,ENABLED};

static const uint8 dividerMappingValue[DIVIDER_VALUES_NO] = {
0U,                                /* Divider value for 0 hardware value */
1U,                                /* Divider value for 1 hardware value */
2U,                                /* Divider value for 2 hardware value */
4U,                                /* Divider value for 3 hardware value */
8U,                                /* Divider value for 4 hardware value */
16U,                               /* Divider value for 5 hardware value */
32U,                               /* Divider value for 6 hardware value */
64U,                               /* Divider value for 7 hardware value */
};


static const getFreqType freqTablePcs2[PCS2_SELECTOR_HARDWARE_VALUES_NO] =

{
        get_Zero_Frequency,                   /* function get clock for 0  hardware value */
        get_SOSCDIV2_CLK_Frequency,           /* function get clock for 1  hardware value */
        get_SIRCDIV2_CLK_Frequency,           /* function get clock for 2  hardware value */
        get_FIRCDIV2_CLK_Frequency,           /* function get clock for 3  hardware value */
        get_Zero_Frequency,                   /* function get clock for 4  hardware value */
        get_Zero_Frequency,                   /* function get clock for 5  hardware value */
#if defined(FEATURE_CLOCK_IP_HAS_SPLL_CLK)
        get_SPLLDIV2_CLK_Frequency,           /* function get clock for 6  hardware value */
#else
        get_Zero_Frequency,                   /* function get clock for 6  hardware value */
#endif
};

static const getFreqType freqTablePcs1[PCS1_SELECTOR_HARDWARE_VALUES_NO] =

{
        get_Zero_Frequency,                   /* function get clock for 0  hardware value */
        get_SOSCDIV1_CLK_Frequency,           /* function get clock for 1  hardware value */
        get_SIRCDIV1_CLK_Frequency,           /* function get clock for 2  hardware value */
        get_FIRCDIV1_CLK_Frequency,           /* function get clock for 3  hardware value */
        get_Zero_Frequency,                   /* function get clock for 4  hardware value */
        get_Zero_Frequency,                   /* function get clock for 5  hardware value */
#if defined(FEATURE_CLOCK_IP_HAS_SPLL_CLK)
        get_SPLLDIV1_CLK_Frequency,           /* function get clock for 6  hardware value */
#else
        get_Zero_Frequency,                   /* function get clock for 6  hardware value */
#endif
};

static const getFreqType freqTableSimFtm[SIM_FTM_SELECTOR_HARDWARE_VALUES_NO] =

{
        get_tclk0_ref_Frequency,              /* function get clock for 0  hardware value */
        get_tclk1_ref_Frequency,              /* function get clock for 1  hardware value */
        get_tclk2_ref_Frequency,              /* function get clock for 2  hardware value */
        get_Zero_Frequency,                   /* function get clock for 3  hardware value */
};

/* Clock stop constant section data */
#define MCU_STOP_SEC_CONST_UNSPECIFIED
#include "Mcu_MemMap.h"

/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/


/* Clock start initialized section data */
#define MCU_START_SEC_VAR_INIT_UNSPECIFIED
#include "Mcu_MemMap.h"

static extSignalFreq extSignalFreqEntries[EXT_SIGNALS_NO] =  {{TCLK0_REF_CLK,0U},{TCLK1_REF_CLK,0U},{TCLK2_REF_CLK,0U},{RTC_CLKIN,0U}};

/* Clock stop initialized section data */
#define MCU_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Mcu_MemMap.h"


#define MCU_START_SEC_VAR_INIT_32
#include "Mcu_MemMap.h"

/* External oscillators */
static uint32 sosc = FEATURE_CLOCK_IP_DEFAULT_SOSC_FREQUENCY;


#define MCU_STOP_SEC_VAR_INIT_32
#include "Mcu_MemMap.h"


/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/
/* Clock start section code */
#define MCU_START_SEC_CODE
#include "Mcu_MemMap.h"

/* Return 0 frequency for no input clock or no clock */
static uint32 get_Zero_Frequency(void) {

    return 0U;
}

/* Return LPO_128K_CLK frequency */
static uint32 get_LPO_128K_CLK_Frequency(void) {

    return FEATURE_CLOCK_IP_LPO_128K_FREQUENCY;
}

/* Return FIRC_CLK frequency */
static uint32 get_FIRC_CLK_Frequency(void) {

    return (uint32)FEATURE_CLOCK_IP_FIRC_FREQUENCY & enableClock[((IP_SCG->FIRCCSR & SCG_FIRCCSR_FIRCEN_MASK) >> SCG_FIRCCSR_FIRCEN_SHIFT)];
}

/* Return SOSC_CLK frequency */
static uint32 get_SOSC_CLK_Frequency(void) {

    return sosc & enableClock[((IP_SCG->SOSCCSR & SCG_SOSCCSR_SOSCEN_MASK) >> SCG_SOSCCSR_SOSCEN_SHIFT)];
}

/* Return SIRC_CLK frequency */
static uint32 get_SIRC_CLK_Frequency(void) {

    return (uint32)FEATURE_CLOCK_IP_SIRC_FREQUENCY & enableClock[((IP_SCG->SIRCCSR & SCG_SIRCCSR_SIRCEN_MASK) >> SCG_SIRCCSR_SIRCEN_SHIFT)];
}

#if defined(FEATURE_CLOCK_IP_HAS_SPLL_CLK)
/* Return SPLL_CLK frequency */
static uint32 get_SPLL_CLK_Frequency(void) {

    static uint32 spll_Freq = SPLL_FREQ;
    static uint32 spll_checksum = SPLL_CHECKSUM;
    if (spll_checksum != IP_SCG->SPLLCFG)
    {
        spll_checksum = IP_SCG->SPLLCFG;
        (void)spll_checksum;
        spll_Freq = PLL_VCO(IP_SCG);
        spll_Freq &= enableClock[((IP_SCG->SPLLCSR & SCG_SPLLCSR_SPLLEN_MASK) >> SCG_SPLLCSR_SPLLEN_SHIFT)];
    }

    return (((((IP_SCG->SPLLCSR & SCG_SPLLCSR_SPLLVLD_MASK) >> SCG_SPLLCSR_SPLLVLD_SHIFT)) != 0U )? spll_Freq : 0U);
}
#endif

/* Return SIRCDIV1_CLK frequency */
static uint32 get_SIRCDIV1_CLK_Frequency(void) {

    uint32 divValue = dividerMappingValue[((IP_SCG->SIRCDIV & SCG_SIRCDIV_SIRCDIV1_MASK) >> SCG_SIRCDIV_SIRCDIV1_SHIFT)];
    return (divValue != 0U) ? (get_SIRC_CLK_Frequency() / divValue) : 0U;
}

/* Return SIRCDIV2_CLK frequency */
static uint32 get_SIRCDIV2_CLK_Frequency(void) {

    uint32 divValue = dividerMappingValue[((IP_SCG->SIRCDIV & SCG_SIRCDIV_SIRCDIV2_MASK) >> SCG_SIRCDIV_SIRCDIV2_SHIFT)];
    return (divValue != 0U) ? (get_SIRC_CLK_Frequency() / divValue) : 0U;
}

/* Return FIRCDIV1_CLK frequency */
static uint32 get_FIRCDIV1_CLK_Frequency(void) {

    uint32 divValue = dividerMappingValue[((IP_SCG->FIRCDIV & SCG_FIRCDIV_FIRCDIV1_MASK) >> SCG_FIRCDIV_FIRCDIV1_SHIFT)];
    return (divValue != 0U) ? (get_FIRC_CLK_Frequency() / divValue) : 0U;
}

/* Return FIRCDIV2_CLK frequency */
static uint32 get_FIRCDIV2_CLK_Frequency(void) {

    uint32 divValue = dividerMappingValue[((IP_SCG->FIRCDIV & SCG_FIRCDIV_FIRCDIV2_MASK) >> SCG_FIRCDIV_FIRCDIV2_SHIFT)];
    return (divValue != 0U) ? (get_FIRC_CLK_Frequency() / divValue) : 0U;
}

/* Return SOSCDIV1_CLK frequency */
static uint32 get_SOSCDIV1_CLK_Frequency(void) {

    uint32 divValue = dividerMappingValue[((IP_SCG->SOSCDIV & SCG_SOSCDIV_SOSCDIV1_MASK) >> SCG_SOSCDIV_SOSCDIV1_SHIFT)];
    return (divValue != 0U) ? (get_SOSC_CLK_Frequency() / divValue) : 0U;
}

/* Return SOSCDIV2_CLK frequency */
static uint32 get_SOSCDIV2_CLK_Frequency(void) {

    uint32 divValue = dividerMappingValue[((IP_SCG->SOSCDIV & SCG_SOSCDIV_SOSCDIV2_MASK) >> SCG_SOSCDIV_SOSCDIV2_SHIFT)];
    return (divValue != 0U) ? (get_SOSC_CLK_Frequency() / divValue) : 0U;
}

#if defined(FEATURE_CLOCK_IP_HAS_SPLLDIV1_CLK)
/* Return SPLLDIV1_CLK frequency */
static uint32 get_SPLLDIV1_CLK_Frequency(void) {

    uint32 divValue = dividerMappingValue[((IP_SCG->SPLLDIV & SCG_SPLLDIV_SPLLDIV1_MASK) >> SCG_SPLLDIV_SPLLDIV1_SHIFT)];
    return (divValue != 0U) ? (get_SPLL_CLK_Frequency() / divValue) : 0U;
}
#endif

#if defined(FEATURE_CLOCK_IP_HAS_SPLLDIV2_CLK)
/* Return SPLLDIV2_CLK frequency */
static uint32 get_SPLLDIV2_CLK_Frequency(void) {

    uint32 divValue = dividerMappingValue[((IP_SCG->SPLLDIV & SCG_SPLLDIV_SPLLDIV2_MASK) >> SCG_SPLLDIV_SPLLDIV2_SHIFT)];
    return (divValue != 0U) ? (get_SPLL_CLK_Frequency() / divValue) : 0U;
}
#endif

/* Return LPO_32K_CLK frequency */
static uint32 get_LPO_32K_CLK_Frequency(void) {

    return (get_LPO_128K_CLK_Frequency() >> 2U) & enableGate[((IP_SIM->LPOCLKS & SIM_LPOCLKS_LPO32KCLKEN_MASK) >> SIM_LPOCLKS_LPO32KCLKEN_SHIFT)];
}

/* Return LPO_1K_CLK frequency */
static uint32 get_LPO_1K_CLK_Frequency(void) {

    return (get_LPO_128K_CLK_Frequency() >> 7U) & enableGate[((IP_SIM->LPOCLKS & SIM_LPOCLKS_LPO1KCLKEN_MASK) >> SIM_LPOCLKS_LPO1KCLKEN_SHIFT)];
}

/* Return TCLK0_REF_CLK frequency */
static uint32 get_tclk0_ref_Frequency(void) {

    return extSignalFreqEntries[0U].frequency;
}

/* Return TCLK1_REF_CLK frequency */
static uint32 get_tclk1_ref_Frequency(void) {

    return extSignalFreqEntries[1U].frequency;
}

/* Return TCLK2_REF_CLK frequency */
static uint32 get_tclk2_ref_Frequency(void) {

    return extSignalFreqEntries[2U].frequency;
}

/* Return RTC_CLKIN frequency */
static uint32 get_rtc_clkin_Frequency(void) {

    return extSignalFreqEntries[3U].frequency;
}

/* Return SCS_CLK frequency */
static uint32 get_SCS_CLK_Frequency(void) {

    static const getFreqType freqTableSCS[SCS_SELECTOR_HARDWARE_VALUES_NO] =
    {
        get_Zero_Frequency,                   /* function get clock for 0  hardware value */
        get_SOSC_CLK_Frequency,               /* function get clock for 1  hardware value */
        get_SIRC_CLK_Frequency,               /* function get clock for 2  hardware value */
        get_FIRC_CLK_Frequency,               /* function get clock for 3  hardware value */
        get_Zero_Frequency,                   /* function get clock for 4  hardware value */
        get_Zero_Frequency,                   /* function get clock for 5  hardware value */
    #if defined(FEATURE_CLOCK_IP_HAS_SPLL_CLK)
        get_SPLL_CLK_Frequency,               /* function get clock for 6  hardware value */
    #else
        get_Zero_Frequency,                   /* function get clock for 6  hardware value */
    #endif
    };

    return freqTableSCS[((IP_SCG->CSR & SCG_CSR_SCS_MASK) >> SCG_CSR_SCS_SHIFT)]();       /*  Selector value */
}

/* Return CORE_CLK frequency */
static uint32 get_CORE_CLK_Frequency(void) {

    return get_SCS_CLK_Frequency() / (((IP_SCG->CSR & SCG_CSR_DIVCORE_MASK) >> SCG_CSR_DIVCORE_SHIFT) + 1U);
}

/* Return SLOW_CLK frequency */
static uint32 get_BUS_CLK_Frequency(void) {

    return get_CORE_CLK_Frequency() / (((IP_SCG->CSR & SCG_CSR_DIVBUS_MASK) >> SCG_CSR_DIVBUS_SHIFT) + 1U);
}

/* Return SLOW_CLK frequency */
static uint32 get_SLOW_CLK_Frequency(void) {

    return get_CORE_CLK_Frequency() / (((IP_SCG->CSR & SCG_CSR_DIVSLOW_MASK) >> SCG_CSR_DIVSLOW_SHIFT) + 1U);
}

/* Return RTC_CLK frequency */
static uint32 get_RTC_CLK_Frequency(void) {
    
    static const getFreqType freqTableRtc[RTC_SELECTOR_HARDWARE_VALUES_NO] =
    {
        get_SOSCDIV1_CLK_Frequency,           /* function get clock for 0  hardware value */
        get_LPO_32K_CLK_Frequency,            /* function get clock for 1  hardware value */
        get_rtc_clkin_Frequency,              /* function get clock for 2  hardware value */
        get_FIRCDIV1_CLK_Frequency,           /* function get clock for 3  hardware value */
    };
    return freqTableRtc[((IP_SIM->LPOCLKS & SIM_LPOCLKS_RTCCLKSEL_MASK) >> SIM_LPOCLKS_RTCCLKSEL_SHIFT)]();       /*  Selector value */
}

/* Return LPO_CLK frequency */
static uint32 get_LPO_CLK_Frequency(void) {

    static const getFreqType freqTableLpo[LPO_SELECTOR_HARDWARE_VALUES_NO] =
    {
        get_LPO_128K_CLK_Frequency,           /* function get clock for 0  hardware value */
        get_Zero_Frequency,                   /* function get clock for 1  hardware value */
        get_LPO_32K_CLK_Frequency,            /* function get clock for 2  hardware value */
        get_LPO_1K_CLK_Frequency,             /* function get clock for 3  hardware value */
    };

    return freqTableLpo[((IP_SIM->LPOCLKS & SIM_LPOCLKS_LPOCLKSEL_MASK) >> SIM_LPOCLKS_LPOCLKSEL_SHIFT)]();       /*  Selector value */
}

/* Return SCG_CLKOUT_CL frequency */
static uint32 get_SCG_CLKOUT_CLK_Frequency(void) {

    static const getFreqType freqTableScg[SCG_SELECTOR_HARDWARE_VALUES_NO] =
    {
        get_SLOW_CLK_Frequency,               /* function get clock for 0  hardware value */
        get_SOSC_CLK_Frequency,               /* function get clock for 1  hardware value */
        get_SIRC_CLK_Frequency,               /* function get clock for 2  hardware value */
        get_FIRC_CLK_Frequency,               /* function get clock for 3  hardware value */
        get_Zero_Frequency,                   /* function get clock for 4  hardware value */
        get_Zero_Frequency,                   /* function get clock for 5  hardware value */
    #if defined(FEATURE_CLOCK_IP_HAS_SPLL_CLK)
        get_SPLL_CLK_Frequency,               /* function get clock for 6  hardware value */
    #else
        get_Zero_Frequency,                   /* function get clock for 6  hardware value */
    #endif
        get_Zero_Frequency,                   /* function get clock for 7  hardware value */
    };

    return freqTableScg[((IP_SCG->CLKOUTCNFG & SCG_CLKOUTCNFG_CLKOUTSEL_MASK) >> SCG_CLKOUTCNFG_CLKOUTSEL_SHIFT)]();       /*  Selector value */
}

/* Return FTM0_EXT_CLK frequency */
static uint32 get_FTM0_EXT_CLK_Frequency(void) {

    return freqTableSimFtm[((IP_SIM->FTMOPT0 & SIM_FTMOPT0_FTM0CLKSEL_MASK) >> SIM_FTMOPT0_FTM0CLKSEL_SHIFT)]();       /*  Selector value */
}

/* Return FTM1_EXT_CLK frequency */
static uint32 get_FTM1_EXT_CLK_Frequency(void) {

    return freqTableSimFtm[((IP_SIM->FTMOPT0 & SIM_FTMOPT0_FTM1CLKSEL_MASK) >> SIM_FTMOPT0_FTM1CLKSEL_SHIFT)]();       /*  Selector value */
}

#if defined(FEATURE_CLOCK_IP_HAS_FTM2_EXT_CLK)
/* Return FTM2_EXT_CLK frequency */
static uint32 get_FTM2_EXT_CLK_Frequency(void) {

    return freqTableSimFtm[((IP_SIM->FTMOPT0 & SIM_FTMOPT0_FTM2CLKSEL_MASK) >> SIM_FTMOPT0_FTM2CLKSEL_SHIFT)]();       /*  Selector value */
}
#endif

#if defined(FEATURE_CLOCK_IP_HAS_FTM3_EXT_CLK)
/* Return FTM3_EXT_CLK frequency */
static uint32 get_FTM3_EXT_CLK_Frequency(void) {

    return freqTableSimFtm[((IP_SIM->FTMOPT0 & SIM_FTMOPT0_FTM3CLKSEL_MASK) >> SIM_FTMOPT0_FTM3CLKSEL_SHIFT)]();       /*  Selector value */
}
#endif

#if defined(FEATURE_CLOCK_IP_HAS_FTM4_EXT_CLK)
/* Return FTM4_EXT_CLK frequency */
static uint32 get_FTM4_EXT_CLK_Frequency(void) {

    return freqTableSimFtm[((IP_SIM->FTMOPT0 & SIM_FTMOPT0_FTM4CLKSEL_MASK) >> SIM_FTMOPT0_FTM4CLKSEL_SHIFT)]();       /*  Selector value */
}
#endif

#if defined(FEATURE_CLOCK_IP_HAS_FTM5_EXT_CLK)
/* Return FTM5_EXT_CLK frequency */
static uint32 get_FTM5_EXT_CLK_Frequency(void) {

    return freqTableSimFtm[((IP_SIM->FTMOPT0 & SIM_FTMOPT0_FTM5CLKSEL_MASK) >> SIM_FTMOPT0_FTM5CLKSEL_SHIFT)]();       /*  Selector value */
}
#endif

#if defined(FEATURE_CLOCK_IP_HAS_FTM6_EXT_CLK)
/* Return FTM6_EXT_CLK frequency */
static uint32 get_FTM6_EXT_CLK_Frequency(void) {

    return freqTableSimFtm[((IP_SIM->FTMOPT0 & SIM_FTMOPT0_FTM6CLKSEL_MASK) >> SIM_FTMOPT0_FTM6CLKSEL_SHIFT)]();       /*  Selector value */
}
#endif

#if defined(FEATURE_CLOCK_IP_HAS_FTM7_EXT_CLK)
/* Return FTM7_EXT_CLK frequency */
static uint32 get_FTM7_EXT_CLK_Frequency(void) {

    return freqTableSimFtm[((IP_SIM->FTMOPT0 & SIM_FTMOPT0_FTM7CLKSEL_MASK) >> SIM_FTMOPT0_FTM7CLKSEL_SHIFT)]();       /*  Selector value */
}
#endif

/* Return ADC0_CLK frequency */
static uint32 get_ADC0_CLK_Frequency(void) {

    uint32 frequency;
    frequency  = freqTablePcs2[((IP_PCC->PCCn[59U] & PCC_PCCn_PCS_MASK) >> PCC_PCCn_PCS_SHIFT)](); /*  Selector value */
    frequency &= enableGate[((IP_PCC->PCCn[59U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}

#if defined(FEATURE_CLOCK_IP_HAS_ADC1_CLK)
/* Return ADC1_CLK frequency */
static uint32 get_ADC1_CLK_Frequency(void) {

    uint32 frequency;
    frequency  = freqTablePcs2[((IP_PCC->PCCn[39U] & PCC_PCCn_PCS_MASK) >> PCC_PCCn_PCS_SHIFT)](); /*  Selector value */
    frequency &= enableGate[((IP_PCC->PCCn[39U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}
#endif

/* Return CLKOUT0_CLK frequency */
static uint32 get_CLKOUT0_CLK_Frequency(void) {

    static const getFreqType freqTableClkOut[SIM_CHIPCTL_SELECTOR_HARDWARE_VALUES_NO] =
    {
        get_SCG_CLKOUT_CLK_Frequency,                    /* function get clock for 0  hardware value */
        get_Zero_Frequency,                              /* function get clock for 1  hardware value */
        get_SOSCDIV2_CLK_Frequency,                      /* function get clock for 2  hardware value */
        get_Zero_Frequency,                              /* function get clock for 3  hardware value */
        get_SIRCDIV2_CLK_Frequency,                      /* function get clock for 4  hardware value */
    #if defined(FEATURE_CLOCK_IP_HAS_QSPI_SFIF_CLK_HYP_PREMUX_CLK)
        get_QSPI_SFIF_CLK_HYP_PREMUX_CLK_Frequency,      /* function get clock for 5  hardware value */
    #else
        get_Zero_Frequency,                              /* function get clock for 5  hardware value */
    #endif
        get_FIRCDIV2_CLK_Frequency,                      /* function get clock for 6  hardware value */
        get_CORE_CLK_Frequency,                          /* function get clock for 7  hardware value */
    #if defined(FEATURE_CLOCK_IP_HAS_SPLL_CLK)
        get_SPLLDIV2_CLK_Frequency,                      /* function get clock for 8  hardware value */
    #else
        get_Zero_Frequency,                              /* function get clock for 8  hardware value */
    #endif
        get_BUS_CLK_Frequency,                           /* function get clock for 9  hardware value */
        get_LPO_128K_CLK_Frequency,                      /* function get clock for 10 hardware value */
    #if defined(FEATURE_CLOCK_IP_HAS_QSPI_CLK)
        get_QSPI_CLK_Frequency,                          /* function get clock for 11  hardware value */
    #else
        get_Zero_Frequency,                              /* function get clock for 11  hardware value */
    #endif
        get_LPO_CLK_Frequency,                           /* function get clock for 12 hardware value */
    #if defined(FEATURE_CLOCK_IP_HAS_QSPI_SFIF_CLK)
        get_QSPI_SFIF_CLK_Frequency,                     /* function get clock for 13 hardware value */
    #else
        get_Zero_Frequency,                              /* function get clock for 13  hardware value */
    #endif
        get_RTC_CLK_Frequency,                           /* function get clock for 14 hardware value */
    #if defined(FEATURE_CLOCK_IP_HAS_QSPI_2xSFIF_CLK)
        get_QSPI_2xSFIF_CLK_Frequency,                   /* function get clock for 15 hardware value */
    #else
        get_Zero_Frequency,                              /* function get clock for 15 hardware value */
    #endif
    };
    const uint32 enableDivider[2U] = {DISABLED,ENABLED};

    uint32 frequency = freqTableClkOut[((IP_SIM->CHIPCTL & SIM_CHIPCTL_CLKOUTSEL_MASK) >> SIM_CHIPCTL_CLKOUTSEL_SHIFT)]();       /*  Selector value */
    frequency &= enableDivider[((IP_SIM->CHIPCTL & SIM_CHIPCTL_CLKOUTEN_MASK) >> SIM_CHIPCTL_CLKOUTEN_SHIFT)];                           /*  Divider enable/disable */
    frequency /= (((IP_SIM->CHIPCTL & SIM_CHIPCTL_CLKOUTDIV_MASK) >> SIM_CHIPCTL_CLKOUTDIV_SHIFT) + 1U);                                 /*  Apply divider value */
    return frequency;
}

/* Return CMP0_CLK frequency */
static uint32 get_CMP0_CLK_Frequency(void) {
    uint32 frequency;
    frequency  = get_BUS_CLK_Frequency();
    frequency &= enableGate[((IP_PCC->PCCn[115] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}

#if defined(FEATURE_CLOCK_IP_HAS_CMU0_CLK)
/* Return CMU0_CLK frequency */
static uint32 get_CMU0_CLK_Frequency(void) {
    uint32 frequency;
    frequency  = get_BUS_CLK_Frequency();
    frequency &= enableGate[((IP_PCC->PCCn[62] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}
#endif

#if defined(FEATURE_CLOCK_IP_HAS_CMU1_CLK)
/* Return CMU1_CLK frequency */
static uint32 get_CMU1_CLK_Frequency(void) {
    uint32 frequency;
    frequency  = get_BUS_CLK_Frequency();
    frequency &= enableGate[((IP_PCC->PCCn[63] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}
#endif

/* Return CRC0_CLK frequency */
static uint32 get_CRC0_CLK_Frequency(void) {
    uint32 frequency;
    frequency  = get_BUS_CLK_Frequency();
    /* Get frequency after gate */
    frequency &= enableGate[((IP_PCC->PCCn[50] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}

/* Return DMA0_CLK frequency */
static uint32 get_DMA0_CLK_Frequency(void) {
    uint32 frequency;
    frequency  = get_CORE_CLK_Frequency();
    frequency &= enableGate[((IP_SIM->PLATCGC & SIM_PLATCGC_CGCDMA_MASK) >> SIM_PLATCGC_CGCDMA_SHIFT)];
    return frequency;
}

/* Return DMAMUX0_CLK frequency */
static uint32 get_DMAMUX0_CLK_Frequency(void) {
    uint32 frequency;
    frequency  = get_BUS_CLK_Frequency();
    frequency &= enableGate[((IP_PCC->PCCn[33] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}

/* Return EIM0_CLK frequency */
static uint32 get_EIM0_CLK_Frequency(void) {
    uint32 frequency;
    frequency  = get_CORE_CLK_Frequency();
    frequency &= enableGate[((IP_SIM->PLATCGC & SIM_PLATCGC_CGCEIM_MASK) >> SIM_PLATCGC_CGCEIM_SHIFT)];
    return frequency;
}

#if defined(FEATURE_CLOCK_IP_HAS_ENET_CLK)
/* Return ENET_CLK frequency */
static uint32 get_ENET_CLK_Frequency(void) {

    uint32 frequency;
    frequency  = freqTablePcs1[((IP_PCC->PCCn[121U] & PCC_PCCn_PCS_MASK) >> PCC_PCCn_PCS_SHIFT)](); /*  Selector value */
    uint32 divValue = ((IP_PCC->PCCn[121U] & PCC_PCCn_PCD_MASK) >> PCC_PCCn_PCD_SHIFT) + 1U;
    uint32 mulValue = ((IP_PCC->PCCn[121U] & PCC_PCCn_FRAC_MASK) >> PCC_PCCn_FRAC_SHIFT) + 1U;
    frequency &= enableGate[((IP_PCC->PCCn[121U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return ((frequency * mulValue)  / divValue);
}
#endif

/* Return ERM0_CLK frequency */
static uint32 get_ERM0_CLK_Frequency(void) {
    uint32 frequency;
    frequency  = get_CORE_CLK_Frequency();
    frequency &= enableGate[((IP_SIM->PLATCGC & SIM_PLATCGC_CGCERM_MASK) >> SIM_PLATCGC_CGCERM_SHIFT)];
    return frequency;
}

#if defined(FEATURE_CLOCK_IP_HAS_EWM0_CLK)
/* Return EWM0_CLK frequency */
static uint32 get_EWM0_CLK_Frequency(void) {
    uint32 frequency;
    frequency  = get_BUS_CLK_Frequency();
    frequency &= enableGate[((IP_PCC->PCCn[97U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}
#endif

/* Return FLEXCAN0_CLK frequency */
static uint32 get_FLEXCAN0_CLK_Frequency(void) {
    uint32 frequency;
    frequency  = get_CORE_CLK_Frequency();
    frequency &= enableGate[((IP_PCC->PCCn[36U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}

#if defined(FEATURE_CLOCK_IP_HAS_FLEXCAN1_CLK)
/* Return FLEXCAN1_CLK frequency */
static uint32 get_FLEXCAN1_CLK_Frequency(void) {
    uint32 frequency;
    frequency  = get_CORE_CLK_Frequency();
    frequency &= enableGate[((IP_PCC->PCCn[37U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}
#endif

#if defined(FEATURE_CLOCK_IP_HAS_FLEXCAN2_CLK)
/* Return FLEXCAN2_CLK frequency */
static uint32 get_FLEXCAN2_CLK_Frequency(void) {
    uint32 frequency;
    frequency  = get_CORE_CLK_Frequency();
    frequency &= enableGate[((IP_PCC->PCCn[43U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}
#endif

/* Return FTM0_CLK frequency */
static uint32 get_FTM0_CLK_Frequency(void) {

    uint32 frequency;
    if(((IP_PCC->PCCn[56U] & PCC_PCCn_PCS_MASK) >> PCC_PCCn_PCS_SHIFT) != 0U)
    {
        frequency  = freqTablePcs1[((IP_PCC->PCCn[56U] & PCC_PCCn_PCS_MASK) >> PCC_PCCn_PCS_SHIFT)](); /*  Selector value */
    }
    else
    {
        frequency  = get_FTM0_EXT_CLK_Frequency();
    }
    frequency &= enableGate[((IP_PCC->PCCn[56U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}

/* Return FTM1_CLK frequency */
static uint32 get_FTM1_CLK_Frequency(void) {

    uint32 frequency;
    if(((IP_PCC->PCCn[57U] & PCC_PCCn_PCS_MASK) >> PCC_PCCn_PCS_SHIFT) != 0U)
    {
        frequency  = freqTablePcs1[((IP_PCC->PCCn[57U] & PCC_PCCn_PCS_MASK) >> PCC_PCCn_PCS_SHIFT)](); /*  Selector value */
    }
    else
    {
        frequency  = get_FTM1_EXT_CLK_Frequency();
    }
    frequency &= enableGate[((IP_PCC->PCCn[57U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}

#if defined(FEATURE_CLOCK_IP_HAS_FTM2_CLK)
/* Return FTM2_CLK frequency */
static uint32 get_FTM2_CLK_Frequency(void) {

    uint32 frequency;
    if(((IP_PCC->PCCn[58U] & PCC_PCCn_PCS_MASK) >> PCC_PCCn_PCS_SHIFT) != 0U)
    {
        frequency  = freqTablePcs1[((IP_PCC->PCCn[58U] & PCC_PCCn_PCS_MASK) >> PCC_PCCn_PCS_SHIFT)](); /*  Selector value */
    }
    else
    {
        frequency  = get_FTM2_EXT_CLK_Frequency();
    }
    frequency &= enableGate[((IP_PCC->PCCn[58U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}
#endif

#if defined(FEATURE_CLOCK_IP_HAS_FTM3_CLK)
/* Return FTM3_CLK frequency */
static uint32 get_FTM3_CLK_Frequency(void) {

    uint32 frequency;
    if(((IP_PCC->PCCn[38U] & PCC_PCCn_PCS_MASK) >> PCC_PCCn_PCS_SHIFT) != 0U)
    {
        frequency  = freqTablePcs1[((IP_PCC->PCCn[38U] & PCC_PCCn_PCS_MASK) >> PCC_PCCn_PCS_SHIFT)](); /*  Selector value */
    }
    else
    {
        frequency  = get_FTM3_EXT_CLK_Frequency();
    }
    frequency &= enableGate[((IP_PCC->PCCn[38U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}
#endif

#if defined(FEATURE_CLOCK_IP_HAS_FTM4_CLK)
/* Return FTM5_CLK frequency */
static uint32 get_FTM4_CLK_Frequency(void) {

    uint32 frequency;
    if(((IP_PCC->PCCn[110U] & PCC_PCCn_PCS_MASK) >> PCC_PCCn_PCS_SHIFT) != 0U)
    {
        frequency  = freqTablePcs1[((IP_PCC->PCCn[110U] & PCC_PCCn_PCS_MASK) >> PCC_PCCn_PCS_SHIFT)](); /*  Selector value */
    }
    else
    {
        frequency  = get_FTM4_EXT_CLK_Frequency();
    }
    frequency &= enableGate[((IP_PCC->PCCn[110U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}
#endif

#if defined(FEATURE_CLOCK_IP_HAS_FTM5_CLK)
/* Return FTM5_CLK frequency */
static uint32 get_FTM5_CLK_Frequency(void) {

    uint32 frequency;
    if(((IP_PCC->PCCn[111U] & PCC_PCCn_PCS_MASK) >> PCC_PCCn_PCS_SHIFT) != 0U)
    {
        frequency  = freqTablePcs1[((IP_PCC->PCCn[111U] & PCC_PCCn_PCS_MASK) >> PCC_PCCn_PCS_SHIFT)](); /*  Selector value */
    }
    else
    {
        frequency  = get_FTM5_EXT_CLK_Frequency();
    }
    frequency &= enableGate[((IP_PCC->PCCn[111U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}
#endif

#if defined(FEATURE_CLOCK_IP_HAS_FTM6_CLK)
/* Return FTM6_CLK frequency */
static uint32 get_FTM6_CLK_Frequency(void) {

    uint32 frequency;
    if(((IP_PCC->PCCn[112U] & PCC_PCCn_PCS_MASK) >> PCC_PCCn_PCS_SHIFT) != 0U)
    {
        frequency  = freqTablePcs1[((IP_PCC->PCCn[112U] & PCC_PCCn_PCS_MASK) >> PCC_PCCn_PCS_SHIFT)](); /*  Selector value */
    }
    else
    {
        frequency  = get_FTM6_EXT_CLK_Frequency();
    }
    frequency &= enableGate[((IP_PCC->PCCn[112U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}
#endif

#if defined(FEATURE_CLOCK_IP_HAS_FTM7_CLK)
/* Return FTM7_CLK frequency */
static uint32 get_FTM7_CLK_Frequency(void) {

    uint32 frequency;
    if(((IP_PCC->PCCn[113U] & PCC_PCCn_PCS_MASK) >> PCC_PCCn_PCS_SHIFT) != 0U)
    {
        frequency  = freqTablePcs1[((IP_PCC->PCCn[113U] & PCC_PCCn_PCS_MASK) >> PCC_PCCn_PCS_SHIFT)](); /*  Selector value */
    }
    else
    {
        frequency  = get_FTM7_EXT_CLK_Frequency();
    }
    frequency &= enableGate[((IP_PCC->PCCn[113U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}
#endif

#if defined(FEATURE_CLOCK_IP_HAS_GPIO0_CLK)
/* Return GPIO0_CLK frequency */
static uint32 get_GPIO0_CLK_Frequency(void) {

    uint32 frequency;
    frequency  = get_CORE_CLK_Frequency();
    frequency &= enableGate[((IP_SIM->PLATCGC & SIM_PLATCGC_CGCGPIO_MASK) >> SIM_PLATCGC_CGCGPIO_SHIFT)];
    return frequency;
}
#endif

/* Return FlexIO_CLK frequency */
static uint32 get_FlexIO_CLK_Frequency(void) {

    uint32 frequency;
    frequency  = freqTablePcs2[((IP_PCC->PCCn[90U] & PCC_PCCn_PCS_MASK) >> PCC_PCCn_PCS_SHIFT)](); /*  Selector value */
    frequency &= enableGate[((IP_PCC->PCCn[90U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}

#if defined(FEATURE_CLOCK_IP_HAS_FTFC_CLK)
/* Return FTFC_CLK frequency */
static uint32 get_FTFC_CLK_Frequency(void) {

    uint32 frequency;
    frequency  = get_SLOW_CLK_Frequency();
    frequency &= enableGate[((IP_PCC->PCCn[32U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}
#endif

#if defined(FEATURE_CLOCK_IP_HAS_FTFM_CLK)
/* Return FTFM_CLK frequency */
static uint32 get_FTFM_CLK_Frequency(void) {

    uint32 frequency;
    frequency  = get_SLOW_CLK_Frequency();
    frequency &= enableGate[((IP_PCC->PCCn[32U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}
#endif

/* Return LPI2C0_CLK frequency */
static uint32 get_LPI2C0_CLK_Frequency(void) {

    uint32 frequency;
    frequency  = freqTablePcs2[((IP_PCC->PCCn[102U] & PCC_PCCn_PCS_MASK) >> PCC_PCCn_PCS_SHIFT)](); /*  Selector value */
    frequency &= enableGate[((IP_PCC->PCCn[102U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}

#if defined(FEATURE_CLOCK_IP_HAS_LPI2C1_CLK)
/* Return LPI2C1_CLK frequency */
static uint32 get_LPI2C1_CLK_Frequency(void) {

    uint32 frequency;
    frequency  = freqTablePcs2[((IP_PCC->PCCn[103U] & PCC_PCCn_PCS_MASK) >> PCC_PCCn_PCS_SHIFT)](); /*  Selector value */
    frequency &= enableGate[((IP_PCC->PCCn[103U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}
#endif

/* Return LPIT0_CLK frequency */
static uint32 get_LPIT0_CLK_Frequency(void) {

    uint32 frequency;
    frequency  = freqTablePcs2[((IP_PCC->PCCn[55U] & PCC_PCCn_PCS_MASK) >> PCC_PCCn_PCS_SHIFT)](); /*  Selector value */
    frequency &= enableGate[((IP_PCC->PCCn[55U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}

/* Return LPSPI0_CLK frequency */
static uint32 get_LPSPI0_CLK_Frequency(void) {

    uint32 frequency;
    frequency  = freqTablePcs2[((IP_PCC->PCCn[44U] & PCC_PCCn_PCS_MASK) >> PCC_PCCn_PCS_SHIFT)](); /*  Selector value */
    frequency &= enableGate[((IP_PCC->PCCn[44U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}

/* Return LPSPI1_CLK frequency */
static uint32 get_LPSPI1_CLK_Frequency(void) {

    uint32 frequency;
    frequency  = freqTablePcs2[((IP_PCC->PCCn[45U] & PCC_PCCn_PCS_MASK) >> PCC_PCCn_PCS_SHIFT)](); /*  Selector value */
    frequency &= enableGate[((IP_PCC->PCCn[45U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}

#if defined(FEATURE_CLOCK_IP_HAS_LPSPI2_CLK)
/* Return LPSPI2_CLK frequency */
static uint32 get_LPSPI2_CLK_Frequency(void) {

    uint32 frequency;
    frequency  = freqTablePcs2[((IP_PCC->PCCn[45U] & PCC_PCCn_PCS_MASK) >> PCC_PCCn_PCS_SHIFT)](); /*  Selector value */
    frequency &= enableGate[((IP_PCC->PCCn[45U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}
#endif

/* Return LPTMR0_CLK frequency */
static uint32 get_LPTMR0_CLK_Frequency(void) {

    uint32 frequency = freqTablePcs2[((IP_PCC->PCCn[64U] & PCC_PCCn_PCS_MASK) >> PCC_PCCn_PCS_SHIFT)]();       /*  Selector value */
    uint32 divValue = ((IP_PCC->PCCn[64U] & PCC_PCCn_PCD_MASK) >> PCC_PCCn_PCD_SHIFT) + 1U;
    uint32 mulValue = ((IP_PCC->PCCn[64U] & PCC_PCCn_FRAC_MASK) >> PCC_PCCn_FRAC_SHIFT) + 1U;
    frequency &= enableGate[((IP_PCC->PCCn[64U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return ((frequency * mulValue)  / divValue);
}

/* Return LPUART0_CLK frequency */
static uint32 get_LPUART0_CLK_Frequency(void) {

    uint32 frequency;
    frequency  = freqTablePcs2[((IP_PCC->PCCn[106U] & PCC_PCCn_PCS_MASK) >> PCC_PCCn_PCS_SHIFT)](); /*  Selector value */
    frequency &= enableGate[((IP_PCC->PCCn[106U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}

/* Return LPUART1_CLK frequency */
static uint32 get_LPUART1_CLK_Frequency(void) {

    uint32 frequency;
    frequency  = freqTablePcs2[((IP_PCC->PCCn[107U] & PCC_PCCn_PCS_MASK) >> PCC_PCCn_PCS_SHIFT)](); /*  Selector value */
    frequency &= enableGate[((IP_PCC->PCCn[107U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}

#if defined(FEATURE_CLOCK_IP_HAS_LPUART2_CLK)
/* Return LPUART2_CLK frequency */
static uint32 get_LPUART2_CLK_Frequency(void) {

    uint32 frequency;
    frequency  = freqTablePcs2[((IP_PCC->PCCn[108U] & PCC_PCCn_PCS_MASK) >> PCC_PCCn_PCS_SHIFT)](); /*  Selector value */
    frequency &= enableGate[((IP_PCC->PCCn[108U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}
#endif

/* Return MPU0_CLK frequency */
static uint32 get_MPU0_CLK_Frequency(void) {
    uint32 frequency;
    frequency  = get_CORE_CLK_Frequency();
    frequency &= enableGate[((IP_SIM->PLATCGC & SIM_PLATCGC_CGCMPU_MASK) >> SIM_PLATCGC_CGCMPU_SHIFT)];
    return frequency;
}

/* Return MSCM0_CLK frequency */
static uint32 get_MSCM0_CLK_Frequency(void) {
    uint32 frequency;
    frequency  = get_CORE_CLK_Frequency();
    frequency &= enableGate[((IP_SIM->PLATCGC & SIM_PLATCGC_CGCMSCM_MASK) >> SIM_PLATCGC_CGCMSCM_SHIFT)];
    return frequency;
}

/* Return PDB0_CLK frequency */
static uint32 get_PDB0_CLK_Frequency(void) {
    uint32 frequency;
    frequency  = get_CORE_CLK_Frequency();
    frequency &= enableGate[((IP_PCC->PCCn[54U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}

#if defined(FEATURE_CLOCK_IP_HAS_PDB1_CLK)
/* Return PDB1_CLK frequency */
static uint32 get_PDB1_CLK_Frequency(void) {
    uint32 frequency;
    frequency  = get_CORE_CLK_Frequency();
    frequency &= enableGate[((IP_PCC->PCCn[49U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}
#endif

/* Return PORTA_CLK frequency */
static uint32 get_PORTA_CLK_Frequency(void) {
    uint32 frequency;
    frequency  = get_BUS_CLK_Frequency();
    frequency &= enableGate[((IP_PCC->PCCn[73U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}

/* Return PORTB_CLK frequency */
static uint32 get_PORTB_CLK_Frequency(void) {
    uint32 frequency;
    frequency  = get_BUS_CLK_Frequency();
    frequency &= enableGate[((IP_PCC->PCCn[74U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}

/* Return PORTC_CLK frequency */
static uint32 get_PORTC_CLK_Frequency(void) {
    uint32 frequency;
    frequency  = get_BUS_CLK_Frequency();
    frequency &= enableGate[((IP_PCC->PCCn[75U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}

/* Return PORTD_CLK frequency */
static uint32 get_PORTD_CLK_Frequency(void) {
    uint32 frequency;
    frequency  = get_BUS_CLK_Frequency();
    frequency &= enableGate[((IP_PCC->PCCn[76U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}

/* Return PORTE_CLK frequency */
static uint32 get_PORTE_CLK_Frequency(void) {
    uint32 frequency;
    frequency  = get_BUS_CLK_Frequency();
    frequency &= enableGate[((IP_PCC->PCCn[77U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}

#if defined(FEATURE_CLOCK_IP_HAS_QSPI_CLK)
#define QuadSPI_MCR_SCLKCFG_6_SHIFT   (30U)
#define QuadSPI_MCR_SCLKCFG_6_MASK   ((uint32)1U << QuadSPI_MCR_SCLKCFG_6_SHIFT)
/* Return QSPI_CLK frequency */
static uint32 get_QSPI_CLK_Frequency(void) {

    uint32 frequency;
    uint8 clkmodeselect;
    /* Check QSPI is enabled gate from PCC */
    if (enableGate[((IP_PCC->PCCn[118U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)] == ENABLED)
    {
        clkmodeselect = (uint8)((IP_QuadSPI->MCR & QuadSPI_MCR_SCLKCFG_6_MASK) >> QuadSPI_MCR_SCLKCFG_6_SHIFT);
        if(clkmodeselect  != 0U)
        {
            frequency  = get_BUS_CLK_Frequency();
        }
        else
        {
            frequency  = get_CORE_CLK_Frequency();
        }
    }
    else
    {
        frequency  = get_Zero_Frequency();
    }

    return frequency;
}
#endif

#if defined(FEATURE_CLOCK_IP_HAS_QSPI_SFIF_CLK_HYP_PREMUX_CLK)
#define QuadSPI_MCR_SCLKCFG_4_SHIFT   (28U)
#define QuadSPI_MCR_SCLKCFG_4_MASK   ((uint32)1U << QuadSPI_MCR_SCLKCFG_4_SHIFT)
#define QuadSPI_SOCCR_SOCCFG_DIV_SHIFT   (29U)
#define QuadSPI_SOCCR_SOCCFG_DIV_MASK   ((uint32)7U << QuadSPI_SOCCR_SOCCFG_DIV_SHIFT)
#define SIM_MISCTRL0_QSPI_CLK_SEL_GATE_SHIFT   (26U)
#define SIM_MISCTRL0_QSPI_CLK_SEL_GATE_MASK   ((uint32)1U << SIM_MISCTRL0_QSPI_CLK_SEL_GATE_SHIFT)
/* Return QSPI_SFIF_CLK_HYP_PREMUX_CLK frequency */
static uint32 get_QSPI_SFIF_CLK_HYP_PREMUX_CLK_Frequency(void) {

    uint32 frequency;
    uint8 clkmodeselect;
    uint8 div_config;
    /* Check QSPI is enabled gate from PCC */
    if (enableGate[((IP_PCC->PCCn[118U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)] == ENABLED)
    {
        div_config = (uint8)((IP_QuadSPI->SOCCR & QuadSPI_SOCCR_SOCCFG_DIV_MASK) >> QuadSPI_SOCCR_SOCCFG_DIV_SHIFT);
        clkmodeselect = (uint8)((IP_QuadSPI->MCR & QuadSPI_MCR_SCLKCFG_4_MASK) >> QuadSPI_MCR_SCLKCFG_4_SHIFT);
        if(clkmodeselect  != 0U)
        {
            frequency  = get_FIRCDIV1_CLK_Frequency() / ((div_config + (uint32)1U) * 2U) ;
        }
        else
        {   
            #if defined(FEATURE_CLOCK_IP_HAS_SPLLDIV1_CLK)
            frequency  = get_SPLLDIV1_CLK_Frequency() / ((div_config + (uint32)1U) * 2U) ;
            #else
            frequency  = get_Zero_Frequency() / ((div_config + 1U) * 2U) ;
            #endif
        }
        frequency &= enableGate[((IP_SIM->MISCTRL0 & SIM_MISCTRL0_QSPI_CLK_SEL_GATE_MASK) >> SIM_MISCTRL0_QSPI_CLK_SEL_GATE_SHIFT)];
    }
    else
    {
        frequency  = get_Zero_Frequency();
    }

    return frequency;
}
#endif

#if defined(FEATURE_CLOCK_IP_HAS_QSPI_SFIF_CLK)
#define QuadSPI_MCR_SCLKCFG_5_SHIFT   (29U)
#define QuadSPI_MCR_SCLKCFG_5_MASK   ((uint32)1U << QuadSPI_MCR_SCLKCFG_5_SHIFT)
/* Return QSPI_SFIF_CLK frequency */
static uint32 get_QSPI_SFIF_CLK_Frequency(void) {

    uint32 frequency;
    uint8 clkmodeselect;
    /* Check QSPI is enabled gate from PCC */
    if (enableGate[((IP_PCC->PCCn[118U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)] == ENABLED)
    {
        clkmodeselect = (uint8)((IP_QuadSPI->MCR & QuadSPI_MCR_SCLKCFG_5_MASK) >> QuadSPI_MCR_SCLKCFG_5_SHIFT);
        if(clkmodeselect  != 0U)
        {
            frequency  = get_QSPI_SFIF_CLK_HYP_PREMUX_CLK_Frequency();
        }
        else
        {
            frequency  = get_QSPI_SFIF_CLK_HYP_PREMUX_CLK_Frequency() * 2U;
        }
    }
    else
    {
        frequency  = get_Zero_Frequency();
    }

    return frequency;
}
#endif

#if defined(FEATURE_CLOCK_IP_HAS_QSPI_2xSFIF_CLK)
/* Return QSPI_2xSFIF_CLK frequency */
static uint32 get_QSPI_2xSFIF_CLK_Frequency(void) {

    uint32 frequency;
    uint8 clkmodeselect;
    /* Check QSPI is enabled gate from PCC */
    if (enableGate[((IP_PCC->PCCn[118U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)] == ENABLED)
    {
        clkmodeselect = (uint8)((IP_QuadSPI->MCR & QuadSPI_MCR_SCLKCFG_5_MASK) >> QuadSPI_MCR_SCLKCFG_5_SHIFT);
        if(clkmodeselect  != 0U)
        {
            frequency  =  get_QSPI_SFIF_CLK_HYP_PREMUX_CLK_Frequency() * 2U;
        }
        else
        {
            frequency  = get_Zero_Frequency();
        }
    }
    else
    {
        frequency  = get_Zero_Frequency();
    }

    return frequency;
}
#endif

/* Return RTC0_CLK frequency */
static uint32 get_RTC0_CLK_Frequency(void) {
    uint32 frequency;
    frequency  = get_BUS_CLK_Frequency();
    frequency &= enableGate[((IP_PCC->PCCn[61U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}

#if defined(FEATURE_CLOCK_IP_HAS_SAI0_CLK)
/* Return SAI0_CLK frequency */
static uint32 get_SAI0_CLK_Frequency(void) {

    uint32 frequency;
    frequency  = get_BUS_CLK_Frequency();
    frequency &= enableGate[((IP_PCC->PCCn[84U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}
#endif

#if defined(FEATURE_CLOCK_IP_HAS_SAI1_CLK)
/* Return SAI1_CLK frequency */
static uint32 get_SAI1_CLK_Frequency(void) {

    uint32 frequency;
    frequency  = get_BUS_CLK_Frequency();
    frequency &= enableGate[((IP_PCC->PCCn[85U] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT)];
    return frequency;
}
#endif

#if defined(FEATURE_CLOCK_IP_HAS_TRACE_CLK)
/* Return TRACE_CLK frequency */
static uint32 get_TRACE_CLK_Frequency(void) {

    uint32 frequency;
    frequency  = get_CORE_CLK_Frequency();
    frequency &= enableGate[((IP_SIM->CLKDIV4 & SIM_CLKDIV4_TRACEDIVEN_MASK) >> SIM_CLKDIV4_TRACEDIVEN_SHIFT)];
    uint32 divValue = ((IP_SIM->CLKDIV4 & SIM_CLKDIV4_TRACEDIV_MASK) >> SIM_CLKDIV4_TRACEDIV_SHIFT) + 1U;
    uint32 mulValue = ((IP_SIM->CLKDIV4 & SIM_CLKDIV4_TRACEFRAC_MASK) >> SIM_CLKDIV4_TRACEFRAC_SHIFT) + 1U;
    return ((frequency * mulValue)  / divValue);
}
#endif

#if defined(FEATURE_CLOCK_IP_HAS_SPLL_CLK)
/* Return PLL_VCO frequency */
static uint32 PLL_VCO(SCG_Type const *base)
{
    uint32 fin, prediv, mul, fout, var1, var2;
    #if (defined (CLOCK_IP_S32K142W) || defined(CLOCK_IP_S32K144W))
    if ((IP_SCG->SPLLCFG & SCG_SPLLCFG_SOURCE_MASK) == 0U)
    {
        fin  = get_SOSC_CLK_Frequency();
    }
    else
    {
        fin  = get_FIRC_CLK_Frequency();
    }
    #else
    fin  = get_SOSC_CLK_Frequency();                                                                       /* input freq */
    #endif
    prediv = (((base->SPLLCFG & SCG_SPLLCFG_PREDIV_MASK) >> SCG_SPLLCFG_PREDIV_SHIFT) + 1U) << 1U;         /* prediv * 2 */
    mul = (((base->SPLLCFG & SCG_SPLLCFG_MULT_MASK) >> SCG_SPLLCFG_MULT_SHIFT) + 16U);                     /* mfi */

    var1 = mul / prediv;                     /* mfi divide by (prediv multiply by 2); */
    var2 = mul - (var1 * prediv);            /* mfi minus aux1 multiply by (prediv multiply by 2); */

    fout = var1 * fin;                       /* aux1 multiply by fin */
    fout += (fin * var2) / prediv ;          /* fin divide by (prediv multiply by 2) multiply by var2; */

    return fout;
}
#endif

/* Set frequency for External Oscillator clock */
void SetExternalOscillatorFrequency(Clock_Ip_NameType extOscName, uint32 frequency)
{
    (void)extOscName;
    sosc = frequency;
}

/* Set frequency for External Signal clock */
void SetExternalSignalFrequency(Clock_Ip_NameType signalName, uint32 frequency)
{
    uint32 i;
    for (i = 0U; i < EXT_SIGNALS_NO; i++)
    {
        if (signalName == extSignalFreqEntries[i].name)
        {
            extSignalFreqEntries[i].frequency = frequency;
            break;
        }
    }
}

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

uint32 GetFreq(Clock_Ip_NameType clockName)
{

    static const getFreqType freqTable[CLOCK_NAMES_NO] =
    {
        get_Zero_Frequency,                   /* CLOCK_IS_OFF */
        get_LPO_128K_CLK_Frequency,           /* LPO_128K_CLK */
        get_SIRC_CLK_Frequency,               /* SIRC_CLK */
        get_Zero_Frequency,                   /* SIRC_VLP_CLK */
        get_Zero_Frequency,                   /* SIRC_STOP_CLK */
        get_FIRC_CLK_Frequency,               /* FIRC_CLK */
        get_Zero_Frequency,                   /* FIRC_VLP_CLK */
        get_Zero_Frequency,                   /* FIRC_STOP_CLK */
        get_SOSC_CLK_Frequency,               /* SOSC_CLK */
    #if defined(FEATURE_CLOCK_IP_HAS_SPLL_CLK)
        get_SPLL_CLK_Frequency,               /* SPLL_CLK */
    #endif
        get_SIRCDIV1_CLK_Frequency,           /* SIRCDIV1_CLK */
        get_SIRCDIV2_CLK_Frequency,           /* SIRCDIV2_CLK */
        get_FIRCDIV1_CLK_Frequency,           /* FIRCDIV1_CLK */
        get_FIRCDIV2_CLK_Frequency,           /* FIRCDIV2_CLK */
        get_SOSCDIV1_CLK_Frequency,           /* SOSCDIV1_CLK */
        get_SOSCDIV2_CLK_Frequency,           /* SOSCDIV2_CLK */
    #if defined(FEATURE_CLOCK_IP_HAS_SPLLDIV1_CLK)
        get_SPLLDIV1_CLK_Frequency,           /* SPLLDIV1_CLK */
    #endif
    #if defined(FEATURE_CLOCK_IP_HAS_SPLLDIV2_CLK)
        get_SPLLDIV2_CLK_Frequency,           /* SPLLDIV2_CLK */
    #endif
        get_LPO_32K_CLK_Frequency,            /* LPO_32K_CLK */
        get_LPO_1K_CLK_Frequency,             /* LPO_1K_CLK */
        get_tclk0_ref_Frequency,              /* tclk0_ref */
        get_tclk1_ref_Frequency,              /* tclk1_ref */
        get_tclk2_ref_Frequency,              /* tclk2_ref */
        get_rtc_clkin_Frequency,              /* rtc_clkin */
        get_SCS_CLK_Frequency,                /* SCS_CLK */
        get_Zero_Frequency,                   /* SCS_RUN_CLK */
        get_Zero_Frequency,                   /* SCS_VLPR_CLK */
    #if defined(FEATURE_CLOCK_IP_HAS_SCS_HSRUN_CLK)
        get_Zero_Frequency,                   /* SCS_HSRUN_CLK */
    #endif
        get_CORE_CLK_Frequency,               /* CORE_CLK */
        get_Zero_Frequency,                   /* CORE_RUN_CLK */
        get_Zero_Frequency,                   /* CORE_VLPR_CLK */
    #if defined(FEATURE_CLOCK_IP_HAS_CORE_HSRUN_CLK)
        get_Zero_Frequency,                   /* CORE_HSRUN_CLK */
    #endif
        get_BUS_CLK_Frequency,                /* BUS_CLK */
        get_Zero_Frequency,                   /* BUS_RUN_CLK */
        get_Zero_Frequency,                   /* BUS_VLPR_CLK */
    #if defined(FEATURE_CLOCK_IP_HAS_BUS_HSRUN_CLK)
        get_Zero_Frequency,                   /* BUS_HSRUN_CLK */
    #endif
        get_SLOW_CLK_Frequency,               /* SLOW_CLK */
        get_Zero_Frequency,                   /* SLOW_RUN_CLK */
        get_Zero_Frequency,                   /* SLOW_VLPR_CLK */
    #if defined(FEATURE_CLOCK_IP_HAS_SLOW_HSRUN_CLK)
        get_Zero_Frequency,                   /* SLOW_HSRUN_CLK */
    #endif
        get_RTC_CLK_Frequency,                /* RTC_CLK */
        get_LPO_CLK_Frequency,                /* LPO_CLK */
        get_SCG_CLKOUT_CLK_Frequency,         /* SCG_CLKOUT_CLK */
        get_FTM0_EXT_CLK_Frequency,           /* FTM0_EXT_CLK */
        get_FTM1_EXT_CLK_Frequency,           /* FTM1_EXT_CLK */
    #if defined(FEATURE_CLOCK_IP_HAS_FTM2_EXT_CLK)
        get_FTM2_EXT_CLK_Frequency,           /* FTM2_EXT_CLK */
    #endif
    #if defined(FEATURE_CLOCK_IP_HAS_FTM3_EXT_CLK)
        get_FTM3_EXT_CLK_Frequency,           /* FTM3_EXT_CLK */
    #endif
    #if defined(FEATURE_CLOCK_IP_HAS_FTM4_EXT_CLK)
        get_FTM4_EXT_CLK_Frequency,           /* FTM0_EXT_CLK */
    #endif
    #if defined(FEATURE_CLOCK_IP_HAS_FTM5_EXT_CLK)
        get_FTM5_EXT_CLK_Frequency,           /* FTM1_EXT_CLK */
    #endif
    #if defined(FEATURE_CLOCK_IP_HAS_FTM6_EXT_CLK)
        get_FTM6_EXT_CLK_Frequency,           /* FTM2_EXT_CLK */
    #endif
    #if defined(FEATURE_CLOCK_IP_HAS_FTM7_EXT_CLK)
        get_FTM7_EXT_CLK_Frequency,           /* FTM3_EXT_CLK */
    #endif
        NULL_PTR,                             /* THE_LAST_PRODUCER_CLK */
        get_ADC0_CLK_Frequency,               /* ADC0_CLK */
    #if defined(FEATURE_CLOCK_IP_HAS_ADC1_CLK)
        get_ADC1_CLK_Frequency,               /* ADC1_CLK */
    #endif
        get_CLKOUT0_CLK_Frequency,            /* CLKOUT0_CLK */
        get_CMP0_CLK_Frequency,               /* CMP0_CLK */
    #if defined(FEATURE_CLOCK_IP_HAS_CMU0_CLK)
        get_CMU0_CLK_Frequency,               /* CMU0_CLK */
    #endif
    #if defined(FEATURE_CLOCK_IP_HAS_CMU1_CLK)
        get_CMU1_CLK_Frequency,               /* CMU1_CLK */
    #endif        
        get_CRC0_CLK_Frequency,               /* CRC0_CLK */
        get_DMA0_CLK_Frequency,               /* DMA0_CLK */
        get_DMAMUX0_CLK_Frequency,            /* DMAMUX0_CLK */
        get_EIM0_CLK_Frequency,               /* EIM0_CLK */
    #if defined(FEATURE_CLOCK_IP_HAS_ENET_CLK)
        get_ENET_CLK_Frequency,               /* ENET_CLK */
    #endif
        get_ERM0_CLK_Frequency,               /* ERM0_CLK */
    #if defined(FEATURE_CLOCK_IP_HAS_EWM0_CLK)
        get_EWM0_CLK_Frequency,                /* EWM0_CLK */
    #endif
    #if defined(FEATURE_CLOCK_IP_HAS_FIRC_MON1_CLK)
        get_FIRC_CLK_Frequency,               /* FIRC_MON1_CLK */
    #endif
    #if defined(FEATURE_CLOCK_IP_HAS_FIRC_MON2_CLK)
        get_FIRC_CLK_Frequency,               /* FIRC_MON2_CLK */
    #endif
        get_FLEXCAN0_CLK_Frequency,               /* FLEXCAN0_CLK */
    #if defined(FEATURE_CLOCK_IP_HAS_FLEXCAN1_CLK)
        get_FLEXCAN1_CLK_Frequency,               /* FLEXCAN1_CLK */
    #endif
    #if defined(FEATURE_CLOCK_IP_HAS_FLEXCAN2_CLK)
        get_FLEXCAN2_CLK_Frequency,               /* FLEXCAN2_CLK */
    #endif
        get_FlexIO_CLK_Frequency,             /* FlexIO_CLK */
    #if defined(FEATURE_CLOCK_IP_HAS_FTFC_CLK)
        get_FTFC_CLK_Frequency,               /* FTFC_CLK */
    #endif
    #if defined(FEATURE_CLOCK_IP_HAS_FTFM_CLK)
        get_FTFM_CLK_Frequency,               /* FTFM_CLK */
    #endif
        get_FTM0_CLK_Frequency,               /* FTM0_CLK */
        get_FTM1_CLK_Frequency,               /* FTM1_CLK */
    #if defined(FEATURE_CLOCK_IP_HAS_FTM2_CLK)
        get_FTM2_CLK_Frequency,               /* FTM2_CLK */
    #endif
    #if defined(FEATURE_CLOCK_IP_HAS_FTM3_CLK)
        get_FTM3_CLK_Frequency,               /* FTM3_CLK */
    #endif
    #if defined(FEATURE_CLOCK_IP_HAS_FTM4_CLK)
        get_FTM4_CLK_Frequency,               /* FTM4_CLK */
    #endif
    #if defined(FEATURE_CLOCK_IP_HAS_FTM5_CLK)
        get_FTM5_CLK_Frequency,               /* FTM5_CLK */
    #endif
    #if defined(FEATURE_CLOCK_IP_HAS_FTM6_CLK)
        get_FTM6_CLK_Frequency,               /* FTM6_CLK */
    #endif
    #if defined(FEATURE_CLOCK_IP_HAS_FTM7_CLK)
        get_FTM7_CLK_Frequency,               /* FTM7_CLK */
    #endif
    #if defined(FEATURE_CLOCK_IP_HAS_GPIO0_CLK)
        get_GPIO0_CLK_Frequency,               /* GPIO0_CLK */
    #endif
        get_LPI2C0_CLK_Frequency,             /* LPI2C0_CLK */
    #if defined(FEATURE_CLOCK_IP_HAS_LPI2C1_CLK)
        get_LPI2C1_CLK_Frequency,             /* LPI2C1_CLK */
    #endif
        get_LPIT0_CLK_Frequency,              /* LPIT0_CLK */
        get_LPSPI0_CLK_Frequency,             /* LPSPI0_CLK */
    #if defined(FEATURE_CLOCK_IP_HAS_LPSPI1_CLK)
        get_LPSPI1_CLK_Frequency,             /* LPSPI1_CLK */
    #endif
    #if defined(FEATURE_CLOCK_IP_HAS_LPSPI2_CLK)
        get_LPSPI2_CLK_Frequency,             /* LPSPI2_CLK */
    #endif        
        get_LPTMR0_CLK_Frequency,             /* LPTMR0_CLK */
        get_LPUART0_CLK_Frequency,            /* LPUART0_CLK */
        get_LPUART1_CLK_Frequency,            /* LPUART1_CLK */
    #if defined(FEATURE_CLOCK_IP_HAS_LPUART2_CLK)
        get_LPUART2_CLK_Frequency,            /* LPUART2_CLK */
    #endif        
        get_MPU0_CLK_Frequency,               /* MPU0_CLK */
        get_MSCM0_CLK_Frequency,              /* MSCM0_CLK */
        get_PDB0_CLK_Frequency,               /* PDB0_CLK */
    #if defined(FEATURE_CLOCK_IP_HAS_PDB1_CLK)
        get_PDB1_CLK_Frequency,               /* PDB1_CLK */
    #endif
        get_PORTA_CLK_Frequency,              /* PORTA_CLK */
        get_PORTB_CLK_Frequency,              /* PORTB_CLK */
        get_PORTC_CLK_Frequency,              /* PORTC_CLK */
        get_PORTD_CLK_Frequency,              /* PORTD_CLK */
        get_PORTE_CLK_Frequency,              /* PORTE_CLK */
    #if defined(FEATURE_CLOCK_IP_HAS_QSPI_CLK)
        get_QSPI_CLK_Frequency,               /* QSPI_CLK */
    #endif
    #if defined(FEATURE_CLOCK_IP_HAS_QSPI_SFIF_CLK_HYP_PREMUX_CLK)
        get_QSPI_SFIF_CLK_HYP_PREMUX_CLK_Frequency,                   /* QSPI_SFIF_CLK_HYP_PREMUX_CLK */
    #endif
    #if defined(FEATURE_CLOCK_IP_HAS_QSPI_SFIF_CLK)
        get_QSPI_SFIF_CLK_Frequency,                   /* QSPI_SFIF_CLK */
    #endif
    #if defined(FEATURE_CLOCK_IP_HAS_QSPI_2xSFIF_CLK)
        get_QSPI_2xSFIF_CLK_Frequency,                   /* QSPI_2xSFIF_CLK */
    #endif
        get_RTC0_CLK_Frequency,               /* RTC0_CLK */
    #if defined(FEATURE_CLOCK_IP_HAS_SAI0_CLK)
        get_SAI0_CLK_Frequency,               /* SAI0_CLK */
    #endif
    #if defined(FEATURE_CLOCK_IP_HAS_SAI1_CLK)
        get_SAI1_CLK_Frequency,               /* SAI1_CLK */
    #endif
    #if defined(FEATURE_CLOCK_IP_HAS_TRACE_CLK)
        get_TRACE_CLK_Frequency,              /* TRACE_CLK */
    #endif
    };

    return freqTable[clockName]();
}

/* Clock stop section code */
#define MCU_STOP_SEC_CODE
#include "Mcu_MemMap.h"

#endif /* (CLOCK_IP_GET_FREQUENCY_API == STD_ON) */
#endif /* CLOCK_IP_GET_FREQUENCY_API */


/*! @}*/

/*******************************************************************************
 * EOF
 ******************************************************************************/
