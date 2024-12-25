
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Flexio_Mcl_Ip_GetAllTimerStatus/4:
  Jump functions of caller  Flexio_Mcl_Ip_GetAllShifterErrorStatus/3:
  Jump functions of caller  MCL_FLEXIO_ISR/1:
    callsite  MCL_FLEXIO_ISR/1 -> Flexio_Mcl_Ip_CommonIrq/0 : 
  Jump functions of caller  Flexio_Mcl_Ip_CommonIrq/0:

 Propagating constants:

Not considering MCL_FLEXIO_ISR for cloning; -fipa-cp-clone disabled.

overall_size: 22, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: MCL_FLEXIO_ISR/1:
  Node: Flexio_Mcl_Ip_CommonIrq/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Flexio_Ip_baIpIsInitialized/5 (Flexio_Ip_baIpIsInitialized) @05de0f78
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Flexio_Mcl_Ip_CommonIrq/0 (read)
  Availability: not_available
  Varpool flags:
Flexio_Mcl_Ip_GetAllTimerStatus/4 (Flexio_Mcl_Ip_GetAllTimerStatus) @05de22a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Flexio_Mcl_Ip_CommonIrq/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Flexio_Mcl_Ip_GetAllShifterErrorStatus/3 (Flexio_Mcl_Ip_GetAllShifterErrorStatus) @05de21c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Flexio_Mcl_Ip_CommonIrq/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Flexio_Ip_paxBase/2 (Flexio_Ip_paxBase) @05de0ea0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Flexio_Mcl_Ip_CommonIrq/0 (read)
  Availability: not_available
  Varpool flags: read-only
MCL_FLEXIO_ISR/1 (MCL_FLEXIO_ISR) @05cc3380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Flexio_Mcl_Ip_CommonIrq/0 (1073741824 (estimated locally),1.00 per call) 
Flexio_Mcl_Ip_CommonIrq/0 (Flexio_Mcl_Ip_CommonIrq) @05cc3d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Flexio_Ip_paxBase/2 (read)Flexio_Ip_baIpIsInitialized/5 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: MCL_FLEXIO_ISR/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: Flexio_Mcl_Ip_GetAllTimerStatus/4 (1073741824 (estimated locally),1.00 per call) Flexio_Mcl_Ip_GetAllShifterErrorStatus/3 (1073741824 (estimated locally),1.00 per call) 

;; Function MCL_FLEXIO_ISR (MCL_FLEXIO_ISR, funcdef_no=1, decl_uid=5734, cgraph_uid=2, symbol_order=1)

Modification phase of node MCL_FLEXIO_ISR/1
MCL_FLEXIO_ISR ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Flexio_Mcl_Ip_CommonIrq ();
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  return;

}


