################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../core/asserts.c \
../core/backdoor.c \
../core/boot.c \
../core/com.c \
../core/cop.c \
../core/file.c \
../core/mb.c \
../core/net.c \
../core/xcp.c 

OBJS += \
./core/asserts.o \
./core/backdoor.o \
./core/boot.o \
./core/com.o \
./core/cop.o \
./core/file.o \
./core/mb.o \
./core/net.o \
./core/xcp.o 

C_DEPS += \
./core/asserts.d \
./core/backdoor.d \
./core/boot.d \
./core/com.d \
./core/cop.d \
./core/file.d \
./core/mb.d \
./core/net.d \
./core/xcp.d 


# Each subdirectory must supply rules for building sources it contributes
core/asserts.o: D:/GB_ElecronicsV_S32K144_Autosar_MCAL/Bootloaders/G2B_Bootloaders_ElecronicsV/Boot/core/asserts.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@core/asserts.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

core/backdoor.o: D:/GB_ElecronicsV_S32K144_Autosar_MCAL/Bootloaders/G2B_Bootloaders_ElecronicsV/Boot/core/backdoor.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@core/backdoor.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

core/boot.o: D:/GB_ElecronicsV_S32K144_Autosar_MCAL/Bootloaders/G2B_Bootloaders_ElecronicsV/Boot/core/boot.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@core/boot.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

core/com.o: D:/GB_ElecronicsV_S32K144_Autosar_MCAL/Bootloaders/G2B_Bootloaders_ElecronicsV/Boot/core/com.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@core/com.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

core/cop.o: D:/GB_ElecronicsV_S32K144_Autosar_MCAL/Bootloaders/G2B_Bootloaders_ElecronicsV/Boot/core/cop.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@core/cop.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

core/file.o: D:/GB_ElecronicsV_S32K144_Autosar_MCAL/Bootloaders/G2B_Bootloaders_ElecronicsV/Boot/core/file.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@core/file.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

core/mb.o: D:/GB_ElecronicsV_S32K144_Autosar_MCAL/Bootloaders/G2B_Bootloaders_ElecronicsV/Boot/core/mb.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@core/mb.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

core/net.o: D:/GB_ElecronicsV_S32K144_Autosar_MCAL/Bootloaders/G2B_Bootloaders_ElecronicsV/Boot/core/net.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@core/net.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

core/xcp.o: D:/GB_ElecronicsV_S32K144_Autosar_MCAL/Bootloaders/G2B_Bootloaders_ElecronicsV/Boot/core/xcp.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@core/xcp.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


