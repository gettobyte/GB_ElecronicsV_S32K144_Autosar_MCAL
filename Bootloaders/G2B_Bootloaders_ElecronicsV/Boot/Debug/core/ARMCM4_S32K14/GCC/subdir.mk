################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
D:/openblt_v011800/Target/Source/ARMCM4_S32K14/GCC/cpu_comp.c 

OBJS += \
./core/ARMCM4_S32K14/GCC/cpu_comp.o 

C_DEPS += \
./core/ARMCM4_S32K14/GCC/cpu_comp.d 


# Each subdirectory must supply rules for building sources it contributes
core/ARMCM4_S32K14/GCC/cpu_comp.o: D:/openblt_v011800/Target/Source/ARMCM4_S32K14/GCC/cpu_comp.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@core/ARMCM4_S32K14/GCC/cpu_comp.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


