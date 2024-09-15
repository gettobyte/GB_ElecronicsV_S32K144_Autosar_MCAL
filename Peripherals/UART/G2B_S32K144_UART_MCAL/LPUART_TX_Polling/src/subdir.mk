################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/TX_Polling.c 

OBJS += \
./src/TX_Polling.o 

C_DEPS += \
./src/TX_Polling.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/TX_Polling.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


