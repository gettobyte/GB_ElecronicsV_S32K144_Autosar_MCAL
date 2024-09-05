################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
D:/openblt_v011800/Target/Source/ARMCM4_S32K14/can.c \
D:/openblt_v011800/Target/Source/ARMCM4_S32K14/cpu.c \
D:/openblt_v011800/Target/Source/ARMCM4_S32K14/flash.c \
D:/openblt_v011800/Target/Source/ARMCM4_S32K14/mbrtu.c \
D:/openblt_v011800/Target/Source/ARMCM4_S32K14/nvm.c \
D:/openblt_v011800/Target/Source/ARMCM4_S32K14/rs232.c \
D:/openblt_v011800/Target/Source/ARMCM4_S32K14/timer.c 

OBJS += \
./core/ARMCM4_S32K14/can.o \
./core/ARMCM4_S32K14/cpu.o \
./core/ARMCM4_S32K14/flash.o \
./core/ARMCM4_S32K14/mbrtu.o \
./core/ARMCM4_S32K14/nvm.o \
./core/ARMCM4_S32K14/rs232.o \
./core/ARMCM4_S32K14/timer.o 

C_DEPS += \
./core/ARMCM4_S32K14/can.d \
./core/ARMCM4_S32K14/cpu.d \
./core/ARMCM4_S32K14/flash.d \
./core/ARMCM4_S32K14/mbrtu.d \
./core/ARMCM4_S32K14/nvm.d \
./core/ARMCM4_S32K14/rs232.d \
./core/ARMCM4_S32K14/timer.d 


# Each subdirectory must supply rules for building sources it contributes
core/ARMCM4_S32K14/can.o: D:/openblt_v011800/Target/Source/ARMCM4_S32K14/can.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@core/ARMCM4_S32K14/can.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

core/ARMCM4_S32K14/cpu.o: D:/openblt_v011800/Target/Source/ARMCM4_S32K14/cpu.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@core/ARMCM4_S32K14/cpu.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

core/ARMCM4_S32K14/flash.o: D:/openblt_v011800/Target/Source/ARMCM4_S32K14/flash.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@core/ARMCM4_S32K14/flash.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

core/ARMCM4_S32K14/mbrtu.o: D:/openblt_v011800/Target/Source/ARMCM4_S32K14/mbrtu.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@core/ARMCM4_S32K14/mbrtu.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

core/ARMCM4_S32K14/nvm.o: D:/openblt_v011800/Target/Source/ARMCM4_S32K14/nvm.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@core/ARMCM4_S32K14/nvm.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

core/ARMCM4_S32K14/rs232.o: D:/openblt_v011800/Target/Source/ARMCM4_S32K14/rs232.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@core/ARMCM4_S32K14/rs232.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

core/ARMCM4_S32K14/timer.o: D:/openblt_v011800/Target/Source/ARMCM4_S32K14/timer.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@core/ARMCM4_S32K14/timer.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


