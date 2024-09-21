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

/**
*   @file
*
*   @internal
*   @addtogroup adc_ipw Adc Ipw
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
#include "Adc_Ipw.h"
#include "Adc.h" /*TODO: to be removed when separating ADC HLD from IPW*/

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define ADC_VENDOR_ID_IPW_C                    43
#define ADC_AR_RELEASE_MAJOR_VERSION_IPW_C     4
#define ADC_AR_RELEASE_MINOR_VERSION_IPW_C     4
#define ADC_AR_RELEASE_REVISION_VERSION_IPW_C  0
#define ADC_SW_MAJOR_VERSION_IPW_C             1
#define ADC_SW_MINOR_VERSION_IPW_C             0
#define ADC_SW_PATCH_VERSION_IPW_C             0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if source file and ADC IPW header file are from the same vendor */
#if (ADC_VENDOR_ID_IPW_C != ADC_VENDOR_ID_IPW_H)
    #error "Adc_Ipw.c and Adc_Ipw.h have different vendor ids"
#endif

/* Check if source file and ADC IPW header file are of the same Autosar version */
#if ((ADC_AR_RELEASE_MAJOR_VERSION_IPW_C != ADC_AR_RELEASE_MAJOR_VERSION_IPW_H) || \
     (ADC_AR_RELEASE_MINOR_VERSION_IPW_C != ADC_AR_RELEASE_MINOR_VERSION_IPW_H) || \
     (ADC_AR_RELEASE_REVISION_VERSION_IPW_C != ADC_AR_RELEASE_REVISION_VERSION_IPW_H) \
    )
    #error "AutoSar Version Numbers of Adc_Ipw.c and Adc_Ipw.h are different"
#endif

/* Check if source file and ADC IPW header file are of the same Software version */
#if ((ADC_SW_MAJOR_VERSION_IPW_C != ADC_SW_MAJOR_VERSION_IPW_H) || \
     (ADC_SW_MINOR_VERSION_IPW_C != ADC_SW_MINOR_VERSION_IPW_H) || \
     (ADC_SW_PATCH_VERSION_IPW_C != ADC_SW_PATCH_VERSION_IPW_H) \
    )
  #error "Software Version Numbers of Adc_Ipw.c and Adc_Ipw.h are different"
#endif

/* Check if source file and ADC header file are of the same vendor */
#if (ADC_VENDOR_ID_IPW_C != ADC_VENDOR_ID)
#error "Adc_Ipw.c and Adc.h have different vendor ids"
#endif

/* Check if source file and ADC header file are of the same Autosar version */
#if ((ADC_AR_RELEASE_MAJOR_VERSION_IPW_C != ADC_AR_RELEASE_MAJOR_VERSION) || \
     (ADC_AR_RELEASE_MINOR_VERSION_IPW_C != ADC_AR_RELEASE_MINOR_VERSION) || \
     (ADC_AR_RELEASE_REVISION_VERSION_IPW_C != ADC_AR_RELEASE_REVISION_VERSION) \
    )
#error "AutoSar Version Numbers of Adc_Ipw.c and Adc.h are different"
#endif

/* Check if source file and ADC header file are of the same Software version */
#if ((ADC_SW_MAJOR_VERSION_IPW_C != ADC_SW_MAJOR_VERSION) || \
     (ADC_SW_MINOR_VERSION_IPW_C != ADC_SW_MINOR_VERSION) || \
     (ADC_SW_PATCH_VERSION_IPW_C != ADC_SW_PATCH_VERSION) \
    )
#error "Software Version Numbers of Adc_Ipw.c and Adc.h are different"
#endif

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/
#define ADC_IPW_NUM_CHANNELS_USED(x) ((((x) >> 3U) != 0U) ? 8U : (x))
#define ADC_IPW_PDB_CHANNELS_USED(x) ((((x)%8U) != 0U) ? (((x)/8U) + 1U) : ((x)/8U))
#define ADC_IPW_PDB_PRETRIGG_MASK(x) (0xFFU >> (8U-(x)))
/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/
#if (ADC_SETCHANNEL_API == STD_ON)
#define ADC_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Adc_MemMap.h"

extern Adc_RuntimeGroupChannelType Adc_aRuntimeGroupChannel[ADC_MAX_GROUPS];

#define ADC_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Adc_MemMap.h"
#endif /* (ADC_SETCHANNEL_API == STD_ON) */

#ifdef ADC_DMA_SUPPORTED
#if (STD_ON == ADC_OPTIMIZE_DMA_STREAMING_GROUPS)
#define ADC_START_SEC_VAR_CLEARED_8_NO_CACHEABLE
#include "Adc_MemMap.h"

#define ADC_STOP_SEC_VAR_CLEARED_8_NO_CACHEABLE
#include "Adc_MemMap.h"
#endif /*  (STD_ON == ADC_OPTIMIZE_DMA_STREAMING_GROUPS) */

#define ADC_START_SEC_VAR_CLEARED_16_NO_CACHEABLE
#include "Adc_MemMap.h"

/* Internal Dma Buffer filled in by DMA for groups having Without Interrupts enabled. It stores full results, to be read and masked accordingly when Adc_ReadGroup is called. */
static uint16 u16DmaNoIrqBuffer[ADC_MAX_HW_UNITS][ADC_MAX_CHANNEL_PER_HW_UNIT];

#define ADC_STOP_SEC_VAR_CLEARED_16_NO_CACHEABLE
#include "Adc_MemMap.h"
#endif /* ADC_DMA_SUPPORTED */

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define ADC_START_SEC_CODE
#include "Adc_MemMap.h"

#if (ADC_READ_GROUP_API == STD_ON)
#ifdef ADC_DMA_SUPPORTED
static inline uint16 Adc_Ipw_GetAdcDataMask
(
    Adc_Ip_ResolutionType Resolution
);
#endif /* ADC_DMA_SUPPORTED */

static inline Std_ReturnType Adc_Ipw_ReadGroupConvData
(
    const Adc_GroupConfigurationType * pGroupPtr,
    Adc_ValueGroupType * pDataPtr,
    boolean * pFlag,
    uint32 u32CoreId
);

static inline Std_ReturnType Adc_Ipw_ReadGroupNoInt
(
    const Adc_GroupConfigurationType * pGroupPtr,
    Adc_ValueGroupType * pDataPtr,
    boolean * pFlag,
    uint32 u32CoreId
);

static inline void Adc_Ipw_WriteDataBuffer
(
    const Adc_GroupType Group,
    Adc_ValueGroupType * pDataPtr,
    uint32 u32CoreId
);
#endif /* (ADC_READ_GROUP_API == STD_ON) */

static inline uint8 Adc_Ipw_ConfigurePdbChannels
(
    Adc_HwUnitType Unit,
    Adc_GroupType Group,
    const Adc_GroupConfigurationType * GroupPtr,
    uint8 NumChannel
);

static inline void Adc_Ipw_ConfigurePdbConversion
(
    Adc_HwUnitType Unit,
    Adc_GroupType Group,
    const Adc_GroupConfigurationType * GroupPtr,
    Adc_HwTriggerTimerType Trigger,
    uint8 NumChannel
);

#if (ADC_ENABLE_START_STOP_GROUP_API == STD_ON)
static inline Std_ReturnType Adc_Ipw_StopConversionCheckTimeout
(
    Adc_HwUnitType Unit,
    Adc_GroupType Group,
    uint32 u32CoreId
);
#endif /* (ADC_ENABLE_START_STOP_GROUP_API == STD_ON) */

#if (ADC_SET_ADC_CONV_TIME_ONCE == STD_OFF)
static inline void Adc_Ipw_PrepareGroupStart
(
    Adc_HwUnitType Unit,
    const Adc_GroupConfigurationType * GroupPtr,
    uint32 u32CoreId
);
#endif /* (ADC_SET_ADC_CONV_TIME_ONCE == STD_OFF) */

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

#if (ADC_READ_GROUP_API == STD_ON)
#ifdef ADC_DMA_SUPPORTED
/**
* @brief          This function gets data mask based on selected Adc resolution
* @details        This function gets data mask based on selected Adc resolution
*
* @param[in]      Resolution    Adc resolution enum value
*
* @return         uint16        Data mask
*/
static inline uint16 Adc_Ipw_GetAdcDataMask
(
    Adc_Ip_ResolutionType Resolution
)
{
    uint16 Mask;
    switch (Resolution)
    {
        case ADC_IP_RESOLUTION_8BIT:
            Mask = 0xFFu;
            break;
        case ADC_IP_RESOLUTION_10BIT:
            Mask = 0x3FFu;
            break;
        case ADC_IP_RESOLUTION_12BIT:
            Mask = 0xFFFu;
            break;
        default:
            /* Default is 12 bits */
            Mask = 0xFFFu;
            break;
    }
    return Mask;
}
#endif /* ADC_DMA_SUPPORTED */

static inline Std_ReturnType Adc_Ipw_ReadGroupConvData
(
    const Adc_GroupConfigurationType * pGroupPtr,
    Adc_ValueGroupType * pDataPtr,
    boolean * pFlag,
    uint32 u32CoreId
)
{
    uint8 Channel;
    Adc_ValueGroupType AdcResult;
    Std_ReturnType ReadGroupRet = (Std_ReturnType) E_OK;
    const Adc_HwUnitType LogicalHwUnitId = pGroupPtr->AdcLogicalUnitId;
    const Adc_HwUnitType PhysicalHwUnitId = Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->aAdcPhysicalId[LogicalHwUnitId];
    const uint8 NumsBitShift = Adc_Ipw_CalculateNumsBitShift(Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->apAdcConfig[LogicalHwUnitId]->Resolution);
#if (defined(ADC_DMA_SUPPORTED) || (ADC_ENABLE_LIMIT_CHECK == STD_ON) || (ADC_SETCHANNEL_API == STD_ON))
    const Adc_GroupType Group = pGroupPtr->GroupId;
#endif /* (defined(ADC_DMA_SUPPORTED) || ... */
#ifdef ADC_DMA_SUPPORTED
    /* When DMA is used, the masking result is required according to safety analysis. For interrupt case, this is done by Adc_Ip_GetConvData. */
    const uint16 DmaBufferMask = Adc_Ipw_GetAdcDataMask(Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->apAdcConfig[LogicalHwUnitId]->Resolution);
#endif /* ADC_DMA_SUPPORTED */
#if (ADC_ENABLE_LIMIT_CHECK == STD_ON)
    Adc_ChannelType ChIndex;
    /* Flag to set if ADC results are in the selected range */
    boolean bWriteFlag = TRUE;
#endif /* (ADC_ENABLE_LIMIT_CHECK == STD_ON) */
#if (ADC_SETCHANNEL_API == STD_ON)
    const Adc_ChannelIndexType ChannelCount = Adc_aRuntimeGroupChannel[Group].ChannelCount;
#else
    const Adc_ChannelIndexType ChannelCount = pGroupPtr->AssignedChannelCount;
#endif /* (ADC_SETCHANNEL_API == STD_ON) */
    for (Channel = 0U; Channel < ChannelCount; Channel++)
    {
#ifdef ADC_DMA_SUPPORTED
        if ((ADC_DMA == Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->Mapping.u8Adc_DmaInterruptSoftware[LogicalHwUnitId]) && (pGroupPtr->u8AdcWithoutDma == FALSE))
        {
            if((uint8)STD_OFF == pGroupPtr->u8AdcExtDMAChanEnable)
            {
                AdcResult = (uint16) (u16DmaNoIrqBuffer[PhysicalHwUnitId][Channel] & DmaBufferMask);
            }
            else
            {
                AdcResult = (uint16) (pGroupPtr->pResultsBufferPtr[Group][Channel] & DmaBufferMask);
            }
        }
        else
#endif /* ADC_DMA_SUPPORTED */
        {
            AdcResult = Adc_Ip_GetConvData(PhysicalHwUnitId, Channel);
            /* Assumption: the width of the register is less than 16 */
            AdcResult = AdcResult << (NumsBitShift);
        }
#if (ADC_ENABLE_LIMIT_CHECK == STD_OFF)
        (*pFlag) = TRUE;
#else
        if (
            (TRUE == pGroupPtr->bAdcGroupLimitcheck)
#if (ADC_SETCHANNEL_API == STD_ON)
            || (TRUE == Adc_aRuntimeGroupChannel[Group].bAdcRuntimeGroupLimitcheck)
#endif /* ADC_SETCHANNEL_API == STD_ON */
        )
        {
#if (ADC_SETCHANNEL_API == STD_ON)
            ChIndex = Adc_aRuntimeGroupChannel[Group].pChannel[Channel];
#else
            ChIndex = pGroupPtr->pAssignment[Channel];
#endif /* ADC_SETCHANNEL_API == STD_ON */
            (*pFlag) =  Adc_Ipw_CheckConversionValuesInRange(AdcResult, LogicalHwUnitId, ChIndex, u32CoreId);
            if (FALSE == (*pFlag))
            {
                /* SWS_Adc_00448, SWS_Adc_00449, SWS_Adc_00450 */
                Adc_aGroupStatus[Group].bLimitCheckFailed = TRUE;
                ReadGroupRet = (Std_ReturnType)E_NOT_OK;
                bWriteFlag = FALSE;
            }
            else
            {
                Adc_aGroupStatus[Group].bLimitCheckFailed = FALSE;
            }
        }
        if (TRUE == bWriteFlag)
#endif /* ADC_ENABLE_LIMIT_CHECK == STD_OFF */
        {
            pDataPtr[Channel] = AdcResult;
        }
    }
    return ReadGroupRet;
}

/**
* @brief          This function reads the converted data for the requested group without interrupt.
* @details        Reads the converted data for the requested group.
*
* @param[in]      Group           The group number.
* @param[in]      pDataPtr        Pointer to a buffer which will be filled by the conversion results.
* @param[in]      pFlag           Pointer to limit check flag
* @param[in]      u32CoreId       Current CoreID.
* @return         Std_ReturnType  E_OK or E_NOT_OK.
* @retval         E_OK            In case of successful read of the converted data.
* @retval         E_NOT_OK        In case of an ongoing conversion.
*/
static inline Std_ReturnType Adc_Ipw_ReadGroupNoInt
(
    const Adc_GroupConfigurationType * pGroupPtr,
    Adc_ValueGroupType * pDataPtr,
    boolean * pFlag,
    uint32 u32CoreId
)
{
    Adc_ChannelIndexType ChannelCount;
    boolean ValidConversion = TRUE;
    Std_ReturnType ReadGroupRet = (Std_ReturnType) E_OK;
    const Adc_HwUnitType LogicalHwUnitId = pGroupPtr->AdcLogicalUnitId;
    const Adc_HwUnitType PhysicalHwUnitId = Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->aAdcPhysicalId[LogicalHwUnitId];
#if ((ADC_SETCHANNEL_API == STD_ON) || defined(ADC_DMA_SUPPORTED))
    const Adc_GroupType Group = pGroupPtr->GroupId;
#endif /* (ADC_SETCHANNEL_API == STD_ON) || defined(ADC_DMA_SUPPORTED) */

#if (ADC_SETCHANNEL_API == STD_ON)
    ChannelCount = Adc_aRuntimeGroupChannel[Group].ChannelCount;
#else
    ChannelCount = pGroupPtr->AssignedChannelCount;
#endif /* (ADC_SETCHANNEL_API == STD_ON) */

    /* Checking conversion is completed (valid) for all channels by check COCO bit in SC1n.
     If all COCO bits are set, it means that all the conversions in the group have completed.
     In case of DMA Transfering, just make sure that the result of last conversion was available
     by checking value of u16DmaNoIrqBuffer (not equal default init value ADC_IPW_INVALID_DATA_RESULT_DMA)
     because when DMA copied data from Rn to internal buffer then COCO bit is cleared.*/
#ifdef ADC_DMA_SUPPORTED
    if ((ADC_DMA == Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->Mapping.u8Adc_DmaInterruptSoftware[LogicalHwUnitId]) && (pGroupPtr->u8AdcWithoutDma == FALSE))
    {
        if((uint8)STD_OFF == pGroupPtr->u8AdcExtDMAChanEnable)
        {
            if(ADC_IPW_INVALID_DATA_RESULT_DMA == u16DmaNoIrqBuffer[PhysicalHwUnitId][(ChannelCount - 1U)])
            {
                ValidConversion = FALSE;
            }
        }
        else
        {
            if(ADC_IPW_INVALID_DATA_RESULT_DMA == pGroupPtr->pResultsBufferPtr[Group][ChannelCount - 1U])
            {
                ValidConversion = FALSE;
            }
        }
    }
    else
#endif /* ADC_DMA_SUPPORTED */
    {
        ValidConversion = Adc_Ipw_CheckValidConversion(PhysicalHwUnitId, 0U, ChannelCount);
    }

    /* All results are valid, so all conversions from the group have been completed */
    if (ValidConversion)
    {
        ReadGroupRet = Adc_Ipw_ReadGroupConvData(pGroupPtr, pDataPtr, pFlag, u32CoreId);
        
#ifdef ADC_DMA_SUPPORTED
        if ((ADC_DMA == Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->Mapping.u8Adc_DmaInterruptSoftware[LogicalHwUnitId]) && (pGroupPtr->u8AdcWithoutDma == FALSE))
        {
            if((uint8)STD_OFF == pGroupPtr->u8AdcExtDMAChanEnable)
            {
                /* Because all conversions were completed so need to reset last buffer to invalid value before starting next conversion */
                u16DmaNoIrqBuffer[PhysicalHwUnitId][(ChannelCount - 1U)] = ADC_IPW_INVALID_DATA_RESULT_DMA;
            }
            else
            {
                pGroupPtr->pResultsBufferPtr[Group][(ChannelCount - 1U)] = ADC_IPW_INVALID_DATA_RESULT_DMA;
            }
        }
#endif /* ADC_DMA_SUPPORTED */
    }
    else
    {
        ReadGroupRet = (Std_ReturnType)E_NOT_OK;
    }

    return ReadGroupRet;
}

static inline void Adc_Ipw_WriteDataBuffer
(
    const Adc_GroupType Group,
    Adc_ValueGroupType * pDataPtr,
    uint32 u32CoreId
)
{
    uint8 Index;
    uint16 ResultOffset;
    const Adc_GroupType GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];
    const Adc_GroupConfigurationType * GroupPtr = &(Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex]);
#ifdef ADC_DMA_SUPPORTED
    const Adc_HwUnitType LogicalHwUnitId = GroupPtr->AdcLogicalUnitId;
    /* When DMA is used, the masking result is required according to safety analysis. Interrupt was done by Adc_Ip_GetConvData. */
    uint16 DmaBufferMask = Adc_Ipw_GetAdcDataMask(Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->apAdcConfig[LogicalHwUnitId]->Resolution);
#endif /* ADC_DMA_SUPPORTED */
#if (ADC_SETCHANNEL_API == STD_ON)
    const Adc_ChannelIndexType ChannelCount = Adc_aRuntimeGroupChannel[Group].ChannelCount;
#else
    const Adc_ChannelIndexType ChannelCount = GroupPtr->AssignedChannelCount;
#endif /* (ADC_SETCHANNEL_API == STD_ON) */
    Adc_ValueGroupType * pResultPtr = NULL_PTR;
    Adc_StreamNumSampleType ResultIndex = 0U;

    /* Get index of last completed sample */
    ResultIndex = Adc_aGroupStatus[Group].ResultIndex - (Adc_StreamNumSampleType)1U;
    if ((Adc_StreamNumSampleType)0U == Adc_aGroupStatus[Group].ResultIndex)
    {
        ResultIndex = GroupPtr->NumSamples - (Adc_StreamNumSampleType)1U;
    }

#if (ADC_ENABLE_GROUP_STREAMING_RESULTS_REORDER == STD_ON)
    /* Get the result buffer pointer */
    if (FALSE == GroupPtr->bStreamResultGroupMultiSets)
#endif /* (ADC_ENABLE_GROUP_STREAMING_RESULTS_REORDER == STD_ON) */
    {
        pResultPtr = (Adc_ValueGroupType *)(&(GroupPtr->pResultsBufferPtr[Group][ResultIndex]));
        ResultOffset = GroupPtr->NumSamples;

        /* Copy results of last conversion from streaming buffer to internal buffer */
        for (Index = 0U; Index < ChannelCount; Index++)
        {
#ifdef ADC_DMA_SUPPORTED
            if (ADC_DMA == Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->Mapping.u8Adc_DmaInterruptSoftware[LogicalHwUnitId])
            {
                pDataPtr[Index] = (Adc_ValueGroupType)((*pResultPtr) & DmaBufferMask);
            }
            else
#endif /* ADC_DMA_SUPPORTED */
            {
                pDataPtr[Index] = (*pResultPtr);
            }
            pResultPtr = &(pResultPtr[ResultOffset]);
        }
    }
#if (ADC_ENABLE_GROUP_STREAMING_RESULTS_REORDER == STD_ON)
    else
    {
        pResultPtr = (Adc_ValueGroupType *)(&(GroupPtr->pResultsBufferPtr[Group][ResultIndex * ChannelCount]));

        /* Copy results of last conversion from streaming buffer to internal buffer */
        for (Index = 0U; Index < ChannelCount; Index++)
        {
#ifdef ADC_DMA_SUPPORTED
            if (ADC_DMA == Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->Mapping.u8Adc_DmaInterruptSoftware[LogicalHwUnitId])
            {
                pDataPtr[Index] = (Adc_ValueGroupType)(pResultPtr[Index] & DmaBufferMask);
            }
            else
#endif /* ADC_DMA_SUPPORTED */
            {
                pDataPtr[Index] = pResultPtr[Index];
            }
        }
    }
#endif /* (ADC_ENABLE_GROUP_STREAMING_RESULTS_REORDER == STD_ON) */
}
#endif /* (ADC_READ_GROUP_API == STD_ON) */

/**
* @brief            Configure PDB channels
* @details          This function configures PDB channels
*
* @param[in]      Unit              Adc Logical Unit Id
* @param[in]      Group             Group number
* @param[in]      GroupPtr          Group config pointer
* @param[in]      NumChannel        Number of channels used for this conversion
*
* @return       void
*/
static inline uint8 Adc_Ipw_ConfigurePdbChannels
(
    Adc_HwUnitType Unit,
    Adc_GroupType Group,
    const Adc_GroupConfigurationType * GroupPtr,
    uint8 NumChannel
)
{
    uint8 PdbIndex;
    uint8 PreTriggerCtr;
    uint8 ChUsed;
    uint8 LeftChannel = NumChannel;
    uint8 PdbChannelUsed = (uint8)ADC_IPW_PDB_CHANNELS_USED(NumChannel);
    uint16 PdbDelay;
    const uint16 * GroupDelay = NULL_PTR;
    uint16 CurrentCh = Adc_aGroupStatus[Group].CurrentChannel;
    Pdb_Adc_Ip_PretriggersConfigType PdbPretriggsConfig;
    Adc_HwUnitType PhysicalHwUnitId = Adc_pCfgPtr[0U]->pAdcIpwConfig->aAdcPhysicalId[Unit];
#if  (STD_ON == FEATURE_PDB_HAS_INTERCHANNEL_BACKTOBACK)
    Adc_HwUnitType LogicalHwUnitId = GroupPtr->AdcLogicalUnitId;
#endif /* (STD_ON == FEATURE_PDB_HAS_INTERCHANNEL_BACKTOBACK) */
#if (ADC_SETCHANNEL_API == STD_ON)
    uint32 TempMask = Adc_aRuntimeGroupChannel[Group].u32Mask;
    /* Get delay configuration of each pre-trigger at runtime */
    GroupDelay = Adc_aRuntimeGroupChannel[Group].pu16Delays;
#else
    /* Follow user configuration */
    GroupDelay = GroupPtr->pAdcIpwGroupConfig->pDelay;
#endif /* (ADC_SETCHANNEL_API == STD_ON) */

    /* Configure PDB channels */
    for (PdbIndex = 0U; PdbIndex < PdbChannelUsed; PdbIndex++)
    {
        /* Get channels used depending on number of pre-triggers per PDB channel */
        ChUsed = ADC_IPW_NUM_CHANNELS_USED(LeftChannel);

        /* If group channel delay, not bypass mode */
        if ((GroupPtr->pAdcIpwGroupConfig->AdcGroupEnableChannelDelays == TRUE)
#if (ADC_SETCHANNEL_API == STD_ON)
                && (GroupDelay != NULL_PTR)
#endif /* (ADC_SETCHANNEL_API == STD_ON) */
           )
        {
            /* If Back to Back mode is disabled, enable and configure delays for all channels */
            if (GroupPtr->pAdcIpwGroupConfig->AdcGroupEnableBackToBack == FALSE)
            {
                PdbPretriggsConfig.EnableDelayMask = (uint8) ADC_IPW_PDB_PRETRIGG_MASK(ChUsed);
                for (PreTriggerCtr = 0U; PreTriggerCtr < ChUsed; PreTriggerCtr++)
                {
#if (ADC_SETCHANNEL_API == STD_ON)
                    if ((uint32)1U == (TempMask & (uint32)1U))
#endif /* (ADC_SETCHANNEL_API == STD_ON) */
                    {
                        Pdb_Adc_Ip_SetAdcPretriggerDelayValue(PhysicalHwUnitId, PdbIndex, PreTriggerCtr, GroupDelay[CurrentCh + PreTriggerCtr]);
                    }
#if (ADC_SETCHANNEL_API == STD_ON)
                    TempMask = TempMask >> (uint32)1U;
                    if ((uint32)0U == TempMask)
                    {
                        break;
                    }
#endif /* (ADC_SETCHANNEL_API == STD_ON) */
                }
            }
            else
            {
                /* Beginning part (8 ADC channels) of group will be configured in PDB channel 0 */
                if (PdbIndex == 0U)
                {
                    PdbPretriggsConfig.EnableDelayMask = 1U;
                    /* First pre-trigger need to be configured as delay, others will be in back to back mode */
                    PdbDelay = GroupDelay[0U];
                    Pdb_Adc_Ip_SetAdcPretriggerDelayValue(PhysicalHwUnitId, PdbIndex, 0U, PdbDelay);
                }
                else
                {
#if  (STD_ON == FEATURE_PDB_HAS_INTERCHANNEL_BACKTOBACK)
                    if (FALSE == Adc_pCfgPtr[0U]->pAdcIpwConfig->apPdbConfig[LogicalHwUnitId]->InterChannelBackToBackEnable)
#endif /* (STD_ON == FEATURE_PDB_HAS_INTERCHANNEL_BACKTOBACK) */
                    {
                        /* The other parts will be configured in following PDB channels */
                        PdbPretriggsConfig.EnableDelayMask = 1U;
                        PdbDelay = (GroupPtr->pAdcIpwGroupConfig->PdbDelay)*PdbIndex;
                        Pdb_Adc_Ip_SetAdcPretriggerDelayValue(PhysicalHwUnitId, PdbIndex, 0U, PdbDelay);
                    }
                }
            }
        }
        else    /* Back-to-back mode only */
        {
            if (PdbIndex == 0U)
            {
                /* Configure the delay for the second PDB in case of only back to back used */
                /* The first PDB channel, pre-trigger 0 also need to use channel delay (TOS bit = 1) in order to work with continuous PDB mode */
                PdbPretriggsConfig.EnableDelayMask = 1U;
                Pdb_Adc_Ip_SetAdcPretriggerDelayValue(PhysicalHwUnitId, PdbIndex, 0U, 0U);
            }
            else
            {
#if  (STD_ON == FEATURE_PDB_HAS_INTERCHANNEL_BACKTOBACK)
                if (FALSE == Adc_pCfgPtr[0U]->pAdcIpwConfig->apPdbConfig[LogicalHwUnitId]->InterChannelBackToBackEnable)
#endif /* (STD_ON == FEATURE_PDB_HAS_INTERCHANNEL_BACKTOBACK) */
                {
                    PdbPretriggsConfig.EnableDelayMask = 1U;
                    PdbDelay = (GroupPtr->pAdcIpwGroupConfig->PdbDelay)*PdbIndex;
                    Pdb_Adc_Ip_SetAdcPretriggerDelayValue(PhysicalHwUnitId, PdbIndex, 0U, PdbDelay);
                }
            }
        }

        Pdb_Adc_Ip_LoadRegValues(PhysicalHwUnitId);

        /* Update status channel for configuring PDB channel in next loop */
        LeftChannel -= ChUsed;
        CurrentCh += ChUsed;


        /* Use back to back mode for all channels but using delay in pre-trigger 0 */
        if (GroupPtr->pAdcIpwGroupConfig->AdcGroupEnableBackToBack == TRUE)
        {
            if (PdbIndex == 0U)
            {
                PdbPretriggsConfig.BackToBackEnableMask = (uint8) ADC_IPW_PDB_PRETRIGG_MASK(ChUsed) - 1U;
            }
            else
            {
#if  (STD_ON == FEATURE_PDB_HAS_INTERCHANNEL_BACKTOBACK)
                if (TRUE == Adc_pCfgPtr[0U]->pAdcIpwConfig->apPdbConfig[LogicalHwUnitId]->InterChannelBackToBackEnable)
                {
                    PdbPretriggsConfig.BackToBackEnableMask = (uint8) ADC_IPW_PDB_PRETRIGG_MASK(ChUsed);
                }
                else
#endif /* (STD_ON == FEATURE_PDB_HAS_INTERCHANNEL_BACKTOBACK) */
                {
                    PdbPretriggsConfig.BackToBackEnableMask = (uint8) ADC_IPW_PDB_PRETRIGG_MASK(ChUsed) - 1U;
                }
            }
        }
        else
        {
            PdbPretriggsConfig.BackToBackEnableMask = 0u;
        }
        PdbPretriggsConfig.EnableMask = (uint8) ADC_IPW_PDB_PRETRIGG_MASK(ChUsed);
        /* Update configuration to CHnC1 register for pre-trigger */
        Pdb_Adc_Ip_ConfigAdcPretriggers(PhysicalHwUnitId, PdbIndex, &PdbPretriggsConfig);
    }
    return PdbIndex;
}

/**
* @brief            Configure PDB IPL module for each conversion
* @details          This function configures PDB IPL module for each conversion
*
* @param[in]      Unit              Adc Logical Unit Id
* @param[in]      Group             Group number
* @param[in]      GroupPtr          Group config pointer
* @param[in]      Trigger           PDB trigger
* @param[in]      NumChannel        Number of channels used for this conversion
*
* @return       void
*
* @pre  ADC Unit is in stand by, there is no ongoing conversion.
*/
static inline void Adc_Ipw_ConfigurePdbConversion
(
    Adc_HwUnitType Unit,
    Adc_GroupType Group,
    const Adc_GroupConfigurationType * GroupPtr,
    Adc_HwTriggerTimerType Trigger,
    uint8 NumChannel
)
{
    uint8 PdbIndex;
    uint8 PdbChannelUsed;
    uint16 PdbPeriod = 0U;
    const uint16 * GroupDelay = NULL_PTR;
    Pdb_Adc_Ip_PretriggersConfigType PdbPretriggsConfig;
    Adc_HwUnitType PhysicalHwUnitId = Adc_pCfgPtr[0U]->pAdcIpwConfig->aAdcPhysicalId[Unit];

    /* Calculate number of PDB channels depending on the ADC channels used */
    /* Note that 1 PDB channel triggers to 8 ADC channels */
    PdbChannelUsed = (uint8)ADC_IPW_PDB_CHANNELS_USED(NumChannel);

#if (ADC_SETCHANNEL_API == STD_ON)
    /* Get delay configuration of each pre-trigger */
    /* At runtime */
    GroupDelay = Adc_aRuntimeGroupChannel[Group].pu16Delays;
#else
    /* Follow user configuration */
    GroupDelay = GroupPtr->pAdcIpwGroupConfig->pDelay;
#endif /* (ADC_SETCHANNEL_API == STD_ON) */

    /* Select the input trigger source for PDB */
    Pdb_Adc_Ip_Enable(PhysicalHwUnitId);
    Pdb_Adc_Ip_SetTriggerInput(PhysicalHwUnitId, Trigger);

    PdbIndex = Adc_Ipw_ConfigurePdbChannels(Unit, Group, GroupPtr, NumChannel);

#if (defined(ADC_CONTINUOUS_NO_INTERRUPT_SUPPORTED) || (STD_ON == ADC_OPTIMIZE_DMA_STREAMING_GROUPS))
    /* If the continuous group is configured without interrupts or Optimize DMA Streaming Groups
        then PDB need to be configured as continuous mode.*/
    if ((ADC_CONV_MODE_CONTINUOUS == GroupPtr->eMode) &&
        (((uint8)STD_ON == GroupPtr->u8AdcWithoutInterrupt)
#if (STD_ON == ADC_OPTIMIZE_DMA_STREAMING_GROUPS)
        || (TRUE == GroupPtr->bAdcOptimizeDmaStream)
#endif /* (STD_ON == ADC_OPTIMIZE_DMA_STREAMING_GROUPS) */
        ))
    {
        PdbPeriod = GroupPtr->pAdcIpwGroupConfig->PdbPeriod;
    }
    else
#endif /* ADC_CONTINUOUS_NO_INTERRUPT_SUPPORTED */
    {
        /* If group channel delay, not bypass mode */
        if (GroupPtr->pAdcIpwGroupConfig->AdcGroupEnableChannelDelays == TRUE)
        {
            if (GroupPtr->pAdcIpwGroupConfig->AdcGroupEnableBackToBack == FALSE)
            {
                /* If delay mode for all pre-triggers, PDB period equals to value of last pre-trigger delay (i.e longest delay) */
                PdbPeriod = GroupDelay[(Adc_aGroupStatus[Group].CurrentChannel + NumChannel) - 1U];
            }
            else
            {
                /* Period will be calculated depending on user configuration in back to back mode */
                PdbPeriod = GroupDelay[0U] + (uint16)((GroupPtr->pAdcIpwGroupConfig->PdbDelay)*((uint16)PdbChannelUsed - 1U));
            }
        }
        else
        {
            /* All pre-trigger configured as user PdbDelay */
            PdbPeriod = (GroupPtr->pAdcIpwGroupConfig->PdbDelay)*((uint16)PdbChannelUsed - 1U);
        }
    }

    /* Configure the period of counter */
    Pdb_Adc_Ip_SetModulus(PhysicalHwUnitId, PdbPeriod);

    /* Load the configuration */
    Pdb_Adc_Ip_LoadRegValues(PhysicalHwUnitId);

    PdbPretriggsConfig.EnableMask = 0u;
    PdbPretriggsConfig.EnableDelayMask = 0u;
    PdbPretriggsConfig.BackToBackEnableMask = 0u;

    /* Disable others PDB channels to avoid errors when PDB trigger the disabled channels */
    for (; PdbIndex < PDB_CH_COUNT; PdbIndex++)
    {
        Pdb_Adc_Ip_ConfigAdcPretriggers(PhysicalHwUnitId, PdbIndex, &PdbPretriggsConfig);
    }

    /* Update current channel */
    Adc_aGroupStatus[Group].CurrentChannel += NumChannel;

    /* ADC356, ADC357 */
    /* Start software trigger */
    /* If trigger is not software trigger, hardware trigger or external trigger will be used */
    if (PDB_ADC_IP_SOFTWARE_TRIGGER == Trigger)
    {
#if (STD_ON == ADC_OPTIMIZE_DMA_STREAMING_GROUPS)
        if (TRUE == GroupPtr->bAdcOptimizeDmaStream)
        {
            /* PDB operation in Continuous mode for software */
            Pdb_Adc_Ip_SetContinuousMode(PhysicalHwUnitId, TRUE);
        }
#endif /* (STD_ON == ADC_OPTIMIZE_DMA_STREAMING_GROUPS) */

        Pdb_Adc_Ip_SwTrigger(PhysicalHwUnitId);
    }
#if (ADC_SETCHANNEL_API == STD_OFF)
    /* Avoid compiler warning */
    (void)Group;
#endif /* (ADC_SETCHANNEL_API == STD_OFF) */
}

#if (ADC_ENABLE_START_STOP_GROUP_API == STD_ON)
/**
* @brief          This function stops the current conversion.
* @details        This function stops the current conversion and checks if the hardware has responded to the command.
*
* @param[in]      Unit           The hardware Unit.
* @param[in]      Group          The group id.
* @param[in]      u32Timeout     Time for conversion is aborted.
*
* @return         Std_ReturnType  E_OK or E_NOT_OK.
* @retval         E_OK            If the conversion has stopped as expected.
* @retval         E_NOT_OK        In case of timeout while waiting for adc hardware to stop a conversion.
*
*/
static inline Std_ReturnType Adc_Ipw_StopConversionCheckTimeout
(
    Adc_HwUnitType Unit,
    Adc_GroupType Group,
    uint32 u32CoreId
)
{
    const Adc_GroupType GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];
    const Adc_HwUnitType PhysicalHwUnitId = Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->aAdcPhysicalId[Unit];
    Std_ReturnType Status = E_OK;
    Adc_Ip_StatusType IPLStatus;
    uint8 ChIndex;

    /* Stop PDB hardware trigger unit */
    Pdb_Adc_Ip_DisableAndClearPdb(PhysicalHwUnitId);

    /* Check if ADC is in continuous mode */
    if(((uint8)STD_ON == Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].u8AdcWithoutInterrupt) && (ADC_CONV_MODE_CONTINUOUS == Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].eMode))
    {
        /* Set to Oneshot mode */
        Adc_Ip_SetContinuousMode(PhysicalHwUnitId, FALSE);
    }

    /* Disable all channels */
    for (ChIndex = 0U; ChIndex < Adc_aUnitStatus[Unit].u8Sc1Used; ChIndex++)
    {
        /* Stop conversion in SC1n register and wait until conversion is aborted. */
        /* Because some channels in chain are not converted yet */
        IPLStatus = Adc_Ip_SetDisabledChannel(PhysicalHwUnitId, ChIndex, TRUE);
        if (IPLStatus == ADC_IP_STATUS_TIMEOUT)
        {
            Status = E_NOT_OK;
        }
    }
    return Status;
}
#endif /* (ADC_ENABLE_START_STOP_GROUP_API == STD_ON) */

#ifdef ADC_DMA_SUPPORTED
/**
* @brief        This function configures the DMA Transfer involved in the ADC conversion process.
* @details      This function configures the Dma Ip to Transfer data from Data Register to Result Buffer.
*               It should be called with the ADC Unit on standby (no ADC interrupt event allowed
*               because its code is not protected by critical regions) - no conversions is ongoing.
*
* @param[in]    Unit        The Adc Logical Unit Id.
* @param[in]    u32CoreId   Current CoreID
*
* @return       void
*
* @pre  ADC Unit is in stand by, there is no ongoing conversion.
*/
void Adc_Ipw_StartDmaOperation
(
    Adc_HwUnitType Unit,
    Adc_GroupType Group,
    uint8 u8NumChannel,
    uint32 u32CoreId
)
{
#if (STD_ON == ADC_OPTIMIZE_DMA_STREAMING_GROUPS)
    /* This variable is used to make a temp DMA transfer by itself. */
    static uint8 Adc_Ipw_u8DmaDraftBuffer;
#endif /* (STD_ON == ADC_OPTIMIZE_DMA_STREAMING_GROUPS) */
    uint8 u8Index;
    uint8 LocTransferListNumElems;
    Adc_ChannelIndexType ChannelCount;
    const Adc_HwUnitType PhysicalHwUnitId = Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->aAdcPhysicalId[Unit];
    const Adc_GroupType GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group]; /* Group index in each partition */
    const uint32 u32AdcDmaLogicChId = Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->Mapping.au8Adc_DmaChannel[Unit];
    const Adc_GroupConfigurationType * pGroupPtr = &(Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex]); /* Pointer to AdcGroup */
    Adc_StreamNumSampleType u8GroupNumSample = pGroupPtr->NumSamples;
    Dma_Ip_LogicChannelTransferListType LocTransferList[16U];
#if (STD_ON == ADC_OPTIMIZE_DMA_STREAMING_GROUPS) || (ADC_ENABLE_GROUP_STREAMING_RESULTS_REORDER == STD_ON)
    Dma_Ip_LogicChannelTransferListType CountingDmaLocTransferList[16U];
    const uint32 u32AdcCountingDmaLogicChId = Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->Mapping.au8Adc_CountingDmaChannel[Unit];
#endif /* (ADC_OPTIMIZE_DMA_STREAMING_GROUPS = STD_ON) || (ADC_ENABLE_GROUP_STREAMING_RESULTS_REORDER == STD_ON)*/

    /* Get number of channel in the Group */
#if (ADC_SETCHANNEL_API == STD_ON)
    ChannelCount = Adc_aRuntimeGroupChannel[Group].ChannelCount;
#else
    ChannelCount = pGroupPtr->AssignedChannelCount;
#endif

    if ((uint8)STD_ON == pGroupPtr->u8AdcWithoutInterrupt)
    {
        /* Reset u16DmaNoIrqBuffer to invalid value when enabling the group, because this buffer is used by ReadGroup to check that conversions are complete and results available */
        for (u8Index = 0; u8Index < ADC_MAX_CHANNEL_PER_HW_UNIT; u8Index++)
        {
            u16DmaNoIrqBuffer[PhysicalHwUnitId][u8Index] = ADC_IPW_INVALID_DATA_RESULT_DMA;
        }
    }

    /* Prepare for Software TCD Configuration:
    0. Source Address (SADDR): Starting address of the first ADC channel
    1. Source Transfer Size (SSIZE): Number of bytes to read each time.
    2. Source Address Offset (SOFF): [Datasize * 2 (4 bytes)] (offset to starting address of next ADC channel data field)
    3. Destination Address (DADDR): Starting address of group user buffer
    4. Destination Transfer Size (DSIZE): [Datasize (or 1 or DMA_SIZE_2BYTES)] (write 2 bytes/Doffset).
    5. Destination Address Offset (DOFF): [No.Samples * Datasize (=2bytes)] (next channel of sample)
    6. Minor Loop Size (NBYTES): [No.Channels * Datasize (=2bytes)] (number of bytes to transfer per service request).
    7. Major Loop Count (CITER): [No.Channels] (Number of minor loop in a major loop)
    8. Start to Transfer by Software (TCDn_CSR.START). TODO can be removed?
    9. Enable Major Interrupt (INTMAJOR): Enable Interrupt If Major count complete.
    10. Enable Half Major Interrupt (INTHALF): Enable Interrupt If Major Counter Half-complete
    11. Disable Automatic Hardware Request (DREQ): clear automatically the ERQ bit.
    12. The Source Signed Last Address Adjustment: will adjust source address after major is done.
         [-(No.Channels * u32soff)] (<two's complement> number of bytes that source address offsets in a loop)
    13. Destination Signed Last Address Adjustment: will adjust destination address after major is done.
    */
    LocTransferList[0].Param = DMA_IP_CH_SET_SOURCE_ADDRESS;
    LocTransferList[0].Value = Adc_Ip_GetDataAddress(PhysicalHwUnitId, 0U);
    LocTransferList[1].Param = DMA_IP_CH_SET_SOURCE_TRANSFER_SIZE;
    LocTransferList[1].Value = (uint32)1U; /* 2 Bytes */
    LocTransferList[2].Param = DMA_IP_CH_SET_SOURCE_SIGNED_OFFSET;
    LocTransferList[2].Value = (uint32)4U; /* offset to starting address of next data field */
    LocTransferList[3].Param = DMA_IP_CH_SET_DESTINATION_ADDRESS;
    LocTransferList[3].Value = (uint32)(&(pGroupPtr->pResultsBufferPtr[Group][0U]));
    LocTransferList[4].Param = DMA_IP_CH_SET_DESTINATION_TRANSFER_SIZE;
    LocTransferList[4].Value = (uint32)1U; /* 2 Bytes */
    LocTransferList[5].Param = DMA_IP_CH_SET_DESTINATION_SIGNED_OFFSET;
    LocTransferList[5].Value = (uint32)u8GroupNumSample << 1U;
    LocTransferList[6].Param = DMA_IP_CH_SET_MINORLOOP_SIZE;
    LocTransferList[6].Value = (uint32)2U;
    LocTransferList[7].Param = DMA_IP_CH_SET_MAJORLOOP_COUNT;
    LocTransferList[7].Value = (uint32)u8NumChannel;
    LocTransferList[8].Param = DMA_IP_CH_SET_CONTROL_SOFTWARE_REQUEST;
    LocTransferList[8].Value = FALSE;
    LocTransferList[9].Param = DMA_IP_CH_SET_CONTROL_EN_MAJOR_INTERRUPT;
    LocTransferList[9].Value = TRUE;
    LocTransferList[10].Param = DMA_IP_CH_SET_CONTROL_EN_HALF_MAJOR_INTERRUPT;
    LocTransferList[10].Value = FALSE;
    LocTransferList[11].Param = DMA_IP_CH_SET_CONTROL_DIS_AUTO_REQUEST;
    LocTransferList[11].Value = TRUE;
    LocTransferList[12].Param = DMA_IP_CH_SET_SOURCE_SIGNED_LAST_ADDR_ADJ;
    LocTransferList[12].Value = ADC_IPW_GET_COMPLEMENT_OF_2((uint32)u8NumChannel << 2UL);
    LocTransferList[13].Param = DMA_IP_CH_SET_DESTINATION_SIGNED_LAST_ADDR_ADJ;
    if (u8GroupNumSample == 1U)
    {
        LocTransferList[13].Value = ADC_IPW_GET_COMPLEMENT_OF_2((uint32)u8NumChannel << 1U); /* multiply by 2U because this is the ADC result data size */
    }
    else
    {
        LocTransferList[13].Value = ADC_IPW_GET_COMPLEMENT_OF_2((((uint32)(ChannelCount) * (uint32)u8GroupNumSample) - 1UL) << 1U); /* multiply by 2U because this is the ADC result data size */
    }

#if (ADC_ENABLE_GROUP_STREAMING_RESULTS_REORDER == STD_ON)
    if ((TRUE == pGroupPtr->bStreamResultGroupMultiSets) && (u8GroupNumSample > 1U))
    {
        LocTransferList[5].Value = (uint32)2U;
        LocTransferList[13].Value = (uint32)0U;
    }
#endif /* (ADC_ENABLE_GROUP_STREAMING_RESULTS_REORDER == STD_ON) */

    LocTransferListNumElems = 14U;
    if((uint8)STD_ON == pGroupPtr->u8AdcWithoutInterrupt)
    {
        LocTransferList[3].Value = (uint32)(&(u16DmaNoIrqBuffer[PhysicalHwUnitId][0])); /* Transfer results in internal buffer first */
        LocTransferList[9].Value = FALSE;
        LocTransferList[11].Value = FALSE;
#if (ADC_ENABLE_GROUP_STREAMING_RESULTS_REORDER == STD_ON)
        if (pGroupPtr->eAccessMode == ADC_ACCESS_MODE_STREAMING)
        {
            /* Link to counting DMA channel to transfer results from u16DmaNoIrqBuffer to buffer setup by user.
            Use extra transfer via u16DmaNoIrqBuffer to allow usage of ReadGroup */
            LocTransferList[13].Value = ADC_IPW_GET_COMPLEMENT_OF_2((uint32)u8NumChannel << 1U); /* multiply by 2U because this is the ADC result data size */
            LocTransferList[14].Param = DMA_IP_CH_SET_MAJORLOOP_EN_LINK;
            LocTransferList[14].Value = TRUE;
            LocTransferList[15].Param = DMA_IP_CH_SET_MAJORLOOP_LOGIC_LINK_CH;
            LocTransferList[15].Value = u32AdcCountingDmaLogicChId;
            LocTransferListNumElems = 16U;
        }
#endif /* (ADC_ENABLE_GROUP_STREAMING_RESULTS_REORDER == STD_ON) */
    }

#if (STD_ON == ADC_OPTIMIZE_DMA_STREAMING_GROUPS)
    /* Setchannel/EnableChannel/DisableChannel cannot be used with optimize DMA streaming groups multiple group channels */
    if (TRUE == pGroupPtr->bAdcOptimizeDmaStream)
    {
        if (1U == ChannelCount)
        {
            LocTransferList[2].Value = (uint32)0U; /* Group has only one channel */

            LocTransferList[5].Value = (uint32)(2U);
            LocTransferList[7].Value = (uint32)u8GroupNumSample;
            LocTransferList[10].Value = (pGroupPtr->bHalfInterrupt == TRUE) ? 1UL : 0UL;
            LocTransferList[12].Value = (uint32)0U;
            /* Each minor loop, DMA will transfer 2 bytes. So adjustment value will be [(-((No.Sample) * u32doff))]
            (<two's complement> number of bytes that destination address offsets in a major loop) */
            LocTransferList[13].Value = ADC_IPW_GET_COMPLEMENT_OF_2(((uint32)(u8GroupNumSample) * LocTransferList[5].Value));

        }
        else
        {
            /* Configuration of counter DMA channel for optimize DMA streaming groups:
            * DMA_IP_CH_SET_SOURCE_ADDRESS      = [Starting address of a dummy byte] with offset = 0
            * DMA_IP_CH_SET_DESTINATION_ADDRESS = [Starting address of a dummy byte] with offset = 0
            * DMA_IP_CH_SET_MINORLOOP_SIZE      = [1] (total transferred bytes of 1 loop)
            * DMA_IP_CH_SET_MAJORLOOP_COUNT (citer/biter) = [No.Samples] (The DMA acts as an hardware counter. Number of samples imply citer/biter count)
            * Control register flags = [  DMA_IP_CH_SET_CONTROL_EN_HALF_MAJOR_INTERRUPT=1 (if Adc Group Enable Half Interrupt is enabled)
            *                           | DMA_IP_CH_SET_CONTROL_EN_MAJOR_INTERRUPT=1
            *                           | DMA_IP_CH_SET_CONTROL_DIS_AUTO_REQUEST=1]
            * <other field> = 0 */
            CountingDmaLocTransferList[0].Param = DMA_IP_CH_SET_SOURCE_ADDRESS;
            CountingDmaLocTransferList[0].Value = (uint32)&Adc_Ipw_u8DmaDraftBuffer;
            CountingDmaLocTransferList[1].Param = DMA_IP_CH_SET_SOURCE_TRANSFER_SIZE;
            CountingDmaLocTransferList[1].Value = 0U; /* 1 Bytes */
            CountingDmaLocTransferList[2].Param = DMA_IP_CH_SET_SOURCE_SIGNED_OFFSET;
            CountingDmaLocTransferList[2].Value = 0U;
            CountingDmaLocTransferList[3].Param = DMA_IP_CH_SET_DESTINATION_ADDRESS;
            CountingDmaLocTransferList[3].Value = (uint32)&Adc_Ipw_u8DmaDraftBuffer;
            CountingDmaLocTransferList[4].Param = DMA_IP_CH_SET_DESTINATION_TRANSFER_SIZE;
            CountingDmaLocTransferList[4].Value = 0U; /* 1 Bytes */
            CountingDmaLocTransferList[5].Param = DMA_IP_CH_SET_DESTINATION_SIGNED_OFFSET;
            CountingDmaLocTransferList[5].Value = 0U;
            CountingDmaLocTransferList[6].Param = DMA_IP_CH_SET_MINORLOOP_SIZE;
            CountingDmaLocTransferList[6].Value = 1U;
            CountingDmaLocTransferList[7].Param = DMA_IP_CH_SET_MAJORLOOP_COUNT;
            CountingDmaLocTransferList[7].Value = (uint32)u8GroupNumSample;
            CountingDmaLocTransferList[8].Param = DMA_IP_CH_SET_CONTROL_SOFTWARE_REQUEST;
            CountingDmaLocTransferList[8].Value = FALSE;
            CountingDmaLocTransferList[9].Param = DMA_IP_CH_SET_CONTROL_EN_MAJOR_INTERRUPT;
            CountingDmaLocTransferList[9].Value = TRUE;
            CountingDmaLocTransferList[10].Param = DMA_IP_CH_SET_CONTROL_EN_HALF_MAJOR_INTERRUPT;
            CountingDmaLocTransferList[10].Value = (pGroupPtr->bHalfInterrupt == TRUE) ? 1UL : 0UL;

            (void)Dma_Ip_SetLogicChannelTransferList(u32AdcCountingDmaLogicChId, CountingDmaLocTransferList, 11U);

            /* Configuration of transferring data DMA channel for optimize DMA streaming groups
            Disable Major and Half-Major Interrupt for main DMA Channel. Interrupt was handled by Counting Dma Channel */
            LocTransferList[9].Value = FALSE;
            LocTransferList[10].Value = FALSE;
            /* Need to keep receiving DMA request from ADC */
            LocTransferList[11].Value = FALSE;

            /* Link to counting DMA channel to count number of completed sample and use DMA callback to update group status. */
            LocTransferList[14].Param = DMA_IP_CH_SET_MAJORLOOP_EN_LINK;
            LocTransferList[14].Value = TRUE;
            LocTransferList[15].Param = DMA_IP_CH_SET_MAJORLOOP_LOGIC_LINK_CH;
            LocTransferList[15].Value = (uint32)u32AdcCountingDmaLogicChId;
            LocTransferListNumElems = 16U;
        }
    }
#endif /*  (STD_ON == ADC_OPTIMIZE_DMA_STREAMING_GROUPS) */
#if (ADC_ENABLE_GROUP_STREAMING_RESULTS_REORDER == STD_ON)
    /* Note that AdcEnableOptimizeDmaStreamingGroups cannot be enabled simultaneously with Without Interrupts.
    So the CountingDmaLocTransferList configured for bAdcOptimizeDmaStream is NOT overwritten by these. */
    /* Configure Counting DMA channel to transfer results from u16DmaNoIrqBuffer to buffer setup by user.
     Streaming results reorder feature must be enabled to allow running without interrupts for groups with ChannelCount > 1,
     and also ChannelCount == 1, but for the latter reorder is not necessary to be enabled at group level. */
    if ((pGroupPtr->eAccessMode == ADC_ACCESS_MODE_STREAMING) && ((uint8)STD_ON == pGroupPtr->u8AdcWithoutInterrupt))
    {
        if ((ChannelCount == 1U) || ((ChannelCount > 1U) && (pGroupPtr->bStreamResultGroupMultiSets == TRUE))) /* TODO: rename bStreamResultGroupMultiSets to reorder */
        {
            CountingDmaLocTransferList[0].Param = DMA_IP_CH_SET_SOURCE_ADDRESS;
            CountingDmaLocTransferList[0].Value = (uint32)&(u16DmaNoIrqBuffer[PhysicalHwUnitId][0U]);
            CountingDmaLocTransferList[1].Param = DMA_IP_CH_SET_SOURCE_TRANSFER_SIZE;
            CountingDmaLocTransferList[1].Value = (uint32)1U; /* 2 Bytes */
            CountingDmaLocTransferList[2].Param = DMA_IP_CH_SET_SOURCE_SIGNED_OFFSET;
            CountingDmaLocTransferList[2].Value = (uint32)2U; /* move by 2 Bytes */
            CountingDmaLocTransferList[3].Param = DMA_IP_CH_SET_DESTINATION_ADDRESS;
            CountingDmaLocTransferList[3].Value = (uint32) & (pGroupPtr->pResultsBufferPtr[Group][0U]);
            CountingDmaLocTransferList[4].Param = DMA_IP_CH_SET_DESTINATION_TRANSFER_SIZE;
            CountingDmaLocTransferList[4].Value = (uint32)1U; /* 2 Bytes */
            CountingDmaLocTransferList[5].Param = DMA_IP_CH_SET_DESTINATION_SIGNED_OFFSET;
            CountingDmaLocTransferList[5].Value = (uint32)2U; /* 2U because this is ADC result register size. TODO: replace with CDATA SIZE */
            CountingDmaLocTransferList[6].Param = DMA_IP_CH_SET_MINORLOOP_SIZE;
            CountingDmaLocTransferList[6].Value = (uint32)u8NumChannel << 1UL; /* multiply by 2U because this is the ADC result data size */
            CountingDmaLocTransferList[7].Param = DMA_IP_CH_SET_MAJORLOOP_COUNT;
            CountingDmaLocTransferList[7].Value = (uint32)u8GroupNumSample;
            CountingDmaLocTransferList[8].Param = DMA_IP_CH_SET_MINORLOOP_EN_SRC_OFFSET;
            CountingDmaLocTransferList[8].Value = TRUE;
            CountingDmaLocTransferList[9].Param = DMA_IP_CH_SET_MINORLOOP_SIGNED_OFFSET;
            CountingDmaLocTransferList[9].Value = ADC_IPW_GET_COMPLEMENT_OF_2((uint32)u8NumChannel << 1UL); /* multiply by 4U because 2 is the ADC result register size and 2 are additional info u16DmaNoIrqBuffer because needed for ReadGroup*/
            CountingDmaLocTransferList[10].Param = DMA_IP_CH_SET_CONTROL_SOFTWARE_REQUEST;
            CountingDmaLocTransferList[10].Value = FALSE;
            CountingDmaLocTransferList[11].Param = DMA_IP_CH_SET_CONTROL_EN_MAJOR_INTERRUPT;
            CountingDmaLocTransferList[11].Value = FALSE;
            CountingDmaLocTransferList[12].Param = DMA_IP_CH_SET_CONTROL_EN_HALF_MAJOR_INTERRUPT;
            CountingDmaLocTransferList[12].Value = FALSE;
            CountingDmaLocTransferList[13].Param = DMA_IP_CH_SET_CONTROL_DIS_AUTO_REQUEST;
            CountingDmaLocTransferList[13].Value = TRUE;
            CountingDmaLocTransferList[14].Param = DMA_IP_CH_SET_SOURCE_SIGNED_LAST_ADDR_ADJ;
            CountingDmaLocTransferList[14].Value = ADC_IPW_GET_COMPLEMENT_OF_2((uint32)u8NumChannel << 1UL); /* multiply by 4U because 2 is the ADC result register size and 2 are additional info u16DmaNoIrqBuffer because needed for ReadGroup*/
            CountingDmaLocTransferList[15].Param = DMA_IP_CH_SET_DESTINATION_SIGNED_LAST_ADDR_ADJ;
            CountingDmaLocTransferList[15].Value = ADC_IPW_GET_COMPLEMENT_OF_2(((uint32)u8NumChannel * (uint32)u8GroupNumSample) << 1U); /* multiply by 2U because this is the ADC result data size */

            (void)Dma_Ip_SetLogicChannelTransferList(u32AdcCountingDmaLogicChId, CountingDmaLocTransferList, 16U);
            /* Enable Hardware Request for Counting Dma channel */
            (void)Dma_Ip_SetLogicChannelCommand(u32AdcCountingDmaLogicChId, DMA_IP_CH_SET_HARDWARE_REQUEST);
        }
    }
#endif /* (ADC_ENABLE_GROUP_STREAMING_RESULTS_REORDER == STD_ON) */

    (void)Dma_Ip_SetLogicChannelTransferList(u32AdcDmaLogicChId, LocTransferList, LocTransferListNumElems);
    /* Enable Hardware Request for Dma */
    (void)Dma_Ip_SetLogicChannelCommand(u32AdcDmaLogicChId, DMA_IP_CH_SET_HARDWARE_REQUEST);

}
#endif /* ADC_DMA_SUPPORTED */

#if (ADC_SET_ADC_CONV_TIME_ONCE == STD_OFF)
/**
* @brief          This function performs general configurations to the adc hardware prior to starting a conversion.
* @details        This function performs general configurations to the adc hardware prior to starting a conversion.
*
* @param[in]      Unit                  The Adc Logical Unit Id.
* @param[in]      GroupPtr              The pointer to the group configuration structure.
* @param[in]      u32CoreId             Current CoreID
*
* @return         void
*/
static inline void Adc_Ipw_PrepareGroupStart
(
    Adc_HwUnitType Unit,
    const Adc_GroupConfigurationType * GroupPtr,
    uint32 u32CoreId
)
{
    Adc_ConversionTimeType ConvTime;
    Adc_HwUnitType PhysicalHwUnitId = Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->aAdcPhysicalId[Unit];

#if (ADC_DUAL_CLOCK_MODE == STD_ON)
    if (ADC_NORMAL == Adc_eClockMode[u32CoreId])
    {
        if ((uint8)STD_ON == GroupPtr->pAdcIpwGroupConfig->u8GroupAvgEnable)
        {
            Adc_Ip_SetAveraging(PhysicalHwUnitId, TRUE, GroupPtr->pAdcIpwGroupConfig->GroupAvgSelect);
        }
    }
    else
    {
        if ((uint8)STD_ON == GroupPtr->pAdcIpwGroupConfig->u8GroupAvgEnableAlternate)
        {
            Adc_Ip_SetAveraging(PhysicalHwUnitId, TRUE, GroupPtr->pAdcIpwGroupConfig->GroupAvgSelectAlternate);
        }
    }
#else /* (ADC_DUAL_CLOCK_MODE == STD_OFF) */
    {
        if ((uint8)STD_ON == GroupPtr->pAdcIpwGroupConfig->u8GroupAvgEnable)
        {
            Adc_Ip_SetAveraging(PhysicalHwUnitId, TRUE, GroupPtr->pAdcIpwGroupConfig->GroupAvgSelect);
        }
    }
#endif /* (ADC_DUAL_CLOCK_MODE == STD_ON) */

    /* Get the configuration value of conversion time */
#if (ADC_DUAL_CLOCK_MODE == STD_ON)
    if (ADC_NORMAL == Adc_eClockMode[u32CoreId])
    {
        ConvTime = GroupPtr->pAdcIpwGroupConfig->ConvTime;
    }
    else
    {
        ConvTime = GroupPtr->pAdcIpwGroupConfig->AlternateConvTime;
    }
#else /* (ADC_DUAL_CLOCK_MODE == STD_OFF) */
    ConvTime = GroupPtr->pAdcIpwGroupConfig->ConvTime;
    (void)u32CoreId;
#endif /* (ADC_DUAL_CLOCK_MODE == STD_ON) */
    /*  Program Conversion Time */
    Adc_Ip_SetSampleTime(PhysicalHwUnitId, ConvTime);
}
#endif /* (ADC_SET_ADC_CONV_TIME_ONCE == STD_OFF) */

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
#if ((defined(ADC_UNIT_0_ISR_USED)) || (defined(ADC_UNIT_1_ISR_USED)) || \
     (defined(ADC_DMA_SUPPORTED)) || (ADC_READ_GROUP_API == STD_ON) \
    )
/**
* @brief          This function calculates number of bits that need to shift according the alignment configuration
* @details        This function calculates number of bits that need to shift according the alignment configuration
*
* @param[in]      Resolution    Adc resolution enum value
*
* @return         uint8        Number of bits shift
*/
uint8 Adc_Ipw_CalculateNumsBitShift
(
    Adc_Ip_ResolutionType Resolution
)
{
    uint8 NumsBitShift;
#if (ADC_RESULT_ALIGNMENT == ADC_ALIGN_LEFT)
    switch (Resolution)
    {
        case ADC_IP_RESOLUTION_8BIT:
            NumsBitShift = 8u;
            break;
        case ADC_IP_RESOLUTION_10BIT:
            NumsBitShift = 6u;
            break;
        case ADC_IP_RESOLUTION_12BIT:
            NumsBitShift = 4u;
            break;
        default:
            /* Default is 12 bits */
            NumsBitShift = 4u;
            break;
    }
#else
    NumsBitShift = 0u;
    (void) Resolution;
#endif /* (ADC_RESULT_ALIGNMENT == ADC_ALIGN_LEFT) */

    return NumsBitShift;
}
#endif  /* (defined(ADC_UNIT_0_ISR_USED) || ... */

/**
* @brief            Configure channels of a group
* @details          This function configure channels of a group
*                   if number of channels in group excess maximum channels allowed for a conversion,
*                   a part of channels of group (= max allowed channels) will be configured in start conversion in the first time.
*                   the remaining channels of group will be seperated into other parts which are configured and converted in group interrupt.
*
* @param[in]      Unit          Adc Logical Unit Id
* @param[in]      Group         Group number
* @param[in]      Trigger       PDB trigger
* @param[in]      NumChannel    Number of channels to be configured
*
* @return       void
*
* @pre  ADC Unit is in stand by, there is no ongoing conversion.
*/
void Adc_Ipw_ConfigureConversion
(
    Adc_HwUnitType Unit,
    Adc_GroupType Group,
    Adc_HwTriggerTimerType Trigger,
    uint8 NumChannel,
    uint32 u32CoreId
)
{
    uint8 ChIndex;
    Adc_ChannelIndexType CurrentChannel;
    Adc_Ip_ChanConfigType ChannelConfig;
    const Adc_GroupType GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];
    const Adc_GroupConfigurationType * GroupPtr = &(Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex]);
    const Adc_HwUnitType PhysicalHwUnitId = Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->aAdcPhysicalId[Unit];
    Adc_Ip_InputChannelType Channel;
    const Adc_GroupDefType * ChannelsDefinition = NULL_PTR;

    /* Next channel will be converted */
    CurrentChannel = Adc_aGroupStatus[Group].CurrentChannel;

#if (ADC_SETCHANNEL_API == STD_ON)
    /* Get status of channels are changed at runtime */
    uint32 TempMask = Adc_aRuntimeGroupChannel[Group].u32Mask;
#endif /* ADC_SETCHANNEL_API */

#if (ADC_SETCHANNEL_API == STD_ON)
    /* Get configured channels */
    /* At runtime */
    ChannelsDefinition = Adc_aRuntimeGroupChannel[Group].pChannel;
#else
    /* Pre-configuration */
    ChannelsDefinition = GroupPtr->pAssignment;
#endif /* ADC_SETCHANNEL_API */

    /* Configure channels from current to (last channel - 1) */
    for (ChIndex = 0U; ChIndex < (NumChannel - 1U); ChIndex++)
    {
        /* Physical channel ID */
        Channel = Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->apAdcConfig[Unit]->ChannelConfigs[ChannelsDefinition[(CurrentChannel + ChIndex)]].Channel;

#if (ADC_SETCHANNEL_API == STD_ON)
        /* Channel was changed? */
        if (1U == (TempMask & 1U))
#endif /* ADC_SETCHANNEL_API */
        {
            /* Configure all channels except the last one with interrupts disabled */
            ChannelConfig.ChnIdx = ChIndex;
            ChannelConfig.Channel = Channel;
            ChannelConfig.InterruptEnable = FALSE;
            Adc_Ip_ConfigChannel(PhysicalHwUnitId, &ChannelConfig);
        }
#if (ADC_SETCHANNEL_API == STD_ON)
        TempMask = TempMask >> (uint32)1U;
        /* There are no channels changed then break out the loop */
        if (0U == TempMask)
        {
            break;
        }
#endif /* ADC_SETCHANNEL_API */
    }

    /* Configure last channel */
#if (ADC_SETCHANNEL_API == STD_ON)
    /* Last channel was changed? */
    if (1U == (TempMask & 1U))
#endif
    {
        /* Get channel ID */
        Channel = Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->apAdcConfig[Unit]->ChannelConfigs[ChannelsDefinition[(CurrentChannel + ChIndex)]].Channel;
        ChannelConfig.ChnIdx = ChIndex;
        ChannelConfig.Channel = Channel;
        /* In case of group is configured with interrupt, the complete int bit of the last channel must be enabled */
        if ((uint8)STD_OFF == GroupPtr->u8AdcWithoutInterrupt)
        {
            ChannelConfig.InterruptEnable = TRUE;
        }
        else
        {
            ChannelConfig.InterruptEnable = FALSE;
        }

        /* Configure last channel */
        Adc_Ip_ConfigChannel(PhysicalHwUnitId, &ChannelConfig);
    }

#if ((ADC_OPTIMIZE_ONESHOT_HW_TRIGGER == STD_OFF) || (ADC_SETCHANNEL_API == STD_ON))
    for (ChIndex = NumChannel; ChIndex < ADC_MAX_CHAN_COUNT; ChIndex++)
    {
        /* Disable other channels by configuring them as disabled */
        ChannelConfig.ChnIdx = ChIndex;
        ChannelConfig.Channel = ADC_IP_INPUTCHAN_DISABLED;
        ChannelConfig.InterruptEnable = FALSE;
        Adc_Ip_ConfigChannel(PhysicalHwUnitId, &ChannelConfig);
    }
#endif /* (ADC_OPTIMIZE_ONESHOT_HW_TRIGGER == STD_OFF) || (ADC_SETCHANNEL_API == STD_ON) */

     /* Save the Sc1Used register equal the number of channels configured */
     Adc_aUnitStatus[Unit].u8Sc1Used = NumChannel;
     /* Start software trigger through PDB or enable PDB hardware trigger */
     Adc_Ipw_ConfigurePdbConversion(Unit, Group, GroupPtr, Trigger, NumChannel);
}

#ifdef ADC_DMA_SUPPORTED
/**
* @brief        This function configures IPL for DMA Transfer.
* @details      This function configures IP layer in order to Transfer data from Data Register to Result Buffer.
*
* @param[in]    Unit        Adc Logical Unit Id
* @param[in]    Group       Group number
* @param[in]    Trigger     PDB trigger
* @param[in]    NumChannel  number of conversion channels
*
* @return       void
*
* @pre  ADC Unit is in stand by, there is no ongoing conversion.
*/
/* TODO: Merged this to Adc_Ipw_ConfigureConversion for Optimization */
void Adc_Ipw_ConfigureDmaConversion
(
    Adc_HwUnitType Unit,
    Adc_GroupType Group,
    Adc_HwTriggerTimerType Trigger,
    uint8 NumChannel
)
{
    uint8 ChIndex;
    Adc_ChannelIndexType CurrentChannel;
    Adc_Ip_ChanConfigType ChannelConfig;
    const Adc_GroupType GroupIndex = Adc_pCfgPtr[0U]->pGroupIdToIndexMap[Group];
    const Adc_GroupConfigurationType * GroupPtr = &(Adc_pCfgPtr[0U]->pGroups[GroupIndex]);
    const Adc_HwUnitType PhysicalHwUnitId = Adc_pCfgPtr[0U]->pAdcIpwConfig->aAdcPhysicalId[Unit];
    Adc_Ip_InputChannelType Channel;
    const Adc_GroupDefType * ChannelsDefinition = NULL_PTR;

    /* Next channel will be converted */
    CurrentChannel = Adc_aGroupStatus[Group].CurrentChannel;

    /* Ensure that PDB does not run when ADC configured */
    Pdb_Adc_Ip_Disable(PhysicalHwUnitId);

#if (ADC_SETCHANNEL_API == STD_ON)
    /* Get configured channels */
    /* At runtime */
    ChannelsDefinition = Adc_aRuntimeGroupChannel[Group].pChannel;
#else
    /* Pre-configuration */
    ChannelsDefinition = GroupPtr->pAssignment;
#endif /* ADC_SETCHANNEL_API */

    /* Because the transfer type is DMA so need to disable interrupt for all used channels */
    /* Interrupt will be generated through DMA Callback */
    for (ChIndex = 0U; ChIndex < NumChannel; ChIndex++)
    {
        /* Logical channel ID */
        Channel = Adc_pCfgPtr[0U]->pAdcIpwConfig->apAdcConfig[Unit]->ChannelConfigs[ChannelsDefinition[(CurrentChannel + ChIndex)]].Channel;
        /* Disable other channels by configuring them as disabled */
        ChannelConfig.ChnIdx = ChIndex;
        ChannelConfig.Channel = Channel;
        ChannelConfig.InterruptEnable = FALSE;
        Adc_Ip_ConfigChannel(PhysicalHwUnitId, &ChannelConfig);
    }

#if ((ADC_OPTIMIZE_ONESHOT_HW_TRIGGER == STD_OFF) || (ADC_SETCHANNEL_API == STD_ON))
    for (ChIndex = NumChannel; ChIndex < ADC_MAX_CHAN_COUNT; ChIndex++)
    {
        /* Disable other channels by configuring them as disabled */
        ChannelConfig.ChnIdx = ChIndex;
        ChannelConfig.Channel = ADC_IP_INPUTCHAN_DISABLED;
        ChannelConfig.InterruptEnable = FALSE;
        Adc_Ip_ConfigChannel(PhysicalHwUnitId, &ChannelConfig);
    }
#endif /* (ADC_OPTIMIZE_ONESHOT_HW_TRIGGER == STD_OFF) || (ADC_SETCHANNEL_API == STD_ON) */

    /* Save the Sc1Used register equal the number of channels configured */
     Adc_aUnitStatus[Unit].u8Sc1Used = NumChannel;

    /* Start software trigger through PDB or enable PDB hardware trigger */
     Adc_Ipw_ConfigurePdbConversion(Unit, Group, GroupPtr, Trigger, NumChannel);
}
#endif /* ADC_DMA_SUPPORTED */

#if (ADC_HW_TRIGGER_API == STD_ON)
/**
* @brief          This function starts a hardware trigger conversion.
* @details        This function starts a hardware trigger conversion.
*
* @param[in]      Unit        Adc Logical Unit Id
* @param[in]      Group       Group number
*
* @return         void
*/
void Adc_Ipw_StartHwTrigConversion
(
    Adc_HwUnitType Unit,
    Adc_GroupType Group,
    uint32 u32CoreId
)
{
    uint8 NumChannel;
#ifdef ADC_DMA_SUPPORTED
    const Adc_HwUnitType PhysicalHwUnitId = Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->aAdcPhysicalId[Unit];
#endif /* ADC_DMA_SUPPORTED */
    const Adc_GroupType GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];
    const Adc_GroupConfigurationType * GroupPtr = &(Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex]);

    /* Calculate the number of channels for current configuration */
#if (ADC_SETCHANNEL_API == STD_ON)
    NumChannel = (uint8)ADC_IPW_CALCULATE_CHAN_NUMBER(Adc_aRuntimeGroupChannel[Group].ChannelCount);
#else
    NumChannel = (uint8)ADC_IPW_CALCULATE_CHAN_NUMBER(GroupPtr->AssignedChannelCount);
#endif

    /* If it is the first group, u8Sc1Used is assigned as the number channels of group */
    if(0U == Adc_aUnitStatus[Unit].u8Sc1Used)
    {
        Adc_aUnitStatus[Unit].u8Sc1Used = NumChannel;
    }
    Adc_aGroupStatus[Group].CurrentChannel = 0U;

#ifdef ADC_DMA_SUPPORTED
    /* Not required to check u8AdcWithoutDma == FALSE, because u8AdcWithoutDma is only supported for SW normal triggered which cannot be HW Trigger when DMA transfer selected for HW unit */
    if ((ADC_DMA == Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->Mapping.u8Adc_DmaInterruptSoftware[Unit]))
    {
        /* Enable DMA for ADC Module */
        Adc_Ip_EnableDma(PhysicalHwUnitId);

        if((uint8)STD_OFF == GroupPtr->u8AdcExtDMAChanEnable)
        {
            /* Configure for DMA transfer */
            Adc_Ipw_StartDmaOperation(Unit, Group, NumChannel, u32CoreId);
        }

        /* Setting for ADC in case of DMA transfer was selected, in the first time DMA should not be re-configured */
        Adc_Ipw_ConfigureDmaConversion(Unit, Group, GroupPtr->HwTriggerSource, NumChannel);
    }
    else
#endif /* ADC_DMA_SUPPORTED */
    {
        /* Setting for ADC hardware in case of DMA transfer was not selected */
        Adc_Ipw_ConfigureConversion(Unit, Group, GroupPtr->HwTriggerSource, NumChannel, u32CoreId);
    }
#if (ADC_SETCHANNEL_API == STD_ON)
    if (TRUE == Adc_aRuntimeGroupChannel[Group].bRuntimeUpdated)
    {
        /* Roll back to the first sample */
        Adc_aGroupStatus[Group].ResultIndex = 0U;
        /* Reset the update status */
        Adc_aRuntimeGroupChannel[Group].bRuntimeUpdated =  FALSE;
    }
#endif /* (ADC_SETCHANNEL_API == STD_ON) */
}
#endif /* (ADC_HW_TRIGGER_API == STD_ON) */

/**
* @brief          This function initializes the ADC hardware modules, triggering units and the ADC driver.
* @details        This function initializes the ADC hardware module, and the ADC driver.
*
* @param[in]      pIpwCfg           Configuration data pointer.
* @param[in]      u32CoreId         Current CoreID
*
* @return         Std_ReturnType    E_OK or E_NOT_OK.
* @retval         E_OK              If Power up/Power down activities return status as expected.
* @retval         E_NOT_OK          If Power up/Power down activities couldn't return status as expected.
*
*/
Std_ReturnType Adc_Ipw_Init
(
    const Adc_Ipw_Config * pIpwCfg,
    const uint32 u32CoreId
)
{
    Adc_HwUnitType LogicalHwUnitId = 0U;
    Adc_HwUnitType PhysicalHwUnitId = 0U;
    Std_ReturnType TimeOutStatus = (Std_ReturnType)E_OK;

    for (LogicalHwUnitId = 0U; LogicalHwUnitId < ADC_MAX_HW_UNITS_CFG; LogicalHwUnitId++)
    {
        if (pIpwCfg->Mapping.au8Adc_HwUnit[LogicalHwUnitId] == (uint8)STD_ON) /* HW unit enabled on current partition */
        {
            PhysicalHwUnitId = pIpwCfg->aAdcPhysicalId[LogicalHwUnitId];
            Adc_Ip_Init(PhysicalHwUnitId, pIpwCfg->apAdcConfig[LogicalHwUnitId]);
            Pdb_Adc_Ip_Init(PhysicalHwUnitId, pIpwCfg->apPdbConfig[LogicalHwUnitId]);
        }
    }

    (void)u32CoreId;

    return TimeOutStatus;
}

#if (ADC_DEINIT_API == STD_ON)
/**
* @brief          This function de-initializes the ADC driver, and the ADC hardware.
* @details        This function de-initializes the ADC driver, and ensures that the ADC hardware
*                 will be in the power on after reset state.
*
* @param[in]      u32CoreId         Current CoreID
*
* @return         Std_ReturnType    E_OK or E_NOT_OK.
* @retval         E_OK              If the operation completed successfully.
* @retval         E_NOT_OK          In case of timeout while waiting for adc hardware operations.
*
*/
Std_ReturnType Adc_Ipw_DeInit
(
    uint32 u32CoreId
)
{
    Adc_HwUnitType PhysicalHwUnitId = 0U;
    Adc_HwUnitType LogicalHwUnitId = 0U;
    Adc_GroupType GroupId = 0U;
    Adc_GroupType GroupIter = 0U;
    Std_ReturnType ReturnStatus = E_OK;

    for (LogicalHwUnitId = 0U; LogicalHwUnitId < ADC_MAX_HW_UNITS_CFG; LogicalHwUnitId++)
    {
        if (Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->Mapping.au8Adc_HwUnit[LogicalHwUnitId] == (uint8)STD_ON) /* HW unit enabled on current partition */
        {
            PhysicalHwUnitId = Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->aAdcPhysicalId[LogicalHwUnitId];
            Adc_Ip_DeInit(PhysicalHwUnitId);
            Pdb_Adc_Ip_DeInit(PhysicalHwUnitId);
        }
    }

    for (GroupIter = 0U; GroupIter < (Adc_GroupType)Adc_pCfgPtr[u32CoreId]->GroupCount; GroupIter++)
    {
        GroupId = Adc_pCfgPtr[u32CoreId]->pGroups[GroupIter].GroupId;
        Adc_pCfgPtr[u32CoreId]->pGroups[GroupIter].pResultsBufferPtr[GroupId] = NULL_PTR;
#if (ADC_SETCHANNEL_API == STD_ON)
        Adc_aRuntimeGroupChannel[GroupId].pChannel = NULL_PTR;
        Adc_aRuntimeGroupChannel[GroupId].ChannelCount = 0U;
        Adc_aRuntimeGroupChannel[GroupId].bRuntimeUpdated = FALSE;
#if (ADC_ENABLE_LIMIT_CHECK == STD_ON)
        Adc_aRuntimeGroupChannel[GroupId].bAdcRuntimeGroupLimitcheck = FALSE;
#endif /* (ADC_ENABLE_LIMIT_CHECK == STD_ON) */
#endif
#if (ADC_GRP_NOTIF_CAPABILITY == STD_ON)
        Adc_aGroupStatus[GroupId].eNotification = ADC_NOTIFICATION_DISABLED;
#endif  /* (ADC_GRP_NOTIF_CAPABILITY == STD_ON) */
    }
#if (ADC_DUAL_CLOCK_MODE == STD_ON)
#if (ADC_SET_ADC_CONV_TIME_ONCE == STD_OFF)
    Adc_eClockMode[u32CoreId] = ADC_NORMAL;
#endif /* (ADC_SET_ADC_CONV_TIME_ONCE == STD_OFF) */
#endif /* (ADC_DUAL_CLOCK_MODE == STD_ON) */

    return ReturnStatus;
}
#endif /* (ADC_DEINIT_API == STD_ON) */

#if (ADC_ENABLE_START_STOP_GROUP_API == STD_ON)
/**
* @brief          This function starts the conversion on the specified hardware Unit.
* @details        This function starts the conversion on the specified hardware Unit.
*                 This function should be called with the ADC Unit on standby (no ADC interruptions
*                 allowed because its code is not protected by critical regions) - no conversions must
*                 be running.
*
* @param[in]      Unit          Adc Logical Unit Id
* @param[in]      u32CoreId     Current CoreID
*
* @return         void
*
*/
void Adc_Ipw_StartNormalConversion
(
    Adc_HwUnitType Unit,
    uint32 u32CoreId
)
{
    Adc_GroupType Group = Adc_aUnitStatus[Unit].SwNormalQueue[0U]; /* Active group in the Queue */
#if (defined(ADC_DMA_SUPPORTED) || defined(ADC_CONTINUOUS_NO_INTERRUPT_SUPPORTED) || \
    (ADC_ENABLE_LIMIT_CHECK == STD_ON) || (ADC_SETCHANNEL_API == STD_OFF) || \
    (ADC_SET_ADC_CONV_TIME_ONCE == STD_OFF))
    Adc_GroupType GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group]; /* Group index in each partition */
    const Adc_GroupConfigurationType * GroupPtr = &(Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex]); /* Pointer to AdcGroup */
#endif /* (defined(ADC_DMA_SUPPORTED) ||... */
    const Adc_HwUnitType PhysicalHwUnitId = Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->aAdcPhysicalId[Unit];
    uint8 NumChannel;
    uint8 ChIndex;
#ifdef ADC_CONTINUOUS_NO_INTERRUPT_SUPPORTED
    boolean PdbMode;
#endif /* ADC_CONTINUOUS_NO_INTERRUPT_SUPPORTED */

    /* Do nothing if there is no request available in queue */
    if ((Adc_aUnitStatus[Unit].SwNormalQueueIndex != (Adc_QueueIndexType)0U)
#if (ADC_ENABLE_LIMIT_CHECK == STD_ON)
        || ((Adc_aGroupStatus[Group].bLimitCheckFailed == FALSE) && (GroupPtr->eMode == ADC_CONV_MODE_ONESHOT))
#endif /* ADC_ENABLE_LIMIT_CHECK == STD_ON */
        )
    {

#if (ADC_SET_ADC_CONV_TIME_ONCE == STD_OFF)
        /* Configure group params (e.g. conversion time) if needed before starting conversion */
        Adc_Ipw_PrepareGroupStart(Unit, GroupPtr, u32CoreId);
#endif /* (ADC_SET_ADC_CONV_TIME_ONCE == STD_OFF) */

        /* Reset to start conversion from channel logical index 0 */
        Adc_aGroupStatus[Group].CurrentChannel = 0U;

        /* Calculate the number of channels for current configuration */
#if (ADC_SETCHANNEL_API == STD_ON)
        /* Channel enabled at runtime */
        NumChannel = (uint8)ADC_IPW_CALCULATE_CHAN_NUMBER(Adc_aRuntimeGroupChannel[Group].ChannelCount);
#else
        /* Channel enabled from initialzing */
        NumChannel = (uint8)ADC_IPW_CALCULATE_CHAN_NUMBER(GroupPtr->AssignedChannelCount);
#endif /* (ADC_SETCHANNEL_API == STD_ON) */

        /* Update u8Sc1Used for the first time */
        if (0U == Adc_aUnitStatus[Unit].u8Sc1Used)
        {
            Adc_aUnitStatus[Unit].u8Sc1Used = NumChannel;
        }

#ifdef ADC_CONTINUOUS_NO_INTERRUPT_SUPPORTED
        PdbMode = (ADC_CONV_MODE_CONTINUOUS == GroupPtr->eMode) && ((uint8)STD_ON == GroupPtr->u8AdcWithoutInterrupt);
        Pdb_Adc_Ip_SetContinuousMode(PhysicalHwUnitId, PdbMode);
#endif /* ADC_CONTINUOUS_NO_INTERRUPT_SUPPORTED */

#ifdef ADC_DMA_SUPPORTED
        if ((ADC_DMA == Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->Mapping.u8Adc_DmaInterruptSoftware[Unit]) && (GroupPtr->u8AdcWithoutDma == FALSE))
        {
            /* Enable DMA for ADC module */
            Adc_Ip_EnableDma(PhysicalHwUnitId);
            if ((uint8)STD_OFF == GroupPtr->u8AdcExtDMAChanEnable)
            {
                /* Setting for DMA transfer */
                Adc_Ipw_StartDmaOperation(Unit, Group, NumChannel, u32CoreId);
            }
            /* Setting for Adc in case of DMA transfer was selected, in the first time DMA should not be re-configured */
            Adc_Ipw_ConfigureDmaConversion(Unit, Group, PDB_ADC_IP_SOFTWARE_TRIGGER, NumChannel);
        }
        else
#endif /* ADC_DMA_SUPPORTED */
        {
            /* Clear all of COCO flag by reading Rn registers */
            for (ChIndex = 0U; ChIndex < Adc_aUnitStatus[Unit].u8Sc1Used; ChIndex++)
            {
                (void)Adc_Ip_GetConvData(PhysicalHwUnitId, ChIndex);
            }
            Adc_Ip_SetTriggerMode(PhysicalHwUnitId, ADC_IP_TRIGGER_HARDWARE);

            /* Update group configuration to registers and start conversion */
            Adc_Ipw_ConfigureConversion(Unit, Group, PDB_ADC_IP_SOFTWARE_TRIGGER, NumChannel, u32CoreId);
        }
#if (ADC_SETCHANNEL_API == STD_ON)
        if (TRUE == Adc_aRuntimeGroupChannel[Group].bRuntimeUpdated)
        {
            /* Reset the update status */
            Adc_aRuntimeGroupChannel[Group].bRuntimeUpdated =  FALSE;
        }
#endif /* (ADC_SETCHANNEL_API == STD_ON) */
    }
}

/**
* @brief          This function stops the current conversion of a group.
* @details        This function stops the current conversion of a group.
*
* @param[in]      Unit              Adc Logical Unit Id
* @param[in]      Group             The group id
* @param[in]      u32CoreId         Current CoreID
*
* @return         Std_ReturnType    E_OK or E_NOT_OK.
* @retval         E_OK              If the conversion has stopped as expected.
* @retval         E_NOT_OK          In case of timeout while waiting for adc hardware to stop a conversion.
*
*/
Std_ReturnType Adc_Ipw_StopCurrentConversion
(
    Adc_HwUnitType Unit,
    Adc_GroupType Group,
    uint32 u32CoreId
)
{
#if ((ADC_BYPASS_ABORT_CHAIN_CHECK == STD_ON) || defined(ADC_DMA_SUPPORTED))
    const Adc_GroupType GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];
#endif /* (ADC_BYPASS_ABORT_CHAIN_CHECK == STD_ON) */
    Std_ReturnType Status = (Std_ReturnType)E_OK;
    const Adc_HwUnitType PhysicalHwUnitId = Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->aAdcPhysicalId[Unit];
    uint8 ChIndex;

    /* Disable Adc hardware unit and clear all of COCO flag by reading Rn register */
    for (ChIndex = 0U; ChIndex < Adc_aUnitStatus[Unit].u8Sc1Used; ChIndex++)
    {
        (void) Adc_Ip_SetDisabledChannel(PhysicalHwUnitId, ChIndex, FALSE);

        /* Make a dummy read to clear COCO flag */
        (void) Adc_Ip_GetConvData(PhysicalHwUnitId, ChIndex);
    }
#ifdef ADC_DMA_SUPPORTED
    if (((uint8)ADC_DMA == Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->Mapping.u8Adc_DmaInterruptSoftware[Unit]) && (Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].u8AdcWithoutDma == FALSE))
    {
        /* Disable DMA for Adc */
        Adc_Ip_DisableDma(PhysicalHwUnitId);
        if((uint8)STD_OFF == Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].u8AdcExtDMAChanEnable)
        {
            /* Disable DMA hardware request */
            (void)Dma_Ip_SetLogicChannelCommand(Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->Mapping.au8Adc_DmaChannel[Unit], DMA_IP_CH_CLEAR_HARDWARE_REQUEST);
        }
    }
#endif /* ADC_DMA_SUPPORTED */
    /* Reset current channel status to 0 */
    Adc_aGroupStatus[Group].CurrentChannel = 0U;

    /* Stop the conversion and abort the current group conversion */
#if (ADC_BYPASS_ABORT_CHAIN_CHECK == STD_ON)
    if ((uint8)STD_OFF == Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].u8AdcWithoutInterrupt)
    {
        Status = Adc_Ipw_StopConversionCheckTimeout(Unit, Group, u32CoreId);
    }
#ifdef ADC_CONTINUOUS_NO_INTERRUPT_SUPPORTED
    else
    {
        /* If group is continuous and configured without interrupts, clear the CONTINUOUS bit */
        if (ADC_CONV_MODE_CONTINUOUS == Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].eMode)
        {
            Pdb_Adc_Ip_DisableAndClearPdb(PhysicalHwUnitId);
        }
    }
#endif /* ADC_CONTINUOUS_NO_INTERRUPT_SUPPORTED */
#else
    Status = Adc_Ipw_StopConversionCheckTimeout(Unit, Group, u32CoreId);
#endif /* (ADC_BYPASS_ABORT_CHAIN_CHECK == STD_OFF) */

    return Status;
}
#endif /* (ADC_ENABLE_START_STOP_GROUP_API == STD_ON) */

#if (ADC_HW_TRIGGER_API == STD_ON)
/**
* @brief          This function enables the hardware triggers for the specified group.
* @details        This function enables the hardware triggers for the specified group.
*
* @param[in]      Group             The group for which the hardware triggers will be enabled
* @param[in]      Unit              Adc Logical Unit Id
* @param[in]      u32CoreId         Current CoreID
*
* @return         Std_ReturnType    E_OK or E_NOT_OK.
* @retval         E_OK              If there is no running conversion.
* @retval         E_NOT_OK          If there is a running conversion.
*
*/
Std_ReturnType Adc_Ipw_EnableHardwareTrigger
(
    Adc_GroupType Group,
    Adc_HwUnitType Unit,
    uint32 u32CoreId
)
{
    uint8 ChIndex;

#if (ADC_SET_ADC_CONV_TIME_ONCE == STD_OFF)
    const Adc_GroupType GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];
    const Adc_GroupConfigurationType * GroupPtr = &(Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex]);
#endif /* (ADC_SET_ADC_CONV_TIME_ONCE == STD_OFF) */
    const Adc_HwUnitType PhysicalHwUnitId = Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->aAdcPhysicalId[Unit];
    Adc_aGroupStatus[Group].ResultIndex = 0U;

    /* Clear all of COCO flag by reading Rn registers */
    for(ChIndex = 0U; ChIndex < Adc_aUnitStatus[Unit].u8Sc1Used; ChIndex++)
    {
        (void)Adc_Ip_GetConvData(PhysicalHwUnitId, ChIndex);
    }

#if (ADC_SET_ADC_CONV_TIME_ONCE == STD_OFF)
    /* Configure group params (e.g. conversion time) if needed before starting conversion */
    Adc_Ipw_PrepareGroupStart(Unit, GroupPtr, u32CoreId);
#endif /* (ADC_SET_ADC_CONV_TIME_ONCE == STD_OFF) */

    Adc_Ipw_StartHwTrigConversion(Unit, Group, u32CoreId);

    return E_OK;
}

/**
* @brief          This function disables the hardware triggers for the specified group.
* @details        This function disables the hardware triggers for the specified group.
*
* @param[in]      Group           The group for which the hardware triggers will be enabled
* @param[in]      Unit            Adc Logical Unit Id
*
* @return         void
*
*/
void Adc_Ipw_DisableHardwareTrigger
(
    Adc_GroupType Group,
    Adc_HwUnitType Unit,
    uint32 u32CoreId
)
{
    uint8 ChIndex;
    Adc_Ip_ChanConfigType ChannelConfig;
    const Adc_HwUnitType PhysicalHwUnitId = Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->aAdcPhysicalId[Unit];
#ifdef ADC_DMA_SUPPORTED
    Adc_GroupType GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];
#endif /* ADC_DMA_SUPPORTED */

    (void) Group;

#ifdef ADC_DMA_SUPPORTED
    /* Not required to check u8AdcWithoutDma == FALSE, because u8AdcWithoutDma is only supported for SW normal triggered which cannot be HW Trigger when DMA transfer selected for HW unit */
    if (ADC_DMA == Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->Mapping.u8Adc_DmaInterruptSoftware[Unit])
    {
        if ((uint8)STD_ON == Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->Mapping.au8Adc_HwUnit[Unit])
        {
            /* Disable DMA for ADC Module */
            Adc_Ip_DisableDma(PhysicalHwUnitId);
            if((uint8)STD_OFF == Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex].u8AdcExtDMAChanEnable)
            {
                /* Disable Hardware Request for Dma */
                (void)Dma_Ip_SetLogicChannelCommand(Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->Mapping.au8Adc_DmaChannel[Unit], DMA_IP_CH_CLEAR_HARDWARE_REQUEST);
            }
        }
    }
#endif /* ADC_DMA_SUPPORTED */

    /* Disable Pdb hardware unit */
    Pdb_Adc_Ip_DisableAndClearPdb(PhysicalHwUnitId);

    /* Disable Adc hardware unit */
    for(ChIndex = 0U; ChIndex < Adc_aUnitStatus[Unit].u8Sc1Used; ChIndex++)
    {
        ChannelConfig.ChnIdx = ChIndex;
        ChannelConfig.Channel = ADC_IP_INPUTCHAN_DISABLED;
        ChannelConfig.InterruptEnable = FALSE;
        Adc_Ip_ConfigChannel(PhysicalHwUnitId, &ChannelConfig);
    }
}
#endif /* ADC_HW_TRIGGER_API == STD_ON */

/**
* @brief          Small function that validates current conversion.
* @details        Validates current conversion.
*
* @param[in]      PhysicalHwUnitId  The group number.
* @param[in]      StartIndex        Starting index of the check.
* @param[in]      EndIndex          End index of the check.
* @return         boolean  TRUE or FALSE.
* @retval         TRUE              Valid conversion.
* @retval         FALSE             Invalid conversion.
*
*/
boolean Adc_Ipw_CheckValidConversion
(
    Adc_HwUnitType PhysicalHwUnitId,
    Adc_ChannelIndexType StartIndex,
    Adc_ChannelIndexType EndIndex
)
{
    Adc_ChannelIndexType Index;
    boolean ValidConversion = TRUE;

    for (Index = StartIndex; Index < EndIndex; Index++)
    {
        ValidConversion = Adc_Ip_GetConvCompleteFlag(PhysicalHwUnitId, Index - StartIndex);
        if (!ValidConversion)
        {
            break;
        }
    }

    return ValidConversion;
}

#if (ADC_READ_GROUP_API == STD_ON)
/**
* @brief          This function reads the converted data for the requested group.
* @details        Reads the converted data for the requested group.
*
* @param[in]      Group           The group number.
* @param[in]      pDataPtr        Pointer to a buffer which will be filled by the
*                                 conversion results.
* @param[in]      pFlag
* @return         Std_ReturnType  E_OK or E_NOT_OK.
* @retval         E_OK            In case of successful read of the converted data.
* @retval         E_NOT_OK        In case of an ongoing conversion.
*
*/
Std_ReturnType Adc_Ipw_ReadGroup
(
    const Adc_GroupType Group,
    Adc_ValueGroupType * pDataPtr,
    boolean * pFlag,
    uint32 u32CoreId
)
{
    Std_ReturnType ReadGroupRet = (Std_ReturnType)E_OK;
    const Adc_GroupType GroupIndex = Adc_pCfgPtr[u32CoreId]->pGroupIdToIndexMap[Group];
    const Adc_GroupConfigurationType * GroupPtr = &(Adc_pCfgPtr[u32CoreId]->pGroups[GroupIndex]);
    const Adc_HwUnitType LogicalHwUnitId = GroupPtr->AdcLogicalUnitId;

    /* If the group is configured for without interrupts */
    if ((uint8)STD_ON == GroupPtr->u8AdcWithoutInterrupt)
    {
        /* Return error if group is not at the first of queue */
        if (ADC_CONV_TYPE_NORMAL == GroupPtr->eType)
        {
            if (ADC_TRIGG_SRC_SW == GroupPtr->eTriggerSource)
            {
                if (Group != Adc_aUnitStatus[LogicalHwUnitId].SwNormalQueue[0U])
                {
                    ReadGroupRet = (Std_ReturnType)E_NOT_OK;
                }
            }
#if (STD_ON == ADC_HW_TRIGGER_API)
            else
            {
                if (Group != Adc_aUnitStatus[LogicalHwUnitId].OngoingHwGroup)
                {
                    ReadGroupRet = (Std_ReturnType)E_NOT_OK;
                }
            }
#endif /* (STD_ON == ADC_HW_TRIGGER_API) */
        }
        if ((Std_ReturnType)E_OK == ReadGroupRet)
        {
            ReadGroupRet = Adc_Ipw_ReadGroupNoInt(GroupPtr, pDataPtr, pFlag, u32CoreId);
        }
    }
    else  /* If the group is configured with interrupts */
    {
        if (ADC_BUSY == Adc_aGroupStatus[Group].eConversion)
        {
            ReadGroupRet = (Std_ReturnType)E_NOT_OK;
        }

        if ((Std_ReturnType)E_OK == ReadGroupRet)
        {
            Adc_Ipw_WriteDataBuffer(Group, pDataPtr, u32CoreId);
        }
    }

    return ReadGroupRet;
}
#endif /* (ADC_READ_GROUP_API == STD_ON) */


#if (ADC_ENABLE_READ_RAW_DATA_API == STD_ON)
/**
* @brief          This function reads the converted data for the requested channel.
* @details        Reads the converted data for the requested channel.
* @note           The function might return E_NOT_OK in case the number of configured
*                 channels are greater than number of SC1 register (ADC_MAX_CHAN_COUNT)
*
* @param[in]      Unit            Adc Logical Unit Id
* @param[in]      Channel         Channel to be read
* @param[in]      u32CoreId       Current CoreID
* @param[out]     Result          Conversion result
* @return         Std_ReturnType  E_OK or E_NOT_OK.
* @retval         E_OK            In case of successful read of the converted data.
* @retval         E_NOT_OK        In case of not found channel.
*
*/
Std_ReturnType Adc_Ipw_GetConvData
(
    Adc_HwUnitType Unit,
    Adc_ChannelType Channel,
    uint32 u32CoreId,
    uint16 * Result
)
{
    const Adc_HwUnitType PhysicalHwUnitId = Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->aAdcPhysicalId[Unit];
    Std_ReturnType Status = (Std_ReturnType)E_NOT_OK;

    *Result = 0u;

    if (ADC_IP_STATUS_SUCCESS == Adc_Ip_GetChanData(PhysicalHwUnitId, (Adc_Ip_InputChannelType)Channel, Result))
    {
        Status = (Std_ReturnType)E_OK;
    }

    return Status;
}
#endif /* (ADC_ENABLE_READ_RAW_DATA_API == STD_ON) */

#if (ADC_ENABLE_LIMIT_CHECK == STD_ON)
/**
* @brief          Checks if conversion values are in the configured range.
* @details        Return true if conversion values are in the configured range, otherwise false.
*
* @param[in]      Value                 Adc conversion value.
*                 LogicalHwUnitId       Adc Hardware Unit.
*                 Index                 Adc channel index assigned to a group.
*                 u32CoreId             Current CoreID
*
* @return         boolean               Conversion value in range flag.
* @retval         TRUE                  If conversion values are in the configured range.
* @retval         FALSE                 If conversion values are not in the configured range.
*
* @pre            Driver must be initialized.
*/
boolean Adc_Ipw_CheckConversionValuesInRange
(
    Adc_ValueGroupType Value,
    Adc_HwUnitType LogicalHwUnitId,
    Adc_ChannelType ChannelIndex,
    uint32 u32CoreId
)
{
    const Adc_ChannelLimitCheckingType * const pChannelLimitCheckingCfg = &(Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->ChannelLimitCheckingConfigs[LogicalHwUnitId][ChannelIndex]);
    boolean bValInRange = FALSE;
    const Adc_ChannelRangeSelectType eChRange = pChannelLimitCheckingCfg->eChannelRange;
    const Adc_ValueGroupType LowLimit = pChannelLimitCheckingCfg->ChannelLowLimit;
    const Adc_ValueGroupType HighLimit = pChannelLimitCheckingCfg->ChannelHighLimit;

    switch (eChRange)
    {
        /* Complete range - independent from channel limit settings. */
        case ADC_RANGE_ALWAYS:
        {
            bValInRange = TRUE;
            break;
        }
        /* Range between low limit and high limit - high limit value included. */
        case ADC_RANGE_BETWEEN:
        {
            if ((Value > LowLimit) && (Value <= HighLimit))
            {
                bValInRange = TRUE;
            }
            break;
        }
        /* Range above high limit or below low limit - low limit value included. */
        case ADC_RANGE_NOT_BETWEEN:
        {
            if ((Value > HighLimit) || (Value <= LowLimit))
            {
                bValInRange = TRUE;
            }
            break;
        }
        /* Range below high limit -high limit value included. */
        case ADC_RANGE_NOT_OVER_HIGH:
        {
            if (Value <= HighLimit)
            {
                bValInRange = TRUE;
            }
            break;
        }
        /* Range above low limit. */
        case ADC_RANGE_NOT_UNDER_LOW:
        {
            if (Value > LowLimit)
            {
                bValInRange = TRUE;
            }
            break;
        }
        /* Range above high limit. */
        case ADC_RANGE_OVER_HIGH:
        {
            if (Value > HighLimit)
            {
                bValInRange = TRUE;
            }
            break;
        }
        /* Range below low limit - low limit value included. */
        case ADC_RANGE_UNDER_LOW:
        {
            if (Value <= LowLimit)
            {
                bValInRange = TRUE;
            }
            break;
        }
        /* Unexpected value */
        default:
        {
            ; /* no-op */
            break;
        }
    }
    return bValInRange;
}
#endif /* (ADC_ENABLE_LIMIT_CHECK == STD_ON) */

#if (ADC_DUAL_CLOCK_MODE == STD_ON)
/**
* @brief          This function sets the Prescaler value only when ADC is in power down mode.
* @details        Set prescaler clock divider only in power down mode.
*
* @param[in]      Prescaler         ADC_NORMAL, ADC_ALTERNATE.
* @param[in]      u32CoreId         Current CoreID
*
* @return         Std_ReturnType  E_OK or E_NOT_OK.
* @retval         E_OK            In case of successful set hw unit power mode.
* @retval         E_NOT_OK        In case of unsuccessful set hw unit power mode.
*
*/
Std_ReturnType Adc_Ipw_SetClockMode
(
   Adc_SelectPrescalerType Prescaler,
   uint32 u32CoreId
)
{
    Adc_HwUnitType LogicalHwUnitId = 0U; /* Hardware Unit index */
    Adc_HwUnitType PhysicalHwUnitId = 0U; /* Hardware Unit index */
    Adc_Ip_ClockConfigType AdcNormalClockConfig;
    const Adc_Ip_ConfigType * pAdc;

    for (LogicalHwUnitId = 0U; LogicalHwUnitId < ADC_MAX_HW_UNITS_CFG; LogicalHwUnitId++)
    {
        if (Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->Mapping.au8Adc_HwUnit[LogicalHwUnitId] == (uint8)STD_ON) /* HW unit enabled on current partition */
        {
            PhysicalHwUnitId = Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->aAdcPhysicalId[LogicalHwUnitId];
            pAdc = Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->apAdcConfig[LogicalHwUnitId];
            if (Prescaler == ADC_NORMAL)
            {
                AdcNormalClockConfig.ClockDivide = pAdc->ClockDivide;
                AdcNormalClockConfig.InputClock = pAdc->InputClock;
                AdcNormalClockConfig.SampleTime = pAdc->SampleTime;
                AdcNormalClockConfig.AvgEn = pAdc->AvgEn;
                AdcNormalClockConfig.AvgSel = pAdc->AvgSel;
                Adc_Ip_SetClockMode(PhysicalHwUnitId, &AdcNormalClockConfig);
            }
            else
            {
                Adc_Ip_SetClockMode(PhysicalHwUnitId, Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->apAdcAltClockConfig[LogicalHwUnitId]);
            }
        }
    }

    return E_OK;
}
#endif /* (ADC_DUAL_CLOCK_MODE == STD_ON) */

#if (ADC_CALIBRATION == STD_ON)
void Adc_Ipw_Calibrate
(
    Adc_HwUnitType Unit,
    Adc_CalibrationStatusType * Status,
    uint32 u32CoreId
)
{
    Adc_Ip_StatusType IpStatus;
    const Adc_HwUnitType PhysicalHwUnitId = Adc_pCfgPtr[u32CoreId]->pAdcIpwConfig->aAdcPhysicalId[Unit];

    Status->Adc_UnitSelfTestStatus = E_OK;
    IpStatus = Adc_Ip_DoCalibration(PhysicalHwUnitId);

    if (IpStatus != ADC_IP_STATUS_SUCCESS)
    {
        Status->Adc_UnitSelfTestStatus = E_NOT_OK;
#if (ADC_CALSTAT_AVAILABLE == STD_ON)
        /* TODO: populate Status->Adc_au8Calibrate_Failed_Steps */
#endif /* (ADC_CALSTAT_AVAILABLE == STD_ON) */
    }
}
#endif /* ADC_CALIBRATION == STD_ON */

/**
* @brief        This function returns the id of the core from which it is called.
* @details      This function returns the result of the OsIf_GetCoreID OS function
*               (which is called in the appropriate context depending on USER MODE)
*               If the multicore feature is disabled for ADC, this function will return 0.
*
* @param[in]    void
*
* @return      uint32  the core number.
*/
uint32 Adc_GetCoreID(void)
{
    return 0UL;
}
#define ADC_STOP_SEC_CODE
#include "Adc_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
