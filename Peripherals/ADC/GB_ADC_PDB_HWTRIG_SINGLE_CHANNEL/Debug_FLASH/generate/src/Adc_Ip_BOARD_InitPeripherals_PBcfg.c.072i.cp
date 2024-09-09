
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  AdcConversionCompleteNotif/2:

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

AdcConversionCompleteNotif/2 (AdcConversionCompleteNotif) @05cadb60
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: AdcHwUnit_0_BOARD_INITPERIPHERALS/1 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
AdcHwUnit_0_BOARD_INITPERIPHERALS/1 (AdcHwUnit_0_BOARD_INITPERIPHERALS) @05cb3090
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: AdcIpChansConfig_0_BOARD_INITPERIPHERALS/0 (addr)AdcConversionCompleteNotif/2 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
AdcIpChansConfig_0_BOARD_INITPERIPHERALS/0 (AdcIpChansConfig_0_BOARD_INITPERIPHERALS) @05cb1f78
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: AdcHwUnit_0_BOARD_INITPERIPHERALS/1 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
