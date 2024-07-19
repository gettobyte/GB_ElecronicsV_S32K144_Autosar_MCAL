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
*   @file       Power_Ip.c
*   @version    1.0.0
*
*   @brief      
*   @brief   POWER driver implementations.
*   @details POWER driver implementations.
*
*   @addtogroup POWER_DRIVER Power Ip Driver
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
#include "Power_Ip.h"
#include "Power_Ip_Private.h"
#include "Power_Ip_PMC.h"
#include "Power_Ip_RCM.h"
#include "Power_Ip_SCG.h"
#include "Power_Ip_SMC.h"
#include "Power_Ip_PCC.h"
#include "Power_Ip_CMU.h"
#include "Power_Ip_CortexM4.h"
#include "Power_Ip_SIM.h"

#if (POWER_MODE_CHANGE_NOTIFICATION == STD_ON)
#include "Clock_Ip.h"
#endif
/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define POWER_IP_VENDOR_ID_C                      43
#define POWER_IP_AR_RELEASE_MAJOR_VERSION_C       4
#define POWER_IP_AR_RELEASE_MINOR_VERSION_C       4
#define POWER_IP_AR_RELEASE_REVISION_VERSION_C    0
#define POWER_IP_SW_MAJOR_VERSION_C               1
#define POWER_IP_SW_MINOR_VERSION_C               0
#define POWER_IP_SW_PATCH_VERSION_C               0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Power_Ip.c file and Power_Ip.h file are of the same vendor */
#if (POWER_IP_VENDOR_ID_C != POWER_IP_VENDOR_ID)
    #error "Power_Ip.c and Power_Ip.h have different vendor ids"
#endif

/* Check if Power_Ip.c file and Power_Ip.h file are of the same Autosar version */
#if ((POWER_IP_AR_RELEASE_MAJOR_VERSION_C != POWER_IP_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_AR_RELEASE_MINOR_VERSION_C != POWER_IP_AR_RELEASE_MINOR_VERSION) || \
     (POWER_IP_AR_RELEASE_REVISION_VERSION_C != POWER_IP_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Power_Ip.c and Power_Ip.h are different"
#endif

/* Check if Power_Ip.c file and Power_Ip.h file are of the same Software version */
#if ((POWER_IP_SW_MAJOR_VERSION_C != POWER_IP_SW_MAJOR_VERSION) || \
     (POWER_IP_SW_MINOR_VERSION_C != POWER_IP_SW_MINOR_VERSION) || \
     (POWER_IP_SW_PATCH_VERSION_C != POWER_IP_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Power_Ip.c and Power_Ip.h are different"
#endif

/* Check if Power_Ip.c file and Power_Ip_Private.h file are of the same vendor */
#if (POWER_IP_VENDOR_ID_C != POWER_IP_PRIVATE_VENDOR_ID)
    #error "Power_Ip.c and Power_Ip_Private.h have different vendor ids"
#endif

/* Check if Power_Ip.c file and Power_Ip_Private.h file are of the same Autosar version */
#if ((POWER_IP_AR_RELEASE_MAJOR_VERSION_C != POWER_IP_PRIVATE_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_AR_RELEASE_MINOR_VERSION_C != POWER_IP_PRIVATE_AR_RELEASE_MINOR_VERSION) || \
     (POWER_IP_AR_RELEASE_REVISION_VERSION_C != POWER_IP_PRIVATE_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Power_Ip.c and Power_Ip_Private.h are different"
#endif

/* Check if Power_Ip.c file and Power_Ip_Private.h file are of the same Software version */
#if ((POWER_IP_SW_MAJOR_VERSION_C != POWER_IP_PRIVATE_SW_MAJOR_VERSION) || \
     (POWER_IP_SW_MINOR_VERSION_C != POWER_IP_PRIVATE_SW_MINOR_VERSION) || \
     (POWER_IP_SW_PATCH_VERSION_C != POWER_IP_PRIVATE_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Power_Ip.c and Power_Ip_Private.h are different"
#endif

/* Check if Power_Ip.c file and Power_Ip_PMC.h file are of the same vendor */
#if (POWER_IP_VENDOR_ID_C != POWER_IP_PMC_VENDOR_ID)
    #error "Power_Ip.c and Power_Ip_PMC.h have different vendor ids"
#endif

/* Check if Power_Ip.c file and Power_Ip_PMC.h file are of the same Autosar version */
#if ((POWER_IP_AR_RELEASE_MAJOR_VERSION_C != POWER_IP_PMC_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_AR_RELEASE_MINOR_VERSION_C != POWER_IP_PMC_AR_RELEASE_MINOR_VERSION) || \
     (POWER_IP_AR_RELEASE_REVISION_VERSION_C != POWER_IP_PMC_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Power_Ip.c and Power_Ip_PMC.h are different"
#endif

/* Check if Power_Ip.c file and Power_Ip_PMC.h file are of the same Software version */
#if ((POWER_IP_SW_MAJOR_VERSION_C != POWER_IP_PMC_SW_MAJOR_VERSION) || \
     (POWER_IP_SW_MINOR_VERSION_C != POWER_IP_PMC_SW_MINOR_VERSION) || \
     (POWER_IP_SW_PATCH_VERSION_C != POWER_IP_PMC_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Power_Ip.c and Power_Ip_PMC.h are different"
#endif

/* Check if Power_Ip.c file and Power_Ip_RCM.h file are of the same vendor */
#if (POWER_IP_VENDOR_ID_C != POWER_IP_RCM_VENDOR_ID)
    #error "Power_Ip.c and Power_Ip_RCM.h have different vendor ids"
#endif

/* Check if Power_Ip.c file and Power_Ip_RCM.h file are of the same Autosar version */
#if ((POWER_IP_AR_RELEASE_MAJOR_VERSION_C != POWER_IP_RCM_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_AR_RELEASE_MINOR_VERSION_C != POWER_IP_RCM_AR_RELEASE_MINOR_VERSION) || \
     (POWER_IP_AR_RELEASE_REVISION_VERSION_C != POWER_IP_RCM_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Power_Ip.c and Power_Ip_RCM.h are different"
#endif

/* Check if Power_Ip.c file and Power_Ip_RCM.h file are of the same Software version */
#if ((POWER_IP_SW_MAJOR_VERSION_C != POWER_IP_RCM_SW_MAJOR_VERSION) || \
     (POWER_IP_SW_MINOR_VERSION_C != POWER_IP_RCM_SW_MINOR_VERSION) || \
     (POWER_IP_SW_PATCH_VERSION_C != POWER_IP_RCM_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Power_Ip.c and Power_Ip_RCM.h are different"
#endif

/* Check if Power_Ip.c file and Power_Ip_SCG.h file are of the same vendor */
#if (POWER_IP_VENDOR_ID_C != POWER_IP_SCG_VENDOR_ID)
    #error "Power_Ip.c and Power_Ip_SCG.h have different vendor ids"
#endif

/* Check if Power_Ip.c file and Power_Ip_SCG.h file are of the same Autosar version */
#if ((POWER_IP_AR_RELEASE_MAJOR_VERSION_C != POWER_IP_SCG_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_AR_RELEASE_MINOR_VERSION_C != POWER_IP_SCG_AR_RELEASE_MINOR_VERSION) || \
     (POWER_IP_AR_RELEASE_REVISION_VERSION_C != POWER_IP_SCG_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Power_Ip.c and Power_Ip_SCG.h are different"
#endif

/* Check if Power_Ip.c file and Power_Ip_SCG.h file are of the same Software version */
#if ((POWER_IP_SW_MAJOR_VERSION_C != POWER_IP_SCG_SW_MAJOR_VERSION) || \
     (POWER_IP_SW_MINOR_VERSION_C != POWER_IP_SCG_SW_MINOR_VERSION) || \
     (POWER_IP_SW_PATCH_VERSION_C != POWER_IP_SCG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Power_Ip.c and Power_Ip_SCG.h are different"
#endif

/* Check if Power_Ip.c file and Power_Ip_SMC.h file are of the same vendor */
#if (POWER_IP_VENDOR_ID_C != POWER_IP_SMC_VENDOR_ID)
    #error "Power_Ip.c and Power_Ip_SMC.h have different vendor ids"
#endif

/* Check if Power_Ip.c file and Power_Ip_SMC.h file are of the same Autosar version */
#if ((POWER_IP_AR_RELEASE_MAJOR_VERSION_C != POWER_IP_SMC_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_AR_RELEASE_MINOR_VERSION_C != POWER_IP_SMC_AR_RELEASE_MINOR_VERSION) || \
     (POWER_IP_AR_RELEASE_REVISION_VERSION_C != POWER_IP_SMC_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Power_Ip.c and Power_Ip_SMC.h are different"
#endif

/* Check if Power_Ip.c file and Power_Ip_SMC.h file are of the same Software version */
#if ((POWER_IP_SW_MAJOR_VERSION_C != POWER_IP_SMC_SW_MAJOR_VERSION) || \
     (POWER_IP_SW_MINOR_VERSION_C != POWER_IP_SMC_SW_MINOR_VERSION) || \
     (POWER_IP_SW_PATCH_VERSION_C != POWER_IP_SMC_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Power_Ip.c and Power_Ip_SMC.h are different"
#endif

/* Check if Power_Ip.c file and Power_Ip_PCC.h file are of the same vendor */
#if (POWER_IP_VENDOR_ID_C != POWER_IP_PCC_VENDOR_ID)
    #error "Power_Ip.c and Power_Ip_PCC.h have different vendor ids"
#endif

/* Check if Power_Ip.c file and Power_Ip_PCC.h file are of the same Autosar version */
#if ((POWER_IP_AR_RELEASE_MAJOR_VERSION_C != POWER_IP_PCC_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_AR_RELEASE_MINOR_VERSION_C != POWER_IP_PCC_AR_RELEASE_MINOR_VERSION) || \
     (POWER_IP_AR_RELEASE_REVISION_VERSION_C != POWER_IP_PCC_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Power_Ip.c and Power_Ip_PCC.h are different"
#endif

/* Check if Power_Ip.c file and Power_Ip_PCC.h file are of the same Software version */
#if ((POWER_IP_SW_MAJOR_VERSION_C != POWER_IP_PCC_SW_MAJOR_VERSION) || \
     (POWER_IP_SW_MINOR_VERSION_C != POWER_IP_PCC_SW_MINOR_VERSION) || \
     (POWER_IP_SW_PATCH_VERSION_C != POWER_IP_PCC_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Power_Ip.c and Power_Ip_PCC.h are different"
#endif

/* Check if Power_Ip.c file and Power_Ip_CMU.h file are of the same vendor */
#if (POWER_IP_VENDOR_ID_C != POWER_IP_CMU_VENDOR_ID)
    #error "Power_Ip.c and Power_Ip_CMU.h have different vendor ids"
#endif

/* Check if Power_Ip.c file and Power_Ip_CMU.h file are of the same Autosar version */
#if ((POWER_IP_AR_RELEASE_MAJOR_VERSION_C != POWER_IP_CMU_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_AR_RELEASE_MINOR_VERSION_C != POWER_IP_CMU_AR_RELEASE_MINOR_VERSION) || \
     (POWER_IP_AR_RELEASE_REVISION_VERSION_C != POWER_IP_CMU_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Power_Ip.c and Power_Ip_CMU.h are different"
#endif

/* Check if Power_Ip.c file and Power_Ip_CMU.h file are of the same Software version */
#if ((POWER_IP_SW_MAJOR_VERSION_C != POWER_IP_CMU_SW_MAJOR_VERSION) || \
     (POWER_IP_SW_MINOR_VERSION_C != POWER_IP_CMU_SW_MINOR_VERSION) || \
     (POWER_IP_SW_PATCH_VERSION_C != POWER_IP_CMU_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Power_Ip.c and Power_Ip_CMU.h are different"
#endif

/* Check if Power_Ip.c file and Power_Ip_CortexM4.h file are of the same vendor */
#if (POWER_IP_VENDOR_ID_C != POWER_IP_CORTEXM4_VENDOR_ID)
    #error "Power_Ip.c and Power_Ip_CortexM4.h have different vendor ids"
#endif

/* Check if Power_Ip.c file and Power_Ip_CortexM4.h file are of the same Autosar version */
#if ((POWER_IP_AR_RELEASE_MAJOR_VERSION_C != POWER_IP_CORTEXM4_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_AR_RELEASE_MINOR_VERSION_C != POWER_IP_CORTEXM4_AR_RELEASE_MINOR_VERSION) || \
     (POWER_IP_AR_RELEASE_REVISION_VERSION_C != POWER_IP_CORTEXM4_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Power_Ip.c and Power_Ip_CortexM4.h are different"
#endif

/* Check if Power_Ip.c file and Power_Ip_CortexM4.h file are of the same Software version */
#if ((POWER_IP_SW_MAJOR_VERSION_C != POWER_IP_CORTEXM4_SW_MAJOR_VERSION) || \
     (POWER_IP_SW_MINOR_VERSION_C != POWER_IP_CORTEXM4_SW_MINOR_VERSION) || \
     (POWER_IP_SW_PATCH_VERSION_C != POWER_IP_CORTEXM4_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Power_Ip.c and Power_Ip_CortexM4.h are different"
#endif

/* Check if Power_Ip.c file and Power_Ip_SIM.h file are of the same vendor */
#if (POWER_IP_VENDOR_ID_C != POWER_IP_SIM_VENDOR_ID)
    #error "Power_Ip.c and Power_Ip_SIM.h have different vendor ids"
#endif

/* Check if Power_Ip.c file and Power_Ip_SIM.h file are of the same Autosar version */
#if ((POWER_IP_AR_RELEASE_MAJOR_VERSION_C != POWER_IP_SIM_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_AR_RELEASE_MINOR_VERSION_C != POWER_IP_SIM_AR_RELEASE_MINOR_VERSION) || \
     (POWER_IP_AR_RELEASE_REVISION_VERSION_C != POWER_IP_SIM_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Power_Ip.c and Power_Ip_SIM.h are different"
#endif

/* Check if Power_Ip.c file and Power_Ip_SIM.h file are of the same Software version */
#if ((POWER_IP_SW_MAJOR_VERSION_C != POWER_IP_SIM_SW_MAJOR_VERSION) || \
     (POWER_IP_SW_MINOR_VERSION_C != POWER_IP_SIM_SW_MINOR_VERSION) || \
     (POWER_IP_SW_PATCH_VERSION_C != POWER_IP_SIM_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Power_Ip.c and Power_Ip_SIM.h are different"
#endif

#if (POWER_MODE_CHANGE_NOTIFICATION == STD_ON)
/* Check if Power_Ip.c file and Clock_Ip.h file are of the same vendor */
#if (POWER_IP_VENDOR_ID_C != CLOCK_IP_VENDOR_ID)
    #error "Power_Ip.c and Clock_Ip.h have different vendor ids"
#endif

/* Check if Power_Ip.c file and Clock_Ip.h file are of the same Autosar version */
#if ((POWER_IP_AR_RELEASE_MAJOR_VERSION_C != CLOCK_IP_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_AR_RELEASE_MINOR_VERSION_C != CLOCK_IP_AR_RELEASE_MINOR_VERSION) || \
     (POWER_IP_AR_RELEASE_REVISION_VERSION_C != CLOCK_IP_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Power_Ip.c and Clock_Ip.h are different"
#endif

/* Check if Power_Ip.c file and Clock_Ip.h file are of the same Software version */
#if ((POWER_IP_SW_MAJOR_VERSION_C != CLOCK_IP_SW_MAJOR_VERSION) || \
     (POWER_IP_SW_MINOR_VERSION_C != CLOCK_IP_SW_MINOR_VERSION) || \
     (POWER_IP_SW_PATCH_VERSION_C != CLOCK_IP_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Power_Ip.c and Clock_Ip.h are different"
#endif
#endif
/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/


/*==================================================================================================
                                        LOCAL MACROS
==================================================================================================*/


/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/
#define MCU_START_SEC_VAR_INIT_UNSPECIFIED
#include "Mcu_MemMap.h"

/* Power Report Error Callback */
Power_Ip_ReportErrorsCallbackType powerReportErrorsCallback = ReportPowerErrorsEmptyCallback;

#define MCU_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Mcu_MemMap.h"

/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define MCU_START_SEC_CODE
#include "Mcu_MemMap.h"

#if (MCU_ENTER_LOW_POWER_MODE == STD_ON)
static void Power_Ip_DisableFircClock(void);
static void Power_Ip_DisableSoscClock(void);
static void Power_Ip_PrepareLowPowerMode(Power_Ip_PowerModeType ePowerMode);
#endif
#if (POWER_MODE_CHANGE_NOTIFICATION == STD_ON)
static power_modes_t Power_Ip_ModeConvert(Power_Ip_PowerModeType ePowerMode);
#endif
static Power_Ip_ResetType Power_Ip_ConvertIntergeToResetType(uint32 resetReasonIndex);

/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/
#if (MCU_ENTER_LOW_POWER_MODE == STD_ON)
/**
* @brief            This function will disable Firc clock
*/

static void Power_Ip_DisableFircClock(void)
{
    uint32 u32SystemResetIsrConfig;
    
    /* Configurable SIRC as system clock */
    Call_Power_Ip_SCG_DropSysClkToSircInRunMode();

    /* get the current System Reset Interrupt Enable settings */
    u32SystemResetIsrConfig = Power_Ip_RCM_GetCurrentSystemResetIsrSettings();

    /* Configure all reset sources to be 'Reset' */
    Call_Power_Ip_RCM_SystemResetIsrConfig();

    /* Disable Firc Clock */
    Call_Power_Ip_SCG_DisableFircClock();
    
    /* Restore System Reset Interrupt Config */
    Call_Power_Ip_RCM_RestoreSystemResetIsrConfig(u32SystemResetIsrConfig);
}

/**
* @brief            This function will disable SOSC clock
*/
static void Power_Ip_DisableSoscClock(void)
{
    VAR (uint32, AUTOMATIC) u32SystemResetIsrConfig;
    
    /* Configurable SIRC as system clock */
    Call_Power_Ip_SCG_DropSysClkToSircInRunMode();

    /* get the current System Reset Interrupt Enable settings */
    u32SystemResetIsrConfig = Power_Ip_RCM_GetCurrentSystemResetIsrSettings();

    /* Configure all reset sources to be 'Reset' */
    Call_Power_Ip_RCM_SystemResetIsrConfig();

    /* Disable SOSC Clock */
    Call_Power_Ip_SCG_DisableSoscClock();
    
    /* Restore System Reset Interrupt Config */
    Call_Power_Ip_RCM_RestoreSystemResetIsrConfig(u32SystemResetIsrConfig);
}

static void Power_Ip_PrepareLowPowerMode(Power_Ip_PowerModeType ePowerMode)
{

    if ((POWER_IP_VLPS_MODE == ePowerMode) || (POWER_IP_VLPR_MODE == ePowerMode))
    {
        /*
        * All clock monitors are always disabled when chip in a low power mode.
        * However, to prevent unexpected loss of clock reset events, we should
        * disable them before entering any low power modes, including VLPR and VLPS. */
        Call_Power_Ip_SCG_DisableClockMonitors();

#ifdef MCU_ENABLE_CMU_PERIPHERAL
#if(MCU_ENABLE_CMU_PERIPHERAL == STD_ON)
        /* Disable CMU before Disable FIRC. */
        /* CMU is gated by its PCC.CGC before entering STOP/VLPS/CPO mode */
        if(Power_Ip_PCC_GetStatus(PCC_CMU0_INDEX) & PCC_PCCn_CGC_MASK)
        {
            Power_Ip_CMU_Disable_CMU(CMU0_CHANNEL);
            Call_Power_Ip_PCC_DisableCMUGate(PCC_CMU0_INDEX);
        }

        if(Power_Ip_PCC_GetStatus(PCC_CMU1_INDEX) & PCC_PCCn_CGC_MASK)
        {
            Power_Ip_CMU_Disable_CMU(CMU1_CHANNEL);
            Call_Power_Ip_PCC_DisableCMUGate(PCC_CMU1_INDEX);
        }
#endif
#endif
        /* Disable FIRC in RUN mode before initiating a mode transition request to any low power mode. */
        Power_Ip_DisableFircClock();

        /* Disable SOSC in RUN mode before initiating a mode transition request to any low power mode. */
        Power_Ip_DisableSoscClock();

#if (POWER_IP_NO_PLL == STD_OFF)
        /* Disable PLL in RUN mode before initiating a mode transition request to any low power mode. */
        Call_Power_Ip_SCG_DisableSpllClock();
#endif /* (POWER_IP_NO_PLL == STD_OFF) */

        if (POWER_IP_VLPS_MODE == ePowerMode)
        {
            /*This enable chip go into deep sleep mode by setting bit SLEEPDEEP */
            Call_Power_Ip_CM4_EnableDeepSleep();
        }
    }

    if ((POWER_IP_STOP1_MODE == ePowerMode) || (POWER_IP_STOP2_MODE == ePowerMode))
    {
        /*This enable chip go into deep sleep mode by setting bit SLEEPDEEP */
        Call_Power_Ip_CM4_EnableDeepSleep();
    }
}
#endif

#if (POWER_MODE_CHANGE_NOTIFICATION == STD_ON)
static power_modes_t Power_Ip_ModeConvert(Power_Ip_PowerModeType ePowerMode)
{
    power_modes_t ePowerModeChanged = RUN_MODE;

    switch(ePowerMode)
    {
        case (POWER_IP_RUN_MODE):
            ePowerModeChanged = RUN_MODE;
            break;
        case (POWER_IP_HSRUN_MODE):
            ePowerModeChanged = HSRUN_MODE;
            break;
        case (POWER_IP_VLPR_MODE):
            ePowerModeChanged = VLPR_MODE;
            break;
        case (POWER_IP_VLPS_MODE):
            ePowerModeChanged = VLPS_MODE;
            break;
        default:
            /* Do nothing */
            break;
    }

    return ePowerModeChanged;
}
#endif
/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/

/**
* @brief            This function initializes the mode structure.
* @details          This function initializes the mode structure by configuring the MC_ME module.
*
* @param[in]        Power_Ip_pModeConfigPtr   Pointer to mode configuration structure.
*
* @return           void
*
* @implements Power_Ip_SetMode_Activity
*
*/
void Power_Ip_SetMode(const Power_Ip_ModeConfigType * Power_Ip_pModeConfigPtr)
{
    uint32 ePowerSwitchMode;
#if (POWER_MODE_CHANGE_NOTIFICATION == STD_ON)
    power_modes_t ePowerModeChanged;
    power_notification_t eModeChangeStatus;
#endif
    Power_Ip_PowerModeType ePowerMode = Power_Ip_pModeConfigPtr->Power_Ip_ePowerMode;

    if (POWER_IP_MODE_OK != Power_Ip_SMC_ModeCheckEntry(ePowerMode))
    {
        ePowerSwitchMode = POWER_IP_SWITCH_MODE_FAIL;
    }
    else
    {
#if (MCU_ENTER_LOW_POWER_MODE == STD_ON)
        Power_Ip_PrepareLowPowerMode(ePowerMode);
#endif /* (MCU_ENTER_LOW_POWER_MODE == STD_ON) */

        /* Request new mode transition to SMC. */
    ePowerSwitchMode = Call_Power_Ip_SMC_ModeConfig(Power_Ip_pModeConfigPtr);

#if (MCU_ENTER_LOW_POWER_MODE == STD_ON)
        if ((POWER_IP_VLPS_MODE == ePowerMode) || 
            (POWER_IP_STOP1_MODE == ePowerMode) || (POWER_IP_STOP2_MODE == ePowerMode)
           )
        {
            /*This will clear SLEEPDEEP bit after wake-up */
            Call_Power_Ip_CM4_DisableDeepSleep();
        }
#endif
    }
    if (POWER_IP_SWITCH_MODE_FAIL == ePowerSwitchMode)
    {
        ReportPowerErrors(POWER_IP_REPORT_SWITCH_MODE_ERROR, POWER_IP_ERR_CODE_RESERVED);
    }
    else
    {
#if (POWER_MODE_CHANGE_NOTIFICATION == STD_ON)
        eModeChangeStatus = POWER_MODE_CHANGED;
        /* Convert mode from PowerModeType to power_modes_t */
        ePowerModeChanged = Power_Ip_ModeConvert(ePowerMode);
        /* Callback Clock Ip Notification. */
        Clock_Ip_PowerModeChangeNotification(ePowerModeChanged,eModeChangeStatus);
#endif
    }
}

#ifdef POWER_IP_POWERMODE_STATE_API
#if (STD_ON == POWER_IP_POWERMODE_STATE_API)
/**
* @brief            This function return current power mode.
* @details          Return value:
*                       0000_0001b = RUN
*                       0000_0100b = VLPR
*                       0001_0000b = VLPS
*                       1000_0000b = HSRUN
*
* @param[in]        None
*
* @return           Power_Ip_PowerModeStateType
*/
Power_Ip_PowerModeStateType Power_Ip_GetPowerModeState(void)
{
    Power_Ip_PowerModeStateType State ;

    State = Power_Ip_SMC_GetPowerModeState();
    return State;
}
#endif
#endif

#if (MCU_PERFORM_RESET_API == STD_ON)
/**
* @brief            This function performs a microcontroller reset.
* @details          This function performs a microcontroller reset by using the hardware feature of
*                   the microcontroller.
*                   Called by:
*                       - Mcu_PerformReset() from HLD.
*
* @param[in]        Power_Ip_pHwIPsConfigPtr  Pointer to LLD configuration structure (member of
*                   'Mcu_ConfigType' struct).
*
* @return           void
*
* @implements Power_Ip_PerformReset_Activity
*
*/
void Power_Ip_PerformReset(const Power_Ip_HwIPsConfigType * Power_Ip_pHwIPsConfigPtr)
{
    (void)(Power_Ip_pHwIPsConfigPtr);

    /* Performs a micro controller reset. */
    Call_Power_Ip_CM4_SystemReset();
}
#endif /* (MCU_PERFORM_RESET_API == STD_ON) */


#define EMPTY_RESET_REASON    ((uint32)33U)
/**
* @brief            This function convert a number (uint32) to Power_Ip_ResetType.
*
* @details          This function convert a number (uint32) to Power_Ip_ResetType.
*
* @param[in]        resetReasonIndex   Reset reason index.
*
* @return           Power_Ip_ResetType
*/
static Power_Ip_ResetType Power_Ip_ConvertIntergeToResetType(uint32 resetReasonIndex)
{
    Power_Ip_ResetType eResetReason = MCU_NO_RESET_REASON;
    /* If the value of macro reset reason is not continuous, EMPTY_RESET_REASON is used to fill missing index */
    static const Power_Ip_ResetType resetReasonArray[(uint8)MCU_RESET_UNDEFINED + 1U] = {MCU_STOP_ACKNOWLEDGE_ERROR_RESET,MCU_MDM_AP_SYSTEM_RESET,MCU_SW_RESET,MCU_CORE_LOCKUP_RESET,MCU_JTAG_RESET,MCU_POWER_ON_RESET,MCU_EXTERNAL_PIN_RESET,MCU_WATCHDOG_RESET,MCU_CMU_LOSS_OF_CLOCK_RESET,MCU_LOSS_OF_LOCK_RESET,MCU_LOSS_OF_CLOCK_RESET,MCU_LOW_OR_HIGH_VOLTAGE_DETECT_RESET,MCU_NO_RESET_REASON,MCU_MULTIPLE_RESET_REASON,MCU_RESET_UNDEFINED};

    if ( (resetReasonArray[resetReasonIndex] <= MCU_RESET_UNDEFINED) && ((uint32)resetReasonArray[resetReasonIndex] != EMPTY_RESET_REASON) )
    {
        eResetReason = resetReasonArray[resetReasonIndex];
    }
    else
    {
        eResetReason = MCU_NO_RESET_REASON;
    }

    return eResetReason;
}


/**
* @brief            This function returns the reset reason.
* @details          This routine returns the Reset reason that is read from the hardware.
*
* @param[in]        None
*
* @return           void
*
* @implements Power_Ip_GetResetReason_Activity
*
*/
Power_Ip_ResetType Power_Ip_GetResetReason(void)
{
    Power_Ip_ResetType eResetReason = MCU_RESET_UNDEFINED;
    uint32 resetVal;

    resetVal = Call_Power_Ip_RCM_GetResetReason();

    /* Use function Power_Ip_ConvertIntergeToResetType to avoid MISRA violation 10.5 : cast from uint32 to enum */
    eResetReason = Power_Ip_ConvertIntergeToResetType(resetVal);

    return (Power_Ip_ResetType) eResetReason;
}

/**
* @brief            This function returns the reset reason.
* @details          This routine returns the Reset reason that is read from the hardware.
*                   Called by:
*                       - Mcu_GetResetReason() from HLD.
*
* @param[in]        None
*
* @return           void
*
* @implements Power_Ip_GetResetRawValue_Activity
*
*/
Power_Ip_RawResetType Power_Ip_GetResetRawValue(void)
{
    Power_Ip_RawResetType ResetReason;

    ResetReason = (Power_Ip_RawResetType)Call_Power_Ip_RCM_GetResetRawValue();
    return (Power_Ip_RawResetType) ResetReason;
}

#if (defined(POWER_IP_DISABLE_RCM_INIT) && (STD_OFF == POWER_IP_DISABLE_RCM_INIT))
/**
* @brief            This function initializes the reset module.
* @details          
*
* @param[in]        Power_Ip_pHwIPsConfigPtr  Pointer to LLD configuration structure.
*
* @return           void
*
* @implements Power_Ip_InitReset_Activity
*
*/
void Power_Ip_InitReset (const Power_Ip_HwIPsConfigType * Power_Ip_pHwIPsConfigPtr)
{
    POWER_DEV_ASSERT(NULL_PTR != Power_Ip_pHwIPsConfigPtr);

    Call_Power_Ip_RCM_ResetInit(Power_Ip_pHwIPsConfigPtr->RCM_pConfig);
}
#endif

/**
* @brief            This function initializes the power module.
* @details          
*
* @param[in]        Power_Ip_pHwIPsConfigPtr  Pointer to LLD configuration structure.
*
* @return           void
*
* @implements Power_Ip_InitPower_Activity
*
*/
void Power_Ip_InitPower (const Power_Ip_HwIPsConfigType * Power_Ip_pHwIPsConfigPtr)
{
    POWER_DEV_ASSERT(NULL_PTR != Power_Ip_pHwIPsConfigPtr);
    (void)(Power_Ip_pHwIPsConfigPtr);
#if (defined(POWER_IP_DISABLE_PMC_INIT) && (STD_OFF == POWER_IP_DISABLE_PMC_INIT))
    Call_Power_Ip_PMC_PowerInit(Power_Ip_pHwIPsConfigPtr->PMC_pConfig);
#endif
#if (defined(POWER_IP_DISABLE_SMC_INIT) && (STD_OFF == POWER_IP_DISABLE_SMC_INIT))
    Call_Power_Ip_SMC_AllowedModesConfig(Power_Ip_pHwIPsConfigPtr->SMC_pConfig);
#endif
}

#ifdef POWER_IP_SLEEPONEXIT_SUPPORT
  #if (POWER_IP_SLEEPONEXIT_SUPPORT == STD_ON)
 /**
* @brief        The function disable SLEEPONEXIT bit.
* @details      The function disable SLEEPONEXIT bit.
*
* @param[in]    none
*
* @return void
*/
void Power_Ip_DisableSleepOnExit(void)
{
    Call_Power_Ip_CM4_DisableSleepOnExit();
}
 /**
* @brief        The function enable SLEEPONEXIT bit.
* @details      The function enable SLEEPONEXIT bit.
*
* @param[in]    none
*
* @return void
*/
void Power_Ip_EnableSleepOnExit(void)
{
    Call_Power_Ip_CM4_EnableSleepOnExit();
}
  #endif
#endif

#ifdef POWER_IP_SRAM_RETEN_CONFIG_API
#if (POWER_IP_SRAM_RETEN_CONFIG_API == STD_ON)
/**
 * @brief   Configuration for SRAM retention.
 * @details This function configure for both SRAML_RETEN and SRAMU_RETEN bits.
 *                   Called by:
 *                       - Mcu_Ipw_SRAMRetentionConfig() from IPW
 * @param[in] eSRAMRetenConfig    The value will be configured to SRAML_RETEN and SRAMU_RETEN bits.
 *                                  MCU_SRAML_RETEN - SRAML will be retain only.
 *                                  MCU_SRAMU_RETEN - SRAMU will be retain only.
 *                                  MCU_SRAMLU_RETEN - Both SRAML and SRAMU will be retain.
 *                                  MCU_NO_SRAMLU_RETEN - Both SRAML and SRAMU will not be retain.
 *
 * @return                   void
 *
 */
void Power_Ip_SRAMRetentionConfig(Power_Ip_SRAMRetenConfigType eSRAMRetenConfig)
{
    Call_Power_Ip_SIM_SRAMRetentionConfig(eSRAMRetenConfig);
}
#endif
#endif

/**
* @brief            This function installs a callback for reporting errors from power driver.
* @details          
*
* @param[in]        reportErrorsCallback    Callback to be installed.
*
* @return           void
*
* @implements Power_Ip_InstallNotificationsCallback_Activity
*/
void Power_Ip_InstallNotificationsCallback(Power_Ip_ReportErrorsCallbackType reportErrorsCallback)
{
    POWER_DEV_ASSERT(NULL_PTR != reportErrorsCallback);

    powerReportErrorsCallback = reportErrorsCallback;
}

#define MCU_STOP_SEC_CODE
#include "Mcu_MemMap.h"


#ifdef __cplusplus
}
#endif

/** @} */

