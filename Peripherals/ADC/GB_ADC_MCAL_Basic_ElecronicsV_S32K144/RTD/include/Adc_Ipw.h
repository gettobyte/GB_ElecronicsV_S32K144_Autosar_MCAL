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

#ifndef ADC_IPW_H
#define ADC_IPW_H

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
#include "Adc_Ipw_Types.h"
#include "Adc_Ipw_Cfg.h"

#include "Adc_Ip.h"
#ifdef ADC_DMA_SUPPORTED
#include "Dma_Ip.h"
#endif
#include "Pdb_Adc_Ip.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define ADC_VENDOR_ID_IPW_H                       43
#define ADC_AR_RELEASE_MAJOR_VERSION_IPW_H        4
#define ADC_AR_RELEASE_MINOR_VERSION_IPW_H        4
#define ADC_AR_RELEASE_REVISION_VERSION_IPW_H     0
#define ADC_SW_MAJOR_VERSION_IPW_H                1
#define ADC_SW_MINOR_VERSION_IPW_H                0
#define ADC_SW_PATCH_VERSION_IPW_H                0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Adc_Ipw.h file and Adc_Ipw_Types.h file are of the same vendor */
#if (ADC_VENDOR_ID_IPW_H != ADC_VENDOR_ID_IPW_TYPES_H)
    #error "Adc_Ipw.h and Adc_Ipw_Types.h have different vendor ids"
#endif

/* Check if Adc_Ipw.h file and Adc_Ipw_Types.h file are of the same Autosar version */
#if ((ADC_AR_RELEASE_MAJOR_VERSION_IPW_H != ADC_AR_RELEASE_MAJOR_VERSION_IPW_TYPES_H) || \
     (ADC_AR_RELEASE_MINOR_VERSION_IPW_H != ADC_AR_RELEASE_MINOR_VERSION_IPW_TYPES_H) || \
     (ADC_AR_RELEASE_REVISION_VERSION_IPW_H != ADC_AR_RELEASE_REVISION_VERSION_IPW_TYPES_H) \
    )
    #error "AutoSar Version Numbers of Adc_Ipw.h and Adc_Ipw_Types.h are different"
#endif

/* Check if Adc_Ipw.h file and Adc_Ipw_Types.h file are of the same Software version */
#if ((ADC_SW_MAJOR_VERSION_IPW_H != ADC_SW_MAJOR_VERSION_IPW_TYPES_H) || \
     (ADC_SW_MINOR_VERSION_IPW_H != ADC_SW_MINOR_VERSION_IPW_TYPES_H) || \
     (ADC_SW_PATCH_VERSION_IPW_H != ADC_SW_PATCH_VERSION_IPW_TYPES_H) \
    )
  #error "Software Version Numbers of Adc_Ipw.h and Adc_Ipw_Types.h are different"
#endif

/* Check if Adc_Ipw.h file and Adc_Ipw_Cfg.h file are of the same vendor */
#if (ADC_VENDOR_ID_IPW_H != ADC_VENDOR_ID_IPW_CFG_H)
    #error "Adc_Ipw.h and Adc_Ipw_Cfg.h have different vendor ids"
#endif

/* Check if Adc_Ipw.h file and Adc_Ipw_Cfg.h file are of the same Autosar version */
#if ((ADC_AR_RELEASE_MAJOR_VERSION_IPW_H != ADC_AR_RELEASE_MAJOR_VERSION_IPW_CFG_H) || \
     (ADC_AR_RELEASE_MINOR_VERSION_IPW_H != ADC_AR_RELEASE_MINOR_VERSION_IPW_CFG_H) || \
     (ADC_AR_RELEASE_REVISION_VERSION_IPW_H != ADC_AR_RELEASE_REVISION_VERSION_IPW_CFG_H) \
    )
    #error "AutoSar Version Numbers of Adc_Ipw.h and Adc_Ipw_Cfg.h are different"
#endif

/* Check if Adc_Ipw.h file and Adc_Ipw_Cfg.h file are of the same Software version */
#if ((ADC_SW_MAJOR_VERSION_IPW_H != ADC_SW_MAJOR_VERSION_IPW_CFG_H) || \
     (ADC_SW_MINOR_VERSION_IPW_H != ADC_SW_MINOR_VERSION_IPW_CFG_H) || \
     (ADC_SW_PATCH_VERSION_IPW_H != ADC_SW_PATCH_VERSION_IPW_CFG_H) \
    )
  #error "Software Version Numbers of Adc_Ipw.h and Adc_Ipw_Cfg.h are different"
#endif

/* Check if Adc_Ipw.h file and Adc_Ip.h file are of the same vendor */
#if (ADC_VENDOR_ID_IPW_H != ADC_IP_VENDOR_ID_H)
    #error "Adc_Ipw.h and Adc_Ip.h have different vendor ids"
#endif

/* Check if Adc_Ipw.h file and Adc_Ip.h file are of the same Autosar version */
#if ((ADC_AR_RELEASE_MAJOR_VERSION_IPW_H != ADC_IP_AR_RELEASE_MAJOR_VERSION_H) || \
     (ADC_AR_RELEASE_MINOR_VERSION_IPW_H != ADC_IP_AR_RELEASE_MINOR_VERSION_H) || \
     (ADC_AR_RELEASE_REVISION_VERSION_IPW_H != ADC_IP_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Adc_Ipw.h and Adc_Ip.h are different"
#endif

/* Check if Adc_Ipw.h file and Adc_Ip.h file are of the same Software version */
#if ((ADC_SW_MAJOR_VERSION_IPW_H != ADC_IP_SW_MAJOR_VERSION_H) || \
     (ADC_SW_MINOR_VERSION_IPW_H != ADC_IP_SW_MINOR_VERSION_H) || \
     (ADC_SW_PATCH_VERSION_IPW_H != ADC_IP_SW_PATCH_VERSION_H) \
    )
  #error "Software Version Numbers of Adc_Ipw.h and Adc_Ip.h are different"
#endif

/* Check if Adc_Ipw.h file and Pdb_Adc_Ip.h file are of the same vendor */
#if (ADC_VENDOR_ID_IPW_H != PDB_ADC_IP_VENDOR_ID_H)
    #error "Adc_Ipw.h and Pdb_Adc_Ip.h have different vendor ids"
#endif

/* Check if Adc_Ipw.h file and Pdb_Adc_Ip.h file are of the same Autosar version */
#if ((ADC_AR_RELEASE_MAJOR_VERSION_IPW_H != PDB_ADC_IP_AR_RELEASE_MAJOR_VERSION_H) || \
     (ADC_AR_RELEASE_MINOR_VERSION_IPW_H != PDB_ADC_IP_AR_RELEASE_MINOR_VERSION_H) || \
     (ADC_AR_RELEASE_REVISION_VERSION_IPW_H != PDB_ADC_IP_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Adc_Ipw.h and Pdb_Adc_Ip.h are different"
#endif

/* Check if Adc_Ipw.h file and Pdb_Adc_Ip.h file are of the same Software version */
#if ((ADC_SW_MAJOR_VERSION_IPW_H != PDB_ADC_IP_SW_MAJOR_VERSION_H) || \
     (ADC_SW_MINOR_VERSION_IPW_H != PDB_ADC_IP_SW_MINOR_VERSION_H) || \
     (ADC_SW_PATCH_VERSION_IPW_H != PDB_ADC_IP_SW_PATCH_VERSION_H) \
    )
  #error "Software Version Numbers of Adc_Ipw.h and Pdb_Adc_Ip.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
#ifdef ADC_DMA_SUPPORTED
/* Check if Adc_Ipw.h file and Dma_Ip.h file are of the same Autosar version */
#if ((ADC_AR_RELEASE_MAJOR_VERSION_IPW_H != DMA_IP_AR_RELEASE_MAJOR_VERSION_H) || \
     (ADC_AR_RELEASE_MINOR_VERSION_IPW_H != DMA_IP_AR_RELEASE_MINOR_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Adc_Ipw.h and Dma_Ip.h are different"
#endif
#endif /* ADC_DMA_SUPPORTED */
#endif /* DISABLE_MCAL_INTERMODULE_ASR_CHECK */
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/* The macro to calculate the number of channels for each configuration */
#define ADC_IPW_CALCULATE_CHAN_NUMBER(x) (((x) >= ADC_MAX_CHAN_COUNT) ? ADC_MAX_CHAN_COUNT : ((x)%ADC_MAX_CHAN_COUNT))
#ifdef ADC_DMA_SUPPORTED
#define ADC_IPW_INVALID_DATA_RESULT_DMA     (0xFFFFU)
#define ADC_IPW_GET_COMPLEMENT_OF_2(x)      ((uint32)(~((uint32)(x)) + 1U))
#endif /* ADC_DMA_SUPPORTED */
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
#define ADC_START_SEC_CODE
#include "Adc_MemMap.h"

#if ((defined(ADC_UNIT_0_ISR_USED)) || (defined(ADC_UNIT_1_ISR_USED)) || \
     (defined(ADC_DMA_SUPPORTED)) || (ADC_READ_GROUP_API == STD_ON) \
    )
uint8 Adc_Ipw_CalculateNumsBitShift
(
    Adc_Ip_ResolutionType Resolution
);
#endif  /* (defined(ADC_UNIT_0_ISR_USED) || ... */

#ifdef ADC_DMA_SUPPORTED
void Adc_Ipw_StartDmaOperation
(
    Adc_HwUnitType Unit,
    Adc_GroupType Group,
    uint8 u8NumChannel,
    uint32 u32CoreId
);
#endif /* ADC_DMA_SUPPORTED */

/**
* @brief          Functions mapping.
* @details        Middle layer versus Low layer functions mapping
*
*/
Std_ReturnType Adc_Ipw_Init(const Adc_Ipw_Config * pIpwCfg, const uint32 u32CoreId);

#if (ADC_DEINIT_API == STD_ON)
Std_ReturnType Adc_Ipw_DeInit(uint32 u32CoreId);
#endif /* ADC_DEINIT_API == STD_ON */

#if (ADC_ENABLE_START_STOP_GROUP_API == STD_ON)
void Adc_Ipw_StartNormalConversion
(
    Adc_HwUnitType Unit,
    uint32 u32CoreId
);

Std_ReturnType Adc_Ipw_StopCurrentConversion
(
    Adc_HwUnitType Unit,
    Adc_GroupType Group,
    uint32 u32CoreId
);
#endif /* ADC_ENABLE_START_STOP_GROUP_API == STD_ON */

#if (ADC_HW_TRIGGER_API == STD_ON)
Std_ReturnType Adc_Ipw_EnableHardwareTrigger
(
    Adc_GroupType Group,
    Adc_HwUnitType Unit,
    uint32 u32CoreId
);

void Adc_Ipw_DisableHardwareTrigger
(
    Adc_GroupType Group,
    Adc_HwUnitType Unit,
    uint32 u32CoreId
);
#endif /* ADC_HW_TRIGGER_API == STD_ON */

boolean Adc_Ipw_CheckValidConversion
(
    Adc_HwUnitType PhysicalHwUnitId,
    Adc_ChannelIndexType StartIndex,
    Adc_ChannelIndexType EndIndex
);

#if (ADC_READ_GROUP_API == STD_ON)
Std_ReturnType Adc_Ipw_ReadGroup
(
    const Adc_GroupType Group,
    Adc_ValueGroupType * pDataPtr,
    boolean * pFlag,
    uint32 u32CoreId
);
#endif /* ADC_READ_GROUP_API == STD_ON */

#if (ADC_ENABLE_READ_RAW_DATA_API == STD_ON)
Std_ReturnType Adc_Ipw_GetConvData
(
    Adc_HwUnitType Unit,
    Adc_ChannelType Channel,
    uint32 u32CoreId,
    uint16 * Result
);
#endif /* (ADC_ENABLE_READ_RAW_DATA_API == STD_ON) */

#if (ADC_CALIBRATION == STD_ON)
void Adc_Ipw_Calibrate
(
    Adc_HwUnitType Unit,
    Adc_CalibrationStatusType * Status,
    uint32 u32CoreId
);
#endif /* ADC_CALIBRATION == STD_ON */

void Adc_Ipw_ConfigureConversion
(
    Adc_HwUnitType Unit,
    Adc_GroupType Group,
    Adc_HwTriggerTimerType Trigger,
    uint8 NumChannel,
    uint32 u32CoreId
);

#ifdef ADC_DMA_SUPPORTED
void Adc_Ipw_ConfigureDmaConversion
(
    Adc_HwUnitType Unit,
    Adc_GroupType Group,
    Adc_HwTriggerTimerType Trigger,
    uint8 NumChannel
);
#endif /* ADC_DMA_SUPPORTED */

#if (ADC_HW_TRIGGER_API == STD_ON)
void Adc_Ipw_StartHwTrigConversion
(
    Adc_HwUnitType Unit,
    Adc_GroupType Group,
    uint32 u32CoreId
);
#endif /* (ADC_HW_TRIGGER_API == STD_ON) */

#if (ADC_DUAL_CLOCK_MODE == STD_ON)
  Std_ReturnType Adc_Ipw_SetClockMode
(
   Adc_SelectPrescalerType Prescaler,
   uint32 u32CoreId
);
#endif /* (ADC_DUAL_CLOCK_MODE == STD_ON) */

#if (ADC_ENABLE_LIMIT_CHECK == STD_ON)
boolean Adc_Ipw_CheckConversionValuesInRange
(
    Adc_ValueGroupType Value,
    Adc_HwUnitType LogicalHwUnitId,
    Adc_ChannelType ChannelIndex,
    uint32 u32CoreId
);
#endif /* (ADC_ENABLE_LIMIT_CHECK == STD_ON) */

#if (ADC_ENABLE_QUEUING == STD_ON)
void Adc_RemoveFromQueue
(
    const Adc_HwUnitType Unit,
    const Adc_QueueIndexType CurQueueIndex
);
#endif /* (ADC_ENABLE_QUEUING == STD_ON) */

uint32 Adc_GetCoreID(void);

#define ADC_STOP_SEC_CODE
#include "Adc_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* ADC_IPW_H */
