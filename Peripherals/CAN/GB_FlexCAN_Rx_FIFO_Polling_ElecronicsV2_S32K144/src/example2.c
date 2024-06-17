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
const Flexcan_Ip_IdTableType GB_FlexCAN_IdFilterTable[16] = {
    		{
    		.isRemoteFrame = FALSE,
			.isExtendedFrame = FALSE,
			.id = 0x320  //0x1900
			},
			{
			.isRemoteFrame = FALSE,
			.isExtendedFrame = FALSE,
			.id = 0x321  //0x1908
			 },
			 {
			.isRemoteFrame = FALSE,
			.isExtendedFrame = FALSE,
			.id = 0x322  //0x1910
			 },
			 {
			.isRemoteFrame = FALSE,
			.isExtendedFrame = FALSE,
			.id = 0x323  //0x1918
			 },
			 {
			.isRemoteFrame = FALSE,
			.isExtendedFrame = FALSE,
			.id = 0x324  //0x1920
			 },
			 {
			.isRemoteFrame = FALSE,
			.isExtendedFrame = FALSE,
			.id = 0x325  //0x1928
			 },

			 {
			.isRemoteFrame = FALSE,
			.isExtendedFrame = FALSE,
			.id = 0x326 //0x1930
			 },

			 {
			.isRemoteFrame = FALSE,
			.isExtendedFrame = FALSE,
			.id = 0x327  //0x1938
			 },
     		{
			.isRemoteFrame = FALSE,
			.isExtendedFrame = FALSE,
			.id = 0x328 //0x1940
			},
			{
			.isRemoteFrame = FALSE,
			.isExtendedFrame = FALSE,
			.id = 0x329  //0x1948
			 },
			 {
			.isRemoteFrame = FALSE,
			.isExtendedFrame = FALSE,
			.id = 0x330  //0x1980
			 },
			 {
			.isRemoteFrame = FALSE,
			.isExtendedFrame = FALSE,
			.id = 0x331  //0x1988
			 },
			 {
			.isRemoteFrame = FALSE,
			.isExtendedFrame = FALSE,
			.id = 0x332  //0x1990
			 },
			 {
			.isRemoteFrame = FALSE,
			.isExtendedFrame = FALSE,
			.id = 0x333  //0x1998
			 },

			 {
			.isRemoteFrame = FALSE,
			.isExtendedFrame = FALSE,
			.id = 0x334  //0x19a0
			 },

			 {
			.isRemoteFrame = FALSE,
			.isExtendedFrame = FALSE,
			.id = 0x335 //0x19a8
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
    FlexCAN_Api_Status = FlexCAN_Ip_ConfigRxFifo_Privileged(INST_FLEXCAN_0, FLEXCAN_RX_FIFO_ID_FORMAT_B, &GB_FlexCAN_IdFilterTable);

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
