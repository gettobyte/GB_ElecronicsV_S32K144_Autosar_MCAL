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
*   @file       Clock_Ip_Specific.c
*   @version    1.0.0
*
*   @brief   CLOCK driver implementations.
*   @details CLOCK driver implementations.
*
*   @addtogroup CLOCK_DRIVER Clock Ip Driver
*   @{
*/
 



#include "Clock_Ip_Private.h"

#if (defined(CLOCK_IP_ENABLE_USER_MODE_SUPPORT))
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    #define USER_MODE_REG_PROT_ENABLED      (STD_ON)
    #include "RegLockMacros.h"
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */

/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CLOCK_IP_SPECIFIC_VENDOR_ID_C                      43
#define CLOCK_IP_SPECIFIC_AR_RELEASE_MAJOR_VERSION_C       4
#define CLOCK_IP_SPECIFIC_AR_RELEASE_MINOR_VERSION_C       4
#define CLOCK_IP_SPECIFIC_AR_RELEASE_REVISION_VERSION_C    0
#define CLOCK_IP_SPECIFIC_SW_MAJOR_VERSION_C               1
#define CLOCK_IP_SPECIFIC_SW_MINOR_VERSION_C               0
#define CLOCK_IP_SPECIFIC_SW_PATCH_VERSION_C               0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Clock_Ip_Specific.c file and Clock_Ip_Private.h file are of the same vendor */
#if (CLOCK_IP_SPECIFIC_VENDOR_ID_C != CLOCK_IP_PRIVATE_VENDOR_ID)
    #error "Clock_Ip_Specific.c and Clock_Ip_Private.h have different vendor ids"
#endif

/* Check if Clock_Ip_Specific.c file and Clock_Ip_Private.h file are of the same Autosar version */
#if ((CLOCK_IP_SPECIFIC_AR_RELEASE_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_SPECIFIC_AR_RELEASE_MINOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MINOR_VERSION) || \
     (CLOCK_IP_SPECIFIC_AR_RELEASE_REVISION_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Clock_Ip_Specific.c and Clock_Ip_Private.h are different"
#endif

/* Check if Clock_Ip_Specific.c file and Clock_Ip_Private.h file are of the same Software version */
#if ((CLOCK_IP_SPECIFIC_SW_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MAJOR_VERSION) || \
     (CLOCK_IP_SPECIFIC_SW_MINOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MINOR_VERSION) || \
     (CLOCK_IP_SPECIFIC_SW_PATCH_VERSION_C != CLOCK_IP_PRIVATE_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Clock_Ip_Specific.c and Clock_Ip_Private.h are different"
#endif

#if (defined(CLOCK_IP_ENABLE_USER_MODE_SUPPORT))
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    #ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if Clock_Ip_Specific.c file and RegLockMacros.h file are of the same Autosar version */
    #if ((CLOCK_IP_SPECIFIC_AR_RELEASE_MAJOR_VERSION_C    != REGLOCKMACROS_AR_RELEASE_MAJOR_VERSION) || \
        (CLOCK_IP_SPECIFIC_AR_RELEASE_MINOR_VERSION_C    != REGLOCKMACROS_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of Clock_Ip_Specific.c and RegLockMacros.h are different"
    #endif
    #endif
  #endif
#endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */


/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

#define SCS_SELECTOR_HARDWARE_VALUES_NO           7U
#define RUN_POWER_MODE_STATUS                     1U

#if (defined (CLOCK_IP_S32K118) || defined(CLOCK_IP_S32K116))

    #define SYS_OSC                       1U
    #define CMU                           1U
    #define SCS_RUN                       4U
    #define FIRCOSC                       4U
    #define DIVCORE_RUN                   5U
    #define DIVBUS_RUN                    7U
    #define DIVSLOW_RUN                   9U

#elif (defined (CLOCK_IP_S32K142W) || defined(CLOCK_IP_S32K144W))

    #define SYS_OSC                       1U
    #define SYS_PLL                       1U
    #define FIRCOSC                       4U
    #define SCS_RUN                       5U
    #define DIVCORE_RUN                   6U
    #define DIVBUS_RUN                    8U
    #define DIVSLOW_RUN                   10U

#elif (defined (CLOCK_IP_S32K142) || defined(CLOCK_IP_S32K144) || defined(CLOCK_IP_S32K146) || defined(CLOCK_IP_S32K148))

    #define SYS_OSC                       1U
    #define SYS_PLL                       1U
    #define FIRCOSC                       4U
    #define SCS_RUN                       5U
    #define DIVCORE_RUN                   6U
    #define SCS_HSRUN                     7U
    #define DIVCORE_HSRUN                 8U
    #define DIVBUS_RUN                    9U
    #define DIVBUS_HSRUN                  11U
    #define DIVSLOW_RUN                   12U
    #define DIVSLOW_HSRUN                 14U

#endif

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


#ifdef FEATURE_CLOCK_IP_HAS_FLASH_WAIT_STATES
/* Clock start ram section code */
#define MCU_START_SEC_RAMCODE
#include "Mcu_MemMap.h"

static void CodeInRam_SetFlashWaitStates(void);

/* Clock start ram section code */
#define MCU_STOP_SEC_RAMCODE
#include "Mcu_MemMap.h"

#endif /* FEATURE_CLOCK_IP_HAS_FLASH_WAIT_STATES */


/* Clock start initialized section data */
#define MCU_START_SEC_VAR_CLEARED_BOOLEAN
#include "Mcu_MemMap.h"

static boolean fircWasEnabledBeforeMcuInit;                 /* Firc clock was enabled before MCU initialization */

/* Clock stop initialized section data */
#define MCU_STOP_SEC_VAR_CLEARED_BOOLEAN
#include "Mcu_MemMap.h"


/* Clock start initialized section data */
#define MCU_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Mcu_MemMap.h"

static const Clock_Ip_ClockConfigType *config_clock;

#if defined(FEATURE_CLOCK_IP_HAS_SPLL_CLK)
static const pllCallback * spllClock;
#endif

static const extOscCallback *soscClock;
static const intOscCallback *fircClock;

#if defined(FEATURE_CLOCK_IP_HAS_FIRC_MON1_CLK) || defined(FEATURE_CLOCK_IP_HAS_FIRC_MON2_CLK)
static const clockMonitorCallback *cmuFircMonitor;
#endif
static const selectorCallback *scsRunClockSelector;

static const dividerCallback *coreRunClockDivider;
static const dividerCallback *busRunClockDivider;
static const dividerCallback *slowRunClockDivider;

static const Clock_Ip_IrcoscConfigType *fircConfig;
static const Clock_Ip_XoscConfigType *soscConfig;
#if defined(FEATURE_CLOCK_IP_HAS_SPLL_CLK)
static const Clock_Ip_PllConfigType *spllConfig;
#endif


#if defined(FEATURE_CLOCK_IP_HAS_FIRC_MON1_CLK) || defined(FEATURE_CLOCK_IP_HAS_FIRC_MON2_CLK)
const Clock_Ip_CmuConfigType *cmuFircMon1Config,*cmuFircMon2Config;
#endif

static const Clock_Ip_SelectorConfigType *scsConfig_Run_Mode, *scsConfig_Vlpr_Mode;

static const Clock_Ip_DividerConfigType *coreConfig_Run_Mode, *coreConfig_Vlpr_Mode, *busConfig_Run_Mode, *busConfig_Vlpr_Mode, *slowConfig_Run_Mode, *slowConfig_Vlpr_Mode;

#if defined(FEATURE_CLOCK_IP_HAS_SLOW_HSRUN_CLK)
static const selectorCallback *scsHsrunClockSelector;

static const dividerCallback *coreHsrunClockDivider;
static const dividerCallback *busHsrunClockDivider;
static const dividerCallback *slowHsrunClockDivider;
static const Clock_Ip_SelectorConfigType *scsConfig_Hsrun_Mode;
static const Clock_Ip_DividerConfigType *coreConfig_Hsrun_Mode, *busConfig_Hsrun_Mode, *slowConfig_Hsrun_Mode;
#endif


/* Clock stop initialized section data */
#define MCU_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Mcu_MemMap.h"


/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define MCU_START_SEC_CODE
#include "Mcu_MemMap.h"

static const Clock_Ip_IrcoscConfigType *getFircConfig(void);
static const Clock_Ip_XoscConfigType *getSoscConfig(void);
static const Clock_Ip_XoscConfigType *getSoscConfig(void);
#if defined(FEATURE_CLOCK_IP_HAS_SPLL_CLK)
static const Clock_Ip_PllConfigType *getSpllConfig(void);
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FIRC_MON1_CLK) || defined(FEATURE_CLOCK_IP_HAS_FIRC_MON2_CLK)
static const Clock_Ip_CmuConfigType *getCmuFircConfig(Clock_Ip_NameType name);
#endif
static const Clock_Ip_SelectorConfigType *getSelectorConfig(Clock_Ip_NameType name);
static const Clock_Ip_DividerConfigType *getCoreDividerConfig(Clock_Ip_NameType name);
static const Clock_Ip_DividerConfigType *getBusDividerConfig(Clock_Ip_NameType name);
static const Clock_Ip_DividerConfigType *getSlowDividerConfig(Clock_Ip_NameType name);

static void SetSimLpoclksRegister_TrustedCall(Clock_Ip_ClockConfigType const *config);
#if defined(FEATURE_CLOCK_IP_HAS_FIRC_MON1_CLK) || defined(FEATURE_CLOCK_IP_HAS_FIRC_MON2_CLK)
static void EnableCmuGate_TrustedCall(void);
#endif
#define MCU_STOP_SEC_CODE
#include "Mcu_MemMap.h"
/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/



#ifdef FEATURE_CLOCK_IP_HAS_RAM_WAIT_STATES

#define MCU_START_SEC_CODE_AC
#include "Mcu_MemMap.h"

static void PRAMC_SetRamIWS(void);

#define MCU_STOP_SEC_CODE_AC
#include "Mcu_MemMap.h"
#endif

#define MCU_START_SEC_CODE
#include "Mcu_MemMap.h"

#ifdef FEATURE_CLOCK_IP_HAS_RAM_WAIT_STATES
void SetRamWaitStates(void)
{
#ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    OsIf_Trusted_Call(PRAMC_SetRamIWS);
  #else
    PRAMC_SetRamIWS();
  #endif
#else
  PRAMC_SetRamIWS();
#endif
}
#endif

#ifdef FEATURE_CLOCK_IP_HAS_FLASH_WAIT_STATES
void FLASH_SetFlashIWS(void);
void SetFlashWaitStates(void)
{
    FLASH_SetFlashIWS();
}
#endif


/* Configure the specific modules like eMios */
void SpecificPeripheralClockInitialization(Clock_IP_SpecificPeriphConfigType const * config)
{
    (void)config;
}

void DisableSafeClock(Clock_Ip_ClockConfigType const * config)
{
    uint32 i;
    boolean fircConfigFound = FALSE;
    
    if (config != NULL_PTR)
    {
        for (i = 0U; i < config_clock->ircoscsCount; i++)
        {
            if (config_clock->ircoscs[i].name == FIRC_CLK)
            {
                fircConfigFound = TRUE;
                if (config_clock->ircoscs[i].enable == FALSE)
                {
                    /* Disable FIRC according to configuration */
                    intOscCallbacks[ircoscCallbackIndex[FIRCOSC]].Disable(FIRC_CLK);
                }
                break;
            }
        }
    }

    if ((fircConfigFound == FALSE) && (fircWasEnabledBeforeMcuInit == FALSE))
    {
        /* Disable FIRC according to configuration */
        intOscCallbacks[ircoscCallbackIndex[FIRCOSC]].Disable(FIRC_CLK);
    }
}

static void SetFircToResetValue_TrustedCall(void)
{
        /* Range is 48Mhz. */
        IP_SCG->FIRCCFG = SCG_FIRCCFG_RANGE(0U);
        
        /* Enable clock, regulator is enabled. */
        IP_SCG->FIRCCSR |= (SCG_FIRCCSR_FIRCEN(1U) | SCG_FIRCCSR_FIRCREGOFF(0U));      
}

static void SetSimLpoclksRegister_TrustedCall(Clock_Ip_ClockConfigType const *config)
{
    uint32 SimLpoValue = 3U; /* Reset value of SIM_LPOCLKS register */
    uint32 i;

    /* The LPOCLKS register is a write-once register so configuration will be written here*/

    for (i = 0U; i < config->selectorsCount; i++)
    {
        /* Selector for RTC_CLK */
        if (RTC_CLK == config->selectors[i].name)
        {
            SimLpoValue |= ((uint32)(selectorEntry_hardwareValue[config->selectors[i].value]) << SIM_LPOCLKS_RTCCLKSEL_SHIFT);
        }

         /* Selector for LPO_CLK */
        if (LPO_CLK == config->selectors[i].name)
        {
            SimLpoValue |= ((uint32)(selectorEntryPCS_hardwareValue[config->selectors[i].value]) << SIM_LPOCLKS_LPOCLKSEL_SHIFT);
        }
    }
   
    for (i = 0U; i < config->gatesCount; i++)    /* Set clock gates that are under clock control. */
    {
        /* Gate for LPO_32K_CLK */
        if (LPO_32K_CLK == config->gates[i].name)
        {
             SimLpoValue |= ((uint32)(config->gates[i].enable) << SIM_LPOCLKS_LPO32KCLKEN_SHIFT);
        }

         /* Gate for LPO_1K_CLK */
        if (LPO_1K_CLK == config->gates[i].name)
        {
            SimLpoValue |= ((uint32)(config->gates[i].enable) << SIM_LPOCLKS_LPO1KCLKEN_SHIFT);
        }
    }

    IP_SIM->LPOCLKS = SimLpoValue;
}

#if defined(FEATURE_CLOCK_IP_HAS_FIRC_MON1_CLK) || defined(FEATURE_CLOCK_IP_HAS_FIRC_MON2_CLK)
static void EnableCmuGate_TrustedCall(void)
{
    uint32 regValue;

    regValue = IP_PCC->PCCn[clockFeatures[CMU0_CLK][GATE_INDEX]];
    regValue &= ~PCC_PCCn_CGC_MASK;
    regValue |= PCC_PCCn_CGC_MASK;
    IP_PCC->PCCn[clockFeatures[CMU0_CLK][GATE_INDEX]] = regValue;

    regValue = IP_PCC->PCCn[clockFeatures[CMU1_CLK][GATE_INDEX]];
    regValue &= ~PCC_PCCn_CGC_MASK;
    regValue |= PCC_PCCn_CGC_MASK;
    IP_PCC->PCCn[clockFeatures[CMU1_CLK][GATE_INDEX]] = regValue;
}
#endif

void SpecificPlatformInitClock(Clock_Ip_ClockConfigType const * config)
{
    boolean TimeoutOccurred = FALSE;
    uint32 StartTime;
    uint32 ElapsedTime;
    uint32 TimeoutTicks;
    uint32 IrcoscStatus;

    config_clock = config;
    
    (void)RUN_POWER_MODE_STATUS;
    
    /* Clocks cannot be configured while the chip is in other mode than RUN_MODE */
    CLOCK_DEV_ASSERT(RUN_POWER_MODE_STATUS == ((IP_SMC->PMSTAT & SMC_PMSTAT_PMSTAT_MASK) >> SMC_PMSTAT_PMSTAT_SHIFT));
    
    /* Check whether FIRC is disabled, enable it in this case. */
    if ((IP_SCG->FIRCCSR & SCG_FIRCCSR_FIRCEN_MASK) == 0U) 
    {
        fircWasEnabledBeforeMcuInit = FALSE;
        
        #ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
          #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
            OsIf_Trusted_Call(SetFircToResetValue_TrustedCall);
          #else
            SetFircToResetValue_TrustedCall();
          #endif
        #endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */

        ClockStartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_TIMEOUT_VALUE_US);
        /* Wait until ircosc is locked */
        do
        {
            IrcoscStatus = (((IP_SCG->FIRCCSR & SCG_FIRCCSR_FIRCVLD_MASK) >> SCG_FIRCCSR_FIRCVLD_SHIFT));
            TimeoutOccurred = ClockTimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
        }
        while ((IrcoscStatus == 0U) && (FALSE == TimeoutOccurred));

        if (FALSE != TimeoutOccurred)
        {
            /* Report timeout error */
            ReportClockErrors(CLOCK_IP_REPORT_TIMEOUT_ERROR, FIRC_CLK);
        }
    }
    else
    {
        fircWasEnabledBeforeMcuInit = TRUE;
    }
        

    #ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
        #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
            OsIf_Trusted_Call1param(SetSimLpoclksRegister_TrustedCall,(config));
        #else
            SetSimLpoclksRegister_TrustedCall(config);
        #endif
    #endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */

    #if defined(FEATURE_CLOCK_IP_HAS_FIRC_MON1_CLK) || defined(FEATURE_CLOCK_IP_HAS_FIRC_MON2_CLK)
        #ifdef CLOCK_IP_ENABLE_USER_MODE_SUPPORT
            #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
                OsIf_Trusted_Call(EnableCmuGate_TrustedCall);
            #else
                EnableCmuGate_TrustedCall();
            #endif
        #endif /* CLOCK_IP_ENABLE_USER_MODE_SUPPORT */
    #endif

}

/**
* @brief            This function will get current configuration of FIRC.
*/
static const Clock_Ip_IrcoscConfigType *getFircConfig(void)
{
    uint32 i;

    const Clock_Ip_IrcoscConfigType *returnValue = NULL_PTR;
    static Clock_Ip_IrcoscConfigType fircConfiguration;

    if (config_clock != NULL_PTR)
    {
        for (i = 0U; i < config_clock->ircoscsCount; i++)
        {
            if (config_clock->ircoscs[i].name == FIRC_CLK)
            {
                returnValue = &config_clock->ircoscs[i];
                break;
            }
        }
    }

    /* Element is not under mcu control */
    if (returnValue == NULL_PTR)
    {
        returnValue = &fircConfiguration;
        fircConfiguration.name = FIRC_CLK;
        fircConfiguration.enable = (uint16)(IP_SCG->FIRCCSR & SCG_FIRCCSR_FIRCEN_MASK) >> SCG_FIRCCSR_FIRCEN_SHIFT;
        fircConfiguration.range = (uint8)(IP_SCG->FIRCCFG & SCG_FIRCCFG_RANGE_MASK) >> SCG_FIRCCFG_RANGE_SHIFT;
        fircConfiguration.regulator = (uint8)(IP_SCG->FIRCCSR & SCG_FIRCCSR_FIRCREGOFF_MASK) >> SCG_FIRCCSR_FIRCREGOFF_SHIFT;
    }

    return returnValue;
}

/**
* @brief            This function will get current configuration of SOSC.
*/
static const Clock_Ip_XoscConfigType *getSoscConfig(void)
{
    uint32 i;

    const Clock_Ip_XoscConfigType *returnValue = NULL_PTR;
    static Clock_Ip_XoscConfigType soscConfiguration;

    if (config_clock != NULL_PTR)
    {
        for (i = 0U; i < config_clock->xoscsCount; i++)
        {
            if (config_clock->xoscs[i].name == SOSC_CLK)
            {
                returnValue = &config_clock->xoscs[i];
                break;
            }
        }
    }

    /* Element is not under mcu control */
    if (returnValue == NULL_PTR)
    {
        returnValue = &soscConfiguration;
        soscConfiguration.name = SOSC_CLK;
        soscConfiguration.enable = (uint16)(IP_SCG->SOSCCSR & SCG_SOSCCSR_SOSCEN_MASK) >> SCG_SOSCCSR_SOSCEN_SHIFT;
        soscConfiguration.freq = FEATURE_CLOCK_IP_DEFAULT_SOSC_FREQUENCY;
    }

    return returnValue;
}

#if defined(FEATURE_CLOCK_IP_HAS_SPLL_CLK)
/**
* @brief            This function will get current configuration of SPLL.
*/
static const Clock_Ip_PllConfigType *getSpllConfig(void)
{
    uint32 i;

    const Clock_Ip_PllConfigType *returnValue = NULL_PTR;
    static Clock_Ip_PllConfigType spllConfiguration;

    if (config_clock != NULL_PTR)
    {
        for (i = 0U; i < config_clock->pllsCount; i++)
        {
            if (config_clock->plls[i].name == SPLL_CLK)
            {
                returnValue = &config_clock->plls[i];
                break;
            }
        }
    }

    /* Element is not under mcu control */
    if (returnValue == NULL_PTR)
    {
        returnValue = &spllConfiguration;
        spllConfiguration.name = SPLL_CLK;
        spllConfiguration.enable = (uint16)(IP_SCG->SPLLCSR & SCG_SPLLCSR_SPLLEN_MASK) >> SCG_SPLLCSR_SPLLEN_SHIFT;
        spllConfiguration.predivider = (uint8)((IP_SCG->SPLLCFG & SCG_SPLLCFG_PREDIV_MASK) >> SCG_SPLLCFG_PREDIV_SHIFT);
        spllConfiguration.mulFactorDiv = (uint8)((IP_SCG->SPLLCFG & SCG_SPLLCFG_MULT_MASK) >> SCG_SPLLCFG_MULT_SHIFT);
    }

    return returnValue;
}
#endif

#if defined(FEATURE_CLOCK_IP_HAS_FIRC_MON1_CLK) || defined(FEATURE_CLOCK_IP_HAS_FIRC_MON2_CLK)
static const Clock_Ip_CmuConfigType *getCmuFircConfig(Clock_Ip_NameType name)
{
    uint32 i;

    const Clock_Ip_CmuConfigType *returnValue = NULL_PTR;
    static Clock_Ip_CmuConfigType cmuConfiguration;

    if (config_clock != NULL_PTR)
    {
        for (i = 0U; i < config_clock->cmusCount; i++)
        {
            if (config_clock->cmus[i].name == name)
            {
                returnValue = &config_clock->cmus[i];
                break;
            }
        }
    }

    /* Element is not under mcu control */
    if (returnValue == NULL_PTR)
    {
        returnValue = &cmuConfiguration;
        cmuConfiguration.name = FIRC_CLK;
        cmuConfiguration.enable = (cmu[0U]->GCR & CMU_FC_GCR_FCE_MASK) >> CMU_FC_GCR_FCE_SHIFT;
    }

    return returnValue;
}
#endif

static const Clock_Ip_SelectorConfigType *getSelectorConfig(Clock_Ip_NameType name)
{
    const Clock_Ip_SelectorConfigType *returnValue = NULL_PTR;
    static Clock_Ip_SelectorConfigType selectorConfigurations[3U];
    uint32 selectorConfigIndex, i;

    static const Clock_Ip_NameType clockSource[SCS_SELECTOR_HARDWARE_VALUES_NO] = {

        CLOCK_IS_OFF,                  /* clock name for 0  hardware value */
        SOSC_CLK,                      /* clock name for 1  hardware value */
        SIRC_CLK,                      /* clock name for 2  hardware value */
        FIRC_CLK,                      /* clock name for 3  hardware value */
        CLOCK_IS_OFF,                  /* clock name for 4  hardware value */
        CLOCK_IS_OFF,                  /* clock name for 5  hardware value */
        #if defined(FEATURE_CLOCK_IP_HAS_SPLL_CLK)
            SPLL_CLK,                  /* clock name for 6  hardware value */
        #else
            CLOCK_IS_OFF,              /* clock name for 6  hardware value */    
        #endif
    };

    switch(name)
    {
        case SCS_RUN_CLK:
            selectorConfigIndex = 0U;
            break;
        case SCS_VLPR_CLK:
            selectorConfigIndex = 1U;
            break;
#if defined(FEATURE_CLOCK_IP_HAS_SCS_HSRUN_CLK)
        case SCS_HSRUN_CLK:
            selectorConfigIndex = 2U;
            break;
#endif
        default:
            selectorConfigIndex = 0U;
            break;
    }


    if (config_clock != NULL_PTR)
    {
        for (i = 0U; i < config_clock->selectorsCount; i++)
        {
            if (config_clock->selectors[i].name == name)
            {
                returnValue = &config_clock->selectors[i];
                break;
            }
        }
    }

    /* Element is not under mcu control */
    if (returnValue == NULL_PTR)
    {
        returnValue = &selectorConfigurations[selectorConfigIndex];
        selectorConfigurations[selectorConfigIndex].name = name;
        switch(name)
        {
            case SCS_RUN_CLK:
                selectorConfigurations[selectorConfigIndex].value = clockSource[(IP_SCG->RCCR & SCG_RCCR_SCS_MASK) >> SCG_RCCR_SCS_SHIFT];
                break;
            case SCS_VLPR_CLK:
                selectorConfigurations[selectorConfigIndex].value = clockSource[(IP_SCG->VCCR & SCG_VCCR_SCS_MASK) >> SCG_VCCR_SCS_SHIFT];
                break;
#if defined(FEATURE_CLOCK_IP_HAS_SCS_HSRUN_CLK)
            case SCS_HSRUN_CLK:
                selectorConfigurations[selectorConfigIndex].value = clockSource[(IP_SCG->HCCR & SCG_HCCR_SCS_MASK) >> SCG_HCCR_SCS_SHIFT];
                break;
#endif
            default:
                /* Invalid clock name */
                break;
        }
    }

    return returnValue;
}

static const Clock_Ip_DividerConfigType *getCoreDividerConfig(Clock_Ip_NameType name)
{
    const Clock_Ip_DividerConfigType *returnValue = NULL_PTR;
    static Clock_Ip_DividerConfigType dividerConfigurations[3U];
    uint32 dividerConfigIndex = 0U;
    uint32 i;

    switch(name)
    {
        case CORE_RUN_CLK:
            dividerConfigIndex = 0U;
            break;
        case CORE_VLPR_CLK:
            dividerConfigIndex = 1U;
            break;
#if defined(FEATURE_CLOCK_IP_HAS_CORE_HSRUN_CLK)
        case CORE_HSRUN_CLK:
            dividerConfigIndex = 2U;
            break;
#endif
            default:
                /* Invalid clock name */
                break;
    }


    if (config_clock != NULL_PTR)
    {
        for (i = 0U; i < config_clock->dividersCount; i++)
        {
            if (config_clock->dividers[i].name == name)
            {
                returnValue = &config_clock->dividers[i];
                break;
            }
        }
    }

    /* Element is not under mcu control */
    if (returnValue == NULL_PTR)
    {
        returnValue = &dividerConfigurations[dividerConfigIndex];
        dividerConfigurations[dividerConfigIndex].name = name;
        switch(name)
        {
            case CORE_RUN_CLK:
                dividerConfigurations[dividerConfigIndex].value = ((IP_SCG->RCCR & SCG_RCCR_DIVCORE_MASK) >> SCG_RCCR_DIVCORE_SHIFT) + 1U;
                break;
            case CORE_VLPR_CLK:
                dividerConfigurations[dividerConfigIndex].value = ((IP_SCG->VCCR & SCG_VCCR_DIVCORE_MASK) >> SCG_VCCR_DIVCORE_SHIFT) + 1U;
                break;
#if defined(FEATURE_CLOCK_IP_HAS_CORE_HSRUN_CLK)
            case CORE_HSRUN_CLK:
                dividerConfigurations[dividerConfigIndex].value = ((IP_SCG->HCCR & SCG_HCCR_DIVCORE_MASK) >> SCG_HCCR_DIVCORE_SHIFT) + 1U;
                break;
#endif
            default:
                /* Invalid clock name */
                break;
        }
    }

    return returnValue;
}


static const Clock_Ip_DividerConfigType *getBusDividerConfig(Clock_Ip_NameType name)
{
    const Clock_Ip_DividerConfigType *returnValue = NULL_PTR;
    static Clock_Ip_DividerConfigType dividerConfigurations[3U];
    uint32 dividerConfigIndex = 0U;
    uint32 i;

    switch(name)
    {
        case BUS_RUN_CLK:
            dividerConfigIndex = 0U;
            break;
        case BUS_VLPR_CLK:
            dividerConfigIndex = 1U;
            break;
#if defined(FEATURE_CLOCK_IP_HAS_BUS_HSRUN_CLK)
        case BUS_HSRUN_CLK:
            dividerConfigIndex = 2U;
            break;
#endif
            default:
                /* Invalid clock name */
                break;

    }


    if (config_clock != NULL_PTR)
    {
        for (i = 0U; i < config_clock->dividersCount; i++)
        {
            if (config_clock->dividers[i].name == name)
            {
                returnValue = &config_clock->dividers[i];
                break;
            }
        }
    }

    /* Element is not under mcu control */
    if (returnValue == NULL_PTR)
    {
        returnValue = &dividerConfigurations[dividerConfigIndex];
        dividerConfigurations[dividerConfigIndex].name = name;
        switch(name)
        {
            case BUS_RUN_CLK:
                dividerConfigurations[dividerConfigIndex].value = ((IP_SCG->RCCR & SCG_RCCR_DIVBUS_MASK) >> SCG_RCCR_DIVBUS_SHIFT) + 1U;
                break;
            case BUS_VLPR_CLK:
                dividerConfigurations[dividerConfigIndex].value = ((IP_SCG->VCCR & SCG_VCCR_DIVBUS_MASK) >> SCG_VCCR_DIVBUS_SHIFT) + 1U;
                break;
#if defined(FEATURE_CLOCK_IP_HAS_BUS_HSRUN_CLK)
            case BUS_HSRUN_CLK:
                dividerConfigurations[dividerConfigIndex].value = ((IP_SCG->HCCR & SCG_HCCR_DIVBUS_MASK) >> SCG_HCCR_DIVBUS_SHIFT) + 1U;
                break;
#endif
            default:
                /* Invalid clock name */
                break;
        }
    }

    return returnValue;
}

static const Clock_Ip_DividerConfigType *getSlowDividerConfig(Clock_Ip_NameType name)
{
    const Clock_Ip_DividerConfigType *returnValue = NULL_PTR;
    static Clock_Ip_DividerConfigType dividerConfigurations[3U];
    uint32 dividerConfigIndex = 0U;
    uint32 i;

    switch(name)
    {
        case SLOW_RUN_CLK:
            dividerConfigIndex = 0U;
            break;
        case SLOW_VLPR_CLK:
            dividerConfigIndex = 1U;
            break;
#if defined(FEATURE_CLOCK_IP_HAS_SLOW_HSRUN_CLK)
        case SLOW_HSRUN_CLK:
            dividerConfigIndex = 2U;
            break;
#endif
            default:
                /* Invalid clock name */
                break;

    }


    if (config_clock != NULL_PTR)
    {
        for (i = 0U; i < config_clock->dividersCount; i++)
        {
            if (config_clock->dividers[i].name == name)
            {
                returnValue = &config_clock->dividers[i];
                break;
            }
        }
    }

    /* Element is not under mcu control */
    if (returnValue == NULL_PTR)
    {
        returnValue = &dividerConfigurations[dividerConfigIndex];
        dividerConfigurations[dividerConfigIndex].name = name;
        switch(name)
        {
            case SLOW_RUN_CLK:
                dividerConfigurations[dividerConfigIndex].value = ((IP_SCG->RCCR & SCG_RCCR_DIVSLOW_MASK) >> SCG_RCCR_DIVSLOW_SHIFT) + 1U;
                break;
            case SLOW_VLPR_CLK:
                dividerConfigurations[dividerConfigIndex].value = ((IP_SCG->VCCR & SCG_VCCR_DIVSLOW_MASK) >> SCG_VCCR_DIVSLOW_SHIFT) + 1U;
                break;
#if defined(FEATURE_CLOCK_IP_HAS_SLOW_HSRUN_CLK)
            case SLOW_HSRUN_CLK:
                dividerConfigurations[dividerConfigIndex].value = ((IP_SCG->HCCR & SCG_HCCR_DIVSLOW_MASK) >> SCG_HCCR_DIVSLOW_SHIFT) + 1U;
                break;
#endif
            default:
                /* Invalid clock name */
                break;
        }
    }

    return returnValue;
}

/* Initialize objects for clock */
void ClockInitializeObjects(void)
{

#if defined(FEATURE_CLOCK_IP_HAS_SPLL_CLK)
    spllClock = &pllCallbacks[pllCallbackIndex[SYS_PLL]];
#endif

    soscClock = &extOscCallbacks[xoscCallbackIndex[SYS_OSC]];

    fircClock = &intOscCallbacks[ircoscCallbackIndex[FIRCOSC]];

#if defined(FEATURE_CLOCK_IP_HAS_FIRC_MON1_CLK) || defined(FEATURE_CLOCK_IP_HAS_FIRC_MON2_CLK)
    cmuFircMonitor = &cmuCallbacks[cmuCallbackIndex[CMU]];
#endif

    scsRunClockSelector   = &selectorCallbacks[selectorCallbackIndex[SCS_RUN]];
#if defined(FEATURE_CLOCK_IP_HAS_SCS_HSRUN_CLK)
    scsHsrunClockSelector = &selectorCallbacks[selectorCallbackIndex[SCS_HSRUN]];
#endif

    coreRunClockDivider = &dividerCallbacks[dividerCallbackIndex[DIVCORE_RUN]];
#if defined(FEATURE_CLOCK_IP_HAS_CORE_HSRUN_CLK)
    coreHsrunClockDivider = &dividerCallbacks[dividerCallbackIndex[DIVCORE_HSRUN]];
#endif
    
    busRunClockDivider = &dividerCallbacks[dividerCallbackIndex[DIVBUS_RUN]];
#if defined(FEATURE_CLOCK_IP_HAS_BUS_HSRUN_CLK)
    busHsrunClockDivider = &dividerCallbacks[dividerCallbackIndex[DIVBUS_HSRUN]];
#endif

    slowRunClockDivider = &dividerCallbacks[dividerCallbackIndex[DIVSLOW_RUN]];
#if defined(FEATURE_CLOCK_IP_HAS_SLOW_HSRUN_CLK)
    slowHsrunClockDivider = &dividerCallbacks[dividerCallbackIndex[DIVSLOW_HSRUN]];
#endif

    fircConfig = getFircConfig();
    soscConfig = getSoscConfig();
#if defined(FEATURE_CLOCK_IP_HAS_SPLL_CLK)
    spllConfig = getSpllConfig();
#endif
	
#if defined(FEATURE_CLOCK_IP_HAS_FIRC_MON1_CLK)
    cmuFircMon1Config = getCmuFircConfig(FIRC_MON1_CLK);
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FIRC_MON2_CLK)
    cmuFircMon2Config = getCmuFircConfig(FIRC_MON2_CLK);
#endif

    scsConfig_Run_Mode = getSelectorConfig(SCS_RUN_CLK);
    scsConfig_Vlpr_Mode = getSelectorConfig(SCS_VLPR_CLK);
#if defined(FEATURE_CLOCK_IP_HAS_SCS_HSRUN_CLK)
    scsConfig_Hsrun_Mode = getSelectorConfig(SCS_HSRUN_CLK);
#endif

    coreConfig_Run_Mode = getCoreDividerConfig(CORE_RUN_CLK);
    coreConfig_Vlpr_Mode = getCoreDividerConfig(CORE_VLPR_CLK);
#if defined(FEATURE_CLOCK_IP_HAS_CORE_HSRUN_CLK)
    coreConfig_Hsrun_Mode = getCoreDividerConfig(CORE_HSRUN_CLK);
#endif

    busConfig_Run_Mode = getBusDividerConfig(BUS_RUN_CLK);
    busConfig_Vlpr_Mode = getBusDividerConfig(BUS_VLPR_CLK);
#if defined(FEATURE_CLOCK_IP_HAS_BUS_HSRUN_CLK)
    busConfig_Hsrun_Mode = getBusDividerConfig(BUS_HSRUN_CLK);
#endif

    slowConfig_Run_Mode = getSlowDividerConfig(SLOW_RUN_CLK);
    slowConfig_Vlpr_Mode = getSlowDividerConfig(SLOW_VLPR_CLK);
#if defined(FEATURE_CLOCK_IP_HAS_SLOW_HSRUN_CLK)
    slowConfig_Hsrun_Mode = getSlowDividerConfig(SLOW_HSRUN_CLK);
#endif

}


void ClockPowerModeChangeNotification(power_modes_t powerMode, power_notification_t notification)
{
    switch(powerMode)
    {
        case VLPR_MODE:
        case VLPS_MODE:
        {
            if(BEFORE_POWER_MODE_CHANGE == notification)
            {
                /* Disable all cmus */
#if defined(FEATURE_CLOCK_IP_HAS_FIRC_MON1_CLK)
                /* Check enable clock gate for CMU0 */
                if(((IP_PCC->PCCn[62] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT) == 1U)
                {
                    cmuFircMonitor->Disable(FIRC_MON1_CLK);
                }
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FIRC_MON2_CLK)
                /* Check enable clock gate for CMU1 */
                if(((IP_PCC->PCCn[63] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT) == 1U)
                {
                    cmuFircMonitor->Disable(FIRC_MON2_CLK);
                }
#endif

                /* Load system clock settings for VLPR mode */
                scsRunClockSelector->Set(scsConfig_Vlpr_Mode);
                coreRunClockDivider->Set(coreConfig_Vlpr_Mode);
                busRunClockDivider->Set(busConfig_Vlpr_Mode);
                slowRunClockDivider->Set(slowConfig_Vlpr_Mode);

                /* Disable all clock sources except SIRC */
#if defined(FEATURE_CLOCK_IP_HAS_SPLL_CLK)
                spllClock->Disable(spllConfig->name);
#endif
                soscClock->Disable(soscConfig->name);
                fircClock->Disable(fircConfig->name);
            }
        }
        break;

        case RUN_MODE:
        {
            if(POWER_MODE_CHANGED == notification)
            {
                /* Restore clock source settings */
                fircClock->Enable(fircConfig);

                soscClock->Enable(soscConfig);                 /* Enable */
                soscClock->Complete(soscConfig);               /* Wait to lock */

#if defined(FEATURE_CLOCK_IP_HAS_SPLL_CLK)
                spllClock->Enable(spllConfig);                 /* Enable */
                (void)(spllClock->Complete(spllConfig->name));         /* Wait to lock */
#endif

                /* Restore system clock settings */
                scsRunClockSelector->Set(scsConfig_Run_Mode);
                coreRunClockDivider->Set(coreConfig_Run_Mode);
                busRunClockDivider->Set(busConfig_Run_Mode);
                slowRunClockDivider->Set(slowConfig_Run_Mode);

                /* Restore all cmus */
#if defined(FEATURE_CLOCK_IP_HAS_FIRC_MON1_CLK)
                /* Check enable clock gate for CMU0 */
                if(((IP_PCC->PCCn[62] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT) == 1U)
                {
                    cmuFircMonitor->Enable(cmuFircMon1Config);
                }
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FIRC_MON2_CLK)
                /* Check enable clock gate for CMU1 */
                if(((IP_PCC->PCCn[63] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT) == 1U)
                {
                    cmuFircMonitor->Enable(cmuFircMon2Config);
                }
#endif
            }
        }
        break;

        case HSRUN_MODE:
        {
            if(POWER_MODE_CHANGED == notification)
            {
                /* Restore clock source settings */
                fircClock->Enable(fircConfig);

                soscClock->Enable(soscConfig);                 /* Enable */
                soscClock->Complete(soscConfig);               /* Wait to lock */

#if defined(FEATURE_CLOCK_IP_HAS_SPLL_CLK)
                spllClock->Enable(spllConfig);                 /* Enable */
                (void)(spllClock->Complete(spllConfig->name));         /* Wait to lock */
#endif

                /* Restore system clock settings */
#if defined(FEATURE_CLOCK_IP_HAS_SCS_HSRUN_CLK)
                scsHsrunClockSelector->Set(scsConfig_Hsrun_Mode);
#endif
#if defined(FEATURE_CLOCK_IP_HAS_CORE_HSRUN_CLK)
                coreHsrunClockDivider->Set(coreConfig_Hsrun_Mode);
#endif
#if defined(FEATURE_CLOCK_IP_HAS_BUS_HSRUN_CLK)
                busHsrunClockDivider->Set(busConfig_Hsrun_Mode);
#endif
#if defined(FEATURE_CLOCK_IP_HAS_SLOW_HSRUN_CLK)
                slowHsrunClockDivider->Set(slowConfig_Hsrun_Mode);
#endif

                /* Restore all cmus */
#if defined(FEATURE_CLOCK_IP_HAS_FIRC_MON1_CLK)
                /* Check enable clock gate for CMU0 */
                if(((IP_PCC->PCCn[62] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT) == 1U)
                {
                    cmuFircMonitor->Enable(cmuFircMon1Config);
                }
#endif
#if defined(FEATURE_CLOCK_IP_HAS_FIRC_MON2_CLK)
                /* Check enable clock gate for CMU1 */
                if(((IP_PCC->PCCn[63] & PCC_PCCn_CGC_MASK) >> PCC_PCCn_CGC_SHIFT) == 1U)
                {
                    cmuFircMonitor->Enable(cmuFircMon2Config);
                }
#endif
            }
        }
        break;

        default:
        {
            /* Invalid power mode */
        }
        break;
    }

}


/* Clock stop section code */
#define MCU_STOP_SEC_CODE
#include "Mcu_MemMap.h"



#ifdef FEATURE_CLOCK_IP_HAS_RAM_WAIT_STATES


/* Clock start rom section code */
#define MCU_START_SEC_CODE_AC
#include "Mcu_MemMap.h"

static void PRAMC_SetRamIWS(void)
{

    /* CORE_CLK frequency is greater than 80MHz or CORE_CLK and AIPS_PLAT_CLK have the same frequency */
    if ((configuredCoreClock > 80000000U) || (configuredCoreClock == configuredAipsPlatClock))
    {
        /* Enable RAM WS */
        PRAMC_0->PRCR1 |= PRAMC_PRCR1_FT_DIS_MASK;
        PRAMC_1->PRCR1 |= PRAMC_PRCR1_FT_DIS_MASK;

    }
    else
    {
        /* Disable RAM WS */
        PRAMC_0->PRCR1 &= ~PRAMC_PRCR1_FT_DIS_MASK;
        PRAMC_1->PRCR1 &= ~PRAMC_PRCR1_FT_DIS_MASK;
    }
}

/* Clock stop rom section code */
#define MCU_STOP_SEC_CODE_AC
#include "Mcu_MemMap.h"
#endif

#ifdef FEATURE_CLOCK_IP_HAS_FLASH_WAIT_STATES




/* Clock start ram section code */
#define MCU_START_SEC_RAMCODE
#include "Mcu_MemMap.h"

static void CodeInRam_SetFlashWaitStates(void)
{
    uint32 rwsc_setting = 0U;


    if (configuredCoreClock <= 167000000U)
    {
        if (configuredCoreClock <= 66000000U)
        {
            rwsc_setting = 1U;
        }
        else if (configuredCoreClock <= 100000000U)
        {
            rwsc_setting = 2U;
        }
        else if (configuredCoreClock <= 133000000U)
        {
            rwsc_setting = 3U;
        }
        else
        {
            rwsc_setting = 4U;
        }
    }
    else
    {
        if (configuredCoreClock <= 200000000U)
        {
            rwsc_setting = 5U;
        }
        else if (configuredCoreClock <= 233000000U)
        {
            rwsc_setting = 6U;
        }
        else if (configuredCoreClock <= 250000000U)
        {
            rwsc_setting = 7U;
        }
        else
        {
            rwsc_setting = 7U;
        }
    }

    FLASH->CTL &= ~FLASH_CTL_RWSL_MASK;
    FLASH->CTL &= ~FLASH_CTL_RWSC_MASK;
    FLASH->CTL |= FLASH_CTL_RWSC(rwsc_setting);
}

/* Clock stop ram section code */
#define MCU_STOP_SEC_RAMCODE
#include "Mcu_MemMap.h"

/* Clock start initialized section data */
#define MCU_START_SEC_VAR_INIT_UNSPECIFIED
#include "Mcu_MemMap.h"

typedef void (*SetFlashWaitStatesCallbackType)(void);
SetFlashWaitStatesCallbackType SetFlashWaitStatesCallback = CodeInRam_SetFlashWaitStates;   /* Set Flash Wait States callback */


/* Clock stop initialized section data */
#define MCU_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Mcu_MemMap.h"


/* Clock start section code */
#define MCU_START_SEC_CODE
#include "Mcu_MemMap.h"

void FLASH_SetFlashIWS(void)
{
    SetFlashWaitStatesCallback();
}


/* Clock stop section code */
#define MCU_STOP_SEC_CODE
#include "Mcu_MemMap.h"

#endif

/*! @}*/

/*******************************************************************************
 * EOF
 ******************************************************************************/

