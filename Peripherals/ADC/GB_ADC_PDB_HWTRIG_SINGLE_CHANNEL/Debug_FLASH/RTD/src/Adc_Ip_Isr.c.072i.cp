
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Adc_Ip_IRQHandler/2:
  Jump functions of caller  Adc_1_Isr/1:
  Jump functions of caller  Adc_0_Isr/0:

 Propagating constants:

Not considering Adc_1_Isr for cloning; -fipa-cp-clone disabled.
Not considering Adc_0_Isr for cloning; -fipa-cp-clone disabled.

overall_size: 12, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Adc_1_Isr/1:
  Node: Adc_0_Isr/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Adc_Ip_IRQHandler/2 (Adc_Ip_IRQHandler) @05bc4ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_1_Isr/1 (1073741824 (estimated locally),1.00 per call) Adc_0_Isr/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Adc_1_Isr/1 (Adc_1_Isr) @05bc4a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Adc_Ip_IRQHandler/2 (1073741824 (estimated locally),1.00 per call) 
Adc_0_Isr/0 (Adc_0_Isr) @05bc4700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Adc_Ip_IRQHandler/2 (1073741824 (estimated locally),1.00 per call) 

;; Function Adc_0_Isr (Adc_0_Isr, funcdef_no=0, decl_uid=5597, cgraph_uid=1, symbol_order=0)

Modification phase of node Adc_0_Isr/0
Adc_0_Isr ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Adc_Ip_IRQHandler (0);
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  return;

}



;; Function Adc_1_Isr (Adc_1_Isr, funcdef_no=1, decl_uid=5602, cgraph_uid=2, symbol_order=1)

Modification phase of node Adc_1_Isr/1
Adc_1_Isr ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Adc_Ip_IRQHandler (1);
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  return;

}


