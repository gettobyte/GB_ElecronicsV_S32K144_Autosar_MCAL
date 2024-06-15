/*!
** @file main.c
** @brief
**         Main module.
**         This module contains user's application code.
*/
/*!
**  @addtogroup main_module main module documentation
**  @{
*/
/* MODULE main */


/* Including necessary configuration files. */
#include "Mcal.h"
#include "Clock_Ip.h"
#include "FlexCAN_Ip.h"
#include "Port.h"
#include "string.h"

uint8 dummyData[8] = {1,2,3,4,5,6,7};

#define MSG_ID 800u
#define RX_MB_IDX 1U
#define TX_MB_IDX 0U

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

    /* Initialize all pins using the Port driver */
    Port_Init(NULL_PTR);

    Flexcan_Ip_DataInfoType rx_info = {
            .msg_id_type = FLEXCAN_MSG_ID_STD,
            .data_length = 8u,
            .is_polling = TRUE,
            .is_remote = FALSE
    };
    Flexcan_Ip_MsgBuffType rxData;

    FlexCAN_Ip_Init(INST_FLEXCAN_0, &FlexCAN_State0, &FlexCAN_Config0);

    FlexCAN_Api_Status = FlexCAN_Ip_SetStartMode(INST_FLEXCAN_0);

   for(;;)
   {
	   FlexCAN_Api_Status = FlexCAN_Ip_SendBlocking(INST_FLEXCAN_0, TX_MB_IDX, &rx_info, MSG_ID, (uint8 *)&dummyData, 1000);

	   if(FlexCAN_Api_Status == FLEXCAN_STATUS_SUCCESS)
	     {
		   FlexCAN_Api_Status = FlexCAN_Ip_ConfigRxMb(INST_FLEXCAN_0, RX_MB_IDX, &rx_info, MSG_ID);
	       while(FLEXCAN_STATUS_TIMEOUT == FlexCAN_Ip_ReceiveBlocking(INST_FLEXCAN_0, RX_MB_IDX, &rxData, true,1000));
	       // clear the data received in rx buffer to Null
	       memset(rxData.data, NULL, 64);
	     }
   }
    return 0;
}

/* END main */
/*!
** @}
*/
