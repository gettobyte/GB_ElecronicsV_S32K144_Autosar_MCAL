
IPA constant propagation start:

IPA structures before propagation:

Jump functions:

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

CanIpwHwChannelConfig_BOARD_InitPeripherals0/9 (CanIpwHwChannelConfig_BOARD_InitPeripherals0) @0614b5a0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Can_aControllerConfig/6 (addr)
  Availability: not_available
  Varpool flags: read-only
Can_Config_BOARD_InitPeripherals/8 (Can_Config_BOARD_InitPeripherals) @0614b480
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Can_aCtrlOffsetToCtrlIDMap/1 (addr)Can_aHwObjIDToCtrlIDMap/2 (addr)Can_aHwObjectConfig/3 (addr)Can_apController/7 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Can_apController/7 (Can_apController) @0614b3f0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Can_aControllerConfig/6 (addr)
  Referring: Can_Config_BOARD_InitPeripherals/8 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Can_aControllerConfig/6 (Can_aControllerConfig) @0614b360
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Can_aBaudrateConfig_Ctrl0/4 (addr)CanIpwHwChannelConfig_BOARD_InitPeripherals0/9 (addr)Can_apHwObject_Ctrl0/5 (addr)
  Referring: Can_apController/7 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Can_apHwObject_Ctrl0/5 (Can_apHwObject_Ctrl0) @0614b288
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Can_aHwObjectConfig/3 (addr)
  Referring: Can_aControllerConfig/6 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Can_aBaudrateConfig_Ctrl0/4 (Can_aBaudrateConfig_Ctrl0) @0614b1f8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Can_aControllerConfig/6 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Can_aHwObjectConfig/3 (Can_aHwObjectConfig) @0614b090
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Can_au32HwBufferAddr_Ctrl0/0 (addr)
  Referring: Can_Config_BOARD_InitPeripherals/8 (addr)Can_apHwObject_Ctrl0/5 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Can_aHwObjIDToCtrlIDMap/2 (Can_aHwObjIDToCtrlIDMap) @0600ff30
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Can_Config_BOARD_InitPeripherals/8 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Can_aCtrlOffsetToCtrlIDMap/1 (Can_aCtrlOffsetToCtrlIDMap) @0600fea0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Can_Config_BOARD_InitPeripherals/8 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Can_au32HwBufferAddr_Ctrl0/0 (Can_au32HwBufferAddr_Ctrl0) @0600fe10
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Can_aHwObjectConfig/3 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
