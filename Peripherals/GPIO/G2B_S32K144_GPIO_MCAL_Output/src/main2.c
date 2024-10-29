/*
 * main2.c
 *
 *  Created on: 25-Oct-2024
 *      Author: singh
 */

/* Including necessary configuration files. */
#include "Mcal.h"
#include "Mcu.h"
#include "Port.h"
#include "Dio.h"
volatile int exit_code = 0;
/* User includes */
void testDelay(uint32 value);
void testDelay(uint32 value)
{
	while(value > 0)
	{
		value--;
	}
}

int main(void)
{

	Mcu_Init(&Mcu_Config_BOARD_InitPeripherals);
	 /* Initialize the clock tree and apply PLL as system clock */
	Mcu_InitClock(McuClockSettingConfig_0);
	#if (MCU_NO_PLL == STD_OFF)
	while ( MCU_PLL_LOCKED != Mcu_GetPllStatus() )
	{
		/* Busy wait until the System PLL is locked */
	}
	Mcu_DistributePllClock();
	#endif
	Mcu_SetMode(McuModeSettingConf_0);


	Port_Init(NULL_PTR);

//	uint32 blinker = 0;
//	uint8 blinker_direction = 0;
//	uint8 color_shifter = 0;
//	uint8 color_shifter_direction = 0;
    for(;;)
    {
    	if(Dio_ReadChannel(DioConf_DioChannel_SW_1) == STD_LOW)
    	{
			Dio_WriteChannel(DioConf_DioChannel_RedLED, STD_LOW);
			testDelay(1000000);
			Dio_WriteChannel(DioConf_DioChannel_RedLED, STD_HIGH);
			testDelay(1000000);
    	}
    	if(Dio_ReadChannel(DioConf_DioChannel_SW_2) == STD_LOW)
		{
			Dio_WriteChannel(DioConf_DioChannel_GreenLED, STD_LOW);
			testDelay(1000000);
			Dio_WriteChannel(DioConf_DioChannel_GreenLED, STD_HIGH);
			testDelay(1000000);
		}
        if(exit_code != 0)
        {
            break;
        }
    }
    return exit_code;
}
