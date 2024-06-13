
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OsIf_Timer_System_Internal_GetElapsed/2:
  Jump functions of caller  OsIf_Timer_System_Internal_GetCounter/1:
  Jump functions of caller  OsIf_Timer_System_Internal_Init/0:

 Propagating constants:

Not considering OsIf_Timer_System_Internal_GetElapsed for cloning; -fipa-cp-clone disabled.
Not considering OsIf_Timer_System_Internal_GetCounter for cloning; -fipa-cp-clone disabled.
Not considering OsIf_Timer_System_Internal_Init for cloning; -fipa-cp-clone disabled.

overall_size: 25, max_new_size: 11001
 - context independent values, size: 7, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: OsIf_Timer_System_Internal_GetElapsed/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: OsIf_Timer_System_Internal_GetCounter/1:
  Node: OsIf_Timer_System_Internal_Init/0:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OsIf_Timer_System_Internal_GetElapsed/2 (OsIf_Timer_System_Internal_GetElapsed) @067211c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
OsIf_Timer_System_Internal_GetCounter/1 (OsIf_Timer_System_Internal_GetCounter) @06715ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
OsIf_Timer_System_Internal_Init/0 (OsIf_Timer_System_Internal_Init) @06715e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function OsIf_Timer_System_Internal_Init (OsIf_Timer_System_Internal_Init, funcdef_no=0, decl_uid=5517, cgraph_uid=1, symbol_order=0)

Modification phase of node OsIf_Timer_System_Internal_Init/0
OsIf_Timer_System_Internal_Init (uint32 SystemCounterFreq)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct S32_SysTick_Type *)3758153744B].CSRr ={v} 0;
  # DEBUG BEGIN_STMT
  MEM[(struct S32_SysTick_Type *)3758153744B].RVR ={v} 16777215;
  # DEBUG BEGIN_STMT
  MEM[(struct S32_SysTick_Type *)3758153744B].CVR ={v} 0;
  # DEBUG BEGIN_STMT
  MEM[(struct S32_SysTick_Type *)3758153744B].CSRr ={v} 5;
  return;

}



;; Function OsIf_Timer_System_Internal_GetCounter (OsIf_Timer_System_Internal_GetCounter, funcdef_no=1, decl_uid=5519, cgraph_uid=2, symbol_order=1)

Modification phase of node OsIf_Timer_System_Internal_GetCounter/1
OsIf_Timer_System_Internal_GetCounter ()
{
  long unsigned int _1;
  uint32 _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct S32_SysTick_Type *)3758153744B].CVR;
  _3 = _1 & 16777215;
  return _3;

}



;; Function OsIf_Timer_System_Internal_GetElapsed (OsIf_Timer_System_Internal_GetElapsed, funcdef_no=2, decl_uid=5521, cgraph_uid=3, symbol_order=2)

Modification phase of node OsIf_Timer_System_Internal_GetElapsed/2
OsIf_Timer_System_Internal_GetElapsed (uint32 * const CurrentRef)
{
  uint32 dif;
  uint32 CurrentVal;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct S32_SysTick_Type *)3758153744B].CVR;
  CurrentVal_7 = _1 & 16777215;
  # DEBUG CurrentVal => CurrentVal_7
  # DEBUG BEGIN_STMT
  # DEBUG dif => 0
  # DEBUG BEGIN_STMT
  _2 = *CurrentRef_8(D);
  if (_2 < CurrentVal_7)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(struct S32_SysTick_Type *)3758153744B].RVR;
  _4 = _2 - CurrentVal_7;
  dif_10 = _3 + _4;
  # DEBUG dif => dif_10
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  dif_9 = _2 - CurrentVal_7;
  # DEBUG dif => dif_9

  <bb 5> [local count: 1073741824]:
  # dif_5 = PHI <dif_10(3), dif_9(4)>
  # DEBUG dif => dif_5
  # DEBUG BEGIN_STMT
  *CurrentRef_8(D) = CurrentVal_7;
  # DEBUG BEGIN_STMT
  return dif_5;

}


