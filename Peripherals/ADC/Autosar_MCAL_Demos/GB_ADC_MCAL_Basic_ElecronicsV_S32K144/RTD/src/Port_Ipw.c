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
*   @file    Port_Ipw.c
*   @internal
*   @addtogroup Port_IPW
*   @{
*/


#ifdef __cplusplus
extern "C"{
#endif


/*=================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
=================================================================================================*/
#include "Port_Ipw.h"
#include "Port.h"
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
#define PORT_VENDOR_ID_IPW_C                    43
#define PORT_AR_RELEASE_MAJOR_VERSION_IPW_C     4
#define PORT_AR_RELEASE_MINOR_VERSION_IPW_C     4
#define PORT_AR_RELEASE_REVISION_VERSION_IPW_C  0
#define PORT_SW_MAJOR_VERSION_IPW_C             1
#define PORT_SW_MINOR_VERSION_IPW_C             0
#define PORT_SW_PATCH_VERSION_IPW_C             0

/*=================================================================================================
*                                      FILE VERSION CHECKS
=================================================================================================*/
/* Check if the files Port_Ipw.c and Port_Ipw.h are of the same vendor */
#if (PORT_VENDOR_ID_IPW_C != PORT_VENDOR_ID_IPW_H)
    #error "Port_Ipw.c and Port_Ipw.h have different vendor ids"
#endif
/* Check if the files Port_Ipw.c and Port_Ipw.h are of the same Autosar version */
#if ((PORT_AR_RELEASE_MAJOR_VERSION_IPW_C    != PORT_AR_RELEASE_MAJOR_VERSION_IPW_H)  || \
     (PORT_AR_RELEASE_MINOR_VERSION_IPW_C    != PORT_AR_RELEASE_MINOR_VERSION_IPW_H)  || \
     (PORT_AR_RELEASE_REVISION_VERSION_IPW_C != PORT_AR_RELEASE_REVISION_VERSION_IPW_H)  \
    )
    #error "AutoSar Version Numbers of Port_Ipw.c and Port_Ipw.h are different"
#endif
/* Check if the files Port_Ipw.c and Port_Ipw.h are of the same software version */
#if ((PORT_SW_MAJOR_VERSION_IPW_C != PORT_SW_MAJOR_VERSION_IPW_H) || \
     (PORT_SW_MINOR_VERSION_IPW_C != PORT_SW_MINOR_VERSION_IPW_H) || \
     (PORT_SW_PATCH_VERSION_IPW_C != PORT_SW_PATCH_VERSION_IPW_H)    \
    )
    #error "Software Version Numbers of Port_Ipw.c and Port_Ipw.h are different"
#endif

/* Check if the files Port_Ipw.c and Port.h are of the same vendor */
#if (PORT_VENDOR_ID_IPW_C != PORT_VENDOR_ID_H)
    #error "Port_Ipw.c and Port.h have different vendor ids"
#endif
/* Check if the files Port_Ipw.c and Port.h are of the same Autosar version */
#if ((PORT_AR_RELEASE_MAJOR_VERSION_IPW_C    != PORT_AR_RELEASE_MAJOR_VERSION_H)  || \
     (PORT_AR_RELEASE_MINOR_VERSION_IPW_C    != PORT_AR_RELEASE_MINOR_VERSION_H)  || \
     (PORT_AR_RELEASE_REVISION_VERSION_IPW_C != PORT_AR_RELEASE_REVISION_VERSION_H)  \
    )
    #error "AutoSar Version Numbers of Port_Ipw.c and Port.h are different"
#endif
/* Check if the files Port_Ipw.c and Port.h are of the same software version */
#if ((PORT_SW_MAJOR_VERSION_IPW_C != PORT_SW_MAJOR_VERSION_H) || \
     (PORT_SW_MINOR_VERSION_IPW_C != PORT_SW_MINOR_VERSION_H) || \
     (PORT_SW_PATCH_VERSION_IPW_C != PORT_SW_PATCH_VERSION_H)    \
    )
    #error "Software Version Numbers of Port_Ipw.c and Port.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if the files Port_Ipw.c and SchM_Port.h are of the same version */
    #if ((PORT_AR_RELEASE_MAJOR_VERSION_IPW_C != SCHM_PORT_AR_RELEASE_MAJOR_VERSION) || \
         (PORT_AR_RELEASE_MINOR_VERSION_IPW_C != SCHM_PORT_AR_RELEASE_MINOR_VERSION)    \
        )
        #error "AutoSar Version Numbers of Port_Ipw.c and SchM_Port.h are different"
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

#define PORT_START_SEC_VAR_CLEARED_16
#include "Port_MemMap.h"

#if (STD_ON == PORT_DEV_ERROR_DETECT)
#if ((STD_ON == PORT_SET_PIN_DIRECTION_API) || (STD_ON == PORT_SET_PIN_MODE_API) ||         \
     (defined(PORT_SET_2_PINS_DIRECTION_API) && (STD_ON == PORT_SET_2_PINS_DIRECTION_API))  \
    )
/**
* @brief Segment descriptor for data arranged in array
* @detail Port_Ipw_au16GpioDirChangeability variable is only used by Port_Ipw_SetPinDirection and Port_Ipw_SetPinMode
*         functions
*/
static uint16 Port_Ipw_au16GpioDirChangeability[PAD_16BLOCK_NO_U8];
#endif /* ((STD_ON == PORT_SET_PIN_DIRECTION_API) || (STD_ON == PORT_SET_PIN_MODE_API) ||         \
           (defined(PORT_SET_2_PINS_DIRECTION_API) && (STD_ON == PORT_SET_2_PINS_DIRECTION_API))  \
          ) */
#endif /* (STD_ON == PORT_DEV_ERROR_DETECT) */
#define PORT_STOP_SEC_VAR_CLEARED_16

#include "Port_MemMap.h"

/*=================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
=================================================================================================*/
#define PORT_START_SEC_CODE
#include "Port_MemMap.h"

static inline void Port_Ipw_Init_UnusedPins
(
    const Port_ConfigType * pConfigPtr
);

#if defined(PORT_SET_2_PINS_DIRECTION_API) && (STD_ON == PORT_SET_2_PINS_DIRECTION_API)
static inline void Port_Ipw_Set2PinsSamePort
(
    uint32 Pin1,
    uint32 Pin2,
    Port_PinDirectionType eDirection
);

static inline void Port_Ipw_Set2PinsDifferentPorts
(
    uint32 Pin1,
    uint32 Pin2,
    Port_PinDirectionType eDirection
);
#endif /* defined(PORT_SET_2_PINS_DIRECTION_API) && (STD_ON == PORT_SET_2_PINS_DIRECTION_API) */
/*=================================================================================================
                                       LOCAL FUNCTIONS
=================================================================================================*/
/**
* @brief        Initializes the PORT IP Driver
* @details      The function Port_Ipw_Init_UnusedPins will initialize ALL Unused Port Pins with the
*               configuration set pointed to by the parameter ConfigPtr.
*
* @param[in]    pConfigPtr  A pointer to the structure which contains initialization parameters
*
* @return       none
*
* @pre          none
* @post         No function of the driver is executed without the initialization of the module.
*
*
*/
static inline void Port_Ipw_Init_UnusedPins
(
    const Port_ConfigType * pConfigPtr
)
{
    uint16 u16PinIndex;
    uint16 u16NumUnusedPins             = (uint16)(pConfigPtr->u16NumUnusedPins);
    uint8  u8LocalPDO                   = pConfigPtr->pUnusedPadConfig->u8PDO;
    uint32 u32LocalPCR                  = pConfigPtr->pUnusedPadConfig->u32PCR;
    Port_PinDirectionType eLocalPDDIR   = pConfigPtr->pUnusedPadConfig->ePadDir;

    /* Initialize All UnUsed pins */
    for (u16PinIndex = (uint16)0U; u16PinIndex < u16NumUnusedPins; u16PinIndex++)
    {
        /* Check if the direction of the pin is OUTPUT. In this case the driver needs to set the output level too */
        if (PORT_PIN_OUT == eLocalPDDIR)
        {
            /* Set pin to High value */
            if (PORT_PIN_LEVEL_HIGH_U8 == u8LocalPDO)
            {
                Port_Ci_Port_Ip_SetPSOR(Port_au32PortCiGpioBaseAddr[GPIO_PORT_U32(pConfigPtr->pUnusedPads[u16PinIndex])], ((uint32)1U << GPIO_CHANNEL_U32(pConfigPtr->pUnusedPads[u16PinIndex])));
            }
            else if (PORT_PIN_LEVEL_LOW_U8 == u8LocalPDO)
            {
                Port_Ci_Port_Ip_SetPCOR(Port_au32PortCiGpioBaseAddr[GPIO_PORT_U32(pConfigPtr->pUnusedPads[u16PinIndex])], ((uint32)1U << GPIO_CHANNEL_U32(pConfigPtr->pUnusedPads[u16PinIndex])));
            }
            else
            {
                /* No action to be done */
            }
            Port_Ci_Port_Ip_SetPDDR(Port_au32PortCiGpioBaseAddr[GPIO_PORT_U32(pConfigPtr->pUnusedPads[u16PinIndex])], ((uint32)1U << GPIO_CHANNEL_U32(pConfigPtr->pUnusedPads[u16PinIndex])));
        }
        /* The direction of pin is INPUT or HIGH Z */
        else
        {
            Port_Ci_Port_Ip_ClearPDDR(Port_au32PortCiGpioBaseAddr[GPIO_PORT_U32(pConfigPtr->pUnusedPads[u16PinIndex])], ((uint32)1U << GPIO_CHANNEL_U32(pConfigPtr->pUnusedPads[u16PinIndex])));
#ifndef FEATURE_PORT_CI_PORT_IP_S32K11X_DERIVATIVE
            /* Check if the pin is HIGH-Z. In this case the driver needs to disable port input in PIDR register of GPIO IP */
            if (PORT_PIN_HIGH_Z == eLocalPDDIR)
            {
                Port_Ci_Port_Ip_SetPIDR(Port_au32PortCiGpioBaseAddr[GPIO_PORT_U32(pConfigPtr->pUnusedPads[u16PinIndex])], ((uint32)1U << GPIO_CHANNEL_U32(pConfigPtr->pUnusedPads[u16PinIndex])));
            }
#endif
        }

        /* Write PCR configuration from Configuration tool */
        Port_Ci_Port_Ip_SetPCR(Port_au32PortCiPortBaseAddr[GPIO_PORT_U32(pConfigPtr->pUnusedPads[u16PinIndex])], GPIO_CHANNEL_U32(pConfigPtr->pUnusedPads[u16PinIndex]), u32LocalPCR);
    }
}

#if defined(PORT_SET_2_PINS_DIRECTION_API) && (STD_ON == PORT_SET_2_PINS_DIRECTION_API)
/**
* @brief        Sets the port direction for 2 pins which are in the same port.
* @details      The function Port_Ipw_Set2PinsSamePort will set 2 pins direction which are in the same port.
*
* @param[in]    Pin1Index       Pin1 ID number
* @param[in]    Pin2Index       Pin2 ID number
* @param[in]    eDirection      Port Pin direction
*
* @return       none
*
* @pre          Port_Init must have been called.
* @post         none
*
*
*/
static inline void Port_Ipw_Set2PinsSamePort
(
    uint32 Pin1,
    uint32 Pin2,
    Port_PinDirectionType eDirection
)
{
    /* Configures Port Pins as Output */
    if (PORT_PIN_OUT == eDirection)
    {
        Port_Ci_Port_Ip_SetPDDR(Port_au32PortCiGpioBaseAddr[GPIO_PORT_U32(Pin1)], (((uint32)1UL << GPIO_CHANNEL_U32(Pin1)) | ((uint32)1UL << GPIO_CHANNEL_U32(Pin2))));
    }
    /* Configures Port Pins as Input or High-Z */
    else if ((PORT_PIN_IN == eDirection)  || (PORT_PIN_HIGH_Z == eDirection))
    {
        Port_Ci_Port_Ip_ClearPDDR(Port_au32PortCiGpioBaseAddr[GPIO_PORT_U32(Pin1)], (((uint32)1U << GPIO_CHANNEL_U32(Pin1)) | ((uint32)1U << GPIO_CHANNEL_U32(Pin2))));
#ifndef FEATURE_PORT_CI_PORT_IP_S32K11X_DERIVATIVE
        /* Check if the pin is HIGH-Z. In this case the driver needs to disable port input in PIDR register of GPIO IP */
        if (PORT_PIN_HIGH_Z == eDirection)
        {
            Port_Ci_Port_Ip_SetPIDR(Port_au32PortCiGpioBaseAddr[GPIO_PORT_U32(Pin1)], (((uint32)1UL << GPIO_CHANNEL_U32(Pin1)) | ((uint32)1UL << GPIO_CHANNEL_U32(Pin2))));
        }
#endif
    }
    else
    {
        /* Do nothing */
    }
}

/**
* @brief        Sets the port direction for 2 pins which are in the different ports.
* @details      The function Port_Ipw_Set2PinsDifferentPorts will set 2 pins direction which are in the different ports.
*
* @param[in]     Pin1Index       Pin1 ID number
* @param[in]     Pin2Index       Pin2 ID number
* @param[in]     eDirection      Port Pin direction
*
* @return       none
*
* @pre          Port_Init must have been called.
* @post         none
*
*
*/
static inline void Port_Ipw_Set2PinsDifferentPorts
(
    uint32 Pin1,
    uint32 Pin2,
    Port_PinDirectionType eDirection
)
{
    /* Configures Port Pins as Output */
    if (PORT_PIN_OUT == eDirection)
    {
        Port_Ci_Port_Ip_SetPDDR(Port_au32PortCiGpioBaseAddr[GPIO_PORT_U32(Pin1)], ((uint32)1UL << GPIO_CHANNEL_U32(Pin1)));
        Port_Ci_Port_Ip_SetPDDR(Port_au32PortCiGpioBaseAddr[GPIO_PORT_U32(Pin2)], ((uint32)1UL << GPIO_CHANNEL_U32(Pin2)));
    }
    /* Configures Port Pins as Input or High-Z */
    else if ((PORT_PIN_IN == eDirection) || (PORT_PIN_HIGH_Z == eDirection))
    {
        Port_Ci_Port_Ip_ClearPDDR(Port_au32PortCiGpioBaseAddr[GPIO_PORT_U32(Pin1)], ((uint32)1UL << GPIO_CHANNEL_U32(Pin1)));
        Port_Ci_Port_Ip_ClearPDDR(Port_au32PortCiGpioBaseAddr[GPIO_PORT_U32(Pin2)], ((uint32)1UL << GPIO_CHANNEL_U32(Pin2)));
#ifndef FEATURE_PORT_CI_PORT_IP_S32K11X_DERIVATIVE
        /* Check if the pin is HIGH-Z. In this case the driver needs to disable port input in PIDR register of GPIO IP */
        if (PORT_PIN_HIGH_Z == eDirection)
        {
            Port_Ci_Port_Ip_SetPIDR(Port_au32PortCiGpioBaseAddr[GPIO_PORT_U32(Pin1)], ((uint32)1UL << GPIO_CHANNEL_U32(Pin1)));
            Port_Ci_Port_Ip_SetPIDR(Port_au32PortCiGpioBaseAddr[GPIO_PORT_U32(Pin2)], ((uint32)1UL << GPIO_CHANNEL_U32(Pin2)));
        }
#endif
    }
    else
    {
        /* Do nothing */
    }
}
#endif /* defined(PORT_SET_2_PINS_DIRECTION_API) && (STD_ON == PORT_SET_2_PINS_DIRECTION_API) */
/*=================================================================================================
                                       GLOBAL FUNCTIONS
=================================================================================================*/

/**
* @brief        Initializes the PORT IP Driver
* @details      The function Port_Ipw_Init will initialize ALL ports and port pins with the
*               configuration set pointed to by the parameter ConfigPtr.
*
* @param[in]    pConfigPtr  A pointer to the structure which contains initialization parameters
*
* @return none
*
* @pre    none
* @post   No function of the driver is executed without the initialisation of the module.
*
*
*/
void Port_Ipw_Init
(
    const Port_ConfigType * pConfigPtr
)
{
    uint16 u16PinIndex;

    uint8 u8NumDigFilterPorts          = (uint8)(pConfigPtr->u8NumDigitalFilterPorts);
    uint8 u8Port;

    /* Initialize all configured digital filter ports. Use u16PinIndex variable as counter, even if we loop on a uint8 variable */
    for (u16PinIndex = (uint16)0U; u16PinIndex < (uint16)u8NumDigFilterPorts; u16PinIndex++)
    {
        u8Port = pConfigPtr->pDigitalFilterConfig[u16PinIndex].u8Port;

        /* Set digital filter clock and width for the current port */
        Port_Ci_Port_Ip_ConfigDigitalFilter(Port_au32PortCiPortBaseAddr[u8Port], &(pConfigPtr->pDigitalFilterConfig[u16PinIndex]));
        /* Enable digital filter for the pins selected by the user for the current port */
        Port_Ci_Port_Ip_SetDFER(Port_au32PortCiPortBaseAddr[u8Port], (uint32)(pConfigPtr->pDigitalFilterConfig[u16PinIndex].u32PinMask));
    }

    (void)Port_Ci_Port_Ip_Init(NUM_OF_CONFIGURED_PINS, pConfigPtr->IpConfigPtr);

    /* Initialize All Unused Port Pins */
    Port_Ipw_Init_UnusedPins(pConfigPtr);

#if (STD_ON == PORT_DEV_ERROR_DETECT)
#if ((STD_ON == PORT_SET_PIN_DIRECTION_API) || (STD_ON == PORT_SET_PIN_MODE_API) ||         \
     (defined(PORT_SET_2_PINS_DIRECTION_API) && (STD_ON == PORT_SET_2_PINS_DIRECTION_API))  \
    )
    /* Port_Ipw_au16GpioDirChangeability is only used by Port_Ci_Port_Ip_SetPinDirection, Port_Ci_Port_Ip_Set2PinsDirection
       and Port_Ci_Port_Ip_SetPinMode functions */
    /* Initialize the Array with Change Direction Flags for GPIO */
    for (u16PinIndex = (uint16)0U; u16PinIndex < PAD_16BLOCK_NO_U8; u16PinIndex++)
    {
        Port_Ipw_au16GpioDirChangeability[u16PinIndex] = (uint16)0UL;
    }
#endif /* ((STD_ON == PORT_SET_PIN_DIRECTION_API) || (STD_ON == PORT_SET_PIN_MODE_API) ||         \
           (defined(PORT_SET_2_PINS_DIRECTION_API) && (STD_ON == PORT_SET_2_PINS_DIRECTION_API))  \
          ) */
#endif /* (STD_ON == PORT_DEV_ERROR_DETECT) */

}

#if (STD_ON == PORT_SET_PIN_DIRECTION_API) || (STD_ON == PORT_SET_PIN_MODE_API)
/**
* @brief   Sets the port pin direction
* @details Sets the pin direction at runtime, changing it only if the pin is configured as
*          changeable.
*
* @param[in]     PinIndex      Pin ID number
* @param[in]     eDirection      Port Pin direction
* @param[in]     pConfigPtr      A pointer to the structure which contains initialization parameters
*
* @return Error code after execution
* @retval 0   No error occured
* @retval 1   Pin direction cannot be changed
*
* @pre Port_Init must have been called
* @post none
*
*
*/
Std_ReturnType Port_Ipw_SetPinDirection
(
    Port_PinType            PinIndex,
    Port_PinDirectionType   eDirection,
    const Port_ConfigType * pConfigPtr
)
{
    /* Point to the Port Pin PCR register address */
    uint16 Pin = pConfigPtr->pUsedPadConfig[PinIndex].Pin;
    /* Return value */
    Std_ReturnType PinDirError             = (Std_ReturnType)E_OK;

#if (STD_ON == PORT_DEV_ERROR_DETECT)
    /* Bit Offset and Table value for change direction flag word */
    uint8 u8PinDescBitOffset       = (uint8)(Pin & PORT_CI_BIT_OFFSET_MASK_U8);
    /* Number of block 16 */
    uint16 u16PinChangeDirFlagWord  = Port_Ipw_au16GpioDirChangeability[(uint8)(Pin >> 4)];
#endif /* (STD_ON == PORT_DEV_ERROR_DETECT) */

#if (STD_ON == PORT_DEV_ERROR_DETECT)
    /* Check the Direction changeability option */
    if ((TRUE == pConfigPtr->pUsedPadConfig[PinIndex].bDC) || ((uint16)0 != (u16PinChangeDirFlagWord & (uint16)(1UL << u8PinDescBitOffset))))
    {
#endif /* (STD_ON == PORT_DEV_ERROR_DETECT) */
        /* Configures Port Pin as Output */
        if (PORT_PIN_OUT == eDirection)
        {
            Port_Ci_Port_Ip_SetPDDR(Port_au32PortCiGpioBaseAddr[GPIO_PORT_U32(Pin)], (uint32)(1UL << GPIO_CHANNEL_U32(Pin)));
        }
        /* Configures Port Pin as Input or High-Z*/
        else if ((PORT_PIN_IN == eDirection) || (PORT_PIN_HIGH_Z == eDirection))
        {
            Port_Ci_Port_Ip_ClearPDDR(Port_au32PortCiGpioBaseAddr[GPIO_PORT_U32(Pin)], (uint32)(1UL << GPIO_CHANNEL_U32(Pin)));
#ifndef FEATURE_PORT_CI_PORT_IP_S32K11X_DERIVATIVE
            /* Check if the pin is HIGH-Z. In this case the driver needs to disable port input in PIDR register of GPIO IP*/
            if (PORT_PIN_HIGH_Z == eDirection)
            {
                Port_Ci_Port_Ip_SetPIDR(Port_au32PortCiGpioBaseAddr[GPIO_PORT_U32(Pin)], (uint32)(1UL << GPIO_CHANNEL_U32(Pin)));
            }
#endif
        }
        else
        {
            /* Do nothing */
        }
#if (STD_ON == PORT_DEV_ERROR_DETECT)
    }
    /* Direction changeability is NOT supported */
    else
    {
        PinDirError = (Std_ReturnType)E_NOT_OK;
    }
#endif /* (STD_ON == PORT_DEV_ERROR_DETECT) */

    return PinDirError;
}
#endif /* (STD_ON == PORT_SET_PIN_DIRECTION_API) || (STD_ON == PORT_SET_PIN_MODE_API) */

#if defined(PORT_SET_2_PINS_DIRECTION_API) && (STD_ON == PORT_SET_2_PINS_DIRECTION_API)
/**
* @brief   Sets the port direction for 2 pins
* @details Sets the pin direction at runtime, changing it only if the pins are configured as
*          changeable.
*
* @param[in]     Pin1Index       Pin1 ID number
* @param[in]     Pin2Index       Pin2 ID number
* @param[in]     eDirection      Port Pin direction
* @param[in]     pConfigPtr      A pointer to the structure which contains initialization parameters
*
* @return Error code after execution
* @retval 0   No error occured
* @retval 1   Pin direction cannot be changed
*
* @pre Port_Init must have been called
* @post none
*
*
*/
Std_ReturnType Port_Ipw_Set2PinsDirection
(
    Port_PinType Pin1Index,
    Port_PinType Pin2Index,
    Port_PinDirectionType eDirection,
    const Port_ConfigType * pConfigPtr
)
{
    /* Point to the Port Pin PCR register address */
    uint32 Pin1 = pConfigPtr->pUsedPadConfig[Pin1Index].Pin;
    uint32 Pin2 = pConfigPtr->pUsedPadConfig[Pin2Index].Pin;

    /* Return value */
    Std_ReturnType PinDirError             = (Std_ReturnType)E_OK;

#if (STD_ON == PORT_DEV_ERROR_DETECT)
    /* Bit Offsets and Table values for change direction flag words */
    uint8 u8PinDescBitOffset1       = (uint8)(Pin1 & PORT_CI_BIT_OFFSET_MASK_U8);
    uint16 u16PinChangeDirFlagWord1  = Port_Ipw_au16GpioDirChangeability[(uint8)(Pin1 >> 4)];

    uint8 u8PinDescBitOffset2       = (uint8)(Pin2 & PORT_CI_BIT_OFFSET_MASK_U8);
    uint16 u16PinChangeDirFlagWord2  = Port_Ipw_au16GpioDirChangeability[(uint8)(Pin2 >> 4)];
#endif /* (STD_ON == PORT_DEV_ERROR_DETECT) */

#if (STD_ON == PORT_DEV_ERROR_DETECT)
    /* Check the Direction changeability option */
    if (((TRUE == pConfigPtr->pUsedPadConfig[Pin1Index].bDC) || ((uint16)0 != (u16PinChangeDirFlagWord1 & (uint16)(1UL << u8PinDescBitOffset1)))) && \
        (((boolean)TRUE == pConfigPtr->pUsedPadConfig[Pin2Index].bDC) || ((uint16)0 != (u16PinChangeDirFlagWord2 & (uint16)(1UL << u8PinDescBitOffset2))))    \
       )
    {
#endif /* (STD_ON == PORT_DEV_ERROR_DETECT) */
        /* Check if the pins belong to the same port. In this case, we need to write the PDDR register once to set direction of both pins in the same time */
        if (GPIO_PORT_U32(Pin1) == GPIO_PORT_U32(Pin2))
        {
            /* Sets the port direction for 2 pins which are in the same port. */
            Port_Ipw_Set2PinsSamePort(Pin1, Pin2, eDirection);
        }
        else
        {
            /* Sets the port direction for 2 pins which are in the different ports. */
            Port_Ipw_Set2PinsDifferentPorts(Pin1, Pin2, eDirection);
        }
#if (STD_ON == PORT_DEV_ERROR_DETECT)
    }
    /* Direction changeability is NOT supported */
    else
    {
        PinDirError = (Std_ReturnType)E_NOT_OK;
    }
#endif /* (STD_ON == PORT_DEV_ERROR_DETECT) */

    return PinDirError;
}
#endif /* defined(PORT_SET_2_PINS_DIRECTION_API) && (STD_ON == PORT_SET_2_PINS_DIRECTION_API) */

#if (STD_ON == PORT_SET_PIN_MODE_API)
/**
* @brief   Sets the port pin mode.
* @details The function will set the port pin mode of the referenced pin during runtime
*
* @param[in]
* @param[in]
*
* @return Error code after execution
* @retval 0   No error occured
* @retval PORT_E_MODE_UNCHANGEABLE   Pin mode cannot be changed
* @retval PORT_E_PARAM_INVALID_MODE  Invalid mode
*
* @pre Port_Init must have been called
* @post none
*
*
*/
Std_ReturnType Port_Ipw_SetPinMode
(
    Port_PinType PinIndex,
    Port_PinModeType PinMode,
    const Port_ConfigType * pConfigPtr
)
{
    Std_ReturnType PinModeError             = (Std_ReturnType)0UL;
    uint16 PinPad                           = pConfigPtr->pUsedPadConfig[PinIndex].Pin;
    Port_PinModeType PinCfgRegValue         = (Port_PinModeType)PinMode;
    uint16 u16PinDescWord;
    uint16 u16PinDescBitOffset;
    /* Variable used to clear and updated PCR register */
    uint32 u32LocalPCR;

    if (PAD_MODE_OPTIONS_U8 <= PinMode)
    {
        PinModeError = PORT_E_PARAM_INVALID_MODE;
    }
    else
    {
        Port_PinDirectionType ePadDirection = PORT_PIN_DISABLED;

        /* Bit offset of Pin index inside the pin description matrix */
        u16PinDescBitOffset = PinPad & PORT_MODE_BIT_OFFSET_MASK_U8;
        /* Selected word inside the pin description matrix */
        u16PinDescWord = (uint16)Port_au16PinDescription[(uint8)PinMode][PinPad >> 4U];

        /* Check if desired mode is valid for selected pin */
        if ((u16PinDescWord & ((uint16)1UL<<u16PinDescBitOffset)) != (uint16)0U)
        {
            switch(PinMode)
            {
                case PORT_GPIO_MODE:
#if (STD_ON == PORT_DEV_ERROR_DETECT)
                    Port_Ipw_SetGpioDirChangeability(PinPad, TRUE);
#endif /* (STD_ON == PORT_DEV_ERROR_DETECT) */
                    ePadDirection = pConfigPtr->pUsedPadConfig[PinIndex].ePadDir;
#if (STD_OFF == PORT_SETPINMODE_DOES_NOT_TOUCH_GPIO_LEVEL)
                    if ((PORT_PIN_IN != ePadDirection) && (PORT_PIN_HIGH_Z != ePadDirection))
                    {
                        Port_Ipw_SetGpioPadOutput(PinIndex, pConfigPtr);
                    }
#endif /* (STD_OFF == PORT_SETPINMODE_DOES_NOT_TOUCH_GPIO_LEVEL) */
                    (void)Port_Ipw_SetPinDirection(PinIndex, ePadDirection, pConfigPtr);
                    break;

                default:
#if (STD_ON == PORT_DEV_ERROR_DETECT)
                    /* All the ALT modes except GPIO*/
                    Port_Ipw_SetGpioDirChangeability(PinPad,FALSE);
#endif /* (STD_ON == PORT_DEV_ERROR_DETECT) */
                    break;
            }
            /* Sets the port pin mode */
            u32LocalPCR  = Port_Ci_Port_Ip_ReadPCR(Port_au32PortCiPortBaseAddr[GPIO_PORT_U32(PinPad)], GPIO_CHANNEL_U32(PinPad));

            u32LocalPCR &= ~(PORT_CI_PCR_ALT_MODE_U32);
            u32LocalPCR |= ((uint32)PinCfgRegValue << PORT_CI_PCR_ALT_MODE_OFFSET_U32);

            Port_Ci_Port_Ip_SetPCR(Port_au32PortCiPortBaseAddr[GPIO_PORT_U32(PinPad)], GPIO_CHANNEL_U32(PinPad), u32LocalPCR);
        }
        else
        {
            PinModeError = PORT_E_PARAM_INVALID_MODE;
        }
    }
    return PinModeError;
}
#endif /* (STD_ON == PORT_SET_PIN_MODE_API) */

#if (STD_ON == PORT_SET_PIN_MODE_API)
#if (STD_ON == PORT_DEV_ERROR_DETECT)
/**
* @brief    Sets or resets the direction changeability for pads in GPIO mode.
* @details  The function will update the direction changeability for the pads whose mode is changed
*
* @param[in] PadID          Pin ID number.
* @param[in] bStatus        The new value true or false for direction changeability.
*
* @return    None
*
* @pre  none
* @post none
*
*
*/
void Port_Ipw_SetGpioDirChangeability
(
    uint16 PadID,
    boolean bStatus
)
{
    /* Pin description variables */
    uint8 u8PinBitOffset;
    uint16 u16PinDirFlagWord;

    /* Enter critical region */
    SchM_Enter_Port_PORT_EXCLUSIVE_AREA_00();
    /* Bit offset of Pin index inside the pin description matrix */
    u8PinBitOffset      = (uint8)((uint8)PadID & PORT_CI_BIT_OFFSET_MASK_U8);
    u16PinDirFlagWord   = Port_Ipw_au16GpioDirChangeability[(uint8)((uint8)PadID >> 4)];

    if (TRUE == bStatus)
    {
        /* Set the change direction flag */
        u16PinDirFlagWord |= (uint16)(1UL<<u8PinBitOffset);
    }
    else
    {
        /* Reset the change direction flag */
        u16PinDirFlagWord &= (uint16)(~((uint16)(1UL<<u8PinBitOffset)));
    }
    Port_Ipw_au16GpioDirChangeability[(uint8)((uint8)PadID >> 4)] = u16PinDirFlagWord;
    /* Exit critical region */
    SchM_Exit_Port_PORT_EXCLUSIVE_AREA_00();
}
#endif /* (STD_ON == PORT_DEV_ERROR_DETECT) */

#if (STD_OFF == PORT_SETPINMODE_DOES_NOT_TOUCH_GPIO_LEVEL)
/**
* @brief    Sets the output status of the pads in GPIO mode.
* @details  The function will update the output for the pads whose mode is changed
*
* @param[in] PinIndex     Pin ID number.
* @param[in] pConfigPtr     A pointer to the structure which contains initialization parameters
*
*
* @return    None
*
* @pre  none
* @post none
*
*
*/
void Port_Ipw_SetGpioPadOutput
(
    Port_PinType            PinIndex,
    const Port_ConfigType * pConfigPtr
)
{
    uint16 Pin = pConfigPtr->pUsedPadConfig[PinIndex].Pin;
    uint8 u8LocalPDO = pConfigPtr->pUsedPadConfig[PinIndex].u8PDO;

    /* Set pin to High value */
    if (PORT_PIN_LEVEL_HIGH_U8 == u8LocalPDO)
    {
        Port_Ci_Port_Ip_SetPSOR(Port_au32PortCiGpioBaseAddr[GPIO_PORT_U32(Pin)], ((uint32)1U << GPIO_CHANNEL_U32(Pin)));
    }
    /* Set pin to Low value */
    else if (PORT_PIN_LEVEL_LOW_U8 == u8LocalPDO)
    {
        Port_Ci_Port_Ip_SetPCOR(Port_au32PortCiGpioBaseAddr[GPIO_PORT_U32(Pin)], ((uint32)1U << GPIO_CHANNEL_U32(Pin)));
    }
    else
    {
        /* No action to be done */
    }
}
#endif /* (STD_OFF == PORT_SETPINMODE_DOES_NOT_TOUCH_GPIO_LEVEL) */
#endif /* (STD_ON == PORT_SET_PIN_MODE_API) */

/**
* @brief   Refreshes port direction.
* @details This service shall refresh the direction of all configured ports to the configured
*          direction. The PORT driver shall exclude from refreshing those port pins that are
*          configured as pin direction changeable during runtime.
*
* @param[in]     pConfigPtr    Pointer to configuration containing pins to be refreshed
* @return none
*
* @pre Port_Init must have been called
* @post none
*
*/
void Port_Ipw_RefreshPortDirection
(
    const Port_ConfigType * pConfigPtr
)
{
    uint16 u16NumPins = pConfigPtr->u16NumPins;
    /* Index of the port table */
    uint16 u16PinIndex;
    uint16 PinPad;

    /* Initialize All Configured Port Pins that aren't direction changable */
    for (u16PinIndex = (uint16)0U; u16PinIndex < u16NumPins; u16PinIndex++)
    {
        if (FALSE == pConfigPtr->pUsedPadConfig[u16PinIndex].bDC)
        {
            /* On this platform we can only determine direction for the pins initialy configured as GPIOs */
            if (TRUE == pConfigPtr->pUsedPadConfig[u16PinIndex].bGPIO)
            {
                /* Point to the Port Pin MSCR register address*/
                PinPad = pConfigPtr->pUsedPadConfig[u16PinIndex].Pin;

                /* Configures Port Pin as Output */
                if (PORT_PIN_OUT == pConfigPtr->pUsedPadConfig[u16PinIndex].ePadDir)
                {
                    /* Configure the pin direction as output in the PDDR register of GPIO IP */
                    Port_Ci_Port_Ip_SetPDDR(Port_au32PortCiGpioBaseAddr[GPIO_PORT_U32(PinPad)], ((uint32)1U << GPIO_CHANNEL_U32(PinPad)));
                }
                /* Configures Port Pin as Input or High-Z*/
                else if ((PORT_PIN_IN == pConfigPtr->pUsedPadConfig[u16PinIndex].ePadDir) || (PORT_PIN_HIGH_Z == pConfigPtr->pUsedPadConfig[u16PinIndex].ePadDir))
                {
                    /* Configure the pin direction as input in the PDDR register of GPIO IP */
                    Port_Ci_Port_Ip_ClearPDDR(Port_au32PortCiGpioBaseAddr[GPIO_PORT_U32(PinPad)], ((uint32)1U << GPIO_CHANNEL_U32(PinPad)));
#ifndef FEATURE_PORT_CI_PORT_IP_S32K11X_DERIVATIVE
                    /* Check if the pin is HIGH-Z. In this case the driver needs to disable port input in PIDR register of GPIO IP*/
                    if (PORT_PIN_HIGH_Z == pConfigPtr->pUsedPadConfig[u16PinIndex].ePadDir)
                    {
                        Port_Ci_Port_Ip_SetPIDR(Port_au32PortCiGpioBaseAddr[GPIO_PORT_U32(PinPad)], ((uint32)1U << GPIO_CHANNEL_U32(PinPad)));
                    }
#endif
                }
                else
                {
                    /* Do nothing. Else branch present in order to avoid MISRA's violations */
                }
            }
        }
    }
}

#ifdef PORT_SET_AS_UNUSED_PIN_API
#if (STD_ON == PORT_SET_AS_UNUSED_PIN_API)
/**
* @brief   Set as unused pin.
* @details This function shall configure the referenced pin with all
*          the properties specified in the NotUsedPortPin container.
*
* @param[in] PinIndex       Pin ID number.
* @param[in] pConfigPtr     A pointer to the structure which contains initialization parameters
*
* @return none
*
* @pre Port_Init must have been called
* @post none
*/
void Port_Ipw_SetAsUnusedPin
(
    Port_PinType            PinIndex,
    const Port_ConfigType * pConfigPtr
)
{
    uint32 u32LocalPCR                  = (uint32)(pConfigPtr->pUnusedPadConfig->u32PCR);
    uint8  u8LocalPDO                   = (uint8)(pConfigPtr->pUnusedPadConfig->u8PDO);
    Port_PinDirectionType  eLocalPDDIR  = pConfigPtr->pUnusedPadConfig->ePadDir;
    uint16 Pin;

    Pin = pConfigPtr->pUsedPadConfig[PinIndex].Pin;
    /* Check if the direction of the pin is OUTPUT. In this case the driver needs to set the output level too */
    if (PORT_PIN_OUT == eLocalPDDIR)
    {
        /* Set pin to High value */
        if (PORT_PIN_LEVEL_HIGH_U8 == u8LocalPDO)
        {
            Port_Ci_Port_Ip_SetPSOR(Port_au32PortCiGpioBaseAddr[GPIO_PORT_U32(Pin)], (1U << GPIO_CHANNEL_U32(Pin)));
        }
        /* Set pin to Low value */
        else if (PORT_PIN_LEVEL_LOW_U8 == u8LocalPDO)
        {
            Port_Ci_Port_Ip_SetPCOR(Port_au32PortCiGpioBaseAddr[GPIO_PORT_U32(Pin)], (1U << GPIO_CHANNEL_U32(Pin)));
        }
        else
        {
            /* No action to be done */
        }
        /* Configure the pin direction as output in the PDDR register of GPIO IP */
        Port_Ci_Port_Ip_SetPDDR(Port_au32PortCiGpioBaseAddr[GPIO_PORT_U32(Pin)], (1U << GPIO_CHANNEL_U32(Pin)));
    }
    else
    {
        /* Not used port pins are configured as inputs or high-z */
        /* Configure the pin direction as input in the PDDR register of GPIO IP */
        Port_Ci_Port_Ip_ClearPDDR(Port_au32PortCiGpioBaseAddr[GPIO_PORT_U32(Pin)], (1U << GPIO_CHANNEL_U32(Pin)));
#ifndef FEATURE_PORT_CI_PORT_IP_S32K11X_DERIVATIVE
        /* Check if the pin is HIGH-Z. In this case the driver needs to disable port input in PIDR register of GPIO IP */
        if (PORT_PIN_HIGH_Z == eLocalPDDIR)
        {
            Port_Ci_Port_Ip_SetPIDR(Port_au32PortCiGpioBaseAddr[GPIO_PORT_U32(Pin)], (1U << GPIO_CHANNEL_U32(Pin)));
        }
#endif
    }
    Port_Ci_Port_Ip_SetPCR(Port_au32PortCiPortBaseAddr[GPIO_PORT_U32(Pin)], GPIO_CHANNEL_U32(Pin), u32LocalPCR);
}

/**
* @brief   Set as used pin.
* @details This function shall configure the referenced pin with
*          all the properties that where set during the Port_Init operation.
*
* @param[in] PinIndex       Pin ID number.
* @param[in] pConfigPtr     A pointer to the structure which contains initialization parameters
*
* @return none
*
* @pre Port_Init must have been called
* @post none
*/
void Port_Ipw_SetAsUsedPin
(
    Port_PinType            PinIndex,
    const Port_ConfigType * pConfigPtr
)
{
    uint32 u32LocalPCR                  = (uint32)(pConfigPtr->pUnusedPadConfig->u32PCR);
    uint8  u8LocalPDO                   = (uint8)(pConfigPtr->pUnusedPadConfig->u8PDO);
    Port_PinDirectionType  eLocalPDDIR  = pConfigPtr->pUnusedPadConfig->ePadDir;
    uint16 Pin;

    Pin = pConfigPtr->pUsedPadConfig[PinIndex].Pin;
    u8LocalPDO = pConfigPtr->pUsedPadConfig[PinIndex].u8PDO;
    eLocalPDDIR = pConfigPtr->pUsedPadConfig[PinIndex].ePadDir;
    u32LocalPCR = pConfigPtr->pUsedPadConfig[PinIndex].u32PCR;

    if (TRUE == pConfigPtr->pUsedPadConfig[PinIndex].bGPIO)
    {
        /* Check if the direction of the pin is OUTPUT. In this case the driver needs to set the output level too */
        if (PORT_PIN_OUT == eLocalPDDIR)
        {
            /* Set pin to High value */
            if (PORT_PIN_LEVEL_HIGH_U8 == u8LocalPDO)
            {
                Port_Ci_Port_Ip_SetPSOR(Port_au32PortCiGpioBaseAddr[GPIO_PORT_U32(Pin)], (1U << GPIO_CHANNEL_U32(Pin)));
            }
            /* Set pin to Low value */
            else if (PORT_PIN_LEVEL_LOW_U8 == u8LocalPDO)
            {
                Port_Ci_Port_Ip_SetPCOR(Port_au32PortCiGpioBaseAddr[GPIO_PORT_U32(Pin)], (1U << GPIO_CHANNEL_U32(Pin)));
            }
            else
            {
                /* No action to be done */
            }
            /* Configure the pin direction as output in the PDDR register of GPIO IP */
            Port_Ci_Port_Ip_SetPDDR(Port_au32PortCiGpioBaseAddr[GPIO_PORT_U32(Pin)], (1U << GPIO_CHANNEL_U32(Pin)));
        }
        else
        {
            /* Configure the pin direction as input in the PDDR register of GPIO IP */
            Port_Ci_Port_Ip_ClearPDDR(Port_au32PortCiGpioBaseAddr[GPIO_PORT_U32(Pin)], (1U << GPIO_CHANNEL_U32(Pin)));
#ifndef FEATURE_PORT_CI_PORT_IP_S32K11X_DERIVATIVE
            /* Check if the pin is HIGH-Z. In this case the driver needs to disable port input in PIDR register of GPIO IP*/
            if (PORT_PIN_HIGH_Z == eLocalPDDIR)
            {
                Port_Ci_Port_Ip_SetPIDR(Port_au32PortCiGpioBaseAddr[GPIO_PORT_U32(Pin)], (1U << GPIO_CHANNEL_U32(Pin)));
            }
#endif
        }
    }
    Port_Ci_Port_Ip_SetPCR(Port_au32PortCiPortBaseAddr[GPIO_PORT_U32(Pin)], GPIO_CHANNEL_U32(Pin), u32LocalPCR);
}
#endif /* (STD_ON == PORT_SET_AS_UNUSED_PIN_API) */
#endif /* defined(PORT_SET_AS_UNUSED_PIN_API)*/

#ifdef PORT_RESET_PIN_MODE_API
#if (STD_ON == PORT_RESET_PIN_MODE_API)
/**
* @brief   Reset Pin Mode.
* @details This function shall revert the port pin mode of the referenced pin
*          to the value that was set by Port_Init operation.
*
* @param[in] PinIndex       Pin ID number.
* @param[in] pConfigPtr     A pointer to the structure which contains initialization parameters.
*
* @return none
*
* @pre Port_Init must have been called
* @post none
*/
void Port_Ipw_ResetPinMode
(
    Port_PinType            PinIndex,
    const Port_ConfigType * pConfigPtr
)
{
    uint32 u32LocalPCR;
    Port_PinDirectionType  eLocalPDDIR;
    uint16 Pin;

    Pin = pConfigPtr->pUsedPadConfig[PinIndex].Pin;
    eLocalPDDIR = pConfigPtr->pUsedPadConfig[PinIndex].ePadDir;

    /* Check if the mode of the pin is GPIO. */
    if (TRUE == pConfigPtr->pUsedPadConfig[PinIndex].bGPIO)
    {
        /* Check if the direction of the pin is OUTPUT. In this case the driver needs to set the output level too */
        if (PORT_PIN_OUT == eLocalPDDIR)
        {
            /* Configure the pin direction as output in the PDDR register of GPIO IP */
            Port_Ci_Port_Ip_SetPDDR(Port_au32PortCiGpioBaseAddr[GPIO_PORT_U32(Pin)], (1U << GPIO_CHANNEL_U32(Pin)));
        }
        else
        {
            /* Configure the pin direction as input in the PDDR register of GPIO IP */
            Port_Ci_Port_Ip_ClearPDDR(Port_au32PortCiGpioBaseAddr[GPIO_PORT_U32(Pin)], (1U << GPIO_CHANNEL_U32(Pin)));
#ifndef FEATURE_PORT_CI_PORT_IP_S32K11X_DERIVATIVE
            /* Check if the pin is HIGH-Z. In this case the driver needs to disable port input in PIDR register of GPIO IP*/
            if (PORT_PIN_HIGH_Z == eLocalPDDIR)
            {
                Port_Ci_Port_Ip_SetPIDR(Port_au32PortCiGpioBaseAddr[GPIO_PORT_U32(Pin)], (1U << GPIO_CHANNEL_U32(Pin)));
            }
#endif
        }
    }

    /* Only revert the port pin mode of the referenced pin like Port_Init, not revert other bit for PCR register. */
    u32LocalPCR = Port_Ci_Port_Ip_ReadPCR(Port_au32PortCiPortBaseAddr[GPIO_PORT_U32(Pin)], GPIO_CHANNEL_U32(Pin));
    u32LocalPCR &= ~(PORT_CI_PCR_ALT_MODE_U32);
    u32LocalPCR |= (pConfigPtr->pUsedPadConfig[PinIndex].u32PCR) & PORT_CI_PCR_ALT_MODE_U32;

    Port_Ci_Port_Ip_SetPCR(Port_au32PortCiPortBaseAddr[GPIO_PORT_U32(Pin)], GPIO_CHANNEL_U32(Pin), u32LocalPCR);
}
#endif /* (STD_ON == PORT_RESET_PIN_MODE_API) */
#endif /* defined(PORT_RESET_PIN_MODE_API)*/

#define PORT_STOP_SEC_CODE
#include "Port_MemMap.h"

#ifdef __cplusplus
}
#endif
/** @} */
