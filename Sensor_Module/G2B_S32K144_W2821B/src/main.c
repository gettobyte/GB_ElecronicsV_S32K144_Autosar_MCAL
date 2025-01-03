/* Including necessary configuration files. */
#include "Mcal.h"
#include "Clock_Ip.h"
#include "Port.h"
#include "Pwm.h"
#include "W2821B.h"

volatile int exit_code = 0;
/* User includes */
void TestDelay(uint32 delay)
{
   static volatile uint32 DelayTimer = 0;
   while(DelayTimer<delay)
   {
       DelayTimer++;
   }
   DelayTimer=0;
}
int main(void)
{
	Clock_Ip_StatusType clockStatus;
	/*********************Clock Configuration***********************/
	clockStatus = Clock_Ip_Init(&Mcu_aClockConfigPB_BOARD_InitPeripherals[0]);
	while (clockStatus != CLOCK_IP_SUCCESS)
	{
		clockStatus = Clock_Ip_Init(&Mcu_aClockConfigPB_BOARD_InitPeripherals[0]);
	}
	/* Busy wait until the System PLL is locked */
	while (CLOCK_IP_PLL_LOCKED != Clock_Ip_GetPllStatus());
	Clock_Ip_DistributePll();
	/***************************************************************/

	/* Initialize all pins using the Port driver */
	Port_Init(NULL_PTR);

	/* Initialize all PWM Configuration using the PWM driver */
	Pwm_Init(&Pwm_Config_BOARD_InitPeripherals);

    for(;;)
    {
    	Pwm_SetDutyCycle(0, 20971);
    	TestDelay(480000);
    	Pwm_SetDutyCycle(0, 11796);
		TestDelay(960000);
        if(exit_code != 0)
        {
            break;
        }
    }
    return exit_code;
}

/** @} */
