/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : PORT_CI
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
*   @file    Port_Ci_Port_Ip.c
*
*   @addtogroup Port_IPL
*   @{
*/


#ifdef __cplusplus
extern "C" {
#endif

/*=================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
=================================================================================================*/
#include "Port_Ci_Port_Ip.h"
#ifdef PORT_ENABLE_USER_MODE_SUPPORT
   #define USER_MODE_REG_PROT_ENABLED   (PORT_ENABLE_USER_MODE_SUPPORT)
   #include "RegLockMacros.h"
   #include "OsIf_Internal.h"
#endif
#include "SchM_Port.h"

/*=================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/**
* @brief        Parameters that shall be published within the Port driver header file and also in the
*               module description file
* @details      The integration of incompatible files shall be avoided.
*
*/
#define PORT_CI_PORT_IP_VENDOR_ID_C                    43
#define PORT_CI_PORT_IP_AR_RELEASE_MAJOR_VERSION_C     4
#define PORT_CI_PORT_IP_AR_RELEASE_MINOR_VERSION_C     4
#define PORT_CI_PORT_IP_AR_RELEASE_REVISION_VERSION_C  0
#define PORT_CI_PORT_IP_SW_MAJOR_VERSION_C             1
#define PORT_CI_PORT_IP_SW_MINOR_VERSION_C             0
#define PORT_CI_PORT_IP_SW_PATCH_VERSION_C             0

/*=================================================================================================
*                                      FILE VERSION CHECKS
=================================================================================================*/
/* Check if the files Port_Ci_Port_Ip.c and Port_Ci_Port_Ip.h are of the same vendor */
#if (PORT_CI_PORT_IP_VENDOR_ID_C != PORT_CI_PORT_IP_VENDOR_ID_H)
    #error "Port_Ci_Port_Ip.c and Port_Ci_Port_Ip.h have different vendor ids"
#endif
/* Check if the files Port_Ci_Port_Ip.c and Port_Ci_Port_Ip.h are of the same Autosar version */
#if ((PORT_CI_PORT_IP_AR_RELEASE_MAJOR_VERSION_C    != PORT_CI_PORT_IP_AR_RELEASE_MAJOR_VERSION_H)  || \
     (PORT_CI_PORT_IP_AR_RELEASE_MINOR_VERSION_C    != PORT_CI_PORT_IP_AR_RELEASE_MINOR_VERSION_H)  || \
     (PORT_CI_PORT_IP_AR_RELEASE_REVISION_VERSION_C != PORT_CI_PORT_IP_AR_RELEASE_REVISION_VERSION_H)  \
    )
    #error "AutoSar Version Numbers of Port_Ci_Port_Ip.c and Port_Ci_Port_Ip.h are different"
#endif
/* Check if the files Port_Ci_Port_Ip.c and Port_Ci_Port_Ip.h are of the same software version */
#if ((PORT_CI_PORT_IP_SW_MAJOR_VERSION_C != PORT_CI_PORT_IP_SW_MAJOR_VERSION_H) || \
     (PORT_CI_PORT_IP_SW_MINOR_VERSION_C != PORT_CI_PORT_IP_SW_MINOR_VERSION_H) || \
     (PORT_CI_PORT_IP_SW_PATCH_VERSION_C != PORT_CI_PORT_IP_SW_PATCH_VERSION_H)    \
    )
    #error "Software Version Numbers of Port_Ci_Port_Ip.c and Port_Ci_Port_Ip.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    #ifdef PORT_ENABLE_USER_MODE_SUPPORT
        /* Check if the files Port_Ci_Port_Ip.c and RegLockMacros.h are of the same version */
        #if ((PORT_CI_PORT_IP_AR_RELEASE_MAJOR_VERSION_C != REGLOCKMACROS_AR_RELEASE_MAJOR_VERSION) || \
            (PORT_CI_PORT_IP_AR_RELEASE_MINOR_VERSION_C  != REGLOCKMACROS_AR_RELEASE_MINOR_VERSION)   \
            )
            #error "AutoSar Version Numbers of Port_Ci_Port_Ip.c and RegLockMacros.h are different"
        #endif

        /* Check if the files Port_Ci_Port_Ip.c and OsIf_Internal.h are of the same version */
        #if ((PORT_CI_PORT_IP_AR_RELEASE_MAJOR_VERSION_C != OSIF_INTERNAL_AR_RELEASE_MAJOR_VERSION) || \
            (PORT_CI_PORT_IP_AR_RELEASE_MINOR_VERSION_C  != OSIF_INTERNAL_AR_RELEASE_MINOR_VERSION)   \
            )
            #error "AutoSar Version Numbers of Port_Ci_Port_Ip.c and OsIf_Internal.h are different"
        #endif
    #endif
    /* Check if the files Port_Ci_Port_Ip.c and SchM_Port.h are of the same version */
    #if ((PORT_CI_PORT_IP_AR_RELEASE_MAJOR_VERSION_C != SCHM_PORT_AR_RELEASE_MAJOR_VERSION) || \
        (PORT_CI_PORT_IP_AR_RELEASE_MINOR_VERSION_C  != SCHM_PORT_AR_RELEASE_MINOR_VERSION)   \
        )
        #error "AutoSar Version Numbers of Port_Ci_Port_Ip.c and SchM_Port.h are different"
    #endif
#endif
/*=================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
=================================================================================================*/

/*=================================================================================================
*                                       LOCAL MACROS
=================================================================================================*/

/*=================================================================================================
*                                      LOCAL CONSTANTS
=================================================================================================*/

/*=================================================================================================
*                                      LOCAL VARIABLES
=================================================================================================*/

/*=================================================================================================
*                                      GLOBAL CONSTANTS
=================================================================================================*/

/*=================================================================================================
                                       GLOBAL VARIABLES
=================================================================================================*/
#define PORT_START_SEC_CONST_32
#include "Port_MemMap.h"

/**
* @brief Base address array for PORT instances
*/
PORT_Type * Port_au32PortCiPortBaseAddr[5] = IP_PORT_BASE_PTRS;

/**
* @brief Base address array for GPIO instances
*/
GPIO_Type * Port_au32PortCiGpioBaseAddr[5] = IP_GPIO_BASE_PTRS;

#define PORT_STOP_SEC_CONST_32
#include "Port_MemMap.h"
/*=================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
=================================================================================================*/
#define PORT_START_SEC_CODE
#include "Port_MemMap.h"
/*!
 * @brief Initializes the pins with the given configuration structure
 *
 * This function configures the pins with the options provided in the
 * given structure.
 *
 * @param[in] pinNumber the number of configured pins in structure
 * @param[in] config the configuration structure
  */
static void Port_Ci_Port_Ip_PinInit(const Port_Ci_Port_Ip_PinSettingsConfig * config);

/*==================================================================================================
*                                         LOCAL FUNCTIONS
==================================================================================================*/
/*FUNCTION**********************************************************************
 *
 * Function Name : PINS_Init
 * Description   : This function configures the pin feature with the options
 * provided in the given structure.
 *
 ******************************************************************************/
static void Port_Ci_Port_Ip_PinInit(const Port_Ci_Port_Ip_PinSettingsConfig * config)
{
    uint32 pinsValues = 0U;
    uint32 digitalFilters;

    PORT_CI_PORT_DEV_ASSERT((boolean)(config != NULL_PTR));
    PORT_CI_PORT_DEV_ASSERT((boolean)(config->pinPortIdx < 32));
    PORT_CI_PORT_DEV_ASSERT((boolean)((config->portBase->PCR[config->pinPortIdx]) & PORT_PCR_LK_MASK) == 0);

    if (config->pullConfig != PORT_INTERNAL_PULL_NOT_ENABLED)
    {
        pinsValues |= PORT_PCR_PE(1);
        pinsValues |= PORT_PCR_PS(config->pullConfig);
    }
#ifdef FEATURE_PORT_CI_PORT_IP_HAS_DRIVE_STRENGTH
    pinsValues |= PORT_PCR_DSE(config->driveStrength);
#endif /* FEATURE_PORT_CI_PORT_IP_HAS_DRIVE_STRENGTH */
#ifdef FEATURE_PORT_CI_PORT_IP_HAS_LOCK_REGISTER
    pinsValues |= PORT_PCR_LK(config->lockRegister);
#endif /* FEATURE_PORT_CI_PORT_IP_HAS_LOCK_REGISTER */
    pinsValues |= PORT_PCR_PFE(config->passiveFilter?1U:0U);
    pinsValues |= PORT_PCR_MUX(config->mux);

    /* Enter critical region */
    SchM_Enter_Port_PORT_EXCLUSIVE_AREA_01();

    /* Read current digital filter of port */
    digitalFilters = (uint32)(config->portBase->DFER);
    digitalFilters &= ~(1UL << (config->pinPortIdx));
    digitalFilters |= (((uint32)(config->digitalFilter?1U:0U)) << (config->pinPortIdx));
    /* Write to digital filter enable register */
    config->portBase->DFER = digitalFilters;

    /* Configure initial value for GPIO pin in GPIO mux */
    if (PORT_MUX_AS_GPIO == config->mux)
    {
        /* Check if the direction of the pin is OUTPUT. In this case the driver needs to set the output level too */
        if (PORT_CI_PORT_PIN_OUT == config->direction)
        {
            if ((uint8)1 == config->initValue)
            {
                config->gpioBase->PSOR |= ((uint32)1 << (config->pinPortIdx));
            }
            else if ((uint8)0 == config->initValue)
            {
                config->gpioBase->PCOR |= ((uint32)1 << (config->pinPortIdx));
            }
            else
            {
                /* No action to be done */
            }
            /* Set the pin direction as output in the PDDR register of GPIO IP */
            config->gpioBase->PDDR |= (uint32)1 << (config->pinPortIdx);
        }
        /* The direction of pin is INPUT or HIGH Z */
        else
        {
            /* Clear the pin direction as input in the PDDR register of GPIO IP */
            config->gpioBase->PDDR &= ~((uint32)1 << (config->pinPortIdx));
#ifndef FEATURE_PORT_CI_PORT_IP_S32K11X_DERIVATIVE
            /* Check if the pin is HIGH_Z. In this case the driver needs to disable port input in PIDR register of GPIO IP*/
            if (PORT_CI_PORT_PIN_HIGH_Z == config->direction)
            {
                config->gpioBase->PIDR |= ((uint32)1 << (config->pinPortIdx));
            }
#endif
        }
    }

    /* Exit critical region */
    SchM_Exit_Port_PORT_EXCLUSIVE_AREA_01();

    /* Write to Multiplexed Signal Configuration Register */
    config->portBase->PCR[config->pinPortIdx] = pinsValues;
}

/*==================================================================================================
*                                        GLOBAL FUNCTIONS
==================================================================================================*/

/*FUNCTION**********************************************************************
 *
 * Function Name : Port_Ci_Port_Ip_ReadPCR
 * Description   : This function supports to read value of the pin control register.
 *
 ******************************************************************************/
uint32 Port_Ci_Port_Ip_ReadPCR(const PORT_Type * base, uint32 MscrInstance)
{
    PORT_CI_PORT_DEV_ASSERT((boolean)(MscrInstance < 32));

    return base->PCR[MscrInstance];
}

/*FUNCTION**********************************************************************
 *
 * Function Name : Port_Ci_Port_Ip_SetPCR
 * Description   : This function supports to write value of the pin control register.
 *
 ******************************************************************************/
void Port_Ci_Port_Ip_SetPCR(PORT_Type * base, uint32 MscrInstance, uint32 value)
{
    PORT_CI_PORT_DEV_ASSERT((boolean)(MscrInstance < 32));
    PORT_CI_PORT_DEV_ASSERT((boolean)((base->PCR[MscrInstance]) & PORT_PCR_LK_MASK) == 0);

    base->PCR[MscrInstance] = value;
}

/*FUNCTION**********************************************************************
 *
 * Function Name : Port_Ci_Port_Ip_SetPSOR
 * Description   : This function supports to write value on the port set output register.
 *
 ******************************************************************************/
void Port_Ci_Port_Ip_SetPSOR(GPIO_Type * base, uint32 Pin)
{
    base->PSOR = (Pin);
}

/*FUNCTION**********************************************************************
 *
 * Function Name : Port_Ci_Port_Ip_SetPCOR
 * Description   : This function supports to write value on the port clear output register.
 *
 ******************************************************************************/
void Port_Ci_Port_Ip_SetPCOR(GPIO_Type * base, uint32 Pin)
{
    base->PCOR = (Pin);
}

/*FUNCTION**********************************************************************
 *
 * Function Name : Port_Ci_Port_Ip_SetPDDR
 * Description   : This function supports to set value on the port data direction register.
 *
 ******************************************************************************/
void Port_Ci_Port_Ip_SetPDDR(GPIO_Type * base, uint32 Pin)
{
    SchM_Enter_Port_PORT_EXCLUSIVE_AREA_02();
    base->PDDR |= (Pin);
    SchM_Exit_Port_PORT_EXCLUSIVE_AREA_02();
}

/*FUNCTION**********************************************************************
 *
 * Function Name : Port_Ci_Port_Ip_SetPDDR
 * Description   : This function supports to clear value on the port data direction register.
 *
 ******************************************************************************/
void Port_Ci_Port_Ip_ClearPDDR(GPIO_Type * base, uint32 Pin)
{
    SchM_Enter_Port_PORT_EXCLUSIVE_AREA_03();
    base->PDDR &= ~(Pin);
    SchM_Exit_Port_PORT_EXCLUSIVE_AREA_03();
}

#ifndef FEATURE_PORT_CI_PORT_IP_S32K11X_DERIVATIVE
/*FUNCTION**********************************************************************
 *
 * Function Name : Port_Ci_Port_Ip_SetPIDR
 * Description   : This function supports to set value on the port input disable register.
 *
 ******************************************************************************/
void Port_Ci_Port_Ip_SetPIDR(GPIO_Type * base, uint32 Pin)
{
    SchM_Enter_Port_PORT_EXCLUSIVE_AREA_04();
    base->PIDR |= (Pin);
    SchM_Exit_Port_PORT_EXCLUSIVE_AREA_04();
}
#endif

/*FUNCTION**********************************************************************
 *
 * Function Name : Port_Ci_Port_Ip_SetDFER
 * Description   : This function supports to set value on the digital filter enable register.
 *
 ******************************************************************************/
void Port_Ci_Port_Ip_SetDFER(PORT_Type * base, uint32 pinMask)
{
    SchM_Enter_Port_PORT_EXCLUSIVE_AREA_05();
    base->DFER |= pinMask;
    SchM_Exit_Port_PORT_EXCLUSIVE_AREA_05();
}

/*FUNCTION**********************************************************************
 *
 * Function Name : Port_Ci_Port_Ip_Init
 * Description   : This function configures the pins with the options provided
 * in the given structure.
 *
 * @implements Port_Ci_Port_Ip_Init_Activity
 ******************************************************************************/
Port_Ci_Port_Ip_PortStatusType Port_Ci_Port_Ip_Init(uint32 pinCount,
                                       const Port_Ci_Port_Ip_PinSettingsConfig config[])
{
    uint32 i;

    for (i = 0U; i < pinCount; i++)
    {
        Port_Ci_Port_Ip_PinInit(&config[i]);
    }

    return PORT_CI_PORT_SUCCESS;
}

/*FUNCTION**********************************************************************
 *
 * Function Name : Port_Ci_Port_Ip_SetMuxModeSel
 * Description   : This function configures the pin muxing.
 *
 * @implements Port_Ci_Port_Ip_SetMuxModeSel_Activity
 ******************************************************************************/
void Port_Ci_Port_Ip_SetMuxModeSel(PORT_Type * const base,
                                   uint32 pin,
                                   Port_Ci_Port_Ip_PortMux mux)
{
    PORT_CI_PORT_DEV_ASSERT((boolean)(pin < PORT_PCR_COUNT));
    PORT_CI_PORT_DEV_ASSERT((boolean)((base->PCR[pin]) & PORT_PCR_LK_MASK) == 0);
    SchM_Enter_Port_PORT_EXCLUSIVE_AREA_06();
    uint32 regValue = base->PCR[pin];
    regValue &= ~(PORT_PCR_MUX_MASK);
    regValue |= PORT_PCR_MUX(mux);
    base->PCR[pin] = regValue;
    SchM_Exit_Port_PORT_EXCLUSIVE_AREA_06();
}

/*FUNCTION**********************************************************************
 *
 * Function Name : Port_Ci_Port_Ip_EnableDigitalFilter
 * Description   : This function enables digital filter feature for digital pin muxing.
 *
 * @implements Port_Ci_Port_Ip_EnableDigitalFilter_Activity
 ******************************************************************************/
void Port_Ci_Port_Ip_EnableDigitalFilter(PORT_Type * const base,
                                         uint32 pin)
{
    PORT_CI_PORT_DEV_ASSERT((boolean)(pin < PORT_PCR_COUNT));
    SchM_Enter_Port_PORT_EXCLUSIVE_AREA_07();
    base->DFER |= ((uint32)1U << pin);
    SchM_Exit_Port_PORT_EXCLUSIVE_AREA_07();
}

/*FUNCTION**********************************************************************
 *
 * Function Name : Port_Ci_Port_Ip_DisableDigitalFilter
 * Description   : This function disables digital filter feature for digital
 * pin muxing.
 *
 * @implements Port_Ci_Port_Ip_DisableDigitalFilter_Activity
 ******************************************************************************/
void Port_Ci_Port_Ip_DisableDigitalFilter(PORT_Type * const base,
                                          uint32 pin)
{
    PORT_CI_PORT_DEV_ASSERT((boolean)(pin < PORT_PCR_COUNT));
    SchM_Enter_Port_PORT_EXCLUSIVE_AREA_08();
    base->DFER &= ~((uint32)1U << pin);
    SchM_Exit_Port_PORT_EXCLUSIVE_AREA_08();
}

/*FUNCTION**********************************************************************
 *
 * Function Name : Port_Ci_Port_Ip_ConfigDigitalFilter
 * Description   : This function configures digital filter for port with
 * given configuration.
 *
 * @implements Port_Ci_Port_Ip_ConfigDigitalFilter_Activity
 ******************************************************************************/
void Port_Ci_Port_Ip_ConfigDigitalFilter(PORT_Type * const base,
                                         const Port_Ci_Port_Ip_DigitalFilterConfigType * config)
{
    PORT_CI_PORT_DEV_ASSERT((boolean)(config->u8Width <= PORT_DFWR_FILT_MASK));
    base->DFCR = PORT_DFCR_CS(config->u8Clock);
    base->DFWR = PORT_DFWR_FILT(config->u8Width);
}

/*FUNCTION**********************************************************************
 *
 * Function Name : Port_Ci_Port_Ip_SetGlobalPinControl
 * Description   : This function quickly configures multiple pins within the one port for
 * the same peripheral function with the same pin configuration. Supports up to 16 pins with
 * the lower or upper half of pin registers at the same port.
 *
 * @implements Port_Ci_Port_Ip_SetGlobalPinControl_Activity
 ******************************************************************************/
void Port_Ci_Port_Ip_SetGlobalPinControl(PORT_Type * const base,
                                         uint16 pins,
                                         uint16 value,
                                         Port_Ci_Port_Ip_PortGlobalControlPins halfPort)
{
    uint16 mask = 0;
    mask |= PORT_PCR_PS_MASK;
    mask |= PORT_PCR_PE_MASK;
    mask |= PORT_PCR_PFE_MASK;
    mask |= PORT_PCR_DSE_MASK;
    mask |= PORT_PCR_MUX_MASK;
    mask |= PORT_PCR_LK_MASK;
    mask &= value;

    switch (halfPort)
    {
        case PORT_GLOBAL_CONTROL_LOWER_HALF_PINS:
            base->GPCLR = (((uint32)pins) << PORT_GPCLR_GPWE_SHIFT) | (uint32)mask;
            break;
        case PORT_GLOBAL_CONTROL_UPPER_HALF_PINS:
            base->GPCHR = (((uint32)pins) << PORT_GPCLR_GPWE_SHIFT) | (uint32)mask;
            break;
        default:
            /* nothing to configure */
            PORT_CI_PORT_DEV_ASSERT((boolean)FALSE);
            break;
    }
}

#define PORT_STOP_SEC_CODE
#include "Port_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
