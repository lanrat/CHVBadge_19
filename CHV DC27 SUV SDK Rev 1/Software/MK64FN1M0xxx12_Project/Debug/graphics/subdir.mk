################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../graphics/NXP.c \
../graphics/arrow.c \
../graphics/bat_25.c \
../graphics/bat_50.c \
../graphics/bat_75.c \
../graphics/bat_empty.c \
../graphics/bat_full.c \
../graphics/eyes1.c \
../graphics/eyes2.c \
../graphics/eyes3.c \
../graphics/eyes4.c \
../graphics/eyes5.c \
../graphics/font_medium.c \
../graphics/graphics.c \
../graphics/gui.c \
../graphics/led_graphics.c \
../graphics/rapid7.c 

OBJS += \
./graphics/NXP.o \
./graphics/arrow.o \
./graphics/bat_25.o \
./graphics/bat_50.o \
./graphics/bat_75.o \
./graphics/bat_empty.o \
./graphics/bat_full.o \
./graphics/eyes1.o \
./graphics/eyes2.o \
./graphics/eyes3.o \
./graphics/eyes4.o \
./graphics/eyes5.o \
./graphics/font_medium.o \
./graphics/graphics.o \
./graphics/gui.o \
./graphics/led_graphics.o \
./graphics/rapid7.o 

C_DEPS += \
./graphics/NXP.d \
./graphics/arrow.d \
./graphics/bat_25.d \
./graphics/bat_50.d \
./graphics/bat_75.d \
./graphics/bat_empty.d \
./graphics/bat_full.d \
./graphics/eyes1.d \
./graphics/eyes2.d \
./graphics/eyes3.d \
./graphics/eyes4.d \
./graphics/eyes5.d \
./graphics/font_medium.d \
./graphics/graphics.d \
./graphics/gui.d \
./graphics/led_graphics.d \
./graphics/rapid7.d 


# Each subdirectory must supply rules for building sources it contributes
graphics/%.o: ../graphics/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -DCPU_MK64FN1M0VLQ12 -DCPU_MK64FN1M0VLQ12_cm4 -DFSL_RTOS_BM -DSDK_DEBUGCONSOLE=0 -DCR_INTEGER_PRINTF -DPRINTF_FLOAT_ENABLE=0 -DFSL_RTOS_FREE_RTOS -DSDK_OS_FREE_RTOS -DSDK_DEBUGCONSOLE_UART -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -D__NEWLIB__ -I../drivers/freertos -I"C:\Users\nhoch.SPECSOL\Documents\MCUXpressoIDE_11.0.0_2516\workspace\MK64FN1M0xxx12_Project\chv_include" -I../amazon-freertos/freertos/portable -I../amazon-freertos/include -I../sdmmc/inc -I../CMSIS -I../drivers -I../usb/host/class -I../fatfs/fatfs_include -I../usb/device/class -I../usb/device/include -I../usb/device/source -I../usb/device/source/ehci -I../usb/device/source/khci -I../usb/device/source/lpcip3511 -I../source -I../source/generated -I../fatfs -I../accel -I../usb/host -I../device -I../usb/include -I../osa -I../usb/phy -I../board -I../ -Og -fno-common -g3 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -D__NEWLIB__ -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


