
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  undefined_handler/2:

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

undefined_handler/2 (undefined_handler) @06b728c0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)aIrqRouteConfig/0 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
intRouteConfig/1 (intRouteConfig) @06b71ab0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: aIrqRouteConfig/0 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
aIrqRouteConfig/0 (aIrqRouteConfig) @06b71a68
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)undefined_handler/2 (addr)
  Referring: intRouteConfig/1 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known