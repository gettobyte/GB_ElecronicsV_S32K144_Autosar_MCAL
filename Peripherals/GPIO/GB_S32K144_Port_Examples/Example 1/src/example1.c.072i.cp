
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dio_WriteChannel/10:
  Jump functions of caller  Port_Init/9:
  Jump functions of caller  Mcu_SetMode/8:
  Jump functions of caller  Mcu_InitClock/7:
  Jump functions of caller  Mcu_Init/5:
  Jump functions of caller  main/3:
    callsite  main/3 -> TestDelay/2 : 
       param 0: CONST: 2000000
         value: 0x1e8480, mask: 0x0
         Unknown VR
    callsite  main/3 -> TestDelay/2 : 
       param 0: CONST: 2000000
         value: 0x1e8480, mask: 0x0
         Unknown VR
  Jump functions of caller  TestDelay/2:

 Propagating constants:

Not considering main for cloning; -fipa-cp-clone disabled.
Not considering TestDelay for cloning; -fipa-cp-clone disabled.

overall_size: 30, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: main/3:
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

Dio_WriteChannel/10 (Dio_WriteChannel) @06c3f8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/3 (1073741824 (estimated locally),10000.02 per call) main/3 (1073741824 (estimated locally),10000.02 per call) 
  Calls: 
Port_Init/9 (Port_Init) @06c3f7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/3 (107374 (estimated locally),1.00 per call) 
  Calls: 
Mcu_SetMode/8 (Mcu_SetMode) @06c3f700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/3 (107374 (estimated locally),1.00 per call) 
  Calls: 
Mcu_InitClock/7 (Mcu_InitClock) @06c3f620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/3 (107374 (estimated locally),1.00 per call) 
  Calls: 
Mcu_Config_BOARD_InitPeripherals/6 (Mcu_Config_BOARD_InitPeripherals) @06c3ce58
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/3 (addr)
  Availability: not_available
  Varpool flags: read-only
Mcu_Init/5 (Mcu_Init) @06c3f540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/3 (107374 (estimated locally),1.00 per call) 
  Calls: 
DelayTimer.6202/4 (DelayTimer) @06c3cbd0
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: TestDelay/2 (read)TestDelay/2 (write)TestDelay/2 (read)TestDelay/2 (write)
  Availability: available
  Varpool flags: initialized
main/3 (main) @06c3f000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Mcu_Config_BOARD_InitPeripherals/6 (addr)
  Referring: 
  Availability: available
  Function flags: count:107374 (estimated locally) body only_called_at_startup executed_once optimize_size
  Called by: 
  Calls: TestDelay/2 (1073741824 (estimated locally),10000.02 per call) Dio_WriteChannel/10 (1073741824 (estimated locally),10000.02 per call) TestDelay/2 (1073741824 (estimated locally),10000.02 per call) Dio_WriteChannel/10 (1073741824 (estimated locally),10000.02 per call) Port_Init/9 (107374 (estimated locally),1.00 per call) Mcu_SetMode/8 (107374 (estimated locally),1.00 per call) Mcu_InitClock/7 (107374 (estimated locally),1.00 per call) Mcu_Init/5 (107374 (estimated locally),1.00 per call) 
TestDelay/2 (TestDelay) @06c38620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: DelayTimer.6202/4 (read)DelayTimer.6202/4 (write)DelayTimer.6202/4 (read)DelayTimer.6202/4 (write)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: main/3 (1073741824 (estimated locally),10000.02 per call) main/3 (1073741824 (estimated locally),10000.02 per call) 
  Calls: 
exit_code/1 (exit_code) @06c3c5e8
  Type: variable definition analyzed
  Visibility: force_output externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized

;; Function TestDelay (TestDelay, funcdef_no=1, decl_uid=6198, cgraph_uid=2, symbol_order=2)

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



;; Function main (main, funcdef_no=2, decl_uid=6207, cgraph_uid=3, symbol_order=3) (executed once)

Modification phase of node main/3
main ()
{
  <bb 2> [local count: 107374]:
  # DEBUG BEGIN_STMT
  # DEBUG count => 0
  # DEBUG BEGIN_STMT
  Mcu_Init (&Mcu_Config_BOARD_InitPeripherals);
  # DEBUG BEGIN_STMT
  Mcu_InitClock (0);
  # DEBUG BEGIN_STMT
  Mcu_SetMode (0);
  # DEBUG BEGIN_STMT
  Port_Init (0B);

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dio_WriteChannel (111, 1);
  # DEBUG BEGIN_STMT
  TestDelay (2000000);
  # DEBUG BEGIN_STMT
  Dio_WriteChannel (111, 0);
  # DEBUG BEGIN_STMT
  TestDelay (2000000);
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

}


