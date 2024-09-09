
IPA constant propagation start:
Determining dynamic type for call: Adc_DoCalibration_SetParams (Base_17, &CalClockConfig, 0);
  Starting walk at: Adc_DoCalibration_SetParams (Base_17, &CalClockConfig, 0);
  instance pointer: Base_17  Outer instance pointer: Base_17 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_1 = OsIf_GetCounter (0);
  Function call may change dynamic type:TimeoutTicks_19 = OsIf_MicrosToTicks (10000, 0);
Determining dynamic type for call: Adc_DoCalibration_SetParams (Base_17, &CalClockConfig, 0);
  Starting walk at: Adc_DoCalibration_SetParams (Base_17, &CalClockConfig, 0);
  instance pointer: &CalClockConfig  Outer instance pointer: CalClockConfig offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_1 = OsIf_GetCounter (0);
  Function call may change dynamic type:TimeoutTicks_19 = OsIf_MicrosToTicks (10000, 0);
Determining dynamic type for call: Adc_DoCalibration_SetParams (Base_17, &PreClockConfig, ReturnValue_29);
  Starting walk at: Adc_DoCalibration_SetParams (Base_17, &PreClockConfig, ReturnValue_29);
  instance pointer: Base_17  Outer instance pointer: Base_17 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_29 ();
  Function call may change dynamic type:SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_29 ();
  Function call may change dynamic type:Adc_DoCalibration_SetParams (Base_17, &CalClockConfig, 0);
  Function call may change dynamic type:_1 = OsIf_GetCounter (0);
  Function call may change dynamic type:TimeoutTicks_19 = OsIf_MicrosToTicks (10000, 0);
  Function call may change dynamic type:_53 = OsIf_GetElapsed (&CurrentTicks, 0);
Determining dynamic type for call: Adc_DoCalibration_SetParams (Base_17, &PreClockConfig, ReturnValue_29);
  Starting walk at: Adc_DoCalibration_SetParams (Base_17, &PreClockConfig, ReturnValue_29);
  instance pointer: &PreClockConfig  Outer instance pointer: PreClockConfig offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_29 ();
  Function call may change dynamic type:SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_29 ();
  Function call may change dynamic type:Adc_DoCalibration_SetParams (Base_17, &CalClockConfig, 0);
  Function call may change dynamic type:_1 = OsIf_GetCounter (0);
  Function call may change dynamic type:TimeoutTicks_19 = OsIf_MicrosToTicks (10000, 0);
  Function call may change dynamic type:_53 = OsIf_GetElapsed (&CurrentTicks, 0);
Determining dynamic type for call: Adc_HwAcc_SetChannel (Base_3, 0, InputChannel_5(D), InterruptEnable_6(D));
  Starting walk at: Adc_HwAcc_SetChannel (Base_3, 0, InputChannel_5(D), InterruptEnable_6(D));
  instance pointer: Base_3  Outer instance pointer: Base_3 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_18 ();
Determining dynamic type for call: Adc_HwAcc_SetChannel (Base_8, _1, InputChanDemapped_10, _2);
  Starting walk at: Adc_HwAcc_SetChannel (Base_8, _1, InputChanDemapped_10, _2);
  instance pointer: Base_8  Outer instance pointer: Base_8 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_21 ();
Determining dynamic type for call: Adc_HwAcc_SetClock (Base_8, _1, _2);
  Starting walk at: Adc_HwAcc_SetClock (Base_8, _1, _2);
  instance pointer: Base_8  Outer instance pointer: Base_8 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_11 ();
Determining dynamic type for call: Adc_HwAcc_SetSampleTime (Base_8, _3);
  Starting walk at: Adc_HwAcc_SetSampleTime (Base_8, _3);
  instance pointer: Base_8  Outer instance pointer: Base_8 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_14 ();
  Function call may change dynamic type:SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_11 ();
  Function call may change dynamic type:Adc_HwAcc_SetClock (Base_8, _1, _2);
  Function call may change dynamic type:SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_11 ();
Determining dynamic type for call: Adc_HwAcc_SetAveraging (Base_8, _4, _5);
  Starting walk at: Adc_HwAcc_SetAveraging (Base_8, _4, _5);
  instance pointer: Base_8  Outer instance pointer: Base_8 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_28 ();
  Function call may change dynamic type:SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_14 ();
  Function call may change dynamic type:Adc_HwAcc_SetSampleTime (Base_8, _3);
  Function call may change dynamic type:SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_14 ();
  Function call may change dynamic type:SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_11 ();
  Function call may change dynamic type:Adc_HwAcc_SetClock (Base_8, _1, _2);
  Function call may change dynamic type:SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_11 ();
Determining dynamic type for call: Adc_HwAcc_SetTriggerMode (Base_3, TriggerMode_5(D));
  Starting walk at: Adc_HwAcc_SetTriggerMode (Base_3, TriggerMode_5(D));
  instance pointer: Base_3  Outer instance pointer: Base_3 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_23 ();
Determining dynamic type for call: Adc_HwAcc_SetSampleTime (Base_3, SampleTime_5(D));
  Starting walk at: Adc_HwAcc_SetSampleTime (Base_3, SampleTime_5(D));
  instance pointer: Base_3  Outer instance pointer: Base_3 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_16 ();
Determining dynamic type for call: Adc_HwAcc_SetAveraging (Base_3, AvgEn_5(D), AvgSel_6(D));
  Starting walk at: Adc_HwAcc_SetAveraging (Base_3, AvgEn_5(D), AvgSel_6(D));
  instance pointer: Base_3  Outer instance pointer: Base_3 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_27 ();
Determining dynamic type for call: Adc_Ip_Init (Instance_28(D), &DefaultConfig);
  Starting walk at: Adc_Ip_Init (Instance_28(D), &DefaultConfig);
  instance pointer: &DefaultConfig  Outer instance pointer: DefaultConfig offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Adc_HwAcc_SetClock (Base_46, _1, _2);
  Starting walk at: Adc_HwAcc_SetClock (Base_46, _1, _2);
  instance pointer: Base_46  Outer instance pointer: Base_46 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Adc_HwAcc_SetSampleTime (Base_46, _3);
  Starting walk at: Adc_HwAcc_SetSampleTime (Base_46, _3);
  instance pointer: Base_46  Outer instance pointer: Base_46 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Adc_HwAcc_SetClock (Base_46, _1, _2);
Determining dynamic type for call: Adc_HwAcc_SetAveraging (Base_46, _4, _5);
  Starting walk at: Adc_HwAcc_SetAveraging (Base_46, _4, _5);
  instance pointer: Base_46  Outer instance pointer: Base_46 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Adc_HwAcc_SetSampleTime (Base_46, _3);
  Function call may change dynamic type:Adc_HwAcc_SetClock (Base_46, _1, _2);
Determining dynamic type for call: Adc_Ip_ConfigChannel (Instance_45(D), _31);
  Starting walk at: Adc_Ip_ConfigChannel (Instance_45(D), _31);
  instance pointer: _31  Outer instance pointer: _31 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Adc_Ip_ConfigChannel (Instance_45(D), _31);
  Function call may change dynamic type:Adc_Ip_SetContinuousMode (Instance_45(D), _26);
  Function call may change dynamic type:ADC_SetPretriggerSourceSelect_TrustedCall (Instance_45(D), _10);
  Function call may change dynamic type:ADC_SetTriggerSourceSelect_TrustedCall (Instance_45(D), _8);
  Function call may change dynamic type:Adc_Ip_SetResolution (Instance_45(D), _6);
  Function call may change dynamic type:Adc_HwAcc_SetAveraging (Base_46, _4, _5);
  Function call may change dynamic type:Adc_HwAcc_SetSampleTime (Base_46, _3);
  Function call may change dynamic type:Adc_HwAcc_SetClock (Base_46, _1, _2);
Determining dynamic type for call: Adc_HwAcc_SetAveraging (Base_9(D), _1, _2);
  Starting walk at: Adc_HwAcc_SetAveraging (Base_9(D), _1, _2);
  instance pointer: Base_9(D)  Outer instance pointer: Base_9(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_29 ();
Determining dynamic type for call: Adc_HwAcc_SetTriggerMode (Base_9(D), TriggerMode_13(D));
  Starting walk at: Adc_HwAcc_SetTriggerMode (Base_9(D), TriggerMode_13(D));
  instance pointer: Base_9(D)  Outer instance pointer: Base_9(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_24 ();
  Function call may change dynamic type:SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_29 ();
  Function call may change dynamic type:Adc_HwAcc_SetAveraging (Base_9(D), _1, _2);
  Function call may change dynamic type:SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_29 ();
Determining dynamic type for call: Adc_HwAcc_SetSampleTime (Base_9(D), _3);
  Starting walk at: Adc_HwAcc_SetSampleTime (Base_9(D), _3);
  instance pointer: Base_9(D)  Outer instance pointer: Base_9(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_15 ();
  Function call may change dynamic type:SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_24 ();
  Function call may change dynamic type:Adc_HwAcc_SetTriggerMode (Base_9(D), TriggerMode_13(D));
  Function call may change dynamic type:SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_24 ();
  Function call may change dynamic type:SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_29 ();
  Function call may change dynamic type:Adc_HwAcc_SetAveraging (Base_9(D), _1, _2);
  Function call may change dynamic type:SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_29 ();
Determining dynamic type for call: Adc_HwAcc_SetClock (Base_9(D), _4, _5);
  Starting walk at: Adc_HwAcc_SetClock (Base_9(D), _4, _5);
  instance pointer: Base_9(D)  Outer instance pointer: Base_9(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_13 ();
  Function call may change dynamic type:SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_15 ();
  Function call may change dynamic type:Adc_HwAcc_SetSampleTime (Base_9(D), _3);
  Function call may change dynamic type:SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_15 ();
  Function call may change dynamic type:SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_24 ();
  Function call may change dynamic type:Adc_HwAcc_SetTriggerMode (Base_9(D), TriggerMode_13(D));
  Function call may change dynamic type:SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_24 ();
  Function call may change dynamic type:SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_29 ();
  Function call may change dynamic type:Adc_HwAcc_SetAveraging (Base_9(D), _1, _2);
  Function call may change dynamic type:SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_29 ();

IPA structures before propagation:

Jump functions:
  Jump functions of caller  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_31/95:
  Jump functions of caller  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_31/94:
  Jump functions of caller  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_25/93:
  Jump functions of caller  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_25/92:
  Jump functions of caller  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_20/91:
  Jump functions of caller  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_20/90:
  Jump functions of caller  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_19/89:
  Jump functions of caller  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_19/88:
  Jump functions of caller  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_12/87:
  Jump functions of caller  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_12/86:
  Jump functions of caller  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_13/85:
  Jump functions of caller  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_13/84:
  Jump functions of caller  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_15/83:
  Jump functions of caller  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_15/82:
  Jump functions of caller  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_24/81:
  Jump functions of caller  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_24/80:
  Jump functions of caller  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_29/79:
  Jump functions of caller  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_29/78:
  Jump functions of caller  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_18/77:
  Jump functions of caller  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_18/76:
  Jump functions of caller  OsIf_GetElapsed/75:
  Jump functions of caller  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_17/74:
  Jump functions of caller  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_17/73:
  Jump functions of caller  OsIf_GetCounter/72:
  Jump functions of caller  OsIf_MicrosToTicks/71:
  Jump functions of caller  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_21/70:
  Jump functions of caller  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_21/69:
  Jump functions of caller  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_28/68:
  Jump functions of caller  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_28/67:
  Jump functions of caller  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_14/66:
  Jump functions of caller  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_14/65:
  Jump functions of caller  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_11/64:
  Jump functions of caller  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_11/63:
  Jump functions of caller  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_10/62:
  Jump functions of caller  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_10/61:
  Jump functions of caller  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_30/60:
  Jump functions of caller  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_30/59:
  Jump functions of caller  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_23/58:
  Jump functions of caller  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_23/57:
  Jump functions of caller  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_22/56:
  Jump functions of caller  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_22/55:
  Jump functions of caller  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_26/54:
  Jump functions of caller  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_26/53:
  Jump functions of caller  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_16/52:
  Jump functions of caller  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_16/51:
  Jump functions of caller  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_27/50:
  Jump functions of caller  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_27/49:
  Jump functions of caller  ADC_SetSoftwarePretrigger_TrustedCall/48:
  Jump functions of caller  ADC_SetPretriggerSourceSelect_TrustedCall/47:
  Jump functions of caller  ADC_SetTriggerSourceSelect_TrustedCall/45:
  Jump functions of caller  Adc_Ip_IRQHandler/43:
    indirect simple callsite, calling param -1, offset 0, for stmt _4 (ControlChanIdx_6);
       param 0: UNKNOWN
         value: 0x0, mask: 0x1f
         VR  [0, 16]
  Jump functions of caller  Adc_Ip_SetSoftwarePretrigger/42:
    callsite  Adc_Ip_SetSoftwarePretrigger/42 -> ADC_SetSoftwarePretrigger_TrustedCall/48 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Adc_Ip_GetChanData/41:
  Jump functions of caller  Adc_Ip_GetDataAddress/40:
  Jump functions of caller  Adc_Ip_GetTrigErrReg/39:
  Jump functions of caller  Adc_Ip_ClearTrigErrReg/38:
  Jump functions of caller  Adc_Ip_DisableChannelNotification/37:
  Jump functions of caller  Adc_Ip_EnableChannelNotification/36:
  Jump functions of caller  Adc_Ip_ClearLatchedTriggers/35:
  Jump functions of caller  Adc_Ip_DoCalibration/34:
    callsite  Adc_Ip_DoCalibration/34 -> Adc_DoCalibration_SetParams/16 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 2: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
    callsite  Adc_Ip_DoCalibration/34 -> Adc_DoCalibration_SetParams/16 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         Aggregate passed by reference:
           offset: 64, cst: 12
           offset: 72, cst: 1
           offset: 96, cst: 3
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 2: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Adc_Ip_DoCalibration/34 -> Adc_HwAcc_GetInputClock/3 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Adc_Ip_DoCalibration/34 -> Adc_HwAcc_GetClockDivide/2 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Adc_Ip_DoCalibration/34 -> Adc_HwAcc_GetAverageSelect/6 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Adc_Ip_GetConvData/33:
  Jump functions of caller  Adc_Ip_GetConvCompleteFlag/32:
  Jump functions of caller  Adc_Ip_GetChanInterrupt/31:
  Jump functions of caller  Adc_Ip_GetConvActiveFlag/30:
  Jump functions of caller  Adc_Ip_StartConversion/29:
    callsite  Adc_Ip_StartConversion/29 -> Adc_HwAcc_SetChannel/9 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 2: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0x1
         Unknown VR
  Jump functions of caller  Adc_Ip_SetDisabledChannel/28:
  Jump functions of caller  Adc_Ip_ConfigChannel/27:
    callsite  Adc_Ip_ConfigChannel/27 -> Adc_HwAcc_SetChannel/9 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0x1
         Unknown VR
  Jump functions of caller  Adc_Ip_SetClockMode/26:
    callsite  Adc_Ip_SetClockMode/26 -> Adc_HwAcc_SetAveraging/5 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0x1
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Adc_Ip_SetClockMode/26 -> Adc_HwAcc_SetSampleTime/4 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Adc_Ip_SetClockMode/26 -> Adc_HwAcc_SetClock/1 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Adc_Ip_SetResolution/25:
  Jump functions of caller  Adc_Ip_SetContinuousMode/24:
  Jump functions of caller  Adc_Ip_SetTriggerMode/23:
    callsite  Adc_Ip_SetTriggerMode/23 -> Adc_HwAcc_SetTriggerMode/7 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Adc_Ip_DisableDma/22:
  Jump functions of caller  Adc_Ip_EnableDma/21:
  Jump functions of caller  Adc_Ip_SetSampleTime/20:
    callsite  Adc_Ip_SetSampleTime/20 -> Adc_HwAcc_SetSampleTime/4 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Adc_Ip_SetAveraging/19:
    callsite  Adc_Ip_SetAveraging/19 -> Adc_HwAcc_SetAveraging/5 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0x1
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Adc_Ip_DeInit/18:
    callsite  Adc_Ip_DeInit/18 -> Adc_Ip_Init/17 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         Aggregate passed by reference:
           offset: 512, cst: 0B
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  Adc_Ip_Init/17:
    callsite  Adc_Ip_Init/17 -> Adc_Ip_ConfigChannel/27 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Adc_Ip_Init/17 -> Adc_Ip_SetContinuousMode/24 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0x1
         Unknown VR
    callsite  Adc_Ip_Init/17 -> ADC_SetPretriggerSourceSelect_TrustedCall/47 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Adc_Ip_Init/17 -> ADC_SetTriggerSourceSelect_TrustedCall/45 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Adc_Ip_Init/17 -> Adc_Ip_SetResolution/25 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Adc_Ip_Init/17 -> Adc_HwAcc_SetAveraging/5 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0x1
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Adc_Ip_Init/17 -> Adc_HwAcc_SetSampleTime/4 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Adc_Ip_Init/17 -> Adc_HwAcc_SetClock/1 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Adc_DoCalibration_SetParams/16:
    callsite  Adc_DoCalibration_SetParams/16 -> Adc_HwAcc_SetClock/1 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Adc_DoCalibration_SetParams/16 -> Adc_HwAcc_SetSampleTime/4 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Adc_DoCalibration_SetParams/16 -> Adc_HwAcc_SetTriggerMode/7 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Adc_DoCalibration_SetParams/16 -> Adc_HwAcc_SetAveraging/5 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0x1
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Adc_HwAcc_SetChannel/9:
  Jump functions of caller  Adc_HwAcc_SetTriggerMode/7:
  Jump functions of caller  Adc_HwAcc_GetAverageSelect/6:
  Jump functions of caller  Adc_HwAcc_SetAveraging/5:
  Jump functions of caller  Adc_HwAcc_SetSampleTime/4:
  Jump functions of caller  Adc_HwAcc_GetInputClock/3:
  Jump functions of caller  Adc_HwAcc_GetClockDivide/2:
  Jump functions of caller  Adc_HwAcc_SetClock/1:

 Propagating constants:

Not considering Adc_Ip_IRQHandler for cloning; -fipa-cp-clone disabled.
Not considering Adc_Ip_SetSoftwarePretrigger for cloning; -fipa-cp-clone disabled.
Not considering Adc_Ip_GetChanData for cloning; -fipa-cp-clone disabled.
Not considering Adc_Ip_GetDataAddress for cloning; -fipa-cp-clone disabled.
Not considering Adc_Ip_GetTrigErrReg for cloning; -fipa-cp-clone disabled.
Not considering Adc_Ip_ClearTrigErrReg for cloning; -fipa-cp-clone disabled.
Not considering Adc_Ip_DisableChannelNotification for cloning; -fipa-cp-clone disabled.
Not considering Adc_Ip_EnableChannelNotification for cloning; -fipa-cp-clone disabled.
Not considering Adc_Ip_ClearLatchedTriggers for cloning; -fipa-cp-clone disabled.
Not considering Adc_Ip_DoCalibration for cloning; -fipa-cp-clone disabled.
Not considering Adc_Ip_GetConvData for cloning; -fipa-cp-clone disabled.
Not considering Adc_Ip_GetConvCompleteFlag for cloning; -fipa-cp-clone disabled.
Not considering Adc_Ip_GetChanInterrupt for cloning; -fipa-cp-clone disabled.
Not considering Adc_Ip_GetConvActiveFlag for cloning; -fipa-cp-clone disabled.
Not considering Adc_Ip_StartConversion for cloning; -fipa-cp-clone disabled.
Not considering Adc_Ip_SetDisabledChannel for cloning; -fipa-cp-clone disabled.
Not considering Adc_Ip_ConfigChannel for cloning; -fipa-cp-clone disabled.
Not considering Adc_Ip_SetClockMode for cloning; -fipa-cp-clone disabled.
Not considering Adc_Ip_SetResolution for cloning; -fipa-cp-clone disabled.
Not considering Adc_Ip_SetContinuousMode for cloning; -fipa-cp-clone disabled.
Not considering Adc_Ip_SetTriggerMode for cloning; -fipa-cp-clone disabled.
Not considering Adc_Ip_DisableDma for cloning; -fipa-cp-clone disabled.
Not considering Adc_Ip_EnableDma for cloning; -fipa-cp-clone disabled.
Not considering Adc_Ip_SetSampleTime for cloning; -fipa-cp-clone disabled.
Not considering Adc_Ip_SetAveraging for cloning; -fipa-cp-clone disabled.
Not considering Adc_Ip_DeInit for cloning; -fipa-cp-clone disabled.
Not considering Adc_Ip_Init for cloning; -fipa-cp-clone disabled.

overall_size: 662, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: ADC_SetSoftwarePretrigger_TrustedCall/48:
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
  Node: ADC_SetPretriggerSourceSelect_TrustedCall/47:
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
  Node: ADC_SetTriggerSourceSelect_TrustedCall/45:
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
  Node: Adc_Ip_IRQHandler/43:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Adc_Ip_SetSoftwarePretrigger/42:
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
  Node: Adc_Ip_GetChanData/41:
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
  Node: Adc_Ip_GetDataAddress/40:
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
  Node: Adc_Ip_GetTrigErrReg/39:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Adc_Ip_ClearTrigErrReg/38:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Adc_Ip_DisableChannelNotification/37:
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
  Node: Adc_Ip_EnableChannelNotification/36:
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
  Node: Adc_Ip_ClearLatchedTriggers/35:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Adc_Ip_DoCalibration/34:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Adc_Ip_GetConvData/33:
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
  Node: Adc_Ip_GetConvCompleteFlag/32:
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
  Node: Adc_Ip_GetChanInterrupt/31:
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
  Node: Adc_Ip_GetConvActiveFlag/30:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Adc_Ip_StartConversion/29:
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
  Node: Adc_Ip_SetDisabledChannel/28:
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
  Node: Adc_Ip_ConfigChannel/27:
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
  Node: Adc_Ip_SetClockMode/26:
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
  Node: Adc_Ip_SetResolution/25:
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
  Node: Adc_Ip_SetContinuousMode/24:
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
  Node: Adc_Ip_SetTriggerMode/23:
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
  Node: Adc_Ip_DisableDma/22:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Adc_Ip_EnableDma/21:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Adc_Ip_SetSampleTime/20:
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
  Node: Adc_Ip_SetAveraging/19:
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
  Node: Adc_Ip_DeInit/18:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Adc_Ip_Init/17:
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
  Node: Adc_DoCalibration_SetParams/16:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         const struct Adc_Ip_ClockConfigType * const ~[0B, 0B]
        AGGS VARIABLE
        ref offset 64: 12 [loc_time: 0, loc_size: 30, prop_time: 0, prop_size: 0]
        ref offset 72: 1 [loc_time: 0, loc_size: 30, prop_time: 0, prop_size: 0]
        ref offset 96: 3 [loc_time: 0, loc_size: 30, prop_time: 0, prop_size: 0]
    param [2]: VARIABLE
               0 [loc_time: 1, loc_size: 30, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x1
         const Adc_Ip_TrigType [0, 1]
        AGGS VARIABLE
  Node: Adc_HwAcc_SetChannel/9:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
               0 [loc_time: 49, loc_size: 11, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Adc_HwAcc_SetTriggerMode/7:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
               0 [loc_time: 3, loc_size: 7, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Adc_HwAcc_SetAveraging/5:
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
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Adc_HwAcc_SetSampleTime/4:
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
  Node: Adc_HwAcc_GetInputClock/3:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Adc_HwAcc_GetClockDivide/2:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Adc_HwAcc_SetClock/1:
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
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE

IPA decision stage:

Propagated bits info for function Adc_DoCalibration_SetParams/16:
 param 1: value = 0x0, mask = 0xfffffffc
 param 2: value = 0x0, mask = 0x1

IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_31/95 (SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_31) @069ece00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ADC_SetSoftwarePretrigger_TrustedCall/48 (1073634451 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_31/94 (SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_31) @069ecd20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ADC_SetSoftwarePretrigger_TrustedCall/48 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_25/93 (SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_25) @069ec7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_ClearTrigErrReg/38 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_25/92 (SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_25) @069ec700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_ClearTrigErrReg/38 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_20/91 (SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_20) @069ec540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_DisableChannelNotification/37 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_20/90 (SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_20) @069ec460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_DisableChannelNotification/37 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_19/89 (SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_19) @069ec2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_EnableChannelNotification/36 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_19/88 (SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_19) @069ec1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_EnableChannelNotification/36 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_12/87 (SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_12) @069ec000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_ClearLatchedTriggers/35 (114863532 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_12/86 (SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_12) @069ddee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_ClearLatchedTriggers/35 (114863532 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_13/85 (SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_13) @069ddd20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_DoCalibration_SetParams/16 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_13/84 (SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_13) @069ddc40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_DoCalibration_SetParams/16 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_15/83 (SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_15) @069ddb60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_DoCalibration_SetParams/16 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_15/82 (SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_15) @069dda80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_DoCalibration_SetParams/16 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_24/81 (SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_24) @069dd9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_DoCalibration_SetParams/16 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_24/80 (SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_24) @069dd8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_DoCalibration_SetParams/16 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_29/79 (SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_29) @069dd380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_DoCalibration/34 (114863532 (estimated locally),1.00 per call) Adc_DoCalibration_SetParams/16 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_29/78 (SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_29) @069dd2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_DoCalibration/34 (114863532 (estimated locally),1.00 per call) Adc_DoCalibration_SetParams/16 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_18/77 (SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_18) @069d2a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_StartConversion/29 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_18/76 (SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_18) @069d29a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_StartConversion/29 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OsIf_GetElapsed/75 (OsIf_GetElapsed) @069d27e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_ClearLatchedTriggers/35 (958878293 (estimated locally),8.35 per call) Adc_Ip_DoCalibration/34 (958878293 (estimated locally),8.35 per call) Adc_Ip_SetDisabledChannel/28 (958878293 (estimated locally),4.17 per call) 
  Calls: 
SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_17/74 (SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_17) @069d2700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_SetDisabledChannel/28 (229727064 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_17/73 (SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_17) @069d2620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_SetDisabledChannel/28 (229727064 (estimated locally),1.00 per call) 
  Calls: 
OsIf_GetCounter/72 (OsIf_GetCounter) @069d2540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_ClearLatchedTriggers/35 (114863532 (estimated locally),1.00 per call) Adc_Ip_DoCalibration/34 (114863532 (estimated locally),1.00 per call) Adc_Ip_SetDisabledChannel/28 (229727064 (estimated locally),1.00 per call) 
  Calls: 
OsIf_MicrosToTicks/71 (OsIf_MicrosToTicks) @069d2460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_ClearLatchedTriggers/35 (114863532 (estimated locally),1.00 per call) Adc_Ip_DoCalibration/34 (114863532 (estimated locally),1.00 per call) Adc_Ip_SetDisabledChannel/28 (229727064 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_21/70 (SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_21) @069d21c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_ConfigChannel/27 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_21/69 (SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_21) @069d20e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_ConfigChannel/27 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_28/68 (SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_28) @069aeee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_SetClockMode/26 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_28/67 (SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_28) @069aee00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_SetClockMode/26 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_14/66 (SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_14) @069aed20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_SetClockMode/26 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_14/65 (SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_14) @069aec40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_SetClockMode/26 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_11/64 (SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_11) @069aeb60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_SetClockMode/26 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_11/63 (SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_11) @069aea80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_SetClockMode/26 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_10/62 (SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_10) @069ae8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_SetResolution/25 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_10/61 (SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_10) @069ae7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_SetResolution/25 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_30/60 (SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_30) @069ae620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_SetContinuousMode/24 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_30/59 (SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_30) @069ae540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_SetContinuousMode/24 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_23/58 (SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_23) @069ae2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_SetTriggerMode/23 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_23/57 (SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_23) @069ae1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_SetTriggerMode/23 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_22/56 (SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_22) @069ae000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_DisableDma/22 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_22/55 (SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_22) @069a4ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_DisableDma/22 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_26/54 (SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_26) @069a4d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_EnableDma/21 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_26/53 (SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_26) @069a4c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_EnableDma/21 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_16/52 (SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_16) @069a4a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_SetSampleTime/20 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_16/51 (SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_16) @069a49a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_SetSampleTime/20 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_27/50 (SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_27) @069a47e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_SetAveraging/19 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_27/49 (SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_27) @069a4700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Adc_Ip_SetAveraging/19 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ADC_SetSoftwarePretrigger_TrustedCall/48 (ADC_SetSoftwarePretrigger_TrustedCall) @068feb60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Adc_Ip_SetSoftwarePretrigger/42 (1073741824 (estimated locally),1.00 per call) 
  Calls: SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_31/95 (1073634451 (estimated locally),1.00 per call) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_31/94 (1073741824 (estimated locally),1.00 per call) 
ADC_SetPretriggerSourceSelect_TrustedCall/47 (ADC_SetPretriggerSourceSelect_TrustedCall) @068fe700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Adc_Ip_Init/17 (168730857 (estimated locally),1.00 per call) 
  Calls: 
ADC_SetTriggerSourceSelect_TrustedCall/45 (ADC_SetTriggerSourceSelect_TrustedCall) @068fe000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Adc_Ip_Init/17 (168730857 (estimated locally),1.00 per call) 
  Calls: 
Adc_Ip_IRQHandler/43 (Adc_Ip_IRQHandler) @068f7000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: AdcBase/14 (read)AdcIpState/15 (read)AdcIpState/15 (read)AdcIpState/15 (read)AdcIpState/15 (read)
  Referring: 
  Availability: available
  Function flags: count:97132339 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(136043089 (estimated locally),1.40 per call) 
Adc_Ip_SetSoftwarePretrigger/42 (Adc_Ip_SetSoftwarePretrigger) @068f7c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ADC_SetSoftwarePretrigger_TrustedCall/48 (1073741824 (estimated locally),1.00 per call) 
Adc_Ip_GetChanData/41 (Adc_Ip_GetChanData) @068f79a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: AdcBase/14 (read)AdcIpState/15 (read)
  Referring: 
  Availability: available
  Function flags: count:118719338 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Adc_Ip_GetDataAddress/40 (Adc_Ip_GetDataAddress) @068f7700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: AdcBase/14 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Adc_Ip_GetTrigErrReg/39 (Adc_Ip_GetTrigErrReg) @068f7460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: AdcBase/14 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Adc_Ip_ClearTrigErrReg/38 (Adc_Ip_ClearTrigErrReg) @068f71c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: AdcBase/14 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_25/93 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_25/92 (1073741824 (estimated locally),1.00 per call) 
Adc_Ip_DisableChannelNotification/37 (Adc_Ip_DisableChannelNotification) @068ebe00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: AdcBase/14 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_20/91 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_20/90 (1073741824 (estimated locally),1.00 per call) 
Adc_Ip_EnableChannelNotification/36 (Adc_Ip_EnableChannelNotification) @068eb7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: AdcBase/14 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_19/89 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_19/88 (1073741824 (estimated locally),1.00 per call) 
Adc_Ip_ClearLatchedTriggers/35 (Adc_Ip_ClearLatchedTriggers) @068eb2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: AdcBase/14 (read)
  Referring: 
  Availability: available
  Function flags: count:114863532 (estimated locally) body optimize_size
  Called by: 
  Calls: OsIf_GetElapsed/75 (958878293 (estimated locally),8.35 per call) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_12/87 (114863532 (estimated locally),1.00 per call) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_12/86 (114863532 (estimated locally),1.00 per call) OsIf_GetCounter/72 (114863532 (estimated locally),1.00 per call) OsIf_MicrosToTicks/71 (114863532 (estimated locally),1.00 per call) 
Adc_Ip_DoCalibration/34 (Adc_Ip_DoCalibration) @068ebd20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: AdcBase/14 (read)AdcIpState/15 (read)
  Referring: 
  Availability: available
  Function flags: count:114863532 (estimated locally) body optimize_size
  Called by: 
  Calls: Adc_DoCalibration_SetParams/16 (114863532 (estimated locally),1.00 per call) OsIf_GetElapsed/75 (958878293 (estimated locally),8.35 per call) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_29/79 (114863532 (estimated locally),1.00 per call) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_29/78 (114863532 (estimated locally),1.00 per call) Adc_DoCalibration_SetParams/16 (114863532 (estimated locally),1.00 per call) Adc_HwAcc_GetInputClock/3 (114863532 (estimated locally),1.00 per call) Adc_HwAcc_GetClockDivide/2 (114863532 (estimated locally),1.00 per call) Adc_HwAcc_GetAverageSelect/6 (114863532 (estimated locally),1.00 per call) OsIf_GetCounter/72 (114863532 (estimated locally),1.00 per call) OsIf_MicrosToTicks/71 (114863532 (estimated locally),1.00 per call) 
Adc_Ip_GetConvData/33 (Adc_Ip_GetConvData) @068eb9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: AdcBase/14 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Adc_Ip_GetConvCompleteFlag/32 (Adc_Ip_GetConvCompleteFlag) @068eb700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: AdcBase/14 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Adc_Ip_GetChanInterrupt/31 (Adc_Ip_GetChanInterrupt) @068eb460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: AdcBase/14 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Adc_Ip_GetConvActiveFlag/30 (Adc_Ip_GetConvActiveFlag) @068eb1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: AdcBase/14 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Adc_Ip_StartConversion/29 (Adc_Ip_StartConversion) @068e3ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: AdcBase/14 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_18/77 (1073741824 (estimated locally),1.00 per call) Adc_HwAcc_SetChannel/9 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_18/76 (1073741824 (estimated locally),1.00 per call) 
Adc_Ip_SetDisabledChannel/28 (Adc_Ip_SetDisabledChannel) @068e38c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: AdcBase/14 (read)
  Referring: 
  Availability: available
  Function flags: count:229727064 (estimated locally) body optimize_size
  Called by: 
  Calls: OsIf_GetElapsed/75 (958878293 (estimated locally),4.17 per call) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_17/74 (229727064 (estimated locally),1.00 per call) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_17/73 (229727064 (estimated locally),1.00 per call) OsIf_GetCounter/72 (229727064 (estimated locally),1.00 per call) OsIf_MicrosToTicks/71 (229727064 (estimated locally),1.00 per call) 
Adc_Ip_ConfigChannel/27 (Adc_Ip_ConfigChannel) @068e32a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: AdcBase/14 (read)AdcIpState/15 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Adc_Ip_Init/17 (955630225 (estimated locally),5.66 per call) 
  Calls: SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_21/70 (1073741824 (estimated locally),1.00 per call) Adc_HwAcc_SetChannel/9 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_21/69 (1073741824 (estimated locally),1.00 per call) 
Adc_Ip_SetClockMode/26 (Adc_Ip_SetClockMode) @068e3e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: AdcBase/14 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_28/68 (1073741824 (estimated locally),1.00 per call) Adc_HwAcc_SetAveraging/5 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_28/67 (1073741824 (estimated locally),1.00 per call) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_14/66 (1073741824 (estimated locally),1.00 per call) Adc_HwAcc_SetSampleTime/4 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_14/65 (1073741824 (estimated locally),1.00 per call) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_11/64 (1073741824 (estimated locally),1.00 per call) Adc_HwAcc_SetClock/1 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_11/63 (1073741824 (estimated locally),1.00 per call) 
Adc_Ip_SetResolution/25 (Adc_Ip_SetResolution) @068e3b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: AdcBase/14 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Adc_Ip_Init/17 (168730857 (estimated locally),1.00 per call) 
  Calls: SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_10/62 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_10/61 (1073741824 (estimated locally),1.00 per call) 
Adc_Ip_SetContinuousMode/24 (Adc_Ip_SetContinuousMode) @068e37e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: AdcBase/14 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Adc_Ip_Init/17 (168730857 (estimated locally),1.00 per call) 
  Calls: SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_30/60 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_30/59 (1073741824 (estimated locally),1.00 per call) 
Adc_Ip_SetTriggerMode/23 (Adc_Ip_SetTriggerMode) @068e3460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: AdcBase/14 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_23/58 (1073741824 (estimated locally),1.00 per call) Adc_HwAcc_SetTriggerMode/7 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_23/57 (1073741824 (estimated locally),1.00 per call) 
Adc_Ip_DisableDma/22 (Adc_Ip_DisableDma) @068e31c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: AdcBase/14 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_22/56 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_22/55 (1073741824 (estimated locally),1.00 per call) 
Adc_Ip_EnableDma/21 (Adc_Ip_EnableDma) @068d7d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: AdcBase/14 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_26/54 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_26/53 (1073741824 (estimated locally),1.00 per call) 
Adc_Ip_SetSampleTime/20 (Adc_Ip_SetSampleTime) @068d7460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: AdcBase/14 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_16/52 (1073741824 (estimated locally),1.00 per call) Adc_HwAcc_SetSampleTime/4 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_16/51 (1073741824 (estimated locally),1.00 per call) 
Adc_Ip_SetAveraging/19 (Adc_Ip_SetAveraging) @068d7ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: AdcBase/14 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_27/50 (1073741824 (estimated locally),1.00 per call) Adc_HwAcc_SetAveraging/5 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_27/49 (1073741824 (estimated locally),1.00 per call) 
Adc_Ip_DeInit/18 (Adc_Ip_DeInit) @068d7c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: AdcIpState/15 (write)
  Referring: 
  Availability: available
  Function flags: count:63136020 (estimated locally) body optimize_size
  Called by: 
  Calls: Adc_Ip_Init/17 (63136019 (estimated locally),1.00 per call) 
Adc_Ip_Init/17 (Adc_Ip_Init) @068d79a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: AdcBase/14 (read)AdcIpState/15 (write)AdcIpState/15 (write)AdcIpState/15 (write)AdcIpState/15 (write)
  Referring: 
  Availability: available
  Function flags: count:168730857 (estimated locally) body optimize_size
  Called by: Adc_Ip_DeInit/18 (63136019 (estimated locally),1.00 per call) 
  Calls: Adc_Ip_ConfigChannel/27 (955630225 (estimated locally),5.66 per call) Adc_Ip_SetContinuousMode/24 (168730857 (estimated locally),1.00 per call) ADC_SetPretriggerSourceSelect_TrustedCall/47 (168730857 (estimated locally),1.00 per call) ADC_SetTriggerSourceSelect_TrustedCall/45 (168730857 (estimated locally),1.00 per call) Adc_Ip_SetResolution/25 (168730857 (estimated locally),1.00 per call) Adc_HwAcc_SetAveraging/5 (168730857 (estimated locally),1.00 per call) Adc_HwAcc_SetSampleTime/4 (168730857 (estimated locally),1.00 per call) Adc_HwAcc_SetClock/1 (168730857 (estimated locally),1.00 per call) 
Adc_DoCalibration_SetParams/16 (Adc_DoCalibration_SetParams) @068d7380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Adc_Ip_DoCalibration/34 (114863532 (estimated locally),1.00 per call) Adc_Ip_DoCalibration/34 (114863532 (estimated locally),1.00 per call) 
  Calls: SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_13/85 (1073741824 (estimated locally),1.00 per call) Adc_HwAcc_SetClock/1 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_13/84 (1073741824 (estimated locally),1.00 per call) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_15/83 (1073741824 (estimated locally),1.00 per call) Adc_HwAcc_SetSampleTime/4 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_15/82 (1073741824 (estimated locally),1.00 per call) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_24/81 (1073741824 (estimated locally),1.00 per call) Adc_HwAcc_SetTriggerMode/7 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_24/80 (1073741824 (estimated locally),1.00 per call) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_29/79 (1073741824 (estimated locally),1.00 per call) Adc_HwAcc_SetAveraging/5 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_29/78 (1073741824 (estimated locally),1.00 per call) 
AdcIpState/15 (AdcIpState) @068d5048
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Adc_Ip_Init/17 (write)Adc_Ip_Init/17 (write)Adc_Ip_Init/17 (write)Adc_Ip_GetChanData/41 (read)Adc_Ip_ConfigChannel/27 (write)Adc_Ip_DoCalibration/34 (read)Adc_Ip_Init/17 (write)Adc_Ip_DeInit/18 (write)Adc_Ip_IRQHandler/43 (read)Adc_Ip_IRQHandler/43 (read)Adc_Ip_IRQHandler/43 (read)Adc_Ip_IRQHandler/43 (read)
  Availability: available
  Varpool flags:
AdcBase/14 (AdcBase) @068bdf78
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Adc_Ip_SetClockMode/26 (read)Adc_Ip_GetDataAddress/40 (read)Adc_Ip_GetChanData/41 (read)Adc_Ip_SetAveraging/19 (read)Adc_Ip_SetSampleTime/20 (read)Adc_Ip_EnableDma/21 (read)Adc_Ip_DisableDma/22 (read)Adc_Ip_SetTriggerMode/23 (read)Adc_Ip_SetContinuousMode/24 (read)Adc_Ip_SetResolution/25 (read)Adc_Ip_ConfigChannel/27 (read)Adc_Ip_Init/17 (read)Adc_Ip_SetDisabledChannel/28 (read)Adc_Ip_StartConversion/29 (read)Adc_Ip_GetConvActiveFlag/30 (read)Adc_Ip_GetChanInterrupt/31 (read)Adc_Ip_GetConvCompleteFlag/32 (read)Adc_Ip_GetConvData/33 (read)Adc_Ip_DoCalibration/34 (read)Adc_Ip_ClearLatchedTriggers/35 (read)Adc_Ip_EnableChannelNotification/36 (read)Adc_Ip_DisableChannelNotification/37 (read)Adc_Ip_ClearTrigErrReg/38 (read)Adc_Ip_GetTrigErrReg/39 (read)Adc_Ip_IRQHandler/43 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Adc_HwAcc_SetChannel/9 (Adc_HwAcc_SetChannel) @0691ae00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Adc_Ip_StartConversion/29 (1073741824 (estimated locally),1.00 per call) Adc_Ip_ConfigChannel/27 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Adc_HwAcc_SetTriggerMode/7 (Adc_HwAcc_SetTriggerMode) @0691a700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Adc_Ip_SetTriggerMode/23 (1073741824 (estimated locally),1.00 per call) Adc_DoCalibration_SetParams/16 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Adc_HwAcc_GetAverageSelect/6 (Adc_HwAcc_GetAverageSelect) @0691a380
  Type: function definition analyzed alias
  Visibility: prevailing_def_ironly
  References: Adc_HwAcc_GetInputClock/3 (alias)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) local icf_merged optimize_size
  Called by: Adc_Ip_DoCalibration/34 (114863532 (estimated locally),1.00 per call) 
  Calls: 
Adc_HwAcc_SetAveraging/5 (Adc_HwAcc_SetAveraging) @0691a0e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Adc_Ip_Init/17 (168730857 (estimated locally),1.00 per call) Adc_Ip_SetClockMode/26 (1073741824 (estimated locally),1.00 per call) Adc_Ip_SetAveraging/19 (1073741824 (estimated locally),1.00 per call) Adc_DoCalibration_SetParams/16 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Adc_HwAcc_SetSampleTime/4 (Adc_HwAcc_SetSampleTime) @06914c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Adc_Ip_Init/17 (168730857 (estimated locally),1.00 per call) Adc_Ip_SetClockMode/26 (1073741824 (estimated locally),1.00 per call) Adc_Ip_SetSampleTime/20 (1073741824 (estimated locally),1.00 per call) Adc_DoCalibration_SetParams/16 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Adc_HwAcc_GetInputClock/3 (Adc_HwAcc_GetInputClock) @069148c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Adc_HwAcc_GetAverageSelect/6 (alias)
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local icf_merged optimize_size
  Called by: Adc_Ip_DoCalibration/34 (114863532 (estimated locally),1.00 per call) 
  Calls: 
Adc_HwAcc_GetClockDivide/2 (Adc_HwAcc_GetClockDivide) @06914620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Adc_Ip_DoCalibration/34 (114863532 (estimated locally),1.00 per call) 
  Calls: 
Adc_HwAcc_SetClock/1 (Adc_HwAcc_SetClock) @06914380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Adc_Ip_Init/17 (168730857 (estimated locally),1.00 per call) Adc_Ip_SetClockMode/26 (1073741824 (estimated locally),1.00 per call) Adc_DoCalibration_SetParams/16 (1073741824 (estimated locally),1.00 per call) 
  Calls: 

;; Function Adc_HwAcc_SetAveraging (Adc_HwAcc_SetAveraging, funcdef_no=5, decl_uid=5830, cgraph_uid=6, symbol_order=5)

Modification phase of node Adc_HwAcc_SetAveraging/5
Adc_HwAcc_SetAveraging (struct ADC_Type * const Base, const boolean AvgEn, const Adc_Ip_AvgSelectType AvgSel)
{
  uint32 Sc3Reg;
  long unsigned int _1;
  long unsigned int iftmp.5_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Sc3Reg_5 ={v} Base_4(D)->SC3;
  # DEBUG Sc3Reg => Sc3Reg_5
  # DEBUG BEGIN_STMT
  Sc3Reg_6 = Sc3Reg_5 & 4294967288;
  # DEBUG Sc3Reg => Sc3Reg_6
  # DEBUG BEGIN_STMT
  if (AvgEn_7(D) != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:

  <bb 4> [local count: 1073741824]:
  # iftmp.5_2 = PHI <4(2), 0(3)>
  Sc3Reg_8 = iftmp.5_2 | Sc3Reg_6;
  # DEBUG Sc3Reg => Sc3Reg_8
  # DEBUG BEGIN_STMT
  _1 = AvgSel_9(D) & 3;
  Sc3Reg_10 = _1 | Sc3Reg_8;
  # DEBUG Sc3Reg => Sc3Reg_10
  # DEBUG BEGIN_STMT
  Base_4(D)->SC3 ={v} Sc3Reg_10;
  return;

}



;; Function Adc_DoCalibration_SetParams (Adc_DoCalibration_SetParams, funcdef_no=14, decl_uid=6166, cgraph_uid=15, symbol_order=16)

Modification phase of node Adc_DoCalibration_SetParams/16
Adjusting mask for param 1 to 0xfffffffc
Adjusting align: 4, misalign: 0
Adjusting mask for param 2 to 0x1
Setting nonnull for 1
Setting value range of param 2 [0, 1]
Adc_DoCalibration_SetParams (struct ADC_Type * const Base, const struct Adc_Ip_ClockConfigType * const Config, const Adc_Ip_TrigType TriggerMode)
{
  _Bool _1;
  <unnamed type> _2;
  unsigned char _3;
  <unnamed type> _4;
  <unnamed type> _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_29 ();
  # DEBUG BEGIN_STMT
  _1 = Config_8(D)->AvgEn;
  _2 = Config_8(D)->AvgSel;
  Adc_HwAcc_SetAveraging (Base_9(D), _1, _2);
  # DEBUG BEGIN_STMT
  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_29 ();
  # DEBUG BEGIN_STMT
  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_24 ();
  # DEBUG BEGIN_STMT
  Adc_HwAcc_SetTriggerMode (Base_9(D), TriggerMode_13(D));
  # DEBUG BEGIN_STMT
  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_24 ();
  # DEBUG BEGIN_STMT
  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_15 ();
  # DEBUG BEGIN_STMT
  _3 = Config_8(D)->SampleTime;
  Adc_HwAcc_SetSampleTime (Base_9(D), _3);
  # DEBUG BEGIN_STMT
  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_15 ();
  # DEBUG BEGIN_STMT
  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_13 ();
  # DEBUG BEGIN_STMT
  _4 = Config_8(D)->ClockDivide;
  _5 = Config_8(D)->InputClock;
  Adc_HwAcc_SetClock (Base_9(D), _4, _5);
  # DEBUG BEGIN_STMT
  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_13 ();
  return;

}



;; Function Adc_Ip_SetAveraging (Adc_Ip_SetAveraging, funcdef_no=17, decl_uid=5725, cgraph_uid=18, symbol_order=19)

Modification phase of node Adc_Ip_SetAveraging/19
Adc_Ip_SetAveraging (const uint32 Instance, const boolean AvgEn, const Adc_Ip_AvgSelectType AvgSel)
{
  struct ADC_Type * const Base;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Base_3 = AdcBase[Instance_2(D)];
  # DEBUG Base => Base_3
  # DEBUG BEGIN_STMT
  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_27 ();
  # DEBUG BEGIN_STMT
  Adc_HwAcc_SetAveraging (Base_3, AvgEn_5(D), AvgSel_6(D));
  # DEBUG BEGIN_STMT
  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_27 ();
  return;

}



;; Function Adc_Ip_SetSampleTime (Adc_Ip_SetSampleTime, funcdef_no=18, decl_uid=5728, cgraph_uid=19, symbol_order=20)

Modification phase of node Adc_Ip_SetSampleTime/20
Adc_Ip_SetSampleTime (const uint32 Instance, const uint8 SampleTime)
{
  struct ADC_Type * const Base;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Base_3 = AdcBase[Instance_2(D)];
  # DEBUG Base => Base_3
  # DEBUG BEGIN_STMT
  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_16 ();
  # DEBUG BEGIN_STMT
  Adc_HwAcc_SetSampleTime (Base_3, SampleTime_5(D));
  # DEBUG BEGIN_STMT
  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_16 ();
  return;

}



;; Function Adc_Ip_EnableDma (Adc_Ip_EnableDma, funcdef_no=19, decl_uid=5730, cgraph_uid=20, symbol_order=21)

Modification phase of node Adc_Ip_EnableDma/21
Adc_Ip_EnableDma (const uint32 Instance)
{
  struct ADC_Type * const Base;
  long unsigned int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Base_5 = AdcBase[Instance_4(D)];
  # DEBUG Base => Base_5
  # DEBUG BEGIN_STMT
  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_26 ();
  # DEBUG BEGIN_STMT
  _1 ={v} Base_5->SC2;
  _2 = _1 | 4;
  Base_5->SC2 ={v} _2;
  # DEBUG BEGIN_STMT
  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_26 ();
  return;

}



;; Function Adc_Ip_DisableDma (Adc_Ip_DisableDma, funcdef_no=20, decl_uid=5732, cgraph_uid=21, symbol_order=22)

Modification phase of node Adc_Ip_DisableDma/22
Adc_Ip_DisableDma (const uint32 Instance)
{
  struct ADC_Type * const Base;
  long unsigned int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Base_5 = AdcBase[Instance_4(D)];
  # DEBUG Base => Base_5
  # DEBUG BEGIN_STMT
  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_22 ();
  # DEBUG BEGIN_STMT
  _1 ={v} Base_5->SC2;
  _2 = _1 & 4294967291;
  Base_5->SC2 ={v} _2;
  # DEBUG BEGIN_STMT
  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_22 ();
  return;

}



;; Function Adc_Ip_SetTriggerMode (Adc_Ip_SetTriggerMode, funcdef_no=21, decl_uid=5735, cgraph_uid=22, symbol_order=23)

Modification phase of node Adc_Ip_SetTriggerMode/23
Adc_Ip_SetTriggerMode (const uint32 Instance, const Adc_Ip_TrigType TriggerMode)
{
  struct ADC_Type * const Base;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Base_3 = AdcBase[Instance_2(D)];
  # DEBUG Base => Base_3
  # DEBUG BEGIN_STMT
  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_23 ();
  # DEBUG BEGIN_STMT
  Adc_HwAcc_SetTriggerMode (Base_3, TriggerMode_5(D));
  # DEBUG BEGIN_STMT
  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_23 ();
  return;

}



;; Function Adc_Ip_SetContinuousMode (Adc_Ip_SetContinuousMode, funcdef_no=22, decl_uid=5738, cgraph_uid=23, symbol_order=24)

Modification phase of node Adc_Ip_SetContinuousMode/24
Adc_Ip_SetContinuousMode (const uint32 Instance, const boolean ContinuousModeEnable)
{
  uint32 Sc3Reg;
  struct ADC_Type * const Base;
  long unsigned int iftmp.7_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Base_4 = AdcBase[Instance_3(D)];
  # DEBUG Base => Base_4
  # DEBUG BEGIN_STMT
  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_30 ();
  # DEBUG BEGIN_STMT
  Sc3Reg_6 ={v} Base_4->SC3;
  # DEBUG Sc3Reg => Sc3Reg_6
  # DEBUG BEGIN_STMT
  Sc3Reg_7 = Sc3Reg_6 & 4294967287;
  # DEBUG Sc3Reg => Sc3Reg_7
  # DEBUG BEGIN_STMT
  if (ContinuousModeEnable_8(D) != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:

  <bb 4> [local count: 1073741824]:
  # iftmp.7_1 = PHI <8(2), 0(3)>
  Sc3Reg_9 = iftmp.7_1 | Sc3Reg_7;
  # DEBUG Sc3Reg => Sc3Reg_9
  # DEBUG BEGIN_STMT
  Base_4->SC3 ={v} Sc3Reg_9;
  # DEBUG BEGIN_STMT
  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_30 ();
  return;

}



;; Function Adc_Ip_SetResolution (Adc_Ip_SetResolution, funcdef_no=23, decl_uid=5741, cgraph_uid=24, symbol_order=25)

Modification phase of node Adc_Ip_SetResolution/25
Adc_Ip_SetResolution (const uint32 Instance, const Adc_Ip_ResolutionType Resolution)
{
  uint32 Cfg1Reg;
  struct ADC_Type * const Base;
  long unsigned int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Base_5 = AdcBase[Instance_4(D)];
  # DEBUG Base => Base_5
  # DEBUG BEGIN_STMT
  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_10 ();
  # DEBUG BEGIN_STMT
  Cfg1Reg_7 ={v} Base_5->CFG1;
  # DEBUG Cfg1Reg => Cfg1Reg_7
  # DEBUG BEGIN_STMT
  Cfg1Reg_8 = Cfg1Reg_7 & 4294967283;
  # DEBUG Cfg1Reg => Cfg1Reg_8
  # DEBUG BEGIN_STMT
  _1 = Resolution_9(D) << 2;
  _2 = _1 & 12;
  Cfg1Reg_10 = _2 | Cfg1Reg_8;
  # DEBUG Cfg1Reg => Cfg1Reg_10
  # DEBUG BEGIN_STMT
  Base_5->CFG1 ={v} Cfg1Reg_10;
  # DEBUG BEGIN_STMT
  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_10 ();
  return;

}



;; Function Adc_Ip_SetClockMode (Adc_Ip_SetClockMode, funcdef_no=24, decl_uid=5744, cgraph_uid=25, symbol_order=26)

Modification phase of node Adc_Ip_SetClockMode/26
Adc_Ip_SetClockMode (const uint32 Instance, const struct Adc_Ip_ClockConfigType * const Config)
{
  struct ADC_Type * const Base;
  <unnamed type> _1;
  <unnamed type> _2;
  unsigned char _3;
  _Bool _4;
  <unnamed type> _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Base_8 = AdcBase[Instance_7(D)];
  # DEBUG Base => Base_8
  # DEBUG BEGIN_STMT
  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_11 ();
  # DEBUG BEGIN_STMT
  _1 = Config_10(D)->ClockDivide;
  _2 = Config_10(D)->InputClock;
  Adc_HwAcc_SetClock (Base_8, _1, _2);
  # DEBUG BEGIN_STMT
  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_11 ();
  # DEBUG BEGIN_STMT
  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_14 ();
  # DEBUG BEGIN_STMT
  _3 = Config_10(D)->SampleTime;
  Adc_HwAcc_SetSampleTime (Base_8, _3);
  # DEBUG BEGIN_STMT
  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_14 ();
  # DEBUG BEGIN_STMT
  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_28 ();
  # DEBUG BEGIN_STMT
  _4 = Config_10(D)->AvgEn;
  _5 = Config_10(D)->AvgSel;
  Adc_HwAcc_SetAveraging (Base_8, _4, _5);
  # DEBUG BEGIN_STMT
  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_28 ();
  return;

}



;; Function Adc_Ip_ConfigChannel (Adc_Ip_ConfigChannel, funcdef_no=25, decl_uid=5747, cgraph_uid=26, symbol_order=27)

Modification phase of node Adc_Ip_ConfigChannel/27
Adc_Ip_ConfigChannel (const uint32 Instance, const struct Adc_Ip_ChanConfigType * const ChanConfig)
{
  Adc_Ip_InputChannelType InputChanDemapped;
  struct ADC_Type * const Base;
  unsigned char _1;
  _Bool _2;
  unsigned char _3;
  int _4;
  <unnamed type> _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Base_8 = AdcBase[Instance_7(D)];
  # DEBUG Base => Base_8
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  InputChanDemapped_10 = ChanConfig_9(D)->Channel;
  # DEBUG InputChanDemapped => InputChanDemapped_10
  # DEBUG BEGIN_STMT
  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_21 ();
  # DEBUG BEGIN_STMT
  _1 = ChanConfig_9(D)->ChnIdx;
  _2 = ChanConfig_9(D)->InterruptEnable;
  Adc_HwAcc_SetChannel (Base_8, _1, InputChanDemapped_10, _2);
  # DEBUG BEGIN_STMT
  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_21 ();
  # DEBUG BEGIN_STMT
  _3 = ChanConfig_9(D)->ChnIdx;
  _4 = (int) _3;
  _5 = ChanConfig_9(D)->Channel;
  AdcIpState[Instance_7(D)].ChannelConfig[_4] = _5;
  return;

}



;; Function Adc_Ip_Init (Adc_Ip_Init, funcdef_no=15, decl_uid=5719, cgraph_uid=16, symbol_order=17)

Modification phase of node Adc_Ip_Init/17
Adc_Ip_Init (const uint32 Instance, const struct Adc_Ip_ConfigType * const Config)
{
  uint32 Sc2Reg;
  uint8 Index;
  uint32 SC2ClearMask;
  uint32 SC2Reg;
  struct ADC_Type * const Base;
  <unnamed type> _1;
  <unnamed type> _2;
  unsigned char _3;
  _Bool _4;
  <unnamed type> _5;
  <unnamed type> _6;
  <unnamed type> _7;
  unsigned char _8;
  <unnamed type> _9;
  unsigned char _10;
  <unnamed type> _11;
  long unsigned int _12;
  long unsigned int _13;
  _Bool _14;
  <unnamed type> _15;
  long unsigned int _16;
  _Bool _17;
  _Bool _18;
  _Bool _19;
  short unsigned int _20;
  long unsigned int _21;
  short unsigned int _22;
  long unsigned int _23;
  short unsigned int _24;
  short unsigned int _25;
  _Bool _26;
  const struct Adc_Ip_ChanConfigType * _27;
  const struct Adc_Ip_ChanConfigType * _28;
  unsigned int _29;
  unsigned int _30;
  const struct Adc_Ip_ChanConfigType * _31;
  unsigned char _32;
  void (*<T4df>) (const uint8) _33;
  <unnamed type> _34;
  <unnamed type> _35;
  long unsigned int iftmp.0_39;
  long unsigned int iftmp.1_40;
  long unsigned int iftmp.2_41;
  short unsigned int _67;
  long unsigned int _68;
  short unsigned int _69;
  long unsigned int _70;
  long unsigned int _72;

  <bb 2> [local count: 168730857]:
  # DEBUG BEGIN_STMT
  Base_46 = AdcBase[Instance_45(D)];
  # DEBUG Base => Base_46
  # DEBUG BEGIN_STMT
  # DEBUG SC2Reg => 0
  # DEBUG BEGIN_STMT
  # DEBUG SC2ClearMask => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Config_47(D)->ClockDivide;
  _2 = Config_47(D)->InputClock;
  Adc_HwAcc_SetClock (Base_46, _1, _2);
  # DEBUG BEGIN_STMT
  _3 = Config_47(D)->SampleTime;
  Adc_HwAcc_SetSampleTime (Base_46, _3);
  # DEBUG BEGIN_STMT
  _4 = Config_47(D)->AvgEn;
  _5 = Config_47(D)->AvgSel;
  Adc_HwAcc_SetAveraging (Base_46, _4, _5);
  # DEBUG BEGIN_STMT
  _6 = Config_47(D)->Resolution;
  Adc_Ip_SetResolution (Instance_45(D), _6);
  # DEBUG BEGIN_STMT
  _7 = Config_47(D)->TriggerSel;
  _8 = (unsigned char) _7;
  # DEBUG Instance => Instance_45(D)
  # DEBUG TriggerSource => _8
  # DEBUG INLINE_ENTRY ADC_SetTriggerSourceSelect
  # DEBUG BEGIN_STMT
  ADC_SetTriggerSourceSelect_TrustedCall (Instance_45(D), _8);
  # DEBUG Instance => NULL
  # DEBUG TriggerSource => NULL
  # DEBUG BEGIN_STMT
  _9 = Config_47(D)->PretriggerSel;
  _10 = (unsigned char) _9;
  # DEBUG Instance => Instance_45(D)
  # DEBUG PretriggerSource => _10
  # DEBUG INLINE_ENTRY ADC_SetPretriggerSourceSelect
  # DEBUG BEGIN_STMT
  ADC_SetPretriggerSourceSelect_TrustedCall (Instance_45(D), _10);
  # DEBUG Instance => NULL
  # DEBUG PretriggerSource => NULL
  # DEBUG BEGIN_STMT
  # DEBUG SC2ClearMask => 64
  # DEBUG BEGIN_STMT
  _11 = Config_47(D)->TriggerMode;
  _12 = _11 << 6;
  _13 = _12 & 64;
  # DEBUG SC2Reg => _13
  # DEBUG BEGIN_STMT
  _14 = Config_47(D)->DmaEnable;
  if (_14 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 84365429]:
  # DEBUG BEGIN_STMT
  SC2Reg_52 = _13 | 4;
  # DEBUG SC2Reg => SC2Reg_52

  <bb 4> [local count: 168730857]:
  # SC2Reg_36 = PHI <SC2Reg_52(3), _13(2)>
  # SC2ClearMask_37 = PHI <64(3), 68(2)>
  # DEBUG SC2ClearMask => SC2ClearMask_37
  # DEBUG SC2Reg => SC2Reg_36
  # DEBUG BEGIN_STMT
  # DEBUG SC2ClearMask => SC2ClearMask_37 | 3
  # DEBUG BEGIN_STMT
  _15 = Config_47(D)->VoltageRef;
  _16 = _15 & 3;
  SC2Reg_53 = _16 | SC2Reg_36;
  # DEBUG SC2Reg => SC2Reg_53
  # DEBUG BEGIN_STMT
  SC2ClearMask_54 = SC2ClearMask_37 | 59;
  # DEBUG SC2ClearMask => SC2ClearMask_54
  # DEBUG BEGIN_STMT
  _17 = Config_47(D)->CompareEnable;
  if (_17 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 84365429]:

  <bb 6> [local count: 168730857]:
  # iftmp.0_39 = PHI <32(4), 0(5)>
  SC2Reg_55 = iftmp.0_39 | SC2Reg_53;
  # DEBUG SC2Reg => SC2Reg_55
  # DEBUG BEGIN_STMT
  _18 = Config_47(D)->CompareGreaterThanEnable;
  if (_18 != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 7> [local count: 84365429]:

  <bb 8> [local count: 168730857]:
  # iftmp.1_40 = PHI <16(6), 0(7)>
  SC2Reg_56 = iftmp.1_40 | SC2Reg_55;
  # DEBUG SC2Reg => SC2Reg_56
  # DEBUG BEGIN_STMT
  _19 = Config_47(D)->CompareRangeFuncEnable;
  if (_19 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 9> [local count: 84365429]:

  <bb 10> [local count: 168730857]:
  # iftmp.2_41 = PHI <8(8), 0(9)>
  SC2Reg_57 = iftmp.2_41 | SC2Reg_56;
  # DEBUG SC2Reg => SC2Reg_57
  # DEBUG BEGIN_STMT
  _20 = Config_47(D)->CompVal1;
  _21 = (long unsigned int) _20;
  Base_46->CV[0] ={v} _21;
  # DEBUG BEGIN_STMT
  _22 = Config_47(D)->CompVal2;
  _23 = (long unsigned int) _22;
  Base_46->CV[1] ={v} _23;
  # DEBUG BEGIN_STMT
  # DEBUG Base => Base_46
  # DEBUG ClearMask => SC2ClearMask_54
  # DEBUG Value => SC2Reg_57
  # DEBUG INLINE_ENTRY Adc_HwAcc_SetSC2Reg
  # DEBUG BEGIN_STMT
  Sc2Reg_71 ={v} Base_46->SC2;
  # DEBUG Sc2Reg => Sc2Reg_71
  # DEBUG BEGIN_STMT
  _72 = ~SC2ClearMask_54;
  Sc2Reg_73 = Sc2Reg_71 & _72;
  # DEBUG Sc2Reg => Sc2Reg_73
  # DEBUG BEGIN_STMT
  Sc2Reg_74 = SC2Reg_57 | Sc2Reg_73;
  # DEBUG Sc2Reg => Sc2Reg_74
  # DEBUG BEGIN_STMT
  Base_46->SC2 ={v} Sc2Reg_74;
  # DEBUG Base => NULL
  # DEBUG ClearMask => NULL
  # DEBUG Value => NULL
  # DEBUG Sc2Reg => NULL
  # DEBUG BEGIN_STMT
  _24 = Config_47(D)->UsrGain;
  _25 = Config_47(D)->UsrOffset;
  # DEBUG Base => Base_46
  # DEBUG UsrGain => _24
  # DEBUG UsrOffset => _25
  # DEBUG INLINE_ENTRY Adc_HwAcc_SetUserGainAndOffset
  # DEBUG BEGIN_STMT
  _67 = _25 & 255;
  _68 = (long unsigned int) _67;
  Base_46->USR_OFS ={v} _68;
  # DEBUG BEGIN_STMT
  _69 = _24 & 1023;
  _70 = (long unsigned int) _69;
  Base_46->UG ={v} _70;
  # DEBUG Base => NULL
  # DEBUG UsrGain => NULL
  # DEBUG UsrOffset => NULL
  # DEBUG BEGIN_STMT
  _26 = Config_47(D)->ContinuousConvEnable;
  Adc_Ip_SetContinuousMode (Instance_45(D), _26);
  # DEBUG BEGIN_STMT
  _27 = Config_47(D)->ChannelConfigs;
  if (_27 != 0B)
    goto <bb 14>; [70.00%]
  else
    goto <bb 13>; [30.00%]

  <bb 14> [local count: 118111600]:
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 955630225]:
  # DEBUG BEGIN_STMT
  _28 = Config_47(D)->ChannelConfigs;
  _29 = (unsigned int) Index_38;
  _30 = _29 * 12;
  _31 = _28 + _30;
  Adc_Ip_ConfigChannel (Instance_45(D), _31);
  # DEBUG BEGIN_STMT
  Index_62 = Index_38 + 1;
  # DEBUG Index => Index_62

  <bb 12> [local count: 1073741824]:
  # Index_38 = PHI <Index_62(11), 0(14)>
  # DEBUG Index => Index_38
  # DEBUG BEGIN_STMT
  _32 = Config_47(D)->NumChannels;
  if (_32 > Index_38)
    goto <bb 11>; [89.00%]
  else
    goto <bb 13>; [11.00%]

  <bb 13> [local count: 168730858]:
  # DEBUG BEGIN_STMT
  _33 = Config_47(D)->ConversionCompleteNotification;
  AdcIpState[Instance_45(D)].ConversionCompleteNotification = _33;
  # DEBUG BEGIN_STMT
  _34 = Config_47(D)->CalibrationClockDivide;
  AdcIpState[Instance_45(D)].CalibrationClockDivide = _34;
  # DEBUG BEGIN_STMT
  AdcIpState[Instance_45(D)].Init = 1;
  # DEBUG BEGIN_STMT
  _35 = Config_47(D)->PretriggerSel;
  AdcIpState[Instance_45(D)].PretriggerSel = _35;
  return;

}



;; Function Adc_Ip_DeInit (Adc_Ip_DeInit, funcdef_no=16, decl_uid=5721, cgraph_uid=17, symbol_order=18)

Modification phase of node Adc_Ip_DeInit/18
Adc_Ip_DeInit (const uint32 Instance)
{
  uint8 Index;
  struct Adc_Ip_ChanConfigType ChannelConfigs[16];
  struct Adc_Ip_ConfigType DefaultConfig;
  int _1;

  <bb 2> [local count: 63136020]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  DefaultConfig.ClockDivide = 0;
  # DEBUG BEGIN_STMT
  DefaultConfig.CalibrationClockDivide = 3;
  # DEBUG BEGIN_STMT
  DefaultConfig.InputClock = 0;
  # DEBUG BEGIN_STMT
  DefaultConfig.SampleTime = 12;
  # DEBUG BEGIN_STMT
  DefaultConfig.AvgEn = 0;
  # DEBUG BEGIN_STMT
  DefaultConfig.AvgSel = 0;
  # DEBUG BEGIN_STMT
  DefaultConfig.Resolution = 0;
  # DEBUG BEGIN_STMT
  DefaultConfig.TriggerMode = 0;
  # DEBUG BEGIN_STMT
  DefaultConfig.PretriggerSel = 0;
  # DEBUG BEGIN_STMT
  DefaultConfig.TriggerSel = 0;
  # DEBUG BEGIN_STMT
  DefaultConfig.DmaEnable = 0;
  # DEBUG BEGIN_STMT
  DefaultConfig.VoltageRef = 0;
  # DEBUG BEGIN_STMT
  DefaultConfig.ContinuousConvEnable = 0;
  # DEBUG BEGIN_STMT
  DefaultConfig.CompareEnable = 0;
  # DEBUG BEGIN_STMT
  DefaultConfig.CompareGreaterThanEnable = 0;
  # DEBUG BEGIN_STMT
  DefaultConfig.CompareRangeFuncEnable = 0;
  # DEBUG BEGIN_STMT
  DefaultConfig.CompVal1 = 0;
  # DEBUG BEGIN_STMT
  DefaultConfig.CompVal2 = 0;
  # DEBUG BEGIN_STMT
  DefaultConfig.UsrGain = 4;
  # DEBUG BEGIN_STMT
  DefaultConfig.UsrOffset = 0;
  # DEBUG BEGIN_STMT
  DefaultConfig.NumChannels = 16;
  # DEBUG BEGIN_STMT
  # DEBUG Index => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 1010605805]:
  # DEBUG BEGIN_STMT
  _1 = (int) Index_2;
  ChannelConfigs[_1].ChnIdx = Index_2;
  # DEBUG BEGIN_STMT
  ChannelConfigs[_1].Channel = 31;
  # DEBUG BEGIN_STMT
  ChannelConfigs[_1].InterruptEnable = 0;
  # DEBUG BEGIN_STMT
  Index_36 = Index_2 + 1;
  # DEBUG Index => Index_36

  <bb 4> [local count: 1073741824]:
  # Index_2 = PHI <0(2), Index_36(3)>
  # DEBUG Index => Index_2
  # DEBUG BEGIN_STMT
  if (Index_2 != 16)
    goto <bb 3>; [94.12%]
  else
    goto <bb 5>; [5.88%]

  <bb 5> [local count: 63136019]:
  # DEBUG BEGIN_STMT
  DefaultConfig.ChannelConfigs = &ChannelConfigs;
  # DEBUG BEGIN_STMT
  DefaultConfig.ConversionCompleteNotification = 0B;
  # DEBUG BEGIN_STMT
  Adc_Ip_Init (Instance_28(D), &DefaultConfig);
  # DEBUG BEGIN_STMT
  AdcIpState[Instance_28(D)].Init = 0;
  DefaultConfig ={v} {CLOBBER};
  ChannelConfigs ={v} {CLOBBER};
  return;

}



;; Function Adc_Ip_SetDisabledChannel (Adc_Ip_SetDisabledChannel, funcdef_no=26, decl_uid=5751, cgraph_uid=27, symbol_order=28)

Modification phase of node Adc_Ip_SetDisabledChannel/28
Adc_Ip_SetDisabledChannel (const uint32 Instance, const uint8 ControlChanIdx, const boolean WithTimeout)
{
  uint32 ElapsedTicks;
  uint32 CurrentTicks;
  uint32 TimeoutTicks;
  Adc_Ip_StatusType Status;
  struct ADC_Type * const Base;
  long unsigned int _1;
  int _2;
  long unsigned int _3;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _25;

  <bb 2> [local count: 229727064]:
  # DEBUG BEGIN_STMT
  Base_14 = AdcBase[Instance_13(D)];
  # DEBUG Base => Base_14
  # DEBUG BEGIN_STMT
  # DEBUG Status => 0
  # DEBUG BEGIN_STMT
  TimeoutTicks_16 = OsIf_MicrosToTicks (10000, 0);
  # DEBUG TimeoutTicks => TimeoutTicks_16
  # DEBUG BEGIN_STMT
  _1 = OsIf_GetCounter (0);
  CurrentTicks = _1;
  # DEBUG BEGIN_STMT
  # DEBUG ElapsedTicks => 0
  # DEBUG BEGIN_STMT
  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_17 ();
  # DEBUG BEGIN_STMT
  _2 = (int) ControlChanIdx_20(D);
  _3 ={v} Base_14->SC1[_2];
  _5 = _3 | 31;
  Base_14->SC1[_2] ={v} _5;
  # DEBUG BEGIN_STMT
  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_17 ();
  # DEBUG BEGIN_STMT
  if (WithTimeout_23(D) != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 9> [local count: 114863532]:
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 958878293]:
  # DEBUG BEGIN_STMT
  _25 = OsIf_GetElapsed (&CurrentTicks, 0);
  ElapsedTicks_26 = ElapsedTicks_9 + _25;
  # DEBUG ElapsedTicks => ElapsedTicks_26

  <bb 4> [local count: 1073741824]:
  # ElapsedTicks_9 = PHI <ElapsedTicks_26(3), 0(9)>
  # DEBUG ElapsedTicks => ElapsedTicks_9
  # DEBUG BEGIN_STMT
  _6 ={v} Base_14->SC1[_2];
  _7 = _6 & 31;
  if (_7 != 31)
    goto <bb 5>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 5> [local count: 1014686025]:
  if (ElapsedTicks_9 < TimeoutTicks_16)
    goto <bb 3>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 6> [local count: 114863532]:
  # ElapsedTicks_4 = PHI <ElapsedTicks_9(4), ElapsedTicks_9(5)>
  # DEBUG BEGIN_STMT
  if (ElapsedTicks_4 >= TimeoutTicks_16)
    goto <bb 7>; [35.00%]
  else
    goto <bb 8>; [65.00%]

  <bb 7> [local count: 40202236]:
  # DEBUG BEGIN_STMT
  # DEBUG Status => 2

  <bb 8> [local count: 229727064]:
  # Status_8 = PHI <0(2), 0(6), 2(7)>
  # DEBUG Status => Status_8
  # DEBUG BEGIN_STMT
  CurrentTicks ={v} {CLOBBER};
  return Status_8;

}



;; Function Adc_Ip_StartConversion (Adc_Ip_StartConversion, funcdef_no=27, decl_uid=5755, cgraph_uid=28, symbol_order=29)

Modification phase of node Adc_Ip_StartConversion/29
Adc_Ip_StartConversion (const uint32 Instance, Adc_Ip_InputChannelType InputChannel, const boolean InterruptEnable)
{
  struct ADC_Type * const Base;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Base_3 = AdcBase[Instance_2(D)];
  # DEBUG Base => Base_3
  # DEBUG BEGIN_STMT
  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_18 ();
  # DEBUG BEGIN_STMT
  Adc_HwAcc_SetChannel (Base_3, 0, InputChannel_5(D), InterruptEnable_6(D));
  # DEBUG BEGIN_STMT
  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_18 ();
  return;

}



;; Function Adc_Ip_GetConvActiveFlag (Adc_Ip_GetConvActiveFlag, funcdef_no=28, decl_uid=5757, cgraph_uid=29, symbol_order=30)

Modification phase of node Adc_Ip_GetConvActiveFlag/30
Adc_Ip_GetConvActiveFlag (const uint32 Instance)
{
  uint32 Sc2Reg;
  const struct ADC_Type * const Base;
  long unsigned int _1;
  boolean _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Base_4 = AdcBase[Instance_3(D)];
  # DEBUG Base => Base_4
  # DEBUG BEGIN_STMT
  Sc2Reg_5 ={v} Base_4->SC2;
  # DEBUG Sc2Reg => Sc2Reg_5
  # DEBUG BEGIN_STMT
  _1 = Sc2Reg_5 >> 7;
  # DEBUG Sc2Reg => _1 & 1
  # DEBUG BEGIN_STMT
  _6 = (boolean) _1;
  return _6;

}



;; Function Adc_Ip_GetChanInterrupt (Adc_Ip_GetChanInterrupt, funcdef_no=29, decl_uid=5760, cgraph_uid=30, symbol_order=31)

Modification phase of node Adc_Ip_GetChanInterrupt/31
Adc_Ip_GetChanInterrupt (const uint32 Instance, const uint8 ControlChanIdx)
{
  const uint32 Sc1Reg;
  const struct ADC_Type * const Base;
  int _1;
  long unsigned int _7;
  _Bool _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Base_4 = AdcBase[Instance_3(D)];
  # DEBUG Base => Base_4
  # DEBUG BEGIN_STMT
  _1 = (int) ControlChanIdx_5(D);
  Sc1Reg_6 ={v} Base_4->SC1[_1];
  # DEBUG Sc1Reg => Sc1Reg_6
  # DEBUG BEGIN_STMT
  # DEBUG Reg => Sc1Reg_6
  # DEBUG INLINE_ENTRY Adc_HwAcc_GetAIEN
  # DEBUG BEGIN_STMT
  _7 = Sc1Reg_6 >> 6;
  _8 = (_Bool) _7;
  # DEBUG Reg => NULL
  return _8;

}



;; Function Adc_Ip_GetConvCompleteFlag (Adc_Ip_GetConvCompleteFlag, funcdef_no=30, decl_uid=5763, cgraph_uid=31, symbol_order=32)

Modification phase of node Adc_Ip_GetConvCompleteFlag/32
Adc_Ip_GetConvCompleteFlag (const uint32 Instance, const uint8 ControlChanIdx)
{
  const uint32 Sc1Reg;
  const struct ADC_Type * const Base;
  int _1;
  long unsigned int _7;
  _Bool _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Base_4 = AdcBase[Instance_3(D)];
  # DEBUG Base => Base_4
  # DEBUG BEGIN_STMT
  _1 = (int) ControlChanIdx_5(D);
  Sc1Reg_6 ={v} Base_4->SC1[_1];
  # DEBUG Sc1Reg => Sc1Reg_6
  # DEBUG BEGIN_STMT
  # DEBUG Reg => Sc1Reg_6
  # DEBUG INLINE_ENTRY Adc_HwAcc_GetCOCO
  # DEBUG BEGIN_STMT
  _7 = Sc1Reg_6 >> 7;
  _8 = (_Bool) _7;
  # DEBUG Reg => NULL
  return _8;

}



;; Function Adc_Ip_GetConvData (Adc_Ip_GetConvData, funcdef_no=31, decl_uid=5766, cgraph_uid=32, symbol_order=33)

Modification phase of node Adc_Ip_GetConvData/33
Adc_Ip_GetConvData (const uint32 Instance, const uint8 ControlChanIdx)
{
  uint16 Result;
  const struct ADC_Type * const Base;
  int _5;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Base_3 = AdcBase[Instance_2(D)];
  # DEBUG Base => Base_3
  # DEBUG BEGIN_STMT
  # DEBUG Base => Base_3
  # DEBUG ChnIdx => ControlChanIdx_4(D)
  # DEBUG INLINE_ENTRY Adc_HwAcc_GetData
  # DEBUG BEGIN_STMT
  _5 = (int) ControlChanIdx_4(D);
  _6 ={v} Base_3->R[_5];
  Result_7 = (uint16) _6;
  # DEBUG Result => Result_7
  # DEBUG BEGIN_STMT
  Result_8 = Result_7 & 4095;
  # DEBUG Result => Result_8
  # DEBUG BEGIN_STMT
  # DEBUG Base => NULL
  # DEBUG ChnIdx => NULL
  # DEBUG Result => NULL
  return Result_8;

}



;; Function Adc_Ip_DoCalibration (Adc_Ip_DoCalibration, funcdef_no=32, decl_uid=5768, cgraph_uid=33, symbol_order=34)

Modification phase of node Adc_Ip_DoCalibration/34
Adc_Ip_DoCalibration (const uint32 Instance)
{
  Adc_Ip_TrigType ReturnValue;
  struct Adc_Ip_ClockConfigType CalClockConfig;
  struct Adc_Ip_ClockConfigType PreClockConfig;
  uint32 Reg;
  uint32 ElapsedTicks;
  uint32 CurrentTicks;
  uint32 TimeoutTicks;
  Adc_Ip_StatusType Status;
  struct ADC_Type * const Base;
  long unsigned int _1;
  long unsigned int _2;
  _Bool _3;
  <unnamed type> _4;
  unsigned char _5;
  long unsigned int _6;
  <unnamed type> _7;
  <unnamed type> _8;
  <unnamed type> _9;
  long unsigned int _10;
  long unsigned int _11;
  long unsigned int _31;
  long unsigned int _53;
  long unsigned int vol.9_56;

  <bb 2> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  Base_17 = AdcBase[Instance_16(D)];
  # DEBUG Base => Base_17
  # DEBUG BEGIN_STMT
  # DEBUG Status => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  TimeoutTicks_19 = OsIf_MicrosToTicks (10000, 0);
  # DEBUG TimeoutTicks => TimeoutTicks_19
  # DEBUG BEGIN_STMT
  _1 = OsIf_GetCounter (0);
  CurrentTicks = _1;
  # DEBUG BEGIN_STMT
  # DEBUG ElapsedTicks => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Reg_22 ={v} Base_17->SC3;
  # DEBUG Reg => Reg_22
  # DEBUG BEGIN_STMT
  _2 = Reg_22 >> 2;
  _3 = (_Bool) _2;
  PreClockConfig.AvgEn = _3;
  # DEBUG BEGIN_STMT
  _4 = Adc_HwAcc_GetAverageSelect (Reg_22);
  PreClockConfig.AvgSel = _4;
  # DEBUG BEGIN_STMT
  Reg_25 ={v} Base_17->CFG2;
  # DEBUG Reg => Reg_25
  # DEBUG BEGIN_STMT
  _5 = (unsigned char) Reg_25;
  PreClockConfig.SampleTime = _5;
  # DEBUG BEGIN_STMT
  _6 ={v} Base_17->SC2;
  # DEBUG Reg => _6
  # DEBUG INLINE_ENTRY Adc_HwAcc_GetTriggerMode
  # DEBUG BEGIN_STMT
  # DEBUG ReturnValue => 0
  # DEBUG BEGIN_STMT
  _31 = _6 & 64;
  if (_31 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 57431766]:
  # DEBUG BEGIN_STMT
  # DEBUG ReturnValue => 1

  <bb 4> [local count: 114863532]:
  # ReturnValue_29 = PHI <0(2), 1(3)>
  # DEBUG ReturnValue => ReturnValue_29
  # DEBUG BEGIN_STMT
  # DEBUG Reg => NULL
  # DEBUG ReturnValue => NULL
  # DEBUG TriggerMode => ReturnValue_29
  # DEBUG BEGIN_STMT
  Reg_28 ={v} Base_17->CFG1;
  # DEBUG Reg => Reg_28
  # DEBUG BEGIN_STMT
  _7 = Adc_HwAcc_GetClockDivide (Reg_28);
  PreClockConfig.ClockDivide = _7;
  # DEBUG BEGIN_STMT
  _8 = Adc_HwAcc_GetInputClock (Reg_28);
  PreClockConfig.InputClock = _8;
  # DEBUG BEGIN_STMT
  CalClockConfig.AvgEn = 1;
  # DEBUG BEGIN_STMT
  CalClockConfig.AvgSel = 3;
  # DEBUG BEGIN_STMT
  CalClockConfig.SampleTime = 12;
  # DEBUG BEGIN_STMT
  _9 = AdcIpState[Instance_16(D)].CalibrationClockDivide;
  CalClockConfig.ClockDivide = _9;
  # DEBUG BEGIN_STMT
  CalClockConfig.InputClock = _8;
  # DEBUG BEGIN_STMT
  Adc_DoCalibration_SetParams (Base_17, &CalClockConfig, 0);
  # DEBUG BEGIN_STMT
  Base_17->CLPS ={v} 0;
  # DEBUG BEGIN_STMT
  Base_17->CLP3 ={v} 0;
  # DEBUG BEGIN_STMT
  Base_17->CLP2 ={v} 0;
  # DEBUG BEGIN_STMT
  Base_17->CLP1 ={v} 0;
  # DEBUG BEGIN_STMT
  Base_17->CLP0 ={v} 0;
  # DEBUG BEGIN_STMT
  Base_17->CLPX ={v} 0;
  # DEBUG BEGIN_STMT
  Base_17->CLP9 ={v} 0;
  # DEBUG BEGIN_STMT
  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_29 ();
  # DEBUG BEGIN_STMT
  Reg_47 ={v} Base_17->SC3;
  # DEBUG Reg => Reg_47
  # DEBUG BEGIN_STMT
  Reg_48 = Reg_47 & 4294967167;
  # DEBUG Reg => Reg_48
  # DEBUG BEGIN_STMT
  Reg_49 = Reg_48 | 128;
  # DEBUG Reg => Reg_49
  # DEBUG BEGIN_STMT
  Base_17->SC3 ={v} Reg_49;
  # DEBUG BEGIN_STMT
  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_29 ();
  # DEBUG BEGIN_STMT
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 958878293]:
  # DEBUG BEGIN_STMT
  _53 = OsIf_GetElapsed (&CurrentTicks, 0);
  ElapsedTicks_54 = ElapsedTicks_13 + _53;
  # DEBUG ElapsedTicks => ElapsedTicks_54

  <bb 6> [local count: 1073741824]:
  # ElapsedTicks_13 = PHI <0(4), ElapsedTicks_54(5)>
  # DEBUG ElapsedTicks => ElapsedTicks_13
  # DEBUG BEGIN_STMT
  _10 ={v} Base_17->SC3;
  _11 = _10 & 128;
  if (_11 != 0)
    goto <bb 7>; [94.50%]
  else
    goto <bb 8>; [5.50%]

  <bb 7> [local count: 1014686025]:
  if (ElapsedTicks_13 < TimeoutTicks_19)
    goto <bb 5>; [94.50%]
  else
    goto <bb 8>; [5.50%]

  <bb 8> [local count: 114863532]:
  # ElapsedTicks_27 = PHI <ElapsedTicks_13(6), ElapsedTicks_13(7)>
  # DEBUG BEGIN_STMT
  if (TimeoutTicks_19 <= ElapsedTicks_27)
    goto <bb 9>; [35.00%]
  else
    goto <bb 10>; [65.00%]

  <bb 9> [local count: 40202236]:
  # DEBUG BEGIN_STMT
  # DEBUG Status => 2

  <bb 10> [local count: 114863532]:
  # Status_12 = PHI <0(8), 2(9)>
  # DEBUG Status => Status_12
  # DEBUG BEGIN_STMT
  Adc_DoCalibration_SetParams (Base_17, &PreClockConfig, ReturnValue_29);
  # DEBUG BEGIN_STMT
  vol.9_56 ={v} Base_17->R[0];
  # DEBUG BEGIN_STMT
  CurrentTicks ={v} {CLOBBER};
  PreClockConfig ={v} {CLOBBER};
  CalClockConfig ={v} {CLOBBER};
  return Status_12;

}



;; Function Adc_Ip_ClearLatchedTriggers (Adc_Ip_ClearLatchedTriggers, funcdef_no=33, decl_uid=5770, cgraph_uid=34, symbol_order=35)

Modification phase of node Adc_Ip_ClearLatchedTriggers/35
Adc_Ip_ClearLatchedTriggers (const uint32 Instance)
{
  uint32 ElapsedTicks;
  uint32 CurrentTicks;
  uint32 TimeoutTicks;
  Adc_Ip_StatusType Status;
  struct ADC_Type * const Base;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _20;

  <bb 2> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  Base_11 = AdcBase[Instance_10(D)];
  # DEBUG Base => Base_11
  # DEBUG BEGIN_STMT
  # DEBUG Status => 0
  # DEBUG BEGIN_STMT
  TimeoutTicks_13 = OsIf_MicrosToTicks (10000, 0);
  # DEBUG TimeoutTicks => TimeoutTicks_13
  # DEBUG BEGIN_STMT
  _1 = OsIf_GetCounter (0);
  CurrentTicks = _1;
  # DEBUG BEGIN_STMT
  # DEBUG ElapsedTicks => 0
  # DEBUG BEGIN_STMT
  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_12 ();
  # DEBUG BEGIN_STMT
  _2 ={v} Base_11->CFG1;
  _3 = _2 | 256;
  Base_11->CFG1 ={v} _3;
  # DEBUG BEGIN_STMT
  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_12 ();
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 958878293]:
  # DEBUG BEGIN_STMT
  _20 = OsIf_GetElapsed (&CurrentTicks, 0);
  ElapsedTicks_21 = ElapsedTicks_7 + _20;
  # DEBUG ElapsedTicks => ElapsedTicks_21

  <bb 4> [local count: 1073741824]:
  # ElapsedTicks_7 = PHI <0(2), ElapsedTicks_21(3)>
  # DEBUG ElapsedTicks => ElapsedTicks_7
  # DEBUG BEGIN_STMT
  _4 ={v} Base_11->SC2;
  _5 = _4 & 983040;
  if (_5 != 0)
    goto <bb 5>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 5> [local count: 1014686025]:
  if (ElapsedTicks_7 < TimeoutTicks_13)
    goto <bb 3>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 6> [local count: 114863532]:
  # ElapsedTicks_22 = PHI <ElapsedTicks_7(4), ElapsedTicks_7(5)>
  # DEBUG BEGIN_STMT
  if (TimeoutTicks_13 <= ElapsedTicks_22)
    goto <bb 7>; [35.00%]
  else
    goto <bb 8>; [65.00%]

  <bb 7> [local count: 40202236]:
  # DEBUG BEGIN_STMT
  # DEBUG Status => 2

  <bb 8> [local count: 114863532]:
  # Status_6 = PHI <0(6), 2(7)>
  # DEBUG Status => Status_6
  # DEBUG BEGIN_STMT
  CurrentTicks ={v} {CLOBBER};
  return Status_6;

}



;; Function Adc_Ip_EnableChannelNotification (Adc_Ip_EnableChannelNotification, funcdef_no=34, decl_uid=5773, cgraph_uid=35, symbol_order=36)

Modification phase of node Adc_Ip_EnableChannelNotification/36
Adc_Ip_EnableChannelNotification (const uint32 Instance, const uint8 ControlChanIdx)
{
  struct ADC_Type * const Base;
  int _1;
  long unsigned int _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Base_6 = AdcBase[Instance_5(D)];
  # DEBUG Base => Base_6
  # DEBUG BEGIN_STMT
  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_19 ();
  # DEBUG BEGIN_STMT
  _1 = (int) ControlChanIdx_8(D);
  _2 ={v} Base_6->SC1[_1];
  _3 = _2 | 64;
  Base_6->SC1[_1] ={v} _3;
  # DEBUG BEGIN_STMT
  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_19 ();
  return;

}



;; Function Adc_Ip_DisableChannelNotification (Adc_Ip_DisableChannelNotification, funcdef_no=35, decl_uid=5776, cgraph_uid=36, symbol_order=37)

Modification phase of node Adc_Ip_DisableChannelNotification/37
Adc_Ip_DisableChannelNotification (const uint32 Instance, const uint8 ControlChanIdx)
{
  struct ADC_Type * const Base;
  int _1;
  long unsigned int _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Base_6 = AdcBase[Instance_5(D)];
  # DEBUG Base => Base_6
  # DEBUG BEGIN_STMT
  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_20 ();
  # DEBUG BEGIN_STMT
  _1 = (int) ControlChanIdx_8(D);
  _2 ={v} Base_6->SC1[_1];
  _3 = _2 & 4294967231;
  Base_6->SC1[_1] ={v} _3;
  # DEBUG BEGIN_STMT
  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_20 ();
  return;

}



;; Function Adc_Ip_ClearTrigErrReg (Adc_Ip_ClearTrigErrReg, funcdef_no=36, decl_uid=5778, cgraph_uid=37, symbol_order=38)

Modification phase of node Adc_Ip_ClearTrigErrReg/38
Adc_Ip_ClearTrigErrReg (const uint32 Instance)
{
  struct ADC_Type * const Base;
  long unsigned int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Base_5 = AdcBase[Instance_4(D)];
  # DEBUG Base => Base_5
  # DEBUG BEGIN_STMT
  SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_25 ();
  # DEBUG BEGIN_STMT
  _1 ={v} Base_5->SC2;
  _2 = _1 | 251658240;
  Base_5->SC2 ={v} _2;
  # DEBUG BEGIN_STMT
  SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_25 ();
  return;

}



;; Function Adc_Ip_GetTrigErrReg (Adc_Ip_GetTrigErrReg, funcdef_no=37, decl_uid=5780, cgraph_uid=38, symbol_order=39)

Modification phase of node Adc_Ip_GetTrigErrReg/39
Adc_Ip_GetTrigErrReg (const uint32 Instance)
{
  const struct ADC_Type * const Base;
  long unsigned int _1;
  long unsigned int _2;
  uint32 _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Base_5 = AdcBase[Instance_4(D)];
  # DEBUG Base => Base_5
  # DEBUG BEGIN_STMT
  _1 ={v} Base_5->SC2;
  _2 = _1 >> 24;
  _6 = _2 & 15;
  return _6;

}



;; Function Adc_Ip_GetDataAddress (Adc_Ip_GetDataAddress, funcdef_no=38, decl_uid=5783, cgraph_uid=39, symbol_order=40)

Modification phase of node Adc_Ip_GetDataAddress/40
Adc_Ip_GetDataAddress (const uint32 Instance, const uint8 Index)
{
  struct ADC_Type * _1;
  int _2;
  const uint32_t * _3;
  uint32 _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = AdcBase[Instance_5(D)];
  _2 = (int) Index_6(D);
  _3 = &_1->R[_2];
  _7 = (uint32) _3;
  return _7;

}



;; Function Adc_Ip_GetChanData (Adc_Ip_GetChanData, funcdef_no=39, decl_uid=5787, cgraph_uid=40, symbol_order=41)

Modification phase of node Adc_Ip_GetChanData/41
Adc_Ip_GetChanData (const uint32 Instance, const Adc_Ip_InputChannelType Channel, uint16 * const Result)
{
  boolean Found;
  uint8 ControlChanIdx;
  uint16 Temp;
  Adc_Ip_StatusType Status;
  const struct ADC_Type * const Base;
  int _1;
  <unnamed type> _2;
  int _4;
  long unsigned int _5;

  <bb 2> [local count: 118719338]:
  # DEBUG BEGIN_STMT
  Base_12 = AdcBase[Instance_11(D)];
  # DEBUG Base => Base_12
  # DEBUG BEGIN_STMT
  # DEBUG Status => 0
  # DEBUG BEGIN_STMT
  # DEBUG Temp => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Found => 0
  # DEBUG BEGIN_STMT
  # DEBUG ControlChanIdx => 0
  goto <bb 5>; [100.00%]

  <bb 3> [local count: 1010605805]:
  # DEBUG BEGIN_STMT
  _1 = (int) ControlChanIdx_8;
  _2 = AdcIpState[Instance_11(D)].ChannelConfig[_1];
  if (_2 == Channel_13(D))
    goto <bb 6>; [5.50%]
  else
    goto <bb 4>; [94.50%]

  <bb 4> [local count: 955022485]:
  # DEBUG BEGIN_STMT
  ControlChanIdx_14 = ControlChanIdx_8 + 1;
  # DEBUG ControlChanIdx => ControlChanIdx_14

  <bb 5> [local count: 1073741824]:
  # ControlChanIdx_8 = PHI <0(2), ControlChanIdx_14(4)>
  # DEBUG ControlChanIdx => ControlChanIdx_8
  # DEBUG BEGIN_STMT
  if (ControlChanIdx_8 != 16)
    goto <bb 3>; [94.12%]
  else
    goto <bb 6>; [5.88%]

  <bb 6> [local count: 118719339]:
  # Found_9 = PHI <1(3), 0(5)>
  # ControlChanIdx_3 = PHI <ControlChanIdx_8(3), ControlChanIdx_8(5)>
  # DEBUG Found => Found_9
  # DEBUG BEGIN_STMT
  if (Found_9 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 59359669]:
  # DEBUG BEGIN_STMT
  _4 = (int) ControlChanIdx_3;
  _5 ={v} Base_12->R[_4];
  Temp_15 = (uint16) _5;
  # DEBUG Temp => Temp_15
  # DEBUG BEGIN_STMT
  Temp_16 = Temp_15 & 4095;
  # DEBUG Temp => Temp_16

  <bb 8> [local count: 118719339]:
  # Status_6 = PHI <0(7), 1(6)>
  # Temp_7 = PHI <Temp_16(7), 0(6)>
  # DEBUG Temp => Temp_7
  # DEBUG Status => Status_6
  # DEBUG BEGIN_STMT
  *Result_17(D) = Temp_7;
  # DEBUG BEGIN_STMT
  return Status_6;

}



;; Function Adc_Ip_SetSoftwarePretrigger (Adc_Ip_SetSoftwarePretrigger, funcdef_no=40, decl_uid=5790, cgraph_uid=41, symbol_order=42)

Modification phase of node Adc_Ip_SetSoftwarePretrigger/42
Adc_Ip_SetSoftwarePretrigger (const uint32 Instance, const Adc_Ip_SoftwarePretriggerType SoftwarePretrigger)
{
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (unsigned char) SoftwarePretrigger_2(D);
  ADC_SetSoftwarePretrigger_TrustedCall (Instance_4(D), _1);
  return;

}



;; Function Adc_Ip_IRQHandler (Adc_Ip_IRQHandler, funcdef_no=41, decl_uid=6346, cgraph_uid=42, symbol_order=43)

Modification phase of node Adc_Ip_IRQHandler/43
Adc_Ip_IRQHandler (const uint32 Instance)
{
  uint8 ControlChanIdx;
  uint32 Sc1Reg;
  const struct ADC_Type * const Base;
  _Bool _1;
  void (*<T4df>) (const uint8) _2;
  int _3;
  void (*<T4df>) (const uint8) _4;
  <unnamed type> _5;
  _Bool _17;
  long unsigned int _18;
  long unsigned int _22;
  _Bool _23;
  long unsigned int _24;
  int _25;
  long unsigned int _26;

  <bb 2> [local count: 97132339]:
  # DEBUG BEGIN_STMT
  Base_14 = AdcBase[Instance_13(D)];
  # DEBUG Base => Base_14
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ChanIntFlag => 0
  # DEBUG BEGIN_STMT
  # DEBUG ChanCocoFlag => 0
  # DEBUG BEGIN_STMT
  _1 = AdcIpState[Instance_13(D)].Init;
  if (_1 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 63136020]:
  # ControlChanIdx_15 = PHI <0(2), 0(4)>
  goto <bb 14>; [100.00%]

  <bb 4> [local count: 48566169]:
  _2 = AdcIpState[Instance_13(D)].ConversionCompleteNotification;
  if (_2 != 0B)
    goto <bb 16>; [70.00%]
  else
    goto <bb 3>; [30.00%]

  <bb 16> [local count: 33996319]:
  goto <bb 12>; [100.00%]

  <bb 5> [local count: 544172357]:
  # DEBUG BEGIN_STMT
  _3 = (int) ControlChanIdx_6;
  Sc1Reg_16 ={v} Base_14->SC1[_3];
  # DEBUG Sc1Reg => Sc1Reg_16
  # DEBUG BEGIN_STMT
  # DEBUG Reg => Sc1Reg_16
  # DEBUG INLINE_ENTRY Adc_HwAcc_GetAIEN
  # DEBUG BEGIN_STMT
  _22 = Sc1Reg_16 >> 6;
  _23 = (_Bool) _22;
  # DEBUG Reg => NULL
  # DEBUG ChanIntFlag => _23
  # DEBUG BEGIN_STMT
  # DEBUG Reg => Sc1Reg_16
  # DEBUG INLINE_ENTRY Adc_HwAcc_GetCOCO
  # DEBUG BEGIN_STMT
  _18 = Sc1Reg_16 >> 7;
  _17 = (_Bool) _18;
  # DEBUG Reg => NULL
  # DEBUG ChanCocoFlag => _17
  # DEBUG BEGIN_STMT
  if (_23 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 6> [local count: 272086178]:
  if (_17 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 136043089]:
  # DEBUG BEGIN_STMT
  _4 = AdcIpState[Instance_13(D)].ConversionCompleteNotification;
  _4 (ControlChanIdx_6);
  goto <bb 11>; [100.00%]

  <bb 8> [local count: 408129267]:
  # DEBUG BEGIN_STMT
  _5 = AdcIpState[Instance_13(D)].ChannelConfig[_3];
  if (_5 == 31)
    goto <bb 9>; [34.00%]
  else
    goto <bb 11>; [66.00%]

  <bb 9> [local count: 138763951]:
  if (_17 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 69381975]:
  # DEBUG BEGIN_STMT
  # DEBUG Base => Base_14
  # DEBUG ChnIdx => ControlChanIdx_6
  # DEBUG INLINE_ENTRY Adc_HwAcc_GetData
  # DEBUG BEGIN_STMT
  _24 ={v} Base_14->R[_3];
  # DEBUG D#1 => (uint16) _24
  # DEBUG Result => D#1
  # DEBUG BEGIN_STMT
  # DEBUG Result => D#1 & 4095
  # DEBUG BEGIN_STMT

  <bb 11> [local count: 544172357]:
  # DEBUG Base => NULL
  # DEBUG ChnIdx => NULL
  # DEBUG Result => NULL
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ControlChanIdx_20 = ControlChanIdx_6 + 1;
  # DEBUG ControlChanIdx => ControlChanIdx_20

  <bb 12> [local count: 578168676]:
  # ControlChanIdx_6 = PHI <ControlChanIdx_20(11), 0(16)>
  # DEBUG ControlChanIdx => ControlChanIdx_6
  # DEBUG BEGIN_STMT
  if (ControlChanIdx_6 != 16)
    goto <bb 5>; [94.12%]
  else
    goto <bb 15>; [5.88%]

  <bb 13> [local count: 1010605806]:
  # DEBUG BEGIN_STMT
  # DEBUG Base => Base_14
  # DEBUG ChnIdx => ControlChanIdx_7
  # DEBUG INLINE_ENTRY Adc_HwAcc_GetData
  # DEBUG BEGIN_STMT
  _25 = (int) ControlChanIdx_7;
  _26 ={v} Base_14->R[_25];
  # DEBUG D#2 => (uint16) _26
  # DEBUG Result => D#2
  # DEBUG BEGIN_STMT
  # DEBUG Result => D#2 & 4095
  # DEBUG BEGIN_STMT
  # DEBUG Base => NULL
  # DEBUG ChnIdx => NULL
  # DEBUG Result => NULL
  # DEBUG BEGIN_STMT
  ControlChanIdx_21 = ControlChanIdx_7 + 1;
  # DEBUG ControlChanIdx => ControlChanIdx_21

  <bb 14> [local count: 1073741824]:
  # ControlChanIdx_7 = PHI <ControlChanIdx_15(3), ControlChanIdx_21(13)>
  # DEBUG ControlChanIdx => ControlChanIdx_7
  # DEBUG BEGIN_STMT
  if (ControlChanIdx_7 != 16)
    goto <bb 13>; [94.12%]
  else
    goto <bb 15>; [5.88%]

  <bb 15> [local count: 97132337]:
  return;

}


