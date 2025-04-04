################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../S_M_Driver/src/SG90_Servo.c 

OBJS += \
./S_M_Driver/src/SG90_Servo.o 

C_DEPS += \
./S_M_Driver/src/SG90_Servo.d 


# Each subdirectory must supply rules for building sources it contributes
S_M_Driver/src/%.o: ../S_M_Driver/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@S_M_Driver/src/SG90_Servo.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


