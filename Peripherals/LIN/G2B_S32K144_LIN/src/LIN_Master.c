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
uint8_t calib, dev, wipe,
		rain, fail, splash,
		req, resp_error;

int main(void)
{
	Clock_Init();
	Port_Init();
	LIN_Master_Init();
	Timer_Init();

    FMSTR_Init();

    for(;;)
    {
    	// Message ID is 59U
    	error = LIN_MASTER_Transmit_Data(120U, 25U, 8U, 8U,
    									 8U, 1U, 1U, 1U);

		OSIF_TimeDelay(1000);

		error = LIN_MASTER_Receive_Data();

		OSIF_TimeDelay(1000);

		SLAVE_unpackControlMessage(SLAVE_RxBuff1, &calib, &dev,
		    						 &wipe, &rain, &fail,
									 &splash, &req, &resp_error);

		OSIF_TimeDelay(1000);

		FMSTR_Poll();

        if(exit_code != 0)
        {
            break;
        }
    }
    return exit_code;
}
