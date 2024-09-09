
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_01/8:
  Jump functions of caller  SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_01/7:
  Jump functions of caller  SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_00/6:
  Jump functions of caller  SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_00/5:
  Jump functions of caller  Dio_schm_read_msr/4:

 Propagating constants:

Not considering SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_01 for cloning; -fipa-cp-clone disabled.
Not considering SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_01 for cloning; -fipa-cp-clone disabled.
Not considering SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_00 for cloning; -fipa-cp-clone disabled.
Not considering SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_00 for cloning; -fipa-cp-clone disabled.
Not considering Dio_schm_read_msr for cloning; -fipa-cp-clone disabled.

overall_size: 64, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_01/8:
  Node: SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_01/7:
  Node: SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_00/6:
  Node: SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_00/5:
  Node: Dio_schm_read_msr/4:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_01/8 (SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_01) @06867ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: reentry_guard_DIO_EXCLUSIVE_AREA_01/3 (read)reentry_guard_DIO_EXCLUSIVE_AREA_01/3 (write)msr_DIO_EXCLUSIVE_AREA_01/2 (read)reentry_guard_DIO_EXCLUSIVE_AREA_01/3 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_01/7 (SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_01) @06867c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: reentry_guard_DIO_EXCLUSIVE_AREA_01/3 (read)msr_DIO_EXCLUSIVE_AREA_01/2 (write)msr_DIO_EXCLUSIVE_AREA_01/2 (read)reentry_guard_DIO_EXCLUSIVE_AREA_01/3 (read)reentry_guard_DIO_EXCLUSIVE_AREA_01/3 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_00/6 (SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_00) @068679a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: reentry_guard_DIO_EXCLUSIVE_AREA_00/1 (read)reentry_guard_DIO_EXCLUSIVE_AREA_00/1 (write)msr_DIO_EXCLUSIVE_AREA_00/0 (read)reentry_guard_DIO_EXCLUSIVE_AREA_00/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_00/5 (SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_00) @06867700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: reentry_guard_DIO_EXCLUSIVE_AREA_00/1 (read)msr_DIO_EXCLUSIVE_AREA_00/0 (write)msr_DIO_EXCLUSIVE_AREA_00/0 (read)reentry_guard_DIO_EXCLUSIVE_AREA_00/1 (read)reentry_guard_DIO_EXCLUSIVE_AREA_00/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dio_schm_read_msr/4 (Dio_schm_read_msr) @06867460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
reentry_guard_DIO_EXCLUSIVE_AREA_01/3 (reentry_guard_DIO_EXCLUSIVE_AREA_01) @06864948
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_01/7 (read)SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_01/7 (read)SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_01/7 (write)SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_01/8 (read)SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_01/8 (write)SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_01/8 (read)
  Availability: available
  Varpool flags:
msr_DIO_EXCLUSIVE_AREA_01/2 (msr_DIO_EXCLUSIVE_AREA_01) @068648b8
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_01/7 (read)SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_01/7 (write)SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_01/8 (read)
  Availability: available
  Varpool flags:
reentry_guard_DIO_EXCLUSIVE_AREA_00/1 (reentry_guard_DIO_EXCLUSIVE_AREA_00) @06864828
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_00/5 (read)SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_00/5 (read)SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_00/5 (write)SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_00/6 (read)SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_00/6 (write)SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_00/6 (read)
  Availability: available
  Varpool flags:
msr_DIO_EXCLUSIVE_AREA_00/0 (msr_DIO_EXCLUSIVE_AREA_00) @06864798
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_00/5 (read)SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_00/5 (write)SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_00/6 (read)
  Availability: available
  Varpool flags:

;; Function Dio_schm_read_msr (Dio_schm_read_msr, funcdef_no=0, decl_uid=5551, cgraph_uid=1, symbol_order=4)

Modification phase of node Dio_schm_read_msr/4
Dio_schm_read_msr ()
{
  register uint32 reg_tmp;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" mrs %0, primask " : "=r" reg_tmp_1);
  # DEBUG reg_tmp => reg_tmp_1
  # DEBUG BEGIN_STMT
  return reg_tmp_1;

}



;; Function SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_00 (SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_00, funcdef_no=1, decl_uid=5539, cgraph_uid=2, symbol_order=5)

Modification phase of node SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_00/5
SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_00 ()
{
  register uint32 reg_tmp;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  _1 ={v} reentry_guard_DIO_EXCLUSIVE_AREA_00[0];
  if (_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Dio_schm_read_msr
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" mrs %0, primask " : "=r" reg_tmp_11);
  # DEBUG reg_tmp => reg_tmp_11
  # DEBUG BEGIN_STMT
  # DEBUG reg_tmp => NULL
  msr_DIO_EXCLUSIVE_AREA_00[0] ={v} reg_tmp_11;
  # DEBUG BEGIN_STMT
  _2 ={v} msr_DIO_EXCLUSIVE_AREA_00[0];
  _3 = _2 & 1;
  if (_3 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i");

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 ={v} reentry_guard_DIO_EXCLUSIVE_AREA_00[0];
  _5 = _4 + 1;
  reentry_guard_DIO_EXCLUSIVE_AREA_00[0] ={v} _5;
  return;

}



;; Function SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_00 (SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_00, funcdef_no=2, decl_uid=5541, cgraph_uid=3, symbol_order=6)

Modification phase of node SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_00/6
SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_00 ()
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  _1 ={v} reentry_guard_DIO_EXCLUSIVE_AREA_00[0];
  _2 = _1 + 4294967295;
  reentry_guard_DIO_EXCLUSIVE_AREA_00[0] ={v} _2;
  # DEBUG BEGIN_STMT
  _3 ={v} msr_DIO_EXCLUSIVE_AREA_00[0];
  _4 = _3 & 1;
  if (_4 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  _5 ={v} reentry_guard_DIO_EXCLUSIVE_AREA_00[0];
  if (_5 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsie i");

  <bb 5> [local count: 1073741824]:
  return;

}



;; Function SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_01 (SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_01, funcdef_no=3, decl_uid=5543, cgraph_uid=4, symbol_order=7)

Modification phase of node SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_01/7
SchM_Enter_Dio_DIO_EXCLUSIVE_AREA_01 ()
{
  register uint32 reg_tmp;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  _1 ={v} reentry_guard_DIO_EXCLUSIVE_AREA_01[0];
  if (_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Dio_schm_read_msr
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" mrs %0, primask " : "=r" reg_tmp_11);
  # DEBUG reg_tmp => reg_tmp_11
  # DEBUG BEGIN_STMT
  # DEBUG reg_tmp => NULL
  msr_DIO_EXCLUSIVE_AREA_01[0] ={v} reg_tmp_11;
  # DEBUG BEGIN_STMT
  _2 ={v} msr_DIO_EXCLUSIVE_AREA_01[0];
  _3 = _2 & 1;
  if (_3 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsid i");

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _4 ={v} reentry_guard_DIO_EXCLUSIVE_AREA_01[0];
  _5 = _4 + 1;
  reentry_guard_DIO_EXCLUSIVE_AREA_01[0] ={v} _5;
  return;

}



;; Function SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_01 (SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_01, funcdef_no=4, decl_uid=5545, cgraph_uid=5, symbol_order=8)

Modification phase of node SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_01/8
SchM_Exit_Dio_DIO_EXCLUSIVE_AREA_01 ()
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  _1 ={v} reentry_guard_DIO_EXCLUSIVE_AREA_01[0];
  _2 = _1 + 4294967295;
  reentry_guard_DIO_EXCLUSIVE_AREA_01[0] ={v} _2;
  # DEBUG BEGIN_STMT
  _3 ={v} msr_DIO_EXCLUSIVE_AREA_01[0];
  _4 = _3 & 1;
  if (_4 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  _5 ={v} reentry_guard_DIO_EXCLUSIVE_AREA_01[0];
  if (_5 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" cpsie i");

  <bb 5> [local count: 1073741824]:
  return;

}


