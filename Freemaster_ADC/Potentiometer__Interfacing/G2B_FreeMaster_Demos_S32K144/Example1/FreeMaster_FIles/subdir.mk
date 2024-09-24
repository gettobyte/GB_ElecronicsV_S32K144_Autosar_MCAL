################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../FreeMaster_FIles/freemaster_S32xx.c \
../FreeMaster_FIles/freemaster_appcmd.c \
../FreeMaster_FIles/freemaster_bdm.c \
../FreeMaster_FIles/freemaster_can.c \
../FreeMaster_FIles/freemaster_lin.c \
../FreeMaster_FIles/freemaster_pipes.c \
../FreeMaster_FIles/freemaster_protocol.c \
../FreeMaster_FIles/freemaster_rec.c \
../FreeMaster_FIles/freemaster_scope.c \
../FreeMaster_FIles/freemaster_serial.c \
../FreeMaster_FIles/freemaster_sfio.c \
../FreeMaster_FIles/freemaster_tsa.c 

OBJS += \
./FreeMaster_FIles/freemaster_S32xx.o \
./FreeMaster_FIles/freemaster_appcmd.o \
./FreeMaster_FIles/freemaster_bdm.o \
./FreeMaster_FIles/freemaster_can.o \
./FreeMaster_FIles/freemaster_lin.o \
./FreeMaster_FIles/freemaster_pipes.o \
./FreeMaster_FIles/freemaster_protocol.o \
./FreeMaster_FIles/freemaster_rec.o \
./FreeMaster_FIles/freemaster_scope.o \
./FreeMaster_FIles/freemaster_serial.o \
./FreeMaster_FIles/freemaster_sfio.o \
./FreeMaster_FIles/freemaster_tsa.o 

C_DEPS += \
./FreeMaster_FIles/freemaster_S32xx.d \
./FreeMaster_FIles/freemaster_appcmd.d \
./FreeMaster_FIles/freemaster_bdm.d \
./FreeMaster_FIles/freemaster_can.d \
./FreeMaster_FIles/freemaster_lin.d \
./FreeMaster_FIles/freemaster_pipes.d \
./FreeMaster_FIles/freemaster_protocol.d \
./FreeMaster_FIles/freemaster_rec.d \
./FreeMaster_FIles/freemaster_scope.d \
./FreeMaster_FIles/freemaster_serial.d \
./FreeMaster_FIles/freemaster_sfio.d \
./FreeMaster_FIles/freemaster_tsa.d 


# Each subdirectory must supply rules for building sources it contributes
FreeMaster_FIles/%.o: ../FreeMaster_FIles/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@FreeMaster_FIles/freemaster_S32xx.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


