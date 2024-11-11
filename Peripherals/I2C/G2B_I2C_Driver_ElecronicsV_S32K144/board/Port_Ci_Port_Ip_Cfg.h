#ifndef _PORT_CI_PORT_IP_CFG_H_
#define _PORT_CI_PORT_IP_CFG_H_

#include "S32K144_PORT.h"
#include "S32K144_GPIO.h"
#include "Port_Ci_Port_Ip_Types.h"

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define PORT_CI_PORT_IP_VENDOR_ID_CFG_H                       43
#define PORT_CI_PORT_IP_AR_RELEASE_MAJOR_VERSION_CFG_H        4
#define PORT_CI_PORT_IP_AR_RELEASE_MINOR_VERSION_CFG_H        4
#define PORT_CI_PORT_IP_AR_RELEASE_REVISION_VERSION_CFG_H     0
#define PORT_CI_PORT_IP_SW_MAJOR_VERSION_CFG_H                1
#define PORT_CI_PORT_IP_SW_MINOR_VERSION_CFG_H                0
#define PORT_CI_PORT_IP_SW_PATCH_VERSION_CFG_H                0

/*!
 * @addtogroup Port_Ci_Port_Ip_Cfg
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif


/*! @brief Definitions/Declarations for BOARD_InitPins Functional Group */
/*! @brief User number of configured pins */
#define NUM_OF_CONFIGURED_PINS0 2
/*! @brief User configuration structure */
extern Port_Ci_Port_Ip_PinSettingsConfig g_pin_mux_InitConfigArr0[NUM_OF_CONFIGURED_PINS0];


#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PORT_CI_PORT_IP_CFG_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/

