
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dio_WriteChannel/12:
  Jump functions of caller  Port_Init/11:
  Jump functions of caller  Mcu_SetMode/10:
  Jump functions of caller  Mcu_DistributePllClock/9:
  Jump functions of caller  Mcu_GetPllStatus/8:
  Jump functions of caller  Mcu_InitClock/7:
  Jump functions of caller  Mcu_Init/5:
  Jump functions of caller  main/3:
    callsite  main/3 -> TestDelay/1 : 
       param 0: CONST: 2000000
         value: 0x1e8480, mask: 0x0
         Unknown VR
    callsite  main/3 -> TestDelay/1 : 
       param 0: CONST: 2000000
         value: 0x1e8480, mask: 0x0
         Unknown VR
    callsite  main/3 -> TestDelay/1 : 
       param 0: CONST: 2000000
         value: 0x1e8480, mask: 0x0
         Unknown VR
    callsite  main/3 -> TestDelay/1 : 
       param 0: CONST: 2000000
         value: 0x1e8480, mask: 0x0
         Unknown VR
  Jump functions of caller  TestDelay/1:

 Propagating constants:

Not considering main for cloning; -fipa-cp-clone disabled.
Not considering TestDelay for cloning; -fipa-cp-clone disabled.

overall_size: 45, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: main/3:
  Node: TestDelay/1:
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

Dio_WriteChannel/12 (Dio_WriteChannel) @06b2dc40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/3 (1073741824 (estimated locally),10000.02 per call) main/3 (1073741824 (estimated locally),10000.02 per call) main/3 (1073741824 (estimated locally),10000.02 per call) main/3 (1073741824 (estimated locally),10000.02 per call) 
  Calls: 
Port_Init/11 (Port_Init) @06b2db60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/3 (107374 (estimated locally),1.00 per call) 
  Calls: 
Mcu_SetMode/10 (Mcu_SetMode) @06b2da80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/3 (107374 (estimated locally),1.00 per call) 
  Calls: 
Mcu_DistributePllClock/9 (Mcu_DistributePllClock) @06b2d9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/3 (107374 (estimated locally),1.00 per call) 
  Calls: 
Mcu_GetPllStatus/8 (Mcu_GetPllStatus) @06b2d8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/3 (976127 (estimated locally),9.09 per call) 
  Calls: 
Mcu_InitClock/7 (Mcu_InitClock) @06b2d7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/3 (107374 (estimated locally),1.00 per call) 
  Calls: 
Mcu_Config_BOARD_InitPeripherals/6 (Mcu_Config_BOARD_InitPeripherals) @06b303a8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/3 (addr)
  Availability: not_available
  Varpool flags: read-only
Mcu_Init/5 (Mcu_Init) @06b2d700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/3 (107374 (estimated locally),1.00 per call) 
  Calls: 
DelayTimer.6187/4 (DelayTimer) @06b30000
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: TestDelay/1 (read)TestDelay/1 (write)TestDelay/1 (read)TestDelay/1 (write)
  Availability: available
  Varpool flags: initialized
main/3 (main) @06b2d1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Mcu_Config_BOARD_InitPeripherals/6 (addr)
  Referring: 
  Availability: available
  Function flags: count:107374 (estimated locally) body only_called_at_startup executed_once optimize_size
  Called by: 
  Calls: TestDelay/1 (1073741824 (estimated locally),10000.02 per call) Dio_WriteChannel/12 (1073741824 (estimated locally),10000.02 per call) TestDelay/1 (1073741824 (estimated locally),10000.02 per call) Dio_WriteChannel/12 (1073741824 (estimated locally),10000.02 per call) TestDelay/1 (1073741824 (estimated locally),10000.02 per call) Dio_WriteChannel/12 (1073741824 (estimated locally),10000.02 per call) TestDelay/1 (1073741824 (estimated locally),10000.02 per call) Dio_WriteChannel/12 (1073741824 (estimated locally),10000.02 per call) Port_Init/11 (107374 (estimated locally),1.00 per call) Mcu_SetMode/10 (107374 (estimated locally),1.00 per call) Mcu_DistributePllClock/9 (107374 (estimated locally),1.00 per call) Mcu_GetPllStatus/8 (976127 (estimated locally),9.09 per call) Mcu_InitClock/7 (107374 (estimated locally),1.00 per call) Mcu_Init/5 (107374 (estimated locally),1.00 per call) 
exit_code/2 (exit_code) @06b29b40
  Type: variable definition analyzed
  Visibility: force_output externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized
TestDelay/1 (TestDelay) @06b28540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: DelayTimer.6187/4 (read)DelayTimer.6187/4 (write)DelayTimer.6187/4 (read)DelayTimer.6187/4 (write)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: main/3 (1073741824 (estimated locally),10000.02 per call) main/3 (1073741824 (estimated locally),10000.02 per call) main/3 (1073741824 (estimated locally),10000.02 per call) main/3 (1073741824 (estimated locally),10000.02 per call) 
  Calls: 

;; Function TestDelay (TestDelay, funcdef_no=1, decl_uid=6183, cgraph_uid=2, symbol_order=1)

Modification phase of node TestDelay/1
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



;; Function main (main, funcdef_no=2, decl_uid=6193, cgraph_uid=3, symbol_order=3) (executed once)

Modification phase of node main/3
main ()
{
  <unnamed type> _1;

  <bb 2> [local count: 107374]:
  # DEBUG BEGIN_STMT
  Mcu_Init (&Mcu_Config_BOARD_InitPeripherals);
  # DEBUG BEGIN_STMT
  Mcu_InitClock (0);
  # DEBUG BEGIN_STMT

  <bb 3> [local count: 976127]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Mcu_GetPllStatus ();
  if (_1 != 51)
    goto <bb 7>; [89.00%]
  else
    goto <bb 4>; [11.00%]

  <bb 7> [local count: 868753]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 107374]:
  # DEBUG BEGIN_STMT
  Mcu_DistributePllClock ();
  # DEBUG BEGIN_STMT
  Mcu_SetMode (0);
  # DEBUG BEGIN_STMT
  Port_Init (0B);

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dio_WriteChannel (97, 1);
  # DEBUG BEGIN_STMT
  TestDelay (2000000);
  # DEBUG BEGIN_STMT
  Dio_WriteChannel (97, 0);
  # DEBUG BEGIN_STMT
  TestDelay (2000000);
  # DEBUG BEGIN_STMT
  Dio_WriteChannel (98, 1);
  # DEBUG BEGIN_STMT
  TestDelay (2000000);
  # DEBUG BEGIN_STMT
  Dio_WriteChannel (98, 0);
  # DEBUG BEGIN_STMT
  TestDelay (2000000);
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 1073741824]:
  goto <bb 5>; [100.00%]

}

