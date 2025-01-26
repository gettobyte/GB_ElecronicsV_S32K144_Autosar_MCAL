/* Including necessary configuration files. */
#include "Mcal.h"
#include "Clock_Ip.h"
#include "FlexCAN_Ip.h"
#include "Port.h"
#include "IntCtrl_Ip.h"
#include "string.h"
#include "Dio.h"

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#include "Lpspi_Ip.h"
#include "ST7789_low_level.h"
#include "fonts.h"


//Tx for standard frame
#define MSG_ID0 0x500
#define TX_MB_IDX0 0

//Rx for extended frame
#define MSG_ID1 0x152F5AAF
#define RX_MB_IDX0 1

//Tx for standard remote frame
#define MSG_ID2 0x700
#define TX_MB_IDX1 2

//Rx for extended remote frame
#define MSG_ID3 0x176B455B
#define RX_MB_IDX1 3

extern void CAN0_ORED_0_15_MB_IRQHandler(void);

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

const char* string1, string2;



#define GB_RxMailBox_CALLBACK 1
GB_MailBox_CallBack(uint8 instance, Flexcan_Ip_EventType eventType,
                  uint32 buffIdx, const Flexcan_Ip_StateType * flexcanState)
{
#if GB_RxMailBox_CALLBACK
	Flexcan_Ip_StateType * state = flexcanState;
	state->mbs[buffIdx].state = FLEXCAN_MB_RX_BUSY;
	   {
		   if(FlexCAN_State0.mbs[RX_MB_IDX0].pMBmessage->cs != 0)
		   	   {
			   	   if(FlexCAN_State0.mbs[RX_MB_IDX0].pMBmessage->msgId == 355424943)
			   		   {
			   		      string1 = uint8_to_string(&(FlexCAN_State0.mbs[RX_MB_IDX0].pMBmessage->data), FlexCAN_State0.mbs[RX_MB_IDX0].pMBmessage->dataLen);
			   	           ST7789_WriteString(0, 140, string1 , Font_16x26, ST77XX_NEON_GREEN, ST77XX_BLACK);
			   		   }
			   	   memset(&FlexCAN_State0.mbs[RX_MB_IDX0].pMBmessage->cs, 0x0, sizeof(FlexCAN_State0.mbs[RX_MB_IDX0].pMBmessage->cs));
		   	   }
	   }
#else

	uint8_t callback = 0;
	/* Do Nothing */
#endif
}


uint8 CanData1[8] = {1,2,3,4,5,6,7,8};  // 8 Bytes of Data
uint8 CanData2[8] = {11,22,33,44,55};   // 5 Bytes of Data
uint8 CanData3[8] = {10,20,30};      //3 Bytes of Data
uint8 CanData4[8] = {21,22,23,24,25,26,27};    //7 Bytes of Data


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
	Flexcan_Ip_StatusType FlexCAN_Api_Status;
    /* Write your code here */
    Clock_Ip_Init(&Mcu_aClockConfigPB[0]);

#if defined (FEATURE_CLOCK_IP_HAS_SPLL_CLK)
    while ( CLOCK_IP_PLL_LOCKED != Clock_Ip_GetPllStatus() )
    {
        /* Busy wait until the System PLL is locked */
    }
    Clock_Ip_DistributePll();
#endif

    IntCtrl_Ip_EnableIrq(CAN0_ORed_0_15_MB_IRQn);
    IntCtrl_Ip_InstallHandler(CAN0_ORed_0_15_MB_IRQn, CAN0_ORED_0_15_MB_IRQHandler, NULL_PTR);

    /* Initialize all pins using the Port driver */
    Port_Init(NULL_PTR);

    Flexcan_Ip_DataInfoType tx_info_std = {
            .msg_id_type = FLEXCAN_MSG_ID_STD,
            .data_length = 8u,
            .is_polling = FALSE,
            .is_remote = FALSE
    };

    Flexcan_Ip_DataInfoType tx_info_std_remote = {
                .msg_id_type = FLEXCAN_MSG_ID_STD,
                .data_length = 8u,
                .is_polling = FALSE,
                .is_remote = TRUE
        };

    Flexcan_Ip_DataInfoType tx_info_ext = {
    		.msg_id_type = FLEXCAN_MSG_ID_EXT,
			.data_length = 8u,
			.is_polling = FALSE,
			.is_remote = FALSE,
    };

    Flexcan_Ip_DataInfoType tx_info_ext_remote = {
        		.msg_id_type = FLEXCAN_MSG_ID_EXT,
    			.data_length = 8u,
    			.is_polling = FALSE,
    			.is_remote = TRUE,
	};

    Flexcan_Ip_MsgBuffType txData1, txData2;

    Flexcan_Ip_MsgBuffType rxData1, rxData2, rxData3, rxData4;


    Lpspi_Ip_Init(&Lpspi_Ip_PhyUnitConfig_SpiPhyUnit_0_BOARD_InitPeripherals);
  	GB_ST7789_Init();

  	TestDelay(700000);
  	ST7789_SetAddressWindow(ST7789_XStart,ST7789_YStart, ST7789_XEnd, ST7789_YEnd);
  	ST7789_Fill_Color(ST77XX_RED);
  	TestDelay(700000);


    FlexCAN_Ip_Init(INST_FLEXCAN_0, &FlexCAN_State0, &FlexCAN_Config0);
    FlexCAN_Api_Status = FlexCAN_Ip_SetStartMode(INST_FLEXCAN_0);


    FlexCAN_Api_Status = FlexCAN_Ip_ConfigRxMb(INST_FLEXCAN_0, RX_MB_IDX0, &tx_info_ext, MSG_ID1);
    FlexCAN_Api_Status = FlexCAN_Ip_Receive(INST_FLEXCAN_0, RX_MB_IDX0, &rxData1, false);




	 	ST7789_Fill_Color(ST77XX_BLACK);
	    ST7789_SetAddressWindow(ST7789_XStart,ST7789_YStart, ST7789_XEnd, ST7789_YEnd);
	    ST7789_WriteString(0, 80, "Receiving CAN Data", Font_16x26, ST77XX_NEON_GREEN, ST77XX_BLACK);

   for(;;)
   {


   }

    return 0;
}
