
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Mcl_DeInit/2:
  Jump functions of caller  Mcl_Init/1:

 Propagating constants:

Not considering Mcl_DeInit for cloning; -fipa-cp-clone disabled.
Not considering Mcl_Init for cloning; -fipa-cp-clone disabled.

overall_size: 14, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Mcl_DeInit/2:
  Node: Mcl_Init/1:
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

Mcl_DeInit/2 (Mcl_DeInit) @0697ae00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Mcl_pxConfig/0 (read)Mcl_pxConfig/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Mcl_Init/1 (Mcl_Init) @0697ab60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Mcl_pxConfig/0 (read)Mcl_pxConfig/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Mcl_pxConfig/0 (Mcl_pxConfig) @069ad828
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Mcl_Init/1 (write)Mcl_Init/1 (read)Mcl_DeInit/2 (read)Mcl_DeInit/2 (write)
  Availability: available
  Varpool flags:

;; Function Mcl_Init (Mcl_Init, funcdef_no=0, decl_uid=5708, cgraph_uid=1, symbol_order=1)

Modification phase of node Mcl_Init/1
Mcl_Init (const struct Mcl_ConfigType * const ConfigPtr)
{
  const struct Mcl_ConfigType * Mcl_pxConfig.0_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Mcl_pxConfig.0_1 = Mcl_pxConfig;
  if (Mcl_pxConfig.0_1 == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 4>; [70.00%]

  <bb 3> [local count: 322122547]:
  # DEBUG BEGIN_STMT
  Mcl_pxConfig = ConfigPtr_4(D);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Mcl_DeInit (Mcl_DeInit, funcdef_no=1, decl_uid=5710, cgraph_uid=2, symbol_order=2)

Modification phase of node Mcl_DeInit/2
Mcl_DeInit ()
{
  const struct Mcl_ConfigType * Mcl_pxConfig.2_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Mcl_pxConfig.2_1 = Mcl_pxConfig;
  if (Mcl_pxConfig.2_1 != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 4>; [30.00%]

  <bb 3> [local count: 751619278]:
  # DEBUG BEGIN_STMT
  Mcl_pxConfig = 0B;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


