
/**
*   @file example2.c
*   Functional Demo code demonstarting how to use GPIO input for reading the state of pin using S32K144 and autosar mcal modules
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
#include "Port.h"
#include "Clock_Ip.h"
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
/* User includes */
Dio_LevelType Switch1_Level, Switch2_Level;

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
        Switch1_Level = Dio_ReadChannel(DioConf_DioChannel_Switch1);
        if(Switch1_Level == 1)
        {
            Dio_WriteChannel(DioConf_DioChannel_BLUE_LED, STD_HIGH);
        }else
        {
        	Dio_WriteChannel(DioConf_DioChannel_BLUE_LED, STD_LOW);
        }

        Switch2_Level = Dio_ReadChannel(DioConf_DioChannel_Switch2);
        if(Switch2_Level == 1)
        {
           Dio_WriteChannel(DioConf_DioChannel_GREEN_LED, STD_HIGH);
        }else
        {
           Dio_WriteChannel(DioConf_DioChannel_GREEN_LED, STD_LOW);
        }




    }
    return exit_code;
}

/** @} */
