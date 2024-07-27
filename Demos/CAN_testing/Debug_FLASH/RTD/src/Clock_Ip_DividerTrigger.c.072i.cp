
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Callback_DividerTriggerEmpty/1:

 Propagating constants:

Not considering Callback_DividerTriggerEmpty for cloning; -fipa-cp-clone disabled.

overall_size: 3, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Callback_DividerTriggerEmpty/1:
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

Callback_DividerTriggerEmpty/1 (Callback_DividerTriggerEmpty) @05d67620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: dividerTriggerCallbacks/0 (addr)dividerTriggerCallbacks/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
dividerTriggerCallbacks/0 (dividerTriggerCallbacks) @05d69120
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Callback_DividerTriggerEmpty/1 (addr)Callback_DividerTriggerEmpty/1 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function Callback_DividerTriggerEmpty (Callback_DividerTriggerEmpty, funcdef_no=0, decl_uid=6045, cgraph_uid=1, symbol_order=1)

Modification phase of node Callback_DividerTriggerEmpty/1
Callback_DividerTriggerEmpty (const struct Clock_Ip_DividerTriggerConfigType * config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


