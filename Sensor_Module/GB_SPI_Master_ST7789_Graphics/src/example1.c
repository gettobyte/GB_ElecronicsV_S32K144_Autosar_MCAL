
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
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

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

#define JEDECID 0x9F

#define gb_W25_CS_pin_low()  Dio_WriteChannel(DioConf_DioChannel_G2B_W25_CE, 0);
#define gb_W25_CS_pin_high() Dio_WriteChannel(DioConf_DioChannel_G2B_W25_CE, 1);

uint8_t tx_buff[10];
uint8_t rx_buff[10];

uint8 CanData1[8] = {0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08};  // 8 Bytes of Data

//uint8 CanData2[8] = {1,2,3,4,5,6,7,8};  // 8 Bytes of Data


char data[5] = { '10', '2', '3', '4', '5'};

uint8 data1[5] = { '1', '2', '3', '4', '5'};


const char* uint8_to_string(uint8 uint8_val[], size_t len)
{
//	char formattedString[len * 5];

	char* formattedString = (char*) malloc(len *5);

	char* ptr = formattedString;
	for(size_t i = 0; i<len; i++)
	{
		if(i < len -1)
		{
			ptr += sprintf(ptr, "0x%02x, ", uint8_val[i]);
		} else {
			ptr += sprintf(ptr, "0x%02X", uint8_val[i]);
		}
	}

	const char* constFormattedString = formattedString;

	free(formattedString);

	return constFormattedString;


}

const char* string1;
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
	ST7789_Fill_Color(ST77XX_RED);
	TestDelay(700000);

    for(;;)
    {
    		ST7789_SetAddressWindow(ST7789_XStart,ST7789_YStart, ST7789_XEnd, ST7789_YEnd);
    	    ST7789_Fill_Color(ST77XX_BLACK);

    	    TestDelay(700000);

    	    string1 = uint8_to_string(CanData1, 8);

    	    ST7789_SetAddressWindow(ST7789_XStart,ST7789_YStart, ST7789_XEnd, ST7789_YEnd);

    	    ST7789_WriteString(0, 80, string1, Font_16x26, ST77XX_NEON_GREEN, ST77XX_BLACK);

    	    free(string1);

    	    ST7789_WriteString(0, 106, "Industrial", Font_16x26,ST77XX_WHITE, ST77XX_BLACK);

    	    ST7789_WriteString(0, 132, "Hardware kits", Font_16x26,ST77XX_WHITE, ST77XX_BLACK);

    	    ST7789_WriteString(0, 158, "Based on", Font_16x26, ST77XX_NEON_GREEN, ST77XX_BLACK);

    	    ST7789_WriteString(0, 158+26, "Industrial ", Font_16x26, ST77XX_NEON_GREEN, ST77XX_BLACK);

    	    ST7789_WriteString(0, 210, "MCU's/MPU's/ASIC's", Font_16x26, ST77XX_WHITE, ST77XX_BLACK);

    	    ST7789_WriteString(0, 236, "IC's", Font_16x26, ST77XX_WHITE, ST77XX_BLACK);

    	    ST7789_WriteString(0, 262, "Like of :#NXP ", Font_16x26, ST77XX_NEON_GREEN, ST77XX_BLACK);

    	    ST7789_WriteString(0, 288, "#TI,#STM,#NRF and Etc", Font_16x26, ST77XX_NEON_GREEN, ST77XX_BLACK);

    	    ST7789_SetAddressWindow(ST7789_XStart,ST7789_YStart, ST7789_XEnd, ST7789_YEnd);


    	    TestDelay(700000);

    }
    return exit_code;
}

/** @} */
