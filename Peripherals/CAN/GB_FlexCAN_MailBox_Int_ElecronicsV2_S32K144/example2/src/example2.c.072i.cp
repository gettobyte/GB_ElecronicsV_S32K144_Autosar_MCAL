
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  FlexCAN_Ip_Receive/16:
  Jump functions of caller  FlexCAN_Ip_ConfigRxMb/15:
  Jump functions of caller  FlexCAN_Ip_SetStartMode_Privileged/14:
  Jump functions of caller  FlexCAN_Ip_Init_Privileged/11:
  Jump functions of caller  Port_Init/10:
  Jump functions of caller  CAN0_ORED_0_15_MB_IRQHandler/9:
  Jump functions of caller  IntCtrl_Ip_InstallHandler/8:
  Jump functions of caller  IntCtrl_Ip_EnableIrq/7:
  Jump functions of caller  Clock_Ip_DistributePll/6:
  Jump functions of caller  Clock_Ip_GetPllStatus/5:
  Jump functions of caller  Clock_Ip_Init/3:
  Jump functions of caller  main/2:
  Jump functions of caller  GB_MailBox_CallBack/1:

 Propagating constants:

Not considering main for cloning; -fipa-cp-clone disabled.
Not considering GB_MailBox_CallBack for cloning; -fipa-cp-clone disabled.

overall_size: 42, max_new_size: 11001
 - context independent values, size: 4, time_benefit: 2.000000

IPA lattices after all propagation:

Lattices:
  Node: main/2:
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

FlexCAN_Ip_Receive/16 (FlexCAN_Ip_Receive) @06da2700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/2 (107374 (estimated locally),1.00 per call) 
  Calls: 
FlexCAN_Ip_ConfigRxMb/15 (FlexCAN_Ip_ConfigRxMb) @06da2620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/2 (107374 (estimated locally),1.00 per call) 
  Calls: 
FlexCAN_Ip_SetStartMode_Privileged/14 (FlexCAN_Ip_SetStartMode_Privileged) @06da2540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/2 (107374 (estimated locally),1.00 per call) 
  Calls: 
FlexCAN_Config0/13 (FlexCAN_Config0) @06d98ea0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/2 (addr)
  Availability: not_available
  Varpool flags: read-only
FlexCAN_State0/12 (FlexCAN_State0) @06d98e58
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/2 (addr)
  Availability: not_available
  Varpool flags:
FlexCAN_Ip_Init_Privileged/11 (FlexCAN_Ip_Init_Privileged) @06da2460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/2 (107374 (estimated locally),1.00 per call) 
  Calls: 
Port_Init/10 (Port_Init) @06da2380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/2 (107374 (estimated locally),1.00 per call) 
  Calls: 
CAN0_ORED_0_15_MB_IRQHandler/9 (CAN0_ORED_0_15_MB_IRQHandler) @06da22a0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: main/2 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
IntCtrl_Ip_InstallHandler/8 (IntCtrl_Ip_InstallHandler) @06da21c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/2 (107374 (estimated locally),1.00 per call) 
  Calls: 
IntCtrl_Ip_EnableIrq/7 (IntCtrl_Ip_EnableIrq) @06da20e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/2 (107374 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_DistributePll/6 (Clock_Ip_DistributePll) @06da2000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/2 (107374 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_GetPllStatus/5 (Clock_Ip_GetPllStatus) @06d99ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/2 (976127 (estimated locally),9.09 per call) 
  Calls: 
Mcu_aClockConfigPB/4 (Mcu_aClockConfigPB) @06d98c60
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/2 (addr)
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_Init/3 (Clock_Ip_Init) @06d99e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/2 (107374 (estimated locally),1.00 per call) 
  Calls: 
main/2 (main) @06d998c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Mcu_aClockConfigPB/4 (addr)CAN0_ORED_0_15_MB_IRQHandler/9 (addr)FlexCAN_State0/12 (addr)FlexCAN_Config0/13 (addr)
  Referring: 
  Availability: available
  Function flags: count:107374 (estimated locally) body only_called_at_startup executed_once optimize_size
  Called by: 
  Calls: FlexCAN_Ip_Receive/16 (107374 (estimated locally),1.00 per call) FlexCAN_Ip_ConfigRxMb/15 (107374 (estimated locally),1.00 per call) FlexCAN_Ip_SetStartMode_Privileged/14 (107374 (estimated locally),1.00 per call) FlexCAN_Ip_Init_Privileged/11 (107374 (estimated locally),1.00 per call) Port_Init/10 (107374 (estimated locally),1.00 per call) IntCtrl_Ip_InstallHandler/8 (107374 (estimated locally),1.00 per call) IntCtrl_Ip_EnableIrq/7 (107374 (estimated locally),1.00 per call) Clock_Ip_DistributePll/6 (107374 (estimated locally),1.00 per call) Clock_Ip_GetPllStatus/5 (976127 (estimated locally),9.09 per call) Clock_Ip_Init/3 (107374 (estimated locally),1.00 per call) 
GB_MailBox_CallBack/1 (GB_MailBox_CallBack) @06d99540
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



;; Function main (main, funcdef_no=2, decl_uid=7302, cgraph_uid=3, symbol_order=2) (executed once)

Modification phase of node main/2
main ()
{
  struct Flexcan_Ip_MsgBuffType rxData;
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
  IntCtrl_Ip_EnableIrq (81);
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_InstallHandler (81, CAN0_ORED_0_15_MB_IRQHandler, 0B);
  # DEBUG BEGIN_STMT
  Port_Init (0B);
  # DEBUG BEGIN_STMT
  rx_info = {};
  rx_info.data_length = 8;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  FlexCAN_Ip_Init_Privileged (0, &FlexCAN_State0, &FlexCAN_Config0);
  # DEBUG BEGIN_STMT
  FlexCAN_Ip_SetStartMode_Privileged (0);
  # DEBUG FlexCAN_Api_Status => NULL
  # DEBUG BEGIN_STMT
  FlexCAN_Ip_ConfigRxMb (0, 0, &rx_info, 800);
  # DEBUG FlexCAN_Api_Status => NULL
  # DEBUG BEGIN_STMT
  FlexCAN_Ip_Receive (0, 0, &rxData, 0);
  # DEBUG FlexCAN_Api_Status => NULL

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 1073741824]:
  goto <bb 5>; [100.00%]

}

