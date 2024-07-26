
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
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

undefined_handler/4 (undefined_handler) @06c55d20
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
intRouteConfig/3 (intRouteConfig) @06c54c18
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: aIrqRouteConfig/2 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
aIrqRouteConfig/2 (aIrqRouteConfig) @06c54bd0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)
  Referring: intRouteConfig/3 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
IntCtrlConfig_0/1 (IntCtrlConfig_0) @06c54af8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: aIrqConfiguration1/0 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
aIrqConfiguration1/0 (aIrqConfiguration1) @06c54ab0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: IntCtrlConfig_0/1 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
