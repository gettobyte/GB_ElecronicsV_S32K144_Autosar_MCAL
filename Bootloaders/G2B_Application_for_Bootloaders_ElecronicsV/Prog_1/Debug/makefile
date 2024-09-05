################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include startup/subdir.mk
-include lib/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
SECONDARY_FLASH += \
demoprog_s32k144.srec \

SECONDARY_SIZE += \
demoprog_s32k144.siz \


# All Target
all: demoprog_s32k144.elf secondary-outputs

# Tool invocations
demoprog_s32k144.elf: $(OBJS) D:/openblt_v011800/Target/Demo/ARMCM4_S32K14_S32K144EVB_GCC/Prog/S32K144_64_flash.ld $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: Standard S32DS C Linker'
	arm-none-eabi-gcc -o "demoprog_s32k144.elf" "@demoprog_s32k144.args"  $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

demoprog_s32k144.srec: demoprog_s32k144.elf
	@echo 'Invoking: Standard S32DS Create Flash Image'
	arm-none-eabi-objcopy -O srec demoprog_s32k144.elf  "demoprog_s32k144.srec"
	@echo 'Finished building: $@'
	@echo ' '

demoprog_s32k144.siz: demoprog_s32k144.elf
	@echo 'Invoking: Standard S32DS Print Size'
	arm-none-eabi-size --format=berkeley demoprog_s32k144.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) ./*
	-@echo ' '

secondary-outputs: $(SECONDARY_FLASH) $(SECONDARY_SIZE)

.PHONY: all clean dependents

-include ../makefile.targets
