
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  CanIf_ControllerBusOff/41:
  Jump functions of caller  Can_Ipw_ProcessRxMesgBuffer/40:
  Jump functions of caller  Can_Ipw_ProcessTxMesgBuffer/39:
  Jump functions of caller  Can_Ipw_MainFunction_Mode/38:
  Jump functions of caller  Can_Ipw_Write/37:
  Jump functions of caller  Can_Ipw_GetControllerTxErrorCounter/36:
  Jump functions of caller  Can_Ipw_GetControllerRxErrorCounter/35:
  Jump functions of caller  Can_Ipw_GetControllerErrorState/34:
  Jump functions of caller  Can_Ipw_EnableControllerInterrupts/33:
  Jump functions of caller  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_01/32:
  Jump functions of caller  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_01/31:
  Jump functions of caller  Can_Ipw_DisableControllerInterrupts/30:
  Jump functions of caller  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_00/29:
  Jump functions of caller  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_00/28:
  Jump functions of caller  Can_Ipw_SetControllerToStopMode/27:
  Jump functions of caller  CanIf_ControllerModeIndication/26:
  Jump functions of caller  Can_Ipw_SetControllerToStartMode/25:
  Jump functions of caller  Can_Ipw_DeInit/24:
  Jump functions of caller  Can_Ipw_InitRx/23:
  Jump functions of caller  Can_Ipw_Init/22:
  Jump functions of caller  Can_ProcessBusOffInterrupt/21:
  Jump functions of caller  Can_ProcessMesgBufferCommonInterrupt/20:
  Jump functions of caller  Can_MainFunction_Mode/19:
  Jump functions of caller  Can_MainFunction_BusOff/18:
  Jump functions of caller  Can_MainFunction_Read/17:
  Jump functions of caller  Can_MainFunction_Write/16:
  Jump functions of caller  Can_Write/15:
  Jump functions of caller  Can_GetControllerTxErrorCounter/14:
  Jump functions of caller  Can_GetControllerRxErrorCounter/13:
  Jump functions of caller  Can_GetControllerMode/12:
  Jump functions of caller  Can_GetControllerErrorState/11:
  Jump functions of caller  Can_EnableControllerInterrupts/10:
  Jump functions of caller  Can_DisableControllerInterrupts/9:
  Jump functions of caller  Can_SetControllerMode/8:
  Jump functions of caller  Can_DeInit/7:
    callsite  Can_DeInit/7 -> Can_DeInitControllers/5 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Can_Init/6:
    callsite  Can_Init/6 -> Can_InitControllers/4 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Can_Init/6 -> Can_IsControllersBusy/3 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Can_DeInitControllers/5:
  Jump functions of caller  Can_InitControllers/4:
  Jump functions of caller  Can_IsControllersBusy/3:

 Propagating constants:

Not considering Can_ProcessBusOffInterrupt for cloning; -fipa-cp-clone disabled.
Not considering Can_ProcessMesgBufferCommonInterrupt for cloning; -fipa-cp-clone disabled.
Not considering Can_MainFunction_Mode for cloning; -fipa-cp-clone disabled.
Function Can_MainFunction_BusOff/18 is not versionable, reason: not a tree_versionable_function.
Function Can_MainFunction_Read/17 is not versionable, reason: not a tree_versionable_function.
Not considering Can_MainFunction_Write for cloning; -fipa-cp-clone disabled.
Not considering Can_Write for cloning; -fipa-cp-clone disabled.
Not considering Can_GetControllerTxErrorCounter for cloning; -fipa-cp-clone disabled.
Not considering Can_GetControllerRxErrorCounter for cloning; -fipa-cp-clone disabled.
Not considering Can_GetControllerMode for cloning; -fipa-cp-clone disabled.
Not considering Can_GetControllerErrorState for cloning; -fipa-cp-clone disabled.
Not considering Can_EnableControllerInterrupts for cloning; -fipa-cp-clone disabled.
Not considering Can_DisableControllerInterrupts for cloning; -fipa-cp-clone disabled.
Not considering Can_SetControllerMode for cloning; -fipa-cp-clone disabled.
Not considering Can_DeInit for cloning; -fipa-cp-clone disabled.
Not considering Can_Init for cloning; -fipa-cp-clone disabled.

overall_size: 353, max_new_size: 11001
 - context independent values, size: 15, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 34, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 12, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: Can_ProcessBusOffInterrupt/21:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Can_ProcessMesgBufferCommonInterrupt/20:
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
  Node: Can_MainFunction_Mode/19:
  Node: Can_MainFunction_BusOff/18:
  Node: Can_MainFunction_Read/17:
  Node: Can_MainFunction_Write/16:
  Node: Can_Write/15:
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
  Node: Can_GetControllerTxErrorCounter/14:
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
  Node: Can_GetControllerRxErrorCounter/13:
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
  Node: Can_GetControllerMode/12:
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
  Node: Can_GetControllerErrorState/11:
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
  Node: Can_EnableControllerInterrupts/10:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Can_DisableControllerInterrupts/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Can_SetControllerMode/8:
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
  Node: Can_DeInit/7:
  Node: Can_Init/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Can_DeInitControllers/5:
    param [0]: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x0
         uint32 [0, 0]
        AGGS VARIABLE
  Node: Can_InitControllers/4:
    param [0]: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x0
         uint32 [0, 0]
        AGGS VARIABLE
  Node: Can_IsControllersBusy/3:
    param [0]: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x0
         uint32 [0, 0]
        AGGS VARIABLE

IPA decision stage:

 - Creating a specialized node of Can_DeInitControllers/5 for all known contexts.
    replacing param #0 u32CoreId with const 0
 - Creating a specialized node of Can_InitControllers/4 for all known contexts.
    replacing param #0 u32CoreId with const 0
 - Creating a specialized node of Can_IsControllersBusy/3 for all known contexts.
    replacing param #0 u32CoreId with const 0
Propagated bits info for function Can_IsControllersBusy.constprop/44:
 param 0: value = 0x0, mask = 0x0
Propagated bits info for function Can_InitControllers.constprop/43:
 param 0: value = 0x0, mask = 0x0
Propagated bits info for function Can_DeInitControllers.constprop/42:
 param 0: value = 0x0, mask = 0x0
Propagated bits info for function Can_DeInitControllers/5:
 param 0: value = 0x0, mask = 0x0
Propagated bits info for function Can_InitControllers/4:
 param 0: value = 0x0, mask = 0x0
Propagated bits info for function Can_IsControllersBusy/3:
 param 0: value = 0x0, mask = 0x0

IPA constant propagation end

Reclaiming functions: Can_DeInitControllers/5 Can_InitControllers/4 Can_IsControllersBusy/3
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Can_IsControllersBusy.constprop.0/44 (Can_IsControllersBusy.constprop) @06396460
  Type: function definition analyzed
  Visibility:
  References: Can_apxConfig/2 (read)Can_eControllerState/1 (read)
  Referring: 
  Clone of Can_IsControllersBusy/3
  Availability: local
  Function flags: count:96446979 (estimated locally) local optimize_size
  Called by: Can_Init/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Can_InitControllers.constprop.0/43 (Can_InitControllers.constprop) @063962a0
  Type: function definition analyzed
  Visibility:
  References: Can_apxConfig/2 (read)Can_au8DisableInterruptLevel/0 (write)Can_eControllerState/1 (write)Can_apxConfig/2 (read)Can_eControllerState/1 (write)
  Referring: 
  Clone of Can_InitControllers/4
  Availability: local
  Function flags: count:61112314 (estimated locally) local optimize_size
  Called by: Can_Init/6 (354334802 (estimated locally),0.33 per call) 
  Calls: Can_Ipw_Init/22 (37391180 (estimated locally),0.61 per call) Can_Ipw_InitRx/23 (12339089 (estimated locally),0.20 per call) 
Can_DeInitControllers.constprop.0/42 (Can_DeInitControllers.constprop) @063960e0
  Type: function definition analyzed
  Visibility:
  References: Can_apxConfig/2 (read)Can_eControllerState/1 (write)
  Referring: 
  Clone of Can_DeInitControllers/5
  Availability: local
  Function flags: count:59055799 (estimated locally) local optimize_size
  Called by: Can_DeInit/7 (31827504 (estimated locally),0.33 per call) 
  Calls: Can_Ipw_DeInit/24 (37391180 (estimated locally),0.63 per call) 
CanIf_ControllerBusOff/41 (CanIf_ControllerBusOff) @0619d9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_ProcessBusOffInterrupt/21 (132623973 (estimated locally),0.12 per call) 
  Calls: 
Can_Ipw_ProcessRxMesgBuffer/40 (Can_Ipw_ProcessRxMesgBuffer) @0619d700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_ProcessMesgBufferCommonInterrupt/20 (131533373 (estimated locally),0.12 per call) Can_ProcessMesgBufferCommonInterrupt/20 (131533373 (estimated locally),0.12 per call) 
  Calls: 
Can_Ipw_ProcessTxMesgBuffer/39 (Can_Ipw_ProcessTxMesgBuffer) @0619d620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_ProcessMesgBufferCommonInterrupt/20 (131533373 (estimated locally),0.12 per call) 
  Calls: 
Can_Ipw_MainFunction_Mode/38 (Can_Ipw_MainFunction_Mode) @0619d460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_MainFunction_Mode/19 (37391180 (estimated locally),0.44 per call) 
  Calls: 
Can_Ipw_Write/37 (Can_Ipw_Write) @0619d000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_Write/15 (152127742 (estimated locally),0.14 per call) 
  Calls: 
Can_Ipw_GetControllerTxErrorCounter/36 (Can_Ipw_GetControllerTxErrorCounter) @06191e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_GetControllerTxErrorCounter/14 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Can_Ipw_GetControllerRxErrorCounter/35 (Can_Ipw_GetControllerRxErrorCounter) @06191c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_GetControllerRxErrorCounter/13 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Can_Ipw_GetControllerErrorState/34 (Can_Ipw_GetControllerErrorState) @061919a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_GetControllerErrorState/11 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Can_Ipw_EnableControllerInterrupts/33 (Can_Ipw_EnableControllerInterrupts) @061917e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_EnableControllerInterrupts/10 (354334802 (estimated locally),0.33 per call) 
  Calls: 
SchM_Exit_Can_CAN_EXCLUSIVE_AREA_01/32 (SchM_Exit_Can_CAN_EXCLUSIVE_AREA_01) @06191700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_EnableControllerInterrupts/10 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Can_CAN_EXCLUSIVE_AREA_01/31 (SchM_Enter_Can_CAN_EXCLUSIVE_AREA_01) @06191620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_EnableControllerInterrupts/10 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Can_Ipw_DisableControllerInterrupts/30 (Can_Ipw_DisableControllerInterrupts) @06191460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_DisableControllerInterrupts/9 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Can_CAN_EXCLUSIVE_AREA_00/29 (SchM_Exit_Can_CAN_EXCLUSIVE_AREA_00) @06191380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_DisableControllerInterrupts/9 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Can_CAN_EXCLUSIVE_AREA_00/28 (SchM_Enter_Can_CAN_EXCLUSIVE_AREA_00) @061912a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_DisableControllerInterrupts/9 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Can_Ipw_SetControllerToStopMode/27 (Can_Ipw_SetControllerToStopMode) @06191000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_ProcessBusOffInterrupt/21 (401890828 (estimated locally),0.37 per call) Can_SetControllerMode/8 (89469538 (estimated locally),0.08 per call) 
  Calls: 
CanIf_ControllerModeIndication/26 (CanIf_ControllerModeIndication) @062bbee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_SetControllerMode/8 (68451041 (estimated locally),0.06 per call) Can_SetControllerMode/8 (89469538 (estimated locally),0.08 per call) Can_SetControllerMode/8 (29524947 (estimated locally),0.03 per call) Can_SetControllerMode/8 (17929341 (estimated locally),0.02 per call) 
  Calls: 
Can_Ipw_SetControllerToStartMode/25 (Can_Ipw_SetControllerToStartMode) @062bbe00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_SetControllerMode/8 (54331336 (estimated locally),0.05 per call) 
  Calls: 
Can_Ipw_DeInit/24 (Can_Ipw_DeInit) @062bbb60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_DeInitControllers.constprop/42 (37391180 (estimated locally),0.63 per call) 
  Calls: 
Can_Ipw_InitRx/23 (Can_Ipw_InitRx) @062bb7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_InitControllers.constprop/43 (12339089 (estimated locally),0.20 per call) 
  Calls: 
Can_Ipw_Init/22 (Can_Ipw_Init) @062bb700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_InitControllers.constprop/43 (37391180 (estimated locally),0.61 per call) 
  Calls: 
Can_ProcessBusOffInterrupt/21 (Can_ProcessBusOffInterrupt) @062bb000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Can_apxConfig/2 (read)Can_eControllerState/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: CanIf_ControllerBusOff/41 (132623973 (estimated locally),0.12 per call) Can_Ipw_SetControllerToStopMode/27 (401890828 (estimated locally),0.37 per call) 
Can_ProcessMesgBufferCommonInterrupt/20 (Can_ProcessMesgBufferCommonInterrupt) @062afb60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Can_apxConfig/2 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Can_Ipw_ProcessRxMesgBuffer/40 (131533373 (estimated locally),0.12 per call) Can_Ipw_ProcessRxMesgBuffer/40 (131533373 (estimated locally),0.12 per call) Can_Ipw_ProcessTxMesgBuffer/39 (131533373 (estimated locally),0.12 per call) 
Can_MainFunction_Mode/19 (Can_MainFunction_Mode) @062af620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Can_apxConfig/2 (read)Can_apxConfig/2 (read)Can_eControllerState/1 (addr)
  Referring: 
  Availability: available
  Function flags: count:84365427 (estimated locally) body optimize_size
  Called by: 
  Calls: Can_Ipw_MainFunction_Mode/38 (37391180 (estimated locally),0.44 per call) 
Can_MainFunction_BusOff/18 (Can_MainFunction_BusOff) @062af0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Can_MainFunction_Write/16 (1073741824 (estimated locally),1.00 per call) 
Can_MainFunction_Read/17 (Can_MainFunction_Read) @062afd20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Can_MainFunction_Write/16 (1073741824 (estimated locally),1.00 per call) 
Can_MainFunction_Write/16 (Can_MainFunction_Write) @062afa80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: Can_MainFunction_BusOff/18 (1073741824 (estimated locally),1.00 per call) Can_MainFunction_Read/17 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Can_Write/15 (Can_Write) @062af7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Can_apxConfig/2 (read)Can_eControllerState/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Can_Ipw_Write/37 (152127742 (estimated locally),0.14 per call) 
Can_GetControllerTxErrorCounter/14 (Can_GetControllerTxErrorCounter) @062af540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Can_apxConfig/2 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Can_Ipw_GetControllerTxErrorCounter/36 (1073741824 (estimated locally),1.00 per call) 
Can_GetControllerRxErrorCounter/13 (Can_GetControllerRxErrorCounter) @062af2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Can_apxConfig/2 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Can_Ipw_GetControllerRxErrorCounter/35 (1073741824 (estimated locally),1.00 per call) 
Can_GetControllerMode/12 (Can_GetControllerMode) @062af000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Can_eControllerState/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Can_GetControllerErrorState/11 (Can_GetControllerErrorState) @0624fb60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Can_apxConfig/2 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Can_Ipw_GetControllerErrorState/34 (1073741824 (estimated locally),1.00 per call) 
Can_EnableControllerInterrupts/10 (Can_EnableControllerInterrupts) @0624f620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Can_apxConfig/2 (read)Can_au8DisableInterruptLevel/0 (read)Can_au8DisableInterruptLevel/0 (write)Can_au8DisableInterruptLevel/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Can_Ipw_EnableControllerInterrupts/33 (354334802 (estimated locally),0.33 per call) SchM_Exit_Can_CAN_EXCLUSIVE_AREA_01/32 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Can_CAN_EXCLUSIVE_AREA_01/31 (1073741824 (estimated locally),1.00 per call) 
Can_DisableControllerInterrupts/9 (Can_DisableControllerInterrupts) @0624f0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Can_apxConfig/2 (read)Can_au8DisableInterruptLevel/0 (read)Can_au8DisableInterruptLevel/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Can_Ipw_DisableControllerInterrupts/30 (1073741824 (estimated locally),1.00 per call) SchM_Exit_Can_CAN_EXCLUSIVE_AREA_00/29 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Can_CAN_EXCLUSIVE_AREA_00/28 (1073741824 (estimated locally),1.00 per call) 
Can_SetControllerMode/8 (Can_SetControllerMode) @0624fd20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Can_apxConfig/2 (read)Can_eControllerState/1 (read)Can_eControllerState/1 (write)Can_eControllerState/1 (read)Can_eControllerState/1 (write)Can_eControllerState/1 (write)Can_eControllerState/1 (read)Can_eControllerState/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: CanIf_ControllerModeIndication/26 (68451041 (estimated locally),0.06 per call) CanIf_ControllerModeIndication/26 (89469538 (estimated locally),0.08 per call) CanIf_ControllerModeIndication/26 (29524947 (estimated locally),0.03 per call) Can_Ipw_SetControllerToStopMode/27 (89469538 (estimated locally),0.08 per call) CanIf_ControllerModeIndication/26 (17929341 (estimated locally),0.02 per call) Can_Ipw_SetControllerToStartMode/25 (54331336 (estimated locally),0.05 per call) 
Can_DeInit/7 (Can_DeInit) @0624fa80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Can_apxConfig/2 (read)Can_eControllerState/1 (read)Can_apxConfig/2 (write)
  Referring: 
  Availability: available
  Function flags: count:96446979 (estimated locally) body optimize_size
  Called by: 
  Calls: Can_DeInitControllers.constprop/42 (31827504 (estimated locally),0.33 per call) 
Can_Init/6 (Can_Init) @0624f7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Can_apxConfig/2 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Can_InitControllers.constprop/43 (354334802 (estimated locally),0.33 per call) Can_IsControllersBusy.constprop/44 (1073741824 (estimated locally),1.00 per call) 
Can_DeInitControllers/5 (Can_DeInitControllers) @0624f540
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:59055799 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Can_InitControllers/4 (Can_InitControllers) @0624f2a0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:61112314 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Can_IsControllersBusy/3 (Can_IsControllersBusy) @0624f000
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:96446979 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Can_apxConfig/2 (Can_apxConfig) @06248438
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Can_InitControllers.constprop.0/43 (read)Can_MainFunction_Mode/19 (read)Can_Write/15 (read)Can_MainFunction_Mode/19 (read)Can_ProcessMesgBufferCommonInterrupt/20 (read)Can_InitControllers.constprop.0/43 (read)Can_IsControllersBusy.constprop.0/44 (read)Can_DeInit/7 (read)Can_DeInitControllers.constprop.0/42 (read)Can_Init/6 (write)Can_DeInit/7 (write)Can_SetControllerMode/8 (read)Can_DisableControllerInterrupts/9 (read)Can_EnableControllerInterrupts/10 (read)Can_GetControllerErrorState/11 (read)Can_GetControllerRxErrorCounter/13 (read)Can_GetControllerTxErrorCounter/14 (read)Can_ProcessBusOffInterrupt/21 (read)
  Availability: available
  Varpool flags:
Can_eControllerState/1 (Can_eControllerState) @06248360
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Can_Write/15 (read)Can_GetControllerMode/12 (read)Can_MainFunction_Mode/19 (addr)Can_InitControllers.constprop.0/43 (write)Can_DeInitControllers.constprop.0/42 (write)Can_SetControllerMode/8 (write)Can_InitControllers.constprop.0/43 (write)Can_IsControllersBusy.constprop.0/44 (read)Can_DeInit/7 (read)Can_SetControllerMode/8 (read)Can_SetControllerMode/8 (write)Can_SetControllerMode/8 (read)Can_SetControllerMode/8 (write)Can_SetControllerMode/8 (write)Can_SetControllerMode/8 (read)Can_ProcessBusOffInterrupt/21 (write)
  Availability: available
  Varpool flags:
Can_au8DisableInterruptLevel/0 (Can_au8DisableInterruptLevel) @06248288
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Can_InitControllers.constprop.0/43 (write)Can_DisableControllerInterrupts/9 (read)Can_DisableControllerInterrupts/9 (write)Can_EnableControllerInterrupts/10 (read)Can_EnableControllerInterrupts/10 (write)Can_EnableControllerInterrupts/10 (read)
  Availability: available
  Varpool flags:

;; Function Can_Init (Can_Init, funcdef_no=3, decl_uid=6678, cgraph_uid=4, symbol_order=6)

Modification phase of node Can_Init/6
Can_Init (const struct Can_ConfigType * Config)
{
  boolean bCtrlBusy;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG bCtrlBusy => 0
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  Can_apxConfig[0] = Config_3(D);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  bCtrlBusy_5 = Can_IsControllersBusy (0);
  # DEBUG bCtrlBusy => bCtrlBusy_5
  # DEBUG BEGIN_STMT
  if (bCtrlBusy_5 != 0)
    goto <bb 4>; [67.00%]
  else
    goto <bb 3>; [33.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Can_InitControllers (0);

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function Can_DeInit (Can_DeInit, funcdef_no=4, decl_uid=6680, cgraph_uid=5, symbol_order=7)

Modification phase of node Can_DeInit/7
Can_DeInit ()
{
  boolean bCtrlBusy;
  uint8 u8ControllerID;
  const struct Can_ConfigType * _1;
  const struct Can_ControllerConfigType * const * _2;
  const struct Can_ControllerConfigType * const * _4;
  const struct Can_ControllerConfigType * _5;
  <unnamed type> _6;

  <bb 2> [local count: 96446979]:
  # DEBUG BEGIN_STMT
  # DEBUG u8ControllerID => 0
  # DEBUG BEGIN_STMT
  # DEBUG bCtrlBusy => 0
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG u8ControllerID => 0
  goto <bb 5>; [100.00%]

  <bb 3> [local count: 1014686024]:
  # DEBUG BEGIN_STMT
  _1 = Can_apxConfig[0];
  _2 = _1->Can_ppController;
  _4 = _2;
  _5 = *_4;
  if (_5 != 0B)
    goto <bb 4>; [67.00%]
  else
    goto <bb 11>; [33.00%]

  <bb 11> [local count: 334846388]:
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 679839636]:
  # DEBUG BEGIN_STMT
  _6 = Can_eControllerState[0];
  if (_6 == 1)
    goto <bb 7>; [5.50%]
  else
    goto <bb 10>; [94.50%]

  <bb 10> [local count: 642448456]:

  <bb 5> [local count: 738895437]:
  # u8ControllerID_3 = PHI <0(2), 1(10)>

  <bb 6> [local count: 1073741824]:
  # u8ControllerID_7 = PHI <u8ControllerID_3(5), 1(11)>
  # DEBUG u8ControllerID => u8ControllerID_7
  # DEBUG BEGIN_STMT
  if (u8ControllerID_7 == 0)
    goto <bb 3>; [94.50%]
  else
    goto <bb 7>; [5.50%]

  <bb 7> [local count: 96446980]:
  # bCtrlBusy_8 = PHI <1(4), 0(6)>
  # DEBUG bCtrlBusy => bCtrlBusy_8
  # DEBUG BEGIN_STMT
  if (bCtrlBusy_8 != 0)
    goto <bb 9>; [67.00%]
  else
    goto <bb 8>; [33.00%]

  <bb 8> [local count: 31827504]:
  # DEBUG BEGIN_STMT
  Can_DeInitControllers (0);
  # DEBUG BEGIN_STMT
  Can_apxConfig[0] = 0B;

  <bb 9> [local count: 96446980]:
  return;

}



;; Function Can_SetControllerMode (Can_SetControllerMode, funcdef_no=5, decl_uid=6683, cgraph_uid=6, symbol_order=8)

Modification phase of node Can_SetControllerMode/8
Can_SetControllerMode (uint8 Controller, Can_ControllerStateType Transition)
{
  const struct Can_ControllerConfigType * Can_pController;
  Std_ReturnType eRetVal;
  const struct Can_ConfigType * _1;
  const struct Can_ControllerConfigType * const * _2;
  unsigned int _3;
  unsigned int _4;
  const struct Can_ControllerConfigType * const * _5;
  int _6;
  <unnamed type> _7;
  unsigned char _8;
  unsigned char _9;
  int _10;
  <unnamed type> _11;
  unsigned char _12;
  unsigned char _13;
  unsigned char _14;
  int _15;
  <unnamed type> _16;
  unsigned char _17;
  <unnamed type> _24;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG eRetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG Can_pController => 0B
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  _1 = Can_apxConfig[0];
  _2 = _1->Can_ppController;
  _3 = (unsigned int) Controller_21(D);
  _4 = _3 * 4;
  _5 = _2 + _4;
  Can_pController_22 = *_5;
  # DEBUG Can_pController => Can_pController_22
  # DEBUG BEGIN_STMT
  switch (Transition_23(D)) <default: <L22> [25.00%], case 1: <L0> [25.00%], case 2: <L5> [25.00%], case 3: <L13> [25.00%]>

  <bb 3> [local count: 268435456]:
<L0>:
  # DEBUG BEGIN_STMT
  _6 = (int) Controller_21(D);
  _7 = Can_eControllerState[_6];
  if (_7 == 2)
    goto <bb 4>; [20.24%]
  else
    goto <bb 12>; [79.76%]

  <bb 4> [local count: 54331336]:
  # DEBUG BEGIN_STMT
  _8 = Can_Ipw_SetControllerToStartMode (Can_pController_22);
  if (_8 == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 12>; [67.00%]

  <bb 5> [local count: 17929341]:
  # DEBUG BEGIN_STMT
  Can_eControllerState[_6] = 1;
  # DEBUG BEGIN_STMT
  _9 = Can_pController_22->Can_u8AbstControllerID;
  CanIf_ControllerModeIndication (_9, 1);
  # DEBUG BEGIN_STMT
  # DEBUG eRetVal => 0
  goto <bb 12>; [100.00%]

  <bb 6> [local count: 268435456]:
<L5>:
  # DEBUG BEGIN_STMT
  _10 = (int) Controller_21(D);
  _11 = Can_eControllerState[_10];
  switch (_11) <default: <L22> [33.33%], case 1: <L6> [33.33%], case 2 ... 3: <L9> [33.33%]>

  <bb 7> [local count: 89469538]:
<L6>:
  # DEBUG BEGIN_STMT
  _12 = Can_Ipw_SetControllerToStopMode (Can_pController_22);
  if (_12 == 0)
    goto <bb 8>; [33.00%]
  else
    goto <bb 12>; [67.00%]

  <bb 8> [local count: 29524947]:
  # DEBUG BEGIN_STMT
  Can_eControllerState[_10] = 2;
  # DEBUG BEGIN_STMT
  _13 = Can_pController_22->Can_u8AbstControllerID;
  CanIf_ControllerModeIndication (_13, 2);
  # DEBUG BEGIN_STMT
  # DEBUG eRetVal => 0
  goto <bb 12>; [100.00%]

  <bb 9> [local count: 89469538]:
<L9>:
  # DEBUG BEGIN_STMT
  Can_eControllerState[_10] = 2;
  # DEBUG BEGIN_STMT
  _14 = Can_pController_22->Can_u8AbstControllerID;
  CanIf_ControllerModeIndication (_14, 2);
  # DEBUG BEGIN_STMT
  # DEBUG eRetVal => 0
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 10> [local count: 268435456]:
<L13>:
  # DEBUG BEGIN_STMT
  _15 = (int) Controller_21(D);
  _16 = Can_eControllerState[_15];
  _24 = _16 + 4294967294;
  if (_24 <= 1)
    goto <bb 11>; [25.50%]
  else
    goto <bb 12>; [74.50%]

  <bb 11> [local count: 68451041]:
<L14>:
  # DEBUG BEGIN_STMT
  Can_eControllerState[_15] = 3;
  # DEBUG BEGIN_STMT
  _17 = Can_pController_22->Can_u8AbstControllerID;
  CanIf_ControllerModeIndication (_17, 3);
  # DEBUG BEGIN_STMT
  # DEBUG eRetVal => 0
  # DEBUG BEGIN_STMT

  <bb 12> [local count: 1073714982]:
  # eRetVal_18 = PHI <1(4), 0(9), 1(10), 1(2), 1(3), 0(5), 0(8), 1(7), 1(6), 0(11)>
<L22>:
  # DEBUG eRetVal => eRetVal_18
  # DEBUG BEGIN_STMT
  return eRetVal_18;

}



;; Function Can_DisableControllerInterrupts (Can_DisableControllerInterrupts, funcdef_no=6, decl_uid=6685, cgraph_uid=7, symbol_order=9)

Modification phase of node Can_DisableControllerInterrupts/9
Can_DisableControllerInterrupts (uint8 Controller)
{
  const struct Can_ControllerConfigType * Can_pController;
  const struct Can_ConfigType * _1;
  const struct Can_ControllerConfigType * const * _2;
  unsigned int _3;
  unsigned int _4;
  const struct Can_ControllerConfigType * const * _5;
  int _6;
  unsigned char _7;
  unsigned char _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG Can_pController => 0B
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  _1 = Can_apxConfig[0];
  _2 = _1->Can_ppController;
  _3 = (unsigned int) Controller_10(D);
  _4 = _3 * 4;
  _5 = _2 + _4;
  Can_pController_11 = *_5;
  # DEBUG Can_pController => Can_pController_11
  # DEBUG BEGIN_STMT
  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_00 ();
  # DEBUG BEGIN_STMT
  _6 = (int) Controller_10(D);
  _7 = Can_au8DisableInterruptLevel[_6];
  _8 = _7 + 1;
  Can_au8DisableInterruptLevel[_6] = _8;
  # DEBUG BEGIN_STMT
  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_00 ();
  # DEBUG BEGIN_STMT
  Can_Ipw_DisableControllerInterrupts (Can_pController_11);
  return;

}



;; Function Can_EnableControllerInterrupts (Can_EnableControllerInterrupts, funcdef_no=7, decl_uid=6687, cgraph_uid=8, symbol_order=10)

Modification phase of node Can_EnableControllerInterrupts/10
Can_EnableControllerInterrupts (uint8 Controller)
{
  const struct Can_ControllerConfigType * Can_pController;
  const struct Can_ConfigType * _1;
  const struct Can_ControllerConfigType * const * _2;
  unsigned int _3;
  unsigned int _4;
  const struct Can_ControllerConfigType * const * _5;
  int _6;
  unsigned char _7;
  unsigned char _8;
  unsigned char _9;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG Can_pController => 0B
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  _1 = Can_apxConfig[0];
  _2 = _1->Can_ppController;
  _3 = (unsigned int) Controller_13(D);
  _4 = _3 * 4;
  _5 = _2 + _4;
  Can_pController_14 = *_5;
  # DEBUG Can_pController => Can_pController_14
  # DEBUG BEGIN_STMT
  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_01 ();
  # DEBUG BEGIN_STMT
  _6 = (int) Controller_13(D);
  _7 = Can_au8DisableInterruptLevel[_6];
  if (_7 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _8 = _7 + 255;
  Can_au8DisableInterruptLevel[_6] = _8;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_01 ();
  # DEBUG BEGIN_STMT
  _9 = Can_au8DisableInterruptLevel[_6];
  if (_9 == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Can_Ipw_EnableControllerInterrupts (Can_pController_14);

  <bb 6> [local count: 1073741824]:
  return;

}



;; Function Can_GetControllerErrorState (Can_GetControllerErrorState, funcdef_no=8, decl_uid=6690, cgraph_uid=9, symbol_order=11)

Modification phase of node Can_GetControllerErrorState/11
Can_GetControllerErrorState (uint8 ControllerId, Can_ErrorStateType * ErrorStatePtr)
{
  const struct Can_ControllerConfigType * Can_pController;
  const struct Can_ConfigType * _1;
  const struct Can_ControllerConfigType * const * _2;
  unsigned int _3;
  unsigned int _4;
  const struct Can_ControllerConfigType * const * _5;
  unsigned char _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG eRetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG Can_pController => 0B
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  _1 = Can_apxConfig[0];
  _2 = _1->Can_ppController;
  _3 = (unsigned int) ControllerId_9(D);
  _4 = _3 * 4;
  _5 = _2 + _4;
  Can_pController_10 = *_5;
  # DEBUG Can_pController => Can_pController_10
  # DEBUG BEGIN_STMT
  _6 = Can_Ipw_GetControllerErrorState (Can_pController_10);
  switch (_6) <default: <L2> [33.33%], case 0: <L0> [33.33%], case 1: <L1> [33.33%]>

  <bb 3> [local count: 357878150]:
<L0>:
  # DEBUG BEGIN_STMT
  *ErrorStatePtr_12(D) = 0;
  # DEBUG BEGIN_STMT
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 357878150]:
<L1>:
  # DEBUG BEGIN_STMT
  *ErrorStatePtr_12(D) = 1;
  # DEBUG BEGIN_STMT
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 357878150]:
<L2>:
  # DEBUG BEGIN_STMT
  *ErrorStatePtr_12(D) = 2;
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 1073634451]:
  # DEBUG BEGIN_STMT
  # DEBUG eRetVal => 0
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Can_GetControllerMode (Can_GetControllerMode, funcdef_no=9, decl_uid=6693, cgraph_uid=10, symbol_order=12)

Modification phase of node Can_GetControllerMode/12
Can_GetControllerMode (uint8 Controller, Can_ControllerStateType * ControllerModePtr)
{
  int _1;
  <unnamed type> _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG eRetVal => 1
  # DEBUG BEGIN_STMT
  _1 = (int) Controller_3(D);
  _2 = Can_eControllerState[_1];
  *ControllerModePtr_5(D) = _2;
  # DEBUG BEGIN_STMT
  # DEBUG eRetVal => 0
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Can_GetControllerRxErrorCounter (Can_GetControllerRxErrorCounter, funcdef_no=10, decl_uid=6696, cgraph_uid=11, symbol_order=13)

Modification phase of node Can_GetControllerRxErrorCounter/13
Can_GetControllerRxErrorCounter (uint8 ControllerId, uint8 * RxErrorCounterPtr)
{
  const struct Can_ControllerConfigType * Can_pController;
  const struct Can_ConfigType * _1;
  const struct Can_ControllerConfigType * const * _2;
  unsigned int _3;
  unsigned int _4;
  const struct Can_ControllerConfigType * const * _5;
  unsigned char _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG eRetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG Can_pController => 0B
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  _1 = Can_apxConfig[0];
  _2 = _1->Can_ppController;
  _3 = (unsigned int) ControllerId_8(D);
  _4 = _3 * 4;
  _5 = _2 + _4;
  Can_pController_9 = *_5;
  # DEBUG Can_pController => Can_pController_9
  # DEBUG BEGIN_STMT
  _6 = Can_Ipw_GetControllerRxErrorCounter (Can_pController_9);
  *RxErrorCounterPtr_11(D) = _6;
  # DEBUG BEGIN_STMT
  # DEBUG eRetVal => 0
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Can_GetControllerTxErrorCounter (Can_GetControllerTxErrorCounter, funcdef_no=11, decl_uid=6699, cgraph_uid=12, symbol_order=14)

Modification phase of node Can_GetControllerTxErrorCounter/14
Can_GetControllerTxErrorCounter (uint8 ControllerId, uint8 * TxErrorCounterPtr)
{
  const struct Can_ControllerConfigType * Can_pController;
  const struct Can_ConfigType * _1;
  const struct Can_ControllerConfigType * const * _2;
  unsigned int _3;
  unsigned int _4;
  const struct Can_ControllerConfigType * const * _5;
  unsigned char _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG eRetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG Can_pController => 0B
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  _1 = Can_apxConfig[0];
  _2 = _1->Can_ppController;
  _3 = (unsigned int) ControllerId_8(D);
  _4 = _3 * 4;
  _5 = _2 + _4;
  Can_pController_9 = *_5;
  # DEBUG Can_pController => Can_pController_9
  # DEBUG BEGIN_STMT
  _6 = Can_Ipw_GetControllerTxErrorCounter (Can_pController_9);
  *TxErrorCounterPtr_11(D) = _6;
  # DEBUG BEGIN_STMT
  # DEBUG eRetVal => 0
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Can_Write (Can_Write, funcdef_no=12, decl_uid=6702, cgraph_uid=13, symbol_order=15)

Modification phase of node Can_Write/15
Can_Write (Can_HwHandleType Hth, const struct Can_PduType * PduInfo)
{
  const struct Can_HwObjectConfigType * Can_pHwObject;
  const struct Can_ControllerConfigType * Can_pController;
  uint8 u8ControllerID;
  Std_ReturnType eRetVal;
  const struct Can_ConfigType * _1;
  const uint8 * _2;
  sizetype _3;
  const uint8 * _4;
  const struct Can_ControllerConfigType * const * _5;
  unsigned int _6;
  unsigned int _7;
  const struct Can_ControllerConfigType * const * _8;
  const struct Can_HwObjectConfigType * _9;
  unsigned int _10;
  int _11;
  <unnamed type> _12;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG eRetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG u8ControllerID => 0
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG Can_pController => 0B
  # DEBUG BEGIN_STMT
  # DEBUG Can_pHwObject => 0B
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  _1 = Can_apxConfig[0];
  _2 = _1->Can_pHwObjIDToCtrlIDMap;
  _3 = (sizetype) Hth_16(D);
  _4 = _2 + _3;
  u8ControllerID_17 = *_4;
  # DEBUG u8ControllerID => u8ControllerID_17
  # DEBUG BEGIN_STMT
  _5 = _1->Can_ppController;
  _6 = (unsigned int) u8ControllerID_17;
  _7 = _6 * 4;
  _8 = _5 + _7;
  Can_pController_18 = *_8;
  # DEBUG Can_pController => Can_pController_18
  # DEBUG BEGIN_STMT
  if (Can_pController_18 != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 5>; [30.00%]

  <bb 3> [local count: 751619277]:
  # DEBUG BEGIN_STMT
  _9 = _1->Can_pHwObjectConfig;
  _10 = _3 * 36;
  Can_pHwObject_19 = _9 + _10;
  # DEBUG Can_pHwObject => Can_pHwObject_19
  # DEBUG BEGIN_STMT
  _11 = (int) u8ControllerID_17;
  _12 = Can_eControllerState[_11];
  if (_12 == 1)
    goto <bb 4>; [20.24%]
  else
    goto <bb 5>; [79.76%]

  <bb 4> [local count: 152127742]:
  # DEBUG BEGIN_STMT
  eRetVal_22 = Can_Ipw_Write (Can_pController_18, Can_pHwObject_19, PduInfo_20(D));
  # DEBUG eRetVal => eRetVal_22

  <bb 5> [local count: 1073741824]:
  # eRetVal_13 = PHI <1(2), 1(3), eRetVal_22(4)>
  # DEBUG eRetVal => eRetVal_13
  # DEBUG BEGIN_STMT
  return eRetVal_13;

}



;; Function Can_MainFunction_Write (Can_MainFunction_Write, funcdef_no=13, decl_uid=6788, cgraph_uid=14, symbol_order=16)

Modification phase of node Can_MainFunction_Write/16
Can_MainFunction_Write ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Can_MainFunction_Read (Can_MainFunction_Read, funcdef_no=20, decl_uid=6812, cgraph_uid=15, symbol_order=17)

Modification phase of node Can_MainFunction_Read/17
Can_MainFunction_Read ()
{
  <bb 2> [local count: 1073741824]:
  Can_MainFunction_Write (); [tail call]
  return;

}



;; Function Can_MainFunction_BusOff (Can_MainFunction_BusOff, funcdef_no=22, decl_uid=6836, cgraph_uid=16, symbol_order=18)

Modification phase of node Can_MainFunction_BusOff/18
Can_MainFunction_BusOff ()
{
  <bb 2> [local count: 1073741824]:
  Can_MainFunction_Write (); [tail call]
  return;

}



;; Function Can_MainFunction_Mode (Can_MainFunction_Mode, funcdef_no=16, decl_uid=6840, cgraph_uid=17, symbol_order=19)

Modification phase of node Can_MainFunction_Mode/19
Can_MainFunction_Mode ()
{
  const struct Can_ControllerConfigType * Can_pController;
  uint8 u8ControllerID;
  const struct Can_ConfigType * _1;
  const struct Can_ConfigType * _2;
  const struct Can_ControllerConfigType * const * _3;
  const struct Can_ControllerConfigType * const * _6;
  _Bool _7;

  <bb 2> [local count: 84365427]:
  # DEBUG BEGIN_STMT
  # DEBUG u8ControllerID => 0
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG Can_pController => 0B
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  _1 = Can_apxConfig[0];
  if (_1 != 0B)
    goto <bb 11>; [70.00%]
  else
    goto <bb 8>; [30.00%]

  <bb 11> [local count: 59055799]:
  goto <bb 7>; [100.00%]

  <bb 3> [local count: 1014686024]:
  # DEBUG BEGIN_STMT
  _2 = Can_apxConfig[0];
  _3 = _2->Can_ppController;
  _6 = _3;
  Can_pController_14 = *_6;
  # DEBUG Can_pController => Can_pController_14
  # DEBUG BEGIN_STMT
  if (Can_pController_14 != 0B)
    goto <bb 4>; [67.00%]
  else
    goto <bb 13>; [33.00%]

  <bb 13> [local count: 334846388]:
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 679839636]:
  # DEBUG BEGIN_STMT
  _7 = Can_pController_14->Can_bActivation;
  if (_7 != 0)
    goto <bb 5>; [5.50%]
  else
    goto <bb 12>; [94.50%]

  <bb 12> [local count: 642448455]:
  goto <bb 10>; [100.00%]

  <bb 5> [local count: 37391180]:
  # DEBUG BEGIN_STMT
  Can_Ipw_MainFunction_Mode (Can_pController_14, &MEM[(void *)&Can_eControllerState]);

  <bb 7> [local count: 96446979]:
  # u8ControllerID_5 = PHI <1(5), 0(11)>

  <bb 10> [local count: 738895436]:
  # u8ControllerID_10 = PHI <u8ControllerID_5(7), 1(12)>

  <bb 9> [local count: 1073741824]:
  # u8ControllerID_9 = PHI <u8ControllerID_10(10), 1(13)>
  # DEBUG u8ControllerID => u8ControllerID_9
  # DEBUG BEGIN_STMT
  if (u8ControllerID_9 == 0)
    goto <bb 3>; [94.50%]
  else
    goto <bb 8>; [5.50%]

  <bb 8> [local count: 84365429]:
  return;

}



;; Function Can_ProcessMesgBufferCommonInterrupt (Can_ProcessMesgBufferCommonInterrupt, funcdef_no=17, decl_uid=6844, cgraph_uid=18, symbol_order=20)

Modification phase of node Can_ProcessMesgBufferCommonInterrupt/20
Can_ProcessMesgBufferCommonInterrupt (uint8 u8CtrlOffset, uint8 u8MbIdx, Can_MbType mbType)
{
  const struct Can_ControllerConfigType * Can_pController;
  uint8 u8ControllerID;
  const struct Can_ConfigType * _1;
  const uint8 * _2;
  sizetype _3;
  const uint8 * _4;
  const struct Can_ControllerConfigType * const * _5;
  unsigned int _6;
  unsigned int _7;
  const struct Can_ControllerConfigType * const * _8;
  const struct Can_HwObjectConfigType * _9;
  const struct Can_HwObjectConfigType * _10;
  const struct Can_HwObjectConfigType * _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG u8ControllerID => 0
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG Can_pController => 0B
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  _1 = Can_apxConfig[0];
  if (_1 != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 8>; [30.00%]

  <bb 3> [local count: 751619278]:
  # DEBUG BEGIN_STMT
  _2 = _1->Can_pCtrlOffsetToCtrlIDMap;
  _3 = (sizetype) u8CtrlOffset_14(D);
  _4 = _2 + _3;
  u8ControllerID_15 = *_4;
  # DEBUG u8ControllerID => u8ControllerID_15
  # DEBUG BEGIN_STMT
  _5 = _1->Can_ppController;
  _6 = (unsigned int) u8ControllerID_15;
  _7 = _6 * 4;
  _8 = _5 + _7;
  Can_pController_16 = *_8;
  # DEBUG Can_pController => Can_pController_16
  # DEBUG BEGIN_STMT
  if (Can_pController_16 != 0B)
    goto <bb 4>; [70.00%]
  else
    goto <bb 8>; [30.00%]

  <bb 4> [local count: 526133494]:
  # DEBUG BEGIN_STMT
  switch (mbType_17(D)) <default: <L9> [25.00%], case 0: <L3> [25.00%], case 1: <L4> [25.00%], case 3: <L2> [25.00%]>

  <bb 5> [local count: 131533373]:
<L2>:
  # DEBUG BEGIN_STMT
  _9 = _1->Can_pHwObjectConfig;
  Can_Ipw_ProcessTxMesgBuffer (Can_pController_16, _9, u8MbIdx_18(D));
  # DEBUG BEGIN_STMT
  goto <bb 8>; [100.00%]

  <bb 6> [local count: 131533373]:
<L3>:
  # DEBUG BEGIN_STMT
  _10 = _1->Can_pHwObjectConfig;
  Can_Ipw_ProcessRxMesgBuffer (Can_pController_16, _10, u8MbIdx_18(D));
  # DEBUG BEGIN_STMT
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 131533373]:
<L4>:
  # DEBUG BEGIN_STMT
  _11 = _1->Can_pHwObjectConfig;
  Can_Ipw_ProcessRxMesgBuffer (Can_pController_16, _11, u8MbIdx_18(D));
  # DEBUG BEGIN_STMT

  <bb 8> [local count: 1073741823]:
<L9>:
  return;

}



;; Function Can_ProcessBusOffInterrupt (Can_ProcessBusOffInterrupt, funcdef_no=18, decl_uid=6846, cgraph_uid=19, symbol_order=21)

Modification phase of node Can_ProcessBusOffInterrupt/21
Can_ProcessBusOffInterrupt (uint8 u8CtrlOffset)
{
  const struct Can_ControllerConfigType * Can_pController;
  uint8 u8ControllerID;
  const struct Can_ConfigType * _1;
  const uint8 * _2;
  sizetype _3;
  const uint8 * _4;
  const struct Can_ControllerConfigType * const * _5;
  unsigned int _6;
  unsigned int _7;
  const struct Can_ControllerConfigType * const * _8;
  unsigned char _9;
  int _10;
  unsigned char _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG u8ControllerID => 0
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG Can_pController => 0B
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  _1 = Can_apxConfig[0];
  if (_1 != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 6>; [30.00%]

  <bb 3> [local count: 751619278]:
  # DEBUG BEGIN_STMT
  _2 = _1->Can_pCtrlOffsetToCtrlIDMap;
  _3 = (sizetype) u8CtrlOffset_14(D);
  _4 = _2 + _3;
  u8ControllerID_15 = *_4;
  # DEBUG u8ControllerID => u8ControllerID_15
  # DEBUG BEGIN_STMT
  _5 = _1->Can_ppController;
  _6 = (unsigned int) u8ControllerID_15;
  _7 = _6 * 4;
  _8 = _5 + _7;
  Can_pController_16 = *_8;
  # DEBUG Can_pController => Can_pController_16
  # DEBUG BEGIN_STMT
  if (Can_pController_16 != 0B)
    goto <bb 4>; [53.47%]
  else
    goto <bb 6>; [46.53%]

  <bb 4> [local count: 401890828]:
  # DEBUG BEGIN_STMT
  _9 = Can_Ipw_SetControllerToStopMode (Can_pController_16);
  if (_9 == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 132623973]:
  # DEBUG BEGIN_STMT
  _10 = (int) u8ControllerID_15;
  Can_eControllerState[_10] = 2;
  # DEBUG BEGIN_STMT
  _11 = Can_pController_16->Can_u8AbstControllerID;
  CanIf_ControllerBusOff (_11);

  <bb 6> [local count: 1073741824]:
  return;

}


