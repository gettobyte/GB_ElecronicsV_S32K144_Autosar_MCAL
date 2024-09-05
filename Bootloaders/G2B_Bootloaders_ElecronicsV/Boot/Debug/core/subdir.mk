################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
D:/openblt_v011800/Target/Source/asserts.c \
D:/openblt_v011800/Target/Source/backdoor.c \
D:/openblt_v011800/Target/Source/boot.c \
D:/openblt_v011800/Target/Source/com.c \
D:/openblt_v011800/Target/Source/cop.c \
D:/openblt_v011800/Target/Source/file.c \
D:/openblt_v011800/Target/Source/mb.c \
D:/openblt_v011800/Target/Source/net.c \
D:/openblt_v011800/Target/Source/xcp.c 

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
core/asserts.o: D:/openblt_v011800/Target/Source/asserts.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@core/asserts.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

core/backdoor.o: D:/openblt_v011800/Target/Source/backdoor.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@core/backdoor.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

core/boot.o: D:/openblt_v011800/Target/Source/boot.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@core/boot.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

core/com.o: D:/openblt_v011800/Target/Source/com.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@core/com.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

core/cop.o: D:/openblt_v011800/Target/Source/cop.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@core/cop.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

core/file.o: D:/openblt_v011800/Target/Source/file.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@core/file.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

core/mb.o: D:/openblt_v011800/Target/Source/mb.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@core/mb.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

core/net.o: D:/openblt_v011800/Target/Source/net.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@core/net.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

core/xcp.o: D:/openblt_v011800/Target/Source/xcp.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@core/xcp.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


