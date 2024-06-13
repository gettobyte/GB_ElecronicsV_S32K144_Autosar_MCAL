
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Clock_Ip_ClockMonitorEmpty_GetStatus/3:
  Jump functions of caller  Clock_Ip_ClockMonitorEmpty_ClearStatus/2:
  Jump functions of caller  Clock_Ip_ClockMonitorEmpty_Disable/1:
  Jump functions of caller  Clock_Ip_ClockMonitorEmpty/0:

 Propagating constants:

Not considering Clock_Ip_ClockMonitorEmpty_GetStatus for cloning; -fipa-cp-clone disabled.
Function Clock_Ip_ClockMonitorEmpty_ClearStatus/2 is not versionable, reason: not a tree_versionable_function.
Not considering Clock_Ip_ClockMonitorEmpty_Disable for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ClockMonitorEmpty for cloning; -fipa-cp-clone disabled.

overall_size: 14, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 1.000000
 - context independent values, size: 2, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Clock_Ip_ClockMonitorEmpty_GetStatus/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ClockMonitorEmpty_ClearStatus/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ClockMonitorEmpty_Disable/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ClockMonitorEmpty/0:
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

Clock_Ip_axCmuCallbacks/4 (Clock_Ip_axCmuCallbacks) @068a9c18
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_ClockMonitorEmpty/0 (addr)Clock_Ip_ClockMonitorEmpty/0 (addr)Clock_Ip_ClockMonitorEmpty_Disable/1 (addr)Clock_Ip_ClockMonitorEmpty_ClearStatus/2 (addr)Clock_Ip_ClockMonitorEmpty_GetStatus/3 (addr)Clock_Ip_ClockMonitorEmpty/0 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Clock_Ip_ClockMonitorEmpty_GetStatus/3 (Clock_Ip_ClockMonitorEmpty_GetStatus) @068a79a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axCmuCallbacks/4 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_ClockMonitorEmpty_ClearStatus/2 (Clock_Ip_ClockMonitorEmpty_ClearStatus) @068a7e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axCmuCallbacks/4 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Clock_Ip_ClockMonitorEmpty_Disable/1 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_ClockMonitorEmpty_Disable/1 (Clock_Ip_ClockMonitorEmpty_Disable) @068a7b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axCmuCallbacks/4 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: Clock_Ip_ClockMonitorEmpty_ClearStatus/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_ClockMonitorEmpty/0 (Clock_Ip_ClockMonitorEmpty) @068a78c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axCmuCallbacks/4 (addr)Clock_Ip_axCmuCallbacks/4 (addr)Clock_Ip_axCmuCallbacks/4 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function Clock_Ip_ClockMonitorEmpty (Clock_Ip_ClockMonitorEmpty, funcdef_no=0, decl_uid=6068, cgraph_uid=1, symbol_order=0)

Modification phase of node Clock_Ip_ClockMonitorEmpty/0
Clock_Ip_ClockMonitorEmpty (const struct Clock_Ip_CmuConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Clock_Ip_ClockMonitorEmpty_Disable (Clock_Ip_ClockMonitorEmpty_Disable, funcdef_no=1, decl_uid=6070, cgraph_uid=2, symbol_order=1)

Modification phase of node Clock_Ip_ClockMonitorEmpty_Disable/1
Clock_Ip_ClockMonitorEmpty_Disable (Clock_Ip_NameType Name)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Clock_Ip_ClockMonitorEmpty_GetStatus (Clock_Ip_ClockMonitorEmpty_GetStatus, funcdef_no=3, decl_uid=6074, cgraph_uid=4, symbol_order=3)

Modification phase of node Clock_Ip_ClockMonitorEmpty_GetStatus/3
Clock_Ip_ClockMonitorEmpty_GetStatus (Clock_Ip_NameType Name)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 3;

}



;; Function Clock_Ip_ClockMonitorEmpty_ClearStatus (Clock_Ip_ClockMonitorEmpty_ClearStatus, funcdef_no=5, decl_uid=6072, cgraph_uid=3, symbol_order=2)

Modification phase of node Clock_Ip_ClockMonitorEmpty_ClearStatus/2
Clock_Ip_ClockMonitorEmpty_ClearStatus (Clock_Ip_NameType Name)
{
  <bb 2> [local count: 1073741824]:
  Clock_Ip_ClockMonitorEmpty_Disable (Name_1(D)); [tail call]
  return;

}


