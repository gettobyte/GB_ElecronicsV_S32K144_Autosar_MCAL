
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Lpuart_Uart_Ip_SyncSend/40:
  Jump functions of caller  Lpuart_Uart_Ip_Init/38:
  Jump functions of caller  Port_Init/37:
  Jump functions of caller  Clock_Ip_DistributePll/36:
  Jump functions of caller  Clock_Ip_GetPllStatus/35:
  Jump functions of caller  Clock_Ip_Init/33:
  Jump functions of caller  main/31:
    callsite  main/31 -> TestDelay/30 : 
       param 0: CONST: 2000000
         value: 0x1e8480, mask: 0x0
         Unknown VR
  Jump functions of caller  TestDelay/30:

 Propagating constants:

Not considering main for cloning; -fipa-cp-clone disabled.
Not considering TestDelay for cloning; -fipa-cp-clone disabled.

overall_size: 42, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: main/31:
  Node: TestDelay/30:
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

Lpuart_Uart_Ip_SyncSend/40 (Lpuart_Uart_Ip_SyncSend) @06fb4380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/31 (1073741824 (estimated locally),10000.02 per call) main/31 (107374 (estimated locally),1.00 per call) 
  Calls: 
Lpuart_Uart_Ip_xHwConfigPB_1_BOARD_INITPERIPHERALS/39 (Lpuart_Uart_Ip_xHwConfigPB_1_BOARD_INITPERIPHERALS) @06fb5000
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/31 (addr)
  Availability: not_available
  Varpool flags: read-only
Lpuart_Uart_Ip_Init/38 (Lpuart_Uart_Ip_Init) @06fb42a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/31 (107374 (estimated locally),1.00 per call) 
  Calls: 
Port_Init/37 (Port_Init) @06fb41c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/31 (107374 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_DistributePll/36 (Clock_Ip_DistributePll) @06fb40e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/31 (107374 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_GetPllStatus/35 (Clock_Ip_GetPllStatus) @06fb4000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/31 (976127 (estimated locally),9.09 per call) 
  Calls: 
Mcu_aClockConfigPB/34 (Mcu_aClockConfigPB) @06f66e10
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/31 (addr)main/31 (addr)
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_Init/33 (Clock_Ip_Init) @06f67620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/31 (868753 (estimated locally),8.09 per call) main/31 (107374 (estimated locally),1.00 per call) 
  Calls: 
DelayTimer.6345/32 (DelayTimer) @06f66990
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: TestDelay/30 (read)TestDelay/30 (write)TestDelay/30 (read)TestDelay/30 (write)
  Availability: available
  Varpool flags: initialized
main/31 (main) @06f67a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Mcu_aClockConfigPB/34 (addr)Mcu_aClockConfigPB/34 (addr)Lpuart_Uart_Ip_xHwConfigPB_1_BOARD_INITPERIPHERALS/39 (addr)x/29 (addr)x/29 (addr)
  Referring: 
  Availability: available
  Function flags: count:107374 (estimated locally) body only_called_at_startup executed_once optimize_size
  Called by: 
  Calls: TestDelay/30 (1073741824 (estimated locally),10000.02 per call) Lpuart_Uart_Ip_SyncSend/40 (1073741824 (estimated locally),10000.02 per call) Lpuart_Uart_Ip_SyncSend/40 (107374 (estimated locally),1.00 per call) Lpuart_Uart_Ip_Init/38 (107374 (estimated locally),1.00 per call) Port_Init/37 (107374 (estimated locally),1.00 per call) Clock_Ip_DistributePll/36 (107374 (estimated locally),1.00 per call) Clock_Ip_GetPllStatus/35 (976127 (estimated locally),9.09 per call) Clock_Ip_Init/33 (868753 (estimated locally),8.09 per call) Clock_Ip_Init/33 (107374 (estimated locally),1.00 per call) 
TestDelay/30 (TestDelay) @06f677e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: DelayTimer.6345/32 (read)DelayTimer.6345/32 (write)DelayTimer.6345/32 (read)DelayTimer.6345/32 (write)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: main/31 (1073741824 (estimated locally),10000.02 per call) 
  Calls: 
x/29 (x) @06f663a8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: main/31 (addr)main/31 (addr)
  Availability: available
  Varpool flags: initialized
exit_code/28 (exit_code) @06f66360
  Type: variable definition analyzed
  Visibility: force_output externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized

;; Function TestDelay (TestDelay, funcdef_no=28, decl_uid=6341, cgraph_uid=29, symbol_order=30)

Modification phase of node TestDelay/30
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



;; Function main (main, funcdef_no=29, decl_uid=6350, cgraph_uid=30, symbol_order=31) (executed once)

Modification phase of node main/31
main ()
{
  Clock_Ip_StatusType clockStatus;
  <unnamed type> _1;

  <bb 2> [local count: 107374]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  clockStatus_8 = Clock_Ip_Init (&Mcu_aClockConfigPB[0]);
  # DEBUG clockStatus => clockStatus_8
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 868753]:
  # DEBUG BEGIN_STMT
  clockStatus_17 = Clock_Ip_Init (&Mcu_aClockConfigPB[0]);
  # DEBUG clockStatus => clockStatus_17

  <bb 4> [local count: 976127]:
  # clockStatus_2 = PHI <clockStatus_8(2), clockStatus_17(3)>
  # DEBUG clockStatus => clockStatus_2
  # DEBUG BEGIN_STMT
  if (clockStatus_2 != 0)
    goto <bb 3>; [89.00%]
  else
    goto <bb 8>; [11.00%]

  <bb 8> [local count: 107374]:

  <bb 5> [local count: 976127]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Clock_Ip_GetPllStatus ();
  if (_1 != 0)
    goto <bb 10>; [89.00%]
  else
    goto <bb 6>; [11.00%]

  <bb 10> [local count: 868753]:
  goto <bb 5>; [100.00%]

  <bb 6> [local count: 107374]:
  # DEBUG BEGIN_STMT
  Clock_Ip_DistributePll ();
  # DEBUG BEGIN_STMT
  Port_Init (0B);
  # DEBUG BEGIN_STMT
  Lpuart_Uart_Ip_Init (1, &Lpuart_Uart_Ip_xHwConfigPB_1_BOARD_INITPERIPHERALS);
  # DEBUG BEGIN_STMT
  Lpuart_Uart_Ip_SyncSend (1, &x, 5, 1000);

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Lpuart_Uart_Ip_SyncSend (1, &x, 5, 1000);
  # DEBUG BEGIN_STMT
  TestDelay (2000000);
  # DEBUG BEGIN_STMT

  <bb 9> [local count: 1073741824]:
  goto <bb 7>; [100.00%]

}


