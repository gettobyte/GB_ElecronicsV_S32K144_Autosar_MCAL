
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  undefined_handler/9:
  Jump functions of caller  SysTick_Handler/8:
  Jump functions of caller  PendSV_Handler/7:
  Jump functions of caller  DebugMon_Handler/6:
  Jump functions of caller  SVC_Handler/5:
  Jump functions of caller  UsageFault_Handler/4:
  Jump functions of caller  BusFault_Handler/3:
  Jump functions of caller  MemManage_Handler/2:
  Jump functions of caller  HardFault_Handler/1:
  Jump functions of caller  NMI_Handler/0:

 Propagating constants:

Not considering undefined_handler for cloning; -fipa-cp-clone disabled.
Function SysTick_Handler/8 is not versionable, reason: insufficient body availability.
Function PendSV_Handler/7 is not versionable, reason: insufficient body availability.
Function DebugMon_Handler/6 is not versionable, reason: insufficient body availability.
Function SVC_Handler/5 is not versionable, reason: insufficient body availability.
Function UsageFault_Handler/4 is not versionable, reason: insufficient body availability.
Function BusFault_Handler/3 is not versionable, reason: insufficient body availability.
Function MemManage_Handler/2 is not versionable, reason: insufficient body availability.
Function HardFault_Handler/1 is not versionable, reason: insufficient body availability.
Function NMI_Handler/0 is not versionable, reason: insufficient body availability.

overall_size: 20, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: undefined_handler/9:
  Node: SysTick_Handler/8:
  Node: PendSV_Handler/7:
  Node: DebugMon_Handler/6:
  Node: SVC_Handler/5:
  Node: UsageFault_Handler/4:
  Node: BusFault_Handler/3:
  Node: MemManage_Handler/2:
  Node: HardFault_Handler/1:
  Node: NMI_Handler/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

undefined_handler/9 (undefined_handler) @05bb37e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:107374 (estimated locally) body executed_once optimize_size
  Called by: 
  Calls: 
SysTick_Handler/8 (SysTick_Handler) @05bb3540
  Type: function definition analyzed
  Visibility: externally_visible public weak
  References: 
  Referring: 
  Availability: overwritable
  Function flags: count:107374 (estimated locally) body optimize_size
  Called by: 
  Calls: 
PendSV_Handler/7 (PendSV_Handler) @05bb32a0
  Type: function definition analyzed
  Visibility: externally_visible public weak
  References: 
  Referring: 
  Availability: overwritable
  Function flags: count:107374 (estimated locally) body optimize_size
  Called by: 
  Calls: 
DebugMon_Handler/6 (DebugMon_Handler) @05bb3000
  Type: function definition analyzed
  Visibility: externally_visible public weak
  References: 
  Referring: 
  Availability: overwritable
  Function flags: count:107374 (estimated locally) body optimize_size
  Called by: 
  Calls: 
SVC_Handler/5 (SVC_Handler) @05bb0b60
  Type: function definition analyzed
  Visibility: externally_visible public weak
  References: 
  Referring: 
  Availability: overwritable
  Function flags: count:107374 (estimated locally) body optimize_size
  Called by: 
  Calls: 
UsageFault_Handler/4 (UsageFault_Handler) @05bb0460
  Type: function definition analyzed
  Visibility: externally_visible public weak
  References: 
  Referring: 
  Availability: overwritable
  Function flags: count:107374 (estimated locally) body optimize_size
  Called by: 
  Calls: 
BusFault_Handler/3 (BusFault_Handler) @05bb0d20
  Type: function definition analyzed
  Visibility: externally_visible public weak
  References: 
  Referring: 
  Availability: overwritable
  Function flags: count:107374 (estimated locally) body optimize_size
  Called by: 
  Calls: 
MemManage_Handler/2 (MemManage_Handler) @05bb0a80
  Type: function definition analyzed
  Visibility: externally_visible public weak
  References: 
  Referring: 
  Availability: overwritable
  Function flags: count:107374 (estimated locally) body optimize_size
  Called by: 
  Calls: 
HardFault_Handler/1 (HardFault_Handler) @05bb07e0
  Type: function definition analyzed
  Visibility: externally_visible public weak
  References: 
  Referring: 
  Availability: overwritable
  Function flags: count:107374 (estimated locally) body optimize_size
  Called by: 
  Calls: 
NMI_Handler/0 (NMI_Handler) @05b94c40
  Type: function definition analyzed
  Visibility: externally_visible public weak section:.systeminit
  References: 
  Referring: 
  Availability: overwritable
  Function flags: count:107374 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function NMI_Handler (NMI_Handler, funcdef_no=0, decl_uid=5523, cgraph_uid=1, symbol_order=0)

Modification phase of node NMI_Handler/0
__attribute__((section (".systeminit"), section (".systeminit"), weak))
NMI_Handler ()
{
  <bb 2> [local count: 107374]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

}



;; Function HardFault_Handler (HardFault_Handler, funcdef_no=1, decl_uid=5525, cgraph_uid=2, symbol_order=1)

Modification phase of node HardFault_Handler/1
__attribute__((weak))
HardFault_Handler ()
{
  <bb 2> [local count: 107374]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

}



;; Function MemManage_Handler (MemManage_Handler, funcdef_no=2, decl_uid=5527, cgraph_uid=3, symbol_order=2)

Modification phase of node MemManage_Handler/2
__attribute__((weak))
MemManage_Handler ()
{
  <bb 2> [local count: 107374]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

}



;; Function BusFault_Handler (BusFault_Handler, funcdef_no=3, decl_uid=5529, cgraph_uid=4, symbol_order=3)

Modification phase of node BusFault_Handler/3
__attribute__((weak))
BusFault_Handler ()
{
  <bb 2> [local count: 107374]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

}



;; Function UsageFault_Handler (UsageFault_Handler, funcdef_no=4, decl_uid=5531, cgraph_uid=5, symbol_order=4)

Modification phase of node UsageFault_Handler/4
__attribute__((weak))
UsageFault_Handler ()
{
  <bb 2> [local count: 107374]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

}



;; Function SVC_Handler (SVC_Handler, funcdef_no=5, decl_uid=5561, cgraph_uid=6, symbol_order=5)

Modification phase of node SVC_Handler/5
__attribute__((weak))
SVC_Handler ()
{
  <bb 2> [local count: 107374]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

}



;; Function DebugMon_Handler (DebugMon_Handler, funcdef_no=6, decl_uid=5533, cgraph_uid=7, symbol_order=6)

Modification phase of node DebugMon_Handler/6
__attribute__((weak))
DebugMon_Handler ()
{
  <bb 2> [local count: 107374]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

}



;; Function PendSV_Handler (PendSV_Handler, funcdef_no=7, decl_uid=5535, cgraph_uid=8, symbol_order=7)

Modification phase of node PendSV_Handler/7
__attribute__((weak))
PendSV_Handler ()
{
  <bb 2> [local count: 107374]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

}



;; Function SysTick_Handler (SysTick_Handler, funcdef_no=8, decl_uid=5537, cgraph_uid=9, symbol_order=8)

Modification phase of node SysTick_Handler/8
__attribute__((weak))
SysTick_Handler ()
{
  <bb 2> [local count: 107374]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

}



;; Function undefined_handler (undefined_handler, funcdef_no=9, decl_uid=5539, cgraph_uid=10, symbol_order=9) (executed once)

Modification phase of node undefined_handler/9
undefined_handler ()
{
  <bb 2> [local count: 107374]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

}


