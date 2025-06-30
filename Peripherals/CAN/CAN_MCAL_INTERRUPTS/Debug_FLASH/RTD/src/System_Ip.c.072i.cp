
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  System_Ip_ConfigIrq/2:
    callsite  System_Ip_ConfigIrq/2 -> System_Ip_ConfigIrqPrivileged/1 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0x1
         Unknown VR
  Jump functions of caller  System_Ip_ConfigIrqPrivileged/1:

 Propagating constants:

Not considering System_Ip_ConfigIrq for cloning; -fipa-cp-clone disabled.

overall_size: 18, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: System_Ip_ConfigIrq/2:
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
  Node: System_Ip_ConfigIrqPrivileged/1:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

System_Ip_ConfigIrq/2 (System_Ip_ConfigIrq) @05f3e7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: System_Ip_ConfigIrqPrivileged/1 (1073741824 (estimated locally),1.00 per call) 
System_Ip_ConfigIrqPrivileged/1 (System_Ip_ConfigIrqPrivileged) @05f3e540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: System_Ip_ConfigIrq/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 

;; Function System_Ip_ConfigIrq (System_Ip_ConfigIrq, funcdef_no=2, decl_uid=6194, cgraph_uid=3, symbol_order=2)

Modification phase of node System_Ip_ConfigIrq/2
System_Ip_ConfigIrq (System_Ip_IrqType eIrq, boolean bEnable)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  System_Ip_ConfigIrqPrivileged (eIrq_2(D), bEnable_3(D));
  return;

}


