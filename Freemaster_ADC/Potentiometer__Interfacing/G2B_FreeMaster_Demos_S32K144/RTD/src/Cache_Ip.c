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
*   @file    Cache_Ip.c
*
*   @version 1.0.0
*
*   @brief   AUTOSAR Mcl - Cache Ip driver source file.
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
#include "Cache_Ip.h"
#include "Cache_Ip_Devassert.h"
#include "SchM_Mcl.h"

#if (CACHE_IP_ARMCOREMX_IS_AVAILABLE == STD_ON)
#include "Cache_Ip_HwAcc_ArmCoreMx.h"
#endif /* #if (CACHE_IP_ARMCOREMX_IS_AVAILABLE == STD_ON) */

#if (CACHE_IP_LMEM_IS_AVAILABLE == STD_ON)
#include "Cache_Ip_HwAcc_Lmem.h"
#endif /* #if (CACHE_IP_LMEM_IS_AVAILABLE == STD_ON) */

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CACHE_IP_VENDOR_ID_C                       43
#define CACHE_IP_AR_RELEASE_MAJOR_VERSION_C        4
#define CACHE_IP_AR_RELEASE_MINOR_VERSION_C        4
#define CACHE_IP_AR_RELEASE_REVISION_VERSION_C     0
#define CACHE_IP_SW_MAJOR_VERSION_C                1
#define CACHE_IP_SW_MINOR_VERSION_C                0
#define CACHE_IP_SW_PATCH_VERSION_C                0

#if (CACHE_IP_IS_AVAILABLE == STD_ON)
/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if Cache_Ip.c file and Cache_Ip.h file are of the same vendor */
#if (CACHE_IP_VENDOR_ID_C != CACHE_IP_VENDOR_ID_H)
    #error "Cache_Ip.c and Cache_Ip.h have different vendor ids"
#endif

/* Check if Cache_Ip.c file and Cache_Ip.h file are of the same Autosar version */
#if ((CACHE_IP_AR_RELEASE_MAJOR_VERSION_C != CACHE_IP_AR_RELEASE_MAJOR_VERSION_H) || \
     (CACHE_IP_AR_RELEASE_MINOR_VERSION_C != CACHE_IP_AR_RELEASE_MINOR_VERSION_H) || \
     (CACHE_IP_AR_RELEASE_REVISION_VERSION_C != CACHE_IP_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Cache_Ip.c and Cache_Ip.h are different"
#endif

/* Check if Cache_Ip.c file and Cache_Ip.h file are of the same Software version */
#if ((CACHE_IP_SW_MAJOR_VERSION_C != CACHE_IP_SW_MAJOR_VERSION_H) || \
     (CACHE_IP_SW_MINOR_VERSION_C != CACHE_IP_SW_MINOR_VERSION_H) || \
     (CACHE_IP_SW_PATCH_VERSION_C != CACHE_IP_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Cache_Ip.c and Cache_Ip.h are different"
#endif

/* Check if Cache_Ip.c file and Cache_Ip_Devassert.h file are of the same vendor */
#if (CACHE_IP_VENDOR_ID_C != CACHE_IP_DEVASSERT_VENDOR_ID_H)
    #error "Cache_Ip.c and Cache_Ip_Devassert.h have different vendor ids"
#endif

/* Check if Cache_Ip.c file and Cache_Ip_Devassert.h file are of the same Autosar version */
#if ((CACHE_IP_AR_RELEASE_MAJOR_VERSION_C != CACHE_IP_DEVASSERT_AR_RELEASE_MAJOR_VERSION_H) || \
     (CACHE_IP_AR_RELEASE_MINOR_VERSION_C != CACHE_IP_DEVASSERT_AR_RELEASE_MINOR_VERSION_H) || \
     (CACHE_IP_AR_RELEASE_REVISION_VERSION_C != CACHE_IP_DEVASSERT_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Cache_Ip.c and Cache_Ip_Devassert.h are different"
#endif

/* Check if Cache_Ip.c file and Cache_Ip_Devassert.h file are of the same Software version */
#if ((CACHE_IP_SW_MAJOR_VERSION_C != CACHE_IP_DEVASSERT_SW_MAJOR_VERSION_H) || \
     (CACHE_IP_SW_MINOR_VERSION_C != CACHE_IP_DEVASSERT_SW_MINOR_VERSION_H) || \
     (CACHE_IP_SW_PATCH_VERSION_C != CACHE_IP_DEVASSERT_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Cache_Ip.c and Cache_Ip_Devassert.h are different"
#endif

#if (CACHE_IP_ARMCOREMX_IS_AVAILABLE == STD_ON)
/* Check if Cache_Ip.c file and Cache_Ip_HwAcc_ArmCoreMx.h file are of the same vendor */
#if (CACHE_IP_VENDOR_ID_C != CACHE_IP_HWACC_ARMCOREMX_VENDOR_ID_H)
    #error "Cache_Ip.c and Cache_Ip_HwAcc_ArmCoreMx.h have different vendor ids"
#endif

/* Check if Cache_Ip.c file and Cache_Ip_HwAcc_ArmCoreMx.h file are of the same Autosar version */
#if ((CACHE_IP_AR_RELEASE_MAJOR_VERSION_C != CACHE_IP_HWACC_ARMCOREMX_AR_RELEASE_MAJOR_VERSION_H) || \
     (CACHE_IP_AR_RELEASE_MINOR_VERSION_C != CACHE_IP_HWACC_ARMCOREMX_AR_RELEASE_MINOR_VERSION_H) || \
     (CACHE_IP_AR_RELEASE_REVISION_VERSION_C != CACHE_IP_HWACC_ARMCOREMX_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Cache_Ip.c and Cache_Ip_HwAcc_ArmCoreMx.h are different"
#endif

/* Check if Cache_Ip.c file and Cache_Ip_HwAcc_ArmCoreMx.h file are of the same Software version */
#if ((CACHE_IP_SW_MAJOR_VERSION_C != CACHE_IP_HWACC_ARMCOREMX_SW_MAJOR_VERSION_H) || \
     (CACHE_IP_SW_MINOR_VERSION_C != CACHE_IP_HWACC_ARMCOREMX_SW_MINOR_VERSION_H) || \
     (CACHE_IP_SW_PATCH_VERSION_C != CACHE_IP_HWACC_ARMCOREMX_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Cache_Ip.c and Cache_Ip_HwAcc_ArmCoreMx.h are different"
#endif
#endif /* #if (CACHE_IP_ARMCOREMX_IS_AVAILABLE == STD_ON) */

#if (CACHE_IP_LMEM_IS_AVAILABLE == STD_ON)
/* Check if Cache_Ip.c file and Cache_Ip_HwAcc_Lmem.h file are of the same vendor */
#if (CACHE_IP_VENDOR_ID_C != CACHE_IP_HWACC_LMEM_VENDOR_ID_H)
    #error "Cache_Ip.c and Cache_Ip_HwAcc_Lmem.h have different vendor ids"
#endif

/* Check if Cache_Ip.c file and Cache_Ip_HwAcc_Lmem.h file are of the same Autosar version */
#if ((CACHE_IP_AR_RELEASE_MAJOR_VERSION_C != CACHE_IP_HWACC_LMEM_AR_RELEASE_MAJOR_VERSION_H) || \
     (CACHE_IP_AR_RELEASE_MINOR_VERSION_C != CACHE_IP_HWACC_LMEM_AR_RELEASE_MINOR_VERSION_H) || \
     (CACHE_IP_AR_RELEASE_REVISION_VERSION_C != CACHE_IP_HWACC_LMEM_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Cache_Ip.c and Cache_Ip_HwAcc_Lmem.h are different"
#endif

/* Check if Cache_Ip.c file and Cache_Ip_HwAcc_Lmem.h file are of the same Software version */
#if ((CACHE_IP_SW_MAJOR_VERSION_C != CACHE_IP_HWACC_LMEM_SW_MAJOR_VERSION_H) || \
     (CACHE_IP_SW_MINOR_VERSION_C != CACHE_IP_HWACC_LMEM_SW_MINOR_VERSION_H) || \
     (CACHE_IP_SW_PATCH_VERSION_C != CACHE_IP_HWACC_LMEM_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Cache_Ip.c and Cache_Ip_HwAcc_Lmem.h are different"
#endif
#endif /* #if (CACHE_IP_LMEM_IS_AVAILABLE == STD_ON) */

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if Cache_Ip.c file and SchM_Mcl header file are of the same Autosar version */
#if ((CACHE_IP_AR_RELEASE_MAJOR_VERSION_C != SCHM_MCL_AR_RELEASE_MAJOR_VERSION) || \
     (CACHE_IP_AR_RELEASE_MINOR_VERSION_C != SCHM_MCL_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Cache_Ip.c and SchM_Mcl.h are different"
#endif
#endif


/**
* @page misra_violations MISRA-C:2012 violations
*/

/*==================================================================================================
 *                                       GLOBAL FUNCTIONS
==================================================================================================*/
#define MCL_START_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

/***************************************************************************************************
* @brief        The function enables the specified cache.
*
* @param[in]    CacheType - cache type
***************************************************************************************************/
Std_ReturnType Cache_Ip_Enable(const Cache_Ip_Type CacheType)
{
    Std_ReturnType Status = E_OK;

    /* Enter exclusive area to protect S32_SCB_CCR */
    SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_13();
    switch(CacheType)
    {
        case CACHE_IP_ALL:{
        #if (STD_ON == CACHE_IP_INSTRUCTION_IS_AVAILABLE)
            Cache_Ip_Enable_InstructionCache();
        #endif
        #if (STD_ON == CACHE_IP_DATA_IS_AVAILABLE)
            Cache_Ip_Enable_DataCache();
        #endif
        #if (STD_ON == CACHE_IP_ALL_IS_AVAILABLE)
            #ifdef MCAL_ENABLE_USER_MODE_SUPPORT
                #if (STD_ON == CACHE_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
                    Status = ((Cache_Ip_Enable_AllCache() == 0x00000000U) ? (Std_ReturnType)E_OK : (Std_ReturnType)E_NOT_OK);
                #else
                    Status = Cache_Ip_Enable_AllCache();
                #endif
            #else
                Status = Cache_Ip_Enable_AllCache();
            #endif
        #endif
        break;}
        case CACHE_IP_INSTRUCTION:{
        #if (STD_ON == CACHE_IP_INSTRUCTION_IS_AVAILABLE)
            Cache_Ip_Enable_InstructionCache();
        #else
            CACHE_IP_DEV_ASSERT(FALSE);
        #endif
        break;}
        case CACHE_IP_DATA:{
        #if (STD_ON == CACHE_IP_DATA_IS_AVAILABLE)
            Cache_Ip_Enable_DataCache();
        #else
            CACHE_IP_DEV_ASSERT(FALSE);
        #endif
        break;}
        default:{
            CACHE_IP_DEV_ASSERT(FALSE);
        break;}
    }
    /* Exit exclusive area to protect S32_SCB_CCR */
    SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_13();

    return Status;
}

/***************************************************************************************************
* @brief        The function disables the specified cache.
*
* @param[in]    CacheType - cache type
***************************************************************************************************/
Std_ReturnType Cache_Ip_Disable(const Cache_Ip_Type CacheType)
{
    Std_ReturnType Status = E_OK;

    /* Enter exclusive area to protect S32_SCB_CCR */
    SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_14();
    switch(CacheType)
    {
        case CACHE_IP_ALL:{
        #if (STD_ON == CACHE_IP_INSTRUCTION_IS_AVAILABLE)
            Cache_Ip_Disable_InstructionCache();
        #endif
        #if (STD_ON == CACHE_IP_DATA_IS_AVAILABLE)
            Cache_Ip_Disable_DataCache();
        #endif
        #if (STD_ON == CACHE_IP_ALL_IS_AVAILABLE)
            #ifdef MCAL_ENABLE_USER_MODE_SUPPORT
                #if (STD_ON == CACHE_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
                    Status = ((Cache_Ip_Disable_AllCache() == 0x00000000U) ? (Std_ReturnType)E_OK : (Std_ReturnType)E_NOT_OK);
                #else
                    Status = Cache_Ip_Disable_AllCache();
                #endif
            #else
                Status = Cache_Ip_Disable_AllCache();
            #endif
        #endif
        break;}
        case CACHE_IP_INSTRUCTION:{
        #if (STD_ON == CACHE_IP_INSTRUCTION_IS_AVAILABLE)
            Cache_Ip_Disable_InstructionCache();
        #else
            CACHE_IP_DEV_ASSERT(FALSE);
        #endif
        break;}
        case CACHE_IP_DATA:{
        #if (STD_ON == CACHE_IP_DATA_IS_AVAILABLE)
            Cache_Ip_Disable_DataCache();
        #else
            CACHE_IP_DEV_ASSERT(FALSE);
        #endif
        break;}
        default:{
            CACHE_IP_DEV_ASSERT(FALSE);
        break;}
    }
    /* Exit exclusive area to protect S32_SCB_CCR */
    SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_14();

    return Status;
}

/***************************************************************************************************
* @brief        The function invalidates the specified cache.
* @details      The cache is invalidated by using set and way.
*
* @param[in]    CacheType - cache type
***************************************************************************************************/
Std_ReturnType Cache_Ip_Invalidate(const Cache_Ip_Type CacheType)
{
    Std_ReturnType Status = E_OK;
    
    /* Enter exclusive area to protect S32_SCB_CSSELR, S32_SCB_ICIALLU */
    SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_15();
    switch(CacheType)
    {
        case CACHE_IP_ALL:{
        #if (STD_ON == CACHE_IP_INSTRUCTION_IS_AVAILABLE)
            Cache_Ip_Invalidate_InstructionCache();
        #endif
        #if (STD_ON == CACHE_IP_DATA_IS_AVAILABLE)
            Cache_Ip_Invalidate_DataCache();
        #endif
        #if (STD_ON == CACHE_IP_ALL_IS_AVAILABLE)
            #ifdef MCAL_ENABLE_USER_MODE_SUPPORT
                #if (STD_ON == CACHE_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
                    Status = ((Cache_Ip_Invalidate_AllCache() == 0x00000000U) ? (Std_ReturnType)E_OK : (Std_ReturnType)E_NOT_OK);
                #else
                    Status = Cache_Ip_Invalidate_AllCache();
                #endif
            #else
                Status = Cache_Ip_Invalidate_AllCache();
            #endif
        #endif
        break;}
        case CACHE_IP_INSTRUCTION:{
        #if (STD_ON == CACHE_IP_INSTRUCTION_IS_AVAILABLE)
            Cache_Ip_Invalidate_InstructionCache();
        #else
            CACHE_IP_DEV_ASSERT(FALSE);
        #endif
        break;}
        case CACHE_IP_DATA:{
        #if (STD_ON == CACHE_IP_DATA_IS_AVAILABLE)
            Cache_Ip_Invalidate_DataCache();
        #else
            CACHE_IP_DEV_ASSERT(FALSE);
        #endif
        break;}
        default:{
            CACHE_IP_DEV_ASSERT(FALSE);
        break;}
    }
    /* Exit exclusive area to protect S32_SCB_CSSELR, S32_SCB_ICIALLU */
    SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_15();

    return Status;
}

/***************************************************************************************************
* @brief        The function cleans the specified cache.
* @details      The cache is cleaned by using set and way.
*
* @param[in]    CacheType - cache type
* @param[in]    EnInvalidate - enable invalidation
***************************************************************************************************/
Std_ReturnType Cache_Ip_Clean(const Cache_Ip_Type CacheType, const boolean EnInvalidate)
{
    Std_ReturnType Status = E_OK;
    
    /* Enter exclusive area to protect S32_SCB_CSSELR, S32_SCB_ICIALLU */
    SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_16();
    switch(CacheType)
    {
        case CACHE_IP_ALL:{
        #if (STD_ON == CACHE_IP_INSTRUCTION_IS_AVAILABLE)
            Cache_Ip_Clean_InstructionCache(EnInvalidate);
        #endif
        #if (STD_ON == CACHE_IP_DATA_IS_AVAILABLE)
            Cache_Ip_Clean_DataCache(EnInvalidate);
        #endif
        #if (STD_ON == CACHE_IP_ALL_IS_AVAILABLE)
            #ifdef MCAL_ENABLE_USER_MODE_SUPPORT
                #if (STD_ON == CACHE_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
                    Status = ((Cache_Ip_Clean_AllCache(EnInvalidate) == 0x00000000U) ? (Std_ReturnType)E_OK : (Std_ReturnType)E_NOT_OK);
                #else
                    Status = Cache_Ip_Clean_AllCache(EnInvalidate);
                #endif
            #else
                Status = Cache_Ip_Clean_AllCache(EnInvalidate);
            #endif
        #endif
        break;}
        case CACHE_IP_INSTRUCTION:{
        #if (STD_ON == CACHE_IP_INSTRUCTION_IS_AVAILABLE)
            Cache_Ip_Clean_InstructionCache(EnInvalidate);
        #else
            CACHE_IP_DEV_ASSERT(FALSE);
        #endif
        break;}
        case CACHE_IP_DATA:{
        #if (STD_ON == CACHE_IP_DATA_IS_AVAILABLE)
            Cache_Ip_Clean_DataCache(EnInvalidate);
        #else
            CACHE_IP_DEV_ASSERT(FALSE);
        #endif
        break;}
        default:{
            CACHE_IP_DEV_ASSERT(FALSE);
        break;}
    }
    /* Exit exclusive area to protect S32_SCB_CSSELR, S32_SCB_ICIALLU */
    SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_16();
    
    return Status;
}

/***************************************************************************************************
* @brief        The function invalidates by address the specified cache.
*
* @param[in]    CacheType - cache type
* @param[in]    Addr - start address to be invalidated
* @param[in]    Length - address space Length to be invalidated
***************************************************************************************************/
Std_ReturnType Cache_Ip_InvalidateByAddr(const Cache_Ip_Type CacheType, const uint32 Addr, const uint32 Length)
{
    Std_ReturnType Status = E_OK;
    
    /* Enter exclusive area to protect S32_SCB_CSSELR, S32_SCB_ICIMVAU */
    SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_17();
    switch(CacheType)
    {
        case CACHE_IP_ALL:{
        #if (STD_ON == CACHE_IP_INSTRUCTION_IS_AVAILABLE)
            Cache_Ip_Invalidate_InstructionCacheByAddr(Addr, Length);
        #endif
        #if (STD_ON == CACHE_IP_DATA_IS_AVAILABLE)
            Cache_Ip_Invalidate_DataCacheByAddr(Addr, Length);
        #endif
        #if (STD_ON == CACHE_IP_ALL_IS_AVAILABLE)
            #ifdef MCAL_ENABLE_USER_MODE_SUPPORT
                #if (STD_ON == CACHE_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
                    Status = ((Cache_Ip_Invalidate_AllCacheByAddr(Addr, Length) == 0x00000000U) ? (Std_ReturnType)E_OK : (Std_ReturnType)E_NOT_OK);
                #else
                    Status = Cache_Ip_Invalidate_AllCacheByAddr(Addr, Length);
                #endif
            #else
                Status = Cache_Ip_Invalidate_AllCacheByAddr(Addr, Length);
            #endif
        #endif

        break;}
        case CACHE_IP_INSTRUCTION:{
        #if (STD_ON == CACHE_IP_INSTRUCTION_IS_AVAILABLE)
            Cache_Ip_Invalidate_InstructionCacheByAddr(Addr, Length);
        #else
            CACHE_IP_DEV_ASSERT(FALSE);
        #endif
        break;}
        case CACHE_IP_DATA:{
        #if (STD_ON == CACHE_IP_DATA_IS_AVAILABLE)
            Cache_Ip_Invalidate_DataCacheByAddr(Addr, Length);
        #else
            CACHE_IP_DEV_ASSERT(FALSE);
        #endif
        break;}
        default:{
            CACHE_IP_DEV_ASSERT(FALSE);
        break;}
    }
    /* Exit exclusive area to protect S32_SCB_CSSELR, S32_SCB_ICIMVAU */
    SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_17();
    
    return Status;
}

/***************************************************************************************************
* @brief        The function cleans by address the specified cache.
*
* @param[in]    CacheType - cache type
* @param[in]    EnInvalidate - enable invalidation
* @param[in]    Addr - start address to be cleaned
* @param[in]    Length - address space Length to be cleaned
***************************************************************************************************/
Std_ReturnType Cache_Ip_CleanByAddr(const Cache_Ip_Type CacheType, const boolean EnInvalidate, const uint32 Addr, const uint32 Length)
{
    Std_ReturnType Status = E_OK;
    
    /* Enter exclusive area to protect S32_SCB_CSSELR, S32_SCB_ICIMVAU */
    SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_18();
    switch(CacheType)
    {
        case CACHE_IP_ALL:{
        #if (STD_ON == CACHE_IP_INSTRUCTION_IS_AVAILABLE)
            Cache_Ip_Clean_InstructionCacheByAddr(EnInvalidate, Addr, Length);
        #endif
        #if (STD_ON == CACHE_IP_DATA_IS_AVAILABLE)
            Cache_Ip_Clean_DataCacheByAddr(EnInvalidate, Addr, Length);
        #endif
        #if (STD_ON == CACHE_IP_ALL_IS_AVAILABLE)
            #ifdef MCAL_ENABLE_USER_MODE_SUPPORT
                #if (STD_ON == CACHE_IP_USER_MODE_SUPPORT_IS_AVAILABLE)
                    Status = ((Cache_Ip_Clean_AllCacheByAddr(EnInvalidate, Addr, Length) == 0x00000000U) ? (Std_ReturnType)E_OK : (Std_ReturnType)E_NOT_OK);
                #else
                    Status = Cache_Ip_Clean_AllCacheByAddr(EnInvalidate, Addr, Length);
                #endif
            #else
                Status = Cache_Ip_Clean_AllCacheByAddr(EnInvalidate, Addr, Length);
            #endif
        #endif
        break;}
        case CACHE_IP_INSTRUCTION:{
        #if (STD_ON == CACHE_IP_INSTRUCTION_IS_AVAILABLE)
            Cache_Ip_Clean_InstructionCacheByAddr(EnInvalidate, Addr, Length);
        #else
            CACHE_IP_DEV_ASSERT(FALSE);
        #endif
        break;}
        case CACHE_IP_DATA:{
        #if (STD_ON == CACHE_IP_DATA_IS_AVAILABLE)
            Cache_Ip_Clean_DataCacheByAddr(EnInvalidate, Addr, Length);
        #else
            CACHE_IP_DEV_ASSERT(FALSE);
        #endif
        break;}
        default:{
            CACHE_IP_DEV_ASSERT(FALSE);
        break;}
    }
    /* Exit exclusive area to protect S32_SCB_CSSELR, S32_SCB_ICIMVAU */
    SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_18();
    
    return Status;
}

#define MCL_STOP_SEC_CODE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

#endif /* #if (CACHE_IP_IS_AVAILABLE == STD_ON) */

/** @} */

/*==================================================================================================
 *                                        END OF FILE
==================================================================================================*/
