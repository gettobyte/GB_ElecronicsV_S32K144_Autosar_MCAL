/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : DMA,CACHE,TRGMUX,FLEXIO
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
*   @file CDD_Mcl.c
*
*   @version 1.0.0
*
*   @brief   AUTOSAR Mcl - MCL driver source file.
*   @details
*
*   @addtogroup MCL_DRIVER MCL Driver
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2012 violations
*/

/*==================================================================================================
 *                                          INCLUDE FILES
 *  1) system and project includes
 *  2) needed interfaces from external units
 *  3) internal and external interfaces from this unit
==================================================================================================*/
#include "CDD_Mcl.h"
#include "CDD_Mcl_Irq.h"

#if (MCL_DET_IS_AVAILABLE == STD_ON)
    #include "Det.h"
#endif

#if (MCL_DEM_IS_AVAILABLE == STD_ON)
#include "Dem.h"
#endif

/*==================================================================================================
 *                                      SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CDD_MCL_VENDOR_ID_C                       43
#define CDD_MCL_AR_RELEASE_MAJOR_VERSION_C        4
#define CDD_MCL_AR_RELEASE_MINOR_VERSION_C        4
#define CDD_MCL_AR_RELEASE_REVISION_VERSION_C     0
#define CDD_MCL_SW_MAJOR_VERSION_C                1
#define CDD_MCL_SW_MINOR_VERSION_C                0
#define CDD_MCL_SW_PATCH_VERSION_C                0

/*==================================================================================================
 *                                       FILE VERSION CHECKS
==================================================================================================*/
/* Check if CDD_Mcl.c file and CDD_Mcl.h file are of the same vendor */
#if (CDD_MCL_VENDOR_ID_C != CDD_MCL_VENDOR_ID_H)
    #error "CDD_Mcl.c and CDD_Mcl.h have different vendor ids"
#endif

/* Check if CDD_Mcl.c file and CDD_Mcl.h file are of the same Autosar version */
#if ((CDD_MCL_AR_RELEASE_MAJOR_VERSION_C != CDD_MCL_AR_RELEASE_MAJOR_VERSION_H) || \
     (CDD_MCL_AR_RELEASE_MINOR_VERSION_C != CDD_MCL_AR_RELEASE_MINOR_VERSION_H) || \
     (CDD_MCL_AR_RELEASE_REVISION_VERSION_C != CDD_MCL_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of CDD_Mcl.c and CDD_Mcl.h are different"
#endif

/* Check if CDD_Mcl.c file and CDD_Mcl.h file are of the same Software version */
#if ((CDD_MCL_SW_MAJOR_VERSION_C != CDD_MCL_SW_MAJOR_VERSION_H) || \
     (CDD_MCL_SW_MINOR_VERSION_C != CDD_MCL_SW_MINOR_VERSION_H) || \
     (CDD_MCL_SW_PATCH_VERSION_C != CDD_MCL_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of CDD_Mcl.c and CDD_Mcl.h are different"
#endif

/* Check if CDD_Mcl.c file and CDD_Mcl_Irq.h file are of the same vendor */
#if (CDD_MCL_VENDOR_ID_C != CDD_MCL_IRQ_VENDOR_ID_H)
    #error "CDD_Mcl.c and CDD_Mcl_Irq.h have different vendor ids"
#endif

/* Check if CDD_Mcl.c file and CDD_Mcl_Irq.h file are of the same Autosar version */
#if ((CDD_MCL_AR_RELEASE_MAJOR_VERSION_C != CDD_MCL_IRQ_AR_RELEASE_MAJOR_VERSION_H) || \
     (CDD_MCL_AR_RELEASE_MINOR_VERSION_C != CDD_MCL_IRQ_AR_RELEASE_MINOR_VERSION_H) || \
     (CDD_MCL_AR_RELEASE_REVISION_VERSION_C != CDD_MCL_IRQ_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of CDD_Mcl.c and CDD_Mcl_Irq.h are different"
#endif

/* Check if CDD_Mcl.c file and CDD_Mcl_Irq.h file are of the same Software version */
#if ((CDD_MCL_SW_MAJOR_VERSION_C != CDD_MCL_IRQ_SW_MAJOR_VERSION_H) || \
     (CDD_MCL_SW_MINOR_VERSION_C != CDD_MCL_IRQ_SW_MINOR_VERSION_H) || \
     (CDD_MCL_SW_PATCH_VERSION_C != CDD_MCL_IRQ_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of CDD_Mcl.c and CDD_Mcl_Irq.h are different"
#endif

#if (MCL_DET_IS_AVAILABLE == STD_ON)
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if CDD_Mcl.c file and Det header file are of the same Autosar version */
#if ((CDD_MCL_AR_RELEASE_MAJOR_VERSION_C != DET_AR_RELEASE_MAJOR_VERSION) || \
     (CDD_MCL_AR_RELEASE_MINOR_VERSION_C != DET_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of CDD_Mcl.c and Det.h are different"
#endif
#endif
#endif

#if (MCL_DEM_IS_AVAILABLE == STD_ON)
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if CDD_Mcl.c file and Dem header file are of the same Autosar version */
#if ((CDD_MCL_AR_RELEASE_MAJOR_VERSION_C != DEM_AR_RELEASE_MAJOR_VERSION) || \
     (CDD_MCL_AR_RELEASE_MINOR_VERSION_C != DEM_AR_RELEASE_MINOR_VERSION))
    #error "AUTOSAR Version Numbers of CDD_Mcl.c and Dem.h are different"
#endif
#endif
#endif

/*==================================================================================================
 *                           LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                          LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
 *                                        LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
 *                                        LOCAL VARIABLES
==================================================================================================*/
#define MCL_START_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

static const Mcl_ConfigType * Mcl_pConfig;

#define MCL_STOP_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"


/*==================================================================================================
 *                                        GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
 *                                        GLOBAL VARIABLES
==================================================================================================*/
#if (MCL_EMIOS_IS_AVAILABLE == STD_ON)
#define MCL_START_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE
#include "Mcl_MemMap.h"

Mcl_EmiosInitConfigType * Emios_Common_Config;

#define MCL_STOP_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE
#include "Mcl_MemMap.h"

#define MCL_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
#include "Mcl_MemMap.h"

uint8 MclEmiosLogicToHwInstance[eMIOS_INSTANCE_COUNT] = { 255 };

#define MCL_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
#include "Mcl_MemMap.h"
#endif /* EMIOS_IS_AVAILABLE */

#if (MCL_FLEXIO_IS_AVAILABLE == STD_ON)
#define MCL_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
#include "Mcl_MemMap.h"

uint8 MclFlexioLogicToHwInstance[FLEXIO_INSTANCE_COUNT] = { 255 };

#define MCL_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
#include "Mcl_MemMap.h"
#endif /* FLEXIO_IS_AVAILABLE */

/*==================================================================================================
 *                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#if (MCL_EMIOS_IS_AVAILABLE == STD_ON)
#define MCL_START_SEC_CODE
#include "Mcl_MemMap.h"

static inline void Mcl_Emios_Init(const Mcl_EmiosInitConfigType * const pConfig);
static inline void Mcl_Emios_Deinit(void);

#if (MCL_DET_IS_AVAILABLE == STD_ON)
static inline Std_ReturnType Mcl_Emios_ValidateLogicChannel(uint16 logicChannel);
#endif

#define MCL_STOP_SEC_CODE
#include "Mcl_MemMap.h"
#endif /* MCL_EMIOS_IS_AVAILABLE == STD_ON */

#define MCL_START_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

#if (MCL_DET_IS_AVAILABLE == STD_ON)
static Mcl_ReturnType Mcl_ValidatePtrInit(const Mcl_ConfigType * const ConfigPtr);
#endif /* MCL_DET_IS_AVAILABLE == STD_ON */

#if (MCL_CACHE_IS_AVAILABLE == STD_ON)
#if (MCL_DEM_IS_AVAILABLE == STD_ON)
static void Mcl_Dem_ReportErrorStatus(const Std_ReturnType Status, const uint32 DemState, uint32 DemId);
#endif /* MCL_DEM_IS_AVAILABLE == STD_ON */
#endif /* MCL_CACHE_IS_AVAILABLE == STD_ON */

#if (MCL_DMA_IS_AVAILABLE == STD_ON)
static void Mcl_DmaReturnCheck(const uint8 Channel, const uint8 Function, const Dma_Ip_ReturnType RetStatus);
#endif /* #if (MCL_DMA_IS_AVAILABLE == STD_ON) */

#define MCL_STOP_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

/*==================================================================================================
 *                                        LOCAL FUNCTIONS
==================================================================================================*/
#define MCL_START_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

#if (MCL_DET_IS_AVAILABLE == STD_ON)
static Mcl_ReturnType Mcl_ValidatePtrInit(const Mcl_ConfigType * const ConfigPtr)
{
    Mcl_ReturnType Valid = MCL_STATUS_SUCCESS;

#if (MCL_PRECOMPILE_SUPPORT == STD_OFF)
    if (NULL_PTR == ConfigPtr)
    {
        Valid = MCL_STATUS_ERROR;
        (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, 0U, MCL_DET_INIT, MCL_E_INIT_FAILED);
    }
    else
    {
        /** do nothing */
    }
#elif (MCL_PRECOMPILE_SUPPORT == STD_ON)
    if (NULL_PTR != ConfigPtr)
    {
        Valid = MCL_STATUS_ERROR;
        (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, 0U, MCL_DET_INIT, MCL_E_INIT_FAILED);
    }
    else
    {
        /** do nothing */
    }
#endif /* MCL_PRECOMPILE_SUPPORT */

    return Valid;
}
#endif /* MCL_DET_IS_AVAILABLE == STD_ON */

#if (MCL_CACHE_IS_AVAILABLE == STD_ON)
#if (MCL_DEM_IS_AVAILABLE == STD_ON)
static void Mcl_Dem_ReportErrorStatus(const Std_ReturnType Status, const uint32 DemState, uint32 DemId)
{
    if((uint32)STD_ON == DemState)
    {
        if((uint8)E_OK == Status)
        {
            (void)Dem_SetEventStatus((uint16)DemId, DEM_EVENT_STATUS_PASSED);
        }
        else
        {
            (void)Dem_SetEventStatus((uint16)DemId, DEM_EVENT_STATUS_FAILED);
        }
    }
    else
    {
        /* Do nothing */
    }
}
#endif /* MCL_DEM_IS_AVAILABLE == STD_ON */
#endif /* MCL_CACHE_IS_AVAILABLE == STD_ON*/

#if (MCL_DMA_IS_AVAILABLE == STD_ON)
/* Check returned status of the IP-Layer DMA function */
static void Mcl_DmaReturnCheck(const uint8 Channel, const uint8 Function, const Dma_Ip_ReturnType RetStatus)
{
    switch(RetStatus)
    {
    #if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
        case DMA_IP_STATUS_WRONG_CORE:
            #if (MCL_DET_IS_AVAILABLE == STD_ON)
                (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, (uint8)Channel, Function, MCL_E_PARAM_CONFIG);
            #endif /* MCL_DET_IS_AVAILABLE == STD_ON */
        break;
    #endif /* (MCL_MULTICORE_IS_AVAILABLE == STD_ON) */
#if (MCL_DET_IS_AVAILABLE == STD_ON)
        case DMA_IP_STATUS_ERROR:
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, (uint8)Channel, Function, MCL_E_INCONSISTENCY);
        break;
        case DMA_IP_STATUS_WRONG_STATE:
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, (uint8)Channel, Function, MCL_E_INVALID_STATE);
        break;
        case DMA_IP_STATUS_WRONG_CONFIG:
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, (uint8)Channel, Function, MCL_E_INVALID_PARAMETER);
        break;
#endif /* #if (MCL_DET_IS_AVAILABLE == STD_ON) */
        case DMA_IP_STATUS_SUCCESS:
            (void)Channel;
            (void)Function;
        break;
        default:
            /* Do nothing... */
        break;
    }
}
#endif /* #if (MCL_DMA_IS_AVAILABLE == STD_ON) */

#define MCL_STOP_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

/*==================================================================================================
 *                                        GLOBAL FUNCTIONS
==================================================================================================*/
#define MCL_START_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

void Mcl_Init(const Mcl_ConfigType * const ConfigPtr)
{
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    #if (MCL_DMA_IS_AVAILABLE == STD_ON)
    Dma_Ip_ReturnType DmaIpStatus;
    #endif
    #if (MCL_TRGMUX_IS_AVAILABLE == STD_ON)
    Trgmux_Ip_StatusType TrgmuxIpStatus;
    #endif
    #if (MCL_LCU_IS_AVAILABLE == STD_ON)
    Lcu_Ip_ReturnType LcuIpStatus;
    #endif
    Mcl_ReturnType ValidPtr;

    ValidPtr = Mcl_ValidatePtrInit(ConfigPtr);
    if(MCL_STATUS_SUCCESS == ValidPtr)
    {
#endif /* MCL_DET_IS_AVAILABLE == STD_ON */
        if(NULL_PTR == Mcl_pConfig)
        {
            #if (MCL_PRECOMPILE_SUPPORT == STD_ON)
                Mcl_pConfig = &Mcl_Config;
                (void)ConfigPtr;
            #else
                Mcl_pConfig = ConfigPtr;
            #endif /* MCL_PRECOMPILE_SUPPORT == STD_ON */
                if(NULL_PTR != Mcl_pConfig)
                {
                #if (MCL_DMA_IS_AVAILABLE == STD_ON)
                    if(NULL_PTR != Mcl_pConfig->pxDmaInitType)
                    {
                    #if (MCL_DET_IS_AVAILABLE == STD_ON)
                        DmaIpStatus = Dma_Ip_Init(Mcl_pConfig->pxDmaInitType);
                        if(DMA_IP_STATUS_SUCCESS != DmaIpStatus)
                        {
                            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, (uint8)0U, MCL_DET_INIT, MCL_E_UNINIT);
                        }
                    #else
                        (void)Dma_Ip_Init(Mcl_pConfig->pxDmaInitType);
                    #endif
                    }
                #endif /* #if (MCL_DMA_IS_AVAILABLE == STD_ON) */
                #if (MCL_TRGMUX_IS_AVAILABLE == STD_ON)
                    if(NULL_PTR != Mcl_pConfig->pxTrgmuxInitType)
                    {
                    #if (MCL_DET_IS_AVAILABLE == STD_ON)
                        TrgmuxIpStatus = Trgmux_Ip_Init(Mcl_pConfig->pxTrgmuxInitType);
                        if(TRGMUX_IP_STATUS_SUCCESS != TrgmuxIpStatus)
                        {
                            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, (uint8)0U, MCL_DET_INIT, MCL_E_UNINIT);
                        }
                    #else
                        (void)Trgmux_Ip_Init(Mcl_pConfig->pxTrgmuxInitType);
                    #endif
                    }
                #endif /* MCL_TRGMUX_IS_AVAILABLE */
                #if(MCL_EMIOS_IS_AVAILABLE == STD_ON)
                    if(NULL_PTR != Mcl_pConfig->pEmiosInitType)
                    {
                        (void)Mcl_Emios_Init(Mcl_pConfig->pEmiosInitType);
                    }
                #endif /* MCL_EMIOS_IS_AVAILABLE */
                #if(MCL_FLEXIO_IS_AVAILABLE == STD_ON)
                    if(NULL_PTR != Mcl_pConfig->pFlexioInitType)
                    {
                        (void)Flexio_Mcl_Ip_InitDevice(Mcl_pConfig->pFlexioInitType);
                    }
                #endif /* MCL_FLEXIO_IS_AVAILABLE */
                #if(MCL_LCU_IS_AVAILABLE == STD_ON)
                    if(NULL_PTR != Mcl_pConfig->pxLcuInitType)
                    {
                    #if (MCL_DET_IS_AVAILABLE == STD_ON)
                        LcuIpStatus = Mcl_Ipw_Lcu_Init(Mcl_pConfig->pxLcuInitType);
                        if (LCU_IP_STATUS_SUCCESS != LcuIpStatus)
                        {
                            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, (uint8)0U, MCL_DET_INIT, MCL_E_UNINIT);
                        }
                    #else /* MCL_DET_IS_AVAILABLE */
                        (void)Mcl_Ipw_Lcu_Init(Mcl_pConfig->pxLcuInitType);
                    #endif
                    }
                #endif /* MCL_LCU_IS_AVAILABLE */
                }
            }
        else
        {
#if (MCL_DET_IS_AVAILABLE == STD_ON)
        (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, (uint8)0U, MCL_DET_INIT, MCL_E_UNINIT);
#else /* MCL_DET_IS_AVAILABLE == STD_ON */
            /* Do Nothing */
#endif /* MCL_DET_IS_AVAILABLE == STD_ON */
        }

#if (MCL_DET_IS_AVAILABLE == STD_ON)
    }
#endif /* MCL_DET_IS_AVAILABLE == STD_ON */
}


void Mcl_DeInit(void)
{
#if (MCL_DMA_IS_AVAILABLE == STD_ON)
    Dma_Ip_ReturnType RetStatus;
#endif /* #if (MCL_DMA_IS_AVAILABLE == STD_ON) */
#if (MCL_LCU_IS_AVAILABLE == STD_ON)
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    Lcu_Ip_ReturnType LcuRetStatus;
#endif /* MCL_DET_IS_AVAILABLE == STD_ON */
#endif /* #if (MCL_LCU_IS_AVAILABLE == STD_ON) */

    if(NULL_PTR != Mcl_pConfig)
    {
#if (MCL_DMA_IS_AVAILABLE == STD_ON)
        if(NULL_PTR != Mcl_pConfig->pxDmaInitType)
        {
            RetStatus = Dma_Ip_Deinit();
            Mcl_DmaReturnCheck(0U, MCL_DET_DEINIT, RetStatus);
        }
#endif /* #if (MCL_DMA_IS_AVAILABLE == STD_ON) */

#if (MCL_LCU_IS_AVAILABLE == STD_ON)
        if(NULL_PTR != Mcl_pConfig->pxLcuInitType)
        {
#if (MCL_DET_IS_AVAILABLE == STD_ON)
            LcuRetStatus = Mcl_Ipw_Lcu_Deinit();
            if (LCU_IP_STATUS_SUCCESS != LcuRetStatus)
                {
                    (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, (uint8)0U, MCL_DET_DEINIT, MCL_E_PARAM_CONFIG);
                }
#else /* MCL_DET_IS_AVAILABLE */
            (void)Mcl_Ipw_Lcu_Deinit();
#endif /* MCL_DET_IS_AVAILABLE */
        }
#endif /* #if (MCL_LCU_IS_AVAILABLE == STD_ON) */

#if(MCL_EMIOS_IS_AVAILABLE == STD_ON)
        if(NULL_PTR != Mcl_pConfig->pEmiosInitType)
        {
            Mcl_Emios_Deinit();
        }
#endif /* MCL_EMIOS_IS_AVAILABLE */

#if(MCL_FLEXIO_IS_AVAILABLE == STD_ON)
        if(NULL_PTR != Mcl_pConfig->pFlexioInitType)
        {
            Flexio_Mcl_Ip_DeinitDevice(Mcl_pConfig->pFlexioInitType->instance);
        }
#endif /* MCL_FLEXIO_IS_AVAILABLE */

        Mcl_pConfig = NULL_PTR;
    }
    else
    {
#if (MCL_DET_IS_AVAILABLE == STD_ON)
        (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, (uint8)0U, MCL_DET_DEINIT, MCL_E_UNINIT);
#else /* MCL_DET_IS_AVAILABLE == STD_ON */
        /* Do Nothing */
#endif /* MCL_DET_IS_AVAILABLE == STD_ON */
    }
}


#if (MCL_DMA_IS_AVAILABLE == STD_ON)
void Mcl_SetDmaInstanceCommand(const uint32 Instance, const Mcl_DmaInstanceCmdType Command)
{
    Dma_Ip_ReturnType RetStatus;
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    if(DMA_IP_NOF_CFG_LOGIC_INSTANCES < Instance)
    {
        (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, (uint8)Instance, MCL_DET_DMA_INSTANCE_COMMAND, MCL_E_INVALID_INSTANCE);
    }
    else
    {
        if(MCL_DMA_INST_RESUME < Command)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, (uint8)Instance, MCL_DET_DMA_INSTANCE_COMMAND, MCL_E_INVALID_COMMAND);
        }
        else
        {
#endif /* #if (MCL_DET_IS_AVAILABLE == STD_ON) */
            RetStatus = Dma_Ip_SetLogicInstanceCommand(Instance, (Dma_Ip_LogicInstanceCmdType)Command);
            Mcl_DmaReturnCheck((uint8)Instance, MCL_DET_DMA_INSTANCE_COMMAND, RetStatus);
#if (MCL_DET_IS_AVAILABLE == STD_ON)
        }
    }
#endif /* #if (MCL_DET_IS_AVAILABLE == STD_ON) */
}

void Mcl_GetDmaInstanceStatus(const uint32 Instance, Mcl_DmaInstanceStatusType * const Status)
{
    Dma_Ip_ReturnType RetStatus;
    Dma_Ip_LogicInstanceStatusType LocInstStatus = {0U, 0U, FALSE};
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    if(DMA_IP_NOF_CFG_LOGIC_INSTANCES < Instance)
    {
        (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, (uint8)Instance, MCL_DET_DMA_INSTANCE_STATUS, MCL_E_INVALID_INSTANCE);
    }
    else
    {
        if (NULL_PTR == Status)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, (uint8)Instance, MCL_DET_DMA_INSTANCE_STATUS, MCL_E_PARAM_POINTER);
        }
        else
        {
#endif /* #if (MCL_DET_IS_AVAILABLE == STD_ON) */
            RetStatus = Dma_Ip_GetLogicInstanceStatus(Instance, &LocInstStatus);
            Status->Errors   = LocInstStatus.Errors;
            Status->ActiveId = LocInstStatus.ActiveId;
            Status->Active   = LocInstStatus.Active;
            Mcl_DmaReturnCheck((uint8)Instance, MCL_DET_DMA_INSTANCE_STATUS, RetStatus);
#if (MCL_DET_IS_AVAILABLE == STD_ON)
        }
    }
#endif /* #if (MCL_DET_IS_AVAILABLE == STD_ON) */
}

void Mcl_SetDmaChannelCommand(const uint32 Channel, const Mcl_DmaChannelCmdType Command)
{
    Dma_Ip_ReturnType RetStatus;
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    if(DMA_IP_NOF_CFG_LOGIC_CHANNELS < Channel)
    {
        (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, (uint8)Channel, MCL_DET_DMA_CHANNEL_COMMAND, MCL_E_INVALID_CHANNEL);
    }
    else
    {
        if(MCL_DMA_CH_ACK_ERROR < Command)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, (uint8)Channel, MCL_DET_DMA_CHANNEL_COMMAND, MCL_E_INVALID_COMMAND);
        }
        else
        {
#endif /* #if (MCL_DET_IS_AVAILABLE == STD_ON) */
            RetStatus = Dma_Ip_SetLogicChannelCommand(Channel, (Dma_Ip_LogicChannelCmdType)Command);
            Mcl_DmaReturnCheck((uint8)Channel, MCL_DET_DMA_CHANNEL_COMMAND, RetStatus);
#if (MCL_DET_IS_AVAILABLE == STD_ON)
        }
    }
#endif /* #if (MCL_DET_IS_AVAILABLE == STD_ON) */
}

void Mcl_GetDmaChannelStatus(const uint32 Channel, Mcl_DmaChannelStatusType * const Status)
{
    Dma_Ip_ReturnType RetStatus;
    Dma_Ip_LogicChannelStatusType LocChStatus;
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    if(DMA_IP_NOF_CFG_LOGIC_CHANNELS < Channel)
    {
        (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, (uint8)Channel, MCL_DET_DMA_CHANNEL_STATUS, MCL_E_INVALID_CHANNEL);
    }
    else
    {
        if (NULL_PTR == Status)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, (uint8)Channel, MCL_DET_DMA_CHANNEL_STATUS, MCL_E_PARAM_POINTER);
        }
        else
        {
#endif /* #if (MCL_DET_IS_AVAILABLE == STD_ON) */
            RetStatus = Dma_Ip_GetLogicChannelStatus(Channel, &LocChStatus);
            Status->ChannelState = (Mcl_DmaChannelStateType)LocChStatus.ChStateValue;
            Status->Errors = LocChStatus.Errors;
            Status->Active = LocChStatus.Active;
            Status->Done   = LocChStatus.Done;
            Mcl_DmaReturnCheck((uint8)Channel, MCL_DET_DMA_CHANNEL_STATUS, RetStatus);
#if (MCL_DET_IS_AVAILABLE == STD_ON)
        }
    }
#endif /* #if (MCL_DET_IS_AVAILABLE == STD_ON) */
}

void Mcl_SetDmaChannelGlobalList(const uint32 Channel, const Mcl_DmaChannelGlobalListType List[], const uint32 ListDimension)
{
    Dma_Ip_ReturnType RetStatus;
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    uint8 Idx;
    boolean DetErrorCheck = FALSE;

    if(DMA_IP_NOF_CFG_LOGIC_CHANNELS < Channel)
    {
        (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, (uint8)Channel, MCL_DET_DMA_GLOBAL, MCL_E_INVALID_CHANNEL);
        DetErrorCheck = TRUE;
    }
    if(((uint32)MCL_DMA_CH_SET_DIS_PREEMPT_PRIORITY + 1U) < ListDimension)
    {
        (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, (uint8)Channel, MCL_DET_DMA_GLOBAL, MCL_E_INVALID_PARAMETER);
        DetErrorCheck = TRUE;
    }
    for(Idx = 0; Idx < ListDimension; Idx++)
    {
        if(MCL_DMA_CH_SET_DIS_PREEMPT_PRIORITY < List[Idx].Param)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, (uint8)Channel, MCL_DET_DMA_GLOBAL, MCL_E_INVALID_PARAMETER);
            DetErrorCheck = TRUE;
            break;
        }
    }
    if(FALSE == DetErrorCheck)
    {
#endif /* #if (MCL_DET_IS_AVAILABLE == STD_ON) */
        RetStatus = Dma_Ip_SetLogicChannelGlobalList(Channel, (const Dma_Ip_LogicChannelGlobalListType*)List, ListDimension);
        Mcl_DmaReturnCheck((uint8)Channel, MCL_DET_DMA_GLOBAL, RetStatus);
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    }
#endif /* #if (MCL_DET_IS_AVAILABLE == STD_ON) */
}

void Mcl_SetDmaChannelTransferList(const uint32 Channel, const Mcl_DmaChannelTransferListType List[], const uint32 ListDimension)
{
    Dma_Ip_ReturnType RetStatus;
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    uint8 Idx;
    boolean DetErrorCheck = FALSE;

    if(DMA_IP_NOF_CFG_LOGIC_CHANNELS < Channel)
    {
        (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, (uint8)Channel, MCL_DET_DMA_TRANSFER, MCL_E_INVALID_CHANNEL);
        DetErrorCheck = TRUE;
    }
    if(((uint32)MCL_DMA_CH_SET_CONTROL_BANDWIDTH + 1U) < ListDimension)
    {
        (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, (uint8)Channel, MCL_DET_DMA_TRANSFER, MCL_E_INVALID_PARAMETER);
        DetErrorCheck = TRUE;
    }
    for(Idx = 0; Idx < ListDimension; Idx++)
    {
        if(MCL_DMA_CH_SET_CONTROL_BANDWIDTH < List[Idx].Param)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, (uint8)Channel, MCL_DET_DMA_TRANSFER, MCL_E_INVALID_PARAMETER);
            DetErrorCheck = TRUE;
            break;
        }
    }
    if(FALSE == DetErrorCheck)
    {
#endif /* #if (MCL_DET_IS_AVAILABLE == STD_ON) */
        RetStatus = Dma_Ip_SetLogicChannelTransferList(Channel, (const Dma_Ip_LogicChannelTransferListType*)List, ListDimension);
        Mcl_DmaReturnCheck((uint8)Channel, MCL_DET_DMA_TRANSFER, RetStatus);
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    }
#endif /* #if (MCL_DET_IS_AVAILABLE == STD_ON) */
}

void Mcl_SetDmaChannelScatterGatherList(const uint32 Channel, const uint32 Element, const Mcl_DmaChannelScatterGatherListType List[], const uint32 ListDimension)
{
    Dma_Ip_ReturnType RetStatus;
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    uint8 Idx;
    boolean DetErrorCheck = FALSE;

    if(DMA_IP_NOF_CFG_LOGIC_CHANNELS < Channel)
    {
        (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, (uint8)Channel, MCL_DET_DMA_SCATTER_GATHER_LIST, MCL_E_INVALID_CHANNEL);
        DetErrorCheck = TRUE;
    }
    if(((uint32)MCL_DMA_CH_SET_CONTROL_BANDWIDTH + 1U) < ListDimension)
    {
        (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, (uint8)Channel, MCL_DET_DMA_SCATTER_GATHER_LIST, MCL_E_INVALID_PARAMETER);
        DetErrorCheck = TRUE;
    }
    for(Idx = 0; Idx < ListDimension; Idx++)
    {
        if(MCL_DMA_CH_SET_CONTROL_BANDWIDTH < List[Idx].Param)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, (uint8)Channel, MCL_DET_DMA_SCATTER_GATHER_LIST, MCL_E_INVALID_PARAMETER);
            DetErrorCheck = TRUE;
            break;
        }
    }
    if(FALSE == DetErrorCheck)
    {
#endif /* #if (MCL_DET_IS_AVAILABLE == STD_ON) */
        RetStatus = Dma_Ip_SetLogicChannelScatterGatherList(Channel, Element, (const Dma_Ip_LogicChannelScatterGatherListType*)List, ListDimension);
        Mcl_DmaReturnCheck((uint8)Channel, MCL_DET_DMA_SCATTER_GATHER_LIST, RetStatus);
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    }
#endif /* #if (MCL_DET_IS_AVAILABLE == STD_ON) */
}

void Mcl_GetDmaChannelParam(const uint32 Channel, const Mcl_DmaChannelInfoParamType Param, uint32 * const Value)
{
    Dma_Ip_ReturnType RetStatus;
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    if(DMA_IP_NOF_CFG_LOGIC_CHANNELS < Channel)
    {
        (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, (uint8)Channel, MCL_DET_DMA_INFORMATION, MCL_E_INVALID_CHANNEL);
    }
    else
    {
#if (MCL_DMA_CRC_IS_AVAILABLE == STD_ON)
        if(MCL_DMA_CH_GET_FINAL_CRC < Param)
#else
        if(MCL_DMA_CH_GET_HALF_MAJOR_INTERRUPT < Param)
#endif
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, (uint8)Channel, MCL_DET_DMA_INFORMATION, MCL_E_INVALID_PARAMETER);
        }
        else
        {
#endif /* #if (MCL_DET_IS_AVAILABLE == STD_ON) */
            RetStatus = Dma_Ip_GetLogicChannelParam(Channel, (Dma_Ip_LogicChannelInfoParamType)Param, Value);
            Mcl_DmaReturnCheck((uint8)Channel, MCL_DET_DMA_INFORMATION, RetStatus);
#if (MCL_DET_IS_AVAILABLE == STD_ON)
        }
    }
#endif /* #if (MCL_DET_IS_AVAILABLE == STD_ON) */
}

void Mcl_SetDmaChannelScatterGatherConfig(const uint32 Channel, const uint32 Element)
{
    Dma_Ip_ReturnType RetStatus;
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    if(DMA_IP_NOF_CFG_LOGIC_CHANNELS < Channel)
    {
        (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, (uint8)Channel, MCL_DET_DMA_SCATTER_GATHER_CONFIG, MCL_E_INVALID_CHANNEL);
    }
    else
    {
#endif /* #if (MCL_DET_IS_AVAILABLE == STD_ON) */
        RetStatus = Dma_Ip_SetLogicChannelScatterGatherConfig(Channel, Element);
        Mcl_DmaReturnCheck((uint8)Channel, MCL_DET_DMA_SCATTER_GATHER_CONFIG, RetStatus);
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    }
#endif /* #if (MCL_DET_IS_AVAILABLE == STD_ON) */
}

#if (MCL_DMA_CRC_IS_AVAILABLE == STD_ON)
void Mcl_SetDmaChannelCrcList(const uint32 Channel, const Mcl_DmaChannelCrcListType List[], const uint32 ListDimension)
{
    Dma_Ip_ReturnType RetStatus;
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    if(DMA_IP_NOF_CFG_LOGIC_CHANNELS < Channel)
    {
        (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, Channel, MCL_DET_DMA_CRC, MCL_E_INVALID_CHANNEL);
    }
    else
    {
#endif /* #if (MCL_DET_IS_AVAILABLE == STD_ON) */
        RetStatus = Dma_Ip_SetLogicChannelCrcList(Channel, (Dma_Ip_LogicChannelCrcListType*)List, ListDimension);
        Mcl_DmaReturnCheck((uint8)Channel, MCL_DET_DMA_CRC, RetStatus);
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    }
#endif /* #if (MCL_DET_IS_AVAILABLE == STD_ON) */
}
#endif /* #if (MCL_DMA_CRC_IS_AVAILABLE == STD_ON) */

#endif /* #if (MCL_DMA_IS_AVAILABLE == STD_ON) */


#if (MCL_CACHE_IS_AVAILABLE == STD_ON)
void Mcl_CacheEnable(Mcl_CacheType CacheType)
{
#if (MCL_DEM_IS_AVAILABLE == STD_ON)
    Std_ReturnType Status = E_OK;
#endif /* #if (MCL_DEM_IS_AVAILABLE == STD_ON) */
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    if(MCL_CACHE_DATA < CacheType)
    {
        (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, (uint8)CacheType, MCL_DET_CACHE_ENABLE, MCL_E_INVALID_INSTANCE);
    }
    else
    {
#endif /* #if (MCL_DET_IS_AVAILABLE == STD_ON) */
#if (MCL_DEM_IS_AVAILABLE == STD_ON)
        Status = Cache_Ip_Enable((Cache_Ip_Type)CacheType);
        Mcl_Dem_ReportErrorStatus(Status, Mcl_Dem_Config.Mcl_E_TimeoutFailureCfg.state, Mcl_Dem_Config.Mcl_E_TimeoutFailureCfg.id);
#else
        (void)Cache_Ip_Enable((Cache_Ip_Type)CacheType);
#endif /* #if (MCL_DEM_IS_AVAILABLE == STD_ON) */
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    }
#endif /* #if (MCL_DET_IS_AVAILABLE == STD_ON) */
}

void Mcl_CacheDisable(Mcl_CacheType CacheType)
{
#if (MCL_DEM_IS_AVAILABLE == STD_ON)
    Std_ReturnType Status = E_OK;
#endif /* #if (MCL_DEM_IS_AVAILABLE == STD_ON) */
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    if(MCL_CACHE_DATA < CacheType)
    {
        (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, (uint8)CacheType, MCL_DET_CACHE_DISABLE, MCL_E_INVALID_INSTANCE);
    }
    else
    {
#endif /* #if (MCL_DET_IS_AVAILABLE == STD_ON) */
#if (MCL_DEM_IS_AVAILABLE == STD_ON)
        Status = Cache_Ip_Disable((Cache_Ip_Type)CacheType);
        Mcl_Dem_ReportErrorStatus(Status, Mcl_Dem_Config.Mcl_E_TimeoutFailureCfg.state, Mcl_Dem_Config.Mcl_E_TimeoutFailureCfg.id);
#else
        (void)Cache_Ip_Disable((Cache_Ip_Type)CacheType);
#endif /* #if (MCL_DEM_IS_AVAILABLE == STD_ON) */
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    }
#endif /* #if (MCL_DET_IS_AVAILABLE == STD_ON) */
}

void Mcl_CacheInvalidate(Mcl_CacheType CacheType)
{
#if (MCL_DEM_IS_AVAILABLE == STD_ON)
    Std_ReturnType Status = E_OK;
#endif /* #if (MCL_DEM_IS_AVAILABLE == STD_ON) */
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    if(MCL_CACHE_DATA < CacheType)
    {
        (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, (uint8)CacheType, MCL_DET_CACHE_INVALIDATE, MCL_E_INVALID_INSTANCE);
    }
    else
    {
#endif /* #if (MCL_DET_IS_AVAILABLE == STD_ON) */
#if (MCL_DEM_IS_AVAILABLE == STD_ON)
        Status = Cache_Ip_Invalidate((Cache_Ip_Type)CacheType);
        Mcl_Dem_ReportErrorStatus(Status, Mcl_Dem_Config.Mcl_E_TimeoutFailureCfg.state, Mcl_Dem_Config.Mcl_E_TimeoutFailureCfg.id);
#else
        (void)Cache_Ip_Invalidate((Cache_Ip_Type)CacheType);
#endif /* #if (MCL_DEM_IS_AVAILABLE == STD_ON) */
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    }
#endif /* #if (MCL_DET_IS_AVAILABLE == STD_ON) */
}

void Mcl_CacheClean(Mcl_CacheType CacheType, boolean EnInvalidate)
{
#if (MCL_DEM_IS_AVAILABLE == STD_ON)
    Std_ReturnType Status = E_OK;
#endif /* #if (MCL_DEM_IS_AVAILABLE == STD_ON) */
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    if(MCL_CACHE_DATA < CacheType)
    {
        (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, (uint8)CacheType, MCL_DET_CACHE_CLEAN, MCL_E_INVALID_INSTANCE);
    }
    else
    {
#endif /* #if (MCL_DET_IS_AVAILABLE == STD_ON) */
#if (MCL_DEM_IS_AVAILABLE == STD_ON)
        Status = Cache_Ip_Clean((Cache_Ip_Type)CacheType, EnInvalidate);
        Mcl_Dem_ReportErrorStatus(Status, Mcl_Dem_Config.Mcl_E_TimeoutFailureCfg.state, Mcl_Dem_Config.Mcl_E_TimeoutFailureCfg.id);
#else
        (void)Cache_Ip_Clean((Cache_Ip_Type)CacheType, EnInvalidate);
#endif /* #if (MCL_DEM_IS_AVAILABLE == STD_ON) */
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    }
#endif /* #if (MCL_DET_IS_AVAILABLE == STD_ON) */
}

void Mcl_CacheInvalidateByAddr(Mcl_CacheType CacheType, uint32 Addr, uint32 Length)
{
#if (MCL_DEM_IS_AVAILABLE == STD_ON)
    Std_ReturnType Status = E_OK;
#endif /* #if (MCL_DEM_IS_AVAILABLE == STD_ON) */
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    if(MCL_CACHE_DATA < CacheType)
    {
        (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, (uint8)CacheType, MCL_DET_CACHE_INVALIDATE_BY_ADDRESS, MCL_E_INVALID_INSTANCE);
    }
    else
    {
#endif /* #if (MCL_DET_IS_AVAILABLE == STD_ON) */
#if (MCL_DEM_IS_AVAILABLE == STD_ON)
        Status = Cache_Ip_InvalidateByAddr((Cache_Ip_Type)CacheType, Addr, Length);
        Mcl_Dem_ReportErrorStatus(Status, Mcl_Dem_Config.Mcl_E_TimeoutFailureCfg.state, Mcl_Dem_Config.Mcl_E_TimeoutFailureCfg.id);
#else
        (void)Cache_Ip_InvalidateByAddr((Cache_Ip_Type)CacheType, Addr, Length);
#endif /* #if (MCL_DEM_IS_AVAILABLE == STD_ON) */
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    }
#endif /* #if (MCL_DET_IS_AVAILABLE == STD_ON) */
}

void Mcl_CacheCleanByAddr(Mcl_CacheType CacheType, boolean EnInvalidate, uint32 Addr, uint32 Length)
{
#if (MCL_DEM_IS_AVAILABLE == STD_ON)
    Std_ReturnType Status = E_OK;
#endif /* #if (MCL_DEM_IS_AVAILABLE == STD_ON) */
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    if(MCL_CACHE_DATA < CacheType)
    {
        (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, (uint8)CacheType, MCL_DET_CACHE_CLEAN_BY_ADDRESS, MCL_E_INVALID_INSTANCE);
    }
    else
    {
#endif /* #if (MCL_DET_IS_AVAILABLE == STD_ON) */
#if (MCL_DEM_IS_AVAILABLE == STD_ON)
        Status = Cache_Ip_CleanByAddr((Cache_Ip_Type)CacheType, EnInvalidate, Addr, Length);
        Mcl_Dem_ReportErrorStatus(Status, Mcl_Dem_Config.Mcl_E_TimeoutFailureCfg.state, Mcl_Dem_Config.Mcl_E_TimeoutFailureCfg.id);
#else
        (void)Cache_Ip_CleanByAddr((Cache_Ip_Type)CacheType, EnInvalidate, Addr, Length);
#endif /* #if (MCL_DEM_IS_AVAILABLE == STD_ON) */
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    }
#endif /* #if (MCL_DET_IS_AVAILABLE == STD_ON) */
}

#endif /* #if (MCL_CACHE_IS_AVAILABLE == STD_ON) */

#if (MCL_TRGMUX_IS_AVAILABLE == STD_ON)
void Mcl_SetTrgMuxInput(const uint32 Trigger, const uint32 Input)
{
    /* Set Input */
    (void)Trgmux_Ip_SetInput(Trigger, Input);
}

void Mcl_SetTrgMuxLock(const uint32 Trigger)
{
    /* Set Lock */
    (void)Trgmux_Ip_SetLock(Trigger);
}
#endif /* MCL_TRGMUX_IS_AVAILABLE */

#if (MCL_EMIOS_IS_AVAILABLE == STD_ON)

static inline void Mcl_Emios_Init(const Mcl_EmiosInitConfigType *const pConfig)
{
    uint8 currentInstance;

    for (currentInstance = 0; currentInstance < pConfig->MclEmiosNumInstances; currentInstance++)
    {
        MclEmiosLogicToHwInstance[currentInstance] = (*pConfig->pMclEmiosInstanceConfig)[currentInstance].instance;
        Emios_Mcl_Ip_Init((*pConfig->pMclEmiosInstanceConfig)[currentInstance].instance,
                          (*pConfig->pMclEmiosInstanceConfig)[currentInstance].emiosInstanceConfig);
    }
}

static inline void Mcl_Emios_Deinit(void)
{
    uint8 currentInstance;

    for (currentInstance = 0; currentInstance < eMIOS_INSTANCE_COUNT; currentInstance++)
    {
        if (255U != MclEmiosLogicToHwInstance[currentInstance])
        {
            Emios_Mcl_Ip_Deinit(MclEmiosLogicToHwInstance[currentInstance]);
        }
    }
}

#if (MCL_DET_IS_AVAILABLE == STD_ON)
static inline Std_ReturnType Mcl_Emios_ValidateLogicChannel(uint16 logicChannel)
{
    uint8 hwChannel  = (uint8)(255U & logicChannel);
    uint8 hwInstance = (uint8)(logicChannel >> 8);

    if (TRUE == Emios_Mcl_Ip_ValidateChannel(hwInstance, hwChannel))
    {
        return (Std_ReturnType)E_OK;
    }
    else
    {
        return (Std_ReturnType)E_NOT_OK;
    }
}
#endif

/** @implements Mcl_Emios_SetReloadInterval_Activity */
void Mcl_Emios_SetReloadInterval(uint16 logicChannel, uint8 interval)
{
    uint8 hwChannel  = (uint8)(255U & logicChannel);
    uint8 hwInstance = (uint8)(logicChannel >> 8);

#if (MCL_DET_IS_AVAILABLE == STD_ON)
    Std_ReturnType valid = Mcl_Emios_ValidateLogicChannel(logicChannel);

    if (E_NOT_OK == valid)
    {
        (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, logicChannel, MCL_DET_EMIOS_E_INVALID_CHANNEL, MCL_E_INVALID_CHANNEL);
    }
    else
    {
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
        if (TRUE == Emios_Ip_ValidateMultiCoreInit(hwInstance))
        {
#endif
            (void)Emios_Mcl_Ip_SetReloadInterval(hwInstance, hwChannel, interval);
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
        }
        else
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, 0U, MCL_DET_EMIOS_E_INVALID_CHANNEL, MCL_E_PARAM_CONFIG);
        }
#endif
    }
#else /* MCL_DET_IS_AVAILABLE == STDOFF */
    (void)Emios_Mcl_Ip_SetReloadInterval(hwInstance, hwChannel, interval);
#endif /* MCL_DET_IS_AVAILABLE */
}

/** @implements Mcl_Emios_SetCounterBusPeriod_Activity */
void Mcl_Emios_SetCounterBusPeriod(uint16 logicChannel, uint16 period, boolean syncUpdate)
{
    uint8  hwChannel   = (uint8)(255U & logicChannel);
    uint8  hwInstance  = (uint8)(logicChannel >> 8U);
    uint32 channelMask = (uint32)(1U << (uint32)hwChannel);

#if (MCL_DET_IS_AVAILABLE == STD_ON)
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
    if (Emios_Ip_ValidateMultiCoreInit(hwInstance))
    {
#endif /* MCL_MULTICORE_IS_AVAILABLE == STD_ON */
        Std_ReturnType validSet;
        Std_ReturnType valid = Mcl_Emios_ValidateLogicChannel(logicChannel);

        if (E_NOT_OK == valid)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, logicChannel, MCL_DET_EMIOS_E_INVALID_CHANNEL, MCL_E_INVALID_CHANNEL);
        }
        else
        {
            if (syncUpdate == TRUE)
            {
                Emios_Mcl_Ip_ComparatorTransferDisable(hwInstance, channelMask);
            }
            else
            {
                /* Do nothing. */
            }
            validSet = Emios_Mcl_Ip_SetCounterBusPeriod(hwInstance, hwChannel, period);
            if (EMIOS_IP_COMMON_STATUS_FAIL == validSet)
            {
                (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, logicChannel, MCL_DET_EMIOS_E_INVALID_SET, MCL_E_INVALID_PARAMETER);
            }
        }
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
    }
    else
    {
        (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, 0U, MCL_DET_EMIOS_E_INVALID_CHANNEL, MCL_E_PARAM_CONFIG);
    }
#endif /* MCL_MULTICORE_IS_AVAILABLE == STD_ON */
#else
    if (syncUpdate == TRUE)
    {
        Emios_Mcl_Ip_ComparatorTransferDisable(hwInstance, channelMask);
    }
    else
    {
        /* Do nothing. */
    }
    (void)Emios_Mcl_Ip_SetCounterBusPeriod(hwInstance, hwChannel, period);
#endif /* MCL_DET_IS_AVAILABLE */

}

#endif /* MCL_EMIOS_IS_AVAILABLE == STD_ON */

#if (MCL_COMMON_TIMEBASE_IS_AVAILABLE == STD_ON)
/** @implements Mcl_SelectCommonTimebase_Activity */
void Mcl_SelectCommonTimebase(uint8 instance, uint16 elementSyncList)
{
    Ftm_Mcl_Ip_SelectCommonTimebase(instance, ((uint32)(elementSyncList)));
}
#endif /* MCL_COMMON_TIMEBASE_IS_AVAILABLE */


#if (MCL_LCU_IS_AVAILABLE == STD_ON)

void Mcl_SetLcuWriteProtect(const uint8 LogicInstance)
{
    #if (MCL_DET_IS_AVAILABLE == STD_ON)
        Lcu_Ip_ReturnType ReturnValue = Mcl_Ipw_GetLcuWriteProtect(LogicInstance);
        if (LCU_IP_STATUS_PROTECTED == ReturnValue)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, LogicInstance, MCL_DET_LCU_SET_WRITE_PROTECT, MCL_E_PROTECTED);
        }
        else
        {
            (void)Mcl_Ipw_SetLcuWriteProtect(LogicInstance);
        }
    #else
        (void)Mcl_Ipw_SetLcuWriteProtect(LogicInstance);
    #endif /* MCL_DET_IS_AVAILABLE */
}

#if (MCL_LCU_SYNC_FUNC_IS_AVAILABLE == STD_ON)
void Mcl_SetLcuSyncInputSwOverrideEnable(const Mcl_LcuSyncInputValueType List[], const uint8 Dimension)
{
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    uint8 Index;
    boolean DetErrorCheck = FALSE;
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
    Lcu_Ip_ReturnType LocStatus = LCU_IP_STATUS_SUCCESS;
#endif /* MCL_MULTICORE_IS_AVAILABLE */

    for(Index = 0; Index < Dimension; Index++)
    {
        if(List[Index].LogicInputId >= LCU_IP_NOF_CFG_LOGIC_INPUTS)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, List[Index].LogicInputId, MCL_DET_LCU_SYNC_SET_INPUT_SW_OVERRIDE_EN, MCL_E_INVALID_PARAMETER);
            DetErrorCheck = TRUE;
            break;
        }
    }

    if (FALSE == DetErrorCheck)
    {
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
        LocStatus = Mcl_Ipw_SetLcuSyncInputSwOverrideEnable((Lcu_Ip_SyncInputValueType *)List, Dimension);
        if (LCU_IP_STATUS_SUCCESS != LocStatus)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, 0U, MCL_DET_LCU_SYNC_SET_INPUT_SW_OVERRIDE_EN, MCL_E_PARAM_CONFIG);
        }
        else
        {
            /* Do Nothing */
        }
#else /* MCL_MULTICORE_IS_AVAILABLE */
        (void)Mcl_Ipw_SetLcuSyncInputSwOverrideEnable((Lcu_Ip_SyncInputValueType *)List, Dimension);
#endif /* MCL_MULTICORE_IS_AVAILABLE */
    }
#else /* MCL_DET_IS_AVAILABLE */
    (void)Mcl_Ipw_SetLcuSyncInputSwOverrideEnable((Lcu_Ip_SyncInputValueType *)List, Dimension);
#endif /* MCL_DET_IS_AVAILABLE */
}

void Mcl_SetLcuSyncInputSwOverrideValue(const Mcl_LcuSyncInputValueType List[], const uint8 Dimension)
{
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    uint8 Index;
    boolean DetErrorCheck = FALSE;
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
    Lcu_Ip_ReturnType LocStatus = LCU_IP_STATUS_SUCCESS;
#endif /* MCL_MULTICORE_IS_AVAILABLE */

    for(Index = 0; Index < Dimension; Index++)
    {
        if(List[Index].LogicInputId >= LCU_IP_NOF_CFG_LOGIC_INPUTS)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, List[Index].LogicInputId, MCL_DET_LCU_SYNC_SET_INPUT_SW_OVERRIDE_VALUE, MCL_E_INVALID_PARAMETER);
            DetErrorCheck = TRUE;
            break;
        }
    }

    if (FALSE == DetErrorCheck)
    {
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
        LocStatus = Mcl_Ipw_SetLcuSyncInputSwOverrideValue((Lcu_Ip_SyncInputValueType *)List, Dimension);
        if (LCU_IP_STATUS_SUCCESS != LocStatus)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, 0U, MCL_DET_LCU_SYNC_SET_INPUT_SW_OVERRIDE_VALUE, MCL_E_PARAM_CONFIG);
        }
        else
        {
            /* Do Nothing */
        }
#else /* MCL_MULTICORE_IS_AVAILABLE */
        (void)Mcl_Ipw_SetLcuSyncInputSwOverrideValue((Lcu_Ip_SyncInputValueType *)List, Dimension);
#endif /* MCL_MULTICORE_IS_AVAILABLE */
    }
#else /* MCL_DET_IS_AVAILABLE */
    (void)Mcl_Ipw_SetLcuSyncInputSwOverrideValue((Lcu_Ip_SyncInputValueType *)List, Dimension);
#endif /* MCL_DET_IS_AVAILABLE */
}

void Mcl_SetLcuSyncInputMuxSelect(const Mcl_LcuSyncInputValueType List[], const uint8 Dimension)
{
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    uint8 Index;
    boolean DetErrorCheck = FALSE;

#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
    Lcu_Ip_ReturnType LocStatus = LCU_IP_STATUS_SUCCESS;
#endif /* MCL_MULTICORE_IS_AVAILABLE */

    for(Index = 0; Index < Dimension; Index++)
    {
        if(List[Index].LogicInputId >= LCU_IP_NOF_CFG_LOGIC_INPUTS)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, List[Index].LogicInputId, MCL_DET_LCU_SYNC_SET_INPUT_MUX_SEL, MCL_E_INVALID_PARAMETER);
            DetErrorCheck = TRUE;
            break;
        }
    }

    if (FALSE == DetErrorCheck)
    {
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
        LocStatus = Mcl_Ipw_SetLcuSyncInputMuxSelect((Lcu_Ip_SyncInputValueType *)List, Dimension);
        if (LCU_IP_STATUS_SUCCESS != LocStatus)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, 0U, MCL_DET_LCU_SYNC_SET_INPUT_MUX_SEL, MCL_E_PARAM_CONFIG);
        }
        else
        {
            /* Do Nothing */
        }
#else /* MCL_MULTICORE_IS_AVAILABLE */
        (void)Mcl_Ipw_SetLcuSyncInputMuxSelect((Lcu_Ip_SyncInputValueType *)List, Dimension);
#endif /* MCL_MULTICORE_IS_AVAILABLE */
    }

#else /* MCL_DET_IS_AVAILABLE */
    (void)Mcl_Ipw_SetLcuSyncInputMuxSelect((Lcu_Ip_SyncInputValueType *)List, Dimension);
#endif /* MCL_DET_IS_AVAILABLE */
}

void Mcl_SetLcuSyncInputSwSyncMode(const Mcl_LcuSyncInputValueType List[], const uint8 Dimension)
{
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    uint8 Index;
    boolean DetErrorCheck = FALSE;
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
    Lcu_Ip_ReturnType LocStatus = LCU_IP_STATUS_SUCCESS;
#endif /* MCL_MULTICORE_IS_AVAILABLE */

    for(Index = 0; Index < Dimension; Index++)
    {
        if(List[Index].LogicInputId >= LCU_IP_NOF_CFG_LOGIC_INPUTS)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, List[Index].LogicInputId, MCL_DET_LCU_SYNC_SET_INPUT_SW_SYNC_MODE, MCL_E_INVALID_PARAMETER);
            DetErrorCheck = TRUE;
            break;
        }
    }

    if (FALSE == DetErrorCheck)
    {
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
        LocStatus = Mcl_Ipw_SetLcuSyncInputSwSyncMode((Lcu_Ip_SyncInputValueType *)List, Dimension);
        if (LCU_IP_STATUS_SUCCESS != LocStatus)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, 0U, MCL_DET_LCU_SYNC_SET_INPUT_SW_SYNC_MODE, MCL_E_PARAM_CONFIG);
        }
        else
        {
            /* Do Nothing */
        }
#else /* MCL_MULTICORE_IS_AVAILABLE */
        (void)Mcl_Ipw_SetLcuSyncInputSwSyncMode((Lcu_Ip_SyncInputValueType *)List, Dimension);
#endif /* MCL_MULTICORE_IS_AVAILABLE */
    }

#else
    (void)Mcl_Ipw_SetLcuSyncInputSwSyncMode((Lcu_Ip_SyncInputValueType *)List, Dimension);
#endif /* MCL_DET_IS_AVAILABLE */
}

void Mcl_SetLcuSyncOutputDebugMode(const Mcl_LcuSyncOutputValueType List[], const uint8 Dimension)
{
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    uint8 Index;
    boolean DetErrorCheck = FALSE;
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
    Lcu_Ip_ReturnType LocStatus = LCU_IP_STATUS_SUCCESS;
#endif /* MCL_MULTICORE_IS_AVAILABLE */

    for(Index = 0; Index < Dimension; Index++)
    {
        if(List[Index].LogicOutputId >= LCU_IP_NOF_CFG_LOGIC_OUTPUTS)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, List[Index].LogicOutputId, MCL_DET_LCU_SYNC_SET_OUTPUT_DEBUG_MODE_EN, MCL_E_INVALID_PARAMETER);
            DetErrorCheck = TRUE;
            break;
        }
    }
    if (FALSE == DetErrorCheck)
    {
    #if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
        LocStatus = Mcl_Ipw_SetLcuSyncOutputDebugMode((Lcu_Ip_SyncOutputValueType *)List, Dimension);
        if (LCU_IP_STATUS_SUCCESS != LocStatus)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, 0U, MCL_DET_LCU_SYNC_SET_OUTPUT_DEBUG_MODE_EN, MCL_E_PARAM_CONFIG);
        }
        else
        {
            /* Do Nothing */
        }
#else /* MCL_MULTICORE_IS_AVAILABLE */
        (void)Mcl_Ipw_SetLcuSyncOutputDebugMode((Lcu_Ip_SyncOutputValueType *)List, Dimension);
#endif /* MCL_MULTICORE_IS_AVAILABLE */
    }
#else /* MCL_DET_IS_AVAILABLE */
    (void)Mcl_Ipw_SetLcuSyncOutputDebugMode((Lcu_Ip_SyncOutputValueType *)List, Dimension);
#endif /* MCL_DET_IS_AVAILABLE */
}

void Mcl_SetLcuSyncOutputEnable(const Mcl_LcuSyncOutputValueType List[], const uint8 Dimension)
{
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    uint8 Index;
    boolean DetErrorCheck = FALSE;
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
    Lcu_Ip_ReturnType LocStatus = LCU_IP_STATUS_SUCCESS;
#endif /* MCL_MULTICORE_IS_AVAILABLE */

    for(Index = 0; Index < Dimension; Index++)
    {
        if(List[Index].LogicOutputId >= LCU_IP_NOF_CFG_LOGIC_OUTPUTS)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, List[Index].LogicOutputId, MCL_DET_LCU_SYNC_SET_OUTPUT_ENABLE, MCL_E_INVALID_PARAMETER);
            DetErrorCheck = TRUE;
            break;
        }
    }
    if (FALSE == DetErrorCheck)
    {
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
        LocStatus = Mcl_Ipw_SetLcuSyncOutputEnable((Lcu_Ip_SyncOutputValueType *)List, Dimension);
        if (LCU_IP_STATUS_SUCCESS != LocStatus)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, 0U, MCL_DET_LCU_SYNC_SET_OUTPUT_ENABLE, MCL_E_PARAM_CONFIG);
        }
        else
        {
            /* Do Nothing */
        }
#else /* MCL_MULTICORE_IS_AVAILABLE */
        (void)Mcl_Ipw_SetLcuSyncOutputEnable((Lcu_Ip_SyncOutputValueType *)List, Dimension);
#endif /* MCL_MULTICORE_IS_AVAILABLE */
    }
#else /* MCL_DET_IS_AVAILABLE */
    (void)Mcl_Ipw_SetLcuSyncOutputEnable((Lcu_Ip_SyncOutputValueType *)List, Dimension);
#endif /* MCL_DET_IS_AVAILABLE */
}

void Mcl_SetLcuSyncOutputForceInputSensitivity(const Mcl_LcuSyncOutputValueType List[], const uint8 Dimension)
{
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    uint8 Index;
    boolean DetErrorCheck = FALSE;
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
    Lcu_Ip_ReturnType LocStatus = LCU_IP_STATUS_SUCCESS;
#endif /* MCL_MULTICORE_IS_AVAILABLE */

    for(Index = 0; Index < Dimension; Index++)
    {
        if(List[Index].LogicOutputId >= LCU_IP_NOF_CFG_LOGIC_OUTPUTS)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, List[Index].LogicOutputId, MCL_DET_LCU_SYNC_SET_OUTPUT_FORCE_SENSITIVITY, MCL_E_INVALID_PARAMETER);
            DetErrorCheck = TRUE;
            break;
        }
    }
    if (FALSE == DetErrorCheck)
    {
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
        LocStatus = Mcl_Ipw_SetLcuSyncOutputForceInputSensitivity((Lcu_Ip_SyncOutputValueType *)List, Dimension);
        if (LCU_IP_STATUS_SUCCESS != LocStatus)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, 0U, MCL_DET_LCU_SYNC_SET_OUTPUT_FORCE_SENSITIVITY, MCL_E_PARAM_CONFIG);
        }
        else
        {
            /* Do Nothing */
        }
#else /* MCL_MULTICORE_IS_AVAILABLE */
        (void)Mcl_Ipw_SetLcuSyncOutputForceInputSensitivity((Lcu_Ip_SyncOutputValueType *)List, Dimension);
#endif /* MCL_MULTICORE_IS_AVAILABLE */
    }

#else
    (void)Mcl_Ipw_SetLcuSyncOutputForceInputSensitivity((Lcu_Ip_SyncOutputValueType *)List, Dimension);
#endif /* MCL_DET_IS_AVAILABLE */
}

void Mcl_SetLcuSyncOutputForceClearingMode(const Mcl_LcuSyncOutputValueType List[], const uint8 Dimension)
{
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    uint8 Index;
    boolean DetErrorCheck = FALSE;
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
    Lcu_Ip_ReturnType LocStatus = LCU_IP_STATUS_SUCCESS;
#endif /* MCL_MULTICORE_IS_AVAILABLE */

    for(Index = 0; Index < Dimension; Index++)
    {
        if(List[Index].LogicOutputId >= LCU_IP_NOF_CFG_LOGIC_OUTPUTS)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, List[Index].LogicOutputId, MCL_DET_LCU_SYNC_SET_OUTPUT_FORCE_CLEAR_MODE, MCL_E_INVALID_PARAMETER);
            DetErrorCheck = TRUE;
            break;
        }
    }
    if (FALSE == DetErrorCheck)
    {
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
        LocStatus = Mcl_Ipw_SetLcuSyncOutputForceClearingMode((Lcu_Ip_SyncOutputValueType *)List, Dimension);
        if (LCU_IP_STATUS_SUCCESS != LocStatus)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, 0U, MCL_DET_LCU_SYNC_SET_OUTPUT_FORCE_CLEAR_MODE, MCL_E_PARAM_CONFIG);
        }
        else
        {
            /* Do Nothing */
        }
#else /* MCL_MULTICORE_IS_AVAILABLE */
        (void)Mcl_Ipw_SetLcuSyncOutputForceClearingMode((Lcu_Ip_SyncOutputValueType *)List, Dimension);
#endif /* MCL_MULTICORE_IS_AVAILABLE */
    }

#else /* MCL_DET_IS_AVAILABLE */
    (void)Mcl_Ipw_SetLcuSyncOutputForceClearingMode((Lcu_Ip_SyncOutputValueType *)List, Dimension);
#endif /* MCL_DET_IS_AVAILABLE */
}

void Mcl_SetLcuSyncOutputForceSyncSelect(const Mcl_LcuSyncOutputValueType List[], const uint8 Dimension)
{
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    uint8 Index;
    boolean DetErrorCheck = FALSE;
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
    Lcu_Ip_ReturnType LocStatus = LCU_IP_STATUS_SUCCESS;
#endif /* MCL_MULTICORE_IS_AVAILABLE */

    for(Index = 0; Index < Dimension; Index++)
    {
        if(List[Index].LogicOutputId >= LCU_IP_NOF_CFG_LOGIC_OUTPUTS)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, List[Index].LogicOutputId, MCL_DET_LCU_SYNC_SET_OUTPUT_FORCE_SYNC_SEL, MCL_E_INVALID_PARAMETER);
            DetErrorCheck = TRUE;
            break;
        }
    }
    if (FALSE == DetErrorCheck)
    {
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
        LocStatus = Mcl_Ipw_SetLcuSyncOutputForceSyncSelect((Lcu_Ip_SyncOutputValueType *)List, Dimension);
        if (LCU_IP_STATUS_SUCCESS != LocStatus)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, 0U, MCL_DET_LCU_SYNC_SET_OUTPUT_FORCE_SYNC_SEL, MCL_E_PARAM_CONFIG);
        }
        else
        {
            /* Do Nothing */
        }
#else /* MCL_MULTICORE_IS_AVAILABLE */
        (void)Mcl_Ipw_SetLcuSyncOutputForceSyncSelect((Lcu_Ip_SyncOutputValueType *)List, Dimension);
#endif /* MCL_MULTICORE_IS_AVAILABLE */
    }

#else
    (void)Mcl_Ipw_SetLcuSyncOutputForceSyncSelect((Lcu_Ip_SyncOutputValueType *)List, Dimension);
#endif /* MCL_DET_IS_AVAILABLE */
}

void Mcl_SetLcuSyncOutputPolarity(const Mcl_LcuSyncOutputValueType List[], const uint8 Dimension)
{
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    uint8 Index;
    boolean DetErrorCheck = FALSE;
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
    Lcu_Ip_ReturnType LocStatus = LCU_IP_STATUS_SUCCESS;
#endif /* MCL_MULTICORE_IS_AVAILABLE */

    for(Index = 0; Index < Dimension; Index++)
    {
        if(List[Index].LogicOutputId >= LCU_IP_NOF_CFG_LOGIC_OUTPUTS)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, List[Index].LogicOutputId, MCL_DET_LCU_SYNC_SET_OUTPUT_POLARITY, MCL_E_INVALID_PARAMETER);
            DetErrorCheck = TRUE;
            break;
        }
    }

    if (FALSE == DetErrorCheck)
    {
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
        LocStatus = Mcl_Ipw_SetLcuSyncOutputPolarity((Lcu_Ip_SyncOutputValueType *)List, Dimension);
        if (LCU_IP_STATUS_SUCCESS != LocStatus)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, 0U, MCL_DET_LCU_SYNC_SET_OUTPUT_POLARITY, MCL_E_PARAM_CONFIG);
        }
        else
        {
            /* Do Nothing */
        }
#else /* MCL_MULTICORE_IS_AVAILABLE */
        (void)Mcl_Ipw_SetLcuSyncOutputPolarity((Lcu_Ip_SyncOutputValueType *)List, Dimension);
#endif /* MCL_MULTICORE_IS_AVAILABLE */
    }

#else /* MCL_DET_IS_AVAILABLE */
    (void)Mcl_Ipw_SetLcuSyncOutputPolarity((Lcu_Ip_SyncOutputValueType *)List, Dimension);
#endif /* MCL_DET_IS_AVAILABLE */
}

void Mcl_SetLcuSyncOutputForceDma(const Mcl_LcuSyncOutputValueType List[], const uint8 Dimension)
{
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    uint8 Index;
    boolean DetErrorCheck = FALSE;
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
    Lcu_Ip_ReturnType LocStatus = LCU_IP_STATUS_SUCCESS;
#endif /* MCL_MULTICORE_IS_AVAILABLE */

    for(Index = 0; Index < Dimension; Index++)
    {
        if(List[Index].LogicOutputId >= LCU_IP_NOF_CFG_LOGIC_OUTPUTS)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, List[Index].LogicOutputId, MCL_DET_LCU_SYNC_SET_OUTPUT_FORCE_DMA, MCL_E_INVALID_PARAMETER);
            DetErrorCheck = TRUE;
            break;
        }
    }
    if (FALSE == DetErrorCheck)
    {
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
        LocStatus = Mcl_Ipw_SetLcuSyncOutputForceDma((Lcu_Ip_SyncOutputValueType *)List, Dimension);
        if (LCU_IP_STATUS_SUCCESS != LocStatus)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, 0U, MCL_DET_LCU_SYNC_SET_OUTPUT_FORCE_DMA, MCL_E_PARAM_CONFIG);
        }
        else
        {
            /* Do Nothing */
        }
#else /* MCL_MULTICORE_IS_AVAILABLE */
        (void)Mcl_Ipw_SetLcuSyncOutputForceDma((Lcu_Ip_SyncOutputValueType *)List, Dimension);
#endif /* MCL_MULTICORE_IS_AVAILABLE */
    }

#else /* MCL_DET_IS_AVAILABLE */
    (void)Mcl_Ipw_SetLcuSyncOutputForceDma((Lcu_Ip_SyncOutputValueType *)List, Dimension);
#endif /* MCL_DET_IS_AVAILABLE */
}

void Mcl_SetLcuSyncOutputForceInt(const Mcl_LcuSyncOutputValueType List[], const uint8 Dimension)
{
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    uint8 Index;
    boolean DetErrorCheck = FALSE;
    Lcu_Ip_ReturnType LocStatus = LCU_IP_STATUS_SUCCESS;

    for(Index = 0; Index < Dimension; Index++)
    {
        if(List[Index].LogicOutputId >= LCU_IP_NOF_CFG_LOGIC_OUTPUTS)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, List[Index].LogicOutputId, MCL_DET_LCU_SYNC_SET_OUTPUT_FORCE_INT, MCL_E_INVALID_PARAMETER);
            DetErrorCheck = TRUE;
            break;
        }
    }

    if (FALSE == DetErrorCheck)
    {
        LocStatus = Mcl_Ipw_SetLcuSyncOutputForceInt((Lcu_Ip_SyncOutputValueType *)List, Dimension);
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
        if (LCU_IP_STATUS_WRONG_CORE == LocStatus)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, 0U, MCL_DET_LCU_SYNC_SET_OUTPUT_FORCE_INT, MCL_E_PARAM_CONFIG);
        }
        else
        {
            /* Do Nothing */
        }
#else /* MCL_MULTICORE_IS_AVAILABLE */
        if (LCU_IP_STATUS_ERROR == LocStatus)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, 0U, MCL_DET_LCU_SYNC_SET_OUTPUT_FORCE_INT, MCL_E_INVALID_STATE);
        }
        else
        {
            /* Do Nothing */
        }
#endif /* MCL_MULTICORE_IS_AVAILABLE */
    }

#else /* MCL_DET_IS_AVAILABLE */
    (void)Mcl_Ipw_SetLcuSyncOutputForceInt((Lcu_Ip_SyncOutputValueType *)List, Dimension);
#endif /* MCL_DET_IS_AVAILABLE */
}
void Mcl_SetLcuSyncOutputLutDma(const Mcl_LcuSyncOutputValueType List[], const uint8 Dimension)
{
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    uint8 Index;
    boolean DetErrorCheck = FALSE;
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
    Lcu_Ip_ReturnType LocStatus = LCU_IP_STATUS_SUCCESS;
#endif /* MCL_MULTICORE_IS_AVAILABLE */

    for(Index = 0; Index < Dimension; Index++)
    {
        if(List[Index].LogicOutputId >= LCU_IP_NOF_CFG_LOGIC_OUTPUTS)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, List[Index].LogicOutputId, MCL_DET_LCU_SYNC_SET_OUTPUT_LUT_DMA, MCL_E_INVALID_PARAMETER);
            DetErrorCheck = TRUE;
            break;
        }
    }
    if (FALSE == DetErrorCheck)
    {
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
        LocStatus = Mcl_Ipw_SetLcuSyncOutputLutDma((Lcu_Ip_SyncOutputValueType *)List, Dimension);
        if (LCU_IP_STATUS_SUCCESS != LocStatus)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, 0U, MCL_DET_LCU_SYNC_SET_OUTPUT_LUT_DMA, MCL_E_PARAM_CONFIG);
        }
        else
        {
            /* Do Nothing */
        }
#else /* MCL_MULTICORE_IS_AVAILABLE */
        (void)Mcl_Ipw_SetLcuSyncOutputLutDma((Lcu_Ip_SyncOutputValueType *)List, Dimension);
#endif /* MCL_MULTICORE_IS_AVAILABLE */
    }

#else /* MCL_DET_IS_AVAILABLE */
    (void)Mcl_Ipw_SetLcuSyncOutputLutDma((Lcu_Ip_SyncOutputValueType *)List, Dimension);
#endif /* MCL_DET_IS_AVAILABLE */
}

void Mcl_SetLcuSyncOutputLutInt(const Mcl_LcuSyncOutputValueType List[], const uint8 Dimension)
{
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    uint8 Index;
    boolean DetErrorCheck = FALSE;
    Lcu_Ip_ReturnType LocStatus = LCU_IP_STATUS_SUCCESS;

    for(Index = 0; Index < Dimension; Index++)
    {
        if(List[Index].LogicOutputId >= LCU_IP_NOF_CFG_LOGIC_OUTPUTS)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, List[Index].LogicOutputId, MCL_DET_LCU_SYNC_SET_OUTPUT_LUT_INT, MCL_E_INVALID_PARAMETER);
            DetErrorCheck = TRUE;
            break;
        }
    }
    if (FALSE == DetErrorCheck)
    {
        LocStatus = Mcl_Ipw_SetLcuSyncOutputLutInt((Lcu_Ip_SyncOutputValueType *)List, Dimension);
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
        if (LCU_IP_STATUS_WRONG_CORE == LocStatus)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, 0U, MCL_DET_LCU_SYNC_SET_OUTPUT_LUT_INT, MCL_E_PARAM_CONFIG);
        }
        else
        {
            /* Do Nothing */
        }
#else /* MCL_MULTICORE_IS_AVAILABLE */
        if (LCU_IP_STATUS_ERROR == LocStatus)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, 0U, MCL_DET_LCU_SYNC_SET_OUTPUT_LUT_INT, MCL_E_INVALID_STATE);
        }
        else
        {
            /* Do Nothing */
        }
#endif /* MCL_MULTICORE_IS_AVAILABLE */
    }

#else /* MCL_DET_IS_AVAILABLE */
   (void)Mcl_Ipw_SetLcuSyncOutputLutInt((Lcu_Ip_SyncOutputValueType *)List, Dimension);
#endif /* MCL_DET_IS_AVAILABLE */
}

void Mcl_SetLcuSyncOutputFallFilter(const Mcl_LcuSyncOutputValueType List[], const uint8 Dimension)
{
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    uint8 Index;
    boolean DetErrorCheck = FALSE;
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
    Lcu_Ip_ReturnType LocStatus = LCU_IP_STATUS_SUCCESS;
#endif /* MCL_MULTICORE_IS_AVAILABLE */

    for(Index = 0; Index < Dimension; Index++)
    {
        if(List[Index].LogicOutputId >= LCU_IP_NOF_CFG_LOGIC_OUTPUTS)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, List[Index].LogicOutputId, MCL_DET_LCU_SYNC_SET_OUTPUT_FALL_FILTER, MCL_E_INVALID_PARAMETER);
            DetErrorCheck = TRUE;
            break;
        }
    }
    if (FALSE == DetErrorCheck)
    {
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
        LocStatus = Mcl_Ipw_SetLcuSyncOutputFallFilter((Lcu_Ip_SyncOutputValueType *)List, Dimension);
        if (LCU_IP_STATUS_SUCCESS != LocStatus)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, 0U, MCL_DET_LCU_SYNC_SET_OUTPUT_FALL_FILTER, MCL_E_PARAM_CONFIG);
        }
        else
        {
            /* Do Nothing */
        }
#else /* MCL_MULTICORE_IS_AVAILABLE */
        (void)Mcl_Ipw_SetLcuSyncOutputFallFilter((Lcu_Ip_SyncOutputValueType *)List, Dimension);
#endif /* MCL_MULTICORE_IS_AVAILABLE */
    }

#else /* MCL_DET_IS_AVAILABLE */
    (void)Mcl_Ipw_SetLcuSyncOutputFallFilter((Lcu_Ip_SyncOutputValueType *)List, Dimension);
#endif /* MCL_DET_IS_AVAILABLE */

}

void Mcl_SetLcuSyncOutputRiseFilter(const Mcl_LcuSyncOutputValueType List[], const uint8 Dimension)
{
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    uint8 Index;
    boolean DetErrorCheck = FALSE;
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
    Lcu_Ip_ReturnType LocStatus = LCU_IP_STATUS_SUCCESS;
#endif /* MCL_MULTICORE_IS_AVAILABLE */

    for(Index = 0; Index < Dimension; Index++)
    {
        if(List[Index].LogicOutputId >= LCU_IP_NOF_CFG_LOGIC_OUTPUTS)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, List[Index].LogicOutputId, MCL_DET_LCU_SYNC_SET_OUTPUT_RISE_FILTER, MCL_E_INVALID_PARAMETER);
            DetErrorCheck = TRUE;
            break;
        }
    }
    if (FALSE == DetErrorCheck)
    {
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
        LocStatus = Mcl_Ipw_SetLcuSyncOutputRiseFilter((Lcu_Ip_SyncOutputValueType *)List, Dimension);
        if (LCU_IP_STATUS_SUCCESS != LocStatus)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, 0U, MCL_DET_LCU_SYNC_SET_OUTPUT_RISE_FILTER, MCL_E_PARAM_CONFIG);
        }
        else
        {
            /* Do Nothing */
        }
#else /* MCL_MULTICORE_IS_AVAILABLE */
        (void)Mcl_Ipw_SetLcuSyncOutputRiseFilter((Lcu_Ip_SyncOutputValueType *)List, Dimension);
#endif /* MCL_MULTICORE_IS_AVAILABLE */
    }

#else
    (void)Mcl_Ipw_SetLcuSyncOutputRiseFilter((Lcu_Ip_SyncOutputValueType *)List, Dimension);
#endif /* MCL_DET_IS_AVAILABLE */
}

void Mcl_SetLcuSyncOutputLutControl(const Mcl_LcuSyncOutputValueType List[], const uint8 Dimension)
{
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    uint8 Index;
    boolean DetErrorCheck = FALSE;
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
    Lcu_Ip_ReturnType LocStatus = LCU_IP_STATUS_SUCCESS;
#endif /* MCL_MULTICORE_IS_AVAILABLE */

    for(Index = 0; Index < Dimension; Index++)
    {
        if(List[Index].LogicOutputId >= LCU_IP_NOF_CFG_LOGIC_OUTPUTS)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, List[Index].LogicOutputId, MCL_DET_LCU_SYNC_SET_OUTPUT_LUT_CONTROL, MCL_E_INVALID_PARAMETER);
            DetErrorCheck = TRUE;
            break;
        }
    }
    if (FALSE == DetErrorCheck)
    {
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
        LocStatus = Mcl_Ipw_SetLcuSyncOutputLutControl((Lcu_Ip_SyncOutputValueType *)List, Dimension);
        if (LCU_IP_STATUS_SUCCESS != LocStatus)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, 0U, MCL_DET_LCU_SYNC_SET_OUTPUT_LUT_CONTROL, MCL_E_PARAM_CONFIG);
        }
        else
        {
            /* Do Nothing */
        }
#else /* MCL_MULTICORE_IS_AVAILABLE */
        (void)Mcl_Ipw_SetLcuSyncOutputLutControl((Lcu_Ip_SyncOutputValueType *)List, Dimension);
#endif /* MCL_MULTICORE_IS_AVAILABLE */
    }

#else /* MCL_DET_IS_AVAILABLE */
    (void)Mcl_Ipw_SetLcuSyncOutputLutControl((Lcu_Ip_SyncOutputValueType *)List, Dimension);
#endif /* MCL_DET_IS_AVAILABLE */
}

void Mcl_ClearLcuSyncOutputForceEvent(const Mcl_LcuSyncOutputValueType List[], const uint8 Dimension)
{
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    uint8 Index;
    boolean DetErrorCheck = FALSE;
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
    Lcu_Ip_ReturnType LocStatus = LCU_IP_STATUS_SUCCESS;
#endif /* MCL_MULTICORE_IS_AVAILABLE */

    for(Index = 0; Index < Dimension; Index++)
    {
        if(List[Index].LogicOutputId >= LCU_IP_NOF_CFG_LOGIC_OUTPUTS)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, List[Index].LogicOutputId, MCL_DET_LCU_SYNC_CLEAR_OUTPUT_FORCE_EVENT, MCL_E_INVALID_PARAMETER);
            DetErrorCheck = TRUE;
            break;
        }
    }

    if (FALSE == DetErrorCheck)
    {
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
        LocStatus = Mcl_Ipw_ClearLcuSyncOutputForceEvent((Lcu_Ip_SyncOutputValueType *)List, Dimension);
        if (LCU_IP_STATUS_SUCCESS != LocStatus)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, 0U, MCL_DET_LCU_SYNC_CLEAR_OUTPUT_FORCE_EVENT, MCL_E_PARAM_CONFIG);
        }
        else
        {
            /* Do Nothing */
        }
#else /* MCL_MULTICORE_IS_AVAILABLE */
        (void)Mcl_Ipw_ClearLcuSyncOutputForceEvent((Lcu_Ip_SyncOutputValueType *)List, Dimension);
#endif /* MCL_MULTICORE_IS_AVAILABLE */
    }

#else /* MCL_DET_IS_AVAILABLE */
    (void)Mcl_Ipw_ClearLcuSyncOutputForceEvent((Lcu_Ip_SyncOutputValueType *)List, Dimension);
#endif /* MCL_DET_IS_AVAILABLE */
}

void Mcl_GetLcuSyncLogicInput(Mcl_LcuSyncInputValueType List[], const uint8 Dimension)
{
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    uint8 Index;
    boolean DetErrorCheck = FALSE;
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
    Lcu_Ip_ReturnType LocStatus = LCU_IP_STATUS_SUCCESS;
#endif /* MCL_MULTICORE_IS_AVAILABLE */

    for(Index = 0; Index < Dimension; Index++)
    {
        if(List[Index].LogicInputId >= LCU_IP_NOF_CFG_LOGIC_INPUTS)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, List[Index].LogicInputId, MCL_DET_LCU_SYNC_GET_LOGIC_INPUT, MCL_E_INVALID_PARAMETER);
            DetErrorCheck = TRUE;
            break;
        }
    }

    if (FALSE == DetErrorCheck)
    {
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
        LocStatus = Mcl_Ipw_GetLcuSyncLogicInput((Lcu_Ip_SyncInputValueType*)List, Dimension);
        if (LCU_IP_STATUS_SUCCESS != LocStatus)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, 0U, MCL_DET_LCU_SYNC_GET_LOGIC_INPUT, MCL_E_PARAM_CONFIG);
        }
        else
        {
            /* Do Nothing */
        }
#else /* MCL_MULTICORE_IS_AVAILABLE */
        (void)Mcl_Ipw_GetLcuSyncLogicInput((Lcu_Ip_SyncInputValueType*)List, Dimension);
#endif /* MCL_MULTICORE_IS_AVAILABLE */
    }

#else /* MCL_DET_IS_AVAILABLE */
    (void)Mcl_Ipw_GetLcuSyncLogicInput((Lcu_Ip_SyncInputValueType*)List, Dimension);
#endif /* MCL_DET_IS_AVAILABLE */
}

void Mcl_GetLcuSyncSwOverrideInput(Mcl_LcuSyncInputValueType List[], const uint8 Dimension)
{
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    uint8 Index;
    boolean DetErrorCheck = FALSE;
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
    Lcu_Ip_ReturnType LocStatus = LCU_IP_STATUS_SUCCESS;
#endif /* MCL_MULTICORE_IS_AVAILABLE */

    for(Index = 0; Index < Dimension; Index++)
    {
        if(List[Index].LogicInputId >= LCU_IP_NOF_CFG_LOGIC_INPUTS)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, List[Index].LogicInputId, MCL_DET_LCU_SYNC_GET_SW_OVERRIDE_INPUT, MCL_E_INVALID_PARAMETER);
            DetErrorCheck = TRUE;
            break;
        }
    }

    if (FALSE == DetErrorCheck)
    {
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
        LocStatus = Mcl_Ipw_GetLcuSyncSwOverrideInput((Lcu_Ip_SyncInputValueType*)List, Dimension);
        if (LCU_IP_STATUS_SUCCESS != LocStatus)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, 0U, MCL_DET_LCU_SYNC_GET_SW_OVERRIDE_INPUT, MCL_E_PARAM_CONFIG);
        }
        else
        {
            /* Do Nothing */
        }
#else /* MCL_MULTICORE_IS_AVAILABLE */
        (void)Mcl_Ipw_GetLcuSyncSwOverrideInput((Lcu_Ip_SyncInputValueType*)List, Dimension);
#endif /* MCL_MULTICORE_IS_AVAILABLE */
    }

#else /* MCL_DET_IS_AVAILABLE */
    (void)Mcl_Ipw_GetLcuSyncSwOverrideInput((Lcu_Ip_SyncInputValueType*)List, Dimension);
#endif /* MCL_DET_IS_AVAILABLE */
}

void Mcl_GetLcuSyncLogicOutput(Mcl_LcuSyncOutputValueType List[], const uint8 Dimension)
{
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    uint8 Index;
    boolean DetErrorCheck = FALSE;
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
    Lcu_Ip_ReturnType LocStatus = LCU_IP_STATUS_SUCCESS;
#endif /* MCL_MULTICORE_IS_AVAILABLE */

    for(Index = 0; Index < Dimension; Index++)
    {
        if(List[Index].LogicOutputId >= LCU_IP_NOF_CFG_LOGIC_OUTPUTS)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, List[Index].LogicOutputId, MCL_DET_LCU_SYNC_GET_LOGIC_OUTPUT, MCL_E_INVALID_PARAMETER);
            DetErrorCheck = TRUE;
            break;
        }
    }

    if (FALSE == DetErrorCheck)
    {
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
        LocStatus = Mcl_Ipw_GetLcuSyncLogicOutput((Lcu_Ip_SyncOutputValueType*)List, Dimension);
        if (LCU_IP_STATUS_SUCCESS != LocStatus)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, 0U, MCL_DET_LCU_SYNC_GET_LOGIC_OUTPUT, MCL_E_PARAM_CONFIG);
        }
        else
        {
            /* Do Nothing */
        }
#else /* MCL_MULTICORE_IS_AVAILABLE */
        (void)Mcl_Ipw_GetLcuSyncLogicOutput((Lcu_Ip_SyncOutputValueType*)List, Dimension);
#endif /* MCL_MULTICORE_IS_AVAILABLE */
    }

#else /* MCL_DET_IS_AVAILABLE */
    (void)Mcl_Ipw_GetLcuSyncLogicOutput((Lcu_Ip_SyncOutputValueType*)List, Dimension);
#endif /* MCL_DET_IS_AVAILABLE */
}

void Mcl_GetLcuSyncForceOutput(Mcl_LcuSyncOutputValueType List[], const uint8 Dimension)
{
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    uint8 Index;
    boolean DetErrorCheck = FALSE;
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
    Lcu_Ip_ReturnType LocStatus = LCU_IP_STATUS_SUCCESS;
#endif /* MCL_MULTICORE_IS_AVAILABLE */

    for(Index = 0; Index < Dimension; Index++)
    {
        if(List[Index].LogicOutputId >= LCU_IP_NOF_CFG_LOGIC_OUTPUTS)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, List[Index].LogicOutputId, MCL_DET_LCU_SYNC_GET_FORCE_OUTPUT, MCL_E_INVALID_PARAMETER);
            DetErrorCheck = TRUE;
            break;
        }
    }

    if (FALSE == DetErrorCheck)
    {
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
        LocStatus = Mcl_Ipw_GetLcuSyncForceOutput((Lcu_Ip_SyncOutputValueType*)List, Dimension);
        if (LCU_IP_STATUS_SUCCESS != LocStatus)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, 0U, MCL_DET_LCU_SYNC_GET_FORCE_OUTPUT, MCL_E_PARAM_CONFIG);
        }
        else
        {
            /* Do Nothing */
        }
#else /* MCL_MULTICORE_IS_AVAILABLE */
        (void)Mcl_Ipw_GetLcuSyncForceOutput((Lcu_Ip_SyncOutputValueType*)List, Dimension);
#endif /* MCL_MULTICORE_IS_AVAILABLE */
    }

#else /* MCL_DET_IS_AVAILABLE */
    (void)Mcl_Ipw_GetLcuSyncForceOutput((Lcu_Ip_SyncOutputValueType*)List, Dimension);
#endif /* MCL_DET_IS_AVAILABLE */
}

void Mcl_GetLcuSyncForceStatus(Mcl_LcuSyncOutputValueType List[], const uint8 Dimension)
{
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    uint8 Index;
    boolean DetErrorCheck = FALSE;
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
    Lcu_Ip_ReturnType LocStatus = LCU_IP_STATUS_SUCCESS;
#endif /* MCL_MULTICORE_IS_AVAILABLE */

    for(Index = 0; Index < Dimension; Index++)
    {
        if(List[Index].LogicOutputId >= LCU_IP_NOF_CFG_LOGIC_OUTPUTS)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, List[Index].LogicOutputId, MCL_DET_LCU_SYNC_GET_FORCE_STATUS, MCL_E_INVALID_PARAMETER);
            DetErrorCheck = TRUE;
            break;
        }
    }

    if (FALSE == DetErrorCheck)
    {
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
        LocStatus = Mcl_Ipw_GetLcuSyncForceStatus((Lcu_Ip_SyncOutputValueType*)List, Dimension);
        if (LCU_IP_STATUS_SUCCESS != LocStatus)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, 0U, MCL_DET_LCU_SYNC_GET_FORCE_STATUS, MCL_E_PARAM_CONFIG);
        }
        else
        {
            /* Do Nothing */
        }
#else /* MCL_MULTICORE_IS_AVAILABLE */
        (void)Mcl_Ipw_GetLcuSyncForceStatus((Lcu_Ip_SyncOutputValueType*)List, Dimension);
#endif /* MCL_MULTICORE_IS_AVAILABLE */
    }

#else /* MCL_DET_IS_AVAILABLE */
    (void)Mcl_Ipw_GetLcuSyncForceStatus((Lcu_Ip_SyncOutputValueType*)List, Dimension);
#endif /* MCL_DET_IS_AVAILABLE */
}

void Mcl_GetLcuSyncCombineForceInput(Mcl_LcuSyncOutputValueType List[], const uint8 Dimension)
{
#if (MCL_DET_IS_AVAILABLE == STD_ON)
    uint8 Index;
    boolean DetErrorCheck = FALSE;
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
    Lcu_Ip_ReturnType LocStatus = LCU_IP_STATUS_SUCCESS;
#endif /* MCL_MULTICORE_IS_AVAILABLE */

    for(Index = 0; Index < Dimension; Index++)
    {
        if(List[Index].LogicOutputId >= LCU_IP_NOF_CFG_LOGIC_OUTPUTS)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, List[Index].LogicOutputId, MCL_DET_LCU_SYNC_GET_COMBINE_FORCE_INPUT, MCL_E_INVALID_PARAMETER);
            DetErrorCheck = TRUE;
            break;
        }
    }

    if (FALSE == DetErrorCheck)
    {
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
        LocStatus = Mcl_Ipw_GetLcuSyncCombineForceInput((Lcu_Ip_SyncOutputValueType*)List, Dimension);
        if (LCU_IP_STATUS_SUCCESS != LocStatus)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, 0U, MCL_DET_LCU_SYNC_GET_COMBINE_FORCE_INPUT, MCL_E_PARAM_CONFIG);
        }
        else
        {
            /* Do Nothing */
        }
#else /* MCL_MULTICORE_IS_AVAILABLE */
        (void)Mcl_Ipw_GetLcuSyncCombineForceInput((Lcu_Ip_SyncOutputValueType*)List, Dimension);
#endif /* MCL_MULTICORE_IS_AVAILABLE */
    }

#else /* MCL_DET_IS_AVAILABLE */
    (void)Mcl_Ipw_GetLcuSyncCombineForceInput((Lcu_Ip_SyncOutputValueType*)List, Dimension);
#endif /* MCL_DET_IS_AVAILABLE */
}

#endif /* #if (MCL_LCU_SYNC_FUNC_IS_AVAILABLE == STD_ON) */

#if (MCL_LCU_ASYNC_FUNC_IS_AVAILABLE == STD_ON)
void Mcl_SetLcuAsyncInputList(const uint8 LogicInput, const Mcl_LcuAsyncInputValueType List[], const uint8 Dimension)
{
#if (MCL_DET_IS_AVAILABLE == STD_ON)

#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
        Lcu_Ip_ReturnType LocStatus = LCU_IP_STATUS_SUCCESS;
#endif /* MCL_MULTICORE_IS_AVAILABLE */

    if (LCU_IP_NOF_CFG_LOGIC_INPUTS <= LogicInput)
    {
        (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, LogicInput, MCL_DET_LCU_ASYNC_SET_INPUT, MCL_E_INVALID_PARAMETER);
    }
    else
    {
        if ((MCL_LCU_IP_INPUT_SET_SW_VALUE + 1U) < Dimension)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, LogicInput, MCL_DET_LCU_ASYNC_SET_INPUT, MCL_E_INVALID_PARAMETER);
        }
        else
        {
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
            LocStatus = Mcl_Ipw_SetLcuAsyncInputList(LogicInput, (Lcu_Ip_AsyncInputValueType*)List, Dimension);
            if (LCU_IP_STATUS_SUCCESS != LocStatus)
            {
                (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, LogicInput, MCL_DET_LCU_ASYNC_SET_INPUT, MCL_E_PARAM_CONFIG);
            }
            else
            {
                /* Do Nothing */
            }
#else /* MCL_MULTICORE_IS_AVAILABLE */
            (void)Mcl_Ipw_SetLcuAsyncInputList(LogicInput, (Lcu_Ip_AsyncInputValueType*)List, Dimension);
#endif /* MCL_MULTICORE_IS_AVAILABLE */
        }
    }
#else /* MCL_DET_IS_AVAILABLE */
    (void)Mcl_Ipw_SetLcuAsyncInputList(LogicInput, (Lcu_Ip_AsyncInputValueType*)List, Dimension);
#endif /* MCL_DET_IS_AVAILABLE */
}

void Mcl_SetLcuAsyncOutputList(const uint8 LogicOutput, const Mcl_LcuAsyncOutputValueType List[], const uint8 Dimension)
{
#if (MCL_DET_IS_AVAILABLE == STD_ON)

    Lcu_Ip_ReturnType LocStatus = LCU_IP_STATUS_SUCCESS;

    if (LCU_IP_NOF_CFG_LOGIC_OUTPUTS <= LogicOutput)
    {
        (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, LogicOutput, MCL_DET_LCU_ASYNC_SET_OUTPUT, MCL_E_INVALID_PARAMETER);
    }
    else
    {
        if ((MCL_LCU_IP_OUTPUT_CLEAR_FORCE_STS + 1U) < Dimension)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, LogicOutput, MCL_DET_LCU_ASYNC_SET_OUTPUT, MCL_E_INVALID_PARAMETER);
        }
        else
        {
            LocStatus = Mcl_Ipw_SetLcuAsyncOutputList(LogicOutput, (Lcu_Ip_AsyncOutputValueType*)List, Dimension);
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
            if (LCU_IP_STATUS_WRONG_CORE == LocStatus)
            {
                (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, LogicOutput, MCL_DET_LCU_ASYNC_SET_OUTPUT, MCL_E_PARAM_CONFIG);
            }
            else
            {
                /* Do Nothing */
            }
#else /* MCL_MULTICORE_IS_AVAILABLE */
            if (LCU_IP_STATUS_ERROR == LocStatus)
            {
                (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, LogicOutput, MCL_DET_LCU_ASYNC_SET_OUTPUT, MCL_E_INVALID_STATE);
            }
            else
            {
                /* Do Nothing */
            }
#endif /* MCL_MULTICORE_IS_AVAILABLE */
        }
    }
#else /* MCL_DET_IS_AVAILABLE */
    (void)Mcl_Ipw_SetLcuAsyncOutputList(LogicOutput, (Lcu_Ip_AsyncOutputValueType*)List, Dimension);
#endif /* MCL_DET_IS_AVAILABLE */
}

void Mcl_GetLcuAsyncLogicInputInfo(const uint8 LogicInput, const Mcl_LcuInputInfoParamType Param, uint8 * const Value)
{
#if (MCL_DET_IS_AVAILABLE == STD_ON)

#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
        Lcu_Ip_ReturnType LocStatus = LCU_IP_STATUS_SUCCESS;
#endif /* MCL_MULTICORE_IS_AVAILABLE */

    if (LCU_IP_NOF_CFG_LOGIC_INPUTS <= LogicInput)
    {
        (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, LogicInput, MCL_DET_LCU_ASYNC_GET_INPUT_INFO, MCL_E_INVALID_PARAMETER);
    }
    else
    {
        if (MCL_LCU_IP_INPUT_GET_SW_OVERRIDE_STATE < Param)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, LogicInput, MCL_DET_LCU_ASYNC_GET_INPUT_INFO, MCL_E_INVALID_PARAMETER);
        }
        else
        {
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
            LocStatus = Mcl_Ipw_GetLcuAsyncLogicInputInfo(LogicInput, (Lcu_Ip_LogicInputInfoParamType)Param, Value);
            if (LCU_IP_STATUS_SUCCESS != LocStatus)
            {
                (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, LogicInput, MCL_DET_LCU_ASYNC_GET_INPUT_INFO, MCL_E_PARAM_CONFIG);
            }
            else
            {
                /* Do Nothing */
            }
#else /* MCL_MULTICORE_IS_AVAILABLE */
            (void)Mcl_Ipw_GetLcuAsyncLogicInputInfo(LogicInput, (Lcu_Ip_LogicInputInfoParamType)Param, Value);
#endif /* MCL_MULTICORE_IS_AVAILABLE */
        }
    }
#else /* MCL_DET_IS_AVAILABLE */
    (void)Mcl_Ipw_GetLcuAsyncLogicInputInfo(LogicInput, (Lcu_Ip_LogicInputInfoParamType)Param, Value);
#endif /* MCL_DET_IS_AVAILABLE */
}

void Mcl_GetLcuAsyncLogicOutputInfo(const uint8 LogicOutput, const Mcl_LcuOutputInfoParamType Param, uint8 * const Value)
{
#if (MCL_DET_IS_AVAILABLE == STD_ON)

    Lcu_Ip_ReturnType LocStatus = LCU_IP_STATUS_SUCCESS;

    if (LCU_IP_NOF_CFG_LOGIC_OUTPUTS < LogicOutput)
    {
        (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, LogicOutput, MCL_DET_LCU_ASYNC_GET_OUTPUT_INFO, MCL_E_INVALID_PARAMETER);
    }
    else
    {
        if (MCL_LCU_IP_OUTPUT_GET_COMBINE_FORCE_INPUT < Param)
        {
            (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, LogicOutput, MCL_DET_LCU_ASYNC_GET_OUTPUT_INFO, MCL_E_INVALID_PARAMETER);
        }
        else
        {
            LocStatus = Mcl_Ipw_GetLcuAsyncLogicOutputInfo(LogicOutput, (Lcu_Ip_LogicOutputInfoParamType)Param, Value);
#if (MCL_MULTICORE_IS_AVAILABLE == STD_ON)
            if (LCU_IP_STATUS_WRONG_CORE == LocStatus)
            {
                (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, LogicOutput, MCL_DET_LCU_ASYNC_GET_OUTPUT_INFO, MCL_E_PARAM_CONFIG);
            }
            else
            {
                /* Do Nothing */
            }
#else /* MCL_MULTICORE_IS_AVAILABLE */
            if (LCU_IP_STATUS_ERROR == LocStatus)
            {
                (void)Det_ReportError((uint16)CDD_MCL_MODULE_ID_H, LogicOutput, MCL_DET_LCU_ASYNC_GET_OUTPUT_INFO, MCL_E_PARAM_CONFIG);
            }
            else
            {
                /* Do Nothing */
            }
#endif /* MCL_MULTICORE_IS_AVAILABLE */
        }
    }
#else /* MCL_DET_IS_AVAILABLE */
    (void)Mcl_Ipw_GetLcuAsyncLogicOutputInfo(LogicOutput, (Lcu_Ip_LogicOutputInfoParamType)Param, Value);
#endif /* MCL_DET_IS_AVAILABLE */
}

#endif /* #if (MCL_LCU_ASYNC_FUNC_IS_AVAILABLE == STD_ON) */

#endif /* MCL_LCU_IS_AVAILABLE == STD_ON */

#if (MCL_VERSION_INFO_API_IS_AVAILABLE == STD_ON)
void Mcl_GetVersionInfo(Std_VersionInfoType * const VersionInfo)
{
    /* Save the version information into VersionInfo pointer */
    (VersionInfo)->vendorID = (uint16)CDD_MCL_VENDOR_ID_H;
    (VersionInfo)->moduleID = (uint16)CDD_MCL_MODULE_ID_H;
    (VersionInfo)->sw_major_version = (uint8)CDD_MCL_SW_MAJOR_VERSION_H;
    (VersionInfo)->sw_minor_version = (uint8)CDD_MCL_SW_MINOR_VERSION_H;
    (VersionInfo)->sw_patch_version = (uint8)CDD_MCL_SW_PATCH_VERSION_H;
}
#endif /* MCL_VERSION_INFO_API_IS_AVAILABLE == STD_ON */

#define MCL_STOP_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */

/*==================================================================================================
 *                                        END OF FILE
==================================================================================================*/
