/* Including necessary configuration files. */
#include "Mcal.h"
#include "Clock_Ip.h"
#include "Port.h"
#include "Pwm.h"
#include "Platform.h"
#include "W2821B.h"

volatile int exit_code = 0;
/* User includes */
volatile uint32_t data = 0b000000001111111100000000; // Example data
volatile uint8_t bit_index = 0;
volatile uint8_t prev_bit_flag = 2; // Initialize to an invalid state (e.g., 2)
volatile uint8_t transmission_count = 0; // Count the number of 24-bit transmissions

void W2821_Callback(void)
{
//	if (bit_index < 24)
//	{
//		// Extract the current bit (starting from MSB)
//		uint8_t current_bit = (data >> (23 - bit_index)) & 0x01;
//
//		// Only update the duty cycle if the current bit differs from the previous bit
//		if (current_bit != prev_bit_flag)
//		{
//			if (current_bit == 0)
//			{
//				Pwm_SetDutyCycle(0, 10768); // Set 40% for 0
//			} else
//			{
//				Pwm_SetDutyCycle(0, 22000); // Set 60% for 1
//			}
//			prev_bit_flag = current_bit; // Update the previous bit flag
//			}
//
//	        bit_index++; // Move to the next bit
//	}
//	else
//	{
//		bit_index = 0;         // Reset after completing 24 bits
//		prev_bit_flag = 2;     // Reset flag for new data
//		transmission_count++;         // Increment the transmission count
//
//		if (transmission_count >= 3)
//		{
//			TestDelay(2400000); // Set complete flag after 3 transmissions
//			transmission_count = 0;      // Reset the counter for future batches
//		}
//	}
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

	/* Initialize all ISR using the Platform driver */
	Platform_Init(NULL_PTR);

	/* Initialize all PWM Configuration using the PWM driver */
	Pwm_Init(&Pwm_Config_BOARD_InitPeripherals);
	/* Initialize all PWM Notification using the PWM driver */
	Pwm_EnableNotification(0, PWM_RISING_EDGE);

	Pwm_SetDutyCycle(0, 1000);

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
