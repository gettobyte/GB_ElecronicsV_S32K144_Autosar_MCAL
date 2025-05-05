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
	LIN_Master_Init();
	Timer_Init();

    FMSTR_Init();

    for(;;)
    {
    	error = LIN_Transmit_Data(INST_LIN2, 58U, 1U,
    					  2U, 100U, 0U,
						  1U, 1U,
						  0U);
		OSIF_TimeDelay(1000);



//        // Increase duty cycle: 0% to 100%
//        for (uint32_t i = 0; i <= 100; i++) {
//        	LED_Dimmer1(i);
//            OSIF_TimeDelay(1);  // 50 ms delay
//        }
//
//        // Decrease duty cycle: 100% to 0%
//        for (int32_t i = 100; i >= 100; i--) {
//        	LED_Dimmer1(i);
//            OSIF_TimeDelay(1);  // 50 ms delay
//        }

//        // Increase duty cycle: 0% to 100%
//        for (uint8_t i = 0; i <= 100; i++) {
//        	LED_Dimmer2(i);
//            OSIF_TimeDelay(10);  // 50 ms delay
//        }
//
//        // Decrease duty cycle: 100% to 0%
//        for (int8_t i = 100; i >= 0; i--) {
//        	LED_Dimmer2(i);
//            OSIF_TimeDelay(10);  // 50 ms delay
//        }

//        EnableOutputDrain1();
//        EnableOutputDrain2();
//        DisableOutputDrain1();
//        DisableOutputDrain2();

		FMSTR_Poll();

        if(exit_code != 0)
        {
            break;
        }
    }
    return exit_code;
}
