/*
 *  Module main.c
 *
 *  Created on: 09-Mar-2025
 *      Author: Rohan
 */

/* Including necessary configuration files. */
#include "sdk_project_config.h"

volatile int exit_code = 0;
/* User includes */
uint8_t txBuff1[4] = {0x1, 0x2, 0x3, 0x4};
status_t error;


int main(void)
{
    /* Initialize and configure clocks
     *  -   Setup system clocks, dividers
     *  -   Configure LPUART clock, GPIO clock
     *  -   see clock manager component for more details
     */
    error = CLOCK_SYS_Init(g_clockManConfigsArr, CLOCK_MANAGER_CONFIG_CNT,
                        g_clockManCallbacksArr, CLOCK_MANAGER_CALLBACK_CNT);
    error = CLOCK_SYS_UpdateConfiguration(0U, CLOCK_MANAGER_POLICY_AGREEMENT);

    /* Initialize pins
     *  -   Init LPUART and GPIO pins
     *  -   See PinSettings component for more info
     */
    error = PINS_DRV_Init(NUM_OF_CONFIGURED_PINS0, g_pin_mux_InitConfigArr0);

    /* Set LIN transceiver sleep pin direction */
    PINS_DRV_SetPinsDirection(PTE, (0x1u << (9UL)));
    /* Wake up LIN transceiver */
    PINS_DRV_SetPins(PTE, (0x1u << (9UL)));

    /* Initialize LIN network interface */
    error = LIN_DRV_Init(INST_LIN2, &lin2_InitConfig0, &lin2_State);

    for(;;)
    {
		error = LIN_DRV_MasterSendHeader(INST_LIN2, 1);
		error = LIN_DRV_SendFrameData(INST_LIN2, txBuff1, sizeof(txBuff1));
        if(exit_code != 0)
        {
            break;
        }
    }
    return exit_code;
}

