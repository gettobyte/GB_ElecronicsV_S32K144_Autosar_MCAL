
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  FlexCAN_IRQHandler/50:
  Jump functions of caller  FlexCAN_Error_IRQHandler/49:
  Jump functions of caller  FlexCAN_BusOff_IRQHandler/48:
  Jump functions of caller  CAN2_ORED_0_15_MB_IRQHandler/47:
  Jump functions of caller  CAN2_Error_IRQHandler/46:
  Jump functions of caller  CAN2_ORED_IRQHandler/45:
  Jump functions of caller  CAN1_ORED_16_31_MB_IRQHandler/44:
  Jump functions of caller  CAN1_ORED_0_15_MB_IRQHandler/43:
  Jump functions of caller  CAN1_Error_IRQHandler/42:
  Jump functions of caller  CAN1_ORED_IRQHandler/41:
  Jump functions of caller  CAN0_ORED_16_31_MB_IRQHandler/40:
  Jump functions of caller  CAN0_ORED_0_15_MB_IRQHandler/39:
  Jump functions of caller  CAN0_Error_IRQHandler/38:
  Jump functions of caller  CAN0_ORED_IRQHandler/37:

 Propagating constants:

Not considering CAN2_ORED_0_15_MB_IRQHandler for cloning; -fipa-cp-clone disabled.
Not considering CAN2_Error_IRQHandler for cloning; -fipa-cp-clone disabled.
Not considering CAN2_ORED_IRQHandler for cloning; -fipa-cp-clone disabled.
Not considering CAN1_ORED_16_31_MB_IRQHandler for cloning; -fipa-cp-clone disabled.
Not considering CAN1_ORED_0_15_MB_IRQHandler for cloning; -fipa-cp-clone disabled.
Not considering CAN1_Error_IRQHandler for cloning; -fipa-cp-clone disabled.
Not considering CAN1_ORED_IRQHandler for cloning; -fipa-cp-clone disabled.
Not considering CAN0_ORED_16_31_MB_IRQHandler for cloning; -fipa-cp-clone disabled.
Not considering CAN0_ORED_0_15_MB_IRQHandler for cloning; -fipa-cp-clone disabled.
Not considering CAN0_Error_IRQHandler for cloning; -fipa-cp-clone disabled.
Not considering CAN0_ORED_IRQHandler for cloning; -fipa-cp-clone disabled.

overall_size: 76, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: CAN2_ORED_0_15_MB_IRQHandler/47:
  Node: CAN2_Error_IRQHandler/46:
  Node: CAN2_ORED_IRQHandler/45:
  Node: CAN1_ORED_16_31_MB_IRQHandler/44:
  Node: CAN1_ORED_0_15_MB_IRQHandler/43:
  Node: CAN1_Error_IRQHandler/42:
  Node: CAN1_ORED_IRQHandler/41:
  Node: CAN0_ORED_16_31_MB_IRQHandler/40:
  Node: CAN0_ORED_0_15_MB_IRQHandler/39:
  Node: CAN0_Error_IRQHandler/38:
  Node: CAN0_ORED_IRQHandler/37:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

FlexCAN_IRQHandler/50 (FlexCAN_IRQHandler) @06b532a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CAN2_ORED_0_15_MB_IRQHandler/47 (1073741824 (estimated locally),1.00 per call) CAN1_ORED_16_31_MB_IRQHandler/44 (1073741824 (estimated locally),1.00 per call) CAN1_ORED_0_15_MB_IRQHandler/43 (1073741824 (estimated locally),1.00 per call) CAN0_ORED_16_31_MB_IRQHandler/40 (1073741824 (estimated locally),1.00 per call) CAN0_ORED_0_15_MB_IRQHandler/39 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
FlexCAN_Error_IRQHandler/49 (FlexCAN_Error_IRQHandler) @06b530e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CAN2_Error_IRQHandler/46 (1073741824 (estimated locally),1.00 per call) CAN1_Error_IRQHandler/42 (1073741824 (estimated locally),1.00 per call) CAN0_Error_IRQHandler/38 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
FlexCAN_BusOff_IRQHandler/48 (FlexCAN_BusOff_IRQHandler) @06b51e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CAN2_ORED_IRQHandler/45 (1073741824 (estimated locally),1.00 per call) CAN1_ORED_IRQHandler/41 (1073741824 (estimated locally),1.00 per call) CAN0_ORED_IRQHandler/37 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
CAN2_ORED_0_15_MB_IRQHandler/47 (CAN2_ORED_0_15_MB_IRQHandler) @06b510e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_IRQHandler/50 (1073741824 (estimated locally),1.00 per call) 
CAN2_Error_IRQHandler/46 (CAN2_Error_IRQHandler) @06b51d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_Error_IRQHandler/49 (1073741824 (estimated locally),1.00 per call) 
CAN2_ORED_IRQHandler/45 (CAN2_ORED_IRQHandler) @06b51a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_BusOff_IRQHandler/48 (1073741824 (estimated locally),1.00 per call) 
CAN1_ORED_16_31_MB_IRQHandler/44 (CAN1_ORED_16_31_MB_IRQHandler) @06b517e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_IRQHandler/50 (1073741824 (estimated locally),1.00 per call) 
CAN1_ORED_0_15_MB_IRQHandler/43 (CAN1_ORED_0_15_MB_IRQHandler) @06b51540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_IRQHandler/50 (1073741824 (estimated locally),1.00 per call) 
CAN1_Error_IRQHandler/42 (CAN1_Error_IRQHandler) @06b512a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_Error_IRQHandler/49 (1073741824 (estimated locally),1.00 per call) 
CAN1_ORED_IRQHandler/41 (CAN1_ORED_IRQHandler) @06b51000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_BusOff_IRQHandler/48 (1073741824 (estimated locally),1.00 per call) 
CAN0_ORED_16_31_MB_IRQHandler/40 (CAN0_ORED_16_31_MB_IRQHandler) @06b4ea80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_IRQHandler/50 (1073741824 (estimated locally),1.00 per call) 
CAN0_ORED_0_15_MB_IRQHandler/39 (CAN0_ORED_0_15_MB_IRQHandler) @06b4eee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_IRQHandler/50 (1073741824 (estimated locally),1.00 per call) 
CAN0_Error_IRQHandler/38 (CAN0_Error_IRQHandler) @06b4ec40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_Error_IRQHandler/49 (1073741824 (estimated locally),1.00 per call) 
CAN0_ORED_IRQHandler/37 (CAN0_ORED_IRQHandler) @06b4e9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_BusOff_IRQHandler/48 (1073741824 (estimated locally),1.00 per call) 

;; Function CAN0_ORED_IRQHandler (CAN0_ORED_IRQHandler, funcdef_no=37, decl_uid=6798, cgraph_uid=38, symbol_order=37)

Modification phase of node CAN0_ORED_IRQHandler/37
CAN0_ORED_IRQHandler ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  FlexCAN_BusOff_IRQHandler (0);
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  return;

}



;; Function CAN0_Error_IRQHandler (CAN0_Error_IRQHandler, funcdef_no=38, decl_uid=6800, cgraph_uid=39, symbol_order=38)

Modification phase of node CAN0_Error_IRQHandler/38
CAN0_Error_IRQHandler ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  FlexCAN_Error_IRQHandler (0);
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  return;

}



;; Function CAN0_ORED_0_15_MB_IRQHandler (CAN0_ORED_0_15_MB_IRQHandler, funcdef_no=39, decl_uid=6802, cgraph_uid=40, symbol_order=39)

Modification phase of node CAN0_ORED_0_15_MB_IRQHandler/39
CAN0_ORED_0_15_MB_IRQHandler ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  FlexCAN_IRQHandler (0, 0, 15);
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  return;

}



;; Function CAN0_ORED_16_31_MB_IRQHandler (CAN0_ORED_16_31_MB_IRQHandler, funcdef_no=40, decl_uid=6804, cgraph_uid=41, symbol_order=40)

Modification phase of node CAN0_ORED_16_31_MB_IRQHandler/40
CAN0_ORED_16_31_MB_IRQHandler ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  FlexCAN_IRQHandler (0, 16, 31);
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  return;

}



;; Function CAN1_ORED_IRQHandler (CAN1_ORED_IRQHandler, funcdef_no=41, decl_uid=6806, cgraph_uid=42, symbol_order=41)

Modification phase of node CAN1_ORED_IRQHandler/41
CAN1_ORED_IRQHandler ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  FlexCAN_BusOff_IRQHandler (1);
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  return;

}



;; Function CAN1_Error_IRQHandler (CAN1_Error_IRQHandler, funcdef_no=42, decl_uid=6808, cgraph_uid=43, symbol_order=42)

Modification phase of node CAN1_Error_IRQHandler/42
CAN1_Error_IRQHandler ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  FlexCAN_Error_IRQHandler (1);
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  return;

}



;; Function CAN1_ORED_0_15_MB_IRQHandler (CAN1_ORED_0_15_MB_IRQHandler, funcdef_no=43, decl_uid=6810, cgraph_uid=44, symbol_order=43)

Modification phase of node CAN1_ORED_0_15_MB_IRQHandler/43
CAN1_ORED_0_15_MB_IRQHandler ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  FlexCAN_IRQHandler (1, 0, 15);
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  return;

}



;; Function CAN1_ORED_16_31_MB_IRQHandler (CAN1_ORED_16_31_MB_IRQHandler, funcdef_no=44, decl_uid=6812, cgraph_uid=45, symbol_order=44)

Modification phase of node CAN1_ORED_16_31_MB_IRQHandler/44
CAN1_ORED_16_31_MB_IRQHandler ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  FlexCAN_IRQHandler (1, 16, 31);
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  return;

}



;; Function CAN2_ORED_IRQHandler (CAN2_ORED_IRQHandler, funcdef_no=45, decl_uid=6814, cgraph_uid=46, symbol_order=45)

Modification phase of node CAN2_ORED_IRQHandler/45
CAN2_ORED_IRQHandler ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  FlexCAN_BusOff_IRQHandler (2);
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  return;

}



;; Function CAN2_Error_IRQHandler (CAN2_Error_IRQHandler, funcdef_no=46, decl_uid=6816, cgraph_uid=47, symbol_order=46)

Modification phase of node CAN2_Error_IRQHandler/46
CAN2_Error_IRQHandler ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  FlexCAN_Error_IRQHandler (2);
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  return;

}



;; Function CAN2_ORED_0_15_MB_IRQHandler (CAN2_ORED_0_15_MB_IRQHandler, funcdef_no=47, decl_uid=6818, cgraph_uid=48, symbol_order=47)

Modification phase of node CAN2_ORED_0_15_MB_IRQHandler/47
CAN2_ORED_0_15_MB_IRQHandler ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  FlexCAN_IRQHandler (2, 0, 15);
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  return;

}


