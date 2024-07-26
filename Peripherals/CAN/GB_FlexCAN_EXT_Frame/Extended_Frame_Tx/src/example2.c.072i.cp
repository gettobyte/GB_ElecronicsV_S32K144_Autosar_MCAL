
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  FlexCAN_Ip_Send/18:
  Jump functions of caller  FlexCAN_Ip_SetStartMode_Privileged/17:
  Jump functions of caller  FlexCAN_Ip_Init_Privileged/14:
  Jump functions of caller  Port_Init/13:
  Jump functions of caller  CAN0_ORED_0_15_MB_IRQHandler/12:
  Jump functions of caller  IntCtrl_Ip_InstallHandler/11:
  Jump functions of caller  IntCtrl_Ip_EnableIrq/10:
  Jump functions of caller  Clock_Ip_DistributePll/9:
  Jump functions of caller  Clock_Ip_GetPllStatus/8:
  Jump functions of caller  Clock_Ip_Init/6:
  Jump functions of caller  main/4:
    callsite  main/4 -> TestDelay/2 : 
       param 0: CONST: 2000000
         value: 0x1e8480, mask: 0x0
         Unknown VR
  Jump functions of caller  GB_MailBox_CallBack/3:
  Jump functions of caller  TestDelay/2:

 Propagating constants:

Not considering main for cloning; -fipa-cp-clone disabled.
Not considering GB_MailBox_CallBack for cloning; -fipa-cp-clone disabled.
Not considering TestDelay for cloning; -fipa-cp-clone disabled.

overall_size: 48, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 4.000000

IPA lattices after all propagation:

Lattices:
  Node: main/4:
  Node: GB_MailBox_CallBack/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [3]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
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

FlexCAN_Ip_Send/18 (FlexCAN_Ip_Send) @06c8fa80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/4 (1073741824 (estimated locally),10000.02 per call) 
  Calls: 
FlexCAN_Ip_SetStartMode_Privileged/17 (FlexCAN_Ip_SetStartMode_Privileged) @06c8f9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/4 (107374 (estimated locally),1.00 per call) 
  Calls: 
FlexCAN_Config0/16 (FlexCAN_Config0) @06c907e0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/4 (addr)
  Availability: not_available
  Varpool flags: read-only
FlexCAN_State0/15 (FlexCAN_State0) @06c90798
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/4 (addr)
  Availability: not_available
  Varpool flags:
FlexCAN_Ip_Init_Privileged/14 (FlexCAN_Ip_Init_Privileged) @06c8f8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/4 (107374 (estimated locally),1.00 per call) 
  Calls: 
Port_Init/13 (Port_Init) @06c8f7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/4 (107374 (estimated locally),1.00 per call) 
  Calls: 
CAN0_ORED_0_15_MB_IRQHandler/12 (CAN0_ORED_0_15_MB_IRQHandler) @06c8f700
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: main/4 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
IntCtrl_Ip_InstallHandler/11 (IntCtrl_Ip_InstallHandler) @06c8f620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/4 (107374 (estimated locally),1.00 per call) 
  Calls: 
IntCtrl_Ip_EnableIrq/10 (IntCtrl_Ip_EnableIrq) @06c8f540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/4 (107374 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_DistributePll/9 (Clock_Ip_DistributePll) @06c8f460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/4 (107374 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_GetPllStatus/8 (Clock_Ip_GetPllStatus) @06c8f380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/4 (976127 (estimated locally),9.09 per call) 
  Calls: 
Mcu_aClockConfigPB/7 (Mcu_aClockConfigPB) @06c905a0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/4 (addr)
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_Init/6 (Clock_Ip_Init) @06c8f2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/4 (107374 (estimated locally),1.00 per call) 
  Calls: 
DelayTimer.7034/5 (DelayTimer) @06c900d8
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: TestDelay/2 (read)TestDelay/2 (write)TestDelay/2 (read)TestDelay/2 (write)
  Availability: available
  Varpool flags: initialized
main/4 (main) @06c8ad20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Mcu_aClockConfigPB/7 (addr)CAN0_ORED_0_15_MB_IRQHandler/12 (addr)FlexCAN_State0/15 (addr)FlexCAN_Config0/16 (addr)dummyData/1 (addr)
  Referring: 
  Availability: available
  Function flags: count:107374 (estimated locally) body only_called_at_startup executed_once optimize_size
  Called by: 
  Calls: TestDelay/2 (1073741824 (estimated locally),10000.02 per call) FlexCAN_Ip_Send/18 (1073741824 (estimated locally),10000.02 per call) FlexCAN_Ip_SetStartMode_Privileged/17 (107374 (estimated locally),1.00 per call) FlexCAN_Ip_Init_Privileged/14 (107374 (estimated locally),1.00 per call) Port_Init/13 (107374 (estimated locally),1.00 per call) IntCtrl_Ip_InstallHandler/11 (107374 (estimated locally),1.00 per call) IntCtrl_Ip_EnableIrq/10 (107374 (estimated locally),1.00 per call) Clock_Ip_DistributePll/9 (107374 (estimated locally),1.00 per call) Clock_Ip_GetPllStatus/8 (976127 (estimated locally),9.09 per call) Clock_Ip_Init/6 (107374 (estimated locally),1.00 per call) 
GB_MailBox_CallBack/3 (GB_MailBox_CallBack) @06c8a9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
TestDelay/2 (TestDelay) @06c8a700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: DelayTimer.7034/5 (read)DelayTimer.7034/5 (write)DelayTimer.7034/5 (read)DelayTimer.7034/5 (write)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: main/4 (1073741824 (estimated locally),10000.02 per call) 
  Calls: 
dummyData/1 (dummyData) @06da49d8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: main/4 (addr)
  Availability: available
  Varpool flags: initialized

;; Function TestDelay (TestDelay, funcdef_no=1, decl_uid=7030, cgraph_uid=2, symbol_order=2)

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



;; Function GB_MailBox_CallBack (GB_MailBox_CallBack, funcdef_no=2, decl_uid=7042, cgraph_uid=3, symbol_order=3)

Modification phase of node GB_MailBox_CallBack/3
GB_MailBox_CallBack (uint8 instance, Flexcan_Ip_EventType eventType, uint32 buffIdx, const struct Flexcan_Ip_StateType * flexcanState)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG callback => 0
  return;

}



;; Function main (main, funcdef_no=3, decl_uid=7046, cgraph_uid=4, symbol_order=4) (executed once)

Modification phase of node main/4
main ()
{
  struct Flexcan_Ip_DataInfoType tx_info;
  <unnamed type> _1;

  <bb 2> [local count: 107374]:
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
  IntCtrl_Ip_EnableIrq (81);
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_InstallHandler (81, CAN0_ORED_0_15_MB_IRQHandler, 0B);
  # DEBUG BEGIN_STMT
  Port_Init (0B);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct  *)&tx_info + 8B] = {};
  tx_info.msg_id_type = 1;
  tx_info.data_length = 8;
  # DEBUG BEGIN_STMT
  FlexCAN_Ip_Init_Privileged (0, &FlexCAN_State0, &FlexCAN_Config0);
  # DEBUG BEGIN_STMT
  FlexCAN_Ip_SetStartMode_Privileged (0);
  # DEBUG FlexCAN_Api_Status => NULL

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  FlexCAN_Ip_Send (0, 10, &tx_info, 263129088, &dummyData);
  # DEBUG FlexCAN_Api_Status => NULL
  # DEBUG BEGIN_STMT
  TestDelay (2000000);
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 1073741824]:
  goto <bb 5>; [100.00%]

}


