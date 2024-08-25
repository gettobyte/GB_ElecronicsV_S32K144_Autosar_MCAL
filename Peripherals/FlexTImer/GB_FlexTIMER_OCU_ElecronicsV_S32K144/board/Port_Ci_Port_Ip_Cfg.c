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
  - {pin_num: '22', peripheral: FTM0, signal: 'ch, 0', pin_signal: PTD15, direction: OUTPUT}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* Generate array of configured pin structures */
Port_Ci_Port_Ip_PinSettingsConfig g_pin_mux_InitConfigArr0[NUM_OF_CONFIGURED_PINS] = {
    {
        .portBase        = IP_PORTD,
        .gpioBase        = NULL_PTR,
        .pinPortIdx      = 15U,
        .pullConfig      = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength   = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter   = (boolean)FALSE,
        .mux             = PORT_MUX_ALT2,
        .lockRegister    = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter   = (boolean)FALSE,
    },
};
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
