
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Csec_Ip_IrqHandler/1:
  Jump functions of caller  Csec_Ip_Isr/0:

 Propagating constants:

Not considering Csec_Ip_Isr for cloning; -fipa-cp-clone disabled.

overall_size: 5, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Csec_Ip_Isr/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Csec_Ip_IrqHandler/1 (Csec_Ip_IrqHandler) @068a30e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Csec_Ip_Isr/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Csec_Ip_Isr/0 (Csec_Ip_Isr) @0689ec40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Csec_Ip_IrqHandler/1 (1073741824 (estimated locally),1.00 per call) 

;; Function Csec_Ip_Isr (Csec_Ip_Isr, funcdef_no=0, decl_uid=5761, cgraph_uid=1, symbol_order=0)

Modification phase of node Csec_Ip_Isr/0
Csec_Ip_Isr ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csec_Ip_IrqHandler ();
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  return;

}


