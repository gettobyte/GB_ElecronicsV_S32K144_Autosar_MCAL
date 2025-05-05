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
uint8_t calib, dev, wipe, rain, fail, splash, req, resp_error;

int main(void)
{
    Clock_Init();

    Port_Init();

    LIN_Slave_Init();

    Timer_Init();

    for(;;)
    {
    	unpackControlMessage(RxBuff1, &calib, &dev,
    						 &wipe, &rain, &fail,
							 &splash, &req, &resp_error);
        if(exit_code != 0)
        {
            break;
        }
    }
    return exit_code;
}

