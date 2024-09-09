
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Pdb_Adc_Ip_IRQHandler/2:
  Jump functions of caller  Pdb_1_Isr/1:
  Jump functions of caller  Pdb_0_Isr/0:

 Propagating constants:

Not considering Pdb_1_Isr for cloning; -fipa-cp-clone disabled.
Not considering Pdb_0_Isr for cloning; -fipa-cp-clone disabled.

overall_size: 12, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Pdb_1_Isr/1:
  Node: Pdb_0_Isr/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Pdb_Adc_Ip_IRQHandler/2 (Pdb_Adc_Ip_IRQHandler) @05be8460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Pdb_1_Isr/1 (1073741824 (estimated locally),1.00 per call) Pdb_0_Isr/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Pdb_1_Isr/1 (Pdb_1_Isr) @05be8000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Pdb_Adc_Ip_IRQHandler/2 (1073741824 (estimated locally),1.00 per call) 
Pdb_0_Isr/0 (Pdb_0_Isr) @05bc0e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Pdb_Adc_Ip_IRQHandler/2 (1073741824 (estimated locally),1.00 per call) 

;; Function Pdb_0_Isr (Pdb_0_Isr, funcdef_no=0, decl_uid=5587, cgraph_uid=1, symbol_order=0)

Modification phase of node Pdb_0_Isr/0
Pdb_0_Isr ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Pdb_Adc_Ip_IRQHandler (0);
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  return;

}



;; Function Pdb_1_Isr (Pdb_1_Isr, funcdef_no=1, decl_uid=5592, cgraph_uid=2, symbol_order=1)

Modification phase of node Pdb_1_Isr/1
Pdb_1_Isr ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Pdb_Adc_Ip_IRQHandler (1);
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  return;

}


