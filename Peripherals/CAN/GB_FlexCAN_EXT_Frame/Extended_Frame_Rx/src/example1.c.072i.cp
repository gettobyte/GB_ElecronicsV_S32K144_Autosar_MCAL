
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  FlexCAN_Ip_Receive/18:
  Jump functions of caller  FlexCAN_Ip_ConfigRxMb/17:
  Jump functions of caller  FlexCAN_Ip_SetStartMode_Privileged/16:
  Jump functions of caller  FlexCAN_Ip_Init_Privileged/13:
  Jump functions of caller  Port_Init/12:
  Jump functions of caller  CAN0_ORED_0_15_MB_IRQHandler/11:
  Jump functions of caller  IntCtrl_Ip_InstallHandler/10:
  Jump functions of caller  IntCtrl_Ip_EnableIrq/9:
  Jump functions of caller  Clock_Ip_DistributePll/8:
  Jump functions of caller  Clock_Ip_GetPllStatus/7:
  Jump functions of caller  Clock_Ip_Init/5:
  Jump functions of caller  main/3:
  Jump functions of caller  TestDelay/2:
  Jump functions of caller  GB_MailBox_CallBack/1:

 Propagating constants:

Not considering main for cloning; -fipa-cp-clone disabled.
Not considering TestDelay for cloning; -fipa-cp-clone disabled.
Not considering GB_MailBox_CallBack for cloning; -fipa-cp-clone disabled.

overall_size: 61, max_new_size: 11001
 - context independent values, size: 4, time_benefit: 2.000000

IPA lattices after all propagation:

Lattices:
  Node: main/3:
  Node: TestDelay/2:
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

FlexCAN_Ip_Receive/18 (FlexCAN_Ip_Receive) @06e90d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/3 (107374 (estimated locally),1.00 per call) main/3 (107374 (estimated locally),1.00 per call) 
  Calls: 
FlexCAN_Ip_ConfigRxMb/17 (FlexCAN_Ip_ConfigRxMb) @06e90c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/3 (107374 (estimated locally),1.00 per call) main/3 (107374 (estimated locally),1.00 per call) 
  Calls: 
FlexCAN_Ip_SetStartMode_Privileged/16 (FlexCAN_Ip_SetStartMode_Privileged) @06e90b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/3 (107374 (estimated locally),1.00 per call) 
  Calls: 
FlexCAN_Config0/15 (FlexCAN_Config0) @06e94510
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/3 (addr)
  Availability: not_available
  Varpool flags: read-only
FlexCAN_State0/14 (FlexCAN_State0) @06e944c8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/3 (addr)
  Availability: not_available
  Varpool flags:
FlexCAN_Ip_Init_Privileged/13 (FlexCAN_Ip_Init_Privileged) @06e90a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/3 (107374 (estimated locally),1.00 per call) 
  Calls: 
Port_Init/12 (Port_Init) @06e909a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/3 (107374 (estimated locally),1.00 per call) 
  Calls: 
CAN0_ORED_0_15_MB_IRQHandler/11 (CAN0_ORED_0_15_MB_IRQHandler) @06e908c0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: main/3 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
IntCtrl_Ip_InstallHandler/10 (IntCtrl_Ip_InstallHandler) @06e907e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/3 (107374 (estimated locally),1.00 per call) 
  Calls: 
IntCtrl_Ip_EnableIrq/9 (IntCtrl_Ip_EnableIrq) @06e90700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/3 (107374 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_DistributePll/8 (Clock_Ip_DistributePll) @06e90620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/3 (107374 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_GetPllStatus/7 (Clock_Ip_GetPllStatus) @06e90540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/3 (976127 (estimated locally),9.09 per call) 
  Calls: 
Mcu_aClockConfigPB/6 (Mcu_aClockConfigPB) @06e942d0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/3 (addr)
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_Init/5 (Clock_Ip_Init) @06e90460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/3 (107374 (estimated locally),1.00 per call) 
  Calls: 
DelayTimer.7306/4 (DelayTimer) @06e89e58
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: TestDelay/2 (read)TestDelay/2 (write)TestDelay/2 (read)TestDelay/2 (write)
  Availability: available
  Varpool flags: initialized
main/3 (main) @06e88ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Mcu_aClockConfigPB/6 (addr)CAN0_ORED_0_15_MB_IRQHandler/11 (addr)FlexCAN_State0/14 (addr)FlexCAN_Config0/15 (addr)
  Referring: 
  Availability: available
  Function flags: count:107374 (estimated locally) body only_called_at_startup executed_once optimize_size
  Called by: 
  Calls: FlexCAN_Ip_Receive/18 (107374 (estimated locally),1.00 per call) FlexCAN_Ip_ConfigRxMb/17 (107374 (estimated locally),1.00 per call) FlexCAN_Ip_Receive/18 (107374 (estimated locally),1.00 per call) FlexCAN_Ip_ConfigRxMb/17 (107374 (estimated locally),1.00 per call) FlexCAN_Ip_SetStartMode_Privileged/16 (107374 (estimated locally),1.00 per call) FlexCAN_Ip_Init_Privileged/13 (107374 (estimated locally),1.00 per call) Port_Init/12 (107374 (estimated locally),1.00 per call) IntCtrl_Ip_InstallHandler/10 (107374 (estimated locally),1.00 per call) IntCtrl_Ip_EnableIrq/9 (107374 (estimated locally),1.00 per call) Clock_Ip_DistributePll/8 (107374 (estimated locally),1.00 per call) Clock_Ip_GetPllStatus/7 (976127 (estimated locally),9.09 per call) Clock_Ip_Init/5 (107374 (estimated locally),1.00 per call) 
TestDelay/2 (TestDelay) @06e88b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: DelayTimer.7306/4 (read)DelayTimer.7306/4 (write)DelayTimer.7306/4 (read)DelayTimer.7306/4 (write)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 
GB_MailBox_CallBack/1 (GB_MailBox_CallBack) @06e887e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function GB_MailBox_CallBack (GB_MailBox_CallBack, funcdef_no=1, decl_uid=7298, cgraph_uid=2, symbol_order=1)

Modification phase of node GB_MailBox_CallBack/1
GB_MailBox_CallBack (uint8 instance, Flexcan_Ip_EventType eventType, uint32 buffIdx, const struct Flexcan_Ip_StateType * flexcanState)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG state => flexcanState_1(D)
  # DEBUG BEGIN_STMT
  MEM[(struct Flexcan_Ip_StateType *)flexcanState_1(D)].mbs[buffIdx_3(D)].state ={v} 1;
  return;

}



;; Function TestDelay (TestDelay, funcdef_no=2, decl_uid=7302, cgraph_uid=3, symbol_order=2)

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



;; Function main (main, funcdef_no=3, decl_uid=7311, cgraph_uid=4, symbol_order=3) (executed once)

Modification phase of node main/3
main ()
{
  struct Flexcan_Ip_MsgBuffType rxData2;
  struct Flexcan_Ip_MsgBuffType rxData1;
  struct Flexcan_Ip_DataInfoType rx_info_ext;
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
  MEM[(struct  *)&rx_info_ext + 8B] = {};
  rx_info_ext.msg_id_type = 1;
  rx_info_ext.data_length = 8;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  FlexCAN_Ip_Init_Privileged (0, &FlexCAN_State0, &FlexCAN_Config0);
  # DEBUG BEGIN_STMT
  FlexCAN_Ip_SetStartMode_Privileged (0);
  # DEBUG FlexCAN_Api_Status => NULL
  # DEBUG BEGIN_STMT
  FlexCAN_Ip_ConfigRxMb (0, 0, &rx_info_ext, 447044295);
  # DEBUG MbRx0 => NULL
  # DEBUG BEGIN_STMT
  FlexCAN_Ip_Receive (0, 0, &rxData1, 0);
  # DEBUG Rx0 => NULL
  # DEBUG BEGIN_STMT
  FlexCAN_Ip_ConfigRxMb (0, 1, &rx_info_ext, 358061653);
  # DEBUG MbRx1 => NULL
  # DEBUG BEGIN_STMT
  FlexCAN_Ip_Receive (0, 1, &rxData2, 0);
  # DEBUG Rx1 => NULL

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 1073741824]:
  goto <bb 5>; [100.00%]

}


