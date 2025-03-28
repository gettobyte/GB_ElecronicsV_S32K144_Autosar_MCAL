################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/NXP/S32DS.3.4/S32DS/software/FreeMASTER_Serial_Communication_Driver_V2_0/src_platforms/S32xx/freemaster_S32xx.c 

OBJS += \
./FreeMaster_S32K144/src_platforms/S32xx/freemaster_S32xx.o 

C_DEPS += \
./FreeMaster_S32K144/src_platforms/S32xx/freemaster_S32xx.d 


# Each subdirectory must supply rules for building sources it contributes
FreeMaster_S32K144/src_platforms/S32xx/freemaster_S32xx.o: C:/NXP/S32DS.3.4/S32DS/software/FreeMASTER_Serial_Communication_Driver_V2_0/src_platforms/S32xx/freemaster_S32xx.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@FreeMaster_S32K144/src_platforms/S32xx/freemaster_S32xx.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


