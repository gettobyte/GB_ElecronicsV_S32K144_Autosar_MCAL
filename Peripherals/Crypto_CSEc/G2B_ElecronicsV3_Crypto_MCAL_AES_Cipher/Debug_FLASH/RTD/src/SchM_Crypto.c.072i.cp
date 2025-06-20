
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_12/32:
  Jump functions of caller  SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_12/31:
  Jump functions of caller  SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_11/30:
  Jump functions of caller  SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_11/29:
  Jump functions of caller  SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_10/28:
  Jump functions of caller  SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_10/27:
  Jump functions of caller  SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_04/26:
  Jump functions of caller  SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_04/25:
  Jump functions of caller  SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_03/24:
  Jump functions of caller  SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_03/23:
  Jump functions of caller  SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_02/22:
  Jump functions of caller  SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_02/21:
  Jump functions of caller  SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_01/20:
  Jump functions of caller  SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_01/19:
  Jump functions of caller  SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_00/18:
  Jump functions of caller  SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_00/17:
  Jump functions of caller  Crypto_schm_read_msr/16:

 Propagating constants:

Not considering SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_12 for cloning; -fipa-cp-clone disabled.
Not considering SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_12 for cloning; -fipa-cp-clone disabled.
Not considering SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_11 for cloning; -fipa-cp-clone disabled.
Not considering SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_11 for cloning; -fipa-cp-clone disabled.
Not considering SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_10 for cloning; -fipa-cp-clone disabled.
Not considering SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_10 for cloning; -fipa-cp-clone disabled.
Not considering SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_04 for cloning; -fipa-cp-clone disabled.
Not considering SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_04 for cloning; -fipa-cp-clone disabled.
Not considering SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_03 for cloning; -fipa-cp-clone disabled.
Not considering SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_03 for cloning; -fipa-cp-clone disabled.
Not considering SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_02 for cloning; -fipa-cp-clone disabled.
Not considering SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_02 for cloning; -fipa-cp-clone disabled.
Not considering SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_01 for cloning; -fipa-cp-clone disabled.
Not considering SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_01 for cloning; -fipa-cp-clone disabled.
Not considering SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_00 for cloning; -fipa-cp-clone disabled.
Not considering SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_00 for cloning; -fipa-cp-clone disabled.
Not considering Crypto_schm_read_msr for cloning; -fipa-cp-clone disabled.

overall_size: 244, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_12/32:
  Node: SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_12/31:
  Node: SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_11/30:
  Node: SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_11/29:
  Node: SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_10/28:
  Node: SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_10/27:
  Node: SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_04/26:
  Node: SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_04/25:
  Node: SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_03/24:
  Node: SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_03/23:
  Node: SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_02/22:
  Node: SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_02/21:
  Node: SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_01/20:
  Node: SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_01/19:
  Node: SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_00/18:
  Node: SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_00/17:
  Node: Crypto_schm_read_msr/16:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_12/32 (SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_12) @069e5460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: reentry_guard_CRYPTO_EXCLUSIVE_AREA_12/15 (read)reentry_guard_CRYPTO_EXCLUSIVE_AREA_12/15 (write)msr_CRYPTO_EXCLUSIVE_AREA_12/14 (read)reentry_guard_CRYPTO_EXCLUSIVE_AREA_12/15 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_12/31 (SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_12) @069e51c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: reentry_guard_CRYPTO_EXCLUSIVE_AREA_12/15 (read)msr_CRYPTO_EXCLUSIVE_AREA_12/14 (write)msr_CRYPTO_EXCLUSIVE_AREA_12/14 (read)reentry_guard_CRYPTO_EXCLUSIVE_AREA_12/15 (read)reentry_guard_CRYPTO_EXCLUSIVE_AREA_12/15 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_11/30 (SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_11) @068a8d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: reentry_guard_CRYPTO_EXCLUSIVE_AREA_11/13 (read)reentry_guard_CRYPTO_EXCLUSIVE_AREA_11/13 (write)msr_CRYPTO_EXCLUSIVE_AREA_11/12 (read)reentry_guard_CRYPTO_EXCLUSIVE_AREA_11/13 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_11/29 (SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_11) @068a87e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: reentry_guard_CRYPTO_EXCLUSIVE_AREA_11/13 (read)msr_CRYPTO_EXCLUSIVE_AREA_11/12 (write)msr_CRYPTO_EXCLUSIVE_AREA_11/12 (read)reentry_guard_CRYPTO_EXCLUSIVE_AREA_11/13 (read)reentry_guard_CRYPTO_EXCLUSIVE_AREA_11/13 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_10/28 (SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_10) @068a82a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: reentry_guard_CRYPTO_EXCLUSIVE_AREA_10/11 (read)reentry_guard_CRYPTO_EXCLUSIVE_AREA_10/11 (write)msr_CRYPTO_EXCLUSIVE_AREA_10/10 (read)reentry_guard_CRYPTO_EXCLUSIVE_AREA_10/11 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_10/27 (SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_10) @068a8ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: reentry_guard_CRYPTO_EXCLUSIVE_AREA_10/11 (read)msr_CRYPTO_EXCLUSIVE_AREA_10/10 (write)msr_CRYPTO_EXCLUSIVE_AREA_10/10 (read)reentry_guard_CRYPTO_EXCLUSIVE_AREA_10/11 (read)reentry_guard_CRYPTO_EXCLUSIVE_AREA_10/11 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_04/26 (SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_04) @068a8c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: reentry_guard_CRYPTO_EXCLUSIVE_AREA_04/9 (read)reentry_guard_CRYPTO_EXCLUSIVE_AREA_04/9 (write)msr_CRYPTO_EXCLUSIVE_AREA_04/8 (read)reentry_guard_CRYPTO_EXCLUSIVE_AREA_04/9 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_04/25 (SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_04) @068a89a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: reentry_guard_CRYPTO_EXCLUSIVE_AREA_04/9 (read)msr_CRYPTO_EXCLUSIVE_AREA_04/8 (write)msr_CRYPTO_EXCLUSIVE_AREA_04/8 (read)reentry_guard_CRYPTO_EXCLUSIVE_AREA_04/9 (read)reentry_guard_CRYPTO_EXCLUSIVE_AREA_04/9 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_03/24 (SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_03) @068a8700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: reentry_guard_CRYPTO_EXCLUSIVE_AREA_03/7 (read)reentry_guard_CRYPTO_EXCLUSIVE_AREA_03/7 (write)msr_CRYPTO_EXCLUSIVE_AREA_03/6 (read)reentry_guard_CRYPTO_EXCLUSIVE_AREA_03/7 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_03/23 (SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_03) @068a8460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: reentry_guard_CRYPTO_EXCLUSIVE_AREA_03/7 (read)msr_CRYPTO_EXCLUSIVE_AREA_03/6 (write)msr_CRYPTO_EXCLUSIVE_AREA_03/6 (read)reentry_guard_CRYPTO_EXCLUSIVE_AREA_03/7 (read)reentry_guard_CRYPTO_EXCLUSIVE_AREA_03/7 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_02/22 (SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_02) @068a81c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: reentry_guard_CRYPTO_EXCLUSIVE_AREA_02/5 (read)reentry_guard_CRYPTO_EXCLUSIVE_AREA_02/5 (write)msr_CRYPTO_EXCLUSIVE_AREA_02/4 (read)reentry_guard_CRYPTO_EXCLUSIVE_AREA_02/5 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_02/21 (SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_02) @068a2d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: reentry_guard_CRYPTO_EXCLUSIVE_AREA_02/5 (read)msr_CRYPTO_EXCLUSIVE_AREA_02/4 (write)msr_CRYPTO_EXCLUSIVE_AREA_02/4 (read)reentry_guard_CRYPTO_EXCLUSIVE_AREA_02/5 (read)reentry_guard_CRYPTO_EXCLUSIVE_AREA_02/5 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_01/20 (SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_01) @068a27e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: reentry_guard_CRYPTO_EXCLUSIVE_AREA_01/3 (read)reentry_guard_CRYPTO_EXCLUSIVE_AREA_01/3 (write)msr_CRYPTO_EXCLUSIVE_AREA_01/2 (read)reentry_guard_CRYPTO_EXCLUSIVE_AREA_01/3 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_01/19 (SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_01) @068a2ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: reentry_guard_CRYPTO_EXCLUSIVE_AREA_01/3 (read)msr_CRYPTO_EXCLUSIVE_AREA_01/2 (write)msr_CRYPTO_EXCLUSIVE_AREA_01/2 (read)reentry_guard_CRYPTO_EXCLUSIVE_AREA_01/3 (read)reentry_guard_CRYPTO_EXCLUSIVE_AREA_01/3 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_00/18 (SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_00) @068a2c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: reentry_guard_CRYPTO_EXCLUSIVE_AREA_00/1 (read)reentry_guard_CRYPTO_EXCLUSIVE_AREA_00/1 (write)msr_CRYPTO_EXCLUSIVE_AREA_00/0 (read)reentry_guard_CRYPTO_EXCLUSIVE_AREA_00/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_00/17 (SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_00) @068a29a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: reentry_guard_CRYPTO_EXCLUSIVE_AREA_00/1 (read)msr_CRYPTO_EXCLUSIVE_AREA_00/0 (write)msr_CRYPTO_EXCLUSIVE_AREA_00/0 (read)reentry_guard_CRYPTO_EXCLUSIVE_AREA_00/1 (read)reentry_guard_CRYPTO_EXCLUSIVE_AREA_00/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Crypto_schm_read_msr/16 (Crypto_schm_read_msr) @068a2700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
reentry_guard_CRYPTO_EXCLUSIVE_AREA_12/15 (reentry_guard_CRYPTO_EXCLUSIVE_AREA_12) @068a13f0
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_12/31 (read)SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_12/31 (read)SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_12/31 (write)SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_12/32 (read)SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_12/32 (write)SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_12/32 (read)
  Availability: available
  Varpool flags:
msr_CRYPTO_EXCLUSIVE_AREA_12/14 (msr_CRYPTO_EXCLUSIVE_AREA_12) @068a1360
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_12/31 (read)SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_12/31 (write)SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_12/32 (read)
  Availability: available
  Varpool flags:
reentry_guard_CRYPTO_EXCLUSIVE_AREA_11/13 (reentry_guard_CRYPTO_EXCLUSIVE_AREA_11) @068a12d0
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_11/29 (read)SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_11/29 (read)SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_11/29 (write)SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_11/30 (read)SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_11/30 (write)SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_11/30 (read)
  Availability: available
  Varpool flags:
msr_CRYPTO_EXCLUSIVE_AREA_11/12 (msr_CRYPTO_EXCLUSIVE_AREA_11) @068a1240
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_11/29 (read)SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_11/29 (write)SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_11/30 (read)
  Availability: available
  Varpool flags:
reentry_guard_CRYPTO_EXCLUSIVE_AREA_10/11 (reentry_guard_CRYPTO_EXCLUSIVE_AREA_10) @068a11b0
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_10/27 (read)SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_10/27 (read)SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_10/27 (write)SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_10/28 (read)SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_10/28 (write)SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_10/28 (read)
  Availability: available
  Varpool flags:
msr_CRYPTO_EXCLUSIVE_AREA_10/10 (msr_CRYPTO_EXCLUSIVE_AREA_10) @068a1120
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_10/27 (read)SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_10/27 (write)SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_10/28 (read)
  Availability: available
  Varpool flags:
reentry_guard_CRYPTO_EXCLUSIVE_AREA_04/9 (reentry_guard_CRYPTO_EXCLUSIVE_AREA_04) @068a1090
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_04/25 (read)SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_04/25 (read)SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_04/25 (write)SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_04/26 (read)SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_04/26 (write)SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_04/26 (read)
  Availability: available
  Varpool flags:
msr_CRYPTO_EXCLUSIVE_AREA_04/8 (msr_CRYPTO_EXCLUSIVE_AREA_04) @068a1000
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_04/25 (read)SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_04/25 (write)SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_04/26 (read)
  Availability: available
  Varpool flags:
reentry_guard_CRYPTO_EXCLUSIVE_AREA_03/7 (reentry_guard_CRYPTO_EXCLUSIVE_AREA_03) @06926f30
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_03/23 (read)SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_03/23 (read)SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_03/23 (write)SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_03/24 (read)SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_03/24 (write)SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_03/24 (read)
  Availability: available
  Varpool flags:
msr_CRYPTO_EXCLUSIVE_AREA_03/6 (msr_CRYPTO_EXCLUSIVE_AREA_03) @06926ea0
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_03/23 (read)SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_03/23 (write)SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_03/24 (read)
  Availability: available
  Varpool flags:
reentry_guard_CRYPTO_EXCLUSIVE_AREA_02/5 (reentry_guard_CRYPTO_EXCLUSIVE_AREA_02) @06926e10
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_02/21 (read)SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_02/21 (read)SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_02/21 (write)SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_02/22 (read)SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_02/22 (write)SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_02/22 (read)
  Availability: available
  Varpool flags:
msr_CRYPTO_EXCLUSIVE_AREA_02/4 (msr_CRYPTO_EXCLUSIVE_AREA_02) @06926d80
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_02/21 (read)SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_02/21 (write)SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_02/22 (read)
  Availability: available
  Varpool flags:
reentry_guard_CRYPTO_EXCLUSIVE_AREA_01/3 (reentry_guard_CRYPTO_EXCLUSIVE_AREA_01) @06926cf0
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_01/19 (read)SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_01/19 (read)SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_01/19 (write)SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_01/20 (read)SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_01/20 (write)SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_01/20 (read)
  Availability: available
  Varpool flags:
msr_CRYPTO_EXCLUSIVE_AREA_01/2 (msr_CRYPTO_EXCLUSIVE_AREA_01) @06926c60
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_01/19 (read)SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_01/19 (write)SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_01/20 (read)
  Availability: available
  Varpool flags:
reentry_guard_CRYPTO_EXCLUSIVE_AREA_00/1 (reentry_guard_CRYPTO_EXCLUSIVE_AREA_00) @06926bd0
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_00/17 (read)SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_00/17 (read)SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_00/17 (write)SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_00/18 (read)SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_00/18 (write)SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_00/18 (read)
  Availability: available
  Varpool flags:
msr_CRYPTO_EXCLUSIVE_AREA_00/0 (msr_CRYPTO_EXCLUSIVE_AREA_00) @06926b40
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_00/17 (read)SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_00/17 (write)SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_00/18 (read)
  Availability: available
  Varpool flags:

;; Function Crypto_schm_read_msr (Crypto_schm_read_msr, funcdef_no=0, decl_uid=5589, cgraph_uid=1, symbol_order=16)

Modification phase of node Crypto_schm_read_msr/16
Crypto_schm_read_msr ()
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



;; Function SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_00 (SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_00, funcdef_no=1, decl_uid=5539, cgraph_uid=2, symbol_order=17)

Modification phase of node SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_00/17
SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_00 ()
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
  _1 ={v} reentry_guard_CRYPTO_EXCLUSIVE_AREA_00[0];
  if (_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Crypto_schm_read_msr
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" mrs %0, primask " : "=r" reg_tmp_11);
  # DEBUG reg_tmp => reg_tmp_11
  # DEBUG BEGIN_STMT
  # DEBUG reg_tmp => NULL
  msr_CRYPTO_EXCLUSIVE_AREA_00[0] ={v} reg_tmp_11;
  # DEBUG BEGIN_STMT
  _2 ={v} msr_CRYPTO_EXCLUSIVE_AREA_00[0];
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
  _4 ={v} reentry_guard_CRYPTO_EXCLUSIVE_AREA_00[0];
  _5 = _4 + 1;
  reentry_guard_CRYPTO_EXCLUSIVE_AREA_00[0] ={v} _5;
  return;

}



;; Function SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_00 (SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_00, funcdef_no=2, decl_uid=5541, cgraph_uid=3, symbol_order=18)

Modification phase of node SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_00/18
SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_00 ()
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
  _1 ={v} reentry_guard_CRYPTO_EXCLUSIVE_AREA_00[0];
  _2 = _1 + 4294967295;
  reentry_guard_CRYPTO_EXCLUSIVE_AREA_00[0] ={v} _2;
  # DEBUG BEGIN_STMT
  _3 ={v} msr_CRYPTO_EXCLUSIVE_AREA_00[0];
  _4 = _3 & 1;
  if (_4 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  _5 ={v} reentry_guard_CRYPTO_EXCLUSIVE_AREA_00[0];
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



;; Function SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_01 (SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_01, funcdef_no=3, decl_uid=5543, cgraph_uid=4, symbol_order=19)

Modification phase of node SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_01/19
SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_01 ()
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
  _1 ={v} reentry_guard_CRYPTO_EXCLUSIVE_AREA_01[0];
  if (_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Crypto_schm_read_msr
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" mrs %0, primask " : "=r" reg_tmp_11);
  # DEBUG reg_tmp => reg_tmp_11
  # DEBUG BEGIN_STMT
  # DEBUG reg_tmp => NULL
  msr_CRYPTO_EXCLUSIVE_AREA_01[0] ={v} reg_tmp_11;
  # DEBUG BEGIN_STMT
  _2 ={v} msr_CRYPTO_EXCLUSIVE_AREA_01[0];
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
  _4 ={v} reentry_guard_CRYPTO_EXCLUSIVE_AREA_01[0];
  _5 = _4 + 1;
  reentry_guard_CRYPTO_EXCLUSIVE_AREA_01[0] ={v} _5;
  return;

}



;; Function SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_01 (SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_01, funcdef_no=4, decl_uid=5545, cgraph_uid=5, symbol_order=20)

Modification phase of node SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_01/20
SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_01 ()
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
  _1 ={v} reentry_guard_CRYPTO_EXCLUSIVE_AREA_01[0];
  _2 = _1 + 4294967295;
  reentry_guard_CRYPTO_EXCLUSIVE_AREA_01[0] ={v} _2;
  # DEBUG BEGIN_STMT
  _3 ={v} msr_CRYPTO_EXCLUSIVE_AREA_01[0];
  _4 = _3 & 1;
  if (_4 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  _5 ={v} reentry_guard_CRYPTO_EXCLUSIVE_AREA_01[0];
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



;; Function SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_02 (SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_02, funcdef_no=5, decl_uid=5547, cgraph_uid=6, symbol_order=21)

Modification phase of node SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_02/21
SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_02 ()
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
  _1 ={v} reentry_guard_CRYPTO_EXCLUSIVE_AREA_02[0];
  if (_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Crypto_schm_read_msr
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" mrs %0, primask " : "=r" reg_tmp_11);
  # DEBUG reg_tmp => reg_tmp_11
  # DEBUG BEGIN_STMT
  # DEBUG reg_tmp => NULL
  msr_CRYPTO_EXCLUSIVE_AREA_02[0] ={v} reg_tmp_11;
  # DEBUG BEGIN_STMT
  _2 ={v} msr_CRYPTO_EXCLUSIVE_AREA_02[0];
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
  _4 ={v} reentry_guard_CRYPTO_EXCLUSIVE_AREA_02[0];
  _5 = _4 + 1;
  reentry_guard_CRYPTO_EXCLUSIVE_AREA_02[0] ={v} _5;
  return;

}



;; Function SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_02 (SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_02, funcdef_no=6, decl_uid=5549, cgraph_uid=7, symbol_order=22)

Modification phase of node SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_02/22
SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_02 ()
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
  _1 ={v} reentry_guard_CRYPTO_EXCLUSIVE_AREA_02[0];
  _2 = _1 + 4294967295;
  reentry_guard_CRYPTO_EXCLUSIVE_AREA_02[0] ={v} _2;
  # DEBUG BEGIN_STMT
  _3 ={v} msr_CRYPTO_EXCLUSIVE_AREA_02[0];
  _4 = _3 & 1;
  if (_4 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  _5 ={v} reentry_guard_CRYPTO_EXCLUSIVE_AREA_02[0];
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



;; Function SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_03 (SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_03, funcdef_no=7, decl_uid=5551, cgraph_uid=8, symbol_order=23)

Modification phase of node SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_03/23
SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_03 ()
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
  _1 ={v} reentry_guard_CRYPTO_EXCLUSIVE_AREA_03[0];
  if (_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Crypto_schm_read_msr
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" mrs %0, primask " : "=r" reg_tmp_11);
  # DEBUG reg_tmp => reg_tmp_11
  # DEBUG BEGIN_STMT
  # DEBUG reg_tmp => NULL
  msr_CRYPTO_EXCLUSIVE_AREA_03[0] ={v} reg_tmp_11;
  # DEBUG BEGIN_STMT
  _2 ={v} msr_CRYPTO_EXCLUSIVE_AREA_03[0];
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
  _4 ={v} reentry_guard_CRYPTO_EXCLUSIVE_AREA_03[0];
  _5 = _4 + 1;
  reentry_guard_CRYPTO_EXCLUSIVE_AREA_03[0] ={v} _5;
  return;

}



;; Function SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_03 (SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_03, funcdef_no=8, decl_uid=5553, cgraph_uid=9, symbol_order=24)

Modification phase of node SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_03/24
SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_03 ()
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
  _1 ={v} reentry_guard_CRYPTO_EXCLUSIVE_AREA_03[0];
  _2 = _1 + 4294967295;
  reentry_guard_CRYPTO_EXCLUSIVE_AREA_03[0] ={v} _2;
  # DEBUG BEGIN_STMT
  _3 ={v} msr_CRYPTO_EXCLUSIVE_AREA_03[0];
  _4 = _3 & 1;
  if (_4 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  _5 ={v} reentry_guard_CRYPTO_EXCLUSIVE_AREA_03[0];
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



;; Function SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_04 (SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_04, funcdef_no=9, decl_uid=5555, cgraph_uid=10, symbol_order=25)

Modification phase of node SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_04/25
SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_04 ()
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
  _1 ={v} reentry_guard_CRYPTO_EXCLUSIVE_AREA_04[0];
  if (_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Crypto_schm_read_msr
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" mrs %0, primask " : "=r" reg_tmp_11);
  # DEBUG reg_tmp => reg_tmp_11
  # DEBUG BEGIN_STMT
  # DEBUG reg_tmp => NULL
  msr_CRYPTO_EXCLUSIVE_AREA_04[0] ={v} reg_tmp_11;
  # DEBUG BEGIN_STMT
  _2 ={v} msr_CRYPTO_EXCLUSIVE_AREA_04[0];
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
  _4 ={v} reentry_guard_CRYPTO_EXCLUSIVE_AREA_04[0];
  _5 = _4 + 1;
  reentry_guard_CRYPTO_EXCLUSIVE_AREA_04[0] ={v} _5;
  return;

}



;; Function SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_04 (SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_04, funcdef_no=10, decl_uid=5557, cgraph_uid=11, symbol_order=26)

Modification phase of node SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_04/26
SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_04 ()
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
  _1 ={v} reentry_guard_CRYPTO_EXCLUSIVE_AREA_04[0];
  _2 = _1 + 4294967295;
  reentry_guard_CRYPTO_EXCLUSIVE_AREA_04[0] ={v} _2;
  # DEBUG BEGIN_STMT
  _3 ={v} msr_CRYPTO_EXCLUSIVE_AREA_04[0];
  _4 = _3 & 1;
  if (_4 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  _5 ={v} reentry_guard_CRYPTO_EXCLUSIVE_AREA_04[0];
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



;; Function SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_10 (SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_10, funcdef_no=11, decl_uid=5559, cgraph_uid=12, symbol_order=27)

Modification phase of node SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_10/27
SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_10 ()
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
  _1 ={v} reentry_guard_CRYPTO_EXCLUSIVE_AREA_10[0];
  if (_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Crypto_schm_read_msr
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" mrs %0, primask " : "=r" reg_tmp_11);
  # DEBUG reg_tmp => reg_tmp_11
  # DEBUG BEGIN_STMT
  # DEBUG reg_tmp => NULL
  msr_CRYPTO_EXCLUSIVE_AREA_10[0] ={v} reg_tmp_11;
  # DEBUG BEGIN_STMT
  _2 ={v} msr_CRYPTO_EXCLUSIVE_AREA_10[0];
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
  _4 ={v} reentry_guard_CRYPTO_EXCLUSIVE_AREA_10[0];
  _5 = _4 + 1;
  reentry_guard_CRYPTO_EXCLUSIVE_AREA_10[0] ={v} _5;
  return;

}



;; Function SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_10 (SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_10, funcdef_no=12, decl_uid=5561, cgraph_uid=13, symbol_order=28)

Modification phase of node SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_10/28
SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_10 ()
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
  _1 ={v} reentry_guard_CRYPTO_EXCLUSIVE_AREA_10[0];
  _2 = _1 + 4294967295;
  reentry_guard_CRYPTO_EXCLUSIVE_AREA_10[0] ={v} _2;
  # DEBUG BEGIN_STMT
  _3 ={v} msr_CRYPTO_EXCLUSIVE_AREA_10[0];
  _4 = _3 & 1;
  if (_4 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  _5 ={v} reentry_guard_CRYPTO_EXCLUSIVE_AREA_10[0];
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



;; Function SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_11 (SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_11, funcdef_no=13, decl_uid=5563, cgraph_uid=14, symbol_order=29)

Modification phase of node SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_11/29
SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_11 ()
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
  _1 ={v} reentry_guard_CRYPTO_EXCLUSIVE_AREA_11[0];
  if (_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Crypto_schm_read_msr
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" mrs %0, primask " : "=r" reg_tmp_11);
  # DEBUG reg_tmp => reg_tmp_11
  # DEBUG BEGIN_STMT
  # DEBUG reg_tmp => NULL
  msr_CRYPTO_EXCLUSIVE_AREA_11[0] ={v} reg_tmp_11;
  # DEBUG BEGIN_STMT
  _2 ={v} msr_CRYPTO_EXCLUSIVE_AREA_11[0];
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
  _4 ={v} reentry_guard_CRYPTO_EXCLUSIVE_AREA_11[0];
  _5 = _4 + 1;
  reentry_guard_CRYPTO_EXCLUSIVE_AREA_11[0] ={v} _5;
  return;

}



;; Function SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_11 (SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_11, funcdef_no=14, decl_uid=5565, cgraph_uid=15, symbol_order=30)

Modification phase of node SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_11/30
SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_11 ()
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
  _1 ={v} reentry_guard_CRYPTO_EXCLUSIVE_AREA_11[0];
  _2 = _1 + 4294967295;
  reentry_guard_CRYPTO_EXCLUSIVE_AREA_11[0] ={v} _2;
  # DEBUG BEGIN_STMT
  _3 ={v} msr_CRYPTO_EXCLUSIVE_AREA_11[0];
  _4 = _3 & 1;
  if (_4 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  _5 ={v} reentry_guard_CRYPTO_EXCLUSIVE_AREA_11[0];
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



;; Function SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_12 (SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_12, funcdef_no=15, decl_uid=5567, cgraph_uid=16, symbol_order=31)

Modification phase of node SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_12/31
SchM_Enter_Crypto_CRYPTO_EXCLUSIVE_AREA_12 ()
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
  _1 ={v} reentry_guard_CRYPTO_EXCLUSIVE_AREA_12[0];
  if (_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Crypto_schm_read_msr
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" mrs %0, primask " : "=r" reg_tmp_11);
  # DEBUG reg_tmp => reg_tmp_11
  # DEBUG BEGIN_STMT
  # DEBUG reg_tmp => NULL
  msr_CRYPTO_EXCLUSIVE_AREA_12[0] ={v} reg_tmp_11;
  # DEBUG BEGIN_STMT
  _2 ={v} msr_CRYPTO_EXCLUSIVE_AREA_12[0];
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
  _4 ={v} reentry_guard_CRYPTO_EXCLUSIVE_AREA_12[0];
  _5 = _4 + 1;
  reentry_guard_CRYPTO_EXCLUSIVE_AREA_12[0] ={v} _5;
  return;

}



;; Function SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_12 (SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_12, funcdef_no=16, decl_uid=5569, cgraph_uid=17, symbol_order=32)

Modification phase of node SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_12/32
SchM_Exit_Crypto_CRYPTO_EXCLUSIVE_AREA_12 ()
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
  _1 ={v} reentry_guard_CRYPTO_EXCLUSIVE_AREA_12[0];
  _2 = _1 + 4294967295;
  reentry_guard_CRYPTO_EXCLUSIVE_AREA_12[0] ={v} _2;
  # DEBUG BEGIN_STMT
  _3 ={v} msr_CRYPTO_EXCLUSIVE_AREA_12[0];
  _4 = _3 & 1;
  if (_4 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  _5 ={v} reentry_guard_CRYPTO_EXCLUSIVE_AREA_12[0];
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


