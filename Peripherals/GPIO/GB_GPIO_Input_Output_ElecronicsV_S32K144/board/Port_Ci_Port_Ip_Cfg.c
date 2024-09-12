/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v10.0
processor: S32K144
package_id: S32K144_LQFP100
mcu_data: PlatformSDK_S32K1_2021_08
processor_version: 0.0.0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */
 

#include "Port_Ci_Port_Ip_Cfg.h"

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: core0}
- pin_list:
  - {pin_num: '22', peripheral: PORTD, signal: 'port, 15', pin_signal: PTD15, direction: OUTPUT}
  - {pin_num: '21', peripheral: PORTD, signal: 'port, 16', pin_signal: PTD16, direction: OUTPUT}
  - {pin_num: '4', peripheral: PORTD, signal: 'port, 0', pin_signal: PTD0, direction: OUTPUT}
  - {pin_num: '50', peripheral: PORTC, signal: 'port, 12', pin_signal: PTC12, direction: INPUT}
  - {pin_num: '49', peripheral: PORTC, signal: 'port, 13', pin_signal: PTC13, direction: INPUT}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* Generate array of configured pin structures */
Port_Ci_Port_Ip_PinSettingsConfig g_pin_mux_InitConfigArr0[NUM_OF_CONFIGURED_PINS0] = {
    {
        .portBase        = IP_PORTC,
        .gpioBase        = IP_PTC,
        .pinPortIdx      = 12U,
        .pullConfig      = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength   = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter   = (boolean)FALSE,
        .mux             = PORT_MUX_AS_GPIO,
        .lockRegister    = PORT_LOCK_REGISTER_DISABLED,
        .direction       = PORT_CI_PORT_PIN_IN,
        .digitalFilter   = (boolean)FALSE,
        .initValue       = 0U,
    },
    {
        .portBase        = IP_PORTC,
        .gpioBase        = IP_PTC,
        .pinPortIdx      = 13U,
        .pullConfig      = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength   = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter   = (boolean)FALSE,
        .mux             = PORT_MUX_AS_GPIO,
        .lockRegister    = PORT_LOCK_REGISTER_DISABLED,
        .direction       = PORT_CI_PORT_PIN_IN,
        .digitalFilter   = (boolean)FALSE,
        .initValue       = 0U,
    },
    {
        .portBase        = IP_PORTD,
        .gpioBase        = IP_PTD,
        .pinPortIdx      = 0U,
        .pullConfig      = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength   = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter   = (boolean)FALSE,
        .mux             = PORT_MUX_AS_GPIO,
        .lockRegister    = PORT_LOCK_REGISTER_DISABLED,
        .direction       = PORT_CI_PORT_PIN_OUT,
        .digitalFilter   = (boolean)FALSE,
        .initValue       = 0U,
    },
    {
        .portBase        = IP_PORTD,
        .gpioBase        = IP_PTD,
        .pinPortIdx      = 15U,
        .pullConfig      = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength   = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter   = (boolean)FALSE,
        .mux             = PORT_MUX_AS_GPIO,
        .lockRegister    = PORT_LOCK_REGISTER_DISABLED,
        .direction       = PORT_CI_PORT_PIN_OUT,
        .digitalFilter   = (boolean)FALSE,
        .initValue       = 0U,
    },
    {
        .portBase        = IP_PORTD,
        .gpioBase        = IP_PTD,
        .pinPortIdx      = 16U,
        .pullConfig      = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength   = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter   = (boolean)FALSE,
        .mux             = PORT_MUX_AS_GPIO,
        .lockRegister    = PORT_LOCK_REGISTER_DISABLED,
        .direction       = PORT_CI_PORT_PIN_OUT,
        .digitalFilter   = (boolean)FALSE,
        .initValue       = 0U,
    },
};
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
