################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../DIO_prog.c \
../main.c \
../seven_seg_cofig.c \
../seven_seg_prog.c 

OBJS += \
./DIO_prog.o \
./main.o \
./seven_seg_cofig.o \
./seven_seg_prog.o 

C_DEPS += \
./DIO_prog.d \
./main.d \
./seven_seg_cofig.d \
./seven_seg_prog.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


