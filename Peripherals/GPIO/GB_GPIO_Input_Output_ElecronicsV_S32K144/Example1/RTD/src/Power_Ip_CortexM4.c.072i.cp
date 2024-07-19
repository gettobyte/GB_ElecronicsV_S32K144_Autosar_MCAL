
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Power_Ip_CM4_DisableDeepSleep/4:
  Jump functions of caller  Power_Ip_CM4_EnableDeepSleep/3:
  Jump functions of caller  Power_Ip_CM4_EnableSleepOnExit/2:
  Jump functions of caller  Power_Ip_CM4_DisableSleepOnExit/1:

 Propagating constants:

Not considering Power_Ip_CM4_DisableDeepSleep for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_CM4_EnableDeepSleep for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_CM4_EnableSleepOnExit for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_CM4_DisableSleepOnExit for cloning; -fipa-cp-clone disabled.

overall_size: 28, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Power_Ip_CM4_DisableDeepSleep/4:
  Node: Power_Ip_CM4_EnableDeepSleep/3:
  Node: Power_Ip_CM4_EnableSleepOnExit/2:
  Node: Power_Ip_CM4_DisableSleepOnExit/1:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Power_Ip_CM4_DisableDeepSleep/4 (Power_Ip_CM4_DisableDeepSleep) @06747460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: pCM4/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Power_Ip_CM4_EnableDeepSleep/3 (Power_Ip_CM4_EnableDeepSleep) @067471c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: pCM4/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Power_Ip_CM4_EnableSleepOnExit/2 (Power_Ip_CM4_EnableSleepOnExit) @0673bee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: pCM4/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Power_Ip_CM4_DisableSleepOnExit/1 (Power_Ip_CM4_DisableSleepOnExit) @0673be00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: pCM4/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
pCM4/0 (pCM4) @06743a20
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Power_Ip_CM4_DisableSleepOnExit/1 (read)Power_Ip_CM4_EnableSleepOnExit/2 (read)Power_Ip_CM4_EnableDeepSleep/3 (read)Power_Ip_CM4_DisableDeepSleep/4 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function Power_Ip_CM4_DisableSleepOnExit (Power_Ip_CM4_DisableSleepOnExit, funcdef_no=0, decl_uid=5603, cgraph_uid=1, symbol_order=1)

Modification phase of node Power_Ip_CM4_DisableSleepOnExit/1
Power_Ip_CM4_DisableSleepOnExit ()
{
  uint32 tempValue;
  struct Power_Ip_CM4_Type * pCM4.0_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG tempValue => 0
  # DEBUG BEGIN_STMT
  pCM4.0_1 = pCM4;
  tempValue_3 ={v} pCM4.0_1->SCR;
  # DEBUG tempValue => tempValue_3
  # DEBUG BEGIN_STMT
  tempValue_4 = tempValue_3 & 4294967293;
  # DEBUG tempValue => tempValue_4
  # DEBUG BEGIN_STMT
  pCM4.0_1->SCR ={v} tempValue_4;
  return;

}



;; Function Power_Ip_CM4_EnableSleepOnExit (Power_Ip_CM4_EnableSleepOnExit, funcdef_no=1, decl_uid=5601, cgraph_uid=2, symbol_order=2)

Modification phase of node Power_Ip_CM4_EnableSleepOnExit/2
Power_Ip_CM4_EnableSleepOnExit ()
{
  uint32 tempValue;
  struct Power_Ip_CM4_Type * pCM4.2_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG tempValue => 0
  # DEBUG BEGIN_STMT
  pCM4.2_1 = pCM4;
  tempValue_3 ={v} pCM4.2_1->SCR;
  # DEBUG tempValue => tempValue_3
  # DEBUG BEGIN_STMT
  tempValue_4 = tempValue_3 | 2;
  # DEBUG tempValue => tempValue_4
  # DEBUG BEGIN_STMT
  pCM4.2_1->SCR ={v} tempValue_4;
  return;

}



;; Function Power_Ip_CM4_EnableDeepSleep (Power_Ip_CM4_EnableDeepSleep, funcdef_no=2, decl_uid=5605, cgraph_uid=3, symbol_order=3)

Modification phase of node Power_Ip_CM4_EnableDeepSleep/3
Power_Ip_CM4_EnableDeepSleep ()
{
  uint32 tempValue;
  struct Power_Ip_CM4_Type * pCM4.4_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG tempValue => 0
  # DEBUG BEGIN_STMT
  pCM4.4_1 = pCM4;
  tempValue_3 ={v} pCM4.4_1->SCR;
  # DEBUG tempValue => tempValue_3
  # DEBUG BEGIN_STMT
  tempValue_4 = tempValue_3 | 4;
  # DEBUG tempValue => tempValue_4
  # DEBUG BEGIN_STMT
  pCM4.4_1->SCR ={v} tempValue_4;
  return;

}



;; Function Power_Ip_CM4_DisableDeepSleep (Power_Ip_CM4_DisableDeepSleep, funcdef_no=3, decl_uid=5607, cgraph_uid=4, symbol_order=4)

Modification phase of node Power_Ip_CM4_DisableDeepSleep/4
Power_Ip_CM4_DisableDeepSleep ()
{
  uint32 tempValue;
  struct Power_Ip_CM4_Type * pCM4.6_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG tempValue => 0
  # DEBUG BEGIN_STMT
  pCM4.6_1 = pCM4;
  tempValue_3 ={v} pCM4.6_1->SCR;
  # DEBUG tempValue => tempValue_3
  # DEBUG BEGIN_STMT
  tempValue_4 = tempValue_3 & 4294967291;
  # DEBUG tempValue => tempValue_4
  # DEBUG BEGIN_STMT
  pCM4.6_1->SCR ={v} tempValue_4;
  return;

}


