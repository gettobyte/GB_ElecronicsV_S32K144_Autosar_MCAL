
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Power_Ip_PMC_PowerInit/0:

 Propagating constants:

Not considering Power_Ip_PMC_PowerInit for cloning; -fipa-cp-clone disabled.

overall_size: 18, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Power_Ip_PMC_PowerInit/0:
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

Power_Ip_PMC_PowerInit/0 (Power_Ip_PMC_PowerInit) @06791a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function Power_Ip_PMC_PowerInit (Power_Ip_PMC_PowerInit, funcdef_no=0, decl_uid=5638, cgraph_uid=1, symbol_order=0)

Modification phase of node Power_Ip_PMC_PowerInit/0
Power_Ip_PMC_PowerInit (const struct Power_Ip_PMC_ConfigType * pConfigPtr)
{
  uint8 u8Tmp;
  unsigned char _1;
  unsigned char _2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  u8Tmp_5 ={v} MEM[(struct PMC_Type *)1074253824B].LVDSC1;
  # DEBUG u8Tmp => u8Tmp_5
  # DEBUG BEGIN_STMT
  u8Tmp_6 = u8Tmp_5 & 15;
  # DEBUG u8Tmp => u8Tmp_6
  # DEBUG BEGIN_STMT
  _1 = pConfigPtr_7(D)->u8Lvdsc1;
  u8Tmp_8 = _1 | u8Tmp_6;
  # DEBUG u8Tmp => u8Tmp_8
  # DEBUG BEGIN_STMT
  MEM[(struct PMC_Type *)1074253824B].LVDSC1 ={v} u8Tmp_8;
  # DEBUG BEGIN_STMT
  u8Tmp_10 ={v} MEM[(struct PMC_Type *)1074253824B].LVDSC2;
  # DEBUG u8Tmp => u8Tmp_10
  # DEBUG BEGIN_STMT
  u8Tmp_11 = u8Tmp_10 & 31;
  # DEBUG u8Tmp => u8Tmp_11
  # DEBUG BEGIN_STMT
  _2 = pConfigPtr_7(D)->u8Lvdsc2;
  u8Tmp_12 = _2 | u8Tmp_11;
  # DEBUG u8Tmp => u8Tmp_12
  # DEBUG BEGIN_STMT
  MEM[(struct PMC_Type *)1074253824B].LVDSC2 ={v} u8Tmp_12;
  # DEBUG BEGIN_STMT
  u8Tmp_14 ={v} MEM[(struct PMC_Type *)1074253824B].REGSC;
  # DEBUG u8Tmp => u8Tmp_14
  # DEBUG BEGIN_STMT
  u8Tmp_15 = u8Tmp_14 & 56;
  # DEBUG u8Tmp => u8Tmp_15
  # DEBUG BEGIN_STMT
  _3 = pConfigPtr_7(D)->u8Regsc;
  u8Tmp_16 = _3 | u8Tmp_15;
  # DEBUG u8Tmp => u8Tmp_16
  # DEBUG BEGIN_STMT
  MEM[(struct PMC_Type *)1074253824B].REGSC ={v} u8Tmp_16;
  return;

}


