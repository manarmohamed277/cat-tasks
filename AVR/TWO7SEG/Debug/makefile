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
TWO7SEG.lss \

FLASH_IMAGE += \
TWO7SEG.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: TWO7SEG.elf secondary-outputs

# Tool invocations
TWO7SEG.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,TWO7SEG.map -mmcu=atmega32 -o "TWO7SEG.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

TWO7SEG.lss: TWO7SEG.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S TWO7SEG.elf  >"TWO7SEG.lss"
	@echo 'Finished building: $@'
	@echo ' '

TWO7SEG.hex: TWO7SEG.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex TWO7SEG.elf  "TWO7SEG.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: TWO7SEG.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 TWO7SEG.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) TWO7SEG.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
