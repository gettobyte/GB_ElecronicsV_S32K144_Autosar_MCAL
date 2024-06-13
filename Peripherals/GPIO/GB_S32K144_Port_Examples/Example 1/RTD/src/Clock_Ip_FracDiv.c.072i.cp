
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Clock_Ip_CallbackFracDivEmptyComplete/1:
  Jump functions of caller  Clock_Ip_CallbackFracDivEmpty/0:

 Propagating constants:

Not considering Clock_Ip_CallbackFracDivEmptyComplete for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_CallbackFracDivEmpty for cloning; -fipa-cp-clone disabled.

overall_size: 6, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Clock_Ip_CallbackFracDivEmptyComplete/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_CallbackFracDivEmpty/0:
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

Clock_Ip_axFracDivCallbacks/2 (Clock_Ip_axFracDivCallbacks) @069a6678
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_CallbackFracDivEmpty/0 (addr)Clock_Ip_CallbackFracDivEmpty/0 (addr)Clock_Ip_CallbackFracDivEmptyComplete/1 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Clock_Ip_CallbackFracDivEmptyComplete/1 (Clock_Ip_CallbackFracDivEmptyComplete) @068c3460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axFracDivCallbacks/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_CallbackFracDivEmpty/0 (Clock_Ip_CallbackFracDivEmpty) @068c31c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axFracDivCallbacks/2 (addr)Clock_Ip_axFracDivCallbacks/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function Clock_Ip_CallbackFracDivEmpty (Clock_Ip_CallbackFracDivEmpty, funcdef_no=0, decl_uid=6056, cgraph_uid=1, symbol_order=0)

Modification phase of node Clock_Ip_CallbackFracDivEmpty/0
Clock_Ip_CallbackFracDivEmpty (const struct Clock_Ip_FracDivConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Clock_Ip_CallbackFracDivEmptyComplete (Clock_Ip_CallbackFracDivEmptyComplete, funcdef_no=1, decl_uid=6058, cgraph_uid=2, symbol_order=1)

Modification phase of node Clock_Ip_CallbackFracDivEmptyComplete/1
Clock_Ip_CallbackFracDivEmptyComplete (Clock_Ip_NameType DfsName)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}


