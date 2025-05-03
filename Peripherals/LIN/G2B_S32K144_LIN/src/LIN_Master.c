/*
 *  Master main.c
 *
 *  Created on: 09-Mar-2025
 *      Author: Rohan
 */

/* Including necessary configuration files. */
#include "sdk_project_config.h"
#include "freemaster.h"
#include "rain_sensor.h"

volatile int exit_code = 0;


int main(void)
{

	int dutyCycle = 0U;

	Clock_Init();
	Port_Init();
	PWM_Init();
	LIN_Init();
	Timer_Init();

    FMSTR_Init();

    for(;;)
    {
    	/* Header API */
//		error = LIN_DRV_MasterSendHeader(INST_LIN2, FRAME_MASTER_RECEIVE_DATA);
//		OSIF_TimeDelay(50);

        // Increase duty cycle: 0% to 100%
        for (uint8_t i = 0; i <= 100; i++) {
        	LED_Dimmer1(i);
            OSIF_TimeDelay(10);  // 50 ms delay
        }

        // Decrease duty cycle: 100% to 0%
        for (int8_t i = 100; i >= 0; i--) {
        	LED_Dimmer1(i);
            OSIF_TimeDelay(10);  // 50 ms delay
        }

        // Increase duty cycle: 0% to 100%
        for (uint8_t i = 0; i <= 100; i++) {
        	LED_Dimmer2(i);
            OSIF_TimeDelay(10);  // 50 ms delay
        }

        // Decrease duty cycle: 100% to 0%
        for (int8_t i = 100; i >= 0; i--) {
        	LED_Dimmer2(i);
            OSIF_TimeDelay(10);  // 50 ms delay
        }

        LED_SetFrequency(500);

		FMSTR_Poll();

        if(exit_code != 0)
        {
            break;
        }
    }
    return exit_code;
}
