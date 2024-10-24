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

	uint32 blinker = 0;
	uint8 blinker_direction = 0;
	uint8 color_shifter = 0;
	uint8 color_shifter_direction = 0;
    for(;;)
    {
    	if(Dio_ReadChannel(DioConf_DioChannel_SW_1) == STD_LOW)
    	{
    		if(blinker_direction == 0)
			{
				if(blinker <= 1000000)
				{
					blinker += 100000;
				}
				else
				{
					blinker_direction = 1;
				}
			}

			else if(blinker_direction == 1)
			{
				if(blinker >= 150000)
				{
					blinker -= 100000;
				}
				else
				{
					blinker_direction = 0;
				}
			}
    	}
    	if(Dio_ReadChannel(DioConf_DioChannel_SW_2) == STD_LOW)
		{
    		if(color_shifter_direction == 0)
			{
				if(color_shifter <= 7)
				{
					color_shifter += 1;
				}
				else
				{
					color_shifter_direction = 1;
				}
			}

			else if(color_shifter_direction == 1)
			{
				if(color_shifter >= 0)
				{
					color_shifter -= 1;
				}
				else
				{
					color_shifter_direction = 0;
				}
			}
		}
    	switch (color_shifter) {
			case 1:

				Dio_WriteChannel(DioConf_DioChannel_GreenLED, STD_LOW);
				testDelay(blinker);
				Dio_WriteChannel(DioConf_DioChannel_GreenLED, STD_HIGH);
				testDelay(blinker);

				break;
			case 2:

				Dio_WriteChannel(DioConf_DioChannel_RedLED, STD_LOW);
				testDelay(blinker);
				Dio_WriteChannel(DioConf_DioChannel_RedLED, STD_HIGH);
				testDelay(blinker);

				break;
			case 3:

				Dio_WriteChannel(DioConf_DioChannel_BlueLED, STD_LOW);
				testDelay(blinker);
				Dio_WriteChannel(DioConf_DioChannel_BlueLED, STD_HIGH);
				testDelay(blinker);

				break;
			case 4:
				Dio_WriteChannel(DioConf_DioChannel_BlueLED, STD_LOW);
				Dio_WriteChannel(DioConf_DioChannel_GreenLED, STD_LOW);
				testDelay(blinker);
				Dio_WriteChannel(DioConf_DioChannel_BlueLED, STD_HIGH);
				Dio_WriteChannel(DioConf_DioChannel_GreenLED, STD_HIGH);
				testDelay(blinker);

				break;
			case 5:

				Dio_WriteChannel(DioConf_DioChannel_GreenLED, STD_LOW);
				Dio_WriteChannel(DioConf_DioChannel_RedLED, STD_LOW);
				testDelay(blinker);
				Dio_WriteChannel(DioConf_DioChannel_GreenLED, STD_HIGH);
				Dio_WriteChannel(DioConf_DioChannel_RedLED, STD_HIGH);
				testDelay(blinker);

				break;
			case 6:
				Dio_WriteChannel(DioConf_DioChannel_RedLED, STD_LOW);
				Dio_WriteChannel(DioConf_DioChannel_BlueLED, STD_LOW);
				testDelay(blinker);
				Dio_WriteChannel(DioConf_DioChannel_RedLED, STD_HIGH);
				Dio_WriteChannel(DioConf_DioChannel_BlueLED, STD_HIGH);
				testDelay(blinker);

				break;
			case 7:
				Dio_WriteChannel(DioConf_DioChannel_RedLED, STD_LOW);
				Dio_WriteChannel(DioConf_DioChannel_BlueLED, STD_LOW);
				Dio_WriteChannel(DioConf_DioChannel_GreenLED, STD_LOW);
				testDelay(blinker);
				Dio_WriteChannel(DioConf_DioChannel_RedLED, STD_HIGH);
				Dio_WriteChannel(DioConf_DioChannel_BlueLED, STD_HIGH);
				Dio_WriteChannel(DioConf_DioChannel_GreenLED, STD_HIGH);
				testDelay(blinker);

				break;
			default:
				break;
		}
        if(exit_code != 0)
        {
            break;
        }
    }
    return exit_code;
}

/** @} */
