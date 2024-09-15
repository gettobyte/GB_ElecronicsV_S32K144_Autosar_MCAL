################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../generate/src/Clock_Ip_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Clock_Ip_Cfg.c \
../generate/src/Flexio_Uart_Ip_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Lpuart_Uart_Ip_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Mcu_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Mcu_Cfg.c \
../generate/src/OsIf_Cfg.c \
../generate/src/Platform_Cfg.c \
../generate/src/Platform_Ipw_Cfg.c \
../generate/src/Port_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Port_Cfg.c \
../generate/src/Port_Ci_Port_Ip_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Power_Ip_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Power_Ip_Cfg.c \
../generate/src/Ram_Ip_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Ram_Ip_Cfg.c \
../generate/src/Uart_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Uart_Ipw_BOARD_InitPeripherals_PBcfg.c 

OBJS += \
./generate/src/Clock_Ip_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Clock_Ip_Cfg.o \
./generate/src/Flexio_Uart_Ip_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Lpuart_Uart_Ip_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Mcu_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Mcu_Cfg.o \
./generate/src/OsIf_Cfg.o \
./generate/src/Platform_Cfg.o \
./generate/src/Platform_Ipw_Cfg.o \
./generate/src/Port_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Port_Cfg.o \
./generate/src/Port_Ci_Port_Ip_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Power_Ip_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Power_Ip_Cfg.o \
./generate/src/Ram_Ip_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Ram_Ip_Cfg.o \
./generate/src/Uart_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Uart_Ipw_BOARD_InitPeripherals_PBcfg.o 

C_DEPS += \
./generate/src/Clock_Ip_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Clock_Ip_Cfg.d \
./generate/src/Flexio_Uart_Ip_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Lpuart_Uart_Ip_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Mcu_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Mcu_Cfg.d \
./generate/src/OsIf_Cfg.d \
./generate/src/Platform_Cfg.d \
./generate/src/Platform_Ipw_Cfg.d \
./generate/src/Port_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Port_Cfg.d \
./generate/src/Port_Ci_Port_Ip_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Power_Ip_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Power_Ip_Cfg.d \
./generate/src/Ram_Ip_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Ram_Ip_Cfg.d \
./generate/src/Uart_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Uart_Ipw_BOARD_InitPeripherals_PBcfg.d 


# Each subdirectory must supply rules for building sources it contributes
generate/src/%.o: ../generate/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@generate/src/Clock_Ip_BOARD_InitPeripherals_PBcfg.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


