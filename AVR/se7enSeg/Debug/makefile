################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
se7enSeg.lss \

FLASH_IMAGE += \
se7enSeg.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: se7enSeg.elf secondary-outputs

# Tool invocations
se7enSeg.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,se7enSeg.map -mmcu=atmega32 -o "se7enSeg.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

se7enSeg.lss: se7enSeg.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S se7enSeg.elf  >"se7enSeg.lss"
	@echo 'Finished building: $@'
	@echo ' '

se7enSeg.hex: se7enSeg.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex se7enSeg.elf  "se7enSeg.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: se7enSeg.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 se7enSeg.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) se7enSeg.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
