/* Including necessary configuration files. */
#include "Mcal.h"
#include "Clock_Ip.h"
#include "Port.h"
#include "Pwm.h"

volatile int exit_code = 0;
/* User includes */

void TestDelay(uint32 delay);
void TestDelay(uint32 delay)
{
   static volatile uint32 DelayTimer = 0;
   while(DelayTimer<delay)
   {
       DelayTimer++;
   }
   DelayTimer=0;
}

uint16_t PWM_DutyCycle(uint8_t DutyCycle_Percentage)
{
	/*
	 * Duty Cycle variation follow the range of 0x0000 to 0x8000
	 * which is 0 to 32768 in decimal. Therefore this conversion
	 * is important for proper duty cycle adjustment.
	 */
	uint16_t Converted_DutyCycle = ((32768 * DutyCycle_Percentage)/100);
	return (Converted_DutyCycle);
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
        if(exit_code != 0)
        {
            break;
        }
    }
    return exit_code;
}

/** @} */
