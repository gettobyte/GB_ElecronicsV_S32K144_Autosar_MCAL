
/**
*   @file example1.c
*    Functional Demo Code demonstarting how to use GPIO pins as output Low and output High for S32K144 MCU using Autosar MCAL DIO/GPIO layer.
*
*   @addtogroup main_module main module documentation
*   @{
*/

/* Including necessary configuration files. */
#include "Mcal.h"

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Clock_Ip.h"
#include "Port.h"
#include "Dio.h"


/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

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

volatile int exit_code = 0;

int main(void)
{

	Clock_Ip_StatusType clockStatus;

	clockStatus = Clock_Ip_Init(&Mcu_aClockConfigPB[0]);
	while (clockStatus != CLOCK_IP_SUCCESS)
	{
		clockStatus = Clock_Ip_Init(&Mcu_aClockConfigPB[0]);
	}

#if defined (FEATURE_CLOCK_IP_HAS_SPLL_CLK)
	/* Busy wait until the System PLL is locked */
	while (CLOCK_IP_PLL_LOCKED != Clock_Ip_GetPllStatus());
	Clock_Ip_DistributePll();
#endif


	    /* Initialize all pins using the Port driver */
	    Port_Init(NULL_PTR);


    for(;;)
    {
        Dio_WriteChannel(DioConf_DioChannel_BLUE_LED, STD_LOW);
        TestDelay(2000000);

        Dio_WriteChannel(DioConf_DioChannel_BLUE_LED, STD_HIGH);
        TestDelay(2000000);

        Dio_WriteChannel(DioConf_DioChannel_RED_LED, STD_LOW);
        TestDelay(2000000);

        Dio_WriteChannel(DioConf_DioChannel_RED_LED, STD_HIGH);
        TestDelay(2000000);

        /* Get input level of channels */
        Dio_WriteChannel(DioConf_DioChannel_GREEN_LED, STD_LOW);
        TestDelay(2000000);

        Dio_WriteChannel(DioConf_DioChannel_GREEN_LED, STD_HIGH);
        TestDelay(2000000);


    }
    return exit_code;
}

/** @} */
