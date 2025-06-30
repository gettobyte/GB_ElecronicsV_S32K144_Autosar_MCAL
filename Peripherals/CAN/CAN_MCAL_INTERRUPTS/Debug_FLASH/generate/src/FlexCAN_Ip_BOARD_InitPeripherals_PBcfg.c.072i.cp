
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Can_ErrorIrqCallback/2:
  Jump functions of caller  Can_CommonIrqCallback/1:

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

Can_ErrorIrqCallback/2 (Can_ErrorIrqCallback) @05b7a700
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Flexcan_aCtrlConfigPB_BOARD_InitPeripherals/0 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Can_CommonIrqCallback/1 (Can_CommonIrqCallback) @05b7a620
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Flexcan_aCtrlConfigPB_BOARD_InitPeripherals/0 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Flexcan_aCtrlConfigPB_BOARD_InitPeripherals/0 (Flexcan_aCtrlConfigPB_BOARD_InitPeripherals) @05b77948
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Can_CommonIrqCallback/1 (addr)Can_ErrorIrqCallback/2 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
