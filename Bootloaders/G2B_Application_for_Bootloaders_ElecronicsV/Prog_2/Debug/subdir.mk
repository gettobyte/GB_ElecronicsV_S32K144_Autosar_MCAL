################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
LD_SRCS += \
../S32K144_64_flash.ld 

C_SRCS += \
../boot.c \
../led.c \
../main.c \
../timer.c 

OBJS += \
./boot.o \
./led.o \
./main.o \
./timer.o 

C_DEPS += \
./boot.d \
./led.d \
./main.d \
./timer.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@boot.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


