
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OsIf_MicrosToTicks/9:
  Jump functions of caller  OsIf_SetTimerFrequency/8:
  Jump functions of caller  OsIf_GetElapsed/7:
  Jump functions of caller  OsIf_GetCounter/6:
  Jump functions of caller  OsIf_Init/5:

 Propagating constants:

Not considering OsIf_MicrosToTicks for cloning; -fipa-cp-clone disabled.
Not considering OsIf_SetTimerFrequency for cloning; -fipa-cp-clone disabled.
Not considering OsIf_GetElapsed for cloning; -fipa-cp-clone disabled.
Not considering OsIf_GetCounter for cloning; -fipa-cp-clone disabled.
Not considering OsIf_Init for cloning; -fipa-cp-clone disabled.

overall_size: 25, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 2.000000
 - context independent values, size: 5, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: OsIf_MicrosToTicks/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: OsIf_SetTimerFrequency/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: OsIf_GetElapsed/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: OsIf_GetCounter/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: OsIf_Init/5:
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

OsIf_MicrosToTicks/9 (OsIf_MicrosToTicks) @05ae2d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
OsIf_SetTimerFrequency/8 (OsIf_SetTimerFrequency) @05ae2a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
OsIf_GetElapsed/7 (OsIf_GetElapsed) @05ae27e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
OsIf_GetCounter/6 (OsIf_GetCounter) @05ae2540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
OsIf_Init/5 (OsIf_Init) @05ae22a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:306783 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function OsIf_Init (OsIf_Init, funcdef_no=5, decl_uid=5522, cgraph_uid=6, symbol_order=5)

Modification phase of node OsIf_Init/5
OsIf_Init (const void * Config)
{
  volatile boolean x;
  _Bool x.0_4;

  <bb 2> [local count: 306783]:
  # DEBUG BEGIN_STMT
  if (Config_2(D) != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 5>; [30.00%]

  <bb 3> [local count: 214748]:
  # DEBUG BEGIN_STMT
  x ={v} 0;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_4 ={v} x;
  if (x.0_4 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 6> [local count: 107374]:

  <bb 4> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 7> [local count: 1073741824]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 199409]:
  # DEBUG x => NULL
  return;

}



;; Function OsIf_GetCounter (OsIf_GetCounter, funcdef_no=6, decl_uid=5524, cgraph_uid=7, symbol_order=6)

Modification phase of node OsIf_GetCounter/6
OsIf_GetCounter (OsIf_CounterType SelectedCounter)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Value => 0
  # DEBUG BEGIN_STMT
  # DEBUG Value => 0
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function OsIf_GetElapsed (OsIf_GetElapsed, funcdef_no=7, decl_uid=5527, cgraph_uid=8, symbol_order=7)

Modification phase of node OsIf_GetElapsed/7
OsIf_GetElapsed (uint32 * const CurrentRef, OsIf_CounterType SelectedCounter)
{
  uint32 Value;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Value => 0
  # DEBUG BEGIN_STMT
  if (SelectedCounter_2(D) == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => CurrentRef_4(D)
  # DEBUG INLINE_ENTRY NULL
  # DEBUG CurrentRef => D#1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Value => 1
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  # Value_1 = PHI <1(3), 0(2)>
  # DEBUG Value => Value_1
  # DEBUG BEGIN_STMT
  return Value_1;

}



;; Function OsIf_SetTimerFrequency (OsIf_SetTimerFrequency, funcdef_no=8, decl_uid=5530, cgraph_uid=9, symbol_order=8)

Modification phase of node OsIf_SetTimerFrequency/8
OsIf_SetTimerFrequency (uint32 Freq, OsIf_CounterType SelectedCounter)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Freq => NULL
  return;

}



;; Function OsIf_MicrosToTicks (OsIf_MicrosToTicks, funcdef_no=9, decl_uid=5533, cgraph_uid=10, symbol_order=9)

Modification phase of node OsIf_MicrosToTicks/9
OsIf_MicrosToTicks (uint32 Micros, OsIf_CounterType SelectedCounter)
{
  uint32 Value;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Value => 0
  # DEBUG BEGIN_STMT
  if (SelectedCounter_2(D) == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG Micros => Micros_4(D)
  # DEBUG INLINE_ENTRY NULL
  # DEBUG BEGIN_STMT
  # DEBUG Micros => NULL
  # DEBUG Value => Micros_4(D)
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  # Value_1 = PHI <Micros_4(D)(3), 0(2)>
  # DEBUG Value => Value_1
  # DEBUG BEGIN_STMT
  return Value_1;

}


