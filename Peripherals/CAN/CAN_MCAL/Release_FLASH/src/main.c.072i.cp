
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Can_MainFunction_Write/20:
  Jump functions of caller  Can_Write/19:
  Jump functions of caller  Can_SetControllerMode/18:
  Jump functions of caller  Can_Init/16:
  Jump functions of caller  Port_Init/15:
  Jump functions of caller  Clock_Ip_DistributePll/14:
  Jump functions of caller  Clock_Ip_GetPllStatus/13:
  Jump functions of caller  Clock_Ip_Init/11:
  Jump functions of caller  main/8:
    callsite  main/8 -> TestDelay/7 : 
       param 0: CONST: 1000000
         value: 0xf4240, mask: 0x0
         Unknown VR
  Jump functions of caller  TestDelay/7:
  Jump functions of caller  CanIf_ControllerBusOff/6:
  Jump functions of caller  CanIf_RxIndication/5:
  Jump functions of caller  CanIf_TxConfirmation/4:
  Jump functions of caller  CanIf_ControllerModeIndication/3:

 Propagating constants:

Not considering main for cloning; -fipa-cp-clone disabled.
Not considering TestDelay for cloning; -fipa-cp-clone disabled.
Not considering CanIf_ControllerBusOff for cloning; -fipa-cp-clone disabled.
Not considering CanIf_RxIndication for cloning; -fipa-cp-clone disabled.
Not considering CanIf_TxConfirmation for cloning; -fipa-cp-clone disabled.
Not considering CanIf_ControllerModeIndication for cloning; -fipa-cp-clone disabled.

overall_size: 52, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 2.000000
 - context independent values, size: 3, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 2.000000

IPA lattices after all propagation:

Lattices:
  Node: main/8:
  Node: TestDelay/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanIf_ControllerBusOff/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanIf_RxIndication/5:
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
  Node: CanIf_TxConfirmation/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanIf_ControllerModeIndication/3:
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

Can_MainFunction_Write/20 (Can_MainFunction_Write) @0704a8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/8 (1073741824 (estimated locally),10000.02 per call) 
  Calls: 
Can_Write/19 (Can_Write) @0704a7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/8 (1073741824 (estimated locally),10000.02 per call) 
  Calls: 
Can_SetControllerMode/18 (Can_SetControllerMode) @0704a700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/8 (107374 (estimated locally),1.00 per call) 
  Calls: 
Can_Config_BOARD_InitPeripherals/17 (Can_Config_BOARD_InitPeripherals) @07049ab0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/8 (addr)
  Availability: not_available
  Varpool flags: read-only
Can_Init/16 (Can_Init) @0704a620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/8 (107374 (estimated locally),1.00 per call) 
  Calls: 
Port_Init/15 (Port_Init) @0704a540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/8 (107374 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_DistributePll/14 (Clock_Ip_DistributePll) @0704a460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/8 (107374 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_GetPllStatus/13 (Clock_Ip_GetPllStatus) @0704a380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/8 (976127 (estimated locally),9.09 per call) 
  Calls: 
Mcu_aClockConfigPB/12 (Mcu_aClockConfigPB) @07049948
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/8 (addr)
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_Init/11 (Clock_Ip_Init) @0704a2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/8 (107374 (estimated locally),1.00 per call) 
  Calls: 
*.LC0/10 (*.LC0) @070495a0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: dummyData/1 (addr)
  Referring: main/8 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
DelayTimer.7487/9 (DelayTimer) @07049480
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: TestDelay/7 (read)TestDelay/7 (write)TestDelay/7 (read)TestDelay/7 (write)
  Availability: available
  Varpool flags: initialized
main/8 (main) @06fc6d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Mcu_aClockConfigPB/12 (addr)*.LC0/10 (read)Can_Config_BOARD_InitPeripherals/17 (addr)
  Referring: 
  Availability: available
  Function flags: count:107374 (estimated locally) body only_called_at_startup executed_once optimize_size
  Called by: 
  Calls: TestDelay/7 (1073741824 (estimated locally),10000.02 per call) Can_MainFunction_Write/20 (1073741824 (estimated locally),10000.02 per call) Can_Write/19 (1073741824 (estimated locally),10000.02 per call) Can_SetControllerMode/18 (107374 (estimated locally),1.00 per call) Can_Init/16 (107374 (estimated locally),1.00 per call) Port_Init/15 (107374 (estimated locally),1.00 per call) Clock_Ip_DistributePll/14 (107374 (estimated locally),1.00 per call) Clock_Ip_GetPllStatus/13 (976127 (estimated locally),9.09 per call) Clock_Ip_Init/11 (107374 (estimated locally),1.00 per call) 
TestDelay/7 (TestDelay) @06fc6a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: DelayTimer.7487/9 (read)DelayTimer.7487/9 (write)DelayTimer.7487/9 (read)DelayTimer.7487/9 (write)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: main/8 (1073741824 (estimated locally),10000.02 per call) 
  Calls: 
CanIf_ControllerBusOff/6 (CanIf_ControllerBusOff) @06fc6700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
CanIf_RxIndication/5 (CanIf_RxIndication) @06fc6460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
CanIf_TxConfirmation/4 (CanIf_TxConfirmation) @06fc61c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
CanIf_ControllerModeIndication/3 (CanIf_ControllerModeIndication) @06fc0e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
exit_code/2 (exit_code) @06fc2948
  Type: variable definition analyzed
  Visibility: force_output externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized
dummyData/1 (dummyData) @06fc28b8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: *.LC0/10 (addr)
  Availability: available
  Varpool flags: initialized

;; Function CanIf_ControllerModeIndication (CanIf_ControllerModeIndication, funcdef_no=1, decl_uid=7461, cgraph_uid=2, symbol_order=3)

Modification phase of node CanIf_ControllerModeIndication/3
CanIf_ControllerModeIndication (uint8 ControllerId, Can_ControllerStateType ControllerMode)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function CanIf_TxConfirmation (CanIf_TxConfirmation, funcdef_no=2, decl_uid=7453, cgraph_uid=3, symbol_order=4)

Modification phase of node CanIf_TxConfirmation/4
CanIf_TxConfirmation (PduIdType CanTxPduId)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function CanIf_RxIndication (CanIf_RxIndication, funcdef_no=3, decl_uid=7456, cgraph_uid=4, symbol_order=5)

Modification phase of node CanIf_RxIndication/5
CanIf_RxIndication (const struct Can_HwType * Mailbox, const struct PduInfoType * PduInfoPtr)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function CanIf_ControllerBusOff (CanIf_ControllerBusOff, funcdef_no=4, decl_uid=7458, cgraph_uid=5, symbol_order=6)

Modification phase of node CanIf_ControllerBusOff/6
CanIf_ControllerBusOff (uint8 ControllerId)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function TestDelay (TestDelay, funcdef_no=5, decl_uid=7483, cgraph_uid=6, symbol_order=7)

Modification phase of node TestDelay/7
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



;; Function main (main, funcdef_no=6, decl_uid=7492, cgraph_uid=7, symbol_order=8) (executed once)

Modification phase of node main/8
main ()
{
  struct Can_PduType TxData;
  <unnamed type> _1;

  <bb 2> [local count: 107374]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ctrStateType => 1
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
  TxData = *.LC0;
  # DEBUG BEGIN_STMT
  Can_Init (&Can_Config_BOARD_InitPeripherals);
  # DEBUG BEGIN_STMT
  Can_SetControllerMode (0, 1);
  # DEBUG ret => NULL

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Can_Write (1, &TxData);
  # DEBUG ret => NULL
  # DEBUG BEGIN_STMT
  Can_MainFunction_Write ();
  # DEBUG BEGIN_STMT
  TestDelay (1000000);
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 1073741824]:
  goto <bb 5>; [100.00%]

}


