
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  memset/16:
  Jump functions of caller  FlexCAN_Ip_Receive/15:
  Jump functions of caller  FlexCAN_Ip_ConfigRxMb/14:
  Jump functions of caller  FlexCAN_Ip_SetStartMode_Privileged/13:
  Jump functions of caller  FlexCAN_Ip_Init_Privileged/10:
  Jump functions of caller  Port_Init/9:
  Jump functions of caller  CAN0_ORED_0_15_MB_IRQHandler/8:
  Jump functions of caller  IntCtrl_Ip_InstallHandler/7:
  Jump functions of caller  IntCtrl_Ip_EnableIrq/6:
  Jump functions of caller  Clock_Ip_DistributePll/5:
  Jump functions of caller  Clock_Ip_GetPllStatus/4:
  Jump functions of caller  Clock_Ip_Init/2:
  Jump functions of caller  main/1:

 Propagating constants:

Not considering main for cloning; -fipa-cp-clone disabled.

overall_size: 42, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: main/1:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

memset/16 (memset) @06ecb460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/1 (1073741824 (estimated locally),10000.02 per call) 
  Calls: 
FlexCAN_Ip_Receive/15 (FlexCAN_Ip_Receive) @06ecb380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/1 (1073741824 (estimated locally),10000.02 per call) 
  Calls: 
FlexCAN_Ip_ConfigRxMb/14 (FlexCAN_Ip_ConfigRxMb) @06ecb2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/1 (1073741824 (estimated locally),10000.02 per call) 
  Calls: 
FlexCAN_Ip_SetStartMode_Privileged/13 (FlexCAN_Ip_SetStartMode_Privileged) @06ecb1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/1 (107374 (estimated locally),1.00 per call) 
  Calls: 
FlexCAN_Config0/12 (FlexCAN_Config0) @06ec2cf0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/1 (addr)
  Availability: not_available
  Varpool flags: read-only
FlexCAN_State0/11 (FlexCAN_State0) @06ec2ca8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/1 (addr)
  Availability: not_available
  Varpool flags:
FlexCAN_Ip_Init_Privileged/10 (FlexCAN_Ip_Init_Privileged) @06ecb0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/1 (107374 (estimated locally),1.00 per call) 
  Calls: 
Port_Init/9 (Port_Init) @06ecb000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/1 (107374 (estimated locally),1.00 per call) 
  Calls: 
CAN0_ORED_0_15_MB_IRQHandler/8 (CAN0_ORED_0_15_MB_IRQHandler) @06ec3ee0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: main/1 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
IntCtrl_Ip_InstallHandler/7 (IntCtrl_Ip_InstallHandler) @06ec3e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/1 (107374 (estimated locally),1.00 per call) 
  Calls: 
IntCtrl_Ip_EnableIrq/6 (IntCtrl_Ip_EnableIrq) @06ec3d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/1 (107374 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_DistributePll/5 (Clock_Ip_DistributePll) @06ec3c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/1 (107374 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_GetPllStatus/4 (Clock_Ip_GetPllStatus) @06ec3b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/1 (976127 (estimated locally),9.09 per call) 
  Calls: 
Mcu_aClockConfigPB/3 (Mcu_aClockConfigPB) @06ec2ab0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/1 (addr)
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_Init/2 (Clock_Ip_Init) @06ec3a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/1 (107374 (estimated locally),1.00 per call) 
  Calls: 
main/1 (main) @06ec3620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Mcu_aClockConfigPB/3 (addr)CAN0_ORED_0_15_MB_IRQHandler/8 (addr)FlexCAN_State0/11 (addr)FlexCAN_Config0/12 (addr)
  Referring: 
  Availability: available
  Function flags: count:107374 (estimated locally) body only_called_at_startup executed_once optimize_size
  Called by: 
  Calls: memset/16 (1073741824 (estimated locally),10000.02 per call) FlexCAN_Ip_Receive/15 (1073741824 (estimated locally),10000.02 per call) FlexCAN_Ip_ConfigRxMb/14 (1073741824 (estimated locally),10000.02 per call) FlexCAN_Ip_SetStartMode_Privileged/13 (107374 (estimated locally),1.00 per call) FlexCAN_Ip_Init_Privileged/10 (107374 (estimated locally),1.00 per call) Port_Init/9 (107374 (estimated locally),1.00 per call) IntCtrl_Ip_InstallHandler/7 (107374 (estimated locally),1.00 per call) IntCtrl_Ip_EnableIrq/6 (107374 (estimated locally),1.00 per call) Clock_Ip_DistributePll/5 (107374 (estimated locally),1.00 per call) Clock_Ip_GetPllStatus/4 (976127 (estimated locally),9.09 per call) Clock_Ip_Init/2 (107374 (estimated locally),1.00 per call) 

;; Function main (main, funcdef_no=1, decl_uid=7295, cgraph_uid=2, symbol_order=1) (executed once)

Modification phase of node main/1
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

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  FlexCAN_Ip_ConfigRxMb (0, 1, &rx_info, 800);
  # DEBUG FlexCAN_Api_Status => NULL
  # DEBUG BEGIN_STMT
  FlexCAN_Ip_Receive (0, 1, &rxData, 0);
  # DEBUG FlexCAN_Api_Status => NULL
  # DEBUG BEGIN_STMT
  memset (&rxData.data, 0, 64);
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 1073741824]:
  goto <bb 5>; [100.00%]

}


