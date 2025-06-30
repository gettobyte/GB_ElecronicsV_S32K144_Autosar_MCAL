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
*   @file       Clock_Ip.c
*   @version    1.0.0
*
*   @brief   CLOCK driver implementations.
*   @details CLOCK driver implementations.
*
*   @addtogroup CLOCK_DRIVER Clock Ip Driver
*   @{
*/



#include "Clock_Ip_Private.h"
#include "OsIf.h"

/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CLOCK_IP_VENDOR_ID_C                      43
#define CLOCK_IP_AR_RELEASE_MAJOR_VERSION_C       4
#define CLOCK_IP_AR_RELEASE_MINOR_VERSION_C       4
#define CLOCK_IP_AR_RELEASE_REVISION_VERSION_C    0
#define CLOCK_IP_SW_MAJOR_VERSION_C               1
#define CLOCK_IP_SW_MINOR_VERSION_C               0
#define CLOCK_IP_SW_PATCH_VERSION_C               0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Clock_Ip.c file and Clock_Ip_Private.h file are of the same vendor */
#if (CLOCK_IP_VENDOR_ID_C != CLOCK_IP_PRIVATE_VENDOR_ID)
    #error "Clock_Ip.c and Clock_Ip_Private.h have different vendor ids"
#endif

/* Check if Clock_Ip.c file and Clock_Ip_Private.h file are of the same Autosar version */
#if ((CLOCK_IP_AR_RELEASE_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_AR_RELEASE_MINOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MINOR_VERSION) || \
     (CLOCK_IP_AR_RELEASE_REVISION_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Clock_Ip.c and Clock_Ip_Private.h are different"
#endif

/* Check if Clock_Ip.c file and Clock_Ip_Private.h file are of the same Software version */
#if ((CLOCK_IP_SW_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MAJOR_VERSION) || \
     (CLOCK_IP_SW_MINOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MINOR_VERSION) || \
     (CLOCK_IP_SW_PATCH_VERSION_C != CLOCK_IP_PRIVATE_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Clock_Ip.c and Clock_Ip_Private.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if Clock_Ip.c file and OsIf.h file are of the same Autosar version */
#if ((CLOCK_IP_AR_RELEASE_MAJOR_VERSION_C    != OSIF_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_AR_RELEASE_MINOR_VERSION_C    != OSIF_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Clock_Ip.c and OsIf.h are different"
#endif
#endif

/*******************************************************************************
 * Definitions
 ******************************************************************************/

#define MCU_START_SEC_CODE
#include "Mcu_MemMap.h"

static void ClockNotificatonsEmptyCallback(Clock_Ip_ClockNotificationType notification, Clock_Ip_NameType clockName);
static void ResetClockConfiguration(Clock_Ip_ClockConfigType const * config);
static void UpdateDriverContext(Clock_Ip_ClockConfigType const * config);
static void CallEmptyCallbacks(void);

#if (defined(CLOCK_IP_DEV_ERROR_DETECT) && (CLOCK_IP_DEV_ERROR_DETECT == STD_ON))
static void CheckClockConfiguration(Clock_Ip_ClockConfigType const * config);
static void Check_Ircosc_Clocks(Clock_Ip_ClockConfigType const * config);
static void Check_Xosc_Clocks(Clock_Ip_ClockConfigType const * config);
static void Check_Pll_Clocks(Clock_Ip_ClockConfigType const * config);
static void Check_Ext_Sig_Clocks(Clock_Ip_ClockConfigType const * config);
static void Check_Selector_Clocks(Clock_Ip_ClockConfigType const * config);
static void Check_Divider_Clocks(Clock_Ip_ClockConfigType const * config);
static void Check_Divider_Trigger_Clocks(Clock_Ip_ClockConfigType const * config);
static void Check_Frac_Divider_Clocks(Clock_Ip_ClockConfigType const * config);
static void Check_Gate_Clocks(Clock_Ip_ClockConfigType const * config);
static void Check_Pcfs_Clocks(Clock_Ip_ClockConfigType const * config);
static void Check_Cmu_Clocks(Clock_Ip_ClockConfigType const * config);
#endif

#define MCU_STOP_SEC_CODE
#include "Mcu_MemMap.h"


/* Clock start initialized section data */
#define MCU_START_SEC_VAR_CLEARED_BOOLEAN
#include "Mcu_MemMap.h"

static boolean clockTreeIsConsumingPll;                                                      /* Clock tree is using a PLL output */
static boolean clockObjectsAreInitialized;                                                   /* Clock objects are initialized */

/* Clock stop initialized section data */
#define MCU_STOP_SEC_VAR_CLEARED_BOOLEAN
#include "Mcu_MemMap.h"

/* Clock start initialized section data */
#define MCU_START_SEC_VAR_INIT_UNSPECIFIED
#include "Mcu_MemMap.h"

static Clock_Ip_NotificationsCallbackType clockNotificationsCallback = ClockNotificatonsEmptyCallback;   /* Clock Report Error Callback */                                         /* Reference to the current clock configuration */
/* Clock stop initialized section data */
#define MCU_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Mcu_MemMap.h"

/* Clock start initialized section data */
#define MCU_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Mcu_MemMap.h"

#if CMU_INSTANCES_ARRAY_SIZE > 0U
const Clock_Ip_ClockConfigType *clockConfig;                                           /* Reference to the current clock configuration */
#else
static const Clock_Ip_ClockConfigType *clockConfig;                                           /* Reference to the current clock configuration */
#endif
/* Clock stop initialized section data */
#define MCU_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Mcu_MemMap.h"



/* Clock start section code */
#define MCU_START_SEC_CODE

#include "Mcu_MemMap.h"

/*FUNCTION******************************************************************************
 *
 * Function Name : Clock_Ip_Init
 * Description   : This function configures all clocks according to a clock configuration.
 *
 * @implements Clock_Ip_Init_Activity
 * END**********************************************************************************/
Clock_Ip_StatusType Clock_Ip_Init(Clock_Ip_ClockConfigType const * config)
{
    Clock_Ip_StatusType clockStatus = CLOCK_IP_ERROR;
#if (STD_OFF == CLOCK_IP_NO_PLL)
    Clock_Ip_PllStatusType pllStatus;
#endif

    (void)xoscCallbackIndex;
    (void)extOscCallbacks;
    (void)ircoscCallbackIndex;
    (void)intOscCallbacks;
    (void)pcfsCallbackIndex;
    (void)pcfsCallbacks;
    (void)dividerCallbackIndex;
    (void)dividerCallbacks;

    (void)CLOCK_MODULE_INSTANCE;
    (void)CLOCK_CALLBACK;
    (void)EXTENSION_INDEX;
    (void)POWER_MODE_INDEX;
    (void)SELECTOR_INDEX;
    (void)DIVIDER_INDEX;
    (void)GATE_INDEX;
    (void)PCFS_INDEX;
    (void)CMU_INDEX;


#if (defined(CLOCK_IP_ENABLE_USER_MODE_SUPPORT))
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    #if !(defined (CLOCK_IP_S32K1))
    /* Set user access allowed for Clock */
    Clock_Ip_SetUserAccessAllowed();
    #endif
  #endif
#endif
    CLOCK_DEV_ASSERT(NULL_PTR != config);

    Clock_Ip_InitClock(config);

#if (STD_OFF == CLOCK_IP_NO_PLL)
    if (clockTreeIsConsumingPll)
    {
        pllStatus = Clock_Ip_GetPllStatus();
        if (CLOCK_IP_PLL_LOCKED == pllStatus)
        {
            Clock_Ip_DistributePll();
            clockStatus = CLOCK_IP_SUCCESS;
        }
    }
    else
    {
        clockStatus = CLOCK_IP_SUCCESS;
    }
#else
    clockStatus = CLOCK_IP_SUCCESS;
#endif

    return clockStatus;
}

/*FUNCTION******************************************************************************
 *
 * Function Name : Clock_Ip_InitClock
 * Description   : This function configures all clocks according to a clock configuration.
 *
 * @implements Clock_Ip_InitClock_Activity
 * END**********************************************************************************/
void Clock_Ip_InitClock(Clock_Ip_ClockConfigType const * config)
{
    uint32 callbackIndex;
    uint32 i;

#if (defined(CLOCK_IP_DEV_ERROR_DETECT) && (CLOCK_IP_DEV_ERROR_DETECT == STD_ON))
    /* Check clock elements from clock configuration */
    CheckClockConfiguration(config);
#endif

    CLOCK_DEV_ASSERT(NULL_PTR != config);
    /* Clear all the settings for CMU0/1/2... */
    /* In case one clock configuration has the CMU disabled, then need to make the transition to
    reset state of CMU modules. */
    if (NULL_PTR != clockConfig)
    {
        for (i = 0U; i < config->cmusCount; i++)    /* Reset all clock monitor units from previous configuration. */
        {
            callbackIndex = cmuCallbackIndex[clockFeatures[config->cmus[i].name][CLOCK_CALLBACK]];
            cmuCallbacks[callbackIndex].Reset(&config->cmus[i]);
        }
    }

    /* Save the current clock configuration to be used by "Clock_Ip_DistributePllClock". */
    clockConfig = config;

    /* Platform specific initialization:
     * DFS reset, FIRC_CLK configuration etc. */
    SpecificPlatformInitClock(config);

    /*********************************************************************
     ***  Ramp down to safe configuration. Reset elements from clock tree:
     ***  selectors, fractional dividers, plls and xoscs
     ***********************************************************************/
    ResetClockConfiguration(config);

    /*******************************************************
     *** Load the new configuration. Selectors that might
     *** be clocked from PLLs shouldn't be configured.
     *******************************************************/

    for (i = 0U; i < config->ircoscsCount; i++)   /* Set internal oscillators from configuration */
    {
        callbackIndex = ircoscCallbackIndex[clockFeatures[config->ircoscs[i].name][CLOCK_CALLBACK]];
        intOscCallbacks[callbackIndex].Set(&config->ircoscs[i]);
    }

    for (i = 0U; i < config->xoscsCount; i++)     /* Configure all xoscs from configuration */
    {
        callbackIndex = xoscCallbackIndex[clockFeatures[config->xoscs[i].name][CLOCK_CALLBACK]];
        extOscCallbacks[callbackIndex].Set(&config->xoscs[i]);
    }

    /* Initialize clock objects, internal driver data */
    UpdateDriverContext(config);

    /* Configure the PCFS  */
    for (i = 0U; i < config->pcfsCount; i++)       /* Configure all progressive frequency switching clocks from configuration */
    {
        callbackIndex = pcfsCallbackIndex[clockFeatures[config->pcfs[i].name][CLOCK_CALLBACK]];
        pcfsCallbacks[callbackIndex].Set(&config->pcfs[i]);
    }

    /* Configure the clock divider triggers that are under MCU control */
    for (i = 0U; i < config->dividerTriggersCount; i++)    /* Set divider triggers from configuration. */
    {
        callbackIndex = dividertriggerCallbackIndex[clockFeatures[config->dividerTriggers[i].name][CLOCK_CALLBACK]];
        dividerTriggerCallbacks[callbackIndex].Configure(&config->dividerTriggers[i]);
    }

    /* Configure the clock dividers that are under MCU control */
    for (i = 0U; i < config->dividersCount; i++)    /* Set dividers from configuration. */
    {
        callbackIndex = dividerCallbackIndex[clockFeatures[config->dividers[i].name][CLOCK_CALLBACK]];
        dividerCallbacks[callbackIndex].Set(&config->dividers[i]);
    }

    /* Trigger update for all divider trigger that are under MCU control */
    for (i = 0U; i < config->dividerTriggersCount; i++)    /* Set divider triggers from configuration. */
    {
        callbackIndex = dividertriggerCallbackIndex[clockFeatures[config->dividerTriggers[i].name][CLOCK_CALLBACK]];
        dividerTriggerCallbacks[callbackIndex].TriggerUpdate(&config->dividerTriggers[i]);
    }

    /* Configure PLL clock generators */
    for (i = 0U; i < config->pllsCount; i++)       /* Configure all plls from configuration asynchronously. Do not enable. */
    {
        callbackIndex = pllCallbackIndex[clockFeatures[config->plls[i].name][CLOCK_CALLBACK]];
        pllCallbacks[callbackIndex].Set(&config->plls[i]);
    }
    
    for (i = 0U; i < config->cmusCount; i++)     /* Set the Clock Monitoring Units that are under mcu control. Cmus are not enabled. */
    {
        callbackIndex = cmuCallbackIndex[clockFeatures[config->cmus[i].name][CLOCK_CALLBACK]];
        cmuCallbacks[callbackIndex].Set(&config->cmus[i]);
    }

    for (i = 0U; i < config->xoscsCount; i++)     /* Wait for all xoscs from configuration to lock */
    {
        callbackIndex = xoscCallbackIndex[clockFeatures[config->xoscs[i].name][CLOCK_CALLBACK]];
        extOscCallbacks[callbackIndex].Complete(&config->xoscs[i]);
    }

    /* Configure PLL clock generators */
    for (i = 0U; i < config->pllsCount; i++)       /* Enable plls according to configuration asynchronously. Do not wait. */
    {
        callbackIndex = pllCallbackIndex[clockFeatures[config->plls[i].name][CLOCK_CALLBACK]];
        pllCallbacks[callbackIndex].Enable(&config->plls[i]);
    }

    /* Configure fractional dividers */
    /* Note: The DFS configuration might actually need to be done after we
     * know that the PLLs are all locked in "Clock_Ip_GetPllStatus". */
    for (i = 0U; i < config->fracDivsCount; i++)    /* Configure all fractional dividers from configuration asynchronously. Do not wait. */
    {
        callbackIndex = fractional_dividerCallbackIndex[clockFeatures[config->fracDivs[i].name][CLOCK_CALLBACK]];
        fracDivCallbacks[callbackIndex].Set(&config->fracDivs[i]);
    }


#ifdef FEATURE_CLOCK_IP_HAS_RAM_WAIT_STATES
    /* The entry point of the flash and RAM controllers configuration. */
    clockNotificationsCallback(CLOCK_IP_RAM_MEMORY_CONFIG_ENTRY_POINT, RESERVED_CLK);

    SetRamWaitStates();

    /* The exit point of the flash and RAM controllers configuration. */
    clockNotificationsCallback(CLOCK_IP_RAM_MEMORY_CONFIG_EXIT_POINT, RESERVED_CLK);
#endif

#ifdef FEATURE_CLOCK_IP_HAS_FLASH_WAIT_STATES
    /* The entry point of the flash and RAM controllers configuration. */
    clockNotificationsCallback(CLOCK_IP_FLASH_MEMORY_CONFIG_ENTRY_POINT, RESERVED_CLK);

    SetFlashWaitStates();

    /* The exit point of the flash and RAM controllers configuration. */
    clockNotificationsCallback(CLOCK_IP_FLASH_MEMORY_CONFIG_EXIT_POINT, RESERVED_CLK);
#endif

    clockTreeIsConsumingPll = FALSE;   /* Check if the clock tree is using a PLL output */

    /* Switch the clock multiplexers under MCU control to the configured source clocks */
    /* Note: if the configured source clock of a ClockMux is the output clock of a PLL/DFS,
     * the configuration will be skipped and the respective ClockMux will be switched in
     * the "Clock_Ip_DistributePllClock" function instead, when the source clock will have
     * stabilized already. */
    for (i = 0U; i < config->selectorsCount; i++)    /* Set only if selected inputs are not clocked from PLLs */
    {
        if ((PLL_TYPE != sourceType_clockName[config->selectors[i].value]))  {

            callbackIndex = selectorCallbackIndex[clockFeatures[config->selectors[i].name][CLOCK_CALLBACK]];
            selectorCallbacks[callbackIndex].Set(&config->selectors[i]);
        }
        else
        {
            /* At least one mux is consuming pll */
            clockTreeIsConsumingPll = TRUE;
        }
    }

    /* Check if the clock tree is using a PLL output */
    if ( FALSE == clockTreeIsConsumingPll )
    {
        for (i = 0U; i < config->gatesCount; i++)    /* Set clock gates that are under clock control. */
        {
            callbackIndex = gateCallbackIndex[clockFeatures[config->gates[i].name][CLOCK_CALLBACK]];
            gateCallbacks[callbackIndex].Set(&config->gates[i]);
        }    
    
#if CLOCK_SPECIFIC_PERIPH_NO > 0U
        /* Configure the specific modules like eMios */
        SpecificPeripheralClockInitialization(&config->specificPeriphalConfiguration);
#endif
        /* Enable the Clock Monitoring Units ( CMU0 .. n ) according to configuration. */
        for (i = 0U; i < config->cmusCount; i++)
        {
            callbackIndex = cmuCallbackIndex[clockFeatures[config->cmus[i].name][CLOCK_CALLBACK]];
            cmuCallbacks[callbackIndex].Enable(&config->cmus[i]);
        }
        /* Disable safe clock if it is supported by platform and it is configured/required. */
        /* Note: Safe clock is the fast internal oscillator clock. It is clocking the clock tree until pll is distributed.
         * At the end of configuration it can be disabled if it is supported on this platform and required/configured. */
#ifdef FEATURE_CLOCK_IP_HAS_SAFE_CLOCK_DISABLEMENT
        DisableSafeClock(config);
#endif
    }
    else
    {
        /* The clock tree is using at least one PLL/DFS output clock as source. */
        /* The user must wait until the PLLs and DFSs are locked by polling Clock_Ip_GetPllStatus */
        /* and then call "Clock_Ip_DistributePllClock" */
    }
}

/*FUNCTION******************************************************************************
 *
 * Function Name : Clock_Ip_GetPllStatus
 * Description   : This function configures all clocks according to a clock configuration.
 * If no configuration is received, no change will be processed in HW and clock driver
 * will calculate frequencies only.
 *
 * @implements Clock_Ip_GetPllStatus_Activity
 * END**********************************************************************************/
Clock_Ip_PllStatusType Clock_Ip_GetPllStatus(void)
{
    Clock_Ip_PllStatusType retValue = CLOCK_IP_PLL_STATUS_UNDEFINED;
#if (STD_OFF == CLOCK_IP_NO_PLL)
    clock_pll_status_t pllStatus;
#ifdef CLOCK_IP_DFS_SUPPORT
  #if (STD_ON == CLOCK_IP_DFS_SUPPORT)
    clock_dfs_status_t dfsStatus;
  #endif
#endif
    uint32 i, callbackIndex;

    for (i = 0U; i < NUMBER_OF_HARDWARE_PLL; i++)
    {
        callbackIndex = pllCallbackIndex[clockFeatures[HwPllName[i]][CLOCK_CALLBACK]];
        pllStatus = pllCallbacks[callbackIndex].Complete(HwPllName[i]);
        if (STATUS_PLL_UNLOCKED == pllStatus)
        {
            retValue = CLOCK_IP_PLL_UNLOCKED;
            break;
        }
        else
        {
            if (STATUS_PLL_LOCKED == pllStatus)
            {
                retValue = CLOCK_IP_PLL_LOCKED;
            }
        }
    }
#ifdef CLOCK_IP_DFS_SUPPORT
  #if (STD_ON == CLOCK_IP_DFS_SUPPORT)
    if (CLOCK_IP_PLL_LOCKED == retValue)
    {
        for (i = 0U; i < NUMBER_OF_HARDWARE_DFS; i++)
        {
            callbackIndex = fractional_dividerCallbackIndex[clockFeatures[HwDfsName[i]][CLOCK_CALLBACK]];
            dfsStatus = fracDivCallbacks[callbackIndex].Complete(HwDfsName[i]);
            if (STATUS_DFS_UNLOCKED == dfsStatus)
            {
                retValue = CLOCK_IP_PLL_UNLOCKED;
                break;
            }
        }
    }
  #endif
#endif
#endif
    return retValue;
}

#if (STD_OFF == CLOCK_IP_NO_PLL)
/*FUNCTION******************************************************************************
 *
 * Function Name : Clock_Ip_DistributePll
 * Description   : Function completes the PLL configuration and then activates the PLL clock to Mcu
 * The function will not distribute the PLL clock if the driver state does not allow it, or the PLL is not stable.
 *
 * @implements Clock_Ip_DistributePll_Activity
 * END**********************************************************************************/
void Clock_Ip_DistributePll(void)
{

    uint32 i, callbackIndex;

    CLOCK_DEV_ASSERT(NULL_PTR != clockConfig);
    /* 'clockConfig' is set by Clock_Ip_InitClock().
     *  It doesn't make sense to call PLL distribution without clock initialization. */
    if (NULL_PTR != clockConfig)
    {
        for (i = 0U; i < clockConfig->selectorsCount; i++)    /* Set only if selected inputs are clocked from PLLs */
        {
            if (PLL_TYPE == sourceType_clockName[clockConfig->selectors[i].value])  {

                callbackIndex = selectorCallbackIndex[clockFeatures[clockConfig->selectors[i].name][CLOCK_CALLBACK]];
                selectorCallbacks[callbackIndex].Set(&clockConfig->selectors[i]);
            }
        }

        /* In the case of PLL is enabled but PLL clock source is not used by any clock Mux.
           So, no need to re-configure for CMUs, because they are configured by Clock_Ip_InitClock */
        /* Check if the clock tree is using a PLL output */
        if ( clockTreeIsConsumingPll )
        {
            for (i = 0U; i < clockConfig->gatesCount; i++)    /* Set clock gates that are under clock control. */
            {
                callbackIndex = gateCallbackIndex[clockFeatures[clockConfig->gates[i].name][CLOCK_CALLBACK]];
                gateCallbacks[callbackIndex].Set(&clockConfig->gates[i]);
            }    
        
#if CLOCK_SPECIFIC_PERIPH_NO > 0U
            SpecificPeripheralClockInitialization(&clockConfig->specificPeriphalConfiguration);
#endif
            /* Enable the Clock Monitoring Units ( CMU0 .. n ) according to configuration. */
            for (i = 0U; i < clockConfig->cmusCount; i++)
            {
                callbackIndex = cmuCallbackIndex[clockFeatures[clockConfig->cmus[i].name][CLOCK_CALLBACK]];
                cmuCallbacks[callbackIndex].Enable(&clockConfig->cmus[i]);
            }
        
            /* Disable safe clock if it is supported by platform and it is configured/required. */
            /* Note: Safe clock is the fast internal oscillator clock. It is clocking the clock tree until pll is distributed.
             * At the end of configuration it can be disabled if it is supported on this platform and required/configured. */
#ifdef FEATURE_CLOCK_IP_HAS_SAFE_CLOCK_DISABLEMENT
            DisableSafeClock(clockConfig);
#endif
        }
    }
}
#endif

/*FUNCTION******************************************************************************
 *
 * Function Name : Clock_Ip_DisableClockMonitor
 * Description   : Disables a clock monitor.
 *
 * @implements Clock_Ip_DisableClockMonitor_Activity
 * END**********************************************************************************/
void Clock_Ip_DisableClockMonitor(Clock_Ip_NameType clockName)
{

    uint32 callbackIndex;

    callbackIndex = cmuCallbackIndex[clockFeatures[clockName][CLOCK_CALLBACK]];
    cmuCallbacks[callbackIndex].Disable(clockName);
}

/*FUNCTION******************************************************************************
 *
 * Function Name : Clock_Ip_GetClockMonitorStatus
 * Description   : Returns the clock monitor status.
 *
 * @implements Clock_Ip_GetClockMonitorStatus_Activity
 * END**********************************************************************************/
Clock_Ip_CmuStatusType Clock_Ip_GetClockMonitorStatus(Clock_Ip_NameType clockName)
{
    uint32 callbackIndex;

    callbackIndex = cmuCallbackIndex[clockFeatures[clockName][CLOCK_CALLBACK]];
    return cmuCallbacks[callbackIndex].GetStatus(clockName);
}

/*FUNCTION******************************************************************************
 *
 * Function Name : Clock_Ip_ClearClockMonitorStatus
 * Description   : Clears status flags for a monitor clock.
 *
 * @implements Clock_Ip_ClearClockMonitorStatus_Activity
 * END**********************************************************************************/
void Clock_Ip_ClearClockMonitorStatus(Clock_Ip_NameType clockName)
{

    uint32 callbackIndex;

    callbackIndex = cmuCallbackIndex[clockFeatures[clockName][CLOCK_CALLBACK]];
    cmuCallbacks[callbackIndex].Clear(clockName);
}

/*FUNCTION******************************************************************************
 *
 * Function Name : Clock_Ip_PowerModeChangeNotification
 * Description   : Notifies clock driver when a power mode is changed.
 *
 * @implements Clock_Ip_PowerModeChangeNotification_Activity
 * END**********************************************************************************/
void Clock_Ip_PowerModeChangeNotification(power_modes_t powerMode,power_notification_t notification)
{
    if (FALSE == clockObjectsAreInitialized)
    {
        ClockInitializeObjects();
        clockObjectsAreInitialized = TRUE;
    }

    ClockPowerModeChangeNotification(powerMode, notification);
}

/*FUNCTION******************************************************************************
 *
 * Function Name : Clock_Ip_InstallNotificationsCallback
 * Description   : This function installs a callback for clock notifications. 
 *
 * @implements Clock_Ip_InstallNotificationsCallback_Activity
 * END**********************************************************************************/
void Clock_Ip_InstallNotificationsCallback(Clock_Ip_NotificationsCallbackType callback)
{
    CLOCK_DEV_ASSERT(NULL_PTR != callback);

    clockNotificationsCallback = callback;
}

/*FUNCTION******************************************************************************
 *
 * Function Name : Clock_Ip_DisableModuleClock
 * Description   : Disables clock for a peripheral. 
 *
 * @implements Clock_Ip_DisableModuleClock_Activity
 * END**********************************************************************************/
void Clock_Ip_DisableModuleClock(Clock_Ip_NameType clockName)
{

    uint32 callbackIndex;

    callbackIndex = gateCallbackIndex[clockFeatures[clockName][CLOCK_CALLBACK]];
    gateCallbacks[callbackIndex].Update(clockName,TRUE);
}

/*FUNCTION******************************************************************************
 *
 * Function Name : Clock_Ip_EnableModuleClock
 * Description   : Enable clock for a peripheral. 
 *
 * @implements Clock_Ip_EnableModuleClock_Activity
 * END**********************************************************************************/
void Clock_Ip_EnableModuleClock(Clock_Ip_NameType clockName)
{

    uint32 callbackIndex;

    callbackIndex = gateCallbackIndex[clockFeatures[clockName][CLOCK_CALLBACK]];
    gateCallbacks[callbackIndex].Update(clockName,FALSE);
}


#if (defined(CLOCK_IP_GET_FREQUENCY_API))
  #if (CLOCK_IP_GET_FREQUENCY_API == STD_ON)
/*FUNCTION**********************************************************************
 *
 * Function Name : Clock_Ip_GetClockFrequency
 * Description   : This function returns the frequency of a given clock
 *
 * @implements Clock_Ip_GetClockFrequency_Activity
 * END**************************************************************************/
uint32 Clock_Ip_GetClockFrequency(Clock_Ip_NameType clockName)
{
#if (defined(CLOCK_IP_DEV_ERROR_DETECT))
  #if (CLOCK_IP_DEV_ERROR_DETECT == STD_ON)
    CLOCK_DEV_ASSERT((((uint32)clockName) < ((uint32)CLOCK_NAMES_NO)) && (THE_LAST_PRODUCER_CLK != clockName));
  #endif
#endif
    return GetFreq(clockName);
}
    #endif
#endif


#if (defined(CLOCK_IP_ENABLE_USER_MODE_SUPPORT))
  #if (STD_ON == CLOCK_IP_ENABLE_USER_MODE_SUPPORT)
    #if !(defined (CLOCK_IP_S32K1))
/*FUNCTION**********************************************************************
 *
 * Function Name : Clock_Ip_SetUserAccessAllowed.
 * Description   : Set user access allowed.
 *
 *END**************************************************************************/
void Clock_Ip_SetUserAccessAllowed(void)
{
    OsIf_Trusted_Call(SpecificSetUserAccessAllowed);
}
    #endif
  #endif
#endif

/*FUNCTION**********************************************************************
 *
 * Function Name : ClockNotificatonsEmptyCallback.
 * Description   : Notification clock call back.
 *
 *END**************************************************************************/
static void ClockNotificatonsEmptyCallback(Clock_Ip_ClockNotificationType notification, Clock_Ip_NameType clockName)
{
    /* No implementation */
    (void)notification;
    (void)clockName;
}

/*FUNCTION**********************************************************************
 *
 * Function Name : ReportClockErrors
 * Description   : Report clock error
 *
 *END**************************************************************************/
void ReportClockErrors(Clock_Ip_ClockNotificationType error, Clock_Ip_NameType clockName)
{
    clockNotificationsCallback(error,clockName);
}

/*FUNCTION**********************************************************************
 *
 * Function Name : ClockStartTimeout
 * Description   : Checks for timeout condition
 *
 *END**************************************************************************/
void ClockStartTimeout(uint32 *startTimeOut,
                       uint32 *elapsedTimeOut,
                       uint32 *timeoutTicksOut,
                       uint32 timeoutUs)
{
    *startTimeOut    = OsIf_GetCounter(CLOCK_TIMEOUT_TYPE);
    *elapsedTimeOut  = 0U;
    *timeoutTicksOut = OsIf_MicrosToTicks(timeoutUs, CLOCK_TIMEOUT_TYPE);
}

/*FUNCTION**********************************************************************
 *
 * Function Name : ClockTimeoutExpired
 * Description   : Checks for timeout expiration condition
 *
 *END**************************************************************************/
boolean ClockTimeoutExpired(uint32 *startTimeInOut,
                            uint32 *elapsedTimeInOut,
                            uint32 TimeoutTicks)
{
    *elapsedTimeInOut += OsIf_GetElapsed(startTimeInOut, CLOCK_TIMEOUT_TYPE);

    return ((*elapsedTimeInOut >= TimeoutTicks)? TRUE : FALSE);
}


/*FUNCTION**********************************************************************
 *
 * Function Name : UpdateDriverContext.
 * Description   : Updates context of the driver, internal memory, clock objects.
 *
 *END**************************************************************************/
static void UpdateDriverContext(Clock_Ip_ClockConfigType const * config)
{
    (void)config;

    /* Initialize clock objects */
    if (FALSE == clockObjectsAreInitialized)
    {
        ClockInitializeObjects();
        clockObjectsAreInitialized = TRUE;
    }


#ifdef CLOCK_IP_GET_FREQUENCY_API
#if (CLOCK_IP_GET_FREQUENCY_API == STD_ON)
    uint32 i;

    for (i = 0U; i < config->extClksCount; i++)    /* Set external signal frequency. */
    {
        SetExternalSignalFrequency(config->extClks[i].name, config->extClks[i].value);
    }
#endif
#endif

    /* Call empty callbacks */
    CallEmptyCallbacks();
}

#if (defined(CLOCK_IP_DEV_ERROR_DETECT))
    #if (CLOCK_IP_DEV_ERROR_DETECT == STD_ON)
/*FUNCTION**********************************************************************
 *
 * Function Name : Check_Ircosc_Clocks
 * Description   : Checks clock names from ircoscs array
 *
 *END**************************************************************************/
static void Check_Ircosc_Clocks(Clock_Ip_ClockConfigType const * config)
{
    uint32 i;

    if (config->ircoscsCount != 0U)
    {
        if (config->ircoscsCount > 1U)
        {
            for (i = 0U; i < (config->ircoscsCount - 1U); i++)
            {
                CLOCK_DEV_ASSERT(((uint32)config->ircoscs[i].name) < ((uint32)config->ircoscs[i+1U].name));
                CLOCK_DEV_ASSERT((clockNameTypes[config->ircoscs[i].name] & IRCOSC_OBJECT) != 0U);
            }
        }
        CLOCK_DEV_ASSERT((clockNameTypes[config->ircoscs[config->ircoscsCount - 1U].name] & IRCOSC_OBJECT) != 0U);
    }
}

/*FUNCTION**********************************************************************
 *
 * Function Name : Check_Xosc_Clocks
 * Description   : Checks clock names from xoscs array
 *
 *END**************************************************************************/
static void Check_Xosc_Clocks(Clock_Ip_ClockConfigType const * config)
{
#if FEATURE_CLOCK_XOSCS_COUNT > 1U
    uint32 i;
#endif

    if (config->xoscsCount != 0U)
    {
#if FEATURE_CLOCK_XOSCS_COUNT > 1U
        if (config->xoscsCount > 1U)
        {
            for (i = 0U; i < (config->xoscsCount - 1U); i++)
            {
                CLOCK_DEV_ASSERT(((uint32)config->xoscs[i].name) < ((uint32)config->xoscs[i+1U].name));
                CLOCK_DEV_ASSERT((clockNameTypes[config->xoscs[i].name] & XOSC_OBJECT) != 0U);
            }
        }
#endif
        CLOCK_DEV_ASSERT((clockNameTypes[config->xoscs[config->xoscsCount - 1U].name] & XOSC_OBJECT) != 0U);
    }
}

/*FUNCTION**********************************************************************
 *
 * Function Name : Check_Pll_Clocks
 * Description   : Checks clock names from plls array
 *
 *END**************************************************************************/
static void Check_Pll_Clocks(Clock_Ip_ClockConfigType const * config)
{
#if FEATURE_CLOCK_PLLS_COUNT > 1U
    uint32 i;
#endif
    if (config->pllsCount != 0U)
    {
#if FEATURE_CLOCK_PLLS_COUNT > 1U
        if (config->pllsCount > 1U)
        {
            for (i = 0U; i < (config->pllsCount - 1U); i++)
            {
                CLOCK_DEV_ASSERT(((uint32)config->plls[i].name) < ((uint32)config->plls[i+1U].name));
                CLOCK_DEV_ASSERT((clockNameTypes[config->plls[i].name] & PLL_OBJECT) != 0U);
            }
        }
#endif
        CLOCK_DEV_ASSERT((clockNameTypes[config->plls[config->pllsCount - 1U].name] & PLL_OBJECT) != 0U);
    }
}

/*FUNCTION**********************************************************************
 *
 * Function Name : Check_Ext_Sig_Clocks
 * Description   : Checks clock names from ext signal clocks array
 *
 *END**************************************************************************/
static void Check_Ext_Sig_Clocks(Clock_Ip_ClockConfigType const * config)
{
    uint32 i;

    if (config->extClksCount > 1U)
    {
        for (i = 0U; i < (config->extClksCount - 1U); i++)
        {
            CLOCK_DEV_ASSERT(((uint32)config->extClks[i].name) < ((uint32)config->extClks[i+1U].name));
            CLOCK_DEV_ASSERT((clockNameTypes[config->extClks[i].name] & EXT_SIG_OBJECT) != 0U);
        }
    }
    CLOCK_DEV_ASSERT((clockNameTypes[config->extClks[config->extClksCount - 1U].name] & EXT_SIG_OBJECT) != 0U);
}

/*FUNCTION**********************************************************************
 *
 * Function Name : Check_Selector_Clocks
 * Description   : Checks clock names from selectors array
 *
 *END**************************************************************************/
static void Check_Selector_Clocks(Clock_Ip_ClockConfigType const * config)
{
    uint32 i;

    if (config->selectorsCount != 0U)
    {
        if (config->selectorsCount > 1U)
        {
            for (i = 0U; i < (config->selectorsCount - 1U); i++)
            {
                CLOCK_DEV_ASSERT((clockNameTypes[config->selectors[i].name] & SELECTOR_OBJECT) != 0U);
            }
        }
        CLOCK_DEV_ASSERT((clockNameTypes[config->selectors[config->selectorsCount - 1U].name] & SELECTOR_OBJECT) != 0U);
    }
}

/*FUNCTION**********************************************************************
 *
 * Function Name : Check_Divider_Clocks
 * Description   : Checks clock names from dividers array
 *
 *END**************************************************************************/
static void Check_Divider_Clocks(Clock_Ip_ClockConfigType const * config)
{
    uint32 i;

    if (config->dividersCount != 0U)
    {
        if (config->dividersCount > 1U)
        {
            for (i = 0U; i < (config->dividersCount - 1U); i++)
            {
                CLOCK_DEV_ASSERT((clockNameTypes[config->dividers[i].name] & DIVIDER_OBJECT) != 0U);
            }
        }
        CLOCK_DEV_ASSERT((clockNameTypes[config->dividers[config->dividersCount - 1U].name] & DIVIDER_OBJECT) != 0U);
    }
}

/*FUNCTION**********************************************************************
 *
 * Function Name : Check_DividerTrigger_Clocks
 * Description   : Checks clock names from divider triggers array
 *
 *END**************************************************************************/
static void Check_Divider_Trigger_Clocks(Clock_Ip_ClockConfigType const * config)
{
#if FEATURE_CLOCK_DIVIDER_TRIGGERS_COUNT > 1U
    uint32 i;
#endif

    if (config->dividerTriggersCount != 0U)
    {
#if FEATURE_CLOCK_DIVIDER_TRIGGERS_COUNT > 1U
        if (config->dividerTriggersCount > 1U)
        {
            for (i = 0U; i < (config->dividerTriggersCount - 1U); i++)
            {
                CLOCK_DEV_ASSERT(((uint32)config->dividerTriggers[i].name) < ((uint32)config->dividerTriggers[i+1U].name));        
                CLOCK_DEV_ASSERT((clockNameTypes[config->dividerTriggers[i].name] & DIVIDER_TRIGGER_OBJECT) != 0U);
            }
        }
#endif
        CLOCK_DEV_ASSERT((clockNameTypes[config->dividerTriggers[config->dividerTriggersCount - 1U].name] & DIVIDER_TRIGGER_OBJECT) != 0U);
    }
}

/*FUNCTION**********************************************************************
 *
 * Function Name : Check_FracDivider_Clocks
 * Description   : Checks clock names from fractional divider array
 *
 *END**************************************************************************/
static void Check_Frac_Divider_Clocks(Clock_Ip_ClockConfigType const * config)
{
#if FEATURE_CLOCK_FRACTIONAL_DIVIDERS_COUNT > 1U
    uint32 i;
#endif

    if (config->fracDivsCount != 0U)
    {
#if FEATURE_CLOCK_FRACTIONAL_DIVIDERS_COUNT > 1U
        if (config->fracDivsCount > 1U)
        {
            for (i = 0U; i < (config->fracDivsCount - 1U); i++)
            {
                CLOCK_DEV_ASSERT(((uint32)config->fracDivs[i].name) < ((uint32)config->fracDivs[i+1U].name));
                CLOCK_DEV_ASSERT((clockNameTypes[config->fracDivs[i].name] & FRAC_DIV_OBJECT) != 0U);
            }
        }
#endif
        CLOCK_DEV_ASSERT((clockNameTypes[config->fracDivs[config->fracDivsCount - 1U].name] & FRAC_DIV_OBJECT) != 0U);
    }
}

/*FUNCTION**********************************************************************
 *
 * Function Name : Check_Gate_Clocks
 * Description   : Checks clock names from gates array
 *
 *END**************************************************************************/
static void Check_Gate_Clocks(Clock_Ip_ClockConfigType const * config)
{
    uint32 i;

    if (config->gatesCount != 0U)
    {
        if (config->gatesCount > 1U)
        {
            for (i = 0U; i < (config->gatesCount - 1U); i++)
            {
                CLOCK_DEV_ASSERT(((uint32)config->gates[i].name) < ((uint32)config->gates[i+1U].name));        
                CLOCK_DEV_ASSERT((clockNameTypes[config->gates[i].name] & GATE_OBJECT) != 0U);
            }
        }
        CLOCK_DEV_ASSERT((clockNameTypes[config->gates[config->gatesCount - 1U].name] & GATE_OBJECT) != 0U);
    }
}

/*FUNCTION**********************************************************************
 *
 * Function Name : Check_Pcfs_Clocks
 * Description   : Checks clock names from pcfs array
 *
 *END**************************************************************************/
static void Check_Pcfs_Clocks(Clock_Ip_ClockConfigType const * config)
{
    uint32 i;

    if (config->pcfsCount != 0U)
    {
        if (config->pcfsCount > 1U)
        {
            for (i = 0U; i < (config->pcfsCount - 1U); i++)
            {
                CLOCK_DEV_ASSERT((clockNameTypes[config->pcfs[i].name] & PCFS_OBJECT) != 0U);
            }
        }
        CLOCK_DEV_ASSERT((clockNameTypes[config->pcfs[config->pcfsCount - 1U].name] & PCFS_OBJECT) != 0U);
    }
}

/*FUNCTION**********************************************************************
 *
 * Function Name : Check_Cmu_Clocks
 * Description   : Checks clock names from cmu array
 *
 *END**************************************************************************/
static void Check_Cmu_Clocks(Clock_Ip_ClockConfigType const * config)
{
    uint32 i;

    if (config->cmusCount != 0U)
    {
        if (config->cmusCount > 1U)
        {
            for (i = 0U; i < (config->cmusCount - 1U); i++)
            {
                CLOCK_DEV_ASSERT((clockNameTypes[config->cmus[i].name] & CMU_OBJECT) != 0U);
            }
        }
        CLOCK_DEV_ASSERT((clockNameTypes[config->cmus[config->cmusCount - 1U].name] & CMU_OBJECT) != 0U);
    }
}
    #endif
#endif

#define NO_CALLBACK 0U

/* Call empty callbacks to improve CCOV*/
static void CallEmptyCallbacks(void)
{
    static boolean functionWasCalled = FALSE;

    if (functionWasCalled == FALSE)
    {
        functionWasCalled = TRUE;

        cmuCallbacks[NO_CALLBACK].Set(NULL_PTR);
        cmuCallbacks[NO_CALLBACK].Disable(RESERVED_CLK);
        cmuCallbacks[NO_CALLBACK].Clear(RESERVED_CLK);
        (void)cmuCallbacks[NO_CALLBACK].GetStatus(RESERVED_CLK);

        dividerCallbacks[NO_CALLBACK].Set(NULL_PTR);

        dividerTriggerCallbacks[NO_CALLBACK].Configure(NULL_PTR);

        extOscCallbacks[NO_CALLBACK].Reset(NULL_PTR);

        fracDivCallbacks[NO_CALLBACK].Set(NULL_PTR);
        (void)fracDivCallbacks[NO_CALLBACK].Complete(RESERVED_CLK);

        gateCallbacks[NO_CALLBACK].Set(NULL_PTR);
        gateCallbacks[NO_CALLBACK].Update(RESERVED_CLK,FALSE);

        intOscCallbacks[NO_CALLBACK].Set(NULL_PTR);

        pllCallbacks[NO_CALLBACK].Set(NULL_PTR);
        (void)pllCallbacks[NO_CALLBACK].Complete(RESERVED_CLK);

        selectorCallbacks[NO_CALLBACK].Set(NULL_PTR);

        pcfsCallbacks[NO_CALLBACK].Set(NULL_PTR);
    }
}

static void ResetClockConfiguration(Clock_Ip_ClockConfigType const * config)
{
    uint32 callbackIndex;
    uint32 i;
    
    for (i = config->selectorsCount ; i > 0U; i--)    /* Ramp down all selectors from configuration to SAFE_CLOCK */
    {
        callbackIndex = selectorCallbackIndex[clockFeatures[config->selectors[i - 1U].name][CLOCK_CALLBACK]];
        selectorCallbacks[callbackIndex].Reset(&config->selectors[i - 1U]);
    }

    for (i = config->fracDivsCount; i > 0U; i--)    /* Put in reset state all fractional dividers from configuration */
    {
        callbackIndex = fractional_dividerCallbackIndex[clockFeatures[config->fracDivs[i - 1U].name][CLOCK_CALLBACK]];
        fracDivCallbacks[callbackIndex].Reset(&config->fracDivs[i - 1U]);
    }

    for (i = config->pllsCount; i > 0U; i--)       /* Power down all plls from configuration */
    {
        callbackIndex = pllCallbackIndex[clockFeatures[config->plls[i - 1U].name][CLOCK_CALLBACK]];
        pllCallbacks[callbackIndex].Reset(&config->plls[i - 1U]);
    }

    for (i = config->xoscsCount; i > 0U; i--)     /* Power down all xoscs from configuration */
    {
        callbackIndex = xoscCallbackIndex[clockFeatures[config->xoscs[i - 1U].name][CLOCK_CALLBACK]];
        extOscCallbacks[callbackIndex].Reset(&config->xoscs[i - 1U]);
    }
}

#if (defined(CLOCK_IP_DEV_ERROR_DETECT))
    #if (CLOCK_IP_DEV_ERROR_DETECT == STD_ON)
static void CheckClockConfiguration(Clock_Ip_ClockConfigType const * config)
{
    Check_Ircosc_Clocks(config);
    Check_Xosc_Clocks(config);
    Check_Pll_Clocks(config);
    Check_Ext_Sig_Clocks(config);
    Check_Selector_Clocks(config);
    Check_Divider_Clocks(config);
    Check_Divider_Trigger_Clocks(config);
    Check_Frac_Divider_Clocks(config);
    Check_Gate_Clocks(config);
    Check_Pcfs_Clocks(config);
    Check_Cmu_Clocks(config);
}
    #endif
#endif

#if (defined(CMU_FC_FCE_REF_CNT_LFREF_HFREF) || defined(CGM_X_PCFS_SDUR_DIVC_DIVE_DIVS) || defined(FEATURE_CLOCK_IP_HAS_RAM_WAIT_STATES))
uint32 GetConfiguredFrequencyValue(Clock_Ip_NameType clockName)
{
    uint32 returnValue = 0U;
    uint32 i;

    if (clockConfig != NULL_PTR)
    {
        for (i = 0U; i < clockConfig->configureFrequenciesCount; i++)
        {
            if (clockName == clockConfig->configuredFrequencies[i].name)
            {
                returnValue = clockConfig->configuredFrequencies[i].configuredFrequencyValue;
                break;
            }
        }
    }
    return returnValue;
}
#endif

/* Clock stop section code */
#define MCU_STOP_SEC_CODE

#include "Mcu_MemMap.h"

/*! @}*/

/*******************************************************************************
 * EOF
 ******************************************************************************/
