
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  CryIf_CallbackNotification/0:

 Propagating constants:

Not considering CryIf_CallbackNotification for cloning; -fipa-cp-clone disabled.

overall_size: 3, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 2.000000

IPA lattices after all propagation:

Lattices:
  Node: CryIf_CallbackNotification/0:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
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

CryIf_CallbackNotification/0 (CryIf_CallbackNotification) @06842620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function CryIf_CallbackNotification (CryIf_CallbackNotification, funcdef_no=0, decl_uid=5697, cgraph_uid=1, symbol_order=0)

Modification phase of node CryIf_CallbackNotification/0
CryIf_CallbackNotification (struct Crypto_JobType * job, Std_ReturnType result)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}


