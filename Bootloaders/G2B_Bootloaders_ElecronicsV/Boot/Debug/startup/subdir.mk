################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../startup/startup.c 

S_UPPER_SRCS += \
../startup/startup_S32K144.S 

OBJS += \
./startup/startup.o \
./startup/startup_S32K144.o 

C_DEPS += \
./startup/startup.d 


# Each subdirectory must supply rules for building sources it contributes
startup/%.o: ../startup/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@startup/startup.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

startup/%.o: ../startup/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS Assembler'
	arm-none-eabi-gcc "@startup/startup_S32K144.args" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


