
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  ClockMonitorEmpty_GetStatus/4:
  Jump functions of caller  ClockMonitorEmpty_ClearStatus/3:
  Jump functions of caller  ClockMonitorEmpty_Disable/2:
  Jump functions of caller  ClockMonitorEmpty/1:

 Propagating constants:

Not considering ClockMonitorEmpty_GetStatus for cloning; -fipa-cp-clone disabled.
Function ClockMonitorEmpty_ClearStatus/3 is not versionable, reason: not a tree_versionable_function.
Not considering ClockMonitorEmpty_Disable for cloning; -fipa-cp-clone disabled.
Not considering ClockMonitorEmpty for cloning; -fipa-cp-clone disabled.

overall_size: 14, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 1.000000
 - context independent values, size: 2, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: ClockMonitorEmpty_GetStatus/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ClockMonitorEmpty_ClearStatus/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ClockMonitorEmpty_Disable/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ClockMonitorEmpty/1:
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

ClockMonitorEmpty_GetStatus/4 (ClockMonitorEmpty_GetStatus) @068d9b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: cmuCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
ClockMonitorEmpty_ClearStatus/3 (ClockMonitorEmpty_ClearStatus) @068d98c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: cmuCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: ClockMonitorEmpty_Disable/2 (1073741824 (estimated locally),1.00 per call) 
ClockMonitorEmpty_Disable/2 (ClockMonitorEmpty_Disable) @068d9620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: cmuCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: ClockMonitorEmpty_ClearStatus/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ClockMonitorEmpty/1 (ClockMonitorEmpty) @068d9380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: cmuCallbacks/0 (addr)cmuCallbacks/0 (addr)cmuCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
cmuCallbacks/0 (cmuCallbacks) @069b3000
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: ClockMonitorEmpty/1 (addr)ClockMonitorEmpty/1 (addr)ClockMonitorEmpty_Disable/2 (addr)ClockMonitorEmpty_ClearStatus/3 (addr)ClockMonitorEmpty_GetStatus/4 (addr)ClockMonitorEmpty/1 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function ClockMonitorEmpty (ClockMonitorEmpty, funcdef_no=0, decl_uid=6057, cgraph_uid=1, symbol_order=1)

Modification phase of node ClockMonitorEmpty/1
ClockMonitorEmpty (const struct Clock_Ip_CmuConfigType * config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function ClockMonitorEmpty_Disable (ClockMonitorEmpty_Disable, funcdef_no=1, decl_uid=6059, cgraph_uid=2, symbol_order=2)

Modification phase of node ClockMonitorEmpty_Disable/2
ClockMonitorEmpty_Disable (Clock_Ip_NameType name)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function ClockMonitorEmpty_GetStatus (ClockMonitorEmpty_GetStatus, funcdef_no=3, decl_uid=6063, cgraph_uid=4, symbol_order=4)

Modification phase of node ClockMonitorEmpty_GetStatus/4
ClockMonitorEmpty_GetStatus (Clock_Ip_NameType name)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 3;

}



;; Function ClockMonitorEmpty_ClearStatus (ClockMonitorEmpty_ClearStatus, funcdef_no=5, decl_uid=6061, cgraph_uid=3, symbol_order=3)

Modification phase of node ClockMonitorEmpty_ClearStatus/3
ClockMonitorEmpty_ClearStatus (Clock_Ip_NameType name)
{
  <bb 2> [local count: 1073741824]:
  ClockMonitorEmpty_Disable (name_1(D)); [tail call]
  return;

}


