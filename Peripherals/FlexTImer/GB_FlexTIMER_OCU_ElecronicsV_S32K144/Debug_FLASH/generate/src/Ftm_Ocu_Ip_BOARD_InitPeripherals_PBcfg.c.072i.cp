
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OcuNotification/3:

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

OcuNotification/3 (OcuNotification) @05c901c0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Ftm_Ocu_Ip_ChannelConfig_PB_BOARD_INITPERIPHERALS/0 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Ftm_Ocu_Ip_ModuleCfgPB_BOARD_INITPERIPHERALS/2 (Ftm_Ocu_Ip_ModuleCfgPB_BOARD_INITPERIPHERALS) @05b67510
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Ftm_Ocu_Ip_ChannelConfig_PB_BOARD_INITPERIPHERALS/0 (addr)Ftm_Ocu_Ip_SpecificIpConfig_PB_BOARD_INITPERIPHERALS/1 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Ftm_Ocu_Ip_SpecificIpConfig_PB_BOARD_INITPERIPHERALS/1 (Ftm_Ocu_Ip_SpecificIpConfig_PB_BOARD_INITPERIPHERALS) @05b674c8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Ftm_Ocu_Ip_ModuleCfgPB_BOARD_INITPERIPHERALS/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Ftm_Ocu_Ip_ChannelConfig_PB_BOARD_INITPERIPHERALS/0 (Ftm_Ocu_Ip_ChannelConfig_PB_BOARD_INITPERIPHERALS) @05b67438
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: OcuNotification/3 (addr)
  Referring: Ftm_Ocu_Ip_ModuleCfgPB_BOARD_INITPERIPHERALS/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
