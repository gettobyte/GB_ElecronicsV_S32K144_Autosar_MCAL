/*
 *  Master main.c
 *
 *  Created on: 09-Mar-2025
 *      Author: Rohan
 */

/* Including necessary configuration files. */
#include "sdk_project_config.h"

volatile int exit_code = 0;
/* User includes */
uint8_t txBuff1[8] = {0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8};
status_t error;
uint16_t adcRawValue;

void adc_convert(void);
void send_signal(void);

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
    error = LIN_DRV_Init(INST_LIN2, &lin2_MasterConfig, &lin2_State);

	/* Configure and calibrate the ADC converter */
	ADC_DRV_ConfigConverter(INST_ADC_CONFIG_1, &adc_config_1_ConvConfig0);
	ADC_DRV_AutoCalibration(INST_ADC_CONFIG_1);


    for(;;)
    {
		error = LIN_DRV_MasterSendHeader(INST_LIN2, 1);
		OSIF_TimeDelay(10);
		error = LIN_DRV_SendFrameData(INST_LIN2, txBuff1, sizeof(txBuff1));
		OSIF_TimeDelay(50);

    	adc_convert();
        if(exit_code != 0)
        {
            break;
        }
    }
    return exit_code;
}

void adc_convert(void)
{
	/* Configure ADC channel and software trigger a conversion */
	ADC_DRV_ConfigChan(INST_ADC_CONFIG_1, 0U, &adc_config_1_ChnConfig0);
	/* Wait for the conversion to be done */
	ADC_DRV_WaitConvDone(INST_ADC_CONFIG_1);
	/* Store the channel result into a local variable */
	ADC_DRV_GetChanResult(INST_ADC_CONFIG_1, 0U, &adcRawValue);
}
