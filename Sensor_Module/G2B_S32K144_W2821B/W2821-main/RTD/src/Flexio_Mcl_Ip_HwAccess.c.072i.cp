
IPA constant propagation start:
Determining dynamic type for call: Flexio_Mcl_Ip_SetSoftwareReset (baseAddr_2(D), 1);
  Starting walk at: Flexio_Mcl_Ip_SetSoftwareReset (baseAddr_2(D), 1);
  instance pointer: baseAddr_2(D)  Outer instance pointer: baseAddr_2(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_45/34:
  Jump functions of caller  SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_45/33:
  Jump functions of caller  SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_44/32:
  Jump functions of caller  SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_44/31:
  Jump functions of caller  SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_43/30:
  Jump functions of caller  SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_43/29:
  Jump functions of caller  SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_42/28:
  Jump functions of caller  SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_42/27:
  Jump functions of caller  SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_41/26:
  Jump functions of caller  SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_41/25:
  Jump functions of caller  SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_40/24:
  Jump functions of caller  SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_40/23:
  Jump functions of caller  SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_39/22:
  Jump functions of caller  SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_39/21:
  Jump functions of caller  Flexio_Mcl_Ip_Init/20:
    callsite  Flexio_Mcl_Ip_Init/20 -> Flexio_Mcl_Ip_SetSoftwareReset/0 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  Flexio_Mcl_Ip_SetTimerInterrupt/19:
  Jump functions of caller  Flexio_Mcl_Ip_GetAllTimerInterrupt/18:
  Jump functions of caller  Flexio_Mcl_Ip_SetShifterDMARequest/17:
  Jump functions of caller  Flexio_Mcl_Ip_SetShifterInterrupt/16:
  Jump functions of caller  Flexio_Mcl_Ip_SetShifterErrorInterrupt/15:
  Jump functions of caller  Flexio_Mcl_Ip_GetAllShifterErrorInterrupt/14:
  Jump functions of caller  Flexio_Mcl_Ip_GetAllShifterInterrupt/13:
  Jump functions of caller  Flexio_Mcl_Ip_ClearTimerStatus/12:
  Jump functions of caller  Flexio_Mcl_Ip_GetAllTimerStatus/11:
  Jump functions of caller  Flexio_Mcl_Ip_GetTimerInterruptEnable/10:
  Jump functions of caller  Flexio_Mcl_Ip_GetTimerStatus/9:
  Jump functions of caller  Flexio_Mcl_Ip_ClearShifterErrorStatus/8:
  Jump functions of caller  Flexio_Mcl_Ip_GetAllShifterErrorStatus/7:
  Jump functions of caller  Flexio_Mcl_Ip_GetShifterErrorStatus/6:
  Jump functions of caller  Flexio_Mcl_Ip_ClearShifterStatus/5:
  Jump functions of caller  Flexio_Mcl_Ip_GetAllShifterStatus/4:
  Jump functions of caller  Flexio_Mcl_Ip_GetShifterStatus/3:
  Jump functions of caller  Flexio_Mcl_Ip_SetEnable/2:
  Jump functions of caller  Flexio_Mcl_Ip_SetDebugEnable/1:
  Jump functions of caller  Flexio_Mcl_Ip_SetSoftwareReset/0:

 Propagating constants:

Not considering Flexio_Mcl_Ip_Init for cloning; -fipa-cp-clone disabled.
Not considering Flexio_Mcl_Ip_SetTimerInterrupt for cloning; -fipa-cp-clone disabled.
Not considering Flexio_Mcl_Ip_GetAllTimerInterrupt for cloning; -fipa-cp-clone disabled.
Not considering Flexio_Mcl_Ip_SetShifterDMARequest for cloning; -fipa-cp-clone disabled.
Not considering Flexio_Mcl_Ip_SetShifterInterrupt for cloning; -fipa-cp-clone disabled.
Not considering Flexio_Mcl_Ip_SetShifterErrorInterrupt for cloning; -fipa-cp-clone disabled.
Not considering Flexio_Mcl_Ip_GetAllShifterErrorInterrupt for cloning; -fipa-cp-clone disabled.
Not considering Flexio_Mcl_Ip_GetAllShifterInterrupt for cloning; -fipa-cp-clone disabled.
Not considering Flexio_Mcl_Ip_ClearTimerStatus for cloning; -fipa-cp-clone disabled.
Not considering Flexio_Mcl_Ip_GetAllTimerStatus for cloning; -fipa-cp-clone disabled.
Not considering Flexio_Mcl_Ip_GetTimerInterruptEnable for cloning; -fipa-cp-clone disabled.
Not considering Flexio_Mcl_Ip_GetTimerStatus for cloning; -fipa-cp-clone disabled.
Not considering Flexio_Mcl_Ip_ClearShifterErrorStatus for cloning; -fipa-cp-clone disabled.
Not considering Flexio_Mcl_Ip_GetAllShifterErrorStatus for cloning; -fipa-cp-clone disabled.
Not considering Flexio_Mcl_Ip_GetShifterErrorStatus for cloning; -fipa-cp-clone disabled.
Not considering Flexio_Mcl_Ip_ClearShifterStatus for cloning; -fipa-cp-clone disabled.
Not considering Flexio_Mcl_Ip_GetAllShifterStatus for cloning; -fipa-cp-clone disabled.
Not considering Flexio_Mcl_Ip_GetShifterStatus for cloning; -fipa-cp-clone disabled.
Not considering Flexio_Mcl_Ip_SetEnable for cloning; -fipa-cp-clone disabled.
Not considering Flexio_Mcl_Ip_SetDebugEnable for cloning; -fipa-cp-clone disabled.
Not considering Flexio_Mcl_Ip_SetSoftwareReset for cloning; -fipa-cp-clone disabled.

overall_size: 147, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Flexio_Mcl_Ip_Init/20:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Flexio_Mcl_Ip_SetTimerInterrupt/19:
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
  Node: Flexio_Mcl_Ip_GetAllTimerInterrupt/18:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Flexio_Mcl_Ip_SetShifterDMARequest/17:
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
  Node: Flexio_Mcl_Ip_SetShifterInterrupt/16:
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
  Node: Flexio_Mcl_Ip_SetShifterErrorInterrupt/15:
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
  Node: Flexio_Mcl_Ip_GetAllShifterErrorInterrupt/14:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Flexio_Mcl_Ip_GetAllShifterInterrupt/13:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Flexio_Mcl_Ip_ClearTimerStatus/12:
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
  Node: Flexio_Mcl_Ip_GetAllTimerStatus/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Flexio_Mcl_Ip_GetTimerInterruptEnable/10:
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
  Node: Flexio_Mcl_Ip_GetTimerStatus/9:
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
  Node: Flexio_Mcl_Ip_ClearShifterErrorStatus/8:
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
  Node: Flexio_Mcl_Ip_GetAllShifterErrorStatus/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Flexio_Mcl_Ip_GetShifterErrorStatus/6:
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
  Node: Flexio_Mcl_Ip_ClearShifterStatus/5:
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
  Node: Flexio_Mcl_Ip_GetAllShifterStatus/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Flexio_Mcl_Ip_GetShifterStatus/3:
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
  Node: Flexio_Mcl_Ip_SetEnable/2:
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
  Node: Flexio_Mcl_Ip_SetDebugEnable/1:
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
  Node: Flexio_Mcl_Ip_SetSoftwareReset/0:
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

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_45/34 (SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_45) @068e7620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Flexio_Mcl_Ip_SetTimerInterrupt/19 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_45/33 (SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_45) @068e7540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Flexio_Mcl_Ip_SetTimerInterrupt/19 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_44/32 (SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_44) @068e72a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Flexio_Mcl_Ip_SetShifterDMARequest/17 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_44/31 (SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_44) @068e71c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Flexio_Mcl_Ip_SetShifterDMARequest/17 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_43/30 (SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_43) @068e7000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Flexio_Mcl_Ip_SetShifterInterrupt/16 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_43/29 (SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_43) @068bdee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Flexio_Mcl_Ip_SetShifterInterrupt/16 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_42/28 (SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_42) @068bdd20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Flexio_Mcl_Ip_SetShifterErrorInterrupt/15 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_42/27 (SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_42) @068bdc40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Flexio_Mcl_Ip_SetShifterErrorInterrupt/15 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_41/26 (SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_41) @068bd000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Flexio_Mcl_Ip_SetEnable/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_41/25 (SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_41) @068b8620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Flexio_Mcl_Ip_SetEnable/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_40/24 (SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_40) @068b80e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Flexio_Mcl_Ip_SetDebugEnable/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_40/23 (SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_40) @068b8ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Flexio_Mcl_Ip_SetDebugEnable/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_39/22 (SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_39) @068b8d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Flexio_Mcl_Ip_SetSoftwareReset/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_39/21 (SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_39) @068b8c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Flexio_Mcl_Ip_SetSoftwareReset/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Flexio_Mcl_Ip_Init/20 (Flexio_Mcl_Ip_Init) @068b87e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Flexio_Mcl_Ip_SetSoftwareReset/0 (1073741824 (estimated locally),1.00 per call) 
Flexio_Mcl_Ip_SetTimerInterrupt/19 (Flexio_Mcl_Ip_SetTimerInterrupt) @068b8540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_45/34 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_45/33 (1073741824 (estimated locally),1.00 per call) 
Flexio_Mcl_Ip_GetAllTimerInterrupt/18 (Flexio_Mcl_Ip_GetAllTimerInterrupt) @068b82a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Flexio_Mcl_Ip_SetShifterDMARequest/17 (Flexio_Mcl_Ip_SetShifterDMARequest) @068b8000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_44/32 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_44/31 (1073741824 (estimated locally),1.00 per call) 
Flexio_Mcl_Ip_SetShifterInterrupt/16 (Flexio_Mcl_Ip_SetShifterInterrupt) @067d9b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_43/30 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_43/29 (1073741824 (estimated locally),1.00 per call) 
Flexio_Mcl_Ip_SetShifterErrorInterrupt/15 (Flexio_Mcl_Ip_SetShifterErrorInterrupt) @067d9620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_42/28 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_42/27 (1073741824 (estimated locally),1.00 per call) 
Flexio_Mcl_Ip_GetAllShifterErrorInterrupt/14 (Flexio_Mcl_Ip_GetAllShifterErrorInterrupt) @067d90e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Flexio_Mcl_Ip_GetAllShifterInterrupt/13 (Flexio_Mcl_Ip_GetAllShifterInterrupt) @067d9d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Flexio_Mcl_Ip_ClearTimerStatus/12 (Flexio_Mcl_Ip_ClearTimerStatus) @067d9a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Flexio_Mcl_Ip_GetAllTimerStatus/11 (Flexio_Mcl_Ip_GetAllTimerStatus) @067d97e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Flexio_Mcl_Ip_GetTimerInterruptEnable/10 (Flexio_Mcl_Ip_GetTimerInterruptEnable) @067d9540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Flexio_Mcl_Ip_GetTimerStatus/9 (Flexio_Mcl_Ip_GetTimerStatus) @067d92a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Flexio_Mcl_Ip_ClearShifterErrorStatus/8 (Flexio_Mcl_Ip_ClearShifterErrorStatus) @067d9000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Flexio_Mcl_Ip_GetAllShifterErrorStatus/7 (Flexio_Mcl_Ip_GetAllShifterErrorStatus) @067d4b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Flexio_Mcl_Ip_GetShifterErrorStatus/6 (Flexio_Mcl_Ip_GetShifterErrorStatus) @067d4620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Flexio_Mcl_Ip_ClearShifterStatus/5 (Flexio_Mcl_Ip_ClearShifterStatus) @067d40e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Flexio_Mcl_Ip_GetAllShifterStatus/4 (Flexio_Mcl_Ip_GetAllShifterStatus) @067d4d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Flexio_Mcl_Ip_GetShifterStatus/3 (Flexio_Mcl_Ip_GetShifterStatus) @067d4a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Flexio_Mcl_Ip_SetEnable/2 (Flexio_Mcl_Ip_SetEnable) @067d47e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_41/26 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_41/25 (1073741824 (estimated locally),1.00 per call) 
Flexio_Mcl_Ip_SetDebugEnable/1 (Flexio_Mcl_Ip_SetDebugEnable) @067d4540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_40/24 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_40/23 (1073741824 (estimated locally),1.00 per call) 
Flexio_Mcl_Ip_SetSoftwareReset/0 (Flexio_Mcl_Ip_SetSoftwareReset) @067d42a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Flexio_Mcl_Ip_Init/20 (1073741824 (estimated locally),1.00 per call) 
  Calls: SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_39/22 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_39/21 (1073741824 (estimated locally),1.00 per call) 

;; Function Flexio_Mcl_Ip_SetSoftwareReset (Flexio_Mcl_Ip_SetSoftwareReset, funcdef_no=0, decl_uid=5665, cgraph_uid=1, symbol_order=0)

Modification phase of node Flexio_Mcl_Ip_SetSoftwareReset/0
Flexio_Mcl_Ip_SetSoftwareReset (struct FLEXIO_Type * baseAddr, boolean enable)
{
  uint32 RegValue;
  long unsigned int iftmp.0_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_39 ();
  # DEBUG BEGIN_STMT
  RegValue_5 ={v} baseAddr_4(D)->CTRL;
  # DEBUG RegValue => RegValue_5
  # DEBUG BEGIN_STMT
  RegValue_6 = RegValue_5 & 4294967293;
  # DEBUG RegValue => RegValue_6
  # DEBUG BEGIN_STMT
  if (enable_7(D) != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:

  <bb 4> [local count: 1073741824]:
  # iftmp.0_1 = PHI <2(2), 0(3)>
  RegValue_8 = iftmp.0_1 | RegValue_6;
  # DEBUG RegValue => RegValue_8
  # DEBUG BEGIN_STMT
  baseAddr_4(D)->CTRL ={v} RegValue_8;
  # DEBUG BEGIN_STMT
  SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_39 ();
  return;

}



;; Function Flexio_Mcl_Ip_SetDebugEnable (Flexio_Mcl_Ip_SetDebugEnable, funcdef_no=1, decl_uid=5668, cgraph_uid=2, symbol_order=1)

Modification phase of node Flexio_Mcl_Ip_SetDebugEnable/1
Flexio_Mcl_Ip_SetDebugEnable (struct FLEXIO_Type * baseAddr, boolean enable)
{
  uint32 RegValue;
  long unsigned int iftmp.1_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_40 ();
  # DEBUG BEGIN_STMT
  RegValue_5 ={v} baseAddr_4(D)->CTRL;
  # DEBUG RegValue => RegValue_5
  # DEBUG BEGIN_STMT
  RegValue_6 = RegValue_5 & 3221225471;
  # DEBUG RegValue => RegValue_6
  # DEBUG BEGIN_STMT
  if (enable_7(D) != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:

  <bb 4> [local count: 1073741824]:
  # iftmp.1_1 = PHI <1073741824(2), 0(3)>
  RegValue_8 = iftmp.1_1 | RegValue_6;
  # DEBUG RegValue => RegValue_8
  # DEBUG BEGIN_STMT
  baseAddr_4(D)->CTRL ={v} RegValue_8;
  # DEBUG BEGIN_STMT
  SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_40 ();
  return;

}



;; Function Flexio_Mcl_Ip_SetEnable (Flexio_Mcl_Ip_SetEnable, funcdef_no=2, decl_uid=5671, cgraph_uid=3, symbol_order=2)

Modification phase of node Flexio_Mcl_Ip_SetEnable/2
Flexio_Mcl_Ip_SetEnable (struct FLEXIO_Type * baseAddr, boolean enable)
{
  uint32 RegValue;
  long unsigned int iftmp.2_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_41 ();
  # DEBUG BEGIN_STMT
  RegValue_5 ={v} baseAddr_4(D)->CTRL;
  # DEBUG RegValue => RegValue_5
  # DEBUG BEGIN_STMT
  RegValue_6 = RegValue_5 & 4294967294;
  # DEBUG RegValue => RegValue_6
  # DEBUG BEGIN_STMT
  if (enable_7(D) != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:

  <bb 4> [local count: 1073741824]:
  # iftmp.2_1 = PHI <1(2), 0(3)>
  RegValue_8 = iftmp.2_1 | RegValue_6;
  # DEBUG RegValue => RegValue_8
  # DEBUG BEGIN_STMT
  baseAddr_4(D)->CTRL ={v} RegValue_8;
  # DEBUG BEGIN_STMT
  SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_41 ();
  return;

}



;; Function Flexio_Mcl_Ip_GetShifterStatus (Flexio_Mcl_Ip_GetShifterStatus, funcdef_no=3, decl_uid=5674, cgraph_uid=4, symbol_order=3)

Modification phase of node Flexio_Mcl_Ip_GetShifterStatus/3
Flexio_Mcl_Ip_GetShifterStatus (const struct FLEXIO_Type * baseAddr, uint8 shifter)
{
  long unsigned int _1;
  int _2;
  long unsigned int _3;
  boolean _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} baseAddr_5(D)->SHIFTSTAT;
  _2 = (int) shifter_6(D);
  _3 = _1 >> _2;
  _7 = (boolean) _3;
  return _7;

}



;; Function Flexio_Mcl_Ip_GetAllShifterStatus (Flexio_Mcl_Ip_GetAllShifterStatus, funcdef_no=4, decl_uid=5676, cgraph_uid=5, symbol_order=4)

Modification phase of node Flexio_Mcl_Ip_GetAllShifterStatus/4
Flexio_Mcl_Ip_GetAllShifterStatus (const struct FLEXIO_Type * baseAddr)
{
  uint32 _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _3 ={v} baseAddr_2(D)->SHIFTSTAT;
  return _3;

}



;; Function Flexio_Mcl_Ip_ClearShifterStatus (Flexio_Mcl_Ip_ClearShifterStatus, funcdef_no=5, decl_uid=5679, cgraph_uid=6, symbol_order=5)

Modification phase of node Flexio_Mcl_Ip_ClearShifterStatus/5
Flexio_Mcl_Ip_ClearShifterStatus (struct FLEXIO_Type * baseAddr, uint8 shifter)
{
  int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) shifter_3(D);
  _2 = 1 << _1;
  baseAddr_5(D)->SHIFTSTAT ={v} _2;
  return;

}



;; Function Flexio_Mcl_Ip_GetShifterErrorStatus (Flexio_Mcl_Ip_GetShifterErrorStatus, funcdef_no=6, decl_uid=5682, cgraph_uid=7, symbol_order=6)

Modification phase of node Flexio_Mcl_Ip_GetShifterErrorStatus/6
Flexio_Mcl_Ip_GetShifterErrorStatus (const struct FLEXIO_Type * baseAddr, uint8 shifter)
{
  long unsigned int _1;
  int _2;
  long unsigned int _3;
  boolean _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} baseAddr_5(D)->SHIFTERR;
  _2 = (int) shifter_6(D);
  _3 = _1 >> _2;
  _7 = (boolean) _3;
  return _7;

}



;; Function Flexio_Mcl_Ip_GetAllShifterErrorStatus (Flexio_Mcl_Ip_GetAllShifterErrorStatus, funcdef_no=7, decl_uid=5684, cgraph_uid=8, symbol_order=7)

Modification phase of node Flexio_Mcl_Ip_GetAllShifterErrorStatus/7
Flexio_Mcl_Ip_GetAllShifterErrorStatus (const struct FLEXIO_Type * baseAddr)
{
  uint32 _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _3 ={v} baseAddr_2(D)->SHIFTERR;
  return _3;

}



;; Function Flexio_Mcl_Ip_ClearShifterErrorStatus (Flexio_Mcl_Ip_ClearShifterErrorStatus, funcdef_no=8, decl_uid=5687, cgraph_uid=9, symbol_order=8)

Modification phase of node Flexio_Mcl_Ip_ClearShifterErrorStatus/8
Flexio_Mcl_Ip_ClearShifterErrorStatus (struct FLEXIO_Type * baseAddr, uint8 shifter)
{
  int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) shifter_3(D);
  _2 = 1 << _1;
  baseAddr_5(D)->SHIFTERR ={v} _2;
  return;

}



;; Function Flexio_Mcl_Ip_GetTimerStatus (Flexio_Mcl_Ip_GetTimerStatus, funcdef_no=9, decl_uid=5690, cgraph_uid=10, symbol_order=9)

Modification phase of node Flexio_Mcl_Ip_GetTimerStatus/9
Flexio_Mcl_Ip_GetTimerStatus (const struct FLEXIO_Type * baseAddr, uint8 timer)
{
  long unsigned int _1;
  int _2;
  long unsigned int _3;
  boolean _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} baseAddr_5(D)->TIMSTAT;
  _2 = (int) timer_6(D);
  _3 = _1 >> _2;
  _7 = (boolean) _3;
  return _7;

}



;; Function Flexio_Mcl_Ip_GetTimerInterruptEnable (Flexio_Mcl_Ip_GetTimerInterruptEnable, funcdef_no=10, decl_uid=5693, cgraph_uid=11, symbol_order=10)

Modification phase of node Flexio_Mcl_Ip_GetTimerInterruptEnable/10
Flexio_Mcl_Ip_GetTimerInterruptEnable (const struct FLEXIO_Type * baseAddr, uint8 timer)
{
  long unsigned int _1;
  int _2;
  long unsigned int _3;
  boolean _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} baseAddr_5(D)->TIMIEN;
  _2 = (int) timer_6(D);
  _3 = _1 >> _2;
  _7 = (boolean) _3;
  return _7;

}



;; Function Flexio_Mcl_Ip_GetAllTimerStatus (Flexio_Mcl_Ip_GetAllTimerStatus, funcdef_no=11, decl_uid=5695, cgraph_uid=12, symbol_order=11)

Modification phase of node Flexio_Mcl_Ip_GetAllTimerStatus/11
Flexio_Mcl_Ip_GetAllTimerStatus (const struct FLEXIO_Type * baseAddr)
{
  uint32 _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _3 ={v} baseAddr_2(D)->TIMSTAT;
  return _3;

}



;; Function Flexio_Mcl_Ip_ClearTimerStatus (Flexio_Mcl_Ip_ClearTimerStatus, funcdef_no=12, decl_uid=5698, cgraph_uid=13, symbol_order=12)

Modification phase of node Flexio_Mcl_Ip_ClearTimerStatus/12
Flexio_Mcl_Ip_ClearTimerStatus (struct FLEXIO_Type * baseAddr, uint8 timer)
{
  int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) timer_3(D);
  _2 = 1 << _1;
  baseAddr_5(D)->TIMSTAT ={v} _2;
  return;

}



;; Function Flexio_Mcl_Ip_GetAllShifterInterrupt (Flexio_Mcl_Ip_GetAllShifterInterrupt, funcdef_no=13, decl_uid=5700, cgraph_uid=14, symbol_order=13)

Modification phase of node Flexio_Mcl_Ip_GetAllShifterInterrupt/13
Flexio_Mcl_Ip_GetAllShifterInterrupt (const struct FLEXIO_Type * baseAddr)
{
  uint32 _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _3 ={v} baseAddr_2(D)->SHIFTSIEN;
  return _3;

}



;; Function Flexio_Mcl_Ip_GetAllShifterErrorInterrupt (Flexio_Mcl_Ip_GetAllShifterErrorInterrupt, funcdef_no=14, decl_uid=5702, cgraph_uid=15, symbol_order=14)

Modification phase of node Flexio_Mcl_Ip_GetAllShifterErrorInterrupt/14
Flexio_Mcl_Ip_GetAllShifterErrorInterrupt (const struct FLEXIO_Type * baseAddr)
{
  uint32 _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _3 ={v} baseAddr_2(D)->SHIFTEIEN;
  return _3;

}



;; Function Flexio_Mcl_Ip_SetShifterErrorInterrupt (Flexio_Mcl_Ip_SetShifterErrorInterrupt, funcdef_no=15, decl_uid=5706, cgraph_uid=16, symbol_order=15)

Modification phase of node Flexio_Mcl_Ip_SetShifterErrorInterrupt/15
Flexio_Mcl_Ip_SetShifterErrorInterrupt (struct FLEXIO_Type * baseAddr, uint8 interruptMask, boolean enable)
{
  uint32 Tmp;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_42 ();
  # DEBUG BEGIN_STMT
  Tmp_8 ={v} baseAddr_7(D)->SHIFTEIEN;
  # DEBUG Tmp => Tmp_8
  # DEBUG BEGIN_STMT
  if (enable_9(D) != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _1 = (long unsigned int) interruptMask_10(D);
  Tmp_12 = _1 | Tmp_8;
  # DEBUG Tmp => Tmp_12
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _2 = (long unsigned int) interruptMask_10(D);
  _3 = ~_2;
  Tmp_11 = _3 & Tmp_8;
  # DEBUG Tmp => Tmp_11

  <bb 5> [local count: 1073741824]:
  # Tmp_4 = PHI <Tmp_12(3), Tmp_11(4)>
  # DEBUG Tmp => Tmp_4
  # DEBUG BEGIN_STMT
  baseAddr_7(D)->SHIFTEIEN ={v} Tmp_4;
  # DEBUG BEGIN_STMT
  SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_42 ();
  return;

}



;; Function Flexio_Mcl_Ip_SetShifterInterrupt (Flexio_Mcl_Ip_SetShifterInterrupt, funcdef_no=16, decl_uid=5710, cgraph_uid=17, symbol_order=16)

Modification phase of node Flexio_Mcl_Ip_SetShifterInterrupt/16
Flexio_Mcl_Ip_SetShifterInterrupt (struct FLEXIO_Type * baseAddr, uint8 interruptMask, boolean enable)
{
  uint32 Tmp;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_43 ();
  # DEBUG BEGIN_STMT
  Tmp_8 ={v} baseAddr_7(D)->SHIFTSIEN;
  # DEBUG Tmp => Tmp_8
  # DEBUG BEGIN_STMT
  if (enable_9(D) != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _1 = (long unsigned int) interruptMask_10(D);
  Tmp_12 = _1 | Tmp_8;
  # DEBUG Tmp => Tmp_12
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _2 = (long unsigned int) interruptMask_10(D);
  _3 = ~_2;
  Tmp_11 = _3 & Tmp_8;
  # DEBUG Tmp => Tmp_11

  <bb 5> [local count: 1073741824]:
  # Tmp_4 = PHI <Tmp_12(3), Tmp_11(4)>
  # DEBUG Tmp => Tmp_4
  # DEBUG BEGIN_STMT
  baseAddr_7(D)->SHIFTSIEN ={v} Tmp_4;
  # DEBUG BEGIN_STMT
  SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_43 ();
  return;

}



;; Function Flexio_Mcl_Ip_SetShifterDMARequest (Flexio_Mcl_Ip_SetShifterDMARequest, funcdef_no=17, decl_uid=5714, cgraph_uid=18, symbol_order=17)

Modification phase of node Flexio_Mcl_Ip_SetShifterDMARequest/17
Flexio_Mcl_Ip_SetShifterDMARequest (struct FLEXIO_Type * baseAddr, uint8 requestMask, boolean enable)
{
  uint32 Tmp;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_44 ();
  # DEBUG BEGIN_STMT
  Tmp_8 ={v} baseAddr_7(D)->SHIFTSDEN;
  # DEBUG Tmp => Tmp_8
  # DEBUG BEGIN_STMT
  if (enable_9(D) != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _1 = (long unsigned int) requestMask_10(D);
  Tmp_12 = _1 | Tmp_8;
  # DEBUG Tmp => Tmp_12
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _2 = (long unsigned int) requestMask_10(D);
  _3 = ~_2;
  Tmp_11 = _3 & Tmp_8;
  # DEBUG Tmp => Tmp_11

  <bb 5> [local count: 1073741824]:
  # Tmp_4 = PHI <Tmp_12(3), Tmp_11(4)>
  # DEBUG Tmp => Tmp_4
  # DEBUG BEGIN_STMT
  baseAddr_7(D)->SHIFTSDEN ={v} Tmp_4;
  # DEBUG BEGIN_STMT
  SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_44 ();
  return;

}



;; Function Flexio_Mcl_Ip_GetAllTimerInterrupt (Flexio_Mcl_Ip_GetAllTimerInterrupt, funcdef_no=18, decl_uid=5716, cgraph_uid=19, symbol_order=18)

Modification phase of node Flexio_Mcl_Ip_GetAllTimerInterrupt/18
Flexio_Mcl_Ip_GetAllTimerInterrupt (const struct FLEXIO_Type * baseAddr)
{
  uint32 _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _3 ={v} baseAddr_2(D)->TIMIEN;
  return _3;

}



;; Function Flexio_Mcl_Ip_SetTimerInterrupt (Flexio_Mcl_Ip_SetTimerInterrupt, funcdef_no=19, decl_uid=5720, cgraph_uid=20, symbol_order=19)

Modification phase of node Flexio_Mcl_Ip_SetTimerInterrupt/19
Flexio_Mcl_Ip_SetTimerInterrupt (struct FLEXIO_Type * baseAddr, uint8 interruptMask, boolean enable)
{
  uint32 Tmp;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_45 ();
  # DEBUG BEGIN_STMT
  Tmp_8 ={v} baseAddr_7(D)->TIMIEN;
  # DEBUG Tmp => Tmp_8
  # DEBUG BEGIN_STMT
  if (enable_9(D) != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _1 = (long unsigned int) interruptMask_10(D);
  Tmp_12 = _1 | Tmp_8;
  # DEBUG Tmp => Tmp_12
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _2 = (long unsigned int) interruptMask_10(D);
  _3 = ~_2;
  Tmp_11 = _3 & Tmp_8;
  # DEBUG Tmp => Tmp_11

  <bb 5> [local count: 1073741824]:
  # Tmp_4 = PHI <Tmp_12(3), Tmp_11(4)>
  # DEBUG Tmp => Tmp_4
  # DEBUG BEGIN_STMT
  baseAddr_7(D)->TIMIEN ={v} Tmp_4;
  # DEBUG BEGIN_STMT
  SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_45 ();
  return;

}



;; Function Flexio_Mcl_Ip_Init (Flexio_Mcl_Ip_Init, funcdef_no=20, decl_uid=5722, cgraph_uid=21, symbol_order=20)

Modification phase of node Flexio_Mcl_Ip_Init/20
Flexio_Mcl_Ip_Init (struct FLEXIO_Type * baseAddr)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Flexio_Mcl_Ip_SetSoftwareReset (baseAddr_2(D), 1);
  # DEBUG BEGIN_STMT
  baseAddr_2(D)->CTRL ={v} 0;
  return;

}


