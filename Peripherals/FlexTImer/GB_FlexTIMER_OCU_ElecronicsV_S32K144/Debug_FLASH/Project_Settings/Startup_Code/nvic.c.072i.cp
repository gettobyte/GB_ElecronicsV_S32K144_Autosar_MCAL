
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  NVIC_SetPriority/3:
  Jump functions of caller  NVIC_DisableIRQ/2:
  Jump functions of caller  NVIC_EnableIRQ/1:
  Jump functions of caller  NVIC_SetPriorityGrouping/0:

 Propagating constants:

Not considering NVIC_SetPriority for cloning; -fipa-cp-clone disabled.
Not considering NVIC_DisableIRQ for cloning; -fipa-cp-clone disabled.
Not considering NVIC_EnableIRQ for cloning; -fipa-cp-clone disabled.
Not considering NVIC_SetPriorityGrouping for cloning; -fipa-cp-clone disabled.

overall_size: 26, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: NVIC_SetPriority/3:
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
  Node: NVIC_DisableIRQ/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: NVIC_EnableIRQ/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: NVIC_SetPriorityGrouping/0:
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

NVIC_SetPriority/3 (NVIC_SetPriority) @06ac8620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
NVIC_DisableIRQ/2 (NVIC_DisableIRQ) @06ac8d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
NVIC_EnableIRQ/1 (NVIC_EnableIRQ) @06ac8a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
NVIC_SetPriorityGrouping/0 (NVIC_SetPriorityGrouping) @06ac87e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function NVIC_SetPriorityGrouping (NVIC_SetPriorityGrouping, funcdef_no=0, decl_uid=6181, cgraph_uid=1, symbol_order=0)

Modification phase of node NVIC_SetPriorityGrouping/0
NVIC_SetPriorityGrouping (uint32 PriorityGroup)
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct S32_SCB_Type *)3758153728B].AIRCR;
  _2 = _1 & 4294965503;
  _3 = _2 | PriorityGroup_5(D);
  MEM[(struct S32_SCB_Type *)3758153728B].AIRCR ={v} _3;
  return;

}



;; Function NVIC_EnableIRQ (NVIC_EnableIRQ, funcdef_no=1, decl_uid=6183, cgraph_uid=2, symbol_order=1)

Modification phase of node NVIC_EnableIRQ/1
NVIC_EnableIRQ (uint8 IRQn)
{
  long unsigned int _1;
  unsigned char _2;
  unsigned char _3;
  long unsigned int _4;
  long unsigned int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _2 = IRQn_6(D) & 31;
  _1 = (long unsigned int) _2;
  _3 = IRQn_6(D) >> 5;
  _4 = (long unsigned int) _3;
  _5 = 1 << _1;
  MEM[(struct S32_NVIC_Type *)3758153984B].ISER[_4] ={v} _5;
  return;

}



;; Function NVIC_DisableIRQ (NVIC_DisableIRQ, funcdef_no=2, decl_uid=6185, cgraph_uid=3, symbol_order=2)

Modification phase of node NVIC_DisableIRQ/2
NVIC_DisableIRQ (uint8 IRQn)
{
  long unsigned int _1;
  unsigned char _2;
  unsigned char _3;
  long unsigned int _4;
  long unsigned int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _2 = IRQn_6(D) & 31;
  _1 = (long unsigned int) _2;
  _3 = IRQn_6(D) >> 5;
  _4 = (long unsigned int) _3;
  _5 = 1 << _1;
  MEM[(struct S32_NVIC_Type *)3758153984B].ICER[_4] ={v} _5;
  return;

}



;; Function NVIC_SetPriority (NVIC_SetPriority, funcdef_no=3, decl_uid=6188, cgraph_uid=4, symbol_order=3)

Modification phase of node NVIC_SetPriority/3
NVIC_SetPriority (uint8 IRQn, uint8 priority)
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  unsigned char _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG shift => 4
  # DEBUG BEGIN_STMT
  _1 = (long unsigned int) priority_5(D);
  _2 = _1 << 4;
  _3 = (long unsigned int) IRQn_6(D);
  _4 = (unsigned char) _2;
  MEM[(struct S32_NVIC_Type *)3758153984B].IP[_3] ={v} _4;
  return;

}


