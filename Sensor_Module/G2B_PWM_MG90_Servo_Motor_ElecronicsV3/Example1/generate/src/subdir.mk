################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../generate/src/CDD_Mcl_BOARD_InitPeripherals_PBcfg.c \
../generate/src/CDD_Mcl_Cfg.c \
../generate/src/Clock_Ip_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Clock_Ip_Cfg.c \
../generate/src/Dma_Ip_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Dma_Ip_Cfg.c \
../generate/src/Flexio_Mcl_Ip_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Flexio_Pwm_Ip_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Ftm_Pwm_Ip_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Mcu_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Mcu_Cfg.c \
../generate/src/OsIf_Cfg.c \
../generate/src/Port_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Port_Cfg.c \
../generate/src/Port_Ci_Port_Ip_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Power_Ip_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Power_Ip_Cfg.c \
../generate/src/Pwm_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Ram_Ip_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Ram_Ip_Cfg.c \
../generate/src/Trgmux_Ip_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Trgmux_Ip_Cfg.c 

OBJS += \
./generate/src/CDD_Mcl_BOARD_InitPeripherals_PBcfg.o \
./generate/src/CDD_Mcl_Cfg.o \
./generate/src/Clock_Ip_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Clock_Ip_Cfg.o \
./generate/src/Dma_Ip_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Dma_Ip_Cfg.o \
./generate/src/Flexio_Mcl_Ip_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Flexio_Pwm_Ip_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Ftm_Pwm_Ip_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Mcu_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Mcu_Cfg.o \
./generate/src/OsIf_Cfg.o \
./generate/src/Port_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Port_Cfg.o \
./generate/src/Port_Ci_Port_Ip_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Power_Ip_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Power_Ip_Cfg.o \
./generate/src/Pwm_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Ram_Ip_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Ram_Ip_Cfg.o \
./generate/src/Trgmux_Ip_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Trgmux_Ip_Cfg.o 

C_DEPS += \
./generate/src/CDD_Mcl_BOARD_InitPeripherals_PBcfg.d \
./generate/src/CDD_Mcl_Cfg.d \
./generate/src/Clock_Ip_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Clock_Ip_Cfg.d \
./generate/src/Dma_Ip_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Dma_Ip_Cfg.d \
./generate/src/Flexio_Mcl_Ip_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Flexio_Pwm_Ip_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Ftm_Pwm_Ip_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Mcu_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Mcu_Cfg.d \
./generate/src/OsIf_Cfg.d \
./generate/src/Port_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Port_Cfg.d \
./generate/src/Port_Ci_Port_Ip_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Power_Ip_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Power_Ip_Cfg.d \
./generate/src/Pwm_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Ram_Ip_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Ram_Ip_Cfg.d \
./generate/src/Trgmux_Ip_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Trgmux_Ip_Cfg.d 


# Each subdirectory must supply rules for building sources it contributes
generate/src/%.o: ../generate/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@generate/src/CDD_Mcl_BOARD_InitPeripherals_PBcfg.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


