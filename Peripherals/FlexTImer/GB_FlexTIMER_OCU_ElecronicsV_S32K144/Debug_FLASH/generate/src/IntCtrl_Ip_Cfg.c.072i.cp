
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  FTM_0_CH_0_CH_1_ISR/5:
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

FTM_0_CH_0_CH_1_ISR/5 (FTM_0_CH_0_CH_1_ISR) @06c3ba80
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: aIrqRouteConfig/2 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
undefined_handler/4 (undefined_handler) @06c3b540
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)aIrqRouteConfig/2 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
intRouteConfig/3 (intRouteConfig) @06c3ac60
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: aIrqRouteConfig/2 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
aIrqRouteConfig/2 (aIrqRouteConfig) @06c3ac18
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)FTM_0_CH_0_CH_1_ISR/5 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)undefined_handler/4 (addr)
  Referring: intRouteConfig/3 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
IntCtrlConfig_0/1 (IntCtrlConfig_0) @06c3ab40
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: aIrqConfiguration1/0 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
aIrqConfiguration1/0 (aIrqConfiguration1) @06c3aaf8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: IntCtrlConfig_0/1 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
