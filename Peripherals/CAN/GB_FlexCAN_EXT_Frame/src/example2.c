/* Including necessary configuration files. */
#include "Mcal.h"
#include "Clock_Ip.h"
#include "FlexCAN_Ip.h"
#include "Port.h"
#include "IntCtrl_Ip.h"

//Including a external function defined in some other header file by using "extern" keyword
extern void CAN0_ORED_0_15_MB_IRQHandler(void);

//Defining the message ID of 29 bit for extended frame transmission
//You can use programming calculator to see decimal value.
//MailBox Number 10 is configured for this transmission
#define MSG_ID 0xFAF0800
#define TX_MB_IDX 10

//Data for transmission and verification
uint8 dummyData[8] = {10,2,3,4,5,6,7,8};

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

//Callback function which plays crucial role for NOT disabling the reception register after single reception.
//Without configuring this callback you can only receive only single time
GB_MailBox_CallBack(uint8 instance, Flexcan_Ip_EventType eventType,
                  uint32 buffIdx, const Flexcan_Ip_StateType * flexcanState)
{
#if GB_RxMailBox_CALLBACK
	Flexcan_Ip_StateType * state = flexcanState;
	state->mbs[buffIdx].state = FLEXCAN_MB_RX_BUSY;
#else

	uint8_t callback = 0;
	/* Do Nothing */
#endif
}

//Main function
int main(void)
{
	// Variable to hold the status of FlexCAN API functions
	Flexcan_Ip_StatusType FlexCAN_Api_Status;

	// Initialize the clock settings using the configuration specified
	Clock_Ip_Init(&Mcu_aClockConfigPB[0]);

#if defined (FEATURE_CLOCK_IP_HAS_SPLL_CLK)
	// Wait until the System PLL (Phase-Locked Loop) is locked
    while ( CLOCK_IP_PLL_LOCKED != Clock_Ip_GetPllStatus() )
    {
        /* Busy wait loop */
    }

    // Distribute the PLL to the appropriate system components
    Clock_Ip_DistributePll();
#endif

    // Enable interrupts for the FlexCAN module
    IntCtrl_Ip_EnableIrq(CAN0_ORed_0_15_MB_IRQn);
    // Install the interrupt handler for CAN message buffers 0-15
    IntCtrl_Ip_InstallHandler(CAN0_ORed_0_15_MB_IRQn, CAN0_ORED_0_15_MB_IRQHandler, NULL_PTR);

    // Initialize port configuration (assuming default configuration is being used)
    Port_Init(NULL_PTR);

    // Define the configuration for transmitting CAN messages
    Flexcan_Ip_DataInfoType tx_info = {
            .msg_id_type = FLEXCAN_MSG_ID_EXT,
            .data_length = 8u,
            .is_polling = FALSE,
            .is_remote = FALSE
    };

    // Initialize the FlexCAN module with the specified configuration
    FlexCAN_Ip_Init(INST_FLEXCAN_0, &FlexCAN_State0, &FlexCAN_Config0);

    // Start the FlexCAN module
    FlexCAN_Api_Status = FlexCAN_Ip_SetStartMode(INST_FLEXCAN_0);

    // Infinite loop for sending CAN messages
   for(;;)
   {
	   // Send a CAN message using the specified message buffer index and configuration
	   FlexCAN_Api_Status = FlexCAN_Ip_Send(INST_FLEXCAN_0, TX_MB_IDX, &tx_info, MSG_ID, (uint8 *)&dummyData);
	   // Delay for a while to avoid overcrowding the CAN bus with messages
	   TestDelay(2000000);
   }

   // Return 0 (typically unreachable in this infinite loop scenario)
    return 0;
}
