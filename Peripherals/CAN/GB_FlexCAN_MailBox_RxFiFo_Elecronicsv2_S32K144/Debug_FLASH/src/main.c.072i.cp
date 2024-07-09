
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  FlexCAN_Ip_SendBlocking/18:
  Jump functions of caller  FlexCAN_Ip_RxFifoBlocking/17:
  Jump functions of caller  FlexCAN_Ip_SetStartMode_Privileged/16:
  Jump functions of caller  FlexCAN_Ip_ConfigRxFifo_Privileged/15:
  Jump functions of caller  FlexCAN_Ip_Init_Privileged/12:
  Jump functions of caller  Port_Init/11:
  Jump functions of caller  Clock_Ip_DistributePll/10:
  Jump functions of caller  Clock_Ip_GetPllStatus/9:
  Jump functions of caller  Clock_Ip_Init/7:
  Jump functions of caller  main/5:
    callsite  main/5 -> TestDelay/2 : 
       param 0: CONST: 20000000
         value: 0x1312d00, mask: 0x0
         Unknown VR
  Jump functions of caller  TestDelay/2:

 Propagating constants:

Not considering main for cloning; -fipa-cp-clone disabled.
Not considering TestDelay for cloning; -fipa-cp-clone disabled.

overall_size: 50, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: main/5:
  Node: TestDelay/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

FlexCAN_Ip_SendBlocking/18 (FlexCAN_Ip_SendBlocking) @06cfdb60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/5 (1073741824 (estimated locally),10000.02 per call) 
  Calls: 
FlexCAN_Ip_RxFifoBlocking/17 (FlexCAN_Ip_RxFifoBlocking) @06cfda80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/5 (1073741824 (estimated locally),10000.02 per call) 
  Calls: 
FlexCAN_Ip_SetStartMode_Privileged/16 (FlexCAN_Ip_SetStartMode_Privileged) @06cfd9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/5 (107374 (estimated locally),1.00 per call) 
  Calls: 
FlexCAN_Ip_ConfigRxFifo_Privileged/15 (FlexCAN_Ip_ConfigRxFifo_Privileged) @06cfd8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/5 (107374 (estimated locally),1.00 per call) 
  Calls: 
FlexCAN_Config0/14 (FlexCAN_Config0) @06d021b0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/5 (addr)
  Availability: not_available
  Varpool flags: read-only
FlexCAN_State0/13 (FlexCAN_State0) @06d02168
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/5 (addr)
  Availability: not_available
  Varpool flags:
FlexCAN_Ip_Init_Privileged/12 (FlexCAN_Ip_Init_Privileged) @06cfd7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/5 (107374 (estimated locally),1.00 per call) 
  Calls: 
Port_Init/11 (Port_Init) @06cfd700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/5 (107374 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_DistributePll/10 (Clock_Ip_DistributePll) @06cfd620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/5 (107374 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_GetPllStatus/9 (Clock_Ip_GetPllStatus) @06cfd540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/5 (976127 (estimated locally),9.09 per call) 
  Calls: 
Mcu_aClockConfigPB/8 (Mcu_aClockConfigPB) @06d02000
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/5 (addr)
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_Init/7 (Clock_Ip_Init) @06cfd460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/5 (107374 (estimated locally),1.00 per call) 
  Calls: 
DelayTimer.6979/6 (DelayTimer) @06c25bd0
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: TestDelay/2 (read)TestDelay/2 (write)TestDelay/2 (read)TestDelay/2 (write)
  Availability: available
  Varpool flags: initialized
main/5 (main) @06cf7540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Mcu_aClockConfigPB/8 (addr)FlexCAN_State0/13 (addr)FlexCAN_Config0/14 (addr)GB_FlexCAN_IdFilterTable/3 (addr)GB_FlexCAN_Receive_Data/4 (addr)dummyData/1 (addr)
  Referring: 
  Availability: available
  Function flags: count:107374 (estimated locally) body only_called_at_startup executed_once optimize_size
  Called by: 
  Calls: FlexCAN_Ip_SendBlocking/18 (1073741824 (estimated locally),10000.02 per call) TestDelay/2 (1073741824 (estimated locally),10000.02 per call) FlexCAN_Ip_RxFifoBlocking/17 (1073741824 (estimated locally),10000.02 per call) FlexCAN_Ip_SetStartMode_Privileged/16 (107374 (estimated locally),1.00 per call) FlexCAN_Ip_ConfigRxFifo_Privileged/15 (107374 (estimated locally),1.00 per call) FlexCAN_Ip_Init_Privileged/12 (107374 (estimated locally),1.00 per call) Port_Init/11 (107374 (estimated locally),1.00 per call) Clock_Ip_DistributePll/10 (107374 (estimated locally),1.00 per call) Clock_Ip_GetPllStatus/9 (976127 (estimated locally),9.09 per call) Clock_Ip_Init/7 (107374 (estimated locally),1.00 per call) 
GB_FlexCAN_Receive_Data/4 (GB_FlexCAN_Receive_Data) @06c256c0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: main/5 (addr)
  Availability: available
  Varpool flags:
GB_FlexCAN_IdFilterTable/3 (GB_FlexCAN_IdFilterTable) @06c25630
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: main/5 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
TestDelay/2 (TestDelay) @06cf7700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: DelayTimer.6979/6 (read)DelayTimer.6979/6 (write)DelayTimer.6979/6 (read)DelayTimer.6979/6 (write)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: main/5 (1073741824 (estimated locally),10000.02 per call) 
  Calls: 
dummyData/1 (dummyData) @06c253f0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: main/5 (addr)
  Availability: available
  Varpool flags: initialized

;; Function TestDelay (TestDelay, funcdef_no=1, decl_uid=6975, cgraph_uid=2, symbol_order=2)

Modification phase of node TestDelay/2
TestDelay (uint32 delay)
{
  static volatile uint32 DelayTimer = 0;
  long unsigned int DelayTimer.0_1;
  long unsigned int _2;
  long unsigned int DelayTimer.1_3;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  DelayTimer.0_1 ={v} DelayTimer;
  _2 = DelayTimer.0_1 + 1;
  DelayTimer ={v} _2;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  DelayTimer.1_3 ={v} DelayTimer;
  if (DelayTimer.1_3 < delay_6(D))
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  DelayTimer ={v} 0;
  return;

}



;; Function main (main, funcdef_no=2, decl_uid=6986, cgraph_uid=3, symbol_order=5) (executed once)

Modification phase of node main/5
main ()
{
  struct Flexcan_Ip_DataInfoType rx_info;
  <unnamed type> _1;

  <bb 2> [local count: 107374]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Clock_Ip_Init (&Mcu_aClockConfigPB[0]);
  # DEBUG BEGIN_STMT

  <bb 3> [local count: 976127]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Clock_Ip_GetPllStatus ();
  if (_1 != 0)
    goto <bb 7>; [89.00%]
  else
    goto <bb 4>; [11.00%]

  <bb 7> [local count: 868753]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 107374]:
  # DEBUG BEGIN_STMT
  Clock_Ip_DistributePll ();
  # DEBUG BEGIN_STMT
  Port_Init (0B);
  # DEBUG BEGIN_STMT
  FlexCAN_Ip_Init_Privileged (0, &FlexCAN_State0, &FlexCAN_Config0);
  # DEBUG BEGIN_STMT
  FlexCAN_Ip_ConfigRxFifo_Privileged (0, 0, &GB_FlexCAN_IdFilterTable);
  # DEBUG FlexCAN_Api_Status => NULL
  # DEBUG BEGIN_STMT
  FlexCAN_Ip_SetStartMode_Privileged (0);
  # DEBUG FlexCAN_Api_Status => NULL
  # DEBUG BEGIN_STMT
  rx_info = {};
  rx_info.data_length = 8;
  rx_info.is_polling = 1;

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  FlexCAN_Ip_RxFifoBlocking (0, &GB_FlexCAN_Receive_Data, 10000);
  # DEBUG FlexCAN_Api_Status => NULL
  # DEBUG BEGIN_STMT
  TestDelay (20000000);
  # DEBUG BEGIN_STMT
  FlexCAN_Ip_SendBlocking (0, 0, &rx_info, 514, &dummyData, 1000);
  # DEBUG FlexCAN_Api_Status => NULL
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 1073741824]:
  goto <bb 5>; [100.00%]

}


