
IPA constant propagation start:
Determining dynamic type for call: Port_Ci_Port_Ip_PinInit (_2);
  Starting walk at: Port_Ci_Port_Ip_PinInit (_2);
  instance pointer: _2  Outer instance pointer: _2 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Port_Ci_Port_Ip_PinInit (_2);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_08/33:
  Jump functions of caller  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_08/32:
  Jump functions of caller  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_07/31:
  Jump functions of caller  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_07/30:
  Jump functions of caller  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_06/29:
  Jump functions of caller  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_06/28:
  Jump functions of caller  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_01/27:
  Jump functions of caller  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_01/26:
  Jump functions of caller  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_05/25:
  Jump functions of caller  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_05/24:
  Jump functions of caller  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_04/23:
  Jump functions of caller  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_04/22:
  Jump functions of caller  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_03/21:
  Jump functions of caller  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_03/20:
  Jump functions of caller  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_02/19:
  Jump functions of caller  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_02/18:
  Jump functions of caller  Port_Ci_Port_Ip_SetGlobalPinControl/17:
  Jump functions of caller  Port_Ci_Port_Ip_ConfigDigitalFilter/16:
  Jump functions of caller  Port_Ci_Port_Ip_DisableDigitalFilter/15:
  Jump functions of caller  Port_Ci_Port_Ip_EnableDigitalFilter/14:
  Jump functions of caller  Port_Ci_Port_Ip_SetMuxModeSel/13:
  Jump functions of caller  Port_Ci_Port_Ip_Init/12:
    callsite  Port_Ci_Port_Ip_Init/12 -> Port_Ci_Port_Ip_PinInit/3 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Port_Ci_Port_Ip_SetDFER/11:
  Jump functions of caller  Port_Ci_Port_Ip_SetPIDR/10:
  Jump functions of caller  Port_Ci_Port_Ip_ClearPDDR/9:
  Jump functions of caller  Port_Ci_Port_Ip_SetPDDR/8:
  Jump functions of caller  Port_Ci_Port_Ip_SetPCOR/7:
  Jump functions of caller  Port_Ci_Port_Ip_SetPSOR/6:
  Jump functions of caller  Port_Ci_Port_Ip_SetPCR/5:
  Jump functions of caller  Port_Ci_Port_Ip_ReadPCR/4:
  Jump functions of caller  Port_Ci_Port_Ip_PinInit/3:

 Propagating constants:

Not considering Port_Ci_Port_Ip_SetGlobalPinControl for cloning; -fipa-cp-clone disabled.
Not considering Port_Ci_Port_Ip_ConfigDigitalFilter for cloning; -fipa-cp-clone disabled.
Not considering Port_Ci_Port_Ip_DisableDigitalFilter for cloning; -fipa-cp-clone disabled.
Not considering Port_Ci_Port_Ip_EnableDigitalFilter for cloning; -fipa-cp-clone disabled.
Not considering Port_Ci_Port_Ip_SetMuxModeSel for cloning; -fipa-cp-clone disabled.
Not considering Port_Ci_Port_Ip_Init for cloning; -fipa-cp-clone disabled.
Not considering Port_Ci_Port_Ip_SetDFER for cloning; -fipa-cp-clone disabled.
Not considering Port_Ci_Port_Ip_SetPIDR for cloning; -fipa-cp-clone disabled.
Not considering Port_Ci_Port_Ip_ClearPDDR for cloning; -fipa-cp-clone disabled.
Not considering Port_Ci_Port_Ip_SetPDDR for cloning; -fipa-cp-clone disabled.
Not considering Port_Ci_Port_Ip_SetPCOR for cloning; -fipa-cp-clone disabled.
Not considering Port_Ci_Port_Ip_SetPSOR for cloning; -fipa-cp-clone disabled.
Not considering Port_Ci_Port_Ip_SetPCR for cloning; -fipa-cp-clone disabled.
Not considering Port_Ci_Port_Ip_ReadPCR for cloning; -fipa-cp-clone disabled.

overall_size: 187, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Port_Ci_Port_Ip_SetGlobalPinControl/17:
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
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [3]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Port_Ci_Port_Ip_ConfigDigitalFilter/16:
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
  Node: Port_Ci_Port_Ip_DisableDigitalFilter/15:
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
  Node: Port_Ci_Port_Ip_EnableDigitalFilter/14:
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
  Node: Port_Ci_Port_Ip_SetMuxModeSel/13:
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
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Port_Ci_Port_Ip_Init/12:
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
  Node: Port_Ci_Port_Ip_SetDFER/11:
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
  Node: Port_Ci_Port_Ip_SetPIDR/10:
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
  Node: Port_Ci_Port_Ip_ClearPDDR/9:
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
  Node: Port_Ci_Port_Ip_SetPDDR/8:
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
  Node: Port_Ci_Port_Ip_SetPCOR/7:
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
  Node: Port_Ci_Port_Ip_SetPSOR/6:
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
  Node: Port_Ci_Port_Ip_SetPCR/5:
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
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Port_Ci_Port_Ip_ReadPCR/4:
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
  Node: Port_Ci_Port_Ip_PinInit/3:
    param [0]: VARIABLE
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

SchM_Exit_Port_PORT_EXCLUSIVE_AREA_08/33 (SchM_Exit_Port_PORT_EXCLUSIVE_AREA_08) @068ed2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ci_Port_Ip_DisableDigitalFilter/15 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Port_PORT_EXCLUSIVE_AREA_08/32 (SchM_Enter_Port_PORT_EXCLUSIVE_AREA_08) @068ed1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ci_Port_Ip_DisableDigitalFilter/15 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Port_PORT_EXCLUSIVE_AREA_07/31 (SchM_Exit_Port_PORT_EXCLUSIVE_AREA_07) @068ed000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ci_Port_Ip_EnableDigitalFilter/14 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Port_PORT_EXCLUSIVE_AREA_07/30 (SchM_Enter_Port_PORT_EXCLUSIVE_AREA_07) @067638c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ci_Port_Ip_EnableDigitalFilter/14 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Port_PORT_EXCLUSIVE_AREA_06/29 (SchM_Exit_Port_PORT_EXCLUSIVE_AREA_06) @06763e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ci_Port_Ip_SetMuxModeSel/13 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Port_PORT_EXCLUSIVE_AREA_06/28 (SchM_Enter_Port_PORT_EXCLUSIVE_AREA_06) @06763d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ci_Port_Ip_SetMuxModeSel/13 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Port_PORT_EXCLUSIVE_AREA_01/27 (SchM_Exit_Port_PORT_EXCLUSIVE_AREA_01) @06763b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ci_Port_Ip_PinInit/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Port_PORT_EXCLUSIVE_AREA_01/26 (SchM_Enter_Port_PORT_EXCLUSIVE_AREA_01) @06763a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ci_Port_Ip_PinInit/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Port_PORT_EXCLUSIVE_AREA_05/25 (SchM_Exit_Port_PORT_EXCLUSIVE_AREA_05) @06763700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ci_Port_Ip_SetDFER/11 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Port_PORT_EXCLUSIVE_AREA_05/24 (SchM_Enter_Port_PORT_EXCLUSIVE_AREA_05) @06763620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ci_Port_Ip_SetDFER/11 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Port_PORT_EXCLUSIVE_AREA_04/23 (SchM_Exit_Port_PORT_EXCLUSIVE_AREA_04) @06763460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ci_Port_Ip_SetPIDR/10 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Port_PORT_EXCLUSIVE_AREA_04/22 (SchM_Enter_Port_PORT_EXCLUSIVE_AREA_04) @06763380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ci_Port_Ip_SetPIDR/10 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Port_PORT_EXCLUSIVE_AREA_03/21 (SchM_Exit_Port_PORT_EXCLUSIVE_AREA_03) @067631c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ci_Port_Ip_ClearPDDR/9 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Port_PORT_EXCLUSIVE_AREA_03/20 (SchM_Enter_Port_PORT_EXCLUSIVE_AREA_03) @067630e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ci_Port_Ip_ClearPDDR/9 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Port_PORT_EXCLUSIVE_AREA_02/19 (SchM_Exit_Port_PORT_EXCLUSIVE_AREA_02) @0675c700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ci_Port_Ip_SetPDDR/8 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Port_PORT_EXCLUSIVE_AREA_02/18 (SchM_Enter_Port_PORT_EXCLUSIVE_AREA_02) @0675c2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ci_Port_Ip_SetPDDR/8 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Port_Ci_Port_Ip_SetGlobalPinControl/17 (Port_Ci_Port_Ip_SetGlobalPinControl) @0675c8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Port_Ci_Port_Ip_ConfigDigitalFilter/16 (Port_Ci_Port_Ip_ConfigDigitalFilter) @0675c620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Port_Ci_Port_Ip_DisableDigitalFilter/15 (Port_Ci_Port_Ip_DisableDigitalFilter) @0675c1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Port_PORT_EXCLUSIVE_AREA_08/33 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_08/32 (1073741824 (estimated locally),1.00 per call) 
Port_Ci_Port_Ip_EnableDigitalFilter/14 (Port_Ci_Port_Ip_EnableDigitalFilter) @067f1e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Port_PORT_EXCLUSIVE_AREA_07/31 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_07/30 (1073741824 (estimated locally),1.00 per call) 
Port_Ci_Port_Ip_SetMuxModeSel/13 (Port_Ci_Port_Ip_SetMuxModeSel) @067f18c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Port_PORT_EXCLUSIVE_AREA_06/29 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_06/28 (1073741824 (estimated locally),1.00 per call) 
Port_Ci_Port_Ip_Init/12 (Port_Ci_Port_Ip_Init) @067f10e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: Port_Ci_Port_Ip_PinInit/3 (955630223 (estimated locally),8.09 per call) 
Port_Ci_Port_Ip_SetDFER/11 (Port_Ci_Port_Ip_SetDFER) @067f1d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Port_PORT_EXCLUSIVE_AREA_05/25 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_05/24 (1073741824 (estimated locally),1.00 per call) 
Port_Ci_Port_Ip_SetPIDR/10 (Port_Ci_Port_Ip_SetPIDR) @067f1a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Port_PORT_EXCLUSIVE_AREA_04/23 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_04/22 (1073741824 (estimated locally),1.00 per call) 
Port_Ci_Port_Ip_ClearPDDR/9 (Port_Ci_Port_Ip_ClearPDDR) @067f17e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Port_PORT_EXCLUSIVE_AREA_03/21 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_03/20 (1073741824 (estimated locally),1.00 per call) 
Port_Ci_Port_Ip_SetPDDR/8 (Port_Ci_Port_Ip_SetPDDR) @067f1540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Port_PORT_EXCLUSIVE_AREA_02/19 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_02/18 (1073741824 (estimated locally),1.00 per call) 
Port_Ci_Port_Ip_SetPCOR/7 (Port_Ci_Port_Ip_SetPCOR) @067f12a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Port_Ci_Port_Ip_SetPSOR/6 (Port_Ci_Port_Ip_SetPSOR) @067f1000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Port_Ci_Port_Ip_SetPCR/5 (Port_Ci_Port_Ip_SetPCR) @067e9c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Port_Ci_Port_Ip_ReadPCR/4 (Port_Ci_Port_Ip_ReadPCR) @067e9e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Port_Ci_Port_Ip_PinInit/3 (Port_Ci_Port_Ip_PinInit) @067e9b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Port_Ci_Port_Ip_Init/12 (955630223 (estimated locally),8.09 per call) 
  Calls: SchM_Exit_Port_PORT_EXCLUSIVE_AREA_01/27 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_01/26 (1073741824 (estimated locally),1.00 per call) 
Port_au32PortCiGpioBaseAddr/2 (Port_au32PortCiGpioBaseAddr) @067ea318
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized
Port_au32PortCiPortBaseAddr/1 (Port_au32PortCiPortBaseAddr) @067ea288
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized

;; Function Port_Ci_Port_Ip_ReadPCR (Port_Ci_Port_Ip_ReadPCR, funcdef_no=2, decl_uid=5599, cgraph_uid=3, symbol_order=4)

Modification phase of node Port_Ci_Port_Ip_ReadPCR/4
Port_Ci_Port_Ip_ReadPCR (const struct PORT_Type * base, uint32 MscrInstance)
{
  uint32 _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 ={v} base_2(D)->PCR[MscrInstance_3(D)];
  return _4;

}



;; Function Port_Ci_Port_Ip_SetPCR (Port_Ci_Port_Ip_SetPCR, funcdef_no=3, decl_uid=5603, cgraph_uid=4, symbol_order=5)

Modification phase of node Port_Ci_Port_Ip_SetPCR/5
Port_Ci_Port_Ip_SetPCR (struct PORT_Type * base, uint32 MscrInstance, uint32 value)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  base_2(D)->PCR[MscrInstance_3(D)] ={v} value_4(D);
  return;

}



;; Function Port_Ci_Port_Ip_SetPSOR (Port_Ci_Port_Ip_SetPSOR, funcdef_no=4, decl_uid=5606, cgraph_uid=5, symbol_order=6)

Modification phase of node Port_Ci_Port_Ip_SetPSOR/6
Port_Ci_Port_Ip_SetPSOR (struct GPIO_Type * base, uint32 Pin)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  base_2(D)->PSOR ={v} Pin_3(D);
  return;

}



;; Function Port_Ci_Port_Ip_SetPCOR (Port_Ci_Port_Ip_SetPCOR, funcdef_no=5, decl_uid=5609, cgraph_uid=6, symbol_order=7)

Modification phase of node Port_Ci_Port_Ip_SetPCOR/7
Port_Ci_Port_Ip_SetPCOR (struct GPIO_Type * base, uint32 Pin)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  base_2(D)->PCOR ={v} Pin_3(D);
  return;

}



;; Function Port_Ci_Port_Ip_SetPDDR (Port_Ci_Port_Ip_SetPDDR, funcdef_no=6, decl_uid=5612, cgraph_uid=7, symbol_order=8)

Modification phase of node Port_Ci_Port_Ip_SetPDDR/8
Port_Ci_Port_Ip_SetPDDR (struct GPIO_Type * base, uint32 Pin)
{
  long unsigned int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_02 ();
  # DEBUG BEGIN_STMT
  _1 ={v} base_5(D)->PDDR;
  _2 = _1 | Pin_6(D);
  base_5(D)->PDDR ={v} _2;
  # DEBUG BEGIN_STMT
  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_02 ();
  return;

}



;; Function Port_Ci_Port_Ip_ClearPDDR (Port_Ci_Port_Ip_ClearPDDR, funcdef_no=7, decl_uid=5615, cgraph_uid=8, symbol_order=9)

Modification phase of node Port_Ci_Port_Ip_ClearPDDR/9
Port_Ci_Port_Ip_ClearPDDR (struct GPIO_Type * base, uint32 Pin)
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_03 ();
  # DEBUG BEGIN_STMT
  _1 ={v} base_6(D)->PDDR;
  _2 = ~Pin_7(D);
  _3 = _1 & _2;
  base_6(D)->PDDR ={v} _3;
  # DEBUG BEGIN_STMT
  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_03 ();
  return;

}



;; Function Port_Ci_Port_Ip_SetPIDR (Port_Ci_Port_Ip_SetPIDR, funcdef_no=8, decl_uid=5618, cgraph_uid=9, symbol_order=10)

Modification phase of node Port_Ci_Port_Ip_SetPIDR/10
Port_Ci_Port_Ip_SetPIDR (struct GPIO_Type * base, uint32 Pin)
{
  long unsigned int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_04 ();
  # DEBUG BEGIN_STMT
  _1 ={v} base_5(D)->PIDR;
  _2 = _1 | Pin_6(D);
  base_5(D)->PIDR ={v} _2;
  # DEBUG BEGIN_STMT
  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_04 ();
  return;

}



;; Function Port_Ci_Port_Ip_SetDFER (Port_Ci_Port_Ip_SetDFER, funcdef_no=9, decl_uid=5621, cgraph_uid=10, symbol_order=11)

Modification phase of node Port_Ci_Port_Ip_SetDFER/11
Port_Ci_Port_Ip_SetDFER (struct PORT_Type * base, uint32 pinMask)
{
  long unsigned int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_05 ();
  # DEBUG BEGIN_STMT
  _1 ={v} base_5(D)->DFER;
  _2 = _1 | pinMask_6(D);
  base_5(D)->DFER ={v} _2;
  # DEBUG BEGIN_STMT
  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_05 ();
  return;

}



;; Function Port_Ci_Port_Ip_Init (Port_Ci_Port_Ip_Init, funcdef_no=10, decl_uid=5624, cgraph_uid=11, symbol_order=12)

Modification phase of node Port_Ci_Port_Ip_Init/12
Port_Ci_Port_Ip_Init (uint32 pinCount, const struct Port_Ci_Port_Ip_PinSettingsConfig * config)
{
  uint32 i;
  long unsigned int _1;
  const struct Port_Ci_Port_Ip_PinSettingsConfig * _2;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _1 = i_3 * 40;
  _2 = config_7(D) + _1;
  Port_Ci_Port_Ip_PinInit (_2);
  # DEBUG BEGIN_STMT
  i_9 = i_3 + 1;
  # DEBUG i => i_9

  <bb 4> [local count: 1073741824]:
  # i_3 = PHI <0(2), i_9(3)>
  # DEBUG i => i_3
  # DEBUG BEGIN_STMT
  if (i_3 < pinCount_6(D))
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Port_Ci_Port_Ip_SetMuxModeSel (Port_Ci_Port_Ip_SetMuxModeSel, funcdef_no=11, decl_uid=5628, cgraph_uid=12, symbol_order=13)

Modification phase of node Port_Ci_Port_Ip_SetMuxModeSel/13
Port_Ci_Port_Ip_SetMuxModeSel (struct PORT_Type * const base, uint32 pin, Port_Ci_Port_Ip_PortMux mux)
{
  uint32 regValue;
  long unsigned int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_06 ();
  # DEBUG BEGIN_STMT
  regValue_7 ={v} base_5(D)->PCR[pin_6(D)];
  # DEBUG regValue => regValue_7
  # DEBUG BEGIN_STMT
  regValue_8 = regValue_7 & 4294965503;
  # DEBUG regValue => regValue_8
  # DEBUG BEGIN_STMT
  _1 = mux_9(D) << 8;
  _2 = _1 & 1792;
  regValue_10 = _2 | regValue_8;
  # DEBUG regValue => regValue_10
  # DEBUG BEGIN_STMT
  base_5(D)->PCR[pin_6(D)] ={v} regValue_10;
  # DEBUG BEGIN_STMT
  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_06 ();
  return;

}



;; Function Port_Ci_Port_Ip_EnableDigitalFilter (Port_Ci_Port_Ip_EnableDigitalFilter, funcdef_no=12, decl_uid=5631, cgraph_uid=13, symbol_order=14)

Modification phase of node Port_Ci_Port_Ip_EnableDigitalFilter/14
Port_Ci_Port_Ip_EnableDigitalFilter (struct PORT_Type * const base, uint32 pin)
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_07 ();
  # DEBUG BEGIN_STMT
  _1 ={v} base_6(D)->DFER;
  _2 = 1 << pin_7(D);
  _3 = _1 | _2;
  base_6(D)->DFER ={v} _3;
  # DEBUG BEGIN_STMT
  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_07 ();
  return;

}



;; Function Port_Ci_Port_Ip_DisableDigitalFilter (Port_Ci_Port_Ip_DisableDigitalFilter, funcdef_no=13, decl_uid=5634, cgraph_uid=14, symbol_order=15)

Modification phase of node Port_Ci_Port_Ip_DisableDigitalFilter/15
Port_Ci_Port_Ip_DisableDigitalFilter (struct PORT_Type * const base, uint32 pin)
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_08 ();
  # DEBUG BEGIN_STMT
  _1 ={v} base_7(D)->DFER;
  _2 = 1 << pin_8(D);
  _3 = ~_2;
  _4 = _1 & _3;
  base_7(D)->DFER ={v} _4;
  # DEBUG BEGIN_STMT
  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_08 ();
  return;

}



;; Function Port_Ci_Port_Ip_ConfigDigitalFilter (Port_Ci_Port_Ip_ConfigDigitalFilter, funcdef_no=14, decl_uid=5637, cgraph_uid=15, symbol_order=16)

Modification phase of node Port_Ci_Port_Ip_ConfigDigitalFilter/16
Port_Ci_Port_Ip_ConfigDigitalFilter (struct PORT_Type * const base, const struct Port_Ci_Port_Ip_DigitalFilterConfigType * config)
{
  unsigned char _1;
  long unsigned int _2;
  unsigned char _3;
  long unsigned int _4;
  unsigned char _10;
  unsigned char _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = config_6(D)->u8Clock;
  _10 = _1 & 1;
  _2 = (long unsigned int) _10;
  base_7(D)->DFCR ={v} _2;
  # DEBUG BEGIN_STMT
  _3 = config_6(D)->u8Width;
  _11 = _3 & 31;
  _4 = (long unsigned int) _11;
  base_7(D)->DFWR ={v} _4;
  return;

}



;; Function Port_Ci_Port_Ip_SetGlobalPinControl (Port_Ci_Port_Ip_SetGlobalPinControl, funcdef_no=15, decl_uid=5642, cgraph_uid=16, symbol_order=17)

Modification phase of node Port_Ci_Port_Ip_SetGlobalPinControl/17
Port_Ci_Port_Ip_SetGlobalPinControl (struct PORT_Type * const base, uint16 pins, uint16 value, Port_Ci_Port_Ip_PortGlobalControlPins halfPort)
{
  uint16 mask;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG mask => 0
  # DEBUG BEGIN_STMT
  # DEBUG mask => 1
  # DEBUG BEGIN_STMT
  # DEBUG mask => 3
  # DEBUG BEGIN_STMT
  # DEBUG mask => 19
  # DEBUG BEGIN_STMT
  # DEBUG mask => 83
  # DEBUG BEGIN_STMT
  # DEBUG mask => 1875
  # DEBUG BEGIN_STMT
  # DEBUG mask => 34643
  # DEBUG BEGIN_STMT
  mask_11 = value_10(D) & 34643;
  # DEBUG mask => mask_11
  # DEBUG BEGIN_STMT
  switch (halfPort_12(D)) <default: <L4> [33.33%], case 0: <L0> [33.33%], case 1: <L1> [33.33%]>

  <bb 3> [local count: 357878150]:
<L0>:
  # DEBUG BEGIN_STMT
  _1 = (long unsigned int) pins_14(D);
  _2 = _1 << 16;
  _3 = (long unsigned int) mask_11;
  _4 = _2 | _3;
  base_15(D)->GPCLR ={v} _4;
  # DEBUG BEGIN_STMT
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 357878150]:
<L1>:
  # DEBUG BEGIN_STMT
  _5 = (long unsigned int) pins_14(D);
  _6 = _5 << 16;
  _7 = (long unsigned int) mask_11;
  _8 = _6 | _7;
  base_15(D)->GPCHR ={v} _8;
  # DEBUG BEGIN_STMT

  <bb 5> [local count: 1073634451]:
<L4>:
  return;

}


