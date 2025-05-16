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
uint8_t speed, temp, sensi,vehicle_type,
		windscreen_type, wash_wipe,
		parkpos, wiping_comm, dev_mode;
uint8_t calibrationMode, devMode,
		wipeMode, rainInfo, sensorFail,
		splash, wipeReq, responseError;

int main(void)
{
    Clock_Init();

    Port_Init();

    PWM_Init();

    LIN_Slave_Init();

    ADC_Init();

    Timer_Init();

    LED_Dimmer1(100);
    LED_Dimmer2(100);

    for(;;)
    {
    	rainInfo = ADC_Conv();

    	if(rainInfo < 26)
    	{
    		wipeMode = 0;
    	}
    	else if (rainInfo < 51)
    	{
			wipeMode = 1;
		}
    	else if (rainInfo < 76)
    	{
    		wipeMode = 2;
    	}
    	else
    	{
    		wipeMode = 3;
    	}

    	SLAVE_packControlMessage(SLAVE_TxBuff1, calibrationMode, devMode,
    							 wipeMode, rainInfo, sensorFail,
								 splash, wipeReq, responseError);

    	MASTER_unpackControl_Command(MASTER_RxBuff1, &speed, &temp, &sensi,
    								 &vehicle_type, &windscreen_type, &wash_wipe,
									 &parkpos, &wiping_comm, &dev_mode);

    	if(wiping_comm == 1)
    	{
    		EnableOutputDrain1();
    		EnableOutputDrain2();
    	}

        if(exit_code != 0)
        {
            break;
        }
    }
    return exit_code;
}

