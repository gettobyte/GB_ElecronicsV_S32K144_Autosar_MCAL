/*!
** Copyright 2019 NXP
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



// RX FIFO Filter table structure
const Flexcan_Ip_IdTableType GB_FlexCAN_IdFilterTable[8] = {
    		{
    		.isRemoteFrame = FALSE,
			.isExtendedFrame = FALSE,
			.id = 0x320 // 0x1900
    		},
			{
			.isRemoteFrame = FALSE,
			.isExtendedFrame = FALSE,
			.id = 0x330
			 },
			 {
			.isRemoteFrame = FALSE,
			.isExtendedFrame = FALSE,
			.id = 0x340
			 },
			 {
			.isRemoteFrame = FALSE,
			.isExtendedFrame = FALSE,
			.id = 0x350
			 },
			 {
			.isRemoteFrame = FALSE,
			.isExtendedFrame = FALSE,
			.id = 0x360
			 },
			 {
			.isRemoteFrame = FALSE,
			.isExtendedFrame = FALSE,
			.id = 0x370
			 },

			 {
			.isRemoteFrame = FALSE,
			.isExtendedFrame = FALSE,
			.id = 0x380    //0x1c00
			 },

			 {
			.isRemoteFrame = FALSE,
			.isExtendedFrame = FALSE,
			.id = 0x390    //0x1c80
			 }

    };

// Creating an object of Flexcan_Ip_MsgBuffType, which will store the received can data.
Flexcan_Ip_MsgBuffType GB_FlexCAN_Receive_Data;


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
    /* Initilisize FlexCAN Module according to FlexCAN_Config0 data structure */
    FlexCAN_Ip_Init(INST_FLEXCAN_0, &FlexCAN_State0, &FlexCAN_Config0);

    /* Configure the RxFIFO with corresponding ID filter table acceptance format and acceptance message ID's*/
    FlexCAN_Api_Status = FlexCAN_Ip_ConfigRxFifo_Privileged(INST_FLEXCAN_0, FLEXCAN_RX_FIFO_ID_FORMAT_A, &GB_FlexCAN_IdFilterTable);

    /* Start the FlexCAN Module */
    FlexCAN_Api_Status = FlexCAN_Ip_SetStartMode(INST_FLEXCAN_0);

    for(;;)
   {
    	/* RxFiFo in blocking method*/
    	FlexCAN_Api_Status = FlexCAN_Ip_RxFifoBlocking(INST_FLEXCAN_0, &GB_FlexCAN_Receive_Data, 10000);

   }

    return 0;
}

/* END main */
/*!
** @}
*/
