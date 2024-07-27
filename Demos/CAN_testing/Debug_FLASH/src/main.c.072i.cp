
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  FlexCAN_Ip_Send/21:
  Jump functions of caller  FlexCAN_Ip_SetStartMode_Privileged/20:
  Jump functions of caller  FlexCAN_Ip_Init_Privileged/17:
  Jump functions of caller  Port_Init/16:
  Jump functions of caller  CAN0_ORED_0_15_MB_IRQHandler/15:
  Jump functions of caller  IntCtrl_Ip_InstallHandler/14:
  Jump functions of caller  IntCtrl_Ip_EnableIrq/13:
  Jump functions of caller  Clock_Ip_DistributePll/12:
  Jump functions of caller  Clock_Ip_GetPllStatus/11:
  Jump functions of caller  Clock_Ip_Init/9:
  Jump functions of caller  main/7:
    callsite  main/7 -> TestDelay/6 : 
       param 0: CONST: 2000000
         value: 0x1e8480, mask: 0x0
         Unknown VR
    callsite  main/7 -> TestDelay/6 : 
       param 0: CONST: 2000000
         value: 0x1e8480, mask: 0x0
         Unknown VR
    callsite  main/7 -> TestDelay/6 : 
       param 0: CONST: 2000000
         value: 0x1e8480, mask: 0x0
         Unknown VR
    callsite  main/7 -> TestDelay/6 : 
       param 0: CONST: 2000000
         value: 0x1e8480, mask: 0x0
         Unknown VR
  Jump functions of caller  TestDelay/6:
  Jump functions of caller  GB_MailBox_CallBack/1:

 Propagating constants:

Not considering main for cloning; -fipa-cp-clone disabled.
Not considering TestDelay for cloning; -fipa-cp-clone disabled.
Not considering GB_MailBox_CallBack for cloning; -fipa-cp-clone disabled.

overall_size: 88, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 4.000000

IPA lattices after all propagation:

Lattices:
  Node: main/7:
  Node: TestDelay/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: GB_MailBox_CallBack/1:
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

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

FlexCAN_Ip_Send/21 (FlexCAN_Ip_Send) @06eb40e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/7 (1073741824 (estimated locally),10000.02 per call) main/7 (1073741824 (estimated locally),10000.02 per call) main/7 (1073741824 (estimated locally),10000.02 per call) main/7 (1073741824 (estimated locally),10000.02 per call) 
  Calls: 
FlexCAN_Ip_SetStartMode_Privileged/20 (FlexCAN_Ip_SetStartMode_Privileged) @06eb4000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/7 (107374 (estimated locally),1.00 per call) 
  Calls: 
FlexCAN_Config0/19 (FlexCAN_Config0) @06eadcf0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/7 (addr)
  Availability: not_available
  Varpool flags: read-only
FlexCAN_State0/18 (FlexCAN_State0) @06eadca8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/7 (addr)
  Availability: not_available
  Varpool flags:
FlexCAN_Ip_Init_Privileged/17 (FlexCAN_Ip_Init_Privileged) @06eaeee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/7 (107374 (estimated locally),1.00 per call) 
  Calls: 
Port_Init/16 (Port_Init) @06eaee00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/7 (107374 (estimated locally),1.00 per call) 
  Calls: 
CAN0_ORED_0_15_MB_IRQHandler/15 (CAN0_ORED_0_15_MB_IRQHandler) @06eaed20
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: main/7 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
IntCtrl_Ip_InstallHandler/14 (IntCtrl_Ip_InstallHandler) @06eaec40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/7 (107374 (estimated locally),1.00 per call) 
  Calls: 
IntCtrl_Ip_EnableIrq/13 (IntCtrl_Ip_EnableIrq) @06eaeb60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/7 (107374 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_DistributePll/12 (Clock_Ip_DistributePll) @06eaea80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/7 (107374 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_GetPllStatus/11 (Clock_Ip_GetPllStatus) @06eae9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/7 (976127 (estimated locally),9.09 per call) 
  Calls: 
Mcu_aClockConfigPB/10 (Mcu_aClockConfigPB) @06eadab0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/7 (addr)
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_Init/9 (Clock_Ip_Init) @06eae8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/7 (107374 (estimated locally),1.00 per call) 
  Calls: 
DelayTimer.7044/8 (DelayTimer) @06ead6c0
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: TestDelay/6 (read)TestDelay/6 (write)TestDelay/6 (read)TestDelay/6 (write)
  Availability: available
  Varpool flags: initialized
main/7 (main) @06eae2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Mcu_aClockConfigPB/10 (addr)CAN0_ORED_0_15_MB_IRQHandler/15 (addr)FlexCAN_State0/18 (addr)FlexCAN_Config0/19 (addr)CanData1/2 (addr)CanData1/2 (addr)CanData1/2 (addr)CanData1/2 (addr)
  Referring: 
  Availability: available
  Function flags: count:107374 (estimated locally) body only_called_at_startup executed_once optimize_size
  Called by: 
  Calls: TestDelay/6 (1073741824 (estimated locally),10000.02 per call) FlexCAN_Ip_Send/21 (1073741824 (estimated locally),10000.02 per call) TestDelay/6 (1073741824 (estimated locally),10000.02 per call) FlexCAN_Ip_Send/21 (1073741824 (estimated locally),10000.02 per call) TestDelay/6 (1073741824 (estimated locally),10000.02 per call) FlexCAN_Ip_Send/21 (1073741824 (estimated locally),10000.02 per call) TestDelay/6 (1073741824 (estimated locally),10000.02 per call) FlexCAN_Ip_Send/21 (1073741824 (estimated locally),10000.02 per call) FlexCAN_Ip_SetStartMode_Privileged/20 (107374 (estimated locally),1.00 per call) FlexCAN_Ip_Init_Privileged/17 (107374 (estimated locally),1.00 per call) Port_Init/16 (107374 (estimated locally),1.00 per call) IntCtrl_Ip_InstallHandler/14 (107374 (estimated locally),1.00 per call) IntCtrl_Ip_EnableIrq/13 (107374 (estimated locally),1.00 per call) Clock_Ip_DistributePll/12 (107374 (estimated locally),1.00 per call) Clock_Ip_GetPllStatus/11 (976127 (estimated locally),9.09 per call) Clock_Ip_Init/9 (107374 (estimated locally),1.00 per call) 
TestDelay/6 (TestDelay) @06ea9e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: DelayTimer.7044/8 (read)DelayTimer.7044/8 (write)DelayTimer.7044/8 (read)DelayTimer.7044/8 (write)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: main/7 (1073741824 (estimated locally),10000.02 per call) main/7 (1073741824 (estimated locally),10000.02 per call) main/7 (1073741824 (estimated locally),10000.02 per call) main/7 (1073741824 (estimated locally),10000.02 per call) 
  Calls: 
CanData4/5 (CanData4) @06ea5ea0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized
CanData3/4 (CanData3) @06ea5dc8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized
CanData2/3 (CanData2) @06ea5d38
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized
CanData1/2 (CanData1) @06ea5c60
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: main/7 (addr)main/7 (addr)main/7 (addr)main/7 (addr)
  Availability: available
  Varpool flags: initialized
GB_MailBox_CallBack/1 (GB_MailBox_CallBack) @06ea9700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function GB_MailBox_CallBack (GB_MailBox_CallBack, funcdef_no=1, decl_uid=7032, cgraph_uid=2, symbol_order=1)

Modification phase of node GB_MailBox_CallBack/1
GB_MailBox_CallBack (uint8 instance, Flexcan_Ip_EventType eventType, uint32 buffIdx, const struct Flexcan_Ip_StateType * flexcanState)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG callback => 0
  return;

}



;; Function TestDelay (TestDelay, funcdef_no=2, decl_uid=7040, cgraph_uid=3, symbol_order=6)

Modification phase of node TestDelay/6
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



;; Function main (main, funcdef_no=3, decl_uid=7049, cgraph_uid=4, symbol_order=7) (executed once)

Modification phase of node main/7
main ()
{
  struct Flexcan_Ip_DataInfoType tx_info_ext_remote;
  struct Flexcan_Ip_DataInfoType tx_info_ext;
  struct Flexcan_Ip_DataInfoType tx_info_std_remote;
  struct Flexcan_Ip_DataInfoType tx_info_std;
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
  IntCtrl_Ip_EnableIrq (81);
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_InstallHandler (81, CAN0_ORED_0_15_MB_IRQHandler, 0B);
  # DEBUG BEGIN_STMT
  Port_Init (0B);
  # DEBUG BEGIN_STMT
  tx_info_std = {};
  tx_info_std.data_length = 8;
  # DEBUG BEGIN_STMT
  tx_info_std_remote = {};
  tx_info_std_remote.data_length = 8;
  tx_info_std_remote.is_remote = 1;
  # DEBUG BEGIN_STMT
  MEM[(struct  *)&tx_info_ext + 8B] = {};
  tx_info_ext.msg_id_type = 1;
  tx_info_ext.data_length = 8;
  # DEBUG BEGIN_STMT
  MEM[(struct  *)&tx_info_ext_remote + 8B] = {};
  tx_info_ext_remote.msg_id_type = 1;
  tx_info_ext_remote.data_length = 8;
  tx_info_ext_remote.is_remote = 1;
  # DEBUG BEGIN_STMT
  FlexCAN_Ip_Init_Privileged (0, &FlexCAN_State0, &FlexCAN_Config0);
  # DEBUG BEGIN_STMT
  FlexCAN_Ip_SetStartMode_Privileged (0);
  # DEBUG FlexCAN_Api_Status => NULL

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  FlexCAN_Ip_Send (0, 0, &tx_info_std, 1280, &CanData1);
  # DEBUG FlexCAN_Api_Status => NULL
  # DEBUG BEGIN_STMT
  TestDelay (2000000);
  # DEBUG BEGIN_STMT
  FlexCAN_Ip_Send (0, 1, &tx_info_std_remote, 1536, &CanData1);
  # DEBUG FlexCAN_Api_Status => NULL
  # DEBUG BEGIN_STMT
  TestDelay (2000000);
  # DEBUG BEGIN_STMT
  FlexCAN_Ip_Send (0, 2, &tx_info_ext, 447044295, &CanData1);
  # DEBUG FlexCAN_Api_Status => NULL
  # DEBUG BEGIN_STMT
  TestDelay (2000000);
  # DEBUG BEGIN_STMT
  FlexCAN_Ip_Send (0, 3, &tx_info_ext_remote, 358061653, &CanData1);
  # DEBUG FlexCAN_Api_Status => NULL
  # DEBUG BEGIN_STMT
  TestDelay (2000000);
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 1073741824]:
  goto <bb 5>; [100.00%]

}


