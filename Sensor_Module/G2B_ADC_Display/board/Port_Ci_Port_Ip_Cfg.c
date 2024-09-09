/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v10.0
processor: S32K144
package_id: S32K144_LQFP100
mcu_data: PlatformSDK_S32K1_2021_08
processor_version: 0.0.0
pin_labels:
- {pin_num: '66', pin_signal: PTB14, label: CLK, identifier: CLK}
- {pin_num: '67', pin_signal: PTB13, label: DC, identifier: DC}
- {pin_num: '68', pin_signal: PTB12, label: Reset, identifier: Reset}
- {pin_num: '65', pin_signal: PTB15, label: MISO}
- {pin_num: '63', pin_signal: PTB17, label: CS}
- {pin_num: '64', pin_signal: PTB16, label: DIN(MOSI)}
- {pin_num: '46', pin_signal: PTC14, label: POT}
- {pin_num: '30', pin_signal: PTC2, label: POT}
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
  - {pin_num: '46', peripheral: ADC0, signal: 'se, 12', pin_signal: PTC14}
  - {pin_num: '66', peripheral: LPSPI1, signal: 'sck, sck', pin_signal: PTB14, direction: OUTPUT}
  - {pin_num: '64', peripheral: LPSPI1, signal: sout, pin_signal: PTB16, direction: OUTPUT}
  - {pin_num: '63', peripheral: LPSPI1, signal: 'pcs, 3', pin_signal: PTB17, direction: OUTPUT}
  - {pin_num: '65', peripheral: LPSPI1, signal: sin, pin_signal: PTB15, direction: INPUT}
  - {pin_num: '67', peripheral: PORTB, signal: 'port, 13', pin_signal: PTB13, direction: OUTPUT}
  - {pin_num: '68', peripheral: PORTB, signal: 'port, 12', pin_signal: PTB12, direction: OUTPUT}
  - {pin_num: '27', peripheral: TRGMUX, signal: 'in, 0', pin_signal: PTB5}
  - {pin_num: '30', peripheral: ADC0, signal: 'se, 10', pin_signal: PTC2}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* Generate array of configured pin structures */
Port_Ci_Port_Ip_PinSettingsConfig g_pin_mux_InitConfigArr0[NUM_OF_CONFIGURED_PINS] = {
    {
        .portBase        = IP_PORTB,
        .gpioBase        = IP_PTB,
        .pinPortIdx      = 12U,
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
        .portBase        = IP_PORTB,
        .gpioBase        = IP_PTB,
        .pinPortIdx      = 13U,
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
        .portBase        = IP_PORTB,
        .gpioBase        = NULL_PTR,
        .pinPortIdx      = 14U,
        .pullConfig      = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength   = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter   = (boolean)FALSE,
        .mux             = PORT_MUX_ALT3,
        .lockRegister    = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter   = (boolean)FALSE,
    },
    {
        .portBase        = IP_PORTB,
        .gpioBase        = NULL_PTR,
        .pinPortIdx      = 15U,
        .pullConfig      = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength   = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter   = (boolean)FALSE,
        .mux             = PORT_MUX_ALT3,
        .lockRegister    = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter   = (boolean)FALSE,
    },
    {
        .portBase        = IP_PORTB,
        .gpioBase        = NULL_PTR,
        .pinPortIdx      = 16U,
        .pullConfig      = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength   = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter   = (boolean)FALSE,
        .mux             = PORT_MUX_ALT3,
        .lockRegister    = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter   = (boolean)FALSE,
    },
    {
        .portBase        = IP_PORTB,
        .gpioBase        = NULL_PTR,
        .pinPortIdx      = 17U,
        .pullConfig      = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength   = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter   = (boolean)FALSE,
        .mux             = PORT_MUX_ALT3,
        .lockRegister    = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter   = (boolean)FALSE,
    },
    {
        .portBase        = IP_PORTB,
        .gpioBase        = NULL_PTR,
        .pinPortIdx      = 5U,
        .pullConfig      = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength   = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter   = (boolean)FALSE,
        .mux             = PORT_MUX_ALT6,
        .lockRegister    = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter   = (boolean)FALSE,
    },
    {
        .portBase        = IP_PORTC,
        .gpioBase        = NULL_PTR,
        .pinPortIdx      = 14U,
        .pullConfig      = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength   = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter   = (boolean)FALSE,
        .mux             = PORT_MUX_ALT0,
        .lockRegister    = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter   = (boolean)FALSE,
    },
    {
        .portBase        = IP_PORTC,
        .gpioBase        = NULL_PTR,
        .pinPortIdx      = 2U,
        .pullConfig      = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength   = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter   = (boolean)FALSE,
        .mux             = PORT_MUX_ALT0,
        .lockRegister    = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter   = (boolean)FALSE,
    },
};
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
