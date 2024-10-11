/* Including necessary configuration files. */
#include "Mcal.h"
#include "Clock_Ip.h"
#include "Port.h"
#include "Pwm.h"

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

uint16_t pwm_duty_cycle(uint8_t duty_cycle_percent)
{

	uint16_t period = ((32768 * duty_cycle_percent)/100);

	return (period);

}

int main(void)
{
	Clock_Ip_StatusType clockStatus;

	clockStatus = Clock_Ip_Init(&Mcu_aClockConfigPB_BOARD_InitPeripherals[0]);
	while (clockStatus != CLOCK_IP_SUCCESS)
	{
		clockStatus = Clock_Ip_Init(&Mcu_aClockConfigPB_BOARD_InitPeripherals[0]);
	}
	/* Busy wait until the System PLL is locked */
	while (CLOCK_IP_PLL_LOCKED != Clock_Ip_GetPllStatus());
	Clock_Ip_DistributePll();

	/* Initialize all pins using the Port driver */
	Port_Init(NULL_PTR);

	Pwm_Init(&Pwm_Config_BOARD_InitPeripherals);

}
