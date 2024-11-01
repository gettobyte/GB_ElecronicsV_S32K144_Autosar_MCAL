################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../RTD/src/CDD_Mcl.c \
../RTD/src/CDD_Mcl_Ipw.c \
../RTD/src/Clock_Ip.c \
../RTD/src/Clock_Ip_Data.c \
../RTD/src/Clock_Ip_Divider.c \
../RTD/src/Clock_Ip_DividerTrigger.c \
../RTD/src/Clock_Ip_ExtOsc.c \
../RTD/src/Clock_Ip_FracDiv.c \
../RTD/src/Clock_Ip_Frequency.c \
../RTD/src/Clock_Ip_Gate.c \
../RTD/src/Clock_Ip_IntOsc.c \
../RTD/src/Clock_Ip_Irq.c \
../RTD/src/Clock_Ip_Monitor.c \
../RTD/src/Clock_Ip_Pll.c \
../RTD/src/Clock_Ip_ProgFreqSwitch.c \
../RTD/src/Clock_Ip_Selector.c \
../RTD/src/Clock_Ip_Specific.c \
../RTD/src/Det.c \
../RTD/src/Det_stub.c \
../RTD/src/Dma_Ip.c \
../RTD/src/Dma_Ip_Driver_State.c \
../RTD/src/Dma_Ip_Hw_Access.c \
../RTD/src/Dma_Ip_Irq.c \
../RTD/src/Dma_Ip_Multicore.c \
../RTD/src/Flexio_Mcl_Ip.c \
../RTD/src/Flexio_Mcl_Ip_HwAccess.c \
../RTD/src/Flexio_Mcl_Ip_Irq.c \
../RTD/src/Flexio_Pwm_Ip.c \
../RTD/src/Flexio_Pwm_Ip_Irq.c \
../RTD/src/Ftm_Mcl_Ip.c \
../RTD/src/Ftm_Pwm_Ip.c \
../RTD/src/Ftm_Pwm_Ip_Irq.c \
../RTD/src/Mcu.c \
../RTD/src/Mcu_Dem_Wrapper.c \
../RTD/src/Mcu_Ipw.c \
../RTD/src/Mcu_Ipw_Irq.c \
../RTD/src/OsIf_Interrupts.c \
../RTD/src/OsIf_Timer.c \
../RTD/src/OsIf_Timer_System.c \
../RTD/src/OsIf_Timer_System_Internal_Systick.c \
../RTD/src/Port.c \
../RTD/src/Port_Ci_Port_Ip.c \
../RTD/src/Port_Ipw.c \
../RTD/src/Power_Ip.c \
../RTD/src/Power_Ip_CortexM4.c \
../RTD/src/Power_Ip_PMC.c \
../RTD/src/Power_Ip_PMC_Irq.c \
../RTD/src/Power_Ip_Private.c \
../RTD/src/Power_Ip_RCM.c \
../RTD/src/Power_Ip_RCM_Irq.c \
../RTD/src/Power_Ip_SIM.c \
../RTD/src/Power_Ip_SMC.c \
../RTD/src/Pwm.c \
../RTD/src/Pwm_Ipw.c \
../RTD/src/Pwm_Ipw_Notif.c \
../RTD/src/Ram_Ip.c \
../RTD/src/SchM_Mcl.c \
../RTD/src/SchM_Mcu.c \
../RTD/src/SchM_Port.c \
../RTD/src/SchM_Pwm.c \
../RTD/src/Trgmux_Ip.c \
../RTD/src/Trgmux_Ip_HwAcc.c 

OBJS += \
./RTD/src/CDD_Mcl.o \
./RTD/src/CDD_Mcl_Ipw.o \
./RTD/src/Clock_Ip.o \
./RTD/src/Clock_Ip_Data.o \
./RTD/src/Clock_Ip_Divider.o \
./RTD/src/Clock_Ip_DividerTrigger.o \
./RTD/src/Clock_Ip_ExtOsc.o \
./RTD/src/Clock_Ip_FracDiv.o \
./RTD/src/Clock_Ip_Frequency.o \
./RTD/src/Clock_Ip_Gate.o \
./RTD/src/Clock_Ip_IntOsc.o \
./RTD/src/Clock_Ip_Irq.o \
./RTD/src/Clock_Ip_Monitor.o \
./RTD/src/Clock_Ip_Pll.o \
./RTD/src/Clock_Ip_ProgFreqSwitch.o \
./RTD/src/Clock_Ip_Selector.o \
./RTD/src/Clock_Ip_Specific.o \
./RTD/src/Det.o \
./RTD/src/Det_stub.o \
./RTD/src/Dma_Ip.o \
./RTD/src/Dma_Ip_Driver_State.o \
./RTD/src/Dma_Ip_Hw_Access.o \
./RTD/src/Dma_Ip_Irq.o \
./RTD/src/Dma_Ip_Multicore.o \
./RTD/src/Flexio_Mcl_Ip.o \
./RTD/src/Flexio_Mcl_Ip_HwAccess.o \
./RTD/src/Flexio_Mcl_Ip_Irq.o \
./RTD/src/Flexio_Pwm_Ip.o \
./RTD/src/Flexio_Pwm_Ip_Irq.o \
./RTD/src/Ftm_Mcl_Ip.o \
./RTD/src/Ftm_Pwm_Ip.o \
./RTD/src/Ftm_Pwm_Ip_Irq.o \
./RTD/src/Mcu.o \
./RTD/src/Mcu_Dem_Wrapper.o \
./RTD/src/Mcu_Ipw.o \
./RTD/src/Mcu_Ipw_Irq.o \
./RTD/src/OsIf_Interrupts.o \
./RTD/src/OsIf_Timer.o \
./RTD/src/OsIf_Timer_System.o \
./RTD/src/OsIf_Timer_System_Internal_Systick.o \
./RTD/src/Port.o \
./RTD/src/Port_Ci_Port_Ip.o \
./RTD/src/Port_Ipw.o \
./RTD/src/Power_Ip.o \
./RTD/src/Power_Ip_CortexM4.o \
./RTD/src/Power_Ip_PMC.o \
./RTD/src/Power_Ip_PMC_Irq.o \
./RTD/src/Power_Ip_Private.o \
./RTD/src/Power_Ip_RCM.o \
./RTD/src/Power_Ip_RCM_Irq.o \
./RTD/src/Power_Ip_SIM.o \
./RTD/src/Power_Ip_SMC.o \
./RTD/src/Pwm.o \
./RTD/src/Pwm_Ipw.o \
./RTD/src/Pwm_Ipw_Notif.o \
./RTD/src/Ram_Ip.o \
./RTD/src/SchM_Mcl.o \
./RTD/src/SchM_Mcu.o \
./RTD/src/SchM_Port.o \
./RTD/src/SchM_Pwm.o \
./RTD/src/Trgmux_Ip.o \
./RTD/src/Trgmux_Ip_HwAcc.o 

C_DEPS += \
./RTD/src/CDD_Mcl.d \
./RTD/src/CDD_Mcl_Ipw.d \
./RTD/src/Clock_Ip.d \
./RTD/src/Clock_Ip_Data.d \
./RTD/src/Clock_Ip_Divider.d \
./RTD/src/Clock_Ip_DividerTrigger.d \
./RTD/src/Clock_Ip_ExtOsc.d \
./RTD/src/Clock_Ip_FracDiv.d \
./RTD/src/Clock_Ip_Frequency.d \
./RTD/src/Clock_Ip_Gate.d \
./RTD/src/Clock_Ip_IntOsc.d \
./RTD/src/Clock_Ip_Irq.d \
./RTD/src/Clock_Ip_Monitor.d \
./RTD/src/Clock_Ip_Pll.d \
./RTD/src/Clock_Ip_ProgFreqSwitch.d \
./RTD/src/Clock_Ip_Selector.d \
./RTD/src/Clock_Ip_Specific.d \
./RTD/src/Det.d \
./RTD/src/Det_stub.d \
./RTD/src/Dma_Ip.d \
./RTD/src/Dma_Ip_Driver_State.d \
./RTD/src/Dma_Ip_Hw_Access.d \
./RTD/src/Dma_Ip_Irq.d \
./RTD/src/Dma_Ip_Multicore.d \
./RTD/src/Flexio_Mcl_Ip.d \
./RTD/src/Flexio_Mcl_Ip_HwAccess.d \
./RTD/src/Flexio_Mcl_Ip_Irq.d \
./RTD/src/Flexio_Pwm_Ip.d \
./RTD/src/Flexio_Pwm_Ip_Irq.d \
./RTD/src/Ftm_Mcl_Ip.d \
./RTD/src/Ftm_Pwm_Ip.d \
./RTD/src/Ftm_Pwm_Ip_Irq.d \
./RTD/src/Mcu.d \
./RTD/src/Mcu_Dem_Wrapper.d \
./RTD/src/Mcu_Ipw.d \
./RTD/src/Mcu_Ipw_Irq.d \
./RTD/src/OsIf_Interrupts.d \
./RTD/src/OsIf_Timer.d \
./RTD/src/OsIf_Timer_System.d \
./RTD/src/OsIf_Timer_System_Internal_Systick.d \
./RTD/src/Port.d \
./RTD/src/Port_Ci_Port_Ip.d \
./RTD/src/Port_Ipw.d \
./RTD/src/Power_Ip.d \
./RTD/src/Power_Ip_CortexM4.d \
./RTD/src/Power_Ip_PMC.d \
./RTD/src/Power_Ip_PMC_Irq.d \
./RTD/src/Power_Ip_Private.d \
./RTD/src/Power_Ip_RCM.d \
./RTD/src/Power_Ip_RCM_Irq.d \
./RTD/src/Power_Ip_SIM.d \
./RTD/src/Power_Ip_SMC.d \
./RTD/src/Pwm.d \
./RTD/src/Pwm_Ipw.d \
./RTD/src/Pwm_Ipw_Notif.d \
./RTD/src/Ram_Ip.d \
./RTD/src/SchM_Mcl.d \
./RTD/src/SchM_Mcu.d \
./RTD/src/SchM_Port.d \
./RTD/src/SchM_Pwm.d \
./RTD/src/Trgmux_Ip.d \
./RTD/src/Trgmux_Ip_HwAcc.d 


# Each subdirectory must supply rules for building sources it contributes
RTD/src/%.o: ../RTD/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@RTD/src/CDD_Mcl.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


