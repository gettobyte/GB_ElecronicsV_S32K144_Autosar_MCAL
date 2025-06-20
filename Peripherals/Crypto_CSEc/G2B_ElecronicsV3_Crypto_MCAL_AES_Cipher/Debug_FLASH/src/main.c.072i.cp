
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Crypto_Init/5:
  Jump functions of caller  Clock_Ip_Init/3:
  Jump functions of caller  main/2:
    callsite  main/2 -> App_InitCsecHw/1 : 
       param 0: CONST: 3
         value: 0x3, mask: 0x0
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  App_InitCsecHw/1:

 Propagating constants:

Not considering main for cloning; -fipa-cp-clone disabled.

overall_size: 40, max_new_size: 11001
 - context independent values, size: 23, time_benefit: 2.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: main/2:
  Node: App_InitCsecHw/1:
    param [0]: 3 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x3, mask = 0x0
         uint8 [3, 3]
        AGGS VARIABLE
    param [1]: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x0
         uint8 [0, 0]
        AGGS VARIABLE

IPA decision stage:

 - Creating a specialized node of App_InitCsecHw/1 for all known contexts.
    replacing param #0 u8KeySize with const 3
    replacing param #1 u8Sfe with const 0
Propagated bits info for function App_InitCsecHw.constprop/6:
 param 0: value = 0x3, mask = 0x0
 param 1: value = 0x0, mask = 0x0
Propagated bits info for function App_InitCsecHw/1:
 param 0: value = 0x3, mask = 0x0
 param 1: value = 0x0, mask = 0x0

IPA constant propagation end

Reclaiming functions: App_InitCsecHw/1
Reclaiming variables:
Clearing address taken flags:
Symbol table:

App_InitCsecHw.constprop.0/6 (App_InitCsecHw.constprop) @06ab3000
  Type: function definition analyzed
  Visibility:
  References: 
  Referring: 
  Clone of App_InitCsecHw/1
  Availability: local
  Function flags: count:157482133 (estimated locally) local executed_once optimize_size
  Called by: main/2 (107374 (estimated locally),1.00 per call) 
  Calls: 
Crypto_Init/5 (Crypto_Init) @0696a540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/2 (107374 (estimated locally),1.00 per call) 
  Calls: 
Mcu_aClockConfigPB/4 (Mcu_aClockConfigPB) @069695e8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: main/2 (addr)main/2 (addr)
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_Init/3 (Clock_Ip_Init) @0696a460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/2 (868753 (estimated locally),8.09 per call) main/2 (107374 (estimated locally),1.00 per call) 
  Calls: 
main/2 (main) @0696a000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Mcu_aClockConfigPB/4 (addr)Mcu_aClockConfigPB/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:107374 (estimated locally) body only_called_at_startup executed_once optimize_size
  Called by: 
  Calls: Crypto_Init/5 (107374 (estimated locally),1.00 per call) App_InitCsecHw.constprop/6 (107374 (estimated locally),1.00 per call) Clock_Ip_Init/3 (868753 (estimated locally),8.09 per call) Clock_Ip_Init/3 (107374 (estimated locally),1.00 per call) 
App_InitCsecHw/1 (App_InitCsecHw) @06963d20
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:157482133 (estimated locally) body executed_once optimize_size
  Called by: 
  Calls: 
exit_code/0 (exit_code) @069ba7e0
  Type: variable definition analyzed
  Visibility: force_output externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized

;; Function main (main, funcdef_no=1, decl_uid=6421, cgraph_uid=2, symbol_order=2) (executed once)

Modification phase of node main/2
main ()
{
  Clock_Ip_StatusType clockStatus;

  <bb 2> [local count: 107374]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  clockStatus_5 = Clock_Ip_Init (&Mcu_aClockConfigPB[0]);
  # DEBUG clockStatus => clockStatus_5
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 868753]:
  # DEBUG BEGIN_STMT
  clockStatus_9 = Clock_Ip_Init (&Mcu_aClockConfigPB[0]);
  # DEBUG clockStatus => clockStatus_9

  <bb 4> [local count: 976127]:
  # clockStatus_1 = PHI <clockStatus_5(2), clockStatus_9(3)>
  # DEBUG clockStatus => clockStatus_1
  # DEBUG BEGIN_STMT
  if (clockStatus_1 != 0)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 107374]:
  # DEBUG BEGIN_STMT
  App_InitCsecHw (3, 0);
  # DEBUG RetVal => NULL
  # DEBUG BEGIN_STMT
  Crypto_Init (0B);

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 7> [local count: 1073741824]:
  goto <bb 6>; [100.00%]

}


