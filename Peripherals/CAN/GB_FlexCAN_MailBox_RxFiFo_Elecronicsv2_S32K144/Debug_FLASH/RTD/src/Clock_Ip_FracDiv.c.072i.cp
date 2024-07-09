
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Callback_FracDivEmptyComplete/2:
  Jump functions of caller  Callback_FracDivEmpty/1:

 Propagating constants:

Not considering Callback_FracDivEmptyComplete for cloning; -fipa-cp-clone disabled.
Not considering Callback_FracDivEmpty for cloning; -fipa-cp-clone disabled.

overall_size: 6, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Callback_FracDivEmptyComplete/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Callback_FracDivEmpty/1:
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

Callback_FracDivEmptyComplete/2 (Callback_FracDivEmptyComplete) @06892c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: fracDivCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Callback_FracDivEmpty/1 (Callback_FracDivEmpty) @06892e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: fracDivCallbacks/0 (addr)fracDivCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
fracDivCallbacks/0 (fracDivCallbacks) @068951b0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Callback_FracDivEmpty/1 (addr)Callback_FracDivEmpty/1 (addr)Callback_FracDivEmptyComplete/2 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function Callback_FracDivEmpty (Callback_FracDivEmpty, funcdef_no=0, decl_uid=6045, cgraph_uid=1, symbol_order=1)

Modification phase of node Callback_FracDivEmpty/1
Callback_FracDivEmpty (const struct Clock_Ip_FracDivConfigType * config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Callback_FracDivEmptyComplete (Callback_FracDivEmptyComplete, funcdef_no=1, decl_uid=6047, cgraph_uid=2, symbol_order=2)

Modification phase of node Callback_FracDivEmptyComplete/2
Callback_FracDivEmptyComplete (Clock_Ip_NameType DfsName)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}


