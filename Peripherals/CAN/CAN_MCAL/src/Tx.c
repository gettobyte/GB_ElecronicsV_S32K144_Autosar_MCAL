/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : S32K14X
*   Dependencies         : none
*
*   Autosar Version      : 4.4.0
*   Autosar Revision     : ASR_REL_4_4_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 1.0.0
*   Build Version        : S32K1_RTD_1_0_0_D2108_ASR_REL_4_4_REV_0000_20210810
*
*   (c) Copyright 2020-2021 NXP Semiconductors
*   All Rights Reserved.
*
*   NXP Confidential. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/

/**
*   @file main.c
*
*   @addtogroup main_module main module documentation
*   @{
*/

/* Including necessary configuration files. */
#include "Mcal.h"
#include "Mcu.h"
#include "Clock_Ip.h"
#include "SchM_Can.h"  //For multiple CanTx and CanRx
#include "Port.h"
#include "Can.h"
#include "CanIf.h"
#include "CanIf_Can.h"

#include "Lpspi_Ip.h"
#include "Dio.h"
#include "ST7789_low_level.h"
#include "fonts.h"

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define CanInstance0 0U


uint8 dummyData[8] = {0,1,2,3,4,5,6,7};
uint8 ackData[8] = {1,1,1,1,1,1,1,1};

uint8 receivedData1[8];
uint8 receivedData2[8];
uint8 receivedData3[8];
uint8 receivedData4[8];

//Flexcan_Ip_StateType * state = flexcanState;
//Flexcan_Ip_StatusType status;
boolean Rx_Flag = false;
boolean Tx_Flag = false;

volatile int exit_code = 0;

void CanIf_ControllerModeIndication( uint8 ControllerId, Can_ControllerStateType ControllerMode )
{
	(void)ControllerId; //used for optimization
	(void)ControllerMode;
}

void CanIf_TxConfirmation(PduIdType CanTxPduId)
{
    (void)CanTxPduId;
    Tx_Flag = true;
}

void CanIf_RxIndication( const Can_HwType * Mailbox, const PduInfoType * PduInfoPtr )
{


	uint32 can_id = Mailbox -> CanId;
	uint32 can_mb = Mailbox -> Hoh;


	if (can_id == 0x310)
	{
	    for (int i = 0; i < 8; i++) {
	        receivedData1[i] = PduInfoPtr->SduDataPtr[i];
	    }
	}

	if (can_id == 0x320)
	{
	    for (int i = 0; i < 8; i++) {
	        receivedData2[i] = PduInfoPtr->SduDataPtr[i];
	    }
	}

	if (can_id == 0x330)
	{
	    for (int i = 0; i < 8; i++) {
	        receivedData3[i] = PduInfoPtr->SduDataPtr[i];
	    }
	}

	if (can_id == 0x340)
	{
	    for (int i = 0; i < 8; i++) {
	        receivedData4[i] = PduInfoPtr->SduDataPtr[i];
	    }
	}
    Rx_Flag = true;
}
void CanIf_ControllerBusOff(uint8 ControllerId)
{
    (void)ControllerId;
}

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

uint8 CanData1[8] = {0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08};  // 8 Bytes of Data


// function for converting CAN data into a string to print on LCD Screen
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

    Std_ReturnType ret;
    Can_ControllerStateType ctrStateType = CAN_CS_STARTED;


    /* Write your code here */
    Clock_Ip_Init(&Mcu_aClockConfigPB[0]);

    #if defined (FEATURE_CLOCK_IP_HAS_SPLL_CLK)
      while ( CLOCK_IP_PLL_LOCKED != Clock_Ip_GetPllStatus() )
      {
        /* Busy wait until the System PLL is locked */
      }
     Clock_Ip_DistributePll();
    #endif

    /* Initialize all pins using the Port driver */
    Port_Init(NULL_PTR);


    // SPI LCD Screen Code
    Lpspi_Ip_Init(&Lpspi_Ip_PhyUnitConfig_SpiPhyUnit_0_BOARD_InitPeripherals);
   	GB_ST7789_Init();

   	TestDelay(700000);
   	ST7789_SetAddressWindow(ST7789_XStart,ST7789_YStart, ST7789_XEnd, ST7789_YEnd);
   	ST7789_Fill_Color(ST77XX_RED);
   	TestDelay(700000);

   	// SPI LCD Screen Code

    Can_PduType TxData = {

        .id = 0x310,
        .swPduHandle = 1u,
        .length = 8u,
        .sdu = dummyData

    };

    Can_PduType  Ack = {

        .id = 0x330,
        .swPduHandle = 3u,
        .length = 8u,
        .sdu = ackData

    };


    Can_Init(&Can_Config_BOARD_InitPeripherals);

    ret = Can_SetControllerMode(CanInstance0, ctrStateType);


    for(;;)
    {

    	ST7789_SetAddressWindow(ST7789_XStart,ST7789_YStart, ST7789_XEnd, ST7789_YEnd);
    	    	    ST7789_Fill_Color(ST77XX_BLACK);

    	    	    TestDelay(700000);

    	    	    string1 = uint8_to_string(CanData1, 8);

    	    	    ST7789_SetAddressWindow(ST7789_XStart,ST7789_YStart, ST7789_XEnd, ST7789_YEnd);

    	    	    ST7789_WriteString(0, 80, string1, Font_16x26, ST77XX_NEON_GREEN, ST77XX_BLACK);



	        //CanHardwareObject_1 from CAN_Cfg.h file in generate file


	  ret = Can_Write(CanHardwareObject_4, &TxData);
		    TestDelay(100000);
	        Can_MainFunction_Write();
		 while(Rx_Flag == false)
		 {
    		    Can_MainFunction_Read();
    		    TestDelay(100000);

		 }


        if (Rx_Flag == true)
        {
		 Can_Write(CanHardwareObject_4, &Ack);
		 TestDelay(100000);
		 Can_MainFunction_Write();

        }

		 while (Tx_Flag == true)
		 {
		 Can_MainFunction_Read();
		 TestDelay(100000);

		  if (Rx_Flag == true)
		  {
			 Tx_Flag = false;
		  }
		 }

		 Rx_Flag=false;


    }
    return 0;
}

/** @} */
