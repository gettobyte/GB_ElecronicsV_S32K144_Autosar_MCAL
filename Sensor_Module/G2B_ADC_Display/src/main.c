/*
 * Gettobyte Technologies Pvt Ltd 2024
 * brief@:  Using ADC to change the Blink LED Strength
 */



#ifdef __cplusplus
extern "C" {
#endif


/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Clock_Ip.h"
#include "Adc_Ip.h"
#include "Port.h"
#include "Lpspi_Ip.h"
#include "ST7789_low_level.h"
#include "fonts.h"
/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
#define ADC_CONTROL_CH         (0U)
#define ADC_BANDGAP            (819U) /* Vbandgap ~ 1.15V at 5.0V reference */
#define ADC_TOLERANCE(x,y)     ((x > y) ? (x - y) : (y - x))
#define RESULT_TOLERANCE       (150U)

/*==================================================================================================
*                                      EXTERN DECLARATIONS
==================================================================================================*/
extern void Adc_0_Isr(void);

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/
volatile boolean notif_triggered = FALSE;
volatile int exit_code = 0;
volatile uint16 data;

//Custom function for making a delay function(This is not optimized way)
//Just a temporary solution
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
	Adc_Ip_StatusType adcStatus;

//    Clock Configuration
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
	ST7789_SetAddressWindow(ST7789_XStart,ST7789_YStart, ST7789_XEnd, ST7789_YEnd);
	ST7789_Fill_Color(ST77XX_BLACK);

	/**** Part 1: Start ADC software trigger conversions ****/
	Adc_Ip_Init(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE, &AdcHwUnit_0_BOARD_INITPERIPHERALS);
	adcStatus = Adc_Ip_DoCalibration(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE);
	while (adcStatus != ADC_IP_STATUS_SUCCESS)
	{
		adcStatus = Adc_Ip_DoCalibration(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE);
	}

//	Adc_Ip_StartConversion(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE, ADC_IP_INPUTCHAN_EXT12, FALSE);
//	Adc_Ip_StartConversion(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE, ADC_IP_INPUTCHAN_EXT10, FALSE);

   ST7789_WriteString(5, 200, "ADC Value(Ref = 3.3V)", Font_11x18, ST77XX_NEON_GREEN, ST77XX_RED);
   ST7789_WriteString(15, 80, "ADC Value(Ref = 5V)", Font_11x18, ST77XX_WHITE, ST77XX_BLUE);

	for(;;)
	{

		Adc_Ip_StartConversion(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE, ADC_IP_INPUTCHAN_EXT12, FALSE);

		data = Adc_Ip_GetConvData(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE,0);
		ST7789_WriteDec(70, 150, data, Font_16x26, ST77XX_NEON_GREEN, ST77XX_BLACK);

		Adc_Ip_StartConversion(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE, ADC_IP_INPUTCHAN_EXT10, FALSE);

		data = Adc_Ip_GetConvData(ADCHWUNIT_0_BOARD_INITPERIPHERALS_INSTANCE,0);
		ST7789_WriteDec(70, 250, data, Font_16x26, ST77XX_NEON_GREEN, ST77XX_BLACK);

	}

}

/* END main */
/*!
** @}
*/
