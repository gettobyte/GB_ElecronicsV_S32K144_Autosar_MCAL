
IPA constant propagation start:
Determining dynamic type for call: muxing_8 = Port_Ci_Port_Ip_ConfigureInterleave (base_5(D), pin_6(D), mux_3(D));
  Starting walk at: muxing_8 = Port_Ci_Port_Ip_ConfigureInterleave (base_5(D), pin_6(D), mux_3(D));
  instance pointer: base_5(D)  Outer instance pointer: base_5(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Port_Ci_Port_Ip_PinInit (_2);
  Starting walk at: Port_Ci_Port_Ip_PinInit (_2);
  instance pointer: _2  Outer instance pointer: _2 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Port_Ci_Port_Ip_PinInit (_2);
Determining dynamic type for call: retMuxing_68 = Port_Ci_Port_Ip_ConfigureInterleave (_10, _11, muxing_66);
  Starting walk at: retMuxing_68 = Port_Ci_Port_Ip_ConfigureInterleave (_10, _11, muxing_66);
  instance pointer: _10  Outer instance pointer: _10 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: retMuxing_3 = Port_Ci_Port_Ip_ConfigureInterleave.part.0 (base_7(D), pin_8(D));
  Starting walk at: retMuxing_3 = Port_Ci_Port_Ip_ConfigureInterleave.part.0 (base_7(D), pin_8(D));
  instance pointer: base_7(D)  Outer instance pointer: base_7(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Port_Ci_Port_Ip_ConfigureInterleave.part.0/30:
    callsite  Port_Ci_Port_Ip_ConfigureInterleave.part.0/30 -> Port_Ci_Port_Ip_GetAdcInterleaveVal/3 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xf
         VR  [0, 15]
  Jump functions of caller  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_08/29:
  Jump functions of caller  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_08/28:
  Jump functions of caller  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_07/27:
  Jump functions of caller  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_07/26:
  Jump functions of caller  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_06/25:
  Jump functions of caller  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_06/24:
  Jump functions of caller  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_04/23:
  Jump functions of caller  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_04/22:
  Jump functions of caller  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_03/21:
  Jump functions of caller  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_03/20:
  Jump functions of caller  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_02/19:
  Jump functions of caller  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_02/18:
  Jump functions of caller  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_01/17:
  Jump functions of caller  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_01/16:
  Jump functions of caller  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_00/15:
  Jump functions of caller  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_00/14:
  Jump functions of caller  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_05/13:
  Jump functions of caller  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_05/12:
  Jump functions of caller  Port_Ci_Port_Ip_SetGlobalPinControl/11:
  Jump functions of caller  Port_Ci_Port_Ip_ConfigDigitalFilter/10:
  Jump functions of caller  Port_Ci_Port_Ip_DisableDigitalFilter/9:
  Jump functions of caller  Port_Ci_Port_Ip_EnableDigitalFilter/8:
  Jump functions of caller  Port_Ci_Port_Ip_SetMuxModeSel/7:
    callsite  Port_Ci_Port_Ip_SetMuxModeSel/7 -> Port_Ci_Port_Ip_ConfigureInterleave/4 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Port_Ci_Port_Ip_Init/6:
    callsite  Port_Ci_Port_Ip_Init/6 -> Port_Ci_Port_Ip_PinInit/5 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Port_Ci_Port_Ip_PinInit/5:
    callsite  Port_Ci_Port_Ip_PinInit/5 -> Port_Ci_Port_Ip_ConfigureInterleave/4 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Port_Ci_Port_Ip_ConfigureInterleave/4:
    callsite  Port_Ci_Port_Ip_ConfigureInterleave/4 -> Port_Ci_Port_Ip_ConfigureInterleave.part.0/30 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Port_Ci_Port_Ip_GetAdcInterleaveVal/3:

 Propagating constants:

Not considering Port_Ci_Port_Ip_SetGlobalPinControl for cloning; -fipa-cp-clone disabled.
Not considering Port_Ci_Port_Ip_ConfigDigitalFilter for cloning; -fipa-cp-clone disabled.
Not considering Port_Ci_Port_Ip_DisableDigitalFilter for cloning; -fipa-cp-clone disabled.
Not considering Port_Ci_Port_Ip_EnableDigitalFilter for cloning; -fipa-cp-clone disabled.
Not considering Port_Ci_Port_Ip_SetMuxModeSel for cloning; -fipa-cp-clone disabled.
Not considering Port_Ci_Port_Ip_Init for cloning; -fipa-cp-clone disabled.
Not considering Port_Ci_Port_Ip_ConfigureInterleave for cloning; -fipa-cp-clone disabled.

overall_size: 241, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Port_Ci_Port_Ip_ConfigureInterleave.part.0/30:
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
  Node: Port_Ci_Port_Ip_SetGlobalPinControl/11:
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
  Node: Port_Ci_Port_Ip_ConfigDigitalFilter/10:
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
  Node: Port_Ci_Port_Ip_DisableDigitalFilter/9:
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
  Node: Port_Ci_Port_Ip_EnableDigitalFilter/8:
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
  Node: Port_Ci_Port_Ip_SetMuxModeSel/7:
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
  Node: Port_Ci_Port_Ip_Init/6:
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
  Node: Port_Ci_Port_Ip_PinInit/5:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Port_Ci_Port_Ip_ConfigureInterleave/4:
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
  Node: Port_Ci_Port_Ip_GetAdcInterleaveVal/3:
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
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xf
         const uint32 [0, 15]
        AGGS VARIABLE

IPA decision stage:

Propagated bits info for function Port_Ci_Port_Ip_GetAdcInterleaveVal/3:
 param 2: value = 0x0, mask = 0xf

IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Port_Ci_Port_Ip_ConfigureInterleave.part.0/30 (Port_Ci_Port_Ip_ConfigureInterleave.part.0) @05b750e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Port_Ci_Port_Ip_ConfigureInterleave/4 (365072224 (estimated locally),0.34 per call) 
  Calls: Port_Ci_Port_Ip_GetAdcInterleaveVal/3 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_05/12 (524845004 (estimated locally),0.49 per call) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_05/13 (524845004 (estimated locally),0.49 per call) 
SchM_Exit_Port_PORT_EXCLUSIVE_AREA_08/29 (SchM_Exit_Port_PORT_EXCLUSIVE_AREA_08) @05d562a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ci_Port_Ip_DisableDigitalFilter/9 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Port_PORT_EXCLUSIVE_AREA_08/28 (SchM_Enter_Port_PORT_EXCLUSIVE_AREA_08) @05d561c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ci_Port_Ip_DisableDigitalFilter/9 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Port_PORT_EXCLUSIVE_AREA_07/27 (SchM_Exit_Port_PORT_EXCLUSIVE_AREA_07) @05d56000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ci_Port_Ip_EnableDigitalFilter/8 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Port_PORT_EXCLUSIVE_AREA_07/26 (SchM_Enter_Port_PORT_EXCLUSIVE_AREA_07) @05d4b1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ci_Port_Ip_EnableDigitalFilter/8 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Port_PORT_EXCLUSIVE_AREA_06/25 (SchM_Exit_Port_PORT_EXCLUSIVE_AREA_06) @05d4be00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ci_Port_Ip_SetMuxModeSel/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Port_PORT_EXCLUSIVE_AREA_06/24 (SchM_Enter_Port_PORT_EXCLUSIVE_AREA_06) @05d4bd20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ci_Port_Ip_SetMuxModeSel/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Port_PORT_EXCLUSIVE_AREA_04/23 (SchM_Exit_Port_PORT_EXCLUSIVE_AREA_04) @05d4bb60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ci_Port_Ip_PinInit/5 (178447301 (estimated locally),0.17 per call) 
  Calls: 
SchM_Enter_Port_PORT_EXCLUSIVE_AREA_04/22 (SchM_Enter_Port_PORT_EXCLUSIVE_AREA_04) @05d4ba80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ci_Port_Ip_PinInit/5 (178447301 (estimated locally),0.17 per call) 
  Calls: 
SchM_Exit_Port_PORT_EXCLUSIVE_AREA_03/21 (SchM_Exit_Port_PORT_EXCLUSIVE_AREA_03) @05d4b9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ci_Port_Ip_PinInit/5 (178447301 (estimated locally),0.17 per call) Port_Ci_Port_Ip_PinInit/5 (186624919 (estimated locally),0.17 per call) 
  Calls: 
SchM_Enter_Port_PORT_EXCLUSIVE_AREA_03/20 (SchM_Enter_Port_PORT_EXCLUSIVE_AREA_03) @05d4b8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ci_Port_Ip_PinInit/5 (178447301 (estimated locally),0.17 per call) Port_Ci_Port_Ip_PinInit/5 (186624919 (estimated locally),0.17 per call) 
  Calls: 
SchM_Exit_Port_PORT_EXCLUSIVE_AREA_02/19 (SchM_Exit_Port_PORT_EXCLUSIVE_AREA_02) @05d4b7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ci_Port_Ip_PinInit/5 (49121172 (estimated locally),0.05 per call) 
  Calls: 
SchM_Enter_Port_PORT_EXCLUSIVE_AREA_02/18 (SchM_Enter_Port_PORT_EXCLUSIVE_AREA_02) @05d4b700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ci_Port_Ip_PinInit/5 (49121172 (estimated locally),0.05 per call) 
  Calls: 
SchM_Exit_Port_PORT_EXCLUSIVE_AREA_01/17 (SchM_Exit_Port_PORT_EXCLUSIVE_AREA_01) @05d4b620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ci_Port_Ip_PinInit/5 (37772884 (estimated locally),0.04 per call) 
  Calls: 
SchM_Enter_Port_PORT_EXCLUSIVE_AREA_01/16 (SchM_Enter_Port_PORT_EXCLUSIVE_AREA_01) @05d4b540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ci_Port_Ip_PinInit/5 (37772884 (estimated locally),0.04 per call) 
  Calls: 
SchM_Exit_Port_PORT_EXCLUSIVE_AREA_00/15 (SchM_Exit_Port_PORT_EXCLUSIVE_AREA_00) @05d4b460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ci_Port_Ip_PinInit/5 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Port_PORT_EXCLUSIVE_AREA_00/14 (SchM_Enter_Port_PORT_EXCLUSIVE_AREA_00) @05d4b380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ci_Port_Ip_PinInit/5 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Port_PORT_EXCLUSIVE_AREA_05/13 (SchM_Exit_Port_PORT_EXCLUSIVE_AREA_05) @05cbf620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ci_Port_Ip_ConfigureInterleave.part.0/30 (524845004 (estimated locally),0.49 per call) 
  Calls: 
SchM_Enter_Port_PORT_EXCLUSIVE_AREA_05/12 (SchM_Enter_Port_PORT_EXCLUSIVE_AREA_05) @05cbf380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ci_Port_Ip_ConfigureInterleave.part.0/30 (524845004 (estimated locally),0.49 per call) 
  Calls: 
Port_Ci_Port_Ip_SetGlobalPinControl/11 (Port_Ci_Port_Ip_SetGlobalPinControl) @05cbfc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Port_Ci_Port_Ip_ConfigDigitalFilter/10 (Port_Ci_Port_Ip_ConfigDigitalFilter) @05cbf9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Port_Ci_Port_Ip_DisableDigitalFilter/9 (Port_Ci_Port_Ip_DisableDigitalFilter) @05cbf540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Port_PORT_EXCLUSIVE_AREA_08/29 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_08/28 (1073741824 (estimated locally),1.00 per call) 
Port_Ci_Port_Ip_EnableDigitalFilter/8 (Port_Ci_Port_Ip_EnableDigitalFilter) @05cbf2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Port_PORT_EXCLUSIVE_AREA_07/27 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_07/26 (1073741824 (estimated locally),1.00 per call) 
Port_Ci_Port_Ip_SetMuxModeSel/7 (Port_Ci_Port_Ip_SetMuxModeSel) @05cbf000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Port_PORT_EXCLUSIVE_AREA_06/25 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_06/24 (1073741824 (estimated locally),1.00 per call) Port_Ci_Port_Ip_ConfigureInterleave/4 (1073741824 (estimated locally),1.00 per call) 
Port_Ci_Port_Ip_Init/6 (Port_Ci_Port_Ip_Init) @05d23380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: Port_Ci_Port_Ip_PinInit/5 (955630223 (estimated locally),8.09 per call) 
Port_Ci_Port_Ip_PinInit/5 (Port_Ci_Port_Ip_PinInit) @05d23d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Port_Ci_Port_Ip_Init/6 (955630223 (estimated locally),8.09 per call) 
  Calls: SchM_Exit_Port_PORT_EXCLUSIVE_AREA_04/23 (178447301 (estimated locally),0.17 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_04/22 (178447301 (estimated locally),0.17 per call) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_03/21 (178447301 (estimated locally),0.17 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_03/20 (178447301 (estimated locally),0.17 per call) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_03/21 (186624919 (estimated locally),0.17 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_03/20 (186624919 (estimated locally),0.17 per call) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_02/19 (49121172 (estimated locally),0.05 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_02/18 (49121172 (estimated locally),0.05 per call) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_01/17 (37772884 (estimated locally),0.04 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_01/16 (37772884 (estimated locally),0.04 per call) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_00/15 (1073741823 (estimated locally),1.00 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_00/14 (1073741823 (estimated locally),1.00 per call) Port_Ci_Port_Ip_ConfigureInterleave/4 (1073741823 (estimated locally),1.00 per call) 
Port_Ci_Port_Ip_ConfigureInterleave/4 (Port_Ci_Port_Ip_ConfigureInterleave) @05d23620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Port_Ci_Port_Ip_SetMuxModeSel/7 (1073741824 (estimated locally),1.00 per call) Port_Ci_Port_Ip_PinInit/5 (1073741823 (estimated locally),1.00 per call) 
  Calls: Port_Ci_Port_Ip_ConfigureInterleave.part.0/30 (365072224 (estimated locally),0.34 per call) 
Port_Ci_Port_Ip_GetAdcInterleaveVal/3 (Port_Ci_Port_Ip_GetAdcInterleaveVal) @05d232a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073678503 (estimated locally) body local optimize_size
  Called by: Port_Ci_Port_Ip_ConfigureInterleave.part.0/30 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Port_au32PortCiGpioBaseAddr/2 (Port_au32PortCiGpioBaseAddr) @05d1bf30
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized
Port_au32PortCiPortBaseAddr/1 (Port_au32PortCiPortBaseAddr) @05d1bea0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized

;; Function Port_Ci_Port_Ip_ConfigureInterleave (Port_Ci_Port_Ip_ConfigureInterleave, funcdef_no=2, decl_uid=5787, cgraph_uid=3, symbol_order=4)

Modification phase of node Port_Ci_Port_Ip_ConfigureInterleave/4
Port_Ci_Port_Ip_ConfigureInterleave (struct PORT_Type * const base, uint32 pin, Port_Ci_Port_Ip_PortMux muxing)
{
  Port_Ci_Port_Ip_PortMux retMuxing;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG retMuxing => muxing_4(D)
  # DEBUG BEGIN_STMT
  if (muxing_4(D) == 8)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072224]:
  # DEBUG D#1 => muxing_4(D)
  retMuxing_3 = Port_Ci_Port_Ip_ConfigureInterleave.part.0 (base_7(D), pin_8(D));

  <bb 4> [local count: 1073741824]:
  # retMuxing_2 = PHI <muxing_4(D)(2), retMuxing_3(3)>
  # DEBUG retMuxing => retMuxing_2
  # DEBUG BEGIN_STMT
  return retMuxing_2;

}



;; Function Port_Ci_Port_Ip_Init (Port_Ci_Port_Ip_Init, funcdef_no=4, decl_uid=5649, cgraph_uid=5, symbol_order=6)

Modification phase of node Port_Ci_Port_Ip_Init/6
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



;; Function Port_Ci_Port_Ip_SetMuxModeSel (Port_Ci_Port_Ip_SetMuxModeSel, funcdef_no=5, decl_uid=5653, cgraph_uid=6, symbol_order=7)

Modification phase of node Port_Ci_Port_Ip_SetMuxModeSel/7
Port_Ci_Port_Ip_SetMuxModeSel (struct PORT_Type * const base, uint32 pin, Port_Ci_Port_Ip_PortMux mux)
{
  Port_Ci_Port_Ip_PortMux muxing;
  uint32 regValue;
  long unsigned int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG muxing => mux_3(D)
  # DEBUG BEGIN_STMT
  muxing_8 = Port_Ci_Port_Ip_ConfigureInterleave (base_5(D), pin_6(D), mux_3(D));
  # DEBUG muxing => muxing_8
  # DEBUG BEGIN_STMT
  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_06 ();
  # DEBUG BEGIN_STMT
  regValue_10 ={v} base_5(D)->PCR[pin_6(D)];
  # DEBUG regValue => regValue_10
  # DEBUG BEGIN_STMT
  regValue_11 = regValue_10 & 4294965503;
  # DEBUG regValue => regValue_11
  # DEBUG BEGIN_STMT
  _1 = muxing_8 << 8;
  _2 = _1 & 1792;
  regValue_12 = _2 | regValue_11;
  # DEBUG regValue => regValue_12
  # DEBUG BEGIN_STMT
  base_5(D)->PCR[pin_6(D)] ={v} regValue_12;
  # DEBUG BEGIN_STMT
  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_06 ();
  return;

}



;; Function Port_Ci_Port_Ip_EnableDigitalFilter (Port_Ci_Port_Ip_EnableDigitalFilter, funcdef_no=6, decl_uid=5656, cgraph_uid=7, symbol_order=8)

Modification phase of node Port_Ci_Port_Ip_EnableDigitalFilter/8
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



;; Function Port_Ci_Port_Ip_DisableDigitalFilter (Port_Ci_Port_Ip_DisableDigitalFilter, funcdef_no=7, decl_uid=5659, cgraph_uid=8, symbol_order=9)

Modification phase of node Port_Ci_Port_Ip_DisableDigitalFilter/9
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



;; Function Port_Ci_Port_Ip_ConfigDigitalFilter (Port_Ci_Port_Ip_ConfigDigitalFilter, funcdef_no=8, decl_uid=5662, cgraph_uid=9, symbol_order=10)

Modification phase of node Port_Ci_Port_Ip_ConfigDigitalFilter/10
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



;; Function Port_Ci_Port_Ip_SetGlobalPinControl (Port_Ci_Port_Ip_SetGlobalPinControl, funcdef_no=9, decl_uid=5667, cgraph_uid=10, symbol_order=11)

Modification phase of node Port_Ci_Port_Ip_SetGlobalPinControl/11
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


