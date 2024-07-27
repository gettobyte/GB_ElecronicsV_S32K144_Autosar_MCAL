
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  SystemInit/6:
    callsite  SystemInit/6 -> sys_m4_cache_init/1 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Sys_GetCoreID/4:
  Jump functions of caller  default_interrupt_routine/3:
  Jump functions of caller  startup_go_to_user_mode/2:
  Jump functions of caller  sys_m4_cache_init/1:

 Propagating constants:

Not considering SystemInit for cloning; -fipa-cp-clone disabled.
Not considering Sys_GetCoreID for cloning; -fipa-cp-clone disabled.
Not considering default_interrupt_routine for cloning; -fipa-cp-clone disabled.
Not considering startup_go_to_user_mode for cloning; -fipa-cp-clone disabled.

overall_size: 57, max_new_size: 11001
 - context independent values, size: 12, time_benefit: 3.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: SystemInit/6:
  Node: Sys_GetCoreID/4:
  Node: default_interrupt_routine/3:
  Node: startup_go_to_user_mode/2:
  Node: sys_m4_cache_init/1:
    param [0]: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x0
         uint8 [0, 0]
        AGGS VARIABLE

IPA decision stage:

 - Creating a specialized node of sys_m4_cache_init/1 for all known contexts.
    replacing param #0 cache with const 0
Propagated bits info for function sys_m4_cache_init.constprop/7:
 param 0: value = 0x0, mask = 0x0
Propagated bits info for function sys_m4_cache_init/1:
 param 0: value = 0x0, mask = 0x0

IPA constant propagation end

Reclaiming functions: sys_m4_cache_init/1
Reclaiming variables:
Clearing address taken flags:
Symbol table:

sys_m4_cache_init.constprop.0/7 (sys_m4_cache_init.constprop) @06c2eee0
  Type: function definition analyzed
  Visibility:
  References: 
  Referring: 
  Clone of sys_m4_cache_init/1
  Availability: local
  Function flags: count:236223200 (estimated locally) local optimize_size
  Called by: SystemInit/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SystemInit/6 (SystemInit) @06c2e0e0
  Type: function definition analyzed
  Visibility: externally_visible public section:.systeminit
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: sys_m4_cache_init.constprop/7 (1073741824 (estimated locally),1.00 per call) 
Sys_GetCoreID/4 (Sys_GetCoreID) @06c2ed20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
default_interrupt_routine/3 (default_interrupt_routine) @06c2ea80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:107374 (estimated locally) body executed_once optimize_size
  Called by: 
  Calls: 
startup_go_to_user_mode/2 (startup_go_to_user_mode) @06c2e7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
sys_m4_cache_init/1 (sys_m4_cache_init) @06c2e460
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:236223200 (estimated locally) body optimize_size
  Called by: 
  Calls: 
RESET_CATCH_CORE/0 (RESET_CATCH_CORE) @06c2aa68
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized

;; Function startup_go_to_user_mode (startup_go_to_user_mode, funcdef_no=1, decl_uid=6203, cgraph_uid=2, symbol_order=2)

Modification phase of node startup_go_to_user_mode/2
startup_go_to_user_mode ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function default_interrupt_routine (default_interrupt_routine, funcdef_no=2, decl_uid=5525, cgraph_uid=3, symbol_order=3) (executed once)

Modification phase of node default_interrupt_routine/3
default_interrupt_routine ()
{
  <bb 2> [local count: 107374]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

}



;; Function Sys_GetCoreID (Sys_GetCoreID, funcdef_no=3, decl_uid=5517, cgraph_uid=4, symbol_order=4)

Modification phase of node Sys_GetCoreID/4
Sys_GetCoreID ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function SystemInit (SystemInit, funcdef_no=4, decl_uid=5523, cgraph_uid=6, symbol_order=6)

Modification phase of node SystemInit/6
__attribute__((section (".systeminit")))
SystemInit ()
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct S32_SCB_Type *)3758153728B].CPACR;
  _2 = _1 | 15728640;
  MEM[(struct S32_SCB_Type *)3758153728B].CPACR ={v} _2;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("dsb");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("isb");
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(struct S32_SCB_Type *)3758153728B].CCR;
  _4 = _3 | 1;
  MEM[(struct S32_SCB_Type *)3758153728B].CCR ={v} _4;
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct S32_SCB_Type *)3758153728B].SHPR3;
  _6 = _5 & 4278255615;
  MEM[(struct S32_SCB_Type *)3758153728B].SHPR3 ={v} _6;
  # DEBUG BEGIN_STMT
  MEM[(struct AIPS_Type *)1073741824B].MPRA ={v} 2004318071;
  # DEBUG BEGIN_STMT
  MEM[(struct AIPS_Type *)1073741824B].PACRA ={v} 0;
  # DEBUG BEGIN_STMT
  MEM[(struct AIPS_Type *)1073741824B].PACRB ={v} 0;
  # DEBUG BEGIN_STMT
  MEM[(struct AIPS_Type *)1073741824B].PACRD ={v} 0;
  # DEBUG BEGIN_STMT
  MEM[(struct AIPS_Type *)1073741824B].OPACR[0] ={v} 0;
  # DEBUG BEGIN_STMT
  MEM[(struct AIPS_Type *)1073741824B].OPACR[1] ={v} 0;
  # DEBUG BEGIN_STMT
  MEM[(struct AIPS_Type *)1073741824B].OPACR[2] ={v} 0;
  # DEBUG BEGIN_STMT
  MEM[(struct AIPS_Type *)1073741824B].OPACR[3] ={v} 0;
  # DEBUG BEGIN_STMT
  MEM[(struct AIPS_Type *)1073741824B].OPACR[4] ={v} 0;
  # DEBUG BEGIN_STMT
  MEM[(struct AIPS_Type *)1073741824B].OPACR[5] ={v} 0;
  # DEBUG BEGIN_STMT
  MEM[(struct AIPS_Type *)1073741824B].OPACR[6] ={v} 0;
  # DEBUG BEGIN_STMT
  MEM[(struct AIPS_Type *)1073741824B].OPACR[7] ={v} 0;
  # DEBUG BEGIN_STMT
  MEM[(struct AIPS_Type *)1073741824B].OPACR[8] ={v} 0;
  # DEBUG BEGIN_STMT
  MEM[(struct AIPS_Type *)1073741824B].OPACR[9] ={v} 0;
  # DEBUG BEGIN_STMT
  MEM[(struct AIPS_Type *)1073741824B].OPACR[10] ={v} 0;
  # DEBUG BEGIN_STMT
  MEM[(struct AIPS_Type *)1073741824B].OPACR[11] ={v} 0;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("dsb");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("isb");
  # DEBUG BEGIN_STMT
  sys_m4_cache_init (0);
  return;

}


