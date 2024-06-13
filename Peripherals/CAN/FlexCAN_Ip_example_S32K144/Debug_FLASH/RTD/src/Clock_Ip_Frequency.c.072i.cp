
IPA constant propagation start:
Determining dynamic type for call: _4 = PLL_VCO (1074151424B);
  Starting walk at: _4 = PLL_VCO (1074151424B);
  instance pointer: 1074151424B  Outer instance pointer: 1074151424B offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  GetFreq/81:
    indirect simple callsite, calling param -1, offset 0, for stmt _5 = _1 ();
  Jump functions of caller  SetExternalSignalFrequency/80:
  Jump functions of caller  SetExternalOscillatorFrequency/79:
  Jump functions of caller  PLL_VCO/78:
    callsite  PLL_VCO/78 -> get_SOSC_CLK_Frequency/11 : 
  Jump functions of caller  get_TRACE_CLK_Frequency/77:
    callsite  get_TRACE_CLK_Frequency/77 -> get_CORE_CLK_Frequency/29 : 
  Jump functions of caller  get_RTC0_CLK_Frequency/76:
    callsite  get_RTC0_CLK_Frequency/76 -> get_BUS_CLK_Frequency/30 : 
  Jump functions of caller  get_PORTE_CLK_Frequency/75:
    callsite  get_PORTE_CLK_Frequency/75 -> get_BUS_CLK_Frequency/30 : 
  Jump functions of caller  get_PORTD_CLK_Frequency/74:
    callsite  get_PORTD_CLK_Frequency/74 -> get_BUS_CLK_Frequency/30 : 
  Jump functions of caller  get_PORTC_CLK_Frequency/73:
    callsite  get_PORTC_CLK_Frequency/73 -> get_BUS_CLK_Frequency/30 : 
  Jump functions of caller  get_PORTB_CLK_Frequency/72:
    callsite  get_PORTB_CLK_Frequency/72 -> get_BUS_CLK_Frequency/30 : 
  Jump functions of caller  get_PORTA_CLK_Frequency/71:
    callsite  get_PORTA_CLK_Frequency/71 -> get_BUS_CLK_Frequency/30 : 
  Jump functions of caller  get_PDB1_CLK_Frequency/70:
    callsite  get_PDB1_CLK_Frequency/70 -> get_CORE_CLK_Frequency/29 : 
  Jump functions of caller  get_PDB0_CLK_Frequency/69:
    callsite  get_PDB0_CLK_Frequency/69 -> get_CORE_CLK_Frequency/29 : 
  Jump functions of caller  get_MSCM0_CLK_Frequency/68:
    callsite  get_MSCM0_CLK_Frequency/68 -> get_CORE_CLK_Frequency/29 : 
  Jump functions of caller  get_MPU0_CLK_Frequency/67:
    callsite  get_MPU0_CLK_Frequency/67 -> get_CORE_CLK_Frequency/29 : 
  Jump functions of caller  get_LPUART2_CLK_Frequency/66:
    indirect simple callsite, calling param -1, offset 0, for stmt frequency_10 = _4 ();
  Jump functions of caller  get_LPUART1_CLK_Frequency/65:
    indirect simple callsite, calling param -1, offset 0, for stmt frequency_10 = _4 ();
  Jump functions of caller  get_LPUART0_CLK_Frequency/64:
    indirect simple callsite, calling param -1, offset 0, for stmt frequency_10 = _4 ();
  Jump functions of caller  get_LPTMR0_CLK_Frequency/63:
    indirect simple callsite, calling param -1, offset 0, for stmt frequency_16 = _4 ();
  Jump functions of caller  get_LPSPI2_CLK_Frequency/62:
  Jump functions of caller  get_LPSPI1_CLK_Frequency/61:
    indirect simple callsite, calling param -1, offset 0, for stmt frequency_10 = _4 ();
  Jump functions of caller  get_LPSPI0_CLK_Frequency/60:
    indirect simple callsite, calling param -1, offset 0, for stmt frequency_10 = _4 ();
  Jump functions of caller  get_LPIT0_CLK_Frequency/59:
    indirect simple callsite, calling param -1, offset 0, for stmt frequency_10 = _4 ();
  Jump functions of caller  get_LPI2C0_CLK_Frequency/58:
    indirect simple callsite, calling param -1, offset 0, for stmt frequency_10 = _4 ();
  Jump functions of caller  get_FTFC_CLK_Frequency/57:
    callsite  get_FTFC_CLK_Frequency/57 -> get_SLOW_CLK_Frequency/31 : 
  Jump functions of caller  get_FlexIO_CLK_Frequency/56:
    indirect simple callsite, calling param -1, offset 0, for stmt frequency_10 = _4 ();
  Jump functions of caller  get_FTM3_CLK_Frequency/55:
    callsite  get_FTM3_CLK_Frequency/55 -> get_FTM3_EXT_CLK_Frequency/38 : 
    indirect simple callsite, calling param -1, offset 0, for stmt frequency_17 = _7 ();
  Jump functions of caller  get_FTM2_CLK_Frequency/54:
    callsite  get_FTM2_CLK_Frequency/54 -> get_FTM2_EXT_CLK_Frequency/37 : 
    indirect simple callsite, calling param -1, offset 0, for stmt frequency_17 = _7 ();
  Jump functions of caller  get_FTM1_CLK_Frequency/53:
    callsite  get_FTM1_CLK_Frequency/53 -> get_FTM1_EXT_CLK_Frequency/36 : 
    indirect simple callsite, calling param -1, offset 0, for stmt frequency_17 = _7 ();
  Jump functions of caller  get_FTM0_CLK_Frequency/52:
    callsite  get_FTM0_CLK_Frequency/52 -> get_FTM0_EXT_CLK_Frequency/35 : 
    indirect simple callsite, calling param -1, offset 0, for stmt frequency_17 = _7 ();
  Jump functions of caller  get_FLEXCAN2_CLK_Frequency/51:
    callsite  get_FLEXCAN2_CLK_Frequency/51 -> get_CORE_CLK_Frequency/29 : 
  Jump functions of caller  get_FLEXCAN1_CLK_Frequency/50:
    callsite  get_FLEXCAN1_CLK_Frequency/50 -> get_CORE_CLK_Frequency/29 : 
  Jump functions of caller  get_FLEXCAN0_CLK_Frequency/49:
    callsite  get_FLEXCAN0_CLK_Frequency/49 -> get_CORE_CLK_Frequency/29 : 
  Jump functions of caller  get_EWM0_CLK_Frequency/48:
    callsite  get_EWM0_CLK_Frequency/48 -> get_BUS_CLK_Frequency/30 : 
  Jump functions of caller  get_ERM0_CLK_Frequency/47:
    callsite  get_ERM0_CLK_Frequency/47 -> get_CORE_CLK_Frequency/29 : 
  Jump functions of caller  get_EIM0_CLK_Frequency/46:
    callsite  get_EIM0_CLK_Frequency/46 -> get_CORE_CLK_Frequency/29 : 
  Jump functions of caller  get_DMAMUX0_CLK_Frequency/45:
    callsite  get_DMAMUX0_CLK_Frequency/45 -> get_BUS_CLK_Frequency/30 : 
  Jump functions of caller  get_DMA0_CLK_Frequency/44:
    callsite  get_DMA0_CLK_Frequency/44 -> get_CORE_CLK_Frequency/29 : 
  Jump functions of caller  get_CRC0_CLK_Frequency/43:
    callsite  get_CRC0_CLK_Frequency/43 -> get_BUS_CLK_Frequency/30 : 
  Jump functions of caller  get_CMP0_CLK_Frequency/42:
    callsite  get_CMP0_CLK_Frequency/42 -> get_BUS_CLK_Frequency/30 : 
  Jump functions of caller  get_CLKOUT0_CLK_Frequency/41:
    indirect simple callsite, calling param -1, offset 0, for stmt frequency_15 = _4 ();
  Jump functions of caller  get_ADC1_CLK_Frequency/40:
    indirect simple callsite, calling param -1, offset 0, for stmt frequency_10 = _4 ();
  Jump functions of caller  get_ADC0_CLK_Frequency/39:
    indirect simple callsite, calling param -1, offset 0, for stmt frequency_10 = _4 ();
  Jump functions of caller  get_FTM3_EXT_CLK_Frequency/38:
    indirect simple callsite, calling param -1, offset 0, for stmt _6 = _3 ();
  Jump functions of caller  get_FTM2_EXT_CLK_Frequency/37:
    indirect simple callsite, calling param -1, offset 0, for stmt _7 = _4 ();
  Jump functions of caller  get_FTM1_EXT_CLK_Frequency/36:
    indirect simple callsite, calling param -1, offset 0, for stmt _7 = _4 ();
  Jump functions of caller  get_FTM0_EXT_CLK_Frequency/35:
    indirect simple callsite, calling param -1, offset 0, for stmt _7 = _4 ();
  Jump functions of caller  get_SCG_CLKOUT_CLK_Frequency/34:
    indirect simple callsite, calling param -1, offset 0, for stmt _7 = _4 ();
  Jump functions of caller  get_LPO_CLK_Frequency/33:
    indirect simple callsite, calling param -1, offset 0, for stmt _7 = _4 ();
  Jump functions of caller  get_RTC_CLK_Frequency/32:
    indirect simple callsite, calling param -1, offset 0, for stmt _7 = _4 ();
  Jump functions of caller  get_SLOW_CLK_Frequency/31:
    callsite  get_SLOW_CLK_Frequency/31 -> get_CORE_CLK_Frequency/29 : 
  Jump functions of caller  get_BUS_CLK_Frequency/30:
    callsite  get_BUS_CLK_Frequency/30 -> get_CORE_CLK_Frequency/29 : 
  Jump functions of caller  get_CORE_CLK_Frequency/29:
    callsite  get_CORE_CLK_Frequency/29 -> get_SCS_CLK_Frequency/28 : 
  Jump functions of caller  get_SCS_CLK_Frequency/28:
    indirect simple callsite, calling param -1, offset 0, for stmt _7 = _4 ();
  Jump functions of caller  get_rtc_clkin_Frequency/27:
  Jump functions of caller  get_tclk2_ref_Frequency/26:
  Jump functions of caller  get_tclk1_ref_Frequency/25:
  Jump functions of caller  get_tclk0_ref_Frequency/24:
  Jump functions of caller  get_LPO_1K_CLK_Frequency/23:
  Jump functions of caller  get_LPO_32K_CLK_Frequency/22:
  Jump functions of caller  get_SPLLDIV2_CLK_Frequency/21:
    callsite  get_SPLLDIV2_CLK_Frequency/21 -> get_SPLL_CLK_Frequency/13 : 
  Jump functions of caller  get_SPLLDIV1_CLK_Frequency/20:
    callsite  get_SPLLDIV1_CLK_Frequency/20 -> get_SPLL_CLK_Frequency/13 : 
  Jump functions of caller  get_SOSCDIV2_CLK_Frequency/19:
    callsite  get_SOSCDIV2_CLK_Frequency/19 -> get_SOSC_CLK_Frequency/11 : 
  Jump functions of caller  get_SOSCDIV1_CLK_Frequency/18:
    callsite  get_SOSCDIV1_CLK_Frequency/18 -> get_SOSC_CLK_Frequency/11 : 
  Jump functions of caller  get_FIRCDIV2_CLK_Frequency/17:
    callsite  get_FIRCDIV2_CLK_Frequency/17 -> get_FIRC_CLK_Frequency/10 : 
  Jump functions of caller  get_FIRCDIV1_CLK_Frequency/16:
    callsite  get_FIRCDIV1_CLK_Frequency/16 -> get_FIRC_CLK_Frequency/10 : 
  Jump functions of caller  get_SIRCDIV2_CLK_Frequency/15:
    callsite  get_SIRCDIV2_CLK_Frequency/15 -> get_SIRC_CLK_Frequency/12 : 
  Jump functions of caller  get_SIRCDIV1_CLK_Frequency/14:
    callsite  get_SIRCDIV1_CLK_Frequency/14 -> get_SIRC_CLK_Frequency/12 : 
  Jump functions of caller  get_SPLL_CLK_Frequency/13:
    callsite  get_SPLL_CLK_Frequency/13 -> PLL_VCO/78 : 
       param 0: CONST: 1074151424B
         value: 0x0, mask: 0xfffffff8
         VR  ~[0, 0]
  Jump functions of caller  get_SIRC_CLK_Frequency/12:
  Jump functions of caller  get_SOSC_CLK_Frequency/11:
  Jump functions of caller  get_FIRC_CLK_Frequency/10:
  Jump functions of caller  get_LPO_128K_CLK_Frequency/9:
  Jump functions of caller  get_Zero_Frequency/8:

 Propagating constants:

Not considering GetFreq for cloning; -fipa-cp-clone disabled.
Not considering SetExternalSignalFrequency for cloning; -fipa-cp-clone disabled.
Not considering SetExternalOscillatorFrequency for cloning; -fipa-cp-clone disabled.
Not considering get_TRACE_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_RTC0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_PORTE_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_PORTD_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_PORTC_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_PORTB_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_PORTA_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_PDB1_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_PDB0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_MSCM0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_MPU0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_LPUART2_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_LPUART1_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_LPUART0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_LPTMR0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Function get_LPSPI2_CLK_Frequency/62 is not versionable, reason: not a tree_versionable_function.
Not considering get_LPSPI1_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_LPSPI0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_LPIT0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_LPI2C0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_FTFC_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_FlexIO_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_FTM3_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_FTM2_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_FTM1_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_FTM0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_FLEXCAN2_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_FLEXCAN1_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_FLEXCAN0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_EWM0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_ERM0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_EIM0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_DMAMUX0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_DMA0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_CRC0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_CMP0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_CLKOUT0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_ADC1_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_ADC0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_FTM3_EXT_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_FTM2_EXT_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_FTM1_EXT_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_FTM0_EXT_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_SCG_CLKOUT_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_LPO_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_RTC_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_SLOW_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_BUS_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_CORE_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_SCS_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_rtc_clkin_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_tclk2_ref_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_tclk1_ref_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_tclk0_ref_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_LPO_1K_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_LPO_32K_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_SPLLDIV2_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_SPLLDIV1_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_SOSCDIV2_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_SOSCDIV1_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_FIRCDIV2_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_FIRCDIV1_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_SIRCDIV2_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_SIRCDIV1_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_SPLL_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_SIRC_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_SOSC_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_FIRC_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_LPO_128K_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering get_Zero_Frequency for cloning; -fipa-cp-clone disabled.

overall_size: 864, max_new_size: 11001
 - context independent values, size: 4, time_benefit: 1.000000
 - context independent values, size: 19, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: GetFreq/81:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SetExternalSignalFrequency/80:
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
  Node: SetExternalOscillatorFrequency/79:
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
  Node: PLL_VCO/78:
    param [0]: 1074151424B [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffff8
         const struct SCG_Type * [1074151424B, 1074151424B]
        AGGS VARIABLE
  Node: get_TRACE_CLK_Frequency/77:
  Node: get_RTC0_CLK_Frequency/76:
  Node: get_PORTE_CLK_Frequency/75:
  Node: get_PORTD_CLK_Frequency/74:
  Node: get_PORTC_CLK_Frequency/73:
  Node: get_PORTB_CLK_Frequency/72:
  Node: get_PORTA_CLK_Frequency/71:
  Node: get_PDB1_CLK_Frequency/70:
  Node: get_PDB0_CLK_Frequency/69:
  Node: get_MSCM0_CLK_Frequency/68:
  Node: get_MPU0_CLK_Frequency/67:
  Node: get_LPUART2_CLK_Frequency/66:
  Node: get_LPUART1_CLK_Frequency/65:
  Node: get_LPUART0_CLK_Frequency/64:
  Node: get_LPTMR0_CLK_Frequency/63:
  Node: get_LPSPI2_CLK_Frequency/62:
  Node: get_LPSPI1_CLK_Frequency/61:
  Node: get_LPSPI0_CLK_Frequency/60:
  Node: get_LPIT0_CLK_Frequency/59:
  Node: get_LPI2C0_CLK_Frequency/58:
  Node: get_FTFC_CLK_Frequency/57:
  Node: get_FlexIO_CLK_Frequency/56:
  Node: get_FTM3_CLK_Frequency/55:
  Node: get_FTM2_CLK_Frequency/54:
  Node: get_FTM1_CLK_Frequency/53:
  Node: get_FTM0_CLK_Frequency/52:
  Node: get_FLEXCAN2_CLK_Frequency/51:
  Node: get_FLEXCAN1_CLK_Frequency/50:
  Node: get_FLEXCAN0_CLK_Frequency/49:
  Node: get_EWM0_CLK_Frequency/48:
  Node: get_ERM0_CLK_Frequency/47:
  Node: get_EIM0_CLK_Frequency/46:
  Node: get_DMAMUX0_CLK_Frequency/45:
  Node: get_DMA0_CLK_Frequency/44:
  Node: get_CRC0_CLK_Frequency/43:
  Node: get_CMP0_CLK_Frequency/42:
  Node: get_CLKOUT0_CLK_Frequency/41:
  Node: get_ADC1_CLK_Frequency/40:
  Node: get_ADC0_CLK_Frequency/39:
  Node: get_FTM3_EXT_CLK_Frequency/38:
  Node: get_FTM2_EXT_CLK_Frequency/37:
  Node: get_FTM1_EXT_CLK_Frequency/36:
  Node: get_FTM0_EXT_CLK_Frequency/35:
  Node: get_SCG_CLKOUT_CLK_Frequency/34:
  Node: get_LPO_CLK_Frequency/33:
  Node: get_RTC_CLK_Frequency/32:
  Node: get_SLOW_CLK_Frequency/31:
  Node: get_BUS_CLK_Frequency/30:
  Node: get_CORE_CLK_Frequency/29:
  Node: get_SCS_CLK_Frequency/28:
  Node: get_rtc_clkin_Frequency/27:
  Node: get_tclk2_ref_Frequency/26:
  Node: get_tclk1_ref_Frequency/25:
  Node: get_tclk0_ref_Frequency/24:
  Node: get_LPO_1K_CLK_Frequency/23:
  Node: get_LPO_32K_CLK_Frequency/22:
  Node: get_SPLLDIV2_CLK_Frequency/21:
  Node: get_SPLLDIV1_CLK_Frequency/20:
  Node: get_SOSCDIV2_CLK_Frequency/19:
  Node: get_SOSCDIV1_CLK_Frequency/18:
  Node: get_FIRCDIV2_CLK_Frequency/17:
  Node: get_FIRCDIV1_CLK_Frequency/16:
  Node: get_SIRCDIV2_CLK_Frequency/15:
  Node: get_SIRCDIV1_CLK_Frequency/14:
  Node: get_SPLL_CLK_Frequency/13:
  Node: get_SIRC_CLK_Frequency/12:
  Node: get_SOSC_CLK_Frequency/11:
  Node: get_FIRC_CLK_Frequency/10:
  Node: get_LPO_128K_CLK_Frequency/9:
  Node: get_Zero_Frequency/8:

IPA decision stage:

 - Creating a specialized node of PLL_VCO/78 for all known contexts.
    replacing param #0 base with const 1074151424B
Propagated bits info for function PLL_VCO.constprop/92:
 param 0: value = 0x0, mask = 0xfffffff8
Propagated bits info for function PLL_VCO/78:
 param 0: value = 0x0, mask = 0xfffffff8

IPA constant propagation end

Reclaiming functions: PLL_VCO/78
Reclaiming variables:
Clearing address taken flags:
Symbol table:

PLL_VCO.constprop.0/92 (PLL_VCO.constprop) @06998b60
  Type: function definition analyzed
  Visibility:
  References: 
  Referring: 
  Clone of PLL_VCO/78
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: get_SPLL_CLK_Frequency/13 (524845004 (estimated locally),0.49 per call) 
  Calls: get_SOSC_CLK_Frequency/11 (1073741824 (estimated locally),1.00 per call) 
spll_Freq.6228/89 (spll_Freq) @06fe8510
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: get_SPLL_CLK_Frequency/13 (write)get_SPLL_CLK_Frequency/13 (read)
  Availability: available
  Varpool flags: initialized
spll_checksum.6229/88 (spll_checksum) @06fe8480
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: get_SPLL_CLK_Frequency/13 (read)get_SPLL_CLK_Frequency/13 (write)
  Availability: available
  Varpool flags: initialized
freqTableSCS.6283/87 (freqTableSCS) @06fd8168
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: get_Zero_Frequency/8 (addr)get_SOSC_CLK_Frequency/11 (addr)get_SIRC_CLK_Frequency/12 (addr)get_FIRC_CLK_Frequency/10 (addr)get_Zero_Frequency/8 (addr)get_Zero_Frequency/8 (addr)get_SPLL_CLK_Frequency/13 (addr)
  Referring: get_SCS_CLK_Frequency/28 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
freqTableRtc.6296/86 (freqTableRtc) @06fcf9d8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: get_SOSCDIV1_CLK_Frequency/18 (addr)get_LPO_32K_CLK_Frequency/22 (addr)get_rtc_clkin_Frequency/27 (addr)get_FIRCDIV1_CLK_Frequency/16 (addr)
  Referring: get_RTC_CLK_Frequency/32 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
freqTableLpo.6300/85 (freqTableLpo) @06fcf798
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: get_LPO_128K_CLK_Frequency/9 (addr)get_Zero_Frequency/8 (addr)get_LPO_32K_CLK_Frequency/22 (addr)get_LPO_1K_CLK_Frequency/23 (addr)
  Referring: get_LPO_CLK_Frequency/33 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
freqTableScg.6304/84 (freqTableScg) @06fcf558
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: get_SLOW_CLK_Frequency/31 (addr)get_SOSC_CLK_Frequency/11 (addr)get_SIRC_CLK_Frequency/12 (addr)get_FIRC_CLK_Frequency/10 (addr)get_Zero_Frequency/8 (addr)get_Zero_Frequency/8 (addr)get_SPLL_CLK_Frequency/13 (addr)get_Zero_Frequency/8 (addr)
  Referring: get_SCG_CLKOUT_CLK_Frequency/34 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
freqTableClkOut.6328/83 (freqTableClkOut) @06fc5708
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: get_SCG_CLKOUT_CLK_Frequency/34 (addr)get_Zero_Frequency/8 (addr)get_SOSCDIV2_CLK_Frequency/19 (addr)get_Zero_Frequency/8 (addr)get_SIRCDIV2_CLK_Frequency/15 (addr)get_Zero_Frequency/8 (addr)get_FIRCDIV2_CLK_Frequency/17 (addr)get_CORE_CLK_Frequency/29 (addr)get_SPLLDIV2_CLK_Frequency/21 (addr)get_BUS_CLK_Frequency/30 (addr)get_LPO_128K_CLK_Frequency/9 (addr)get_Zero_Frequency/8 (addr)get_LPO_CLK_Frequency/33 (addr)get_Zero_Frequency/8 (addr)get_RTC_CLK_Frequency/32 (addr)get_Zero_Frequency/8 (addr)
  Referring: get_CLKOUT0_CLK_Frequency/41 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
freqTable.6503/82 (freqTable) @06f97d38
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: get_Zero_Frequency/8 (addr)get_LPO_128K_CLK_Frequency/9 (addr)get_SIRC_CLK_Frequency/12 (addr)get_Zero_Frequency/8 (addr)get_Zero_Frequency/8 (addr)get_FIRC_CLK_Frequency/10 (addr)get_Zero_Frequency/8 (addr)get_Zero_Frequency/8 (addr)get_SOSC_CLK_Frequency/11 (addr)get_SPLL_CLK_Frequency/13 (addr)get_SIRCDIV1_CLK_Frequency/14 (addr)get_SIRCDIV2_CLK_Frequency/15 (addr)get_FIRCDIV1_CLK_Frequency/16 (addr)get_FIRCDIV2_CLK_Frequency/17 (addr)get_SOSCDIV1_CLK_Frequency/18 (addr)get_SOSCDIV2_CLK_Frequency/19 (addr)get_SPLLDIV1_CLK_Frequency/20 (addr)get_SPLLDIV2_CLK_Frequency/21 (addr)get_LPO_32K_CLK_Frequency/22 (addr)get_LPO_1K_CLK_Frequency/23 (addr)get_tclk0_ref_Frequency/24 (addr)get_tclk1_ref_Frequency/25 (addr)get_tclk2_ref_Frequency/26 (addr)get_rtc_clkin_Frequency/27 (addr)get_SCS_CLK_Frequency/28 (addr)get_Zero_Frequency/8 (addr)get_Zero_Frequency/8 (addr)get_Zero_Frequency/8 (addr)get_CORE_CLK_Frequency/29 (addr)get_Zero_Frequency/8 (addr)get_Zero_Frequency/8 (addr)get_Zero_Frequency/8 (addr)get_BUS_CLK_Frequency/30 (addr)get_Zero_Frequency/8 (addr)get_Zero_Frequency/8 (addr)get_Zero_Frequency/8 (addr)get_SLOW_CLK_Frequency/31 (addr)get_Zero_Frequency/8 (addr)get_Zero_Frequency/8 (addr)get_Zero_Frequency/8 (addr)get_RTC_CLK_Frequency/32 (addr)get_LPO_CLK_Frequency/33 (addr)get_SCG_CLKOUT_CLK_Frequency/34 (addr)get_FTM0_EXT_CLK_Frequency/35 (addr)get_FTM1_EXT_CLK_Frequency/36 (addr)get_FTM2_EXT_CLK_Frequency/37 (addr)get_FTM3_EXT_CLK_Frequency/38 (addr)get_ADC0_CLK_Frequency/39 (addr)get_ADC1_CLK_Frequency/40 (addr)get_CLKOUT0_CLK_Frequency/41 (addr)get_CMP0_CLK_Frequency/42 (addr)get_CRC0_CLK_Frequency/43 (addr)get_DMA0_CLK_Frequency/44 (addr)get_DMAMUX0_CLK_Frequency/45 (addr)get_EIM0_CLK_Frequency/46 (addr)get_ERM0_CLK_Frequency/47 (addr)get_EWM0_CLK_Frequency/48 (addr)get_FLEXCAN0_CLK_Frequency/49 (addr)get_FLEXCAN1_CLK_Frequency/50 (addr)get_FLEXCAN2_CLK_Frequency/51 (addr)get_FlexIO_CLK_Frequency/56 (addr)get_FTFC_CLK_Frequency/57 (addr)get_FTM0_CLK_Frequency/52 (addr)get_FTM1_CLK_Frequency/53 (addr)get_FTM2_CLK_Frequency/54 (addr)get_FTM3_CLK_Frequency/55 (addr)get_LPI2C0_CLK_Frequency/58 (addr)get_LPIT0_CLK_Frequency/59 (addr)get_LPSPI0_CLK_Frequency/60 (addr)get_LPSPI1_CLK_Frequency/61 (addr)get_LPSPI2_CLK_Frequency/62 (addr)get_LPTMR0_CLK_Frequency/63 (addr)get_LPUART0_CLK_Frequency/64 (addr)get_LPUART1_CLK_Frequency/65 (addr)get_LPUART2_CLK_Frequency/66 (addr)get_MPU0_CLK_Frequency/67 (addr)get_MSCM0_CLK_Frequency/68 (addr)get_PDB0_CLK_Frequency/69 (addr)get_PDB1_CLK_Frequency/70 (addr)get_PORTA_CLK_Frequency/71 (addr)get_PORTB_CLK_Frequency/72 (addr)get_PORTC_CLK_Frequency/73 (addr)get_PORTD_CLK_Frequency/74 (addr)get_PORTE_CLK_Frequency/75 (addr)get_RTC0_CLK_Frequency/76 (addr)get_TRACE_CLK_Frequency/77 (addr)
  Referring: GetFreq/81 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
GetFreq/81 (GetFreq) @06f99a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: freqTable.6503/82 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
SetExternalSignalFrequency/80 (SetExternalSignalFrequency) @06f99700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: extSignalFreqEntries/6 (read)extSignalFreqEntries/6 (write)
  Referring: 
  Availability: available
  Function flags: count:261993004 (estimated locally) body optimize_size
  Called by: 
  Calls: 
SetExternalOscillatorFrequency/79 (SetExternalOscillatorFrequency) @06f99460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: sosc/7 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
PLL_VCO/78 (PLL_VCO) @06f991c0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
get_TRACE_CLK_Frequency/77 (get_TRACE_CLK_Frequency) @06f8dd20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: get_CORE_CLK_Frequency/29 (1073741824 (estimated locally),1.00 per call) 
get_RTC0_CLK_Frequency/76 (get_RTC0_CLK_Frequency) @06f8d7e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: get_BUS_CLK_Frequency/30 (1073741824 (estimated locally),1.00 per call) 
get_PORTE_CLK_Frequency/75 (get_PORTE_CLK_Frequency) @06f8d2a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: get_BUS_CLK_Frequency/30 (1073741824 (estimated locally),1.00 per call) 
get_PORTD_CLK_Frequency/74 (get_PORTD_CLK_Frequency) @06f8dee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: get_BUS_CLK_Frequency/30 (1073741824 (estimated locally),1.00 per call) 
get_PORTC_CLK_Frequency/73 (get_PORTC_CLK_Frequency) @06f8dc40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: get_BUS_CLK_Frequency/30 (1073741824 (estimated locally),1.00 per call) 
get_PORTB_CLK_Frequency/72 (get_PORTB_CLK_Frequency) @06f8d9a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: get_BUS_CLK_Frequency/30 (1073741824 (estimated locally),1.00 per call) 
get_PORTA_CLK_Frequency/71 (get_PORTA_CLK_Frequency) @06f8d700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: get_BUS_CLK_Frequency/30 (1073741824 (estimated locally),1.00 per call) 
get_PDB1_CLK_Frequency/70 (get_PDB1_CLK_Frequency) @06f8d460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: get_CORE_CLK_Frequency/29 (1073741824 (estimated locally),1.00 per call) 
get_PDB0_CLK_Frequency/69 (get_PDB0_CLK_Frequency) @06f8d1c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: get_CORE_CLK_Frequency/29 (1073741824 (estimated locally),1.00 per call) 
get_MSCM0_CLK_Frequency/68 (get_MSCM0_CLK_Frequency) @06f85d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: get_CORE_CLK_Frequency/29 (1073741824 (estimated locally),1.00 per call) 
get_MPU0_CLK_Frequency/67 (get_MPU0_CLK_Frequency) @06f857e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: get_CORE_CLK_Frequency/29 (1073741824 (estimated locally),1.00 per call) 
get_LPUART2_CLK_Frequency/66 (get_LPUART2_CLK_Frequency) @06f852a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: freqTablePcs2/3 (read)enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
get_LPUART1_CLK_Frequency/65 (get_LPUART1_CLK_Frequency) @06f85ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: freqTablePcs2/3 (read)enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
get_LPUART0_CLK_Frequency/64 (get_LPUART0_CLK_Frequency) @06f85c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: freqTablePcs2/3 (read)enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
get_LPTMR0_CLK_Frequency/63 (get_LPTMR0_CLK_Frequency) @06f859a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: freqTablePcs2/3 (read)enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
get_LPSPI2_CLK_Frequency/62 (get_LPSPI2_CLK_Frequency) @06f85700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: get_LPSPI1_CLK_Frequency/61 (1073741824 (estimated locally),1.00 per call) 
get_LPSPI1_CLK_Frequency/61 (get_LPSPI1_CLK_Frequency) @06f85460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: freqTablePcs2/3 (read)enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: get_LPSPI2_CLK_Frequency/62 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
get_LPSPI0_CLK_Frequency/60 (get_LPSPI0_CLK_Frequency) @06f851c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: freqTablePcs2/3 (read)enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
get_LPIT0_CLK_Frequency/59 (get_LPIT0_CLK_Frequency) @06f7cd20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: freqTablePcs2/3 (read)enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
get_LPI2C0_CLK_Frequency/58 (get_LPI2C0_CLK_Frequency) @06f7c7e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: freqTablePcs2/3 (read)enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
get_FTFC_CLK_Frequency/57 (get_FTFC_CLK_Frequency) @06f7c2a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: get_SLOW_CLK_Frequency/31 (1073741824 (estimated locally),1.00 per call) 
get_FlexIO_CLK_Frequency/56 (get_FlexIO_CLK_Frequency) @06f7cee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: freqTablePcs2/3 (read)enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
get_FTM3_CLK_Frequency/55 (get_FTM3_CLK_Frequency) @06f7cc40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: freqTablePcs1/4 (read)enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: get_FTM3_EXT_CLK_Frequency/38 (354334802 (estimated locally),0.33 per call) 
   Indirect call(719407023 (estimated locally),0.67 per call) 
get_FTM2_CLK_Frequency/54 (get_FTM2_CLK_Frequency) @06f7c9a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: freqTablePcs1/4 (read)enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: get_FTM2_EXT_CLK_Frequency/37 (354334802 (estimated locally),0.33 per call) 
   Indirect call(719407023 (estimated locally),0.67 per call) 
get_FTM1_CLK_Frequency/53 (get_FTM1_CLK_Frequency) @06f7c700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: freqTablePcs1/4 (read)enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: get_FTM1_EXT_CLK_Frequency/36 (354334802 (estimated locally),0.33 per call) 
   Indirect call(719407023 (estimated locally),0.67 per call) 
get_FTM0_CLK_Frequency/52 (get_FTM0_CLK_Frequency) @06f7c460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: freqTablePcs1/4 (read)enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: get_FTM0_EXT_CLK_Frequency/35 (354334802 (estimated locally),0.33 per call) 
   Indirect call(719407023 (estimated locally),0.67 per call) 
get_FLEXCAN2_CLK_Frequency/51 (get_FLEXCAN2_CLK_Frequency) @06f7c1c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: get_CORE_CLK_Frequency/29 (1073741824 (estimated locally),1.00 per call) 
get_FLEXCAN1_CLK_Frequency/50 (get_FLEXCAN1_CLK_Frequency) @06f78d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: get_CORE_CLK_Frequency/29 (1073741824 (estimated locally),1.00 per call) 
get_FLEXCAN0_CLK_Frequency/49 (get_FLEXCAN0_CLK_Frequency) @06f787e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: get_CORE_CLK_Frequency/29 (1073741824 (estimated locally),1.00 per call) 
get_EWM0_CLK_Frequency/48 (get_EWM0_CLK_Frequency) @06f782a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: get_BUS_CLK_Frequency/30 (1073741824 (estimated locally),1.00 per call) 
get_ERM0_CLK_Frequency/47 (get_ERM0_CLK_Frequency) @06f78ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: get_CORE_CLK_Frequency/29 (1073741824 (estimated locally),1.00 per call) 
get_EIM0_CLK_Frequency/46 (get_EIM0_CLK_Frequency) @06f78c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: get_CORE_CLK_Frequency/29 (1073741824 (estimated locally),1.00 per call) 
get_DMAMUX0_CLK_Frequency/45 (get_DMAMUX0_CLK_Frequency) @06f789a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: get_BUS_CLK_Frequency/30 (1073741824 (estimated locally),1.00 per call) 
get_DMA0_CLK_Frequency/44 (get_DMA0_CLK_Frequency) @06f78700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: get_CORE_CLK_Frequency/29 (1073741824 (estimated locally),1.00 per call) 
get_CRC0_CLK_Frequency/43 (get_CRC0_CLK_Frequency) @06f78460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: get_BUS_CLK_Frequency/30 (1073741824 (estimated locally),1.00 per call) 
get_CMP0_CLK_Frequency/42 (get_CMP0_CLK_Frequency) @06f781c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: get_BUS_CLK_Frequency/30 (1073741824 (estimated locally),1.00 per call) 
get_CLKOUT0_CLK_Frequency/41 (get_CLKOUT0_CLK_Frequency) @06993e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: freqTableClkOut.6328/83 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
get_ADC1_CLK_Frequency/40 (get_ADC1_CLK_Frequency) @06993620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: freqTablePcs2/3 (read)enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
get_ADC0_CLK_Frequency/39 (get_ADC0_CLK_Frequency) @069930e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: freqTablePcs2/3 (read)enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
get_FTM3_EXT_CLK_Frequency/38 (get_FTM3_EXT_CLK_Frequency) @06993d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: freqTableSimFtm/5 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: get_FTM3_CLK_Frequency/55 (354334802 (estimated locally),0.33 per call) 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
get_FTM2_EXT_CLK_Frequency/37 (get_FTM2_EXT_CLK_Frequency) @06993a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: freqTableSimFtm/5 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: get_FTM2_CLK_Frequency/54 (354334802 (estimated locally),0.33 per call) 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
get_FTM1_EXT_CLK_Frequency/36 (get_FTM1_EXT_CLK_Frequency) @069937e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: freqTableSimFtm/5 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: get_FTM1_CLK_Frequency/53 (354334802 (estimated locally),0.33 per call) 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
get_FTM0_EXT_CLK_Frequency/35 (get_FTM0_EXT_CLK_Frequency) @06993540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: freqTableSimFtm/5 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: get_FTM0_CLK_Frequency/52 (354334802 (estimated locally),0.33 per call) 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
get_SCG_CLKOUT_CLK_Frequency/34 (get_SCG_CLKOUT_CLK_Frequency) @069932a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: freqTableScg.6304/84 (read)
  Referring: freqTable.6503/82 (addr)freqTableClkOut.6328/83 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
get_LPO_CLK_Frequency/33 (get_LPO_CLK_Frequency) @06993000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: freqTableLpo.6300/85 (read)
  Referring: freqTable.6503/82 (addr)freqTableClkOut.6328/83 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
get_RTC_CLK_Frequency/32 (get_RTC_CLK_Frequency) @0698fb60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: freqTableRtc.6296/86 (read)
  Referring: freqTable.6503/82 (addr)freqTableClkOut.6328/83 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
get_SLOW_CLK_Frequency/31 (get_SLOW_CLK_Frequency) @0698f620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: freqTable.6503/82 (addr)freqTableScg.6304/84 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: get_FTFC_CLK_Frequency/57 (1073741824 (estimated locally),1.00 per call) 
  Calls: get_CORE_CLK_Frequency/29 (1073741824 (estimated locally),1.00 per call) 
get_BUS_CLK_Frequency/30 (get_BUS_CLK_Frequency) @0698f0e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: freqTable.6503/82 (addr)freqTableClkOut.6328/83 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: get_RTC0_CLK_Frequency/76 (1073741824 (estimated locally),1.00 per call) get_PORTE_CLK_Frequency/75 (1073741824 (estimated locally),1.00 per call) get_PORTD_CLK_Frequency/74 (1073741824 (estimated locally),1.00 per call) get_PORTC_CLK_Frequency/73 (1073741824 (estimated locally),1.00 per call) get_PORTB_CLK_Frequency/72 (1073741824 (estimated locally),1.00 per call) get_PORTA_CLK_Frequency/71 (1073741824 (estimated locally),1.00 per call) get_EWM0_CLK_Frequency/48 (1073741824 (estimated locally),1.00 per call) get_DMAMUX0_CLK_Frequency/45 (1073741824 (estimated locally),1.00 per call) get_CRC0_CLK_Frequency/43 (1073741824 (estimated locally),1.00 per call) get_CMP0_CLK_Frequency/42 (1073741824 (estimated locally),1.00 per call) 
  Calls: get_CORE_CLK_Frequency/29 (1073741824 (estimated locally),1.00 per call) 
get_CORE_CLK_Frequency/29 (get_CORE_CLK_Frequency) @0698fd20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: freqTable.6503/82 (addr)freqTableClkOut.6328/83 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: get_TRACE_CLK_Frequency/77 (1073741824 (estimated locally),1.00 per call) get_PDB1_CLK_Frequency/70 (1073741824 (estimated locally),1.00 per call) get_PDB0_CLK_Frequency/69 (1073741824 (estimated locally),1.00 per call) get_MSCM0_CLK_Frequency/68 (1073741824 (estimated locally),1.00 per call) get_MPU0_CLK_Frequency/67 (1073741824 (estimated locally),1.00 per call) get_FLEXCAN2_CLK_Frequency/51 (1073741824 (estimated locally),1.00 per call) get_FLEXCAN1_CLK_Frequency/50 (1073741824 (estimated locally),1.00 per call) get_FLEXCAN0_CLK_Frequency/49 (1073741824 (estimated locally),1.00 per call) get_ERM0_CLK_Frequency/47 (1073741824 (estimated locally),1.00 per call) get_EIM0_CLK_Frequency/46 (1073741824 (estimated locally),1.00 per call) get_DMA0_CLK_Frequency/44 (1073741824 (estimated locally),1.00 per call) get_SLOW_CLK_Frequency/31 (1073741824 (estimated locally),1.00 per call) get_BUS_CLK_Frequency/30 (1073741824 (estimated locally),1.00 per call) 
  Calls: get_SCS_CLK_Frequency/28 (1073741824 (estimated locally),1.00 per call) 
get_SCS_CLK_Frequency/28 (get_SCS_CLK_Frequency) @0698fa80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: freqTableSCS.6283/87 (read)
  Referring: freqTable.6503/82 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: get_CORE_CLK_Frequency/29 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
get_rtc_clkin_Frequency/27 (get_rtc_clkin_Frequency) @0698f7e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: extSignalFreqEntries/6 (read)
  Referring: freqTable.6503/82 (addr)freqTableRtc.6296/86 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
get_tclk2_ref_Frequency/26 (get_tclk2_ref_Frequency) @0698f540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: extSignalFreqEntries/6 (read)
  Referring: freqTable.6503/82 (addr)freqTableSimFtm/5 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
get_tclk1_ref_Frequency/25 (get_tclk1_ref_Frequency) @0698f2a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: extSignalFreqEntries/6 (read)
  Referring: freqTable.6503/82 (addr)freqTableSimFtm/5 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
get_tclk0_ref_Frequency/24 (get_tclk0_ref_Frequency) @0698f000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: extSignalFreqEntries/6 (read)
  Referring: freqTable.6503/82 (addr)freqTableSimFtm/5 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
get_LPO_1K_CLK_Frequency/23 (get_LPO_1K_CLK_Frequency) @06988b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)freqTableLpo.6300/85 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
get_LPO_32K_CLK_Frequency/22 (get_LPO_32K_CLK_Frequency) @06988620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: enableGate/1 (read)
  Referring: freqTable.6503/82 (addr)freqTableLpo.6300/85 (addr)freqTableRtc.6296/86 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
get_SPLLDIV2_CLK_Frequency/21 (get_SPLLDIV2_CLK_Frequency) @069880e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: dividerMappingValue/2 (read)
  Referring: freqTable.6503/82 (addr)freqTablePcs2/3 (addr)freqTableClkOut.6328/83 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: get_SPLL_CLK_Frequency/13 (354334802 (estimated locally),0.33 per call) 
get_SPLLDIV1_CLK_Frequency/20 (get_SPLLDIV1_CLK_Frequency) @06988d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: dividerMappingValue/2 (read)
  Referring: freqTable.6503/82 (addr)freqTablePcs1/4 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: get_SPLL_CLK_Frequency/13 (354334802 (estimated locally),0.33 per call) 
get_SOSCDIV2_CLK_Frequency/19 (get_SOSCDIV2_CLK_Frequency) @06988a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: dividerMappingValue/2 (read)
  Referring: freqTable.6503/82 (addr)freqTablePcs2/3 (addr)freqTableClkOut.6328/83 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: get_SOSC_CLK_Frequency/11 (354334802 (estimated locally),0.33 per call) 
get_SOSCDIV1_CLK_Frequency/18 (get_SOSCDIV1_CLK_Frequency) @069887e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: dividerMappingValue/2 (read)
  Referring: freqTable.6503/82 (addr)freqTablePcs1/4 (addr)freqTableRtc.6296/86 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: get_SOSC_CLK_Frequency/11 (354334802 (estimated locally),0.33 per call) 
get_FIRCDIV2_CLK_Frequency/17 (get_FIRCDIV2_CLK_Frequency) @06988540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: dividerMappingValue/2 (read)
  Referring: freqTable.6503/82 (addr)freqTablePcs2/3 (addr)freqTableClkOut.6328/83 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: get_FIRC_CLK_Frequency/10 (354334802 (estimated locally),0.33 per call) 
get_FIRCDIV1_CLK_Frequency/16 (get_FIRCDIV1_CLK_Frequency) @069882a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: dividerMappingValue/2 (read)
  Referring: freqTable.6503/82 (addr)freqTablePcs1/4 (addr)freqTableRtc.6296/86 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: get_FIRC_CLK_Frequency/10 (354334802 (estimated locally),0.33 per call) 
get_SIRCDIV2_CLK_Frequency/15 (get_SIRCDIV2_CLK_Frequency) @06988000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: dividerMappingValue/2 (read)
  Referring: freqTable.6503/82 (addr)freqTablePcs2/3 (addr)freqTableClkOut.6328/83 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: get_SIRC_CLK_Frequency/12 (354334802 (estimated locally),0.33 per call) 
get_SIRCDIV1_CLK_Frequency/14 (get_SIRCDIV1_CLK_Frequency) @06865a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: dividerMappingValue/2 (read)
  Referring: freqTable.6503/82 (addr)freqTablePcs1/4 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: get_SIRC_CLK_Frequency/12 (354334802 (estimated locally),0.33 per call) 
get_SPLL_CLK_Frequency/13 (get_SPLL_CLK_Frequency) @06865540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: spll_checksum.6229/88 (read)spll_checksum.6229/88 (write)enableClock/0 (read)spll_Freq.6228/89 (write)spll_Freq.6228/89 (read)
  Referring: freqTable.6503/82 (addr)freqTableScg.6304/84 (addr)freqTableSCS.6283/87 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: get_SPLLDIV1_CLK_Frequency/20 (354334802 (estimated locally),0.33 per call) get_SPLLDIV2_CLK_Frequency/21 (354334802 (estimated locally),0.33 per call) 
  Calls: PLL_VCO.constprop/92 (524845004 (estimated locally),0.49 per call) 
get_SIRC_CLK_Frequency/12 (get_SIRC_CLK_Frequency) @06865ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: enableClock/0 (read)
  Referring: freqTable.6503/82 (addr)freqTableScg.6304/84 (addr)freqTableSCS.6283/87 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: get_SIRCDIV2_CLK_Frequency/15 (354334802 (estimated locally),0.33 per call) get_SIRCDIV1_CLK_Frequency/14 (354334802 (estimated locally),0.33 per call) 
  Calls: 
get_SOSC_CLK_Frequency/11 (get_SOSC_CLK_Frequency) @06865c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: enableClock/0 (read)sosc/7 (read)
  Referring: freqTable.6503/82 (addr)freqTableScg.6304/84 (addr)freqTableSCS.6283/87 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: PLL_VCO.constprop/92 (1073741824 (estimated locally),1.00 per call) get_SOSCDIV2_CLK_Frequency/19 (354334802 (estimated locally),0.33 per call) get_SOSCDIV1_CLK_Frequency/18 (354334802 (estimated locally),0.33 per call) 
  Calls: 
get_FIRC_CLK_Frequency/10 (get_FIRC_CLK_Frequency) @068659a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: enableClock/0 (read)
  Referring: freqTable.6503/82 (addr)freqTableScg.6304/84 (addr)freqTableSCS.6283/87 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: get_FIRCDIV2_CLK_Frequency/17 (354334802 (estimated locally),0.33 per call) get_FIRCDIV1_CLK_Frequency/16 (354334802 (estimated locally),0.33 per call) 
  Calls: 
get_LPO_128K_CLK_Frequency/9 (get_LPO_128K_CLK_Frequency) @06865700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: freqTable.6503/82 (addr)freqTableClkOut.6328/83 (addr)freqTableLpo.6300/85 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
get_Zero_Frequency/8 (get_Zero_Frequency) @06865460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: freqTable.6503/82 (addr)freqTable.6503/82 (addr)freqTable.6503/82 (addr)freqTable.6503/82 (addr)freqTable.6503/82 (addr)freqTable.6503/82 (addr)freqTable.6503/82 (addr)freqTable.6503/82 (addr)freqTable.6503/82 (addr)freqTable.6503/82 (addr)freqTable.6503/82 (addr)freqTable.6503/82 (addr)freqTable.6503/82 (addr)freqTable.6503/82 (addr)freqTable.6503/82 (addr)freqTable.6503/82 (addr)freqTable.6503/82 (addr)freqTablePcs2/3 (addr)freqTablePcs2/3 (addr)freqTablePcs2/3 (addr)freqTablePcs1/4 (addr)freqTablePcs1/4 (addr)freqTablePcs1/4 (addr)freqTableClkOut.6328/83 (addr)freqTableClkOut.6328/83 (addr)freqTableClkOut.6328/83 (addr)freqTableClkOut.6328/83 (addr)freqTableClkOut.6328/83 (addr)freqTableClkOut.6328/83 (addr)freqTableSimFtm/5 (addr)freqTableScg.6304/84 (addr)freqTableScg.6304/84 (addr)freqTableScg.6304/84 (addr)freqTableLpo.6300/85 (addr)freqTableSCS.6283/87 (addr)freqTableSCS.6283/87 (addr)freqTableSCS.6283/87 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
sosc/7 (sosc) @06863438
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: get_SOSC_CLK_Frequency/11 (read)SetExternalOscillatorFrequency/79 (write)
  Availability: available
  Varpool flags: initialized
extSignalFreqEntries/6 (extSignalFreqEntries) @068633a8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: get_rtc_clkin_Frequency/27 (read)get_tclk2_ref_Frequency/26 (read)get_tclk1_ref_Frequency/25 (read)get_tclk0_ref_Frequency/24 (read)SetExternalSignalFrequency/80 (read)SetExternalSignalFrequency/80 (write)
  Availability: available
  Varpool flags: initialized
freqTableSimFtm/5 (freqTableSimFtm) @06863318
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: get_tclk0_ref_Frequency/24 (addr)get_tclk1_ref_Frequency/25 (addr)get_tclk2_ref_Frequency/26 (addr)get_Zero_Frequency/8 (addr)
  Referring: get_FTM1_EXT_CLK_Frequency/36 (read)get_FTM0_EXT_CLK_Frequency/35 (read)get_FTM2_EXT_CLK_Frequency/37 (read)get_FTM3_EXT_CLK_Frequency/38 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
freqTablePcs1/4 (freqTablePcs1) @06863288
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: get_Zero_Frequency/8 (addr)get_SOSCDIV1_CLK_Frequency/18 (addr)get_SIRCDIV1_CLK_Frequency/14 (addr)get_FIRCDIV1_CLK_Frequency/16 (addr)get_Zero_Frequency/8 (addr)get_Zero_Frequency/8 (addr)get_SPLLDIV1_CLK_Frequency/20 (addr)
  Referring: get_FTM1_CLK_Frequency/53 (read)get_FTM0_CLK_Frequency/52 (read)get_FTM2_CLK_Frequency/54 (read)get_FTM3_CLK_Frequency/55 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
freqTablePcs2/3 (freqTablePcs2) @068631b0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: get_Zero_Frequency/8 (addr)get_SOSCDIV2_CLK_Frequency/19 (addr)get_SIRCDIV2_CLK_Frequency/15 (addr)get_FIRCDIV2_CLK_Frequency/17 (addr)get_Zero_Frequency/8 (addr)get_Zero_Frequency/8 (addr)get_SPLLDIV2_CLK_Frequency/21 (addr)
  Referring: get_LPUART0_CLK_Frequency/64 (read)get_LPTMR0_CLK_Frequency/63 (read)get_LPUART2_CLK_Frequency/66 (read)get_LPSPI1_CLK_Frequency/61 (read)get_LPSPI0_CLK_Frequency/60 (read)get_LPIT0_CLK_Frequency/59 (read)get_LPI2C0_CLK_Frequency/58 (read)get_FlexIO_CLK_Frequency/56 (read)get_ADC1_CLK_Frequency/40 (read)get_ADC0_CLK_Frequency/39 (read)get_LPUART1_CLK_Frequency/65 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
dividerMappingValue/2 (dividerMappingValue) @068630d8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: get_SOSCDIV1_CLK_Frequency/18 (read)get_SOSCDIV2_CLK_Frequency/19 (read)get_FIRCDIV2_CLK_Frequency/17 (read)get_FIRCDIV1_CLK_Frequency/16 (read)get_SIRCDIV2_CLK_Frequency/15 (read)get_SIRCDIV1_CLK_Frequency/14 (read)get_SPLLDIV2_CLK_Frequency/21 (read)get_SPLLDIV1_CLK_Frequency/20 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
enableGate/1 (enableGate) @06863000
  Type: variable definition analyzed alias
  Visibility: prevailing_def_ironly
  References: enableClock/0 (alias)
  Referring: get_PORTE_CLK_Frequency/75 (read)get_PORTD_CLK_Frequency/74 (read)get_PORTC_CLK_Frequency/73 (read)get_PORTB_CLK_Frequency/72 (read)get_PORTA_CLK_Frequency/71 (read)get_PDB1_CLK_Frequency/70 (read)get_PDB0_CLK_Frequency/69 (read)get_MSCM0_CLK_Frequency/68 (read)get_MPU0_CLK_Frequency/67 (read)get_LPUART2_CLK_Frequency/66 (read)get_LPUART1_CLK_Frequency/65 (read)get_LPUART0_CLK_Frequency/64 (read)get_LPTMR0_CLK_Frequency/63 (read)get_TRACE_CLK_Frequency/77 (read)get_LPSPI1_CLK_Frequency/61 (read)get_LPSPI0_CLK_Frequency/60 (read)get_LPIT0_CLK_Frequency/59 (read)get_LPI2C0_CLK_Frequency/58 (read)get_FTFC_CLK_Frequency/57 (read)get_FlexIO_CLK_Frequency/56 (read)get_FTM1_CLK_Frequency/53 (read)get_FTM0_CLK_Frequency/52 (read)get_FLEXCAN2_CLK_Frequency/51 (read)get_FLEXCAN1_CLK_Frequency/50 (read)get_FTM3_CLK_Frequency/55 (read)get_FTM2_CLK_Frequency/54 (read)get_FLEXCAN0_CLK_Frequency/49 (read)get_EWM0_CLK_Frequency/48 (read)get_ERM0_CLK_Frequency/47 (read)get_EIM0_CLK_Frequency/46 (read)get_DMAMUX0_CLK_Frequency/45 (read)get_DMA0_CLK_Frequency/44 (read)get_CRC0_CLK_Frequency/43 (read)get_CMP0_CLK_Frequency/42 (read)get_ADC1_CLK_Frequency/40 (read)get_ADC0_CLK_Frequency/39 (read)get_LPO_1K_CLK_Frequency/23 (read)get_LPO_32K_CLK_Frequency/22 (read)get_RTC0_CLK_Frequency/76 (read)
  Availability: available
  Varpool flags: read-only const-value-known
enableClock/0 (enableClock) @0685cf30
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: enableGate/1 (alias)get_SOSC_CLK_Frequency/11 (read)get_SIRC_CLK_Frequency/12 (read)get_FIRC_CLK_Frequency/10 (read)get_SPLL_CLK_Frequency/13 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function get_Zero_Frequency (get_Zero_Frequency, funcdef_no=0, decl_uid=6061, cgraph_uid=1, symbol_order=8)

Modification phase of node get_Zero_Frequency/8
get_Zero_Frequency ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function get_LPO_128K_CLK_Frequency (get_LPO_128K_CLK_Frequency, funcdef_no=1, decl_uid=6063, cgraph_uid=2, symbol_order=9)

Modification phase of node get_LPO_128K_CLK_Frequency/9
get_LPO_128K_CLK_Frequency ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return 128000;

}



;; Function get_FIRC_CLK_Frequency (get_FIRC_CLK_Frequency, funcdef_no=2, decl_uid=6065, cgraph_uid=3, symbol_order=10)

Modification phase of node get_FIRC_CLK_Frequency/10
get_FIRC_CLK_Frequency ()
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SCG_Type *)1074151424B].FIRCCSR;
  _2 = _1 & 1;
  _3 = enableClock[_2];
  _5 = _3 & 48000000;
  return _5;

}



;; Function get_SOSC_CLK_Frequency (get_SOSC_CLK_Frequency, funcdef_no=3, decl_uid=6067, cgraph_uid=4, symbol_order=11)

Modification phase of node get_SOSC_CLK_Frequency/11
get_SOSC_CLK_Frequency ()
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int sosc.11_4;
  uint32 _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SCG_Type *)1074151424B].SOSCCSR;
  _2 = _1 & 1;
  _3 = enableClock[_2];
  sosc.11_4 = sosc;
  _6 = _3 & sosc.11_4;
  return _6;

}



;; Function get_SIRC_CLK_Frequency (get_SIRC_CLK_Frequency, funcdef_no=4, decl_uid=6069, cgraph_uid=5, symbol_order=12)

Modification phase of node get_SIRC_CLK_Frequency/12
get_SIRC_CLK_Frequency ()
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SCG_Type *)1074151424B].SIRCCSR;
  _2 = _1 & 1;
  _3 = enableClock[_2];
  _5 = _3 & 8000000;
  return _5;

}



;; Function get_SIRCDIV1_CLK_Frequency (get_SIRCDIV1_CLK_Frequency, funcdef_no=6, decl_uid=6073, cgraph_uid=7, symbol_order=14)

Modification phase of node get_SIRCDIV1_CLK_Frequency/14
get_SIRCDIV1_CLK_Frequency ()
{
  uint32 divValue;
  long unsigned int _1;
  long unsigned int _2;
  unsigned char _3;
  long unsigned int _4;
  uint32 iftmp.7_5;
  uint32 iftmp.7_10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SCG_Type *)1074151424B].SIRCDIV;
  _2 = _1 & 7;
  _3 = dividerMappingValue[_2];
  divValue_8 = (uint32) _3;
  # DEBUG divValue => divValue_8
  # DEBUG BEGIN_STMT
  if (divValue_8 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  _4 = get_SIRC_CLK_Frequency ();
  iftmp.7_10 = _4 / divValue_8;

  <bb 4> [local count: 1073741824]:
  # iftmp.7_5 = PHI <iftmp.7_10(3), 0(2)>
  return iftmp.7_5;

}



;; Function get_SIRCDIV2_CLK_Frequency (get_SIRCDIV2_CLK_Frequency, funcdef_no=7, decl_uid=6075, cgraph_uid=8, symbol_order=15)

Modification phase of node get_SIRCDIV2_CLK_Frequency/15
get_SIRCDIV2_CLK_Frequency ()
{
  uint32 divValue;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  unsigned char _4;
  long unsigned int _5;
  uint32 iftmp.6_6;
  uint32 iftmp.6_11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SCG_Type *)1074151424B].SIRCDIV;
  _2 = _1 >> 8;
  _3 = _2 & 7;
  _4 = dividerMappingValue[_3];
  divValue_9 = (uint32) _4;
  # DEBUG divValue => divValue_9
  # DEBUG BEGIN_STMT
  if (divValue_9 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  _5 = get_SIRC_CLK_Frequency ();
  iftmp.6_11 = _5 / divValue_9;

  <bb 4> [local count: 1073741824]:
  # iftmp.6_6 = PHI <iftmp.6_11(3), 0(2)>
  return iftmp.6_6;

}



;; Function get_FIRCDIV1_CLK_Frequency (get_FIRCDIV1_CLK_Frequency, funcdef_no=8, decl_uid=6077, cgraph_uid=9, symbol_order=16)

Modification phase of node get_FIRCDIV1_CLK_Frequency/16
get_FIRCDIV1_CLK_Frequency ()
{
  uint32 divValue;
  long unsigned int _1;
  long unsigned int _2;
  unsigned char _3;
  long unsigned int _4;
  uint32 iftmp.5_5;
  uint32 iftmp.5_10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SCG_Type *)1074151424B].FIRCDIV;
  _2 = _1 & 7;
  _3 = dividerMappingValue[_2];
  divValue_8 = (uint32) _3;
  # DEBUG divValue => divValue_8
  # DEBUG BEGIN_STMT
  if (divValue_8 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  _4 = get_FIRC_CLK_Frequency ();
  iftmp.5_10 = _4 / divValue_8;

  <bb 4> [local count: 1073741824]:
  # iftmp.5_5 = PHI <iftmp.5_10(3), 0(2)>
  return iftmp.5_5;

}



;; Function get_FIRCDIV2_CLK_Frequency (get_FIRCDIV2_CLK_Frequency, funcdef_no=9, decl_uid=6079, cgraph_uid=10, symbol_order=17)

Modification phase of node get_FIRCDIV2_CLK_Frequency/17
get_FIRCDIV2_CLK_Frequency ()
{
  uint32 divValue;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  unsigned char _4;
  long unsigned int _5;
  uint32 iftmp.4_6;
  uint32 iftmp.4_11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SCG_Type *)1074151424B].FIRCDIV;
  _2 = _1 >> 8;
  _3 = _2 & 7;
  _4 = dividerMappingValue[_3];
  divValue_9 = (uint32) _4;
  # DEBUG divValue => divValue_9
  # DEBUG BEGIN_STMT
  if (divValue_9 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  _5 = get_FIRC_CLK_Frequency ();
  iftmp.4_11 = _5 / divValue_9;

  <bb 4> [local count: 1073741824]:
  # iftmp.4_6 = PHI <iftmp.4_11(3), 0(2)>
  return iftmp.4_6;

}



;; Function get_SOSCDIV1_CLK_Frequency (get_SOSCDIV1_CLK_Frequency, funcdef_no=10, decl_uid=6081, cgraph_uid=11, symbol_order=18)

Modification phase of node get_SOSCDIV1_CLK_Frequency/18
get_SOSCDIV1_CLK_Frequency ()
{
  uint32 divValue;
  long unsigned int _1;
  long unsigned int _2;
  unsigned char _3;
  long unsigned int _4;
  uint32 iftmp.3_5;
  uint32 iftmp.3_10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SCG_Type *)1074151424B].SOSCDIV;
  _2 = _1 & 7;
  _3 = dividerMappingValue[_2];
  divValue_8 = (uint32) _3;
  # DEBUG divValue => divValue_8
  # DEBUG BEGIN_STMT
  if (divValue_8 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  _4 = get_SOSC_CLK_Frequency ();
  iftmp.3_10 = _4 / divValue_8;

  <bb 4> [local count: 1073741824]:
  # iftmp.3_5 = PHI <iftmp.3_10(3), 0(2)>
  return iftmp.3_5;

}



;; Function get_SOSCDIV2_CLK_Frequency (get_SOSCDIV2_CLK_Frequency, funcdef_no=11, decl_uid=6083, cgraph_uid=12, symbol_order=19)

Modification phase of node get_SOSCDIV2_CLK_Frequency/19
get_SOSCDIV2_CLK_Frequency ()
{
  uint32 divValue;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  unsigned char _4;
  long unsigned int _5;
  uint32 iftmp.2_6;
  uint32 iftmp.2_11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SCG_Type *)1074151424B].SOSCDIV;
  _2 = _1 >> 8;
  _3 = _2 & 7;
  _4 = dividerMappingValue[_3];
  divValue_9 = (uint32) _4;
  # DEBUG divValue => divValue_9
  # DEBUG BEGIN_STMT
  if (divValue_9 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  _5 = get_SOSC_CLK_Frequency ();
  iftmp.2_11 = _5 / divValue_9;

  <bb 4> [local count: 1073741824]:
  # iftmp.2_6 = PHI <iftmp.2_11(3), 0(2)>
  return iftmp.2_6;

}



;; Function get_LPO_32K_CLK_Frequency (get_LPO_32K_CLK_Frequency, funcdef_no=14, decl_uid=6089, cgraph_uid=15, symbol_order=22)

Modification phase of node get_LPO_32K_CLK_Frequency/22
get_LPO_32K_CLK_Frequency ()
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  uint32 _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY NULL
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SIM_Type *)1074036736B].LPOCLKS;
  _2 = _1 >> 1;
  _3 = _2 & 1;
  _4 = enableGate[_3];
  _6 = _4 & 32000;
  return _6;

}



;; Function get_LPO_1K_CLK_Frequency (get_LPO_1K_CLK_Frequency, funcdef_no=15, decl_uid=6091, cgraph_uid=16, symbol_order=23)

Modification phase of node get_LPO_1K_CLK_Frequency/23
get_LPO_1K_CLK_Frequency ()
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY NULL
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SIM_Type *)1074036736B].LPOCLKS;
  _2 = _1 & 1;
  _3 = enableGate[_2];
  _5 = _3 & 1000;
  return _5;

}



;; Function get_tclk0_ref_Frequency (get_tclk0_ref_Frequency, funcdef_no=16, decl_uid=6093, cgraph_uid=17, symbol_order=24)

Modification phase of node get_tclk0_ref_Frequency/24
get_tclk0_ref_Frequency ()
{
  uint32 _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _2 = extSignalFreqEntries[0].frequency;
  return _2;

}



;; Function get_tclk1_ref_Frequency (get_tclk1_ref_Frequency, funcdef_no=17, decl_uid=6095, cgraph_uid=18, symbol_order=25)

Modification phase of node get_tclk1_ref_Frequency/25
get_tclk1_ref_Frequency ()
{
  uint32 _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _2 = extSignalFreqEntries[1].frequency;
  return _2;

}



;; Function get_tclk2_ref_Frequency (get_tclk2_ref_Frequency, funcdef_no=18, decl_uid=6097, cgraph_uid=19, symbol_order=26)

Modification phase of node get_tclk2_ref_Frequency/26
get_tclk2_ref_Frequency ()
{
  uint32 _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _2 = extSignalFreqEntries[2].frequency;
  return _2;

}



;; Function get_rtc_clkin_Frequency (get_rtc_clkin_Frequency, funcdef_no=19, decl_uid=6099, cgraph_uid=20, symbol_order=27)

Modification phase of node get_rtc_clkin_Frequency/27
get_rtc_clkin_Frequency ()
{
  uint32 _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _2 = extSignalFreqEntries[3].frequency;
  return _2;

}



;; Function get_SCS_CLK_Frequency (get_SCS_CLK_Frequency, funcdef_no=20, decl_uid=6101, cgraph_uid=21, symbol_order=28)

Modification phase of node get_SCS_CLK_Frequency/28
get_SCS_CLK_Frequency ()
{
  static uint32 (*getFreqType) (void) freqTableSCS[7] = {get_Zero_Frequency, get_SOSC_CLK_Frequency, get_SIRC_CLK_Frequency, get_FIRC_CLK_Frequency, get_Zero_Frequency, get_Zero_Frequency, get_SPLL_CLK_Frequency};
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 (*<T64c>) (void) _4;
  uint32 _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SCG_Type *)1074151424B].CSR;
  _2 = _1 >> 24;
  _3 = _2 & 15;
  _4 = freqTableSCS[_3];
  _7 = _4 ();
  return _7;

}



;; Function get_CORE_CLK_Frequency (get_CORE_CLK_Frequency, funcdef_no=21, decl_uid=6103, cgraph_uid=22, symbol_order=29)

Modification phase of node get_CORE_CLK_Frequency/29
get_CORE_CLK_Frequency ()
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  uint32 _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = get_SCS_CLK_Frequency ();
  _2 ={v} MEM[(struct SCG_Type *)1074151424B].CSR;
  _3 = _2 >> 16;
  _4 = _3 & 15;
  _5 = _4 + 1;
  _8 = _1 / _5;
  return _8;

}



;; Function get_BUS_CLK_Frequency (get_BUS_CLK_Frequency, funcdef_no=22, decl_uid=6105, cgraph_uid=23, symbol_order=30)

Modification phase of node get_BUS_CLK_Frequency/30
get_BUS_CLK_Frequency ()
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  uint32 _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = get_CORE_CLK_Frequency ();
  _2 ={v} MEM[(struct SCG_Type *)1074151424B].CSR;
  _3 = _2 >> 4;
  _4 = _3 & 15;
  _5 = _4 + 1;
  _8 = _1 / _5;
  return _8;

}



;; Function get_SLOW_CLK_Frequency (get_SLOW_CLK_Frequency, funcdef_no=23, decl_uid=6107, cgraph_uid=24, symbol_order=31)

Modification phase of node get_SLOW_CLK_Frequency/31
get_SLOW_CLK_Frequency ()
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  uint32 _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = get_CORE_CLK_Frequency ();
  _2 ={v} MEM[(struct SCG_Type *)1074151424B].CSR;
  _3 = _2 & 15;
  _4 = _3 + 1;
  _7 = _1 / _4;
  return _7;

}



;; Function get_RTC_CLK_Frequency (get_RTC_CLK_Frequency, funcdef_no=24, decl_uid=6109, cgraph_uid=25, symbol_order=32)

Modification phase of node get_RTC_CLK_Frequency/32
get_RTC_CLK_Frequency ()
{
  static uint32 (*getFreqType) (void) freqTableRtc[4] = {get_SOSCDIV1_CLK_Frequency, get_LPO_32K_CLK_Frequency, get_rtc_clkin_Frequency, get_FIRCDIV1_CLK_Frequency};
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 (*<T64c>) (void) _4;
  uint32 _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SIM_Type *)1074036736B].LPOCLKS;
  _2 = _1 >> 4;
  _3 = _2 & 3;
  _4 = freqTableRtc[_3];
  _7 = _4 ();
  return _7;

}



;; Function get_LPO_CLK_Frequency (get_LPO_CLK_Frequency, funcdef_no=25, decl_uid=6111, cgraph_uid=26, symbol_order=33)

Modification phase of node get_LPO_CLK_Frequency/33
get_LPO_CLK_Frequency ()
{
  static uint32 (*getFreqType) (void) freqTableLpo[4] = {get_LPO_128K_CLK_Frequency, get_Zero_Frequency, get_LPO_32K_CLK_Frequency, get_LPO_1K_CLK_Frequency};
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 (*<T64c>) (void) _4;
  uint32 _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SIM_Type *)1074036736B].LPOCLKS;
  _2 = _1 >> 2;
  _3 = _2 & 3;
  _4 = freqTableLpo[_3];
  _7 = _4 ();
  return _7;

}



;; Function get_SCG_CLKOUT_CLK_Frequency (get_SCG_CLKOUT_CLK_Frequency, funcdef_no=26, decl_uid=6113, cgraph_uid=27, symbol_order=34)

Modification phase of node get_SCG_CLKOUT_CLK_Frequency/34
get_SCG_CLKOUT_CLK_Frequency ()
{
  static uint32 (*getFreqType) (void) freqTableScg[8] = {get_SLOW_CLK_Frequency, get_SOSC_CLK_Frequency, get_SIRC_CLK_Frequency, get_FIRC_CLK_Frequency, get_Zero_Frequency, get_Zero_Frequency, get_SPLL_CLK_Frequency, get_Zero_Frequency};
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 (*<T64c>) (void) _4;
  uint32 _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SCG_Type *)1074151424B].CLKOUTCNFG;
  _2 = _1 >> 24;
  _3 = _2 & 15;
  _4 = freqTableScg[_3];
  _7 = _4 ();
  return _7;

}



;; Function get_FTM0_EXT_CLK_Frequency (get_FTM0_EXT_CLK_Frequency, funcdef_no=27, decl_uid=6115, cgraph_uid=28, symbol_order=35)

Modification phase of node get_FTM0_EXT_CLK_Frequency/35
get_FTM0_EXT_CLK_Frequency ()
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 (*<T64c>) (void) _4;
  uint32 _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SIM_Type *)1074036736B].FTMOPT0;
  _2 = _1 >> 24;
  _3 = _2 & 3;
  _4 = freqTableSimFtm[_3];
  _7 = _4 ();
  return _7;

}



;; Function get_FTM1_EXT_CLK_Frequency (get_FTM1_EXT_CLK_Frequency, funcdef_no=28, decl_uid=6117, cgraph_uid=29, symbol_order=36)

Modification phase of node get_FTM1_EXT_CLK_Frequency/36
get_FTM1_EXT_CLK_Frequency ()
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 (*<T64c>) (void) _4;
  uint32 _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SIM_Type *)1074036736B].FTMOPT0;
  _2 = _1 >> 26;
  _3 = _2 & 3;
  _4 = freqTableSimFtm[_3];
  _7 = _4 ();
  return _7;

}



;; Function get_FTM2_EXT_CLK_Frequency (get_FTM2_EXT_CLK_Frequency, funcdef_no=29, decl_uid=6119, cgraph_uid=30, symbol_order=37)

Modification phase of node get_FTM2_EXT_CLK_Frequency/37
get_FTM2_EXT_CLK_Frequency ()
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 (*<T64c>) (void) _4;
  uint32 _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SIM_Type *)1074036736B].FTMOPT0;
  _2 = _1 >> 28;
  _3 = _2 & 3;
  _4 = freqTableSimFtm[_3];
  _7 = _4 ();
  return _7;

}



;; Function get_FTM3_EXT_CLK_Frequency (get_FTM3_EXT_CLK_Frequency, funcdef_no=30, decl_uid=6121, cgraph_uid=31, symbol_order=38)

Modification phase of node get_FTM3_EXT_CLK_Frequency/38
get_FTM3_EXT_CLK_Frequency ()
{
  long unsigned int _1;
  long unsigned int _2;
  uint32 (*<T64c>) (void) _3;
  uint32 _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SIM_Type *)1074036736B].FTMOPT0;
  _2 = _1 >> 30;
  _3 = freqTableSimFtm[_2];
  _6 = _3 ();
  return _6;

}



;; Function get_ADC0_CLK_Frequency (get_ADC0_CLK_Frequency, funcdef_no=31, decl_uid=6123, cgraph_uid=32, symbol_order=39)

Modification phase of node get_ADC0_CLK_Frequency/39
get_ADC0_CLK_Frequency ()
{
  uint32 frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 (*<T64c>) (void) _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[59];
  _2 = _1 >> 24;
  _3 = _2 & 7;
  _4 = freqTablePcs2[_3];
  frequency_10 = _4 ();
  # DEBUG frequency => frequency_10
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[59];
  _6 = _5 >> 30;
  _7 = _6 & 1;
  _11 = enableGate[_7];
  frequency_12 = frequency_10 & _11;
  # DEBUG frequency => frequency_12
  # DEBUG BEGIN_STMT
  return frequency_12;

}



;; Function get_ADC1_CLK_Frequency (get_ADC1_CLK_Frequency, funcdef_no=32, decl_uid=6125, cgraph_uid=33, symbol_order=40)

Modification phase of node get_ADC1_CLK_Frequency/40
get_ADC1_CLK_Frequency ()
{
  uint32 frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 (*<T64c>) (void) _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[39];
  _2 = _1 >> 24;
  _3 = _2 & 7;
  _4 = freqTablePcs2[_3];
  frequency_10 = _4 ();
  # DEBUG frequency => frequency_10
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[39];
  _6 = _5 >> 30;
  _7 = _6 & 1;
  _11 = enableGate[_7];
  frequency_12 = frequency_10 & _11;
  # DEBUG frequency => frequency_12
  # DEBUG BEGIN_STMT
  return frequency_12;

}



;; Function get_CLKOUT0_CLK_Frequency (get_CLKOUT0_CLK_Frequency, funcdef_no=33, decl_uid=6127, cgraph_uid=34, symbol_order=41)

Modification phase of node get_CLKOUT0_CLK_Frequency/41
get_CLKOUT0_CLK_Frequency ()
{
  uint32 frequency;
  const uint32 enableDivider[2];
  static uint32 (*getFreqType) (void) freqTableClkOut[16] = {get_SCG_CLKOUT_CLK_Frequency, get_Zero_Frequency, get_SOSCDIV2_CLK_Frequency, get_Zero_Frequency, get_SIRCDIV2_CLK_Frequency, get_Zero_Frequency, get_FIRCDIV2_CLK_Frequency, get_CORE_CLK_Frequency, get_SPLLDIV2_CLK_Frequency, get_BUS_CLK_Frequency, get_LPO_128K_CLK_Frequency, get_Zero_Frequency, get_LPO_CLK_Frequency, get_Zero_Frequency, get_RTC_CLK_Frequency, get_Zero_Frequency};
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 (*<T64c>) (void) _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _16;
  long unsigned int _18;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  enableDivider[0] = 0;
  enableDivider[1] = 4294967295;
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SIM_Type *)1074036736B].CHIPCTL;
  _2 = _1 >> 4;
  _3 = _2 & 15;
  _4 = freqTableClkOut[_3];
  frequency_15 = _4 ();
  # DEBUG frequency => frequency_15
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct SIM_Type *)1074036736B].CHIPCTL;
  _6 = _5 >> 11;
  _7 = _6 & 1;
  _16 = enableDivider[_7];
  frequency_17 = frequency_15 & _16;
  # DEBUG frequency => frequency_17
  # DEBUG BEGIN_STMT
  _8 ={v} MEM[(struct SIM_Type *)1074036736B].CHIPCTL;
  _9 = _8 >> 8;
  _10 = _9 & 7;
  _18 = _10 + 1;
  frequency_19 = frequency_17 / _18;
  # DEBUG frequency => frequency_19
  # DEBUG BEGIN_STMT
  enableDivider ={v} {CLOBBER};
  return frequency_19;

}



;; Function get_CMP0_CLK_Frequency (get_CMP0_CLK_Frequency, funcdef_no=34, decl_uid=6129, cgraph_uid=35, symbol_order=42)

Modification phase of node get_CMP0_CLK_Frequency/42
get_CMP0_CLK_Frequency ()
{
  uint32 frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  frequency_6 = get_BUS_CLK_Frequency ();
  # DEBUG frequency => frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[115];
  _2 = _1 >> 30;
  _3 = _2 & 1;
  _7 = enableGate[_3];
  frequency_8 = frequency_6 & _7;
  # DEBUG frequency => frequency_8
  # DEBUG BEGIN_STMT
  return frequency_8;

}



;; Function get_CRC0_CLK_Frequency (get_CRC0_CLK_Frequency, funcdef_no=35, decl_uid=6131, cgraph_uid=36, symbol_order=43)

Modification phase of node get_CRC0_CLK_Frequency/43
get_CRC0_CLK_Frequency ()
{
  uint32 frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  frequency_6 = get_BUS_CLK_Frequency ();
  # DEBUG frequency => frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[50];
  _2 = _1 >> 30;
  _3 = _2 & 1;
  _7 = enableGate[_3];
  frequency_8 = frequency_6 & _7;
  # DEBUG frequency => frequency_8
  # DEBUG BEGIN_STMT
  return frequency_8;

}



;; Function get_DMA0_CLK_Frequency (get_DMA0_CLK_Frequency, funcdef_no=36, decl_uid=6133, cgraph_uid=37, symbol_order=44)

Modification phase of node get_DMA0_CLK_Frequency/44
get_DMA0_CLK_Frequency ()
{
  uint32 frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  frequency_6 = get_CORE_CLK_Frequency ();
  # DEBUG frequency => frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SIM_Type *)1074036736B].PLATCGC;
  _2 = _1 >> 2;
  _3 = _2 & 1;
  _7 = enableGate[_3];
  frequency_8 = frequency_6 & _7;
  # DEBUG frequency => frequency_8
  # DEBUG BEGIN_STMT
  return frequency_8;

}



;; Function get_DMAMUX0_CLK_Frequency (get_DMAMUX0_CLK_Frequency, funcdef_no=37, decl_uid=6135, cgraph_uid=38, symbol_order=45)

Modification phase of node get_DMAMUX0_CLK_Frequency/45
get_DMAMUX0_CLK_Frequency ()
{
  uint32 frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  frequency_6 = get_BUS_CLK_Frequency ();
  # DEBUG frequency => frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[33];
  _2 = _1 >> 30;
  _3 = _2 & 1;
  _7 = enableGate[_3];
  frequency_8 = frequency_6 & _7;
  # DEBUG frequency => frequency_8
  # DEBUG BEGIN_STMT
  return frequency_8;

}



;; Function get_EIM0_CLK_Frequency (get_EIM0_CLK_Frequency, funcdef_no=38, decl_uid=6137, cgraph_uid=39, symbol_order=46)

Modification phase of node get_EIM0_CLK_Frequency/46
get_EIM0_CLK_Frequency ()
{
  uint32 frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  frequency_6 = get_CORE_CLK_Frequency ();
  # DEBUG frequency => frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SIM_Type *)1074036736B].PLATCGC;
  _2 = _1 >> 4;
  _3 = _2 & 1;
  _7 = enableGate[_3];
  frequency_8 = frequency_6 & _7;
  # DEBUG frequency => frequency_8
  # DEBUG BEGIN_STMT
  return frequency_8;

}



;; Function get_ERM0_CLK_Frequency (get_ERM0_CLK_Frequency, funcdef_no=39, decl_uid=6139, cgraph_uid=40, symbol_order=47)

Modification phase of node get_ERM0_CLK_Frequency/47
get_ERM0_CLK_Frequency ()
{
  uint32 frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  frequency_6 = get_CORE_CLK_Frequency ();
  # DEBUG frequency => frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SIM_Type *)1074036736B].PLATCGC;
  _2 = _1 >> 3;
  _3 = _2 & 1;
  _7 = enableGate[_3];
  frequency_8 = frequency_6 & _7;
  # DEBUG frequency => frequency_8
  # DEBUG BEGIN_STMT
  return frequency_8;

}



;; Function get_EWM0_CLK_Frequency (get_EWM0_CLK_Frequency, funcdef_no=40, decl_uid=6141, cgraph_uid=41, symbol_order=48)

Modification phase of node get_EWM0_CLK_Frequency/48
get_EWM0_CLK_Frequency ()
{
  uint32 frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  frequency_6 = get_BUS_CLK_Frequency ();
  # DEBUG frequency => frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[97];
  _2 = _1 >> 30;
  _3 = _2 & 1;
  _7 = enableGate[_3];
  frequency_8 = frequency_6 & _7;
  # DEBUG frequency => frequency_8
  # DEBUG BEGIN_STMT
  return frequency_8;

}



;; Function get_FLEXCAN0_CLK_Frequency (get_FLEXCAN0_CLK_Frequency, funcdef_no=41, decl_uid=6143, cgraph_uid=42, symbol_order=49)

Modification phase of node get_FLEXCAN0_CLK_Frequency/49
get_FLEXCAN0_CLK_Frequency ()
{
  uint32 frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  frequency_6 = get_CORE_CLK_Frequency ();
  # DEBUG frequency => frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[36];
  _2 = _1 >> 30;
  _3 = _2 & 1;
  _7 = enableGate[_3];
  frequency_8 = frequency_6 & _7;
  # DEBUG frequency => frequency_8
  # DEBUG BEGIN_STMT
  return frequency_8;

}



;; Function get_FLEXCAN1_CLK_Frequency (get_FLEXCAN1_CLK_Frequency, funcdef_no=42, decl_uid=6145, cgraph_uid=43, symbol_order=50)

Modification phase of node get_FLEXCAN1_CLK_Frequency/50
get_FLEXCAN1_CLK_Frequency ()
{
  uint32 frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  frequency_6 = get_CORE_CLK_Frequency ();
  # DEBUG frequency => frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[37];
  _2 = _1 >> 30;
  _3 = _2 & 1;
  _7 = enableGate[_3];
  frequency_8 = frequency_6 & _7;
  # DEBUG frequency => frequency_8
  # DEBUG BEGIN_STMT
  return frequency_8;

}



;; Function get_FLEXCAN2_CLK_Frequency (get_FLEXCAN2_CLK_Frequency, funcdef_no=43, decl_uid=6147, cgraph_uid=44, symbol_order=51)

Modification phase of node get_FLEXCAN2_CLK_Frequency/51
get_FLEXCAN2_CLK_Frequency ()
{
  uint32 frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  frequency_6 = get_CORE_CLK_Frequency ();
  # DEBUG frequency => frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[43];
  _2 = _1 >> 30;
  _3 = _2 & 1;
  _7 = enableGate[_3];
  frequency_8 = frequency_6 & _7;
  # DEBUG frequency => frequency_8
  # DEBUG BEGIN_STMT
  return frequency_8;

}



;; Function get_FTM0_CLK_Frequency (get_FTM0_CLK_Frequency, funcdef_no=44, decl_uid=6149, cgraph_uid=45, symbol_order=52)

Modification phase of node get_FTM0_CLK_Frequency/52
get_FTM0_CLK_Frequency ()
{
  uint32 frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  uint32 (*<T64c>) (void) _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _18;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[56];
  _2 = _1 >> 24;
  _3 = _2 & 7;
  if (_3 != 0)
    goto <bb 3>; [67.00%]
  else
    goto <bb 4>; [33.00%]

  <bb 3> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  _4 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[56];
  _5 = _4 >> 24;
  _6 = _5 & 7;
  _7 = freqTablePcs1[_6];
  frequency_17 = _7 ();
  # DEBUG frequency => frequency_17
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  frequency_15 = get_FTM0_EXT_CLK_Frequency ();
  # DEBUG frequency => frequency_15

  <bb 5> [local count: 1073741824]:
  # frequency_11 = PHI <frequency_17(3), frequency_15(4)>
  # DEBUG frequency => frequency_11
  # DEBUG BEGIN_STMT
  _8 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[56];
  _9 = _8 >> 30;
  _10 = _9 & 1;
  _18 = enableGate[_10];
  frequency_19 = frequency_11 & _18;
  # DEBUG frequency => frequency_19
  # DEBUG BEGIN_STMT
  return frequency_19;

}



;; Function get_FTM1_CLK_Frequency (get_FTM1_CLK_Frequency, funcdef_no=45, decl_uid=6151, cgraph_uid=46, symbol_order=53)

Modification phase of node get_FTM1_CLK_Frequency/53
get_FTM1_CLK_Frequency ()
{
  uint32 frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  uint32 (*<T64c>) (void) _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _18;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[57];
  _2 = _1 >> 24;
  _3 = _2 & 7;
  if (_3 != 0)
    goto <bb 3>; [67.00%]
  else
    goto <bb 4>; [33.00%]

  <bb 3> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  _4 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[57];
  _5 = _4 >> 24;
  _6 = _5 & 7;
  _7 = freqTablePcs1[_6];
  frequency_17 = _7 ();
  # DEBUG frequency => frequency_17
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  frequency_15 = get_FTM1_EXT_CLK_Frequency ();
  # DEBUG frequency => frequency_15

  <bb 5> [local count: 1073741824]:
  # frequency_11 = PHI <frequency_17(3), frequency_15(4)>
  # DEBUG frequency => frequency_11
  # DEBUG BEGIN_STMT
  _8 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[57];
  _9 = _8 >> 30;
  _10 = _9 & 1;
  _18 = enableGate[_10];
  frequency_19 = frequency_11 & _18;
  # DEBUG frequency => frequency_19
  # DEBUG BEGIN_STMT
  return frequency_19;

}



;; Function get_FTM2_CLK_Frequency (get_FTM2_CLK_Frequency, funcdef_no=46, decl_uid=6153, cgraph_uid=47, symbol_order=54)

Modification phase of node get_FTM2_CLK_Frequency/54
get_FTM2_CLK_Frequency ()
{
  uint32 frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  uint32 (*<T64c>) (void) _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _18;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[58];
  _2 = _1 >> 24;
  _3 = _2 & 7;
  if (_3 != 0)
    goto <bb 3>; [67.00%]
  else
    goto <bb 4>; [33.00%]

  <bb 3> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  _4 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[58];
  _5 = _4 >> 24;
  _6 = _5 & 7;
  _7 = freqTablePcs1[_6];
  frequency_17 = _7 ();
  # DEBUG frequency => frequency_17
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  frequency_15 = get_FTM2_EXT_CLK_Frequency ();
  # DEBUG frequency => frequency_15

  <bb 5> [local count: 1073741824]:
  # frequency_11 = PHI <frequency_17(3), frequency_15(4)>
  # DEBUG frequency => frequency_11
  # DEBUG BEGIN_STMT
  _8 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[58];
  _9 = _8 >> 30;
  _10 = _9 & 1;
  _18 = enableGate[_10];
  frequency_19 = frequency_11 & _18;
  # DEBUG frequency => frequency_19
  # DEBUG BEGIN_STMT
  return frequency_19;

}



;; Function get_FTM3_CLK_Frequency (get_FTM3_CLK_Frequency, funcdef_no=47, decl_uid=6155, cgraph_uid=48, symbol_order=55)

Modification phase of node get_FTM3_CLK_Frequency/55
get_FTM3_CLK_Frequency ()
{
  uint32 frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  uint32 (*<T64c>) (void) _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _18;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[38];
  _2 = _1 >> 24;
  _3 = _2 & 7;
  if (_3 != 0)
    goto <bb 3>; [67.00%]
  else
    goto <bb 4>; [33.00%]

  <bb 3> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  _4 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[38];
  _5 = _4 >> 24;
  _6 = _5 & 7;
  _7 = freqTablePcs1[_6];
  frequency_17 = _7 ();
  # DEBUG frequency => frequency_17
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  frequency_15 = get_FTM3_EXT_CLK_Frequency ();
  # DEBUG frequency => frequency_15

  <bb 5> [local count: 1073741824]:
  # frequency_11 = PHI <frequency_17(3), frequency_15(4)>
  # DEBUG frequency => frequency_11
  # DEBUG BEGIN_STMT
  _8 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[38];
  _9 = _8 >> 30;
  _10 = _9 & 1;
  _18 = enableGate[_10];
  frequency_19 = frequency_11 & _18;
  # DEBUG frequency => frequency_19
  # DEBUG BEGIN_STMT
  return frequency_19;

}



;; Function get_FlexIO_CLK_Frequency (get_FlexIO_CLK_Frequency, funcdef_no=48, decl_uid=6157, cgraph_uid=49, symbol_order=56)

Modification phase of node get_FlexIO_CLK_Frequency/56
get_FlexIO_CLK_Frequency ()
{
  uint32 frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 (*<T64c>) (void) _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[90];
  _2 = _1 >> 24;
  _3 = _2 & 7;
  _4 = freqTablePcs2[_3];
  frequency_10 = _4 ();
  # DEBUG frequency => frequency_10
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[90];
  _6 = _5 >> 30;
  _7 = _6 & 1;
  _11 = enableGate[_7];
  frequency_12 = frequency_10 & _11;
  # DEBUG frequency => frequency_12
  # DEBUG BEGIN_STMT
  return frequency_12;

}



;; Function get_FTFC_CLK_Frequency (get_FTFC_CLK_Frequency, funcdef_no=49, decl_uid=6159, cgraph_uid=50, symbol_order=57)

Modification phase of node get_FTFC_CLK_Frequency/57
get_FTFC_CLK_Frequency ()
{
  uint32 frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  frequency_6 = get_SLOW_CLK_Frequency ();
  # DEBUG frequency => frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[32];
  _2 = _1 >> 30;
  _3 = _2 & 1;
  _7 = enableGate[_3];
  frequency_8 = frequency_6 & _7;
  # DEBUG frequency => frequency_8
  # DEBUG BEGIN_STMT
  return frequency_8;

}



;; Function get_LPI2C0_CLK_Frequency (get_LPI2C0_CLK_Frequency, funcdef_no=50, decl_uid=6161, cgraph_uid=51, symbol_order=58)

Modification phase of node get_LPI2C0_CLK_Frequency/58
get_LPI2C0_CLK_Frequency ()
{
  uint32 frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 (*<T64c>) (void) _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[102];
  _2 = _1 >> 24;
  _3 = _2 & 7;
  _4 = freqTablePcs2[_3];
  frequency_10 = _4 ();
  # DEBUG frequency => frequency_10
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[102];
  _6 = _5 >> 30;
  _7 = _6 & 1;
  _11 = enableGate[_7];
  frequency_12 = frequency_10 & _11;
  # DEBUG frequency => frequency_12
  # DEBUG BEGIN_STMT
  return frequency_12;

}



;; Function get_LPIT0_CLK_Frequency (get_LPIT0_CLK_Frequency, funcdef_no=51, decl_uid=6163, cgraph_uid=52, symbol_order=59)

Modification phase of node get_LPIT0_CLK_Frequency/59
get_LPIT0_CLK_Frequency ()
{
  uint32 frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 (*<T64c>) (void) _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[55];
  _2 = _1 >> 24;
  _3 = _2 & 7;
  _4 = freqTablePcs2[_3];
  frequency_10 = _4 ();
  # DEBUG frequency => frequency_10
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[55];
  _6 = _5 >> 30;
  _7 = _6 & 1;
  _11 = enableGate[_7];
  frequency_12 = frequency_10 & _11;
  # DEBUG frequency => frequency_12
  # DEBUG BEGIN_STMT
  return frequency_12;

}



;; Function get_LPSPI0_CLK_Frequency (get_LPSPI0_CLK_Frequency, funcdef_no=52, decl_uid=6165, cgraph_uid=53, symbol_order=60)

Modification phase of node get_LPSPI0_CLK_Frequency/60
get_LPSPI0_CLK_Frequency ()
{
  uint32 frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 (*<T64c>) (void) _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[44];
  _2 = _1 >> 24;
  _3 = _2 & 7;
  _4 = freqTablePcs2[_3];
  frequency_10 = _4 ();
  # DEBUG frequency => frequency_10
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[44];
  _6 = _5 >> 30;
  _7 = _6 & 1;
  _11 = enableGate[_7];
  frequency_12 = frequency_10 & _11;
  # DEBUG frequency => frequency_12
  # DEBUG BEGIN_STMT
  return frequency_12;

}



;; Function get_LPSPI1_CLK_Frequency (get_LPSPI1_CLK_Frequency, funcdef_no=53, decl_uid=6167, cgraph_uid=54, symbol_order=61)

Modification phase of node get_LPSPI1_CLK_Frequency/61
get_LPSPI1_CLK_Frequency ()
{
  uint32 frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 (*<T64c>) (void) _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[45];
  _2 = _1 >> 24;
  _3 = _2 & 7;
  _4 = freqTablePcs2[_3];
  frequency_10 = _4 ();
  # DEBUG frequency => frequency_10
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[45];
  _6 = _5 >> 30;
  _7 = _6 & 1;
  _11 = enableGate[_7];
  frequency_12 = frequency_10 & _11;
  # DEBUG frequency => frequency_12
  # DEBUG BEGIN_STMT
  return frequency_12;

}



;; Function get_LPSPI2_CLK_Frequency (get_LPSPI2_CLK_Frequency, funcdef_no=75, decl_uid=6169, cgraph_uid=55, symbol_order=62)

Modification phase of node get_LPSPI2_CLK_Frequency/62
get_LPSPI2_CLK_Frequency ()
{
  uint32 retval.86;

  <bb 2> [local count: 1073741824]:
  retval.86_3 = get_LPSPI1_CLK_Frequency (); [tail call]
  return retval.86_3;

}



;; Function get_LPTMR0_CLK_Frequency (get_LPTMR0_CLK_Frequency, funcdef_no=55, decl_uid=6171, cgraph_uid=56, symbol_order=63)

Modification phase of node get_LPTMR0_CLK_Frequency/63
get_LPTMR0_CLK_Frequency ()
{
  uint32 mulValue;
  uint32 divValue;
  uint32 frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 (*<T64c>) (void) _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  long unsigned int _12;
  long unsigned int _13;
  long unsigned int _19;
  uint32 _21;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[64];
  _2 = _1 >> 24;
  _3 = _2 & 7;
  _4 = freqTablePcs2[_3];
  frequency_16 = _4 ();
  # DEBUG frequency => frequency_16
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[64];
  _6 = _5 & 7;
  divValue_17 = _6 + 1;
  # DEBUG divValue => divValue_17
  # DEBUG BEGIN_STMT
  _7 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[64];
  _8 = _7 >> 3;
  _9 = _8 & 1;
  mulValue_18 = _9 + 1;
  # DEBUG mulValue => mulValue_18
  # DEBUG BEGIN_STMT
  _10 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[64];
  _11 = _10 >> 30;
  _12 = _11 & 1;
  _19 = enableGate[_12];
  frequency_20 = frequency_16 & _19;
  # DEBUG frequency => frequency_20
  # DEBUG BEGIN_STMT
  _13 = mulValue_18 * frequency_20;
  _21 = _13 / divValue_17;
  return _21;

}



;; Function get_LPUART0_CLK_Frequency (get_LPUART0_CLK_Frequency, funcdef_no=56, decl_uid=6173, cgraph_uid=57, symbol_order=64)

Modification phase of node get_LPUART0_CLK_Frequency/64
get_LPUART0_CLK_Frequency ()
{
  uint32 frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 (*<T64c>) (void) _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[106];
  _2 = _1 >> 24;
  _3 = _2 & 7;
  _4 = freqTablePcs2[_3];
  frequency_10 = _4 ();
  # DEBUG frequency => frequency_10
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[106];
  _6 = _5 >> 30;
  _7 = _6 & 1;
  _11 = enableGate[_7];
  frequency_12 = frequency_10 & _11;
  # DEBUG frequency => frequency_12
  # DEBUG BEGIN_STMT
  return frequency_12;

}



;; Function get_LPUART1_CLK_Frequency (get_LPUART1_CLK_Frequency, funcdef_no=57, decl_uid=6175, cgraph_uid=58, symbol_order=65)

Modification phase of node get_LPUART1_CLK_Frequency/65
get_LPUART1_CLK_Frequency ()
{
  uint32 frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 (*<T64c>) (void) _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[107];
  _2 = _1 >> 24;
  _3 = _2 & 7;
  _4 = freqTablePcs2[_3];
  frequency_10 = _4 ();
  # DEBUG frequency => frequency_10
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[107];
  _6 = _5 >> 30;
  _7 = _6 & 1;
  _11 = enableGate[_7];
  frequency_12 = frequency_10 & _11;
  # DEBUG frequency => frequency_12
  # DEBUG BEGIN_STMT
  return frequency_12;

}



;; Function get_LPUART2_CLK_Frequency (get_LPUART2_CLK_Frequency, funcdef_no=58, decl_uid=6177, cgraph_uid=59, symbol_order=66)

Modification phase of node get_LPUART2_CLK_Frequency/66
get_LPUART2_CLK_Frequency ()
{
  uint32 frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 (*<T64c>) (void) _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[108];
  _2 = _1 >> 24;
  _3 = _2 & 7;
  _4 = freqTablePcs2[_3];
  frequency_10 = _4 ();
  # DEBUG frequency => frequency_10
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[108];
  _6 = _5 >> 30;
  _7 = _6 & 1;
  _11 = enableGate[_7];
  frequency_12 = frequency_10 & _11;
  # DEBUG frequency => frequency_12
  # DEBUG BEGIN_STMT
  return frequency_12;

}



;; Function get_MPU0_CLK_Frequency (get_MPU0_CLK_Frequency, funcdef_no=59, decl_uid=6179, cgraph_uid=60, symbol_order=67)

Modification phase of node get_MPU0_CLK_Frequency/67
get_MPU0_CLK_Frequency ()
{
  uint32 frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  frequency_6 = get_CORE_CLK_Frequency ();
  # DEBUG frequency => frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SIM_Type *)1074036736B].PLATCGC;
  _2 = _1 >> 1;
  _3 = _2 & 1;
  _7 = enableGate[_3];
  frequency_8 = frequency_6 & _7;
  # DEBUG frequency => frequency_8
  # DEBUG BEGIN_STMT
  return frequency_8;

}



;; Function get_MSCM0_CLK_Frequency (get_MSCM0_CLK_Frequency, funcdef_no=60, decl_uid=6181, cgraph_uid=61, symbol_order=68)

Modification phase of node get_MSCM0_CLK_Frequency/68
get_MSCM0_CLK_Frequency ()
{
  uint32 frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  frequency_5 = get_CORE_CLK_Frequency ();
  # DEBUG frequency => frequency_5
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SIM_Type *)1074036736B].PLATCGC;
  _2 = _1 & 1;
  _6 = enableGate[_2];
  frequency_7 = frequency_5 & _6;
  # DEBUG frequency => frequency_7
  # DEBUG BEGIN_STMT
  return frequency_7;

}



;; Function get_PDB0_CLK_Frequency (get_PDB0_CLK_Frequency, funcdef_no=61, decl_uid=6183, cgraph_uid=62, symbol_order=69)

Modification phase of node get_PDB0_CLK_Frequency/69
get_PDB0_CLK_Frequency ()
{
  uint32 frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  frequency_6 = get_CORE_CLK_Frequency ();
  # DEBUG frequency => frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[54];
  _2 = _1 >> 30;
  _3 = _2 & 1;
  _7 = enableGate[_3];
  frequency_8 = frequency_6 & _7;
  # DEBUG frequency => frequency_8
  # DEBUG BEGIN_STMT
  return frequency_8;

}



;; Function get_PDB1_CLK_Frequency (get_PDB1_CLK_Frequency, funcdef_no=62, decl_uid=6185, cgraph_uid=63, symbol_order=70)

Modification phase of node get_PDB1_CLK_Frequency/70
get_PDB1_CLK_Frequency ()
{
  uint32 frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  frequency_6 = get_CORE_CLK_Frequency ();
  # DEBUG frequency => frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[49];
  _2 = _1 >> 30;
  _3 = _2 & 1;
  _7 = enableGate[_3];
  frequency_8 = frequency_6 & _7;
  # DEBUG frequency => frequency_8
  # DEBUG BEGIN_STMT
  return frequency_8;

}



;; Function get_PORTA_CLK_Frequency (get_PORTA_CLK_Frequency, funcdef_no=63, decl_uid=6187, cgraph_uid=64, symbol_order=71)

Modification phase of node get_PORTA_CLK_Frequency/71
get_PORTA_CLK_Frequency ()
{
  uint32 frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  frequency_6 = get_BUS_CLK_Frequency ();
  # DEBUG frequency => frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[73];
  _2 = _1 >> 30;
  _3 = _2 & 1;
  _7 = enableGate[_3];
  frequency_8 = frequency_6 & _7;
  # DEBUG frequency => frequency_8
  # DEBUG BEGIN_STMT
  return frequency_8;

}



;; Function get_PORTB_CLK_Frequency (get_PORTB_CLK_Frequency, funcdef_no=64, decl_uid=6189, cgraph_uid=65, symbol_order=72)

Modification phase of node get_PORTB_CLK_Frequency/72
get_PORTB_CLK_Frequency ()
{
  uint32 frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  frequency_6 = get_BUS_CLK_Frequency ();
  # DEBUG frequency => frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[74];
  _2 = _1 >> 30;
  _3 = _2 & 1;
  _7 = enableGate[_3];
  frequency_8 = frequency_6 & _7;
  # DEBUG frequency => frequency_8
  # DEBUG BEGIN_STMT
  return frequency_8;

}



;; Function get_PORTC_CLK_Frequency (get_PORTC_CLK_Frequency, funcdef_no=65, decl_uid=6191, cgraph_uid=66, symbol_order=73)

Modification phase of node get_PORTC_CLK_Frequency/73
get_PORTC_CLK_Frequency ()
{
  uint32 frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  frequency_6 = get_BUS_CLK_Frequency ();
  # DEBUG frequency => frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[75];
  _2 = _1 >> 30;
  _3 = _2 & 1;
  _7 = enableGate[_3];
  frequency_8 = frequency_6 & _7;
  # DEBUG frequency => frequency_8
  # DEBUG BEGIN_STMT
  return frequency_8;

}



;; Function get_PORTD_CLK_Frequency (get_PORTD_CLK_Frequency, funcdef_no=66, decl_uid=6193, cgraph_uid=67, symbol_order=74)

Modification phase of node get_PORTD_CLK_Frequency/74
get_PORTD_CLK_Frequency ()
{
  uint32 frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  frequency_6 = get_BUS_CLK_Frequency ();
  # DEBUG frequency => frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[76];
  _2 = _1 >> 30;
  _3 = _2 & 1;
  _7 = enableGate[_3];
  frequency_8 = frequency_6 & _7;
  # DEBUG frequency => frequency_8
  # DEBUG BEGIN_STMT
  return frequency_8;

}



;; Function get_PORTE_CLK_Frequency (get_PORTE_CLK_Frequency, funcdef_no=67, decl_uid=6195, cgraph_uid=68, symbol_order=75)

Modification phase of node get_PORTE_CLK_Frequency/75
get_PORTE_CLK_Frequency ()
{
  uint32 frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  frequency_6 = get_BUS_CLK_Frequency ();
  # DEBUG frequency => frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[77];
  _2 = _1 >> 30;
  _3 = _2 & 1;
  _7 = enableGate[_3];
  frequency_8 = frequency_6 & _7;
  # DEBUG frequency => frequency_8
  # DEBUG BEGIN_STMT
  return frequency_8;

}



;; Function get_RTC0_CLK_Frequency (get_RTC0_CLK_Frequency, funcdef_no=68, decl_uid=6197, cgraph_uid=69, symbol_order=76)

Modification phase of node get_RTC0_CLK_Frequency/76
get_RTC0_CLK_Frequency ()
{
  uint32 frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  frequency_6 = get_BUS_CLK_Frequency ();
  # DEBUG frequency => frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PCC_Type *)1074155520B].PCCn[61];
  _2 = _1 >> 30;
  _3 = _2 & 1;
  _7 = enableGate[_3];
  frequency_8 = frequency_6 & _7;
  # DEBUG frequency => frequency_8
  # DEBUG BEGIN_STMT
  return frequency_8;

}



;; Function get_TRACE_CLK_Frequency (get_TRACE_CLK_Frequency, funcdef_no=69, decl_uid=6199, cgraph_uid=70, symbol_order=77)

Modification phase of node get_TRACE_CLK_Frequency/77
get_TRACE_CLK_Frequency ()
{
  uint32 mulValue;
  uint32 divValue;
  uint32 frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _13;
  uint32 _17;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  frequency_12 = get_CORE_CLK_Frequency ();
  # DEBUG frequency => frequency_12
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SIM_Type *)1074036736B].CLKDIV4;
  _2 = _1 >> 28;
  _3 = _2 & 1;
  _13 = enableGate[_3];
  frequency_14 = frequency_12 & _13;
  # DEBUG frequency => frequency_14
  # DEBUG BEGIN_STMT
  _4 ={v} MEM[(struct SIM_Type *)1074036736B].CLKDIV4;
  _5 = _4 >> 1;
  _6 = _5 & 7;
  divValue_15 = _6 + 1;
  # DEBUG divValue => divValue_15
  # DEBUG BEGIN_STMT
  _7 ={v} MEM[(struct SIM_Type *)1074036736B].CLKDIV4;
  _8 = _7 & 1;
  mulValue_16 = _8 + 1;
  # DEBUG mulValue => mulValue_16
  # DEBUG BEGIN_STMT
  _9 = frequency_14 * mulValue_16;
  _17 = _9 / divValue_15;
  return _17;

}



;; Function get_SPLL_CLK_Frequency (get_SPLL_CLK_Frequency, funcdef_no=5, decl_uid=6071, cgraph_uid=6, symbol_order=13)

Modification phase of node get_SPLL_CLK_Frequency/13
get_SPLL_CLK_Frequency ()
{
  static uint32 spll_checksum = 1572864;
  static uint32 spll_Freq = 160000000;
  long unsigned int _1;
  long unsigned int spll_checksum.8_2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  uint32 iftmp.10_10;
  long unsigned int _15;
  uint32 iftmp.10_17;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SCG_Type *)1074151424B].SPLLCFG;
  spll_checksum.8_2 = spll_checksum;
  if (_1 != spll_checksum.8_2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(struct SCG_Type *)1074151424B].SPLLCFG;
  spll_checksum = _3;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 = PLL_VCO (1074151424B);
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct SCG_Type *)1074151424B].SPLLCSR;
  _6 = _5 & 1;
  _15 = enableClock[_6];
  _7 = _4 & _15;
  spll_Freq = _7;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _8 ={v} MEM[(struct SCG_Type *)1074151424B].SPLLCSR;
  _9 = _8 & 16777216;
  if (_9 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 536870913]:
  iftmp.10_17 = spll_Freq;

  <bb 6> [local count: 1073741824]:
  # iftmp.10_10 = PHI <iftmp.10_17(5), 0(4)>
  return iftmp.10_10;

}



;; Function get_SPLLDIV2_CLK_Frequency (get_SPLLDIV2_CLK_Frequency, funcdef_no=13, decl_uid=6087, cgraph_uid=14, symbol_order=21)

Modification phase of node get_SPLLDIV2_CLK_Frequency/21
get_SPLLDIV2_CLK_Frequency ()
{
  uint32 divValue;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  unsigned char _4;
  long unsigned int _5;
  uint32 iftmp.0_6;
  uint32 iftmp.0_11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SCG_Type *)1074151424B].SPLLDIV;
  _2 = _1 >> 8;
  _3 = _2 & 7;
  _4 = dividerMappingValue[_3];
  divValue_9 = (uint32) _4;
  # DEBUG divValue => divValue_9
  # DEBUG BEGIN_STMT
  if (divValue_9 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  _5 = get_SPLL_CLK_Frequency ();
  iftmp.0_11 = _5 / divValue_9;

  <bb 4> [local count: 1073741824]:
  # iftmp.0_6 = PHI <iftmp.0_11(3), 0(2)>
  return iftmp.0_6;

}



;; Function get_SPLLDIV1_CLK_Frequency (get_SPLLDIV1_CLK_Frequency, funcdef_no=12, decl_uid=6085, cgraph_uid=13, symbol_order=20)

Modification phase of node get_SPLLDIV1_CLK_Frequency/20
get_SPLLDIV1_CLK_Frequency ()
{
  uint32 divValue;
  long unsigned int _1;
  long unsigned int _2;
  unsigned char _3;
  long unsigned int _4;
  uint32 iftmp.1_5;
  uint32 iftmp.1_10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SCG_Type *)1074151424B].SPLLDIV;
  _2 = _1 & 7;
  _3 = dividerMappingValue[_2];
  divValue_8 = (uint32) _3;
  # DEBUG divValue => divValue_8
  # DEBUG BEGIN_STMT
  if (divValue_8 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  _4 = get_SPLL_CLK_Frequency ();
  iftmp.1_10 = _4 / divValue_8;

  <bb 4> [local count: 1073741824]:
  # iftmp.1_5 = PHI <iftmp.1_10(3), 0(2)>
  return iftmp.1_5;

}



;; Function SetExternalOscillatorFrequency (SetExternalOscillatorFrequency, funcdef_no=71, decl_uid=6041, cgraph_uid=72, symbol_order=79)

Modification phase of node SetExternalOscillatorFrequency/79
SetExternalOscillatorFrequency (Clock_Ip_NameType extOscName, uint32 frequency)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  sosc = frequency_2(D);
  return;

}



;; Function SetExternalSignalFrequency (SetExternalSignalFrequency, funcdef_no=72, decl_uid=6044, cgraph_uid=73, symbol_order=80)

Modification phase of node SetExternalSignalFrequency/80
SetExternalSignalFrequency (Clock_Ip_NameType signalName, uint32 frequency)
{
  uint32 i;
  <unnamed type> _1;

  <bb 2> [local count: 261993004]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 6>; [100.00%]

  <bb 3> [local count: 858993459]:
  # DEBUG BEGIN_STMT
  _1 = extSignalFreqEntries[i_2].name;
  if (_1 == signalName_6(D))
    goto <bb 4>; [5.50%]
  else
    goto <bb 5>; [94.50%]

  <bb 4> [local count: 47244640]:
  # i_4 = PHI <i_2(3)>
  # DEBUG BEGIN_STMT
  extSignalFreqEntries[i_4].frequency = frequency_8(D);
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 811748819]:
  # DEBUG BEGIN_STMT
  i_7 = i_2 + 1;
  # DEBUG i => i_7

  <bb 6> [local count: 1073741824]:
  # i_2 = PHI <0(2), i_7(5)>
  # DEBUG i => i_2
  # DEBUG BEGIN_STMT
  if (i_2 != 4)
    goto <bb 3>; [80.00%]
  else
    goto <bb 7>; [20.00%]

  <bb 7> [local count: 261993005]:
  return;

}



;; Function GetFreq (GetFreq, funcdef_no=73, decl_uid=6038, cgraph_uid=74, symbol_order=81)

Modification phase of node GetFreq/81
GetFreq (Clock_Ip_NameType clockName)
{
  static uint32 (*getFreqType) (void) freqTable[87] = {get_Zero_Frequency, get_LPO_128K_CLK_Frequency, get_SIRC_CLK_Frequency, get_Zero_Frequency, get_Zero_Frequency, get_FIRC_CLK_Frequency, get_Zero_Frequency, get_Zero_Frequency, get_SOSC_CLK_Frequency, get_SPLL_CLK_Frequency, get_SIRCDIV1_CLK_Frequency, get_SIRCDIV2_CLK_Frequency, get_FIRCDIV1_CLK_Frequency, get_FIRCDIV2_CLK_Frequency, get_SOSCDIV1_CLK_Frequency, get_SOSCDIV2_CLK_Frequency, get_SPLLDIV1_CLK_Frequency, get_SPLLDIV2_CLK_Frequency, get_LPO_32K_CLK_Frequency, get_LPO_1K_CLK_Frequency, get_tclk0_ref_Frequency, get_tclk1_ref_Frequency, get_tclk2_ref_Frequency, get_rtc_clkin_Frequency, get_SCS_CLK_Frequency, get_Zero_Frequency, get_Zero_Frequency, get_Zero_Frequency, get_CORE_CLK_Frequency, get_Zero_Frequency, get_Zero_Frequency, get_Zero_Frequency, get_BUS_CLK_Frequency, get_Zero_Frequency, get_Zero_Frequency, get_Zero_Frequency, get_SLOW_CLK_Frequency, get_Zero_Frequency, get_Zero_Frequency, get_Zero_Frequency, get_RTC_CLK_Frequency, get_LPO_CLK_Frequency, get_SCG_CLKOUT_CLK_Frequency, get_FTM0_EXT_CLK_Frequency, get_FTM1_EXT_CLK_Frequency, get_FTM2_EXT_CLK_Frequency, get_FTM3_EXT_CLK_Frequency, 0B, get_ADC0_CLK_Frequency, get_ADC1_CLK_Frequency, get_CLKOUT0_CLK_Frequency, get_CMP0_CLK_Frequency, get_CRC0_CLK_Frequency, get_DMA0_CLK_Frequency, get_DMAMUX0_CLK_Frequency, get_EIM0_CLK_Frequency, get_ERM0_CLK_Frequency, get_EWM0_CLK_Frequency, get_FLEXCAN0_CLK_Frequency, get_FLEXCAN1_CLK_Frequency, get_FLEXCAN2_CLK_Frequency, get_FlexIO_CLK_Frequency, get_FTFC_CLK_Frequency, get_FTM0_CLK_Frequency, get_FTM1_CLK_Frequency, get_FTM2_CLK_Frequency, get_FTM3_CLK_Frequency, get_LPI2C0_CLK_Frequency, get_LPIT0_CLK_Frequency, get_LPSPI0_CLK_Frequency, get_LPSPI1_CLK_Frequency, get_LPSPI2_CLK_Frequency, get_LPTMR0_CLK_Frequency, get_LPUART0_CLK_Frequency, get_LPUART1_CLK_Frequency, get_LPUART2_CLK_Frequency, get_MPU0_CLK_Frequency, get_MSCM0_CLK_Frequency, get_PDB0_CLK_Frequency, get_PDB1_CLK_Frequency, get_PORTA_CLK_Frequency, get_PORTB_CLK_Frequency, get_PORTC_CLK_Frequency, get_PORTD_CLK_Frequency, get_PORTE_CLK_Frequency, get_RTC0_CLK_Frequency, get_TRACE_CLK_Frequency};
  uint32 (*<T64c>) (void) _1;
  uint32 _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = freqTable[clockName_3(D)];
  _5 = _1 ();
  return _5;

}


