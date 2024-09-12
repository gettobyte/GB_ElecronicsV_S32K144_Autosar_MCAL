################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../generate/src/Adc_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Adc_Cfg.c \
../generate/src/Adc_Ip_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Adc_Ipw_BOARD_InitPeripherals_PBcfg.c \
../generate/src/CDD_Mcl_BOARD_InitPeripherals_PBcfg.c \
../generate/src/CDD_Mcl_Cfg.c \
../generate/src/Dma_Ip_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Dma_Ip_Cfg.c \
../generate/src/Flexio_Mcl_Ip_BOARD_InitPeripherals_PBcfg.c \
../generate/src/IntCtrl_Ip_Cfg.c \
../generate/src/OsIf_Cfg.c \
../generate/src/Pdb_Adc_Ip_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Platform_Cfg.c \
../generate/src/Platform_Ipw_Cfg.c \
../generate/src/Port_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Port_Cfg.c \
../generate/src/Port_Ci_Port_Ip_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Trgmux_Ip_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Trgmux_Ip_Cfg.c 

OBJS += \
./generate/src/Adc_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Adc_Cfg.o \
./generate/src/Adc_Ip_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Adc_Ipw_BOARD_InitPeripherals_PBcfg.o \
./generate/src/CDD_Mcl_BOARD_InitPeripherals_PBcfg.o \
./generate/src/CDD_Mcl_Cfg.o \
./generate/src/Dma_Ip_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Dma_Ip_Cfg.o \
./generate/src/Flexio_Mcl_Ip_BOARD_InitPeripherals_PBcfg.o \
./generate/src/IntCtrl_Ip_Cfg.o \
./generate/src/OsIf_Cfg.o \
./generate/src/Pdb_Adc_Ip_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Platform_Cfg.o \
./generate/src/Platform_Ipw_Cfg.o \
./generate/src/Port_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Port_Cfg.o \
./generate/src/Port_Ci_Port_Ip_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Trgmux_Ip_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Trgmux_Ip_Cfg.o 

C_DEPS += \
./generate/src/Adc_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Adc_Cfg.d \
./generate/src/Adc_Ip_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Adc_Ipw_BOARD_InitPeripherals_PBcfg.d \
./generate/src/CDD_Mcl_BOARD_InitPeripherals_PBcfg.d \
./generate/src/CDD_Mcl_Cfg.d \
./generate/src/Dma_Ip_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Dma_Ip_Cfg.d \
./generate/src/Flexio_Mcl_Ip_BOARD_InitPeripherals_PBcfg.d \
./generate/src/IntCtrl_Ip_Cfg.d \
./generate/src/OsIf_Cfg.d \
./generate/src/Pdb_Adc_Ip_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Platform_Cfg.d \
./generate/src/Platform_Ipw_Cfg.d \
./generate/src/Port_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Port_Cfg.d \
./generate/src/Port_Ci_Port_Ip_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Trgmux_Ip_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Trgmux_Ip_Cfg.d 


# Each subdirectory must supply rules for building sources it contributes
generate/src/%.o: ../generate/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@generate/src/Adc_BOARD_InitPeripherals_PBcfg.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


