/*================================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : Ftm
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
==================================================================================================================*/

/**
*   @file          Ftm_Ocu_Ip.c
*
*   @addtogroup    ocu_ip Ocu IPL
*   @brief         Ocu FTM source file for OCU driver.
*   @details       FTM driver interface.
*
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/*================================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================================*/

#include "Ftm_Ocu_Ip.h"
#include "Ftm_Ocu_Ip_HwAccess.h"
#include "SchM_Ocu.h"

#if(STD_ON == OCU_DEV_ERROR_DETECT)
#include "Devassert.h"
#endif

#include "OsIf.h"

#if ((defined(OCU_ENABLE_USER_MODE_SUPPORT) && (STD_ON == OCU_ENABLE_USER_MODE_SUPPORT)) || \
    (defined(OCU_SIM_AVAILABLE) && (STD_ON == OCU_SIM_AVAILABLE)))
#define USER_MODE_REG_PROT_ENABLED  (STD_ON)
#include "RegLockMacros.h"
#else
#define USER_MODE_REG_PROT_ENABLED  STD_OFF
#endif

/*==================================================================================================
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define FTM_OCU_IP_VENDOR_ID_C                       43
#define FTM_OCU_IP_AR_RELEASE_MAJOR_VERSION_C        4
#define FTM_OCU_IP_AR_RELEASE_MINOR_VERSION_C        4
#define FTM_OCU_IP_AR_RELEASE_REVISION_VERSION_C     0
#define FTM_OCU_IP_SW_MAJOR_VERSION_C                1
#define FTM_OCU_IP_SW_MINOR_VERSION_C                0
#define FTM_OCU_IP_SW_PATCH_VERSION_C                0
/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/
#if (FTM_OCU_IP_VENDOR_ID_C != FTM_OCU_IP_VENDOR_ID)
    #error "Ftm_Ocu_Ip.c and Ftm_Ocu_Ip.h have different vendor ids"
#endif

/* Check if  source file and Ftm_Ocu_Ip.h file are of the same Autosar version */
#if ((FTM_OCU_IP_AR_RELEASE_MAJOR_VERSION_C != FTM_OCU_IP_AR_RELEASE_MAJOR_VERSION) || \
     (FTM_OCU_IP_AR_RELEASE_MINOR_VERSION_C != FTM_OCU_IP_AR_RELEASE_MINOR_VERSION) || \
     (FTM_OCU_IP_AR_RELEASE_REVISION_VERSION_C != FTM_OCU_IP_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Ftm_Ocu_Ip.c and Ftm_Ocu_Ip.h are different"
#endif

/* Check if source file and Ftm_Ocu_Ip.h file are of the same Software version */
#if ((FTM_OCU_IP_SW_MAJOR_VERSION_C != FTM_OCU_IP_SW_MAJOR_VERSION) || \
     (FTM_OCU_IP_SW_MINOR_VERSION_C != FTM_OCU_IP_SW_MINOR_VERSION) || \
     (FTM_OCU_IP_SW_PATCH_VERSION_C != FTM_OCU_IP_SW_PATCH_VERSION))
    #error "Software Version Numbers of Ftm_Ocu_Ip.c and Ftm_Ocu_Ip.h are different"
#endif

#if (FTM_OCU_IP_VENDOR_ID_C != FTM_OCU_IP_HWACCESS_VENDOR_ID)
    #error "Ftm_Ocu_Ip.c and Ftm_Ocu_Ip_HwAccess.h have different vendor ids"
#endif

/* Check if  source file and Ftm_Ocu_Ip_HwAccess.h file are of the same Autosar version */
#if ((FTM_OCU_IP_AR_RELEASE_MAJOR_VERSION_C != FTM_OCU_IP_HWACCESS_AR_RELEASE_MAJOR_VERSION) || \
     (FTM_OCU_IP_AR_RELEASE_MINOR_VERSION_C != FTM_OCU_IP_HWACCESS_AR_RELEASE_MINOR_VERSION) || \
     (FTM_OCU_IP_AR_RELEASE_REVISION_VERSION_C != FTM_OCU_IP_HWACCESS_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Ftm_Ocu_Ip.c and Ftm_Ocu_Ip_HwAccess.h are different"
#endif

/* Check if source file and Ftm_Ocu_Ip_HwAccess.h file are of the same Software version */
#if ((FTM_OCU_IP_SW_MAJOR_VERSION_C != FTM_OCU_IP_HWACCESS_SW_MAJOR_VERSION) || \
     (FTM_OCU_IP_SW_MINOR_VERSION_C != FTM_OCU_IP_HWACCESS_SW_MINOR_VERSION) || \
     (FTM_OCU_IP_SW_PATCH_VERSION_C != FTM_OCU_IP_HWACCESS_SW_PATCH_VERSION))
    #error "Software Version Numbers of Ftm_Ocu_Ip.c and Ftm_Ocu_Ip_HwAccess.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
#if(STD_ON == OCU_DEV_ERROR_DETECT)
    /* Check if this source file and Devassert.h file are of the same Autosar version */
    #if ((FTM_OCU_IP_AR_RELEASE_MAJOR_VERSION_C != DEVASSERT_AR_RELEASE_MAJOR_VERSION) || \
        (FTM_OCU_IP_AR_RELEASE_MINOR_VERSION_C != DEVASSERT_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of Ftm_Ocu_Ip.c and Devassert.h are different"
    #endif
#endif
    
    /* Check if this source file and SchM_Ocu.h file are of the same Autosar version */
    #if ((FTM_OCU_IP_AR_RELEASE_MAJOR_VERSION_C != SCHM_OCU_AR_RELEASE_MAJOR_VERSION) || \
        (FTM_OCU_IP_AR_RELEASE_MINOR_VERSION_C != SCHM_OCU_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of Ftm_Ocu_Ip.c and SchM_Ocu.h are different"
    #endif
    
#if (defined(OCU_ENABLE_USER_MODE_SUPPORT) && (STD_ON == OCU_ENABLE_USER_MODE_SUPPORT))
    /* Check if this source file and RegLockMacros.h file are of the same Autosar version */
    #if ((FTM_OCU_IP_AR_RELEASE_MAJOR_VERSION_C != REGLOCKMACROS_AR_RELEASE_MAJOR_VERSION) || \
        (FTM_OCU_IP_AR_RELEASE_MINOR_VERSION_C != REGLOCKMACROS_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of Ftm_Ocu_Ip.c and RegLockMacros.h are different"
    #endif
#endif

    /* Check if this source file and OsIf.h file are of the same Autosar version */
    #if ((FTM_OCU_IP_AR_RELEASE_MAJOR_VERSION_C != OSIF_AR_RELEASE_MAJOR_VERSION) || \
        (FTM_OCU_IP_AR_RELEASE_MINOR_VERSION_C != OSIF_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of Ftm_Ocu_Ip.c and OsIf.h are different"
    #endif
#endif

/*================================================================================================================
*                         LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================================*/
/**
@brief Enum containing the possible states of the Ocu driver
*/
typedef enum
{
    FTM_OCU_IP_DRV_STATE_UNINIT = 0,    /**< @brief Ocu driverl state - uninitialized */
    FTM_OCU_IP_DRV_STATE_IDLE           /**< @brief Ocu driverl state - Idle */
} Ftm_Ocu_Ip_GlobalDrvStateType;

/**
* @brief This enumerated type allows the selection of channel status type.
*
*/
typedef enum
{
    FTM_OCU_IP_CH_STATE_UNINITIALIZED = 0,  /**< @brief Ocu channel state - uninitialized */
    FTM_OCU_IP_CH_STATE_INITIALIZED,        /**< @brief Ocu channel state - initialized */
    FTM_OCU_IP_CH_STATE_STOPPED,            /**< @brief Ocu channel state - stopped */
    FTM_OCU_IP_CH_STATE_RUNNING             /**< @brief Ocu channel state - running */
} Ftm_Ocu_Ip_ChannelStateType;   /* PRQA S 3448*/

/**
* @brief This enumerated type containing infor of pin associated with the corresponding channel is used or not.
*
*/
typedef enum
{
    FTM_OCU_IP_CH_PIN_UNUSED = 0,  /**< @brief Ocu channel pin - unused */
    FTM_OCU_IP_CH_PIN_USED         /**< @brief Ocu channel pin - used */
} Ftm_Ocu_Ip_ChannelPinUseType;   

/* Function signature for user access allow. */
#if (defined(OCU_ENABLE_USER_MODE_SUPPORT) && (STD_ON == OCU_ENABLE_USER_MODE_SUPPORT))
#if (defined(MCAL_FTM_REG_PROT_AVAILABLE) && (STD_ON == MCAL_FTM_REG_PROT_AVAILABLE))
static void Ftm_Ocu_Ip_SetUserAccessAllowed(uint32 FtmBaseAddr);
#define Call_Ftm_Ocu_Ip_SetUserAccessAllowed(BaseAddr) OsIf_Trusted_Call1param(Ftm_Ocu_Ip_SetUserAccessAllowed,(BaseAddr))
#endif
#endif


/*================================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*================================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================================*/

#define OCU_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Ocu_MemMap.h"

#if (defined(OCU_ENABLE_USER_MODE_SUPPORT) && (STD_ON == OCU_ENABLE_USER_MODE_SUPPORT))
#if (defined(MCAL_FTM_REG_PROT_AVAILABLE) && (STD_ON == MCAL_FTM_REG_PROT_AVAILABLE))
/** @brief base address array for FTM */
static const uint32 FTM_BASE_ADDR32[] = IP_FTM_BASE_ADDRS;
#endif
#endif

/**
* @brief Pointer to FTM IP configuration structure - the pointer is valid only when the driver is in initialized state
*/
static const Ftm_Ocu_Ip_ModuleConfigType * Ftm_Ocu_Ip_spcxIpConfig;

#define OCU_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Ocu_MemMap.h"

#define OCU_START_SEC_VAR_CLEARED_8
#include "Ocu_MemMap.h"

/**
* @brief    Variable storing the current state of the Ocu driver
*/
static Ftm_Ocu_Ip_GlobalDrvStateType Ftm_Ocu_Ip_sGlobalDrvState = FTM_OCU_IP_DRV_STATE_UNINIT;

/**
* @brief    This arrays shall be used to store the internal running state of each OCU channel.
* @details  This array shall be initialized by Ocu_Init() function and shall be used by all APIs' which
            require a certain mode to function.
            Possible values for each channel: FTM_OCU_IP_CH_STATE_UNINITIALIZED, FTM_OCU_IP_CH_STATE_INITIALIZED,
            FTM_OCU_IP_CH_STATE_STOPPED, FTM_OCU_IP_CH_STATE_RUNNING
*/
static Ftm_Ocu_Ip_ChannelStateType Ftm_Ocu_Ip_saxChannelState[OCU_FTM_INSTANCE_COUNT][OCU_FTM_CHANNEL_COUNT] = {{FTM_OCU_IP_CH_STATE_UNINITIALIZED}};

/**
* @brief    This arrays shall be used to store the action information for each FTM channel
* @details  This array shall be initialized by Ocu_Init() and Ocu_SetPinAction().
*           This data shall be used by Ftm_Ocu_Ip_StartChannel to replace the information erased when
*           Ftm_Ocu_Ip_StopChannel was called.
*/
static uint8 Ftm_Ocu_Ip_axPinAction[OCU_FTM_INSTANCE_COUNT][OCU_FTM_CHANNEL_COUNT] = {{(uint8)FTM_OCU_SET_LOW}};

/**
* @brief    This arrays shall be used to store the status of output pin for each FTM channel.
* @details  This array shall be initialized by Ocu_Init().
*           This data shall be used by Ocu_SetPinAction and Ocu_SetPinState to bypass function if 
*           pin associated with the channel is not configured.
*/
static Ftm_Ocu_Ip_ChannelPinUseType Ftm_Ocu_Ip_axChannelPinUsedState[OCU_FTM_INSTANCE_COUNT][OCU_FTM_CHANNEL_COUNT] = {{FTM_OCU_IP_CH_PIN_UNUSED}};

#define OCU_STOP_SEC_VAR_CLEARED_8
#include "Ocu_MemMap.h"


#define OCU_START_SEC_VAR_CLEARED_16
#include "Ocu_MemMap.h"

#if((OCU_SET_RELATIVE_THRESHOLD_API == STD_ON) || (OCU_SET_ABSOLUTE_THRESHOLD_API == STD_ON))
/**
* @brief    This arrays shall be used to store the max counter value for each FTM channel
* @details  This array shall be initialized by Ocu_Init().
*           This data shall be used by Ocu_GetMaxCounterValue() and Ocu_SetRelativeThreshold()
*/
static uint16 Ftm_Ocu_Ip_sau16MaxCounterVals[OCU_FTM_INSTANCE_COUNT][OCU_FTM_CHANNEL_COUNT];
#endif

#define OCU_STOP_SEC_VAR_CLEARED_16
#include "Ocu_MemMap.h"

/*================================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================================*/

/*================================================================================================================
*                                      GLOBAL MACROS
==================================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/
#define OCU_START_SEC_CONST_UNSPECIFIED
#include "Ocu_MemMap.h"
/** @brief  Array of FTM peripheral base pointers */
Ftm_Ocu_Ip_xRegLayoutType * const Ftm_Ocu_Ip_gapcxBase[] = IP_FTM_BASE_PTRS;
#define OCU_STOP_SEC_CONST_UNSPECIFIED
#include "Ocu_MemMap.h"
#define OCU_START_SEC_VAR_INIT_UNSPECIFIED
#include "Ocu_MemMap.h"
#if (OCU_NOTIFICATION_SUPPORTED == STD_ON)
/** @brief Global array variable used to channel state for process common interrupt */
Ftm_Ocu_Ip_ChStateType Ftm_Ocu_Ip_gaxChState[OCU_FTM_INSTANCE_COUNT][OCU_FTM_CHANNEL_COUNT] = {{{(boolean)FALSE, NULL_PTR, (uint16)OCU_FTM_INVALID_CHANNEL_NUM}}};
#endif
#define OCU_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Ocu_MemMap.h"

#define OCU_START_SEC_CODE
#include "Ocu_MemMap.h"
/*==================================================================================================
*                                  LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

#if((OCU_SET_ABSOLUTE_THRESHOLD_API  == STD_ON) || (OCU_SET_RELATIVE_THRESHOLD_API  == STD_ON))
/**
* @brief          This internal function determines status of the compare match after the new threshold was written.  
* @details        This function compare systematic the input parameter values to determine if the 
*                 compare-match will occur in the given interval or has already occurred. 
*                 The reference interval if composed of all integer value between the StartIntervalValue and 
*                 EndIntervalValue, considering also the possibility of counter over-run.
*                 I.e. considering a 8bit counter if StartIntervalValue = 253 and  EndIntervalValue = 5 than 
*                 the values inside the interval are {253, 254, 255, 0, 1, 2, 3, 4} and all other values are 
*                 outside reference interval.
*
* @param[in]      PostCmWriteValue        Value of the counter after Compare match was written
* @param[in]      StartIntervalValue      Start value of the reference interval
* @param[in]      EndIntervalValue        End value of the reference interval
*
* @return         Ftm_Ocu_Ip_ValueType           Compare match was written in or outside the given interval
* @retval         OCU_FTM_CM_IN_REF_INTERVAL  Compare match was written inside the reference interval
* @retval         OCU_FTM_CM_OUT_REF_INTERVAL  Compare match was written outside the reference interval
*         .
*/
static Ftm_Ocu_Ip_ReturnType Ftm_Ocu_Ip_DetermineNextCmStatus(Ftm_Ocu_Ip_ValueType PostCmWriteValue, Ftm_Ocu_Ip_ValueType StartIntervalValue, Ftm_Ocu_Ip_ValueType EndIntervalValue);
#endif

/*!
 * @brief Initializes the FTM module.
 * @details This function will enable the FlexTimer module and selects one pre-scale factor for the FTM clock source.
 *
 * @param[in] acpcFtmBase The FTM base address pointer
 * @param[in] ClockPresc The FTM peripheral clock pre-scale divider
 */
static void Ftm_Ocu_Ip_InitModule(Ftm_Ocu_Ip_xRegLayoutType * const acpFtmBase, uint8 ClockPresc);

/*================================================================================================================
*                                  GLOBAL FUNCTION PROTOTYPES
==================================================================================================================*/

/*================================================================================================================
*                                      LOCAL FUNCTIONS
==================================================================================================================*/

#if((OCU_SET_ABSOLUTE_THRESHOLD_API  == STD_ON) || (OCU_SET_RELATIVE_THRESHOLD_API  == STD_ON))
/**
* @brief    This internal function determines status of the compare match after the new threshold was written.  
*         .
*/
static Ftm_Ocu_Ip_ReturnType Ftm_Ocu_Ip_DetermineNextCmStatus(Ftm_Ocu_Ip_ValueType PostCmWriteValue, Ftm_Ocu_Ip_ValueType StartIntervalValue, Ftm_Ocu_Ip_ValueType EndIntervalValue)
{
    /* Variable to store the value returned by the function */ 
    Ftm_Ocu_Ip_ReturnType RetValue = OCU_FTM_CM_IN_REF_INTERVAL;
    
    /* check if compare match will happen before counter roll-over */
    if(StartIntervalValue <= EndIntervalValue)
    {
        /* counter is not expected to roll-over */
        /* check if post-update value is inside the compare match interval */
        RetValue = ((StartIntervalValue <= PostCmWriteValue) && (PostCmWriteValue <= EndIntervalValue)) ? OCU_FTM_CM_IN_REF_INTERVAL : OCU_FTM_CM_OUT_REF_INTERVAL;
    }
    else
    {
        /* counter has rolled-over */
        /* check if post-update value is outside the compare match interval */
        RetValue = ((PostCmWriteValue < StartIntervalValue) && (PostCmWriteValue > EndIntervalValue)) ?  OCU_FTM_CM_OUT_REF_INTERVAL : OCU_FTM_CM_IN_REF_INTERVAL;
    }

    return RetValue;
}
#endif

/*!
 * @brief Initializes the FTM module.
 *
 */
static void Ftm_Ocu_Ip_InitModule(Ftm_Ocu_Ip_xRegLayoutType * const acpFtmBase, uint8 ClockPresc)
{
    /* Use FTM mode */
    Ftm_Ocu_Ip_SetEnFtmModule(acpFtmBase, TRUE);
    Ftm_Ocu_Ip_SetClockPrescaler(acpFtmBase, ClockPresc);
}

/*================================================================================================================
*                                      GLOBAL FUNCTIONS
==================================================================================================================*/



/*=================================================================================================================*/
#if (defined(OCU_ENABLE_USER_MODE_SUPPORT) && (STD_ON == OCU_ENABLE_USER_MODE_SUPPORT))
#if (defined(MCAL_FTM_REG_PROT_AVAILABLE) && (STD_ON == MCAL_FTM_REG_PROT_AVAILABLE))
/**
 * @brief        Enables FTM registers writing in User Mode by configuring REG_PROT
 * @details      Sets the UAA (User Access Allowed) bit of the FTM IP allowing FTM registers writing in User Mode
 *
 * @param[in]    FtmBaseAddr
 *
 * @return       none
 *
 * @pre          Should be executed in supervisor mode
 */
static void Ftm_Ocu_Ip_SetUserAccessAllowed(uint32 FtmBaseAddr)
{
    SET_USER_ACCESS_ALLOWED(FtmBaseAddr, FTM_PROT_MEM_U32);
}
#endif
#endif

/**
 * @brief   This function initializes all internals variables of the driver.
 *
 */
void Ftm_Ocu_Ip_Init(const Ftm_Ocu_Ip_ModuleConfigType * const pFtmIpConfig)
{
    uint8 ModuleIdx;        /* index value of FTM Module this channel belongs to */
    uint8 ChLoopIdx;        /* Channel index used in the loop */
    uint32 u32RegSwOCtrl;   /* Temporary value of SWOCTRL register */
    uint8 PinAction;        /* Store pin action from configured data */

    /* FTM channel and instance numbers */
    uint8 InstNum;
    uint8 ChNum;

    /* Pointer to FTM channel configuration */
    const Ftm_Ocu_Ip_ChannelConfigType * pFtmChannelCfg = NULL_PTR;
    /* Pointer to FTM Module configuration */    
    const Ftm_Ocu_Ip_SpecificIpConfigType * pFtmModuleCfg = NULL_PTR;

#if (STD_ON == OCU_DEV_ERROR_DETECT)
    DevAssert(NULL_PTR != pFtmIpConfig);
#endif

    if (NULL_PTR == Ftm_Ocu_Ip_spcxIpConfig)
    {
        /* Save configuration pointer in a local variable */
        Ftm_Ocu_Ip_spcxIpConfig = pFtmIpConfig;

#if (STD_ON == OCU_DEV_ERROR_DETECT)
        DevAssert(Ftm_Ocu_Ip_spcxIpConfig->NumModules <= OCU_FTM_INSTANCE_COUNT);
#endif

        /* initialize registry for all used modules */
        for (ModuleIdx = 0U;  ModuleIdx < Ftm_Ocu_Ip_spcxIpConfig->NumModules; ++ModuleIdx)
        {
            /* Get pointer to configuration data of the FTM module */
            pFtmModuleCfg = &(*Ftm_Ocu_Ip_spcxIpConfig->pcxModulesConfig)[ModuleIdx];
#if (STD_ON == OCU_DEV_ERROR_DETECT)
            DevAssert((0U < Ftm_Ocu_Ip_spcxIpConfig->NumChannels) && (Ftm_Ocu_Ip_spcxIpConfig->NumChannels <= OCU_NUM_HW_CHANNELS));
#endif
            u32RegSwOCtrl = 0U;
#if (defined(OCU_SIM_AVAILABLE) && (STD_ON == OCU_SIM_AVAILABLE))
#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
            /* The FTM channel output state is retained when the channel is in output mode.*/
            OsIf_Trusted_Call1param(Ftm_Ocu_Ip_SetOutputPinCtrlBit, pFtmModuleCfg->ModuleId);
#else   
            /* The FTM channel output state is retained when the channel is in output mode.*/
            Ftm_Ocu_Ip_SetOutputPinCtrlBit(pFtmModuleCfg->ModuleId);
#endif
#endif
            /* Loop all FTM channels and perform Init actions for channels beloging to a given module*/
            for (ChLoopIdx = 0U; ChLoopIdx < (Ftm_Ocu_Ip_spcxIpConfig->NumChannels); ++ChLoopIdx)
            {
                /* Get pointer to configuration of FTM channel */
                pFtmChannelCfg = &(*Ftm_Ocu_Ip_spcxIpConfig->pcxChannelsConfig)[ChLoopIdx];

                /* Get FTM channel and instance numbers from Hw Channel Id */
                InstNum = Ftm_Ocu_Ip_GetInstanceNum(pFtmChannelCfg->HwChannel);
                ChNum   = Ftm_Ocu_Ip_GetChannelNum(pFtmChannelCfg->HwChannel);

#if (STD_ON == OCU_DEV_ERROR_DETECT)
                DevAssert((ChNum < OCU_FTM_CHANNEL_COUNT) && (InstNum < OCU_FTM_INSTANCE_COUNT));
#endif
                /* check if the current hw channel belongs to the current hardware FTM module */
                if(InstNum == pFtmModuleCfg->ModuleId)
                {
#if (defined(OCU_ENABLE_USER_MODE_SUPPORT) && (STD_ON == OCU_ENABLE_USER_MODE_SUPPORT))
#if (defined(MCAL_FTM_REG_PROT_AVAILABLE) && (STD_ON == MCAL_FTM_REG_PROT_AVAILABLE))
                    /* Register Protection - Set UAA bit in GCR - allow USER MODE access */
                    OsIf_Trusted_Call1param(Ftm_Ocu_Ip_SetUserAccessAllowed, FTM_BASE_ADDR32[InstNum]);
#endif
#endif
                    /* If write protection is enabled, then disable it. */
                    if (0U != (Ftm_Ocu_Ip_gapcxBase[InstNum]->FMS & FTM_FMS_WPEN_MASK))
                    {
                        /* Disable write protection */
                        Ftm_Ocu_Ip_gapcxBase[InstNum]->MODE |= FTM_MODE_WPDIS_MASK;
                    }

                    /*  Configure MODE, FTMEN = 0 means no buffer mechanism is used.
                     *  WPDIS bit is set to disable write protection. */
                    Ftm_Ocu_Ip_SetModeRegVal(Ftm_Ocu_Ip_gapcxBase[InstNum], FTM_MODE_WPDIS_MASK);

                    /* Mask the channels outputs using SYNCHOM = 0.
                     * Two clocks after the write to OUTMASK, the channels outputs are in the safe value. */
                    Ftm_Ocu_Ip_SetOutmaskSyncOnRisingEdges(Ftm_Ocu_Ip_gapcxBase[InstNum]);

                    /* (Re)Configuration FTM counter and channels to generation of periodic signals */

                    /* Disable the Quadrature Decoder mode. */
                    Ftm_Qdec_Ip_ClearQdecModeEn(Ftm_Ocu_Ip_gapcxBase[InstNum]);

                    /* Disable the clock. */
                    Ftm_Ocu_Ip_SetClockSource(Ftm_Ocu_Ip_gapcxBase[InstNum], (uint8)FTM_CLOCK_SOURCE_NONE);
                    Ftm_Ocu_Ip_SetClockPrescaler(Ftm_Ocu_Ip_gapcxBase[InstNum], (uint8)FTM_CLOCK_DIVID_BY_1);

                    /* Setting counter to count up */
                    Ftm_Ocu_Ip_SetUpCountingMode(Ftm_Ocu_Ip_gapcxBase[InstNum]);

                    /* Disable the timer overflow interrupt */
                    Ftm_Ocu_Ip_SetTimerOverflowInterruptEn(Ftm_Ocu_Ip_gapcxBase[InstNum], FALSE);

                    /* Configure CONF with debug mode. GTBEOUT, GTBEEN, NUMTOF are zero */
                    Ftm_Ocu_Ip_SetBehaviorInDebugMode(Ftm_Ocu_Ip_gapcxBase[InstNum], (pFtmModuleCfg->ModuleControlValue & FTM_CONF_BDMMODE_MASK_U8) >> FTM_CONF_BDMMODE_SHIFT_U8);

                    /* Configure SYNCONF with no buffer mechanism enable */
                    Ftm_Ocu_Ip_SetSyncAndConfigfReg(Ftm_Ocu_Ip_gapcxBase[InstNum], 0U);

                    /* Reset FTMn_CNTIN register */
                    Ftm_Ocu_Ip_SetCounterInitialVal(Ftm_Ocu_Ip_gapcxBase[InstNum], 0U);

                    /* Write FTMn_MOD register */
                    Ftm_Ocu_Ip_SetModuloRegVal(Ftm_Ocu_Ip_gapcxBase[InstNum], pFtmModuleCfg->MaxCounterValue);

#if((OCU_SET_RELATIVE_THRESHOLD_API == STD_ON) || (OCU_SET_ABSOLUTE_THRESHOLD_API == STD_ON))
                    /* Store the max counter value */
                    Ftm_Ocu_Ip_sau16MaxCounterVals[InstNum][ChNum] = pFtmModuleCfg->MaxCounterValue;
#endif

                    /* disable Channel Interrupt CHIE for the given channel */
                    Ftm_Ocu_Ip_SetChannelInterruptEnBit(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum, FALSE);

                    /* Enable output on the FTM channel */
                    Ftm_Ocu_Ip_EnablePwmChannelOutput(Ftm_Ocu_Ip_gapcxBase[InstNum], 1UL << (ChNum + OCU_FTM_SC_PWMEN_SHIFT_U8));

                    /* Define the POL bits */
                    Ftm_Ocu_Ip_ClearChannelPolarity(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum);

                    /*
                     * write FTMn_CSC register, this should be done before writing CV, in order to be in OCU mode
                     * MSB:MSA = 0:1 - output compare mode
                     * ELSB:ELSA = 0:0 - disable output action
                     * clear Channel Flag CHF and disable Channel Interrupt CHIE
                     * Disable DMA
                     */

                    /* write MSB:MSA = 0:1 - output compare mode */
                    Ftm_Ocu_Ip_SetChannelOutputCompareMode(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum);
                    /* Disable DMA */
                    Ftm_Ocu_Ip_DisablesDmaTransfersForChannel(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum);

                    /* write default threshold to CnV */
                    Ftm_Ocu_Ip_SetChCounterMatchVal(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum, pFtmChannelCfg->DefaultThreshold);
                    
                    /* Configure default PIN Action behaviour and initialize the array used to store pin action */
                    PinAction = (uint8)((pFtmChannelCfg->ChannelControlValue & OCU_FTM_PIN_ACTION_MASK_U8) >> OCU_FTM_PIN_ACTION_SHIFT);
                    switch(PinAction)
                    {
                        case (uint8)FTM_OCU_SET_LOW:
                        {
                            Ftm_Ocu_Ip_axPinAction[InstNum][ChNum] = (uint8)FTM_OCU_SET_LOW;
                            /* write ELSB:ELSA = 1:0 - Clear Output on match */
                            Ftm_Ocu_Ip_SetChEdgeLevel(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum, FTM_CLEAR_ON_MATCH);
                        }
                        break;
                        case (uint8)FTM_OCU_SET_HIGH:
                        {
                            Ftm_Ocu_Ip_axPinAction[InstNum][ChNum] = (uint8)FTM_OCU_SET_HIGH;
                            /* write ELSB:ELSA = 1:1 - Set Output on match */
                            Ftm_Ocu_Ip_SetChEdgeLevel(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum, FTM_SET_ON_MATCH);
                        }
                        break;
                        case (uint8)FTM_OCU_SET_TOGGLE:
                        {
                            Ftm_Ocu_Ip_axPinAction[InstNum][ChNum] = (uint8)FTM_OCU_SET_TOGGLE;
                            /* write ELSB:ELSA = 0:1 - Toggle Output on match */
                            Ftm_Ocu_Ip_SetChEdgeLevel(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum, FTM_TOGGLE_ON_MATCH);
                        }
                        break;
                        default:
                        {
                            Ftm_Ocu_Ip_axPinAction[InstNum][ChNum] = (uint8)FTM_OCU_SET_DISABLE;
                            /* write ELSB:ELSA = 0:0 - disable output action */
                            Ftm_Ocu_Ip_SetChEdgeLevel(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum, FTM_DISABLE_OUTPUT);
                        }
                        break;
                    }
                    
                    /* Write FTMn_COMBINE register for current pair-channel, MCOMBINE, FAULTEN, SYNCEN, DTEN, DECAP, DECAPEN, COMP, COMBINE are zero
                     * Eg. current channel is 5, then pair-channel is 3th, bit field need to be clear: 0x00ff0000 */
                    if(0U == (ChNum & 0x01U))
                    {
                        /* Write DECAP & DECAPEN */
                        Ftm_Ocu_Ip_ClearDualEdgeCaptureMode(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum >> 1U);
                        /* Write COMBINE */
                        Ftm_Ocu_Ip_ClearDualChCombineMode(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum >> 1U);
                        /* Write MCOMBINE */
                        Ftm_Ocu_Ip_ClearDualChModifiedCombineMode(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum >> 1U);
                        /* Write SYNCEN */
                        Ftm_Ocu_Ip_ClearDualChPwmSyncEn(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum >> 1U);
                        /* Write DTEN */
                        Ftm_Ocu_Ip_ClearDualChDeadTimeInsertionEn(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum >> 1U);
                        /* Write COMP */
                        Ftm_Ocu_Ip_ClearDualChComplementEn(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum >> 1U);
                    }
                    /* If pin is used, it should be enter software control mode */
                    if(0U != (pFtmChannelCfg->ChannelControlValue & OCU_FTM_OUTPIN_USED_MASK_U8))
                    {
                        /* Initialize global pin data for current channel*/
                        Ftm_Ocu_Ip_axChannelPinUsedState[InstNum][ChNum] = FTM_OCU_IP_CH_PIN_USED;
                        /* Setting forced value for current channel*/
                        u32RegSwOCtrl |= ((((uint32)pFtmChannelCfg->ChannelControlValue) & OCU_FTM_PIN_STATE_MASK_U8) >> OCU_FTM_PIN_STATE_SHIFT) << (ChNum + OCU_FTM_SWOCTRL_FORCED_VALUE_OFFSET);
                        /* Enable software output control */
                        u32RegSwOCtrl |= (uint32)(1UL << ChNum);
                    }

                    /* clear Channel Flag CHF */
                    Ftm_Ocu_Ip_ClearChannelEventFlag(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum);
                    /* Clears the channel event status */
                    Ftm_Ocu_Ip_ClearChannelEventStatus(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum);

#if (OCU_NOTIFICATION_SUPPORTED == STD_ON)
                    Ftm_Ocu_Ip_gaxChState[InstNum][ChNum].mChannelInit      = TRUE;
                    Ftm_Ocu_Ip_gaxChState[InstNum][ChNum].mCallbackFunc     = pFtmChannelCfg->mCallbackFunc;
                    Ftm_Ocu_Ip_gaxChState[InstNum][ChNum].mCallbackParam    = pFtmChannelCfg->mCallbackParam;
#endif
                    /* Write SWOCTRL with calculated value */
                    Ftm_Ocu_Ip_SetSwOutputControlReg(Ftm_Ocu_Ip_gapcxBase[InstNum], u32RegSwOCtrl);

                    /* Process clock source and prescale from configured data */
                    Ftm_Ocu_Ip_SetClockSource(Ftm_Ocu_Ip_gapcxBase[InstNum], (pFtmModuleCfg->ModuleControlValue & OCU_FTM_CLOCK_SOURCE_MASK_U8) >> OCU_FTM_CLOCK_SOURCE_SHIFT);

                    /* Clear the Timer Overflow Interrupt Flag */
                    Ftm_Ocu_Ip_ClearTimerOverflowInterruptFlag(Ftm_Ocu_Ip_gapcxBase[InstNum]);

                    /* FTMEN = 1 active buffer mechanism */
                    Ftm_Ocu_Ip_InitModule(Ftm_Ocu_Ip_gapcxBase[InstNum], (pFtmModuleCfg->ModuleControlValue & OCU_FTM_CLOCK_DIV_MASK_U8) >> OCU_FTM_CLOCK_DIV_SHIFT);

                    /* Initialize global data */
                    Ftm_Ocu_Ip_saxChannelState[InstNum][ChNum] = FTM_OCU_IP_CH_STATE_INITIALIZED;
                }
            }
        }
        Ftm_Ocu_Ip_sGlobalDrvState = FTM_OCU_IP_DRV_STATE_IDLE;
    }
}

/*=================================================================================================================*/
#if(OCU_DEINIT_API == STD_ON)
/**
 * @brief   This function deinitializes the driver.
 *
 */
void Ftm_Ocu_Ip_DeInit(void)
{
    uint8 ModuleIdx;    /* index value of FTM Module this channel belongs to */
    uint8 ChLoopIdx;    /* Channel index used in the loop */

    /* FTM channel and instance numbers */
    uint8 InstNum;
    uint8 ChNum;

    /* Pointer to FTM channel configuration */
    const Ftm_Ocu_Ip_ChannelConfigType * pFtmChannelCfg = NULL_PTR;
    /* Pointer to FTM Module configuration */
    const Ftm_Ocu_Ip_SpecificIpConfigType * pFtmModuleCfg = NULL_PTR;

#if (STD_ON == OCU_DEV_ERROR_DETECT)
    DevAssert(NULL_PTR != Ftm_Ocu_Ip_spcxIpConfig);
#endif

    if (NULL_PTR != Ftm_Ocu_Ip_spcxIpConfig)
    {

#if (STD_ON == OCU_DEV_ERROR_DETECT)
        DevAssert(Ftm_Ocu_Ip_spcxIpConfig->NumModules <= OCU_FTM_INSTANCE_COUNT);
#endif
        for (ModuleIdx = 0U;  ModuleIdx < Ftm_Ocu_Ip_spcxIpConfig->NumModules; ++ModuleIdx)
        {
            /* Get pointer to configuration data of the FTM module */
            pFtmModuleCfg = &(*Ftm_Ocu_Ip_spcxIpConfig->pcxModulesConfig)[ModuleIdx];

#if (STD_ON == OCU_DEV_ERROR_DETECT)
            DevAssert((0U < Ftm_Ocu_Ip_spcxIpConfig->NumChannels) && (Ftm_Ocu_Ip_spcxIpConfig->NumChannels <= OCU_NUM_HW_CHANNELS));
#endif
            /* Loop all FTM channels and perform deInit actions */
            for (ChLoopIdx = 0U; ChLoopIdx < (Ftm_Ocu_Ip_spcxIpConfig->NumChannels); ++ChLoopIdx)
            {
                /* Get pointer to configuration of FTM channel */
                pFtmChannelCfg = &(*Ftm_Ocu_Ip_spcxIpConfig->pcxChannelsConfig)[ChLoopIdx];    

                /* Get FTM channel and instance numbers from Hw Channel Id */
                InstNum = Ftm_Ocu_Ip_GetInstanceNum(pFtmChannelCfg->HwChannel);
                ChNum   = Ftm_Ocu_Ip_GetChannelNum(pFtmChannelCfg->HwChannel);

#if (STD_ON == OCU_DEV_ERROR_DETECT)
                DevAssert((ChNum < OCU_FTM_CHANNEL_COUNT) && (InstNum < OCU_FTM_INSTANCE_COUNT));
#endif
                /* check if the current hw channel belongs to the current hardware FTM module */
                if(InstNum == pFtmModuleCfg->ModuleId)
                {
                    /* Reset Ftm_Ocu_Ip_axPinAction */
                    Ftm_Ocu_Ip_axPinAction[InstNum][ChNum] = (uint8)FTM_OCU_SET_LOW;

                    /** Reset MOD */
                    Ftm_Ocu_Ip_SetModuloRegVal(Ftm_Ocu_Ip_gapcxBase[InstNum], 0U);

                    /* Reset FTMEN bit */
                    Ftm_Ocu_Ip_SetEnFtmModule(Ftm_Ocu_Ip_gapcxBase[InstNum], FALSE);

                    /* Clear BDMMODE bits */
                    Ftm_Ocu_Ip_SetBehaviorInDebugMode(Ftm_Ocu_Ip_gapcxBase[InstNum], (uint8)FTM_BDM_MODE_00);

                    /* write FTMn_SC register to disable clock */
                    Ftm_Ocu_Ip_SetSCRegVal(Ftm_Ocu_Ip_gapcxBase[InstNum], 0UL);
#if((OCU_SET_RELATIVE_THRESHOLD_API == STD_ON) || (OCU_SET_ABSOLUTE_THRESHOLD_API == STD_ON))
                    /* Reset Ftm_Ocu_Ip_sau16MaxCounterVals */
                    Ftm_Ocu_Ip_sau16MaxCounterVals[InstNum][ChNum] = 0U;
#endif
                    /* Reset CSC and CV */
                    Ftm_Ocu_Ip_SetChStatusAndControlReg(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum, 0UL);
                    Ftm_Ocu_Ip_SetChCounterMatchVal(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum, 0UL);

                    /* Reset the CH(n)OC bit to disable the control of the corresponding channel (n) output by software */
                    Ftm_Ocu_Ip_ClearChSwOutputControlEn(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum);
                    /* Reset the CH(n)OCV bits to select the value that is forced at the corresponding channel (n) output as zero */
                    Ftm_Ocu_Ip_ClearChSwOutputControlVal(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum);

                    /* disable Channel Interrupt CHIE for the given channel */
                    Ftm_Ocu_Ip_SetChannelInterruptEnBit(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum, FALSE);
                    /* clear Channel Flag CHF */
                    Ftm_Ocu_Ip_ClearChannelEventFlag(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum);
                    /* Clears the channel event status */
                    Ftm_Ocu_Ip_ClearChannelEventStatus(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum);

#if (OCU_NOTIFICATION_SUPPORTED == STD_ON)
                    Ftm_Ocu_Ip_gaxChState[InstNum][ChNum].mChannelInit   = FALSE;
                    Ftm_Ocu_Ip_gaxChState[InstNum][ChNum].mCallbackFunc  = NULL_PTR;
                    Ftm_Ocu_Ip_gaxChState[InstNum][ChNum].mCallbackParam = (uint16)OCU_FTM_INVALID_CHANNEL_NUM;
#endif
                    /* initialize global data */
                    Ftm_Ocu_Ip_saxChannelState[InstNum][ChNum] = FTM_OCU_IP_CH_STATE_UNINITIALIZED;
                }
            }
        }

        /* Set local configuration pointer back to NULL, flagging that the driver is deinitialized */
        Ftm_Ocu_Ip_spcxIpConfig = NULL_PTR;
        Ftm_Ocu_Ip_sGlobalDrvState = FTM_OCU_IP_DRV_STATE_UNINIT;
    }
}
#endif /* OCU_DE_INIT_API */

/*=================================================================================================================*/
/**
 * @brief   Ocu driver function for starting the FTM timer channel.
 *
 */
void Ftm_Ocu_Ip_StartChannel(uint8 InstNum, uint8 ChNum)
{
#if (STD_ON == OCU_DEV_ERROR_DETECT)
    DevAssert((ChNum < OCU_FTM_CHANNEL_COUNT) && (InstNum < OCU_FTM_INSTANCE_COUNT));
#endif

    if (    (FTM_OCU_IP_DRV_STATE_IDLE == Ftm_Ocu_Ip_sGlobalDrvState) &&
            (   (FTM_OCU_IP_CH_STATE_INITIALIZED == Ftm_Ocu_Ip_saxChannelState[InstNum][ChNum]) ||
                (FTM_OCU_IP_CH_STATE_STOPPED == Ftm_Ocu_Ip_saxChannelState[InstNum][ChNum]) ) )
    {
        /* enter critical section */
        SchM_Enter_Ocu_OCU_EXCLUSIVE_AREA_11();

        /* Get OcuAction data from Ftm_Ocu_Ip_axPinAction[] */
        switch(Ftm_Ocu_Ip_axPinAction[InstNum][ChNum])
        {
            case (uint8)FTM_OCU_SET_LOW:
            {
                /* write ELSB:ELSA = 1:0 - Clear Output on match */
                Ftm_Ocu_Ip_SetChEdgeLevel(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum, FTM_CLEAR_ON_MATCH);
            }
            break;
            case (uint8)FTM_OCU_SET_HIGH:
            {
                /* write ELSB:ELSA = 1:1 - Set Output on match */
                Ftm_Ocu_Ip_SetChEdgeLevel(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum, FTM_SET_ON_MATCH);
            }
            break; 
            case (uint8)FTM_OCU_SET_TOGGLE:
            {
                /* write ELSB:ELSA = 0:1 - Toggle Output on match */
                Ftm_Ocu_Ip_SetChEdgeLevel(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum, FTM_TOGGLE_ON_MATCH);
            }
            break; 
            default:
            {
                /* write ELSB:ELSA = 0:0 - disable output action */
                Ftm_Ocu_Ip_SetChEdgeLevel(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum, FTM_DISABLE_OUTPUT);
            }
            break;
        }

        /* Release the channel software output control */
        Ftm_Ocu_Ip_ClearChSwOutputControlEn(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum);

        /* clear CHF bit */
        Ftm_Ocu_Ip_ClearChannelEventFlag(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum);

        /* Clears the channel event status */
        Ftm_Ocu_Ip_ClearChannelEventStatus(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum);

#if (STD_OFF == OCU_ENABLE_ISR_BY_EN_DIS_NOTIFICATION)
        /* enable interrupts for given channel */
        Ftm_Ocu_Ip_SetChannelInterruptEnBit(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum, TRUE);
#endif /* OCU_ENABLE_ISR_BY_EN_DIS_NOTIFICATION */

        /* exit critical section */
        SchM_Exit_Ocu_OCU_EXCLUSIVE_AREA_11();

        /* set channel status to 'RUNNING' */
        Ftm_Ocu_Ip_saxChannelState[InstNum][ChNum] = FTM_OCU_IP_CH_STATE_RUNNING;
    }
}

/*=================================================================================================================*/
/**
 * @brief   Ocu driver function for stopping the FTM timer channel.
 *
 */
void Ftm_Ocu_Ip_StopChannel(uint8 InstNum, uint8 ChNum)
{
#if (STD_ON == OCU_DEV_ERROR_DETECT)
    DevAssert((ChNum < OCU_FTM_CHANNEL_COUNT) && (InstNum < OCU_FTM_INSTANCE_COUNT));
#endif

    if (    (FTM_OCU_IP_DRV_STATE_IDLE == Ftm_Ocu_Ip_sGlobalDrvState) &&
            (   (FTM_OCU_IP_CH_STATE_INITIALIZED == Ftm_Ocu_Ip_saxChannelState[InstNum][ChNum]) ||
                (FTM_OCU_IP_CH_STATE_RUNNING == Ftm_Ocu_Ip_saxChannelState[InstNum][ChNum]) ) )
    {
        /* enter critical section TODO check */
        SchM_Enter_Ocu_OCU_EXCLUSIVE_AREA_12();

        /* write ELSB:ELSA = 0:0 - disable output action */
        Ftm_Ocu_Ip_SetChEdgeLevel(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum, FTM_DISABLE_OUTPUT);

        /* clear CHF bit */
        Ftm_Ocu_Ip_ClearChannelEventFlag(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum);

        /* Clears the channel event status */
        Ftm_Ocu_Ip_ClearChannelEventStatus(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum);

        /* Disable interrupts for given channel */
        Ftm_Ocu_Ip_SetChannelInterruptEnBit(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum, FALSE);

        /* exit critical section */
        SchM_Exit_Ocu_OCU_EXCLUSIVE_AREA_12();

        /* set channel status to 'STOPPED' */
        Ftm_Ocu_Ip_saxChannelState[InstNum][ChNum] = FTM_OCU_IP_CH_STATE_STOPPED;
    }
}

/*=================================================================================================================*/
#if(OCU_GET_COUNTER_API == STD_ON)
/**
 * @brief   Ocu driver function for getting the current counter value for a FTM timer channel.
 *
 */
Ftm_Ocu_Ip_ValueType Ftm_Ocu_Ip_GetCounter(uint8 InstNum)
{
    Ftm_Ocu_Ip_ValueType RetCntVal = 0U;
#if (STD_ON == OCU_DEV_ERROR_DETECT)
    DevAssert(InstNum < OCU_FTM_INSTANCE_COUNT);
#endif

    if (FTM_OCU_IP_DRV_STATE_IDLE == Ftm_Ocu_Ip_sGlobalDrvState)
    {
        /* Read the elapsed time */
        RetCntVal = Ftm_Ocu_Ip_GetCntVal(Ftm_Ocu_Ip_gapcxBase[InstNum]);
    }

    return RetCntVal;
}
#endif /* OCU_GET_COUNTER_API == STD_ON */

/*=================================================================================================================*/ 
#if(OCU_SET_PIN_ACTION_API == STD_ON)
/**
 * @brief   Ocu driver function for setting the Pin Action for the current FTM channel
 *
 */
void Ftm_Ocu_Ip_SetPinAction(uint8 InstNum, uint8 ChNum, Ftm_Ocu_Ip_PinActionType PinAction)
{
#if (STD_ON == OCU_DEV_ERROR_DETECT)
    DevAssert((ChNum < OCU_FTM_CHANNEL_COUNT) && (InstNum < OCU_FTM_INSTANCE_COUNT));
#endif

    if (    (FTM_OCU_IP_DRV_STATE_IDLE == Ftm_Ocu_Ip_sGlobalDrvState) &&
            (FTM_OCU_IP_CH_STATE_RUNNING == Ftm_Ocu_Ip_saxChannelState[InstNum][ChNum]) &&
            (FTM_OCU_IP_CH_PIN_USED == Ftm_Ocu_Ip_axChannelPinUsedState[InstNum][ChNum]))
    {
        /* enter critical section TODO check */
        SchM_Enter_Ocu_OCU_EXCLUSIVE_AREA_13();

        /* Store OcuAcion value to Ftm_Ocu_Ip_axPinAction[] */ 
        switch(PinAction)
        {
            case FTM_OCU_SET_LOW:
            {
                Ftm_Ocu_Ip_axPinAction[InstNum][ChNum] = (uint8)FTM_OCU_SET_LOW;
                /* write ELSB:ELSA = 1:0 - Clear Output on match */
                Ftm_Ocu_Ip_SetChEdgeLevel(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum, FTM_CLEAR_ON_MATCH);
            }
            break;
            case FTM_OCU_SET_HIGH:
            {
                Ftm_Ocu_Ip_axPinAction[InstNum][ChNum] = (uint8)FTM_OCU_SET_HIGH;
                /* write ELSB:ELSA = 1:1 - Set Output on match */
                Ftm_Ocu_Ip_SetChEdgeLevel(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum, FTM_SET_ON_MATCH);
            }
            break;
            case FTM_OCU_SET_TOGGLE:
            {
                Ftm_Ocu_Ip_axPinAction[InstNum][ChNum] = (uint8)FTM_OCU_SET_TOGGLE;
                /* write ELSB:ELSA = 0:1 - Toggle Output on match */
                Ftm_Ocu_Ip_SetChEdgeLevel(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum, FTM_TOGGLE_ON_MATCH);
            }
            break;
            default:
            {
                Ftm_Ocu_Ip_axPinAction[InstNum][ChNum] = (uint8)FTM_OCU_SET_DISABLE;
                /* write ELSB:ELSA = 0:0 - disable output action */
                Ftm_Ocu_Ip_SetChEdgeLevel(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum, FTM_DISABLE_OUTPUT);
            }
            break;
        }

        /* exit critical section */
        SchM_Exit_Ocu_OCU_EXCLUSIVE_AREA_13();
    }
}
#endif /* OCU_SET_PIN_ACTION_API == STD_ON */

/*=================================================================================================================*/
#if(OCU_SET_PIN_STATE_API == STD_ON)
/**
 * @brief   Ocu driver function for setting the Pin State for the current FTM channel
 *
 */
void Ftm_Ocu_Ip_SetPinState(uint8 InstNum, uint8 ChNum, Ftm_Ocu_Ip_PinStateType PinState)
{
    uint32 u32RegSwOCtrl;
#if (STD_ON == OCU_DEV_ERROR_DETECT)
    DevAssert((ChNum < OCU_FTM_CHANNEL_COUNT) && (InstNum < OCU_FTM_INSTANCE_COUNT));
#endif

    if (    (FTM_OCU_IP_DRV_STATE_IDLE == Ftm_Ocu_Ip_sGlobalDrvState) &&
            (FTM_OCU_IP_CH_STATE_RUNNING != Ftm_Ocu_Ip_saxChannelState[InstNum][ChNum]) &&
            (FTM_OCU_IP_CH_PIN_USED == Ftm_Ocu_Ip_axChannelPinUsedState[InstNum][ChNum]))
    {
        /* read current configuration value of SWOCTRL register */
        u32RegSwOCtrl = Ftm_Ocu_Ip_GetSwOutputControlReg(Ftm_Ocu_Ip_gapcxBase[InstNum]);

        /* set output pin to its configured state */
        if(OCU_FTM_HIGH == PinState)
        {
            u32RegSwOCtrl |= (uint32)(1UL << (ChNum + OCU_FTM_SWOCTRL_FORCED_VALUE_OFFSET));
        }
        else
        {
            u32RegSwOCtrl &= (uint32)(~(uint32)(1UL << (ChNum + OCU_FTM_SWOCTRL_FORCED_VALUE_OFFSET)));
        }

        /* Enable software control */   
        u32RegSwOCtrl |= (uint32)(1UL << ChNum);

        /* enter critical section TODO check */
        SchM_Enter_Ocu_OCU_EXCLUSIVE_AREA_14();

        Ftm_Ocu_Ip_SetSwOutputControlReg(Ftm_Ocu_Ip_gapcxBase[InstNum], u32RegSwOCtrl);

        /* exit critical section */
        SchM_Exit_Ocu_OCU_EXCLUSIVE_AREA_14();
    }
}
#endif /* OCU_SET_PIN_STATE_API == STD_ON */

/*=================================================================================================================*/
#if(OCU_SET_RELATIVE_THRESHOLD_API == STD_ON)
/**
 * @brief   The function sets the value of the channel threshold relative to the current value of the counter.
 *
 */
Ftm_Ocu_Ip_ReturnType Ftm_Ocu_Ip_SetRelativeThreshold(uint8 InstNum, uint8 ChNum, Ftm_Ocu_Ip_ValueType RelativeValue)
{
    Ftm_Ocu_Ip_ReturnType RetVal = OCU_FTM_CM_IN_REF_INTERVAL;

    Ftm_Ocu_Ip_ValueType CntValuePreUpdate;   /* CNT register value before computing the update */
    Ftm_Ocu_Ip_ValueType CntValuePostUpdate;  /* CNT register value after computing the update */
    Ftm_Ocu_Ip_ValueType CmpMatchValue;       /* New CNT register value */
#if (STD_ON == OCU_DEV_ERROR_DETECT)
    DevAssert((ChNum < OCU_FTM_CHANNEL_COUNT) && (InstNum < OCU_FTM_INSTANCE_COUNT));
#endif

    if (FTM_OCU_IP_DRV_STATE_IDLE == Ftm_Ocu_Ip_sGlobalDrvState)
    {
        /* Read Counter register */
        CntValuePreUpdate = Ftm_Ocu_Ip_GetCntVal(Ftm_Ocu_Ip_gapcxBase[InstNum]);

        /* Calculate CmpMatchValue, matching can occur at current cycle or next cycle */
        CmpMatchValue = ((CntValuePreUpdate + RelativeValue) % Ftm_Ocu_Ip_sau16MaxCounterVals[InstNum][ChNum]);

        Ftm_Ocu_Ip_SetChCounterMatchVal(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum, CmpMatchValue);

        /* re-Read Counter register */
        CntValuePostUpdate = Ftm_Ocu_Ip_GetCntVal(Ftm_Ocu_Ip_gapcxBase[InstNum]);

        /* check if compare match will happen before counter roll-over */
        RetVal = Ftm_Ocu_Ip_DetermineNextCmStatus(CntValuePostUpdate, CntValuePreUpdate, CmpMatchValue);
    }

    return RetVal;
}
#endif /* OCU_SET_RELATIVE_THRESHOLD_API == STD_ON */

/*=================================================================================================================*/
#if(OCU_SET_ABSOLUTE_THRESHOLD_API == STD_ON)
/**
 * @brief   The function set the value of the channel threshold using an absolute input data.
 *
 */
Ftm_Ocu_Ip_ReturnType Ftm_Ocu_Ip_SetAbsoluteThreshold(uint8 InstNum, uint8 ChNum, Ftm_Ocu_Ip_ValueType ReferenceValue, Ftm_Ocu_Ip_ValueType AbsoluteValue)
{
    Ftm_Ocu_Ip_ReturnType RetVal = OCU_FTM_CM_IN_REF_INTERVAL;

    Ftm_Ocu_Ip_ValueType CntValuePostUpdate;
#if (STD_ON == OCU_DEV_ERROR_DETECT)
    DevAssert((ChNum < OCU_FTM_CHANNEL_COUNT) && (InstNum < OCU_FTM_INSTANCE_COUNT));
#endif

    if (FTM_OCU_IP_DRV_STATE_IDLE == Ftm_Ocu_Ip_sGlobalDrvState)
    {
        /* Set timeout value */
        Ftm_Ocu_Ip_SetChCounterMatchVal(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum, AbsoluteValue);

        /* Read Counter value post update and a constant configurable delay to PostUpdate value to compensate for the execution of the API*/
        CntValuePostUpdate = Ftm_Ocu_Ip_GetCntVal(Ftm_Ocu_Ip_gapcxBase[InstNum]);

        RetVal = Ftm_Ocu_Ip_DetermineNextCmStatus(CntValuePostUpdate, ReferenceValue, AbsoluteValue);
    }
    return RetVal;
}
#endif /* OCU_SET_ABSOLUTE_THRESHOLD_API == STD_ON */

/*=================================================================================================================*/
#if(OCU_SET_CLOCK_MODE_API == STD_ON)
/**
 * @brief       The function changes the prescaler of FTM channel.
 *
 */
void Ftm_Ocu_Ip_SetClockMode(Ftm_Ocu_Ip_SelectPrescalerType Prescaler)
{
    uint8 ModuleIdx;
    const Ftm_Ocu_Ip_SpecificIpConfigType * pFtmModuleCfg;

#if (STD_ON == OCU_DEV_ERROR_DETECT)
    DevAssert(NULL_PTR != Ftm_Ocu_Ip_spcxIpConfig);
#endif
    
    if (NULL_PTR != Ftm_Ocu_Ip_spcxIpConfig)
    {

#if (STD_ON == OCU_DEV_ERROR_DETECT)
        DevAssert(Ftm_Ocu_Ip_spcxIpConfig->NumModules <= OCU_FTM_INSTANCE_COUNT);
#endif

        for (ModuleIdx = 0U;  ModuleIdx < Ftm_Ocu_Ip_spcxIpConfig->NumModules; ++ModuleIdx)
        {
            pFtmModuleCfg = &(*Ftm_Ocu_Ip_spcxIpConfig->pcxModulesConfig)[ModuleIdx];

            if(FTM_OCU_ALTERNATIVE_PRESCALER == Prescaler)
            {
                Ftm_Ocu_Ip_SetClockPrescaler(Ftm_Ocu_Ip_gapcxBase[pFtmModuleCfg->ModuleId], (pFtmModuleCfg->AlternateCtrVal & OCU_FTM_ALT_CLOCK_DIV_MASK_U8) >> OCU_FTM_ALT_CLOCK_DIV_SHIFT);
            }
            else
            {
                Ftm_Ocu_Ip_SetClockPrescaler(Ftm_Ocu_Ip_gapcxBase[pFtmModuleCfg->ModuleId], (pFtmModuleCfg->ModuleControlValue & OCU_FTM_CLOCK_DIV_MASK_U8) >> OCU_FTM_CLOCK_DIV_SHIFT);
            }
        }
    }
}
#endif

/*===============================================================================================*/
#if((OCU_SET_RELATIVE_THRESHOLD_API == STD_ON) || (OCU_SET_ABSOLUTE_THRESHOLD_API == STD_ON))
/**
 * @brief   This function will return max counter value for given channel
 *
 */
uint16 Ftm_Ocu_Ip_GetMaxCounterValue(uint8 InstNum, uint8 ChNum)
{
    uint16 RetMaxCntVal = 0U;
#if (STD_ON == OCU_DEV_ERROR_DETECT)
    DevAssert((ChNum < OCU_FTM_CHANNEL_COUNT) && (InstNum < OCU_FTM_INSTANCE_COUNT));
#endif

    if (FTM_OCU_IP_DRV_STATE_IDLE == Ftm_Ocu_Ip_sGlobalDrvState)
    {
        RetMaxCntVal = Ftm_Ocu_Ip_sau16MaxCounterVals[InstNum][ChNum];
    }
    return RetMaxCntVal;
}

#endif

#if (STD_ON == OCU_NOTIFICATION_SUPPORTED)
/**
 * @brief   This function is used to disable the OCU compare match notification.
 *
 */
void Ftm_Ocu_Ip_DisableNotification(uint8 InstNum, uint8 ChNum)
{
#if (STD_ON == OCU_DEV_ERROR_DETECT)
    DevAssert((ChNum < OCU_FTM_CHANNEL_COUNT) && (InstNum < OCU_FTM_INSTANCE_COUNT));
#endif

    if (FTM_OCU_IP_DRV_STATE_IDLE == Ftm_Ocu_Ip_sGlobalDrvState)
    {
        /* disable interrupts for given channel */
        Ftm_Ocu_Ip_SetChannelInterruptEnBit(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum, FALSE);
    }
}

/**
 * @brief   This function is used to enable the OCU compare match notification of the indexed channel.
 *
 */
void Ftm_Ocu_Ip_EnableNotification(uint8 InstNum, uint8 ChNum)
{
#if (STD_ON == OCU_DEV_ERROR_DETECT)
    DevAssert((ChNum < OCU_FTM_CHANNEL_COUNT) && (InstNum < OCU_FTM_INSTANCE_COUNT));
#endif

    if (FTM_OCU_IP_DRV_STATE_IDLE == Ftm_Ocu_Ip_sGlobalDrvState)
    {
        if (NULL_PTR != Ftm_Ocu_Ip_gaxChState[InstNum][ChNum].mCallbackFunc)
        {
            /* enable interrupts for given channel */
            Ftm_Ocu_Ip_SetChannelInterruptEnBit(Ftm_Ocu_Ip_gapcxBase[InstNum], ChNum, TRUE);
        }
    }
}
#endif

#define OCU_STOP_SEC_CODE
#include "Ocu_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
