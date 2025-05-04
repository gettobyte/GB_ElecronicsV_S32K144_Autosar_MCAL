/*
 *  Slave main.c
 *
 *  Created on: 09-Mar-2025
 *      Author: Rohan
 */

/* Including necessary configuration files. */
#include "sdk_project_config.h"
#include "rain_sensor.h"

volatile int exit_code = 0;

void adc_convert(void);
uint16_t adcRawValue;

int main(void)
{
    Clock_Init();

    Port_Init();

    LIN_Slave_Init();

    Timer_Init();

    for(;;)
    {
    	OSIF_TimeDelay(10);
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
	/* Conversion Array filled */
//	txBuff1[0] = adcRawValue;
//	txBuff1[1] = adcRawValue;
//	txBuff1[2] = adcRawValue;
//	txBuff1[3] = adcRawValue;
//	txBuff1[4] = adcRawValue;
//	txBuff1[5] = adcRawValue;
//	txBuff1[6] = adcRawValue;
//	txBuff1[7] = adcRawValue;
}
