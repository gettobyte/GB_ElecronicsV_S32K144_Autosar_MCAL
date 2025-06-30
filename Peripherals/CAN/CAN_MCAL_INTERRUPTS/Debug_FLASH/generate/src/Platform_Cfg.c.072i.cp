
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

ipwNonCoreConfig/3 (ipwNonCoreConfig) @06e100d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Platform_uConfiguration/0 (addr)
  Availability: not_available
  Varpool flags: read-only
ipwConfig/2 (ipwConfig) @06e10090
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Platform_uConfiguration/0 (addr)
  Availability: not_available
  Varpool flags: read-only
Platform_Config/1 (Platform_Config) @06e09f30
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Platform_uConfiguration/0 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Platform_uConfiguration/0 (Platform_uConfiguration) @06e09ea0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: ipwConfig/2 (addr)ipwNonCoreConfig/3 (addr)
  Referring: Platform_Config/1 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
