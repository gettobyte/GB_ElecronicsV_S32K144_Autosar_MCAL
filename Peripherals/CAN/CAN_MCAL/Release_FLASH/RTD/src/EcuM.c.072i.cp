
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  EcuM_CheckWakeup/3:
  Jump functions of caller  EcuM_ValidateWakeupEvent/2:
  Jump functions of caller  EcuM_SetWakeupEvent/1:

 Propagating constants:

Function EcuM_CheckWakeup/3 is not versionable, reason: not a tree_versionable_function.
Not considering EcuM_ValidateWakeupEvent for cloning; -fipa-cp-clone disabled.
Not considering EcuM_SetWakeupEvent for cloning; -fipa-cp-clone disabled.

overall_size: 12, max_new_size: 11001
 - context independent values, size: 2, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: EcuM_CheckWakeup/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: EcuM_ValidateWakeupEvent/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: EcuM_SetWakeupEvent/1:
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

EcuM_CheckWakeup/3 (EcuM_CheckWakeup) @05b9ad20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: EcuM_ValidateWakeupEvent/2 (1073741824 (estimated locally),1.00 per call) 
EcuM_ValidateWakeupEvent/2 (EcuM_ValidateWakeupEvent) @05b9aa80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: EcuM_CheckWakeup/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
EcuM_SetWakeupEvent/1 (EcuM_SetWakeupEvent) @05b9a7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: EcuMLastWakeupEvent/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
EcuMLastWakeupEvent/0 (EcuMLastWakeupEvent) @05b9b3f0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: EcuM_SetWakeupEvent/1 (write)
  Availability: available
  Varpool flags:

;; Function EcuM_SetWakeupEvent (EcuM_SetWakeupEvent, funcdef_no=0, decl_uid=5411, cgraph_uid=1, symbol_order=1)

Modification phase of node EcuM_SetWakeupEvent/1
EcuM_SetWakeupEvent (EcuM_WakeupSourceType events)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  EcuMLastWakeupEvent = events_2(D);
  return;

}



;; Function EcuM_ValidateWakeupEvent (EcuM_ValidateWakeupEvent, funcdef_no=1, decl_uid=5413, cgraph_uid=2, symbol_order=2)

Modification phase of node EcuM_ValidateWakeupEvent/2
EcuM_ValidateWakeupEvent (EcuM_WakeupSourceType events)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function EcuM_CheckWakeup (EcuM_CheckWakeup, funcdef_no=4, decl_uid=5415, cgraph_uid=3, symbol_order=3)

Modification phase of node EcuM_CheckWakeup/3
EcuM_CheckWakeup (EcuM_WakeupSourceType wakeupSource)
{
  <bb 2> [local count: 1073741824]:
  EcuM_ValidateWakeupEvent (wakeupSource_1(D)); [tail call]
  return;

}


