################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include generate/src/subdir.mk
-include generate/IntCtrl_Ip/subdir.mk
-include board/subdir.mk
-include RTD/src/subdir.mk
-include Project_Settings/Startup_Code/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
SECONDARY_SIZE += \
G2B_S32K144_UART_MCAL.siz \


# All Target
all: G2B_S32K144_UART_MCAL.elf secondary-outputs

# Tool invocations
G2B_S32K144_UART_MCAL.elf: $(OBJS) C:/Users/Rohan/OneDrive/Documents/GB_ElecronicsV_S32K144_Autosar_MCAL/Peripherals/UART/G2B_S32K144_UART_MCAL/Project_Settings/Linker_Files/linker_flash_s32k144.ld $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: Standard S32DS C Linker'
	arm-none-eabi-gcc -o "G2B_S32K144_UART_MCAL.elf" "@G2B_S32K144_UART_MCAL.args"  $(USER_OBJS)
	@echo 'Finished building target: $@'
	@echo ' '

G2B_S32K144_UART_MCAL.siz: G2B_S32K144_UART_MCAL.elf
	@echo 'Invoking: Standard S32DS Print Size'
	arm-none-eabi-size --format=berkeley G2B_S32K144_UART_MCAL.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) ./*
	-@echo ' '

secondary-outputs: $(SECONDARY_SIZE)

.PHONY: all clean dependents

-include ../makefile.targets
