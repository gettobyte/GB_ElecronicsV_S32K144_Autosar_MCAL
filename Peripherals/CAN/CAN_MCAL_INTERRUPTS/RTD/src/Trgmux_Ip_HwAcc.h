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

/* Prevention from multiple including the same header */
#if !defined(TRGMUX_IP_HWACC_H_)
#define TRGMUX_IP_HWACC_H_

/**
*   @file    Trgmux_Ip_HwAcc.c
*
*   @version 1.0.0
*
*   @brief   AUTOSAR Mcl - Trgmux Ip driver source file.
*   @details
*
*   @addtogroup TRGMUX_IP_DRIVER TRGMUX IP Driver
*   @{
*/

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Trgmux_Ip.h"
#include "Trgmux_Ip_Devassert.h"

#if (TRGMUX_IP_IS_AVAILABLE == STD_ON)
/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define TRGMUX_IP_HWACC_VENDOR_ID_H                    43
#define TRGMUX_IP_HWACC_MODULE_ID_H                    255
#define TRGMUX_IP_HWACC_AR_RELEASE_MAJOR_VERSION_H     4
#define TRGMUX_IP_HWACC_AR_RELEASE_MINOR_VERSION_H     4
#define TRGMUX_IP_HWACC_AR_RELEASE_REVISION_VERSION_H  0
#define TRGMUX_IP_HWACC_SW_MAJOR_VERSION_H             1
#define TRGMUX_IP_HWACC_SW_MINOR_VERSION_H             0
#define TRGMUX_IP_HWACC_SW_PATCH_VERSION_H             0

/**
* @page misra_violations MISRA-C:2012 violations
*/

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/

/* Check if Trgmux_Ip_HwAcc.h file and Trgmux_Ip.h file are of the same vendor */
#if (TRGMUX_IP_HWACC_VENDOR_ID_H != TRGMUX_IP_VENDOR_ID_H)
    #error "Trgmux_Ip_HwAcc.h and Trgmux_Ip.h have different vendor ids"
#endif

/* Check if Trgmux_Ip_HwAcc.h file and Trgmux_Ip.h file are of the same Autosar version */
#if ((TRGMUX_IP_HWACC_AR_RELEASE_MAJOR_VERSION_H != TRGMUX_IP_AR_RELEASE_MAJOR_VERSION_H) || \
     (TRGMUX_IP_HWACC_AR_RELEASE_MINOR_VERSION_H != TRGMUX_IP_AR_RELEASE_MINOR_VERSION_H) || \
     (TRGMUX_IP_HWACC_AR_RELEASE_REVISION_VERSION_H != TRGMUX_IP_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Trgmux_Ip_HwAcc.h and Trgmux_Ip.h are different"
#endif

/* Check if Trgmux_Ip_HwAcc.h file and Trgmux_Ip.h file are of the same Software version */
#if ((TRGMUX_IP_HWACC_SW_MAJOR_VERSION_H != TRGMUX_IP_SW_MAJOR_VERSION_H) || \
     (TRGMUX_IP_HWACC_SW_MINOR_VERSION_H != TRGMUX_IP_SW_MINOR_VERSION_H) || \
     (TRGMUX_IP_HWACC_SW_PATCH_VERSION_H != TRGMUX_IP_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Trgmux_Ip_HwAcc.h and Trgmux_Ip.h are different"
#endif

/* Check if Trgmux_Ip_HwAcc.h file and Trgmux_Ip_Devassert.h file are of the same vendor */
#if (TRGMUX_IP_HWACC_VENDOR_ID_H != TRGMUX_IP_DEVASSERT_VENDOR_ID_H)
    #error "Trgmux_Ip_HwAcc.h and Trgmux_Ip_Devassert.h have different vendor ids"
#endif

/* Check if Trgmux_Ip_HwAcc.h file and Trgmux_Ip_Devassert.h file are of the same Autosar version */
#if ((TRGMUX_IP_HWACC_AR_RELEASE_MAJOR_VERSION_H != TRGMUX_IP_DEVASSERT_AR_RELEASE_MAJOR_VERSION_H) || \
     (TRGMUX_IP_HWACC_AR_RELEASE_MINOR_VERSION_H != TRGMUX_IP_DEVASSERT_AR_RELEASE_MINOR_VERSION_H) || \
     (TRGMUX_IP_HWACC_AR_RELEASE_REVISION_VERSION_H != TRGMUX_IP_DEVASSERT_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Trgmux_Ip_HwAcc.h and Trgmux_Ip_Devassert.h are different"
#endif

/* Check if Trgmux_Ip_HwAcc.h file and Trgmux_Ip_Devassert.h file are of the same Software version */
#if ((TRGMUX_IP_HWACC_SW_MAJOR_VERSION_H != TRGMUX_IP_DEVASSERT_SW_MAJOR_VERSION_H) || \
     (TRGMUX_IP_HWACC_SW_MINOR_VERSION_H != TRGMUX_IP_DEVASSERT_SW_MINOR_VERSION_H) || \
     (TRGMUX_IP_HWACC_SW_PATCH_VERSION_H != TRGMUX_IP_DEVASSERT_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Trgmux_Ip_HwAcc.h and Trgmux_Ip_Devassert.h are different"
#endif

/*===============================================================================================
                                       DEFINES AND MACROS
===============================================================================================*/
/* Number of SEL bitfields in one TRGMUX register */
#define TRGMUX_IP_REG_SELECTION_NUM         ((uint8)(4U))
/* Get the index of the TRGMUX register */
#define TRGMUX_IP_REG_IDX(x)                ((uint8)((uint8)(x) / TRGMUX_IP_REG_SELECTION_NUM))
/* Get the index of the SEL bitfield inside TRGMUX register */
#define TRGMUX_IP_REG_SELECTION_IDX(x)      ((uint8)((uint8)(x) % TRGMUX_IP_REG_SELECTION_NUM))

/*==================================================================================================
 *                                      INLINE FUNCTIONS
==================================================================================================*/
#define MCL_START_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

static inline Trgmux_Ip_StatusType hwAcc_Init(TRGMUX_Type * const pTrgmux)
{
    uint32 regIdx;
    uint32 regValue;
    Trgmux_Ip_StatusType Status = TRGMUX_IP_STATUS_SUCCESS;

    for(regIdx = 0U; regIdx < TRGMUX_TRGMUXn_COUNT; regIdx++)
    {
        if(TRGMUX_IP_STATUS_LOCKED != Status)
        {
            regValue = pTrgmux->TRGMUXn[regIdx] & TRGMUX_TRGMUXn_LK_MASK;
            if(TRGMUX_TRGMUXn_LK_MASK == regValue)
            {
                Status = TRGMUX_IP_STATUS_LOCKED;
            }
            else
            {
                pTrgmux->TRGMUXn[regIdx] &= ((~(TRGMUX_TRGMUXn_SEL0_MASK)) | (~(TRGMUX_TRGMUXn_SEL1_MASK)) | (~(TRGMUX_TRGMUXn_SEL2_MASK)) | (~(TRGMUX_TRGMUXn_SEL3_MASK)));
            }
        }
        else
        {
            /* Do nothing */
        }
    }

    return Status;
}

static inline void hwAcc_SetInputForOutput(TRGMUX_Type * const pTrgmux, const uint32 Input, const uint32 Output)
{
    uint32 regValue;
    /* Set input for output */
    regValue = pTrgmux->TRGMUXn[TRGMUX_IP_REG_IDX(Output)];
    regValue &= ~((uint32)TRGMUX_TRGMUXn_SEL0_MASK << (TRGMUX_TRGMUXn_SEL1_SHIFT * TRGMUX_IP_REG_SELECTION_IDX(Output)));
    regValue |=  ((uint32)Input) << ((uint8)(TRGMUX_TRGMUXn_SEL1_SHIFT * TRGMUX_IP_REG_SELECTION_IDX(Output)));
    pTrgmux->TRGMUXn[TRGMUX_IP_REG_IDX(Output)] = regValue;
}

static inline void hwAcc_SetLockForOutput(TRGMUX_Type * const pTrgmux, const uint32 Output)
{
    /* Set TRGMUX_IP_REG_IDX register value */
    pTrgmux->TRGMUXn[TRGMUX_IP_REG_IDX(Output)] |= (((uint32)1U) << TRGMUX_TRGMUXn_LK_SHIFT);
}

static inline boolean hwAcc_GetLockForOutput(const TRGMUX_Type * const pTrgmux, const uint32 Output)
{
    boolean Status;
    /* Get TRGMUX_IP_REG_IDX register value */
    if(((pTrgmux->TRGMUXn[TRGMUX_IP_REG_IDX(Output)] & TRGMUX_TRGMUXn_LK_MASK) >> TRGMUX_TRGMUXn_LK_SHIFT) == 1U)
    {
        Status = TRUE;
    }
    else
    {
        Status = FALSE;
    }

    return Status;
}

#define MCL_STOP_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

#endif /* TRGMUX_IP_IS_AVAILABLE */

/** @} */

#endif  /* #if !defined(TRGMUX_IP_HWACC_H_) */

/*==================================================================================================
 *                                        END OF FILE
==================================================================================================*/
