
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Power_Ip_SCG_DisableSpllClock/1:
  Jump functions of caller  Power_Ip_SCG_DisableClockMonitors/0:

 Propagating constants:

Not considering Power_Ip_SCG_DisableSpllClock for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_SCG_DisableClockMonitors for cloning; -fipa-cp-clone disabled.

overall_size: 15, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Power_Ip_SCG_DisableSpllClock/1:
  Node: Power_Ip_SCG_DisableClockMonitors/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Power_Ip_SCG_DisableSpllClock/1 (Power_Ip_SCG_DisableSpllClock) @067b5540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Power_Ip_SCG_DisableClockMonitors/0 (Power_Ip_SCG_DisableClockMonitors) @067b52a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function Power_Ip_SCG_DisableClockMonitors (Power_Ip_SCG_DisableClockMonitors, funcdef_no=0, decl_uid=5681, cgraph_uid=1, symbol_order=0)

Modification phase of node Power_Ip_SCG_DisableClockMonitors/0
Power_Ip_SCG_DisableClockMonitors ()
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SCG_Type *)1074151424B].SOSCCSR;
  _2 = _1 & 4294901759;
  MEM[(struct SCG_Type *)1074151424B].SOSCCSR ={v} _2;
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(struct SCG_Type *)1074151424B].SPLLCSR;
  _4 = _3 & 4294901759;
  MEM[(struct SCG_Type *)1074151424B].SPLLCSR ={v} _4;
  return;

}



;; Function Power_Ip_SCG_DisableSpllClock (Power_Ip_SCG_DisableSpllClock, funcdef_no=1, decl_uid=5683, cgraph_uid=2, symbol_order=1)

Modification phase of node Power_Ip_SCG_DisableSpllClock/1
Power_Ip_SCG_DisableSpllClock ()
{
  long unsigned int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SCG_Type *)1074151424B].SPLLCSR;
  _2 = _1 & 4294967294;
  MEM[(struct SCG_Type *)1074151424B].SPLLCSR ={v} _2;
  return;

}


