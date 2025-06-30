
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Can_Write/26:
  Jump functions of caller  Can_MainFunction_Write/25:
  Jump functions of caller  Can_EnableControllerInterrupts/24:
  Jump functions of caller  Can_SetControllerMode/23:
  Jump functions of caller  Can_Init/21:
  Jump functions of caller  Platform_Init/20:
  Jump functions of caller  Port_Init/19:
  Jump functions of caller  Clock_Ip_DistributePll/18:
  Jump functions of caller  Clock_Ip_GetPllStatus/17:
  Jump functions of caller  Clock_Ip_Init/15:
  Jump functions of caller  main/10:
    callsite  main/10 -> TestDelay/9 : 
       param 0: CONST: 1000000
         value: 0xf4240, mask: 0x0
         Unknown VR
    callsite  main/10 -> TestDelay/9 : 
       param 0: CONST: 1000000
         value: 0xf4240, mask: 0x0
         Unknown VR
    callsite  main/10 -> TestDelay/9 : 
       param 0: CONST: 1000000
         value: 0xf4240, mask: 0x0
         Unknown VR
    callsite  main/10 -> TestDelay/9 : 
       param 0: CONST: 1000000
         value: 0xf4240, mask: 0x0
         Unknown VR
  Jump functions of caller  TestDelay/9:
  Jump functions of caller  CanIf_ControllerBusOff/8:
  Jump functions of caller  CanIf_RxIndication/7:
  Jump functions of caller  CanIf_TxConfirmation/6:
  Jump functions of caller  CanIf_ControllerModeIndication/5:

 Propagating constants:

Not considering main for cloning; -fipa-cp-clone disabled.
Not considering TestDelay for cloning; -fipa-cp-clone disabled.
Not considering CanIf_ControllerBusOff for cloning; -fipa-cp-clone disabled.
Not considering CanIf_RxIndication for cloning; -fipa-cp-clone disabled.
Not considering CanIf_TxConfirmation for cloning; -fipa-cp-clone disabled.
Not considering CanIf_ControllerModeIndication for cloning; -fipa-cp-clone disabled.

overall_size: 86, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 2.000000
 - context independent values, size: 3, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 2.000000

IPA lattices after all propagation:

Lattices:
  Node: main/10:
  Node: TestDelay/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanIf_ControllerBusOff/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanIf_RxIndication/7:
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
  Node: CanIf_TxConfirmation/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanIf_ControllerModeIndication/5:
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

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Can_Write/26 (Can_Write) @070ec000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/10 (107374 (estimated locally),1.00 per call) main/10 (107374 (estimated locally),1.00 per call) main/10 (107374 (estimated locally),1.00 per call) 
  Calls: 
Can_MainFunction_Write/25 (Can_MainFunction_Write) @070e4ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/10 (107374 (estimated locally),1.00 per call) main/10 (107374 (estimated locally),1.00 per call) main/10 (107374 (estimated locally),1.00 per call) 
  Calls: 
Can_EnableControllerInterrupts/24 (Can_EnableControllerInterrupts) @070e4e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/10 (107374 (estimated locally),1.00 per call) 
  Calls: 
Can_SetControllerMode/23 (Can_SetControllerMode) @070e4d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/10 (107374 (estimated locally),1.00 per call) 
  Calls: 
Can_Config_BOARD_InitPeripherals/22 (Can_Config_BOARD_InitPeripherals) @070eb1b0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/10 (addr)
  Availability: not_available
  Varpool flags: read-only
Can_Init/21 (Can_Init) @070e4c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/10 (107374 (estimated locally),1.00 per call) 
  Calls: 
Platform_Init/20 (Platform_Init) @070e4b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/10 (107374 (estimated locally),1.00 per call) 
  Calls: 
Port_Init/19 (Port_Init) @070e4a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/10 (107374 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_DistributePll/18 (Clock_Ip_DistributePll) @070e49a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/10 (107374 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_GetPllStatus/17 (Clock_Ip_GetPllStatus) @070e48c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/10 (976127 (estimated locally),9.09 per call) 
  Calls: 
Mcu_aClockConfigPB/16 (Mcu_aClockConfigPB) @070eb000
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/10 (addr)
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_Init/15 (Clock_Ip_Init) @070e47e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/10 (107374 (estimated locally),1.00 per call) 
  Calls: 
*.LC2/14 (*.LC2) @07049b88
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: dummyData2/3 (addr)
  Referring: main/10 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
*.LC1/13 (*.LC1) @07049af8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: dummyData1/2 (addr)
  Referring: main/10 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
*.LC0/12 (*.LC0) @07049a68
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: dummyData0/1 (addr)
  Referring: main/10 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
DelayTimer.7590/11 (DelayTimer) @07049948
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: TestDelay/9 (read)TestDelay/9 (write)TestDelay/9 (read)TestDelay/9 (write)
  Availability: available
  Varpool flags: initialized
main/10 (main) @07045ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Mcu_aClockConfigPB/16 (addr)*.LC0/12 (read)*.LC1/13 (read)*.LC2/14 (read)Can_Config_BOARD_InitPeripherals/22 (addr)
  Referring: 
  Availability: available
  Function flags: count:107374 (estimated locally) body only_called_at_startup executed_once optimize_size
  Called by: 
  Calls: TestDelay/9 (1073741824 (estimated locally),10000.02 per call) TestDelay/9 (107374 (estimated locally),1.00 per call) Can_MainFunction_Write/25 (107374 (estimated locally),1.00 per call) Can_Write/26 (107374 (estimated locally),1.00 per call) TestDelay/9 (107374 (estimated locally),1.00 per call) Can_MainFunction_Write/25 (107374 (estimated locally),1.00 per call) Can_Write/26 (107374 (estimated locally),1.00 per call) TestDelay/9 (107374 (estimated locally),1.00 per call) Can_Write/26 (107374 (estimated locally),1.00 per call) Can_MainFunction_Write/25 (107374 (estimated locally),1.00 per call) Can_EnableControllerInterrupts/24 (107374 (estimated locally),1.00 per call) Can_SetControllerMode/23 (107374 (estimated locally),1.00 per call) Can_Init/21 (107374 (estimated locally),1.00 per call) Platform_Init/20 (107374 (estimated locally),1.00 per call) Port_Init/19 (107374 (estimated locally),1.00 per call) Clock_Ip_DistributePll/18 (107374 (estimated locally),1.00 per call) Clock_Ip_GetPllStatus/17 (976127 (estimated locally),9.09 per call) Clock_Ip_Init/15 (107374 (estimated locally),1.00 per call) 
TestDelay/9 (TestDelay) @07045620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: DelayTimer.7590/11 (read)DelayTimer.7590/11 (write)DelayTimer.7590/11 (read)DelayTimer.7590/11 (write)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: main/10 (1073741824 (estimated locally),10000.02 per call) main/10 (107374 (estimated locally),1.00 per call) main/10 (107374 (estimated locally),1.00 per call) main/10 (107374 (estimated locally),1.00 per call) 
  Calls: 
CanIf_ControllerBusOff/8 (CanIf_ControllerBusOff) @07045d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
CanIf_RxIndication/7 (CanIf_RxIndication) @07045a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
CanIf_TxConfirmation/6 (CanIf_TxConfirmation) @070457e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
CanIf_ControllerModeIndication/5 (CanIf_ControllerModeIndication) @07045540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
exit_code/4 (exit_code) @07041d80
  Type: variable definition analyzed
  Visibility: force_output externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized
dummyData2/3 (dummyData2) @07041ca8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: *.LC2/14 (addr)
  Availability: available
  Varpool flags: initialized
dummyData1/2 (dummyData1) @07041bd0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: *.LC1/13 (addr)
  Availability: available
  Varpool flags: initialized
dummyData0/1 (dummyData0) @07041af8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: *.LC0/12 (addr)
  Availability: available
  Varpool flags: initialized

;; Function CanIf_ControllerModeIndication (CanIf_ControllerModeIndication, funcdef_no=1, decl_uid=7461, cgraph_uid=2, symbol_order=5)

Modification phase of node CanIf_ControllerModeIndication/5
CanIf_ControllerModeIndication (uint8 ControllerId, Can_ControllerStateType ControllerMode)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function CanIf_TxConfirmation (CanIf_TxConfirmation, funcdef_no=2, decl_uid=7453, cgraph_uid=3, symbol_order=6)

Modification phase of node CanIf_TxConfirmation/6
CanIf_TxConfirmation (PduIdType CanTxPduId)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function CanIf_RxIndication (CanIf_RxIndication, funcdef_no=3, decl_uid=7456, cgraph_uid=4, symbol_order=7)

Modification phase of node CanIf_RxIndication/7
CanIf_RxIndication (const struct Can_HwType * Mailbox, const struct PduInfoType * PduInfoPtr)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function CanIf_ControllerBusOff (CanIf_ControllerBusOff, funcdef_no=4, decl_uid=7458, cgraph_uid=5, symbol_order=8)

Modification phase of node CanIf_ControllerBusOff/8
CanIf_ControllerBusOff (uint8 ControllerId)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function TestDelay (TestDelay, funcdef_no=5, decl_uid=7586, cgraph_uid=6, symbol_order=9)

Modification phase of node TestDelay/9
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



;; Function main (main, funcdef_no=6, decl_uid=7595, cgraph_uid=7, symbol_order=10) (executed once)

Modification phase of node main/10
main ()
{
  struct Can_PduType DataInfo2;
  struct Can_PduType DataInfo1;
  struct Can_PduType DataInfo0;
  <unnamed type> _1;

  <bb 2> [local count: 107374]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ctrStateType => 1
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
  Platform_Init (0B);
  # DEBUG BEGIN_STMT
  DataInfo0 = *.LC0;
  # DEBUG BEGIN_STMT
  DataInfo1 = *.LC1;
  # DEBUG BEGIN_STMT
  DataInfo2 = *.LC2;
  # DEBUG BEGIN_STMT
  Can_Init (&Can_Config_BOARD_InitPeripherals);
  # DEBUG BEGIN_STMT
  Can_SetControllerMode (0, 1);
  # DEBUG ret => NULL
  # DEBUG BEGIN_STMT
  Can_EnableControllerInterrupts (0);
  # DEBUG BEGIN_STMT
  Can_MainFunction_Write ();
  # DEBUG BEGIN_STMT
  Can_Write (1, &DataInfo0);
  # DEBUG ret => NULL
  # DEBUG BEGIN_STMT
  TestDelay (1000000);
  # DEBUG BEGIN_STMT
  Can_Write (1, &DataInfo1);
  # DEBUG ret => NULL
  # DEBUG BEGIN_STMT
  Can_MainFunction_Write ();
  # DEBUG BEGIN_STMT
  TestDelay (1000000);
  # DEBUG BEGIN_STMT
  Can_Write (1, &DataInfo2);
  # DEBUG ret => NULL
  # DEBUG BEGIN_STMT
  Can_MainFunction_Write ();
  # DEBUG BEGIN_STMT
  TestDelay (1000000);

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  TestDelay (1000000);
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 1073741824]:
  goto <bb 5>; [100.00%]

}


