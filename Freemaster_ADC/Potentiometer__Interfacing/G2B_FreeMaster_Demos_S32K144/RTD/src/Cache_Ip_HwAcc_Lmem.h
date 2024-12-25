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
#ifndef CACHE_IP_HWACC_LMEM_H_
#define CACHE_IP_HWACC_LMEM_H_

/**
*   @file    Cache_Ip_HwAcc_Lmem.h
*
*   @version 1.0.0
*
*   @brief   AUTOSAR Mcl - Cache Ip driver header file.
*   @details
*
*   @addtogroup CACHE_IP_DRIVER CACHE IP Driver
*   @{
*/

/*==================================================================================================
*                                          INCLUDE FILES
*  1) system and project includes
*  2) needed interfaces from external units
*  3) internal and external interfaces from this unit
==================================================================================================*/
#include "Cache_Ip_Cfg_Defines.h"
#include "Cache_Ip_Cfg_DeviceRegisters.h"
#include "Cache_Ip_Devassert.h"

#if (CACHE_IP_IS_AVAILABLE == STD_ON)

#if (CACHE_IP_LMEM_IS_AVAILABLE == STD_ON)
/* LMEM requires timeout for command execution. */
#include "OsIf.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CACHE_IP_HWACC_LMEM_VENDOR_ID_H                       43
#define CACHE_IP_HWACC_LMEM_AR_RELEASE_MAJOR_VERSION_H        4
#define CACHE_IP_HWACC_LMEM_AR_RELEASE_MINOR_VERSION_H        4
#define CACHE_IP_HWACC_LMEM_AR_RELEASE_REVISION_VERSION_H     0
#define CACHE_IP_HWACC_LMEM_SW_MAJOR_VERSION_H                1
#define CACHE_IP_HWACC_LMEM_SW_MINOR_VERSION_H                0
#define CACHE_IP_HWACC_LMEM_SW_PATCH_VERSION_H                0

/**
* @page misra_violations MISRA-C:2012 violations
*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/
#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
    #if (STD_ON == CACHE_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
        #if (STD_ON == CACHE_IP_ALL_IS_AVAILABLE)
            #define Cache_Ip_Enable_AllCache()                                        (OsIf_Trusted_Call_Return(hwAcc_Lmem_ProcessorCodeCacheEnable))
            #define Cache_Ip_Disable_AllCache()                                       (OsIf_Trusted_Call_Return(hwAcc_Lmem_ProcessorCodeCacheDisable))
            #define Cache_Ip_Invalidate_AllCache()                                    (OsIf_Trusted_Call_Return(hwAcc_Lmem_ProcessorCodeInvalidate))
            #define Cache_Ip_Clean_AllCache(enInvalidate)                             (OsIf_Trusted_Call_Return1param(hwAcc_Lmem_ProcessorCodeClean, enInvalidate))
            #define Cache_Ip_Invalidate_AllCacheByAddr(addr, length)                  (OsIf_Trusted_Call_Return2param(hwAcc_Lmem_ProcessorCodeInvalidateByAddr, addr, length))
            #define Cache_Ip_Clean_AllCacheByAddr(enInvalidate, addr, length)         (OsIf_Trusted_Call_Return3param(hwAcc_Lmem_ProcessorCodeCacheCleanByAddr, enInvalidate, addr, length))
        #endif
    #else
        #if (STD_ON == CACHE_IP_ALL_IS_AVAILABLE)
            #define Cache_Ip_Enable_AllCache()                                        (hwAcc_Lmem_ProcessorCodeCacheEnable())
            #define Cache_Ip_Disable_AllCache()                                       (hwAcc_Lmem_ProcessorCodeCacheDisable())
            #define Cache_Ip_Invalidate_AllCache()                                    (hwAcc_Lmem_ProcessorCodeInvalidate())
            #define Cache_Ip_Clean_AllCache(enInvalidate)                             (hwAcc_Lmem_ProcessorCodeClean(enInvalidate))
            #define Cache_Ip_Invalidate_AllCacheByAddr(addr, length)                  (hwAcc_Lmem_ProcessorCodeInvalidateByAddr(addr, length))
            #define Cache_Ip_Clean_AllCacheByAddr(enInvalidate, addr, length)         (hwAcc_Lmem_ProcessorCodeCacheCleanByAddr(enInvalidate, addr, length))
        #endif
    #endif /* STD_ON == CACHE_IP_USER_MODE_SUPPORT_IS_AVAILABLE */
#else
    #if (STD_ON == CACHE_IP_ALL_IS_AVAILABLE)
        #define Cache_Ip_Enable_AllCache()                                        (hwAcc_Lmem_ProcessorCodeCacheEnable())
        #define Cache_Ip_Disable_AllCache()                                       (hwAcc_Lmem_ProcessorCodeCacheDisable())
        #define Cache_Ip_Invalidate_AllCache()                                    (hwAcc_Lmem_ProcessorCodeInvalidate())
        #define Cache_Ip_Clean_AllCache(enInvalidate)                             (hwAcc_Lmem_ProcessorCodeClean(enInvalidate))
        #define Cache_Ip_Invalidate_AllCacheByAddr(addr, length)                  (hwAcc_Lmem_ProcessorCodeInvalidateByAddr(addr, length))
        #define Cache_Ip_Clean_AllCacheByAddr(enInvalidate, addr, length)         (hwAcc_Lmem_ProcessorCodeCacheCleanByAddr(enInvalidate, addr, length))
    #endif
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */

/*==================================================================================================
 *                                        REGISTERS
==================================================================================================*/
#define MCL_START_SEC_VAR_INIT_UNSPECIFIED
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

static LMEM_Type * const g_ptLmemBasePtrArray[LMEM_INSTANCE_COUNT] = IP_LMEM_BASE_PTRS;

#define MCL_STOP_SEC_VAR_INIT_UNSPECIFIED
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

/*==================================================================================================
 *                                     FUNCTION PROTOTYPES
==================================================================================================*/
#define MCL_START_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

static Std_ReturnType hwAcc_Lmem_ControlReg(LMEM_Type * pInst, uint32 ControlMask, uint32 GoMask);
static Std_ReturnType hwAcc_Lmem_LineControlReg(LMEM_Type * pInst, uint32 LineControlMask, uint32 GoMask);
static Std_ReturnType hwAcc_Lmem_AddressReg(LMEM_Type * pInst, uint32 Address, uint32 GoMask);

#define MCL_STOP_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

/*==================================================================================================
 *                                       LOCAL FUNCTIONS
==================================================================================================*/
#define MCL_START_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

static Std_ReturnType hwAcc_Lmem_ControlReg(LMEM_Type * pInst, uint32 ControlMask, uint32 GoMask)
{
    Std_ReturnType locStatus = (Std_ReturnType)E_OK;
    uint32 locTimeoutTicks = OsIf_MicrosToTicks(CACHE_IP_LMEM_COMMAND_TIMEOUT_VAL, CACHE_IP_LMEM_COMMAND_TIMEOUT_TYPE);
    uint32 locCurrentTicks = OsIf_GetCounter(CACHE_IP_LMEM_COMMAND_TIMEOUT_TYPE);
    uint32 locElapsedTicks = 0U;
    uint32 locReg;
    
    /* Enter exclusive area to protect LMEM_PCCCR and PSCCR */
    locReg = pInst->PCCCR;
    locReg &= (~ControlMask);
    locReg |= (ControlMask | GoMask);
    pInst->PCCCR = locReg;
    
    if (0UL != GoMask)
    {
        while ((GoMask == (GoMask & (pInst->PCCCR))) && (locElapsedTicks < locTimeoutTicks))
        {
            locElapsedTicks += OsIf_GetElapsed(&locCurrentTicks, CACHE_IP_LMEM_COMMAND_TIMEOUT_TYPE);
        }       
        if (locElapsedTicks >= locTimeoutTicks)
        {
            locStatus = (Std_ReturnType)E_NOT_OK;
        }
    }
    /* Exit exclusive area to protect LMEM_PCCCR and PSCCR */
    
    return locStatus;
}

static Std_ReturnType hwAcc_Lmem_LineControlReg(LMEM_Type * pInst, uint32 LineControlMask, uint32 GoMask)
{
    Std_ReturnType locStatus = (Std_ReturnType)E_OK;
    uint32 locTimeoutTicks = OsIf_MicrosToTicks(CACHE_IP_LMEM_COMMAND_TIMEOUT_VAL, CACHE_IP_LMEM_COMMAND_TIMEOUT_TYPE);
    uint32 locCurrentTicks = OsIf_GetCounter(CACHE_IP_LMEM_COMMAND_TIMEOUT_TYPE);
    uint32 locElapsedTicks = 0U;
    uint32 locReg;
    
    /* Enter exclusive area to protect LMEM_PCCCR and PSCCR */
    locReg = pInst->PCCLCR;
    locReg &= (~LineControlMask);
    locReg |= (LineControlMask | GoMask);
    pInst->PCCLCR = locReg;
    
    if (0UL != GoMask)
    {
        while ((GoMask == (GoMask & (pInst->PCCLCR))) && (locElapsedTicks < locTimeoutTicks))
        {
            locElapsedTicks += OsIf_GetElapsed(&locCurrentTicks, CACHE_IP_LMEM_COMMAND_TIMEOUT_TYPE);
        }       
        if (locElapsedTicks >= locTimeoutTicks)
        {
            locStatus = (Std_ReturnType)E_NOT_OK;
        }
    }
    /* Exit exclusive area to protect LMEM_PCCCR and PSCCR */
    
    return locStatus;
}

static Std_ReturnType hwAcc_Lmem_AddressReg(LMEM_Type * pInst, uint32 Address, uint32 GoMask)
{
    Std_ReturnType locStatus = (Std_ReturnType)E_OK;
    uint32 locTimeoutTicks = OsIf_MicrosToTicks(CACHE_IP_LMEM_COMMAND_TIMEOUT_VAL, CACHE_IP_LMEM_COMMAND_TIMEOUT_TYPE);
    uint32 locCurrentTicks = OsIf_GetCounter(CACHE_IP_LMEM_COMMAND_TIMEOUT_TYPE);
    uint32 locElapsedTicks = 0U;
    uint32 locReg;
    
    /* Enter exclusive area to protect PCCSAR */
    locReg = pInst->PCCSAR;
    locReg &= (~LMEM_PCCSAR_PHYADDR_MASK);
    locReg |= ((Address & LMEM_PCCSAR_PHYADDR_MASK) | GoMask);
    pInst->PCCSAR = locReg;
    
    if (0UL != GoMask)
    {
        while ((GoMask == (GoMask & (pInst->PCCSAR))) && (locElapsedTicks < locTimeoutTicks))
        {
            locElapsedTicks += OsIf_GetElapsed(&locCurrentTicks, CACHE_IP_LMEM_COMMAND_TIMEOUT_TYPE);
        }       
        if (locElapsedTicks >= locTimeoutTicks)
        {
            locStatus = (Std_ReturnType)E_NOT_OK;
        }
    }
    /* Exit exclusive area to protect PCCSAR */
    
    return locStatus;
}

#define MCL_STOP_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

/*==================================================================================================
 *                                       INLINE FUNCTIONS
==================================================================================================*/
#define MCL_START_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

#if (STD_ON == CACHE_IP_ALL_IS_AVAILABLE)

#if (STD_ON == CACHE_IP_LMEM_PC_IS_AVAILABLE)
static Std_ReturnType hwAcc_Lmem_ProcessorCodeCacheEnable(void)
{
    Std_ReturnType locStatus = (Std_ReturnType)E_OK;
    uint32 locTimeoutTicks = OsIf_MicrosToTicks(CACHE_IP_LMEM_COMMAND_TIMEOUT_VAL, CACHE_IP_LMEM_COMMAND_TIMEOUT_TYPE);
    uint32 locCurrentTicks = OsIf_GetCounter(CACHE_IP_LMEM_COMMAND_TIMEOUT_TYPE);
    uint32 locElapsedTicks = 0U;
    uint32 locReg = g_ptLmemBasePtrArray[0U]->PCCCR;

    locReg |= LMEM_PCCCR_ENCACHE_MASK;
    /* Save value into PCCR register */
    g_ptLmemBasePtrArray[0U]->PCCCR = locReg;

    /* Waiting ENACHE bit is set to 1 */
    while ((LMEM_PCCCR_ENCACHE_MASK != (LMEM_PCCCR_ENCACHE_MASK & (g_ptLmemBasePtrArray[0U]->PCCCR))) && (locElapsedTicks < locTimeoutTicks))
    {
        locElapsedTicks += OsIf_GetElapsed(&locCurrentTicks, CACHE_IP_LMEM_COMMAND_TIMEOUT_TYPE);
    }
    /* Return E_MOT_OK if exceed timeout*/
    if (locElapsedTicks >= locTimeoutTicks)
    {
        locStatus = (Std_ReturnType)E_NOT_OK;
    }

    return locStatus;
}

static Std_ReturnType hwAcc_Lmem_ProcessorCodeCacheDisable(void)
{
    Std_ReturnType locStatus = (Std_ReturnType)E_OK;
    uint32 locTimeoutTicks = OsIf_MicrosToTicks(CACHE_IP_LMEM_COMMAND_TIMEOUT_VAL, CACHE_IP_LMEM_COMMAND_TIMEOUT_TYPE);
    uint32 locCurrentTicks = OsIf_GetCounter(CACHE_IP_LMEM_COMMAND_TIMEOUT_TYPE);
    uint32 locElapsedTicks = 0U;
    uint32 locReg = g_ptLmemBasePtrArray[0U]->PCCCR;

    /* Save value into PCCR register */
    locReg &= ~(LMEM_PCCCR_ENCACHE_MASK);
    g_ptLmemBasePtrArray[0U]->PCCCR = locReg;

    /* Waiting ENACHE bit is set to 0 */
    while ((LMEM_PCCCR_ENCACHE_MASK == (LMEM_PCCCR_ENCACHE_MASK & (g_ptLmemBasePtrArray[0U]->PCCCR))) && (locElapsedTicks < locTimeoutTicks))
    {
        locElapsedTicks += OsIf_GetElapsed(&locCurrentTicks, CACHE_IP_LMEM_COMMAND_TIMEOUT_TYPE);
    }
    /* Return E_MOT_OK if exceed timeout*/
    if (locElapsedTicks >= locTimeoutTicks)
    {
        locStatus = (Std_ReturnType)E_NOT_OK;
    }

    return locStatus;
}

static Std_ReturnType hwAcc_Lmem_ProcessorCodeInvalidate(void)
{
    Std_ReturnType locStatus = (Std_ReturnType)E_OK;

    /* Invalidate Cache */
    locStatus = hwAcc_Lmem_ControlReg(g_ptLmemBasePtrArray[0U], 
                                      (LMEM_PCCCR_INVW0_MASK | LMEM_PCCCR_INVW1_MASK), 
                                      LMEM_PCCCR_GO_MASK);
                                   
    return locStatus;
}

static Std_ReturnType hwAcc_Lmem_ProcessorCodeClean(const boolean enInvalidate)
{
    Std_ReturnType locStatus = (Std_ReturnType)E_OK;

    /* Clean Cache */
    if (FALSE == enInvalidate)
    {
        locStatus = hwAcc_Lmem_ControlReg(g_ptLmemBasePtrArray[0U],
                                          (LMEM_PCCCR_PUSHW0_MASK | LMEM_PCCCR_PUSHW1_MASK), 
                                          LMEM_PCCCR_GO_MASK);
    }
    else
    {
        locStatus = hwAcc_Lmem_ControlReg(g_ptLmemBasePtrArray[0U], 
                                          (LMEM_PCCCR_PUSHW0_MASK | LMEM_PCCCR_INVW0_MASK | LMEM_PCCCR_PUSHW1_MASK | LMEM_PCCCR_INVW1_MASK), 
                                          LMEM_PCCCR_GO_MASK);      
    }
                                                  
    return locStatus;
}

static Std_ReturnType hwAcc_Lmem_ProcessorCodeInvalidateByAddr(const uint32 addr, const uint32 length)
{
    Std_ReturnType locStatus = (Std_ReturnType)E_OK;
    uint32 locStartAddr = addr & ~(CACHE_IP_LMEM_LINE_SIZE - 1U);
    uint32 locEndAddr = addr + length;

    /* Invalidate Cache by address */
    locStatus = hwAcc_Lmem_LineControlReg(g_ptLmemBasePtrArray[0U],
                                          (LMEM_PCCLCR_LADSEL_MASK | LMEM_PCCLCR_LCMD(1U) | LMEM_PCCLCR_TDSEL_MASK),
                                          0UL); 

    while((locStartAddr < locEndAddr) && (locStatus == (Std_ReturnType)E_OK))
    {

            locStatus = hwAcc_Lmem_AddressReg(g_ptLmemBasePtrArray[0U],
                                              locStartAddr,
                                              LMEM_PCCSAR_LGO_MASK);
            locStartAddr += CACHE_IP_LMEM_LINE_SIZE;
    }

    return locStatus;
}

static Std_ReturnType hwAcc_Lmem_ProcessorCodeCacheCleanByAddr(const boolean enInvalidate, const uint32 addr, const uint32 length)
{
    Std_ReturnType locStatus = (Std_ReturnType)E_OK;
    uint32 locStartAddr = addr & ~(CACHE_IP_LMEM_LINE_SIZE - 1U);
    uint32 locEndAddr = addr + length;

    /* Clean Cache by address */
    if(TRUE == enInvalidate)
    {
        locStatus = hwAcc_Lmem_LineControlReg(g_ptLmemBasePtrArray[0U],
                                              (LMEM_PCCLCR_LADSEL_MASK | LMEM_PCCLCR_LCMD(3U) | LMEM_PCCLCR_TDSEL_MASK),
                                              0UL);     
    }
    else
    {
        locStatus = hwAcc_Lmem_LineControlReg(g_ptLmemBasePtrArray[0U],
                                              (LMEM_PCCLCR_LADSEL_MASK | LMEM_PCCLCR_LCMD(2U) | LMEM_PCCLCR_TDSEL_MASK),
                                              0UL);         
    }

    while((locStartAddr < locEndAddr) && (locStatus == (Std_ReturnType)E_OK))
    {

            locStatus = hwAcc_Lmem_AddressReg(g_ptLmemBasePtrArray[0U],
                                              locStartAddr,
                                              LMEM_PCCSAR_LGO_MASK);
            locStartAddr += CACHE_IP_LMEM_LINE_SIZE;
    }

    return locStatus;
}
#endif /* CACHE_IP_LMEM_PC_IS_AVAILABLE */

#endif /* CACHE_IP_ALL_IS_AVAILABLE */

#define MCL_STOP_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

#endif /* #if (CACHE_IP_LMEM_IS_AVAILABLE == STD_ON) */

#endif /* #if (CACHE_IP_IS_AVAILABLE == STD_ON) */

/** @} */

#endif  /* #ifndef CACHE_IP_HWACC_LMEM_H_ */

/*==================================================================================================
 *                                        END OF FILE
==================================================================================================*/
