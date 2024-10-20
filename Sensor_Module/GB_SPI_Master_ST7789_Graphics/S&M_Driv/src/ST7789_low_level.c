

#include <Dio.h>
#include <Lpspi_Ip.h>
#include <Lpspi_Ip_Types.h>
#include <PlatformTypes.h>
#include <stdio.h>
#include <sys/_stdint.h>
#include <ST7789_low_level.h>

static void TestDelay(uint32 delay);
static void TestDelay(uint32 delay)
{
   static volatile uint32 DelayTimer = 0;
   while(DelayTimer<delay)
   {
       DelayTimer++;
   }
   DelayTimer=0;
}

 extern const Lpspi_Ip_ExternalDeviceType Lpspi_Ip_DeviceAttributes_SpiExternalDevice_0_BOARD_InitPeripherals; \


#define gb_ST7789_DC_pin_low()  Dio_WriteChannel(DioConf_DioChannel_GB_ST7789_DC, 0);
#define gb_ST7789_DC_pin_high() Dio_WriteChannel(DioConf_DioChannel_GB_ST7789_DC, 1);

#define gb_ST7789_CS_pin_low()  Dio_WriteChannel(DioConf_DioChannel_GB_ST7789_CS, 0);
#define gb_ST7789_CS_pin_high() Dio_WriteChannel(DioConf_DioChannel_GB_ST7789_CS, 1);

#define gb_ST7789_reset_pin_low()  Dio_WriteChannel(DioConf_DioChannel_GB_ST7789_Reset, 0);
#define gb_ST7789_reset_pin_high() Dio_WriteChannel(DioConf_DioChannel_GB_ST7789_Reset, 1);



// For ST7789 Driver IC and we are using 240*240 pixel and 1.3 inch display
#define ST7789_WIDTH 240
#define ST7789_HEIGHT 240

#define GB_ST7789_TimeOut 1000
/*
 * @brief write data to ST7789 controller
 * @param commonByte -> address of ST7789 that needs to be accessed
 * @param dataBytes  -> pointer to the data buffer that needs to send/write at that address
 * @param numDataBytes -> number of data bytes that needs to send
 */

void GB_MA_SPI_send_byte_conti(uint8_t *val, uint16_t count, uint32_t timeout)
{
	static uint8_t rx_val;
	//Lpspi_Ip_SyncTransmit(&Lpspi_Ip_DeviceAttributes_SpiExternalDevice_0_BOARD_InitPeripherals,val, &rx_value, count, timeout); //Transfer the data from MOSI to MISO

	Lpspi_Ip_SyncTransmit(&Lpspi_Ip_DeviceAttributes_W25_SPI_Flash_BOARD_InitPeripherals,val, &rx_val, count, timeout); //Transfer the data from MOSI to MISO

}


void GB_MA_SPI_exchange_byte(uint8_t *rx_value, uint8_t count, uint32_t timeout)
{
	static uint8_t val = 0x00;
	Lpspi_Ip_SyncTransmit(&Lpspi_Ip_DeviceAttributes_W25_SPI_Flash_BOARD_InitPeripherals,&val, rx_value, count, timeout); //Transfer the data from MOSI to MISO
//	return rx_value;
}


//uint8_t GB_MA_SPI_exchange_byte(uint8_t *rx_value, uint8_t count)
//{
//	static uint8_t val = 0x00;
//	Lpspi_Ip_SyncTransmit(&Lpspi_Ip_DeviceAttributes_SpiExternalDevice_0_BOARD_InitPeripherals,val, &rx_value, count, 1); //Transfer the data from MOSI to MISO
//	return rx_value;
//}


void GB_STT7789_SPI_CS_low()
{
	gb_ST7789_CS_pin_low();
}

void GB_STT7789_SPI_CS_high()
{
	gb_ST7789_CS_pin_high();
}

void GB_ST7789_SendCommand(uint8_t commandByte, uint8_t *dataBytes, uint8_t numDataBytes, uint32_t timeout)
{

	gb_ST7789_DC_pin_low();
	GB_MA_SPI_send_byte_conti(&commandByte,1,timeout);
	gb_ST7789_DC_pin_high();

	if(numDataBytes != 0)
	{
	GB_MA_SPI_send_byte_conti(dataBytes, numDataBytes, timeout );
	}

}

void GB_ST7789_SendData(uint8_t *data, uint32_t data_size)
{
	gb_ST7789_DC_pin_high();

	GB_MA_SPI_send_byte_conti(data, data_size, 5000);
}

void GB_ST7789_SendDataIm( const uint8_t *data, uint32_t data_size)
{
	gb_ST7789_DC_pin_high();

	GB_MA_SPI_send_byte_conti(data, data_size, 5000);
}

void GB_ST7789_Init()
{

	uint8_t ColorMod = ST7789_16_Bit_5_6_5_Input_64K_Color;
	uint8_t MADCTL_SetRotation1 = 0x80; //MX = 0, MY=1, MX = 0
	uint8_t MADCTL_SetRotation0 = 0xC0; // MY = 0, MX= 0, RGB is set

	uint8_t ColAddr[4]={ 0x00,0x00,0x00,240};
	uint8_t RowAddr[4] = {0x00,0x00,320>>8,320&0xFF};
	uint8_t data;

	gb_ST7789_reset_pin_low();
	TestDelay(72000);
	gb_ST7789_reset_pin_high();
	TestDelay(144000);

	gb_ST7789_CS_pin_low();

	GB_ST7789_SendCommand(ST77XX_SWRESET, &data, 0, GB_ST7789_TimeOut );

	GB_ST7789_SendCommand(ST77XX_SLPOUT, &data, 0, GB_ST7789_TimeOut );

	GB_ST7789_SendCommand(ST77XX_COLMOD, &ColorMod, 1, GB_ST7789_TimeOut);   // Set color Mode

	//GB_ST7789_SendCommand(ST77XX_MADCTL, &MADCTL_SetRotation1, 1, 10);  // Set display rotation

	GB_ST7789_SendCommand(ST77XX_INVON, &data, 0, GB_ST7789_TimeOut);

	GB_ST7789_SendCommand(ST77XX_NORON, &data, 0, GB_ST7789_TimeOut);

	GB_ST7789_SendCommand(ST77XX_DISPON, &data, 0, GB_ST7789_TimeOut);

	GB_ST7789_SendCommand(ST77XX_MADCTL, &MADCTL_SetRotation0, 1, GB_ST7789_TimeOut);
	gb_ST7789_CS_pin_high();
}

/**
 * @brief Set address of DisplayWindow, this API sets the cursor for ST7789
 * Total canvas size is of 240*320 for ST7789 Driver IC, that is 240 columns and 320 rows.
 * But the module of ST7789, which we are using has canvas size of 240*240.
 * That is 240 columns from 0->239 amd 240 rows from 80->319.
 * Now columns are represented by x-axis, their value would be ranging from 0 to 239
 * and rows are represented by y-axis, their value would be ranging from 80 to 319.
 *
 *       (0,0)   -----------------------(239,0)      --> x-axis
 *               |*********************|
 *               |*********************|
 *               |*********************|
 *               |*********************|
 *               |*********************|
 *               (coloumns from 0 to 240)
 *       (0,80)  |---------------------|(239,80)
 *               |-|-|-|-|-|-|-|-|-|-|-|
 *           R   |-|-|-|-|-|-|-|-|-|-|-|
 *           O   |-|-|-|-|-|-|-|-|-|-|-|
 *           W   |-|-|-|-|-|-|-|-|-|-|-|
 *           S   |-|-|-|-|-|-|-|-|-|-|-|
 *               |-|-|-|-|-|-|-|-|-|-|-|
 *           F   |-|-|-|-|-|-|-|-|-|-|-|
 *           R   |-|-|-|-|-|-|-|-|-|-|-|
 *           O   |-|-|-|-|-|-|-|-|-|-|-|
 *           M   |-|-|-|-|-|-|-|-|-|-|-|
 *               |-|-|-|-|-|-|-|-|-|-|-|
 *          80   |-|-|-|-|-|-|-|-|-|-|-|
 *          to   |-|-|-|-|-|-|-|-|-|-|-|
 *          319  |-|-|-|-|-|-|-|-|-|-|-|
 *               |-|-|-|-|-|-|-|-|-|-|-|
 *               |-|-|-|-|-|-|-|-|-|-|-|
 *               |-|-|-|-|-|-|-|-|-|-|-|
 *               |-|-|-|-|-|-|-|-|-|-|-|
 *      (0,319)  -----------------------(239,319)
 *
 *               |
 *               |^
 *               y axis
 *
 * So for using full canvas of ST7789, xStart = 0, xEnd=239
 * For using full canvas of ST7789, yStart = 0, yEnd = 319
 *
 * @param x0&y0 -> x(Xstart) and y(Ystart) axis start
 * @param x1&y1 -> x(Xend) and y(Yend) axis end
 * @return none
 */

void ST7789_SetAddressWindow(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1)
{
	gb_ST7789_CS_pin_low();

	uint16_t x_start = x0;
	uint16_t x_end = x1;
	uint16_t y_start = y0;
	uint16_t y_end = y1;

	/*
	 *
	 */
	uint8_t ColAddr[4]={ x_start >> 8,x_start & 0xFF,x_end >> 8, x_end & 0xff};
	//uint8_t ColAddr[4]={ 0x00,0x00,0x00, 0xEF};

	GB_ST7789_SendCommand(ST77XX_CASET, ColAddr, 4, GB_ST7789_TimeOut);
	uint8_t RowAddr[4] = { y_start >> 8, y_start & 0xFF, y_end >> 8, y_end & 0xFF};
	//uint8_t RowAddr[4] = { 0x00, 0x50,0x01, 0x3F};

	GB_ST7789_SendCommand(ST77XX_RASET, RowAddr, 4, GB_ST7789_TimeOut);

	gb_ST7789_CS_pin_high();
}
uint16_t total =0;
void ST7789_Fill_Color(uint16_t color)
{
	/* Old Code with double for loop*/
//	uint16_t i,j;
//	uint8_t data;
//	gb_ST7789_CS_pin_low();
//
//
//	GB_ST7789_SendCommand(ST77XX_RAMWR, &data, 0, GB_ST7789_TimeOut);
//
//	for (i =0; i < ST7789_WIDTH; i++)
//		for (j=0; j<ST7789_HEIGHT; j++)
//		{
//			uint8_t data[] = { color >>8, color & 0xFF};
//			GB_ST7789_SendData(data, sizeof(data));
//		}
//
//	gb_ST7789_CS_pin_high();

	/* New Code with single for loop*/
	gb_ST7789_CS_pin_low();

	// Send the RAMWR (Memory Write) command to the display
	uint8_t data;
	GB_ST7789_SendCommand(ST77XX_RAMWR, &data, 0, GB_ST7789_TimeOut);

	// Create the data array for the color to be sent
	uint8_t colorData[] = { color >> 8, color & 0xFF };

	// Send the color data for the entire screen in one go
	// ST7789_WIDTH * ST7789_HEIGHT is the total number of pixels
	// Each pixel requires 2 bytes (16-bit color)
	for (uint32_t i = 0; i < (ST7789_WIDTH * ST7789_HEIGHT); i++)
	{
		GB_ST7789_SendData(colorData, sizeof(colorData));
	}

	// Set the CS (Chip Select) pin high to end communication
	gb_ST7789_CS_pin_high();

}
uint32_t length = 0;
uint16_t i,j;

/*
 * @brief This API, will print images on the canvas
 * @param x -> value of cell(x cordinate) from where image should start(range 0->240)
 * @param y -> value of cell(y cordinate) from where image should start(range 0->240)
 * @param w -> width of image
 * @param h -> height of image
 * @param data -> pointer to array of bytes of image
 */
void ST7789_DrawImage(uint16_t x, uint16_t y, uint16_t w, uint16_t h, const uint8_t *data)
{
	uint8_t d_data;

	ST7789_SetAddressWindow(x,y, (x+w)-1, (y+h)-1);
	gb_ST7789_CS_pin_low();

	GB_ST7789_SendCommand(ST77XX_RAMWR, &d_data, 0, GB_ST7789_TimeOut);

	uint16_t BytesToSend,NoOfRounds =0;
	uint32_t TotalCellsToBeFilled = w*h;
	uint32_t TotalBytesToBeFilled = w*h*2;
	if(TotalBytesToBeFilled <= 14400)
	{
		NoOfRounds = 1;
		BytesToSend = TotalBytesToBeFilled;
	}else if(TotalBytesToBeFilled > 14400)
	{
		NoOfRounds = TotalBytesToBeFilled/7200;
		BytesToSend = TotalBytesToBeFilled/NoOfRounds;
	}

	for (j =0; j<NoOfRounds; j++)
	 {
		{
			GB_ST7789_SendDataIm(&data[(BytesToSend *j)], BytesToSend);

		}
	}

   gb_ST7789_CS_pin_high();

}

void ST7789DrawPixel(uint16_t x, uint16_t y, uint16_t color)
{
	ST7789_SetAddressWindow(x,y,x,y);
	uint8_t data[] = {color>>8, color & 0xFF};
	gb_ST7789_CS_pin_low();
	GB_ST7789_SendData(data, sizeof(data));
	gb_ST7789_CS_pin_high();

}

//void ST7789_DrawLine( uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1)
//{
//
//}
/**
 * @brief Write a char
 * @param  x&y -> cursor of the start point.
 * @param ch -> char to write
 * @param font -> fontstyle of the string
 * @param color -> color of the char
 * @param bgcolor -> background color of the char
 * @return  none
 */
void ST7789_WriteChar(uint16_t x, uint16_t y, char ch, FontDef font, uint16_t color, uint16_t bgcolor)
{
	uint32_t i, b, j;
	uint8_t d_ata;

	ST7789_SetAddressWindow(x,y, (x+font.width)-1, (y+font.height)-1);

	gb_ST7789_CS_pin_low();

	GB_ST7789_SendCommand(ST77XX_RAMWR, &d_ata, 0, GB_ST7789_TimeOut);

	for (i = 0; i < font.height; i++)
	{
		b = font.data[(ch - 32) * font.height + i];
		for (j = 0; j < font.width; j++)
		{
			if ((b << j) & 0x8000)
			{
				uint8_t data[] = {color >> 8, color & 0xFF};

				GB_ST7789_SendData(data, sizeof(data));
			}
			else
			{
				uint8_t data[] = {bgcolor >> 8, bgcolor & 0xFF};

				GB_ST7789_SendData(data, sizeof(data));
			}
		}
	}
	gb_ST7789_CS_pin_high();
}
/**
 *
 *  *       (0,0)   -----------------------(239,0)      --> x-axis
 *               |*********************|
 *               |*********************|
 *               |*********************|
 *               |*********************|
 *               |*********************|
 *               (coloumns from 0 to 240)
 *       (0,80)  |---------------------|(239,80)
 *               |-|-|-|-|-|-|-|-|-|-|-|
 *           R   |-|-|-|-|-|-|-|-|-|-|-|
 *           O   |-|-|-|-|-|-|-|-|-|-|-|
 *           W   |-|-|-|-|-|-|-|-|-|-|-|
 *           S   |-|-|-|-|-|-|-|-|-|-|-|
 *               |-|-|-|-|-|-|-|-|-|-|-|
 *           F   |-|-|-|-|-|-|-|-|-|-|-|
 *           R   |-|-|-|-|-|-|-|-|-|-|-|
 *           O   |-|-|-|-|-|-|-|-|-|-|-|
 *           M   |-|-|-|-|-|-|-|-|-|-|-|
 *               |-|-|-|-|-|-|-|-|-|-|-|
 *          80   |-|-|-|-|-|-|-|-|-|-|-|
 *          to   |-|-|-|-|-|-|-|-|-|-|-|
 *          319  |-|-|-|-|-|-|-|-|-|-|-|
 *               |-|-|-|-|-|-|-|-|-|-|-|
 *               |-|-|-|-|-|-|-|-|-|-|-|
 *               |-|-|-|-|-|-|-|-|-|-|-|
 *               |-|-|-|-|-|-|-|-|-|-|-|
 *      (0,319)  -----------------------(239,319)
 *
 *               |
 *               |^
 *               y axis
 *
 * @brief Write a string
 * @param  x&y -> cursor of the start point.
 * @param str -> string to write
 * @param font -> fontstyle of the string
 * @param color -> color of the string
 * @param bgcolor -> background color of the string
 * @return  none
 * */
void ST7789_WriteString(uint16_t x, uint16_t y, const char *str, FontDef font, uint16_t color, uint16_t bgcolor)
{
	{
		while (*str)
		{
			if (x + font.width >= ST7789_WIDTH)
			{
				x = 0;
				y += font.height;
				if (y + font.height >= ST7789_HEIGHT)
				{
					break;
				}

				if (*str == ' ')
				{
					// skip spaces in the beginning of the new line
					str++;
					continue;
				}
			}
			ST7789_WriteChar(x, y, *str, font, color, bgcolor);
			x += font.width;
			str++;
		}
	}
}

void ST7789_WriteStringBox(uint16_t x, uint16_t y, uint16_t x1, uint16_t y1, const char *str, FontDef font, uint16_t color, uint16_t bgcolor)
{
	uint16_t x_temp = x;
	uint16_t y_temp = y;
	{
		{
			while (*str)
			{
				if (x + font.width >= ST7789_WIDTH)
				{
					x = 0;
					y += font.height;
					if (y + font.height >= ST7789_HEIGHT)
					{
						break;
					}

					if (*str == ' ')
					{
						// skip spaces in the beginning of the new line
						str++;
						continue;
					}
				}
				ST7789_WriteChar(x, y, *str, font, color, bgcolor);
				x += font.width;
				if(x>x1)
				{
					x = x_temp;
					y += font.height;
				}

				if(y>y1)
				{
					x = x_temp;
					y = y_temp;
				}
				str++;
			}
		}
	}

}
void ST7789_WriteDec(uint16_t x, uint16_t y, uint32_t gb_val, FontDef font, uint16_t color, uint16_t bgcolor)
		{
	unsigned char gb_buf[5];
	int8_t gb_ptr;
	for(gb_ptr=0;gb_ptr<=4;++gb_ptr)
	{
		if (x + font.width >= ST7789_WIDTH)
				{
					x = 0;
					y += font.height;
					if (y + font.height >= ST7789_HEIGHT)
					{
						break;
					}
				}

		gb_buf[gb_ptr] = (gb_val % 10) + '0';
		gb_val /= 10;
	}
	for(gb_ptr = gb_ptr-1;gb_ptr>=0;--gb_ptr)
	{
		ST7789_WriteChar(x, y, gb_buf[gb_ptr], font, color, bgcolor);
		x=x+font.width;
					}
}
void ST7789_Float(uint16_t x, uint16_t y, float gb_value, FontDef font, uint16_t color, uint16_t bgcolor)
{
	char gb_float_buff[10];
	sprintf(gb_float_buff,"%.2f",gb_value);
	ST7789_WriteString(x,y,gb_float_buff,font, color,bgcolor);

}

//void ST7789_DrawFilledRectangle(uint16_t x, uint16_t y, uint16_t w, uint16_t h, uint16_t color)
//{
//	//SPI start: chip select low
//   for(uint16_t i = x; i<x+w; i++)
//   {
//	   ST7789_DrawLineV
//	   //draw vertical line function
//   }
//   //SPI end: chip select high
//}
//
//void ST7789_DrawLineV()
//{
//	//SPI start: chip select low
//
//	ST7789_DrawLine();
//	//SPI end: chip select high
//}
