################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../generate/IntCtrl_Ip/IntCtrl_Ip_Cfg.c 

OBJS += \
./generate/IntCtrl_Ip/IntCtrl_Ip_Cfg.o 

C_DEPS += \
./generate/IntCtrl_Ip/IntCtrl_Ip_Cfg.d 


# Each subdirectory must supply rules for building sources it contributes
generate/IntCtrl_Ip/%.o: ../generate/IntCtrl_Ip/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@generate/IntCtrl_Ip/IntCtrl_Ip_Cfg.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


