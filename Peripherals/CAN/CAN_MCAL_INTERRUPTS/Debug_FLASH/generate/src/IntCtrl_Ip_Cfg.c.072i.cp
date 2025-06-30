
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  CAN0_ORED_0_15_MB_IRQHandler/5:
  Jump functions of caller  undefined_handler/4:

 Propagating constants:


overall_size: 0, max_new_size: 11001

IPA lattices after all propagation:

Lattices:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

CAN0_ORED_0_15_MB_IRQHandler/5 (CAN0_ORED_0_15_MB_IRQHandler) @05f587e0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: aIrqRouteConfig/2 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
undefined_handler/4 (undefined_handler) @05f58620
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
intRouteConfig/3 (intRouteConfig) @05f52ca8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: aIrqRouteConfig/2 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
aIrqRouteConfig/2 (aIrqRouteConfig) @05f52c60
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)CAN0_ORED_0_15_MB_IRQHandler/5 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)
  Referring: intRouteConfig/3 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
intCtrlConfig/1 (intCtrlConfig) @05f52b88
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: aIrqConfiguration/0 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
aIrqConfiguration/0 (aIrqConfiguration) @05f52b40
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: intCtrlConfig/1 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
