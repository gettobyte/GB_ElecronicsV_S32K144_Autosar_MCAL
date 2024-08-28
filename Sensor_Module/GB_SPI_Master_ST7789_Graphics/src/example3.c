
/**
*   @file main.c
*
*   @addtogroup main_module main module documentation
*   @{
*/

/* Including necessary configuration files. */
#include "Mcal.h"
#include "Clock_Ip.h"
#include "Port.h"
#include "Lpspi_Ip.h"
#include "Dio.h"
#include "ST7789_low_level.h"
#include "fonts.h"

volatile int exit_code = 0;
/* User includes */

uint8 txBuffer[1] = {0x36};
uint8 rxBuffer[1];
uint16 numberOfBytes = 1u;
uint32 timeOut = 1000000u;

/*!
  \brief The main function for the project.
  \details The startup initialization sequence is the following:
 * - startup asm routine
 * - main()
*/

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

int main(void)
{
	Clock_Ip_StatusType clockStatus;

	Lpspi_Ip_StatusType x;

    //Clock Configuration

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

    Lpspi_Ip_Init(&Lpspi_Ip_PhyUnitConfig_SpiPhyUnit_0_BOARD_InitPeripherals);


	GB_ST7789_Init();

	TestDelay(700000);
	ST7789_SetAddressWindow(ST7789_XStart,ST7789_YStart, ST7789_XEnd, ST7789_YEnd);
	ST7789_Fill_Color(ST77XX_BLACK);
	TestDelay(700000);


    for(;;)
    {

    	    ST7789_Fill_Color(ST77XX_WHITE);
    		ST7789_SetAddressWindow(ST7789_XStart,ST7789_YStart, ST7789_XEnd, ST7789_YEnd);

    		ST7789_Fill_Color(ST77XX_RED);
    		ST7789_SetAddressWindow(ST7789_XStart,ST7789_YStart, ST7789_XEnd, ST7789_YEnd);

    		ST7789_Fill_Color(ST77XX_GREEN);
    		ST7789_SetAddressWindow(ST7789_XStart,ST7789_YStart, ST7789_XEnd, ST7789_YEnd);

    		ST7789_Fill_Color(ST77XX_NEON_GREEN);
    		ST7789_SetAddressWindow(ST7789_XStart,ST7789_YStart, ST7789_XEnd, ST7789_YEnd);

    		ST7789_Fill_Color(ST77XX_NEON_GREEN);
    		ST7789_SetAddressWindow(ST7789_XStart,ST7789_YStart, ST7789_XEnd, ST7789_YEnd);

    		ST7789_Fill_Color(ST77XX_BLUE);
    		ST7789_SetAddressWindow(ST7789_XStart,ST7789_YStart, ST7789_XEnd, ST7789_YEnd);

    		ST7789_Fill_Color(ST77XX_CYAN);
    		ST7789_SetAddressWindow(ST7789_XStart,ST7789_YStart, ST7789_XEnd, ST7789_YEnd);

    		ST7789_Fill_Color(ST77XX_MAGENTA);
    		ST7789_SetAddressWindow(ST7789_XStart,ST7789_YStart, ST7789_XEnd, ST7789_YEnd);

    		ST7789_Fill_Color(ST77XX_YELLOW);
    		ST7789_SetAddressWindow(ST7789_XStart,ST7789_YStart, ST7789_XEnd, ST7789_YEnd);

    		ST7789_Fill_Color(ST77XX_ORANGE);
    		ST7789_SetAddressWindow(ST7789_XStart,ST7789_YStart, ST7789_XEnd, ST7789_YEnd);

    }
    return exit_code;
}

/** @} */
