
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

g_pin_mux_InitConfigArr_BOARD_InitPeripherals/7 (g_pin_mux_InitConfigArr_BOARD_InitPeripherals) @06931990
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Port_Config/6 (addr)
  Availability: not_available
  Varpool flags: read-only
Port_Config/6 (Port_Config) @06931870
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Port_au16NoUnUsedPadsArrayDefault_BOARD_InitPeripherals/3 (addr)Port_UnUsedPin_BOARD_InitPeripherals/4 (addr)Port_aPinConfigDefault_BOARD_InitPeripherals/5 (addr)au32Port_PinToPartitionMap_BOARD_InitPeripherals/2 (addr)au8Port_PartitionList_BOARD_InitPeripherals/1 (addr)g_pin_mux_InitConfigArr_BOARD_InitPeripherals/7 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Port_aPinConfigDefault_BOARD_InitPeripherals/5 (Port_aPinConfigDefault_BOARD_InitPeripherals) @06931750
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Port_Config/6 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Port_UnUsedPin_BOARD_InitPeripherals/4 (Port_UnUsedPin_BOARD_InitPeripherals) @06931630
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Port_Config/6 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Port_au16NoUnUsedPadsArrayDefault_BOARD_InitPeripherals/3 (Port_au16NoUnUsedPadsArrayDefault_BOARD_InitPeripherals) @069315a0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Port_Config/6 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
au32Port_PinToPartitionMap_BOARD_InitPeripherals/2 (au32Port_PinToPartitionMap_BOARD_InitPeripherals) @06931480
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Port_Config/6 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
au8Port_PartitionList_BOARD_InitPeripherals/1 (au8Port_PartitionList_BOARD_InitPeripherals) @069313f0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Port_Config/6 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
