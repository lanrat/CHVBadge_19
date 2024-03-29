/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Peripherals v6.0
processor: MK64FN1M0xxx12
package_id: MK64FN1M0VLQ12
mcu_data: ksdk2_0
processor_version: 6.0.1
functionalGroups:
- name: BOARD_InitPeripherals
  called_from_default_init: true
  selectedCore: core0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
component:
- type: 'system'
- type_id: 'system_54b53072540eeeb8f8e9343e71f28176'
- global_system_definitions: []
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
component:
- type: 'msg'
- type_id: 'msg_6e2baaf3b97dbeef01c0043275f9a0e7'
- global_messages: []
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/***********************************************************************************************************************
 * Included files
 **********************************************************************************************************************/
#include "peripherals.h"

/***********************************************************************************************************************
 * BOARD_InitPeripherals functional group
 **********************************************************************************************************************/
/***********************************************************************************************************************
 * GPIO_1 initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'GPIO_1'
- type: 'gpio'
- mode: 'GPIO'
- type_id: 'gpio_f970a92e447fa4793838db25a2947ed7'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'GPIOA'
- config_sets:
  - fsl_gpio:
    - enable_irq: 'false'
    - port_interrupt:
      - IRQn: 'PORTA_IRQn'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
    - quick_selection: 'QS_GPIO_1'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

void GPIO_1_init(void) {
  /* Make sure, the clock gate for port A is enabled (e. g. in pin_mux.c) */
}

/***********************************************************************************************************************
 * ADC16_1 initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'ADC16_1'
- type: 'adc16'
- mode: 'ADC'
- type_id: 'adc16_7d827be2dc433dc756d94a7ce88cbcc5'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'ADC0'
- config_sets:
  - fsl_adc16:
    - adc16_config:
      - referenceVoltageSource: 'kADC16_ReferenceVoltageSourceVref'
      - clockSource: 'kADC16_ClockSourceAsynchronousClock'
      - enableAsynchronousClock: 'true'
      - clockDivider: 'kADC16_ClockDivider8'
      - resolution: 'kADC16_ResolutionSE16Bit'
      - longSampleMode: 'kADC16_LongSampleDisabled'
      - enableHighSpeed: 'false'
      - enableLowPower: 'false'
      - enableContinuousConversion: 'true'
    - adc16_channel_mux_mode: 'kADC16_ChannelMuxB'
    - adc16_hardware_compare_config:
      - hardwareCompareModeEnable: 'false'
    - doAutoCalibration: 'true'
    - trigger: 'false'
    - hardwareAverageConfiguration: 'kADC16_HardwareAverageCount32'
    - enable_dma: 'false'
    - enable_irq: 'false'
    - adc_interrupt:
      - IRQn: 'ADC0_IRQn'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
    - adc16_channels_config:
      - 0:
        - enableDifferentialConversion: 'false'
        - channelNumber: 'SE.14'
        - enableInterruptOnConversionCompleted: 'false'
        - channelGroup: '0'
        - initializeChannel: 'false'
      - 1:
        - enableDifferentialConversion: 'false'
        - channelNumber: 'SE.15'
        - enableInterruptOnConversionCompleted: 'false'
        - channelGroup: '0'
        - initializeChannel: 'false'
      - 2:
        - enableDifferentialConversion: 'false'
        - channelNumber: 'SE.4b'
        - enableInterruptOnConversionCompleted: 'false'
        - channelGroup: '0'
        - initializeChannel: 'false'
      - 3:
        - enableDifferentialConversion: 'false'
        - channelNumber: 'SE.17'
        - enableInterruptOnConversionCompleted: 'false'
        - channelGroup: '0'
        - initializeChannel: 'false'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
adc16_channel_config_t ADC16_1_channelsConfig[4] = {
  {
    .channelNumber = 14U,
    .enableDifferentialConversion = false,
    .enableInterruptOnConversionCompleted = false,
  },
  {
    .channelNumber = 15U,
    .enableDifferentialConversion = false,
    .enableInterruptOnConversionCompleted = false,
  },
  {
    .channelNumber = 4U,
    .enableDifferentialConversion = false,
    .enableInterruptOnConversionCompleted = false,
  },
  {
    .channelNumber = 17U,
    .enableDifferentialConversion = false,
    .enableInterruptOnConversionCompleted = false,
  }
};
const adc16_config_t ADC16_1_config = {
  .referenceVoltageSource = kADC16_ReferenceVoltageSourceVref,
  .clockSource = kADC16_ClockSourceAsynchronousClock,
  .enableAsynchronousClock = true,
  .clockDivider = kADC16_ClockDivider8,
  .resolution = kADC16_ResolutionSE16Bit,
  .longSampleMode = kADC16_LongSampleDisabled,
  .enableHighSpeed = false,
  .enableLowPower = false,
  .enableContinuousConversion = true
};
const adc16_channel_mux_mode_t ADC16_1_muxMode = kADC16_ChannelMuxB;
const adc16_hardware_average_mode_t ADC16_1_hardwareAverageMode = kADC16_HardwareAverageCount32;

void ADC16_1_init(void) {
  /* Initialize ADC16 converter */
  ADC16_Init(ADC16_1_PERIPHERAL, &ADC16_1_config);
  /* Make sure, that software trigger is used */
  ADC16_EnableHardwareTrigger(ADC16_1_PERIPHERAL, false);
  /* Configure hardware average mode */
  ADC16_SetHardwareAverage(ADC16_1_PERIPHERAL, ADC16_1_hardwareAverageMode);
  /* Configure channel multiplexing mode */
  ADC16_SetChannelMuxMode(ADC16_1_PERIPHERAL, ADC16_1_muxMode);
  /* Perform auto calibration */
  ADC16_DoAutoCalibration(ADC16_1_PERIPHERAL);
}

/***********************************************************************************************************************
 * UART_1 initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'UART_1'
- type: 'uart'
- mode: 'freertos'
- type_id: 'uart_cd31a12aa8c79051fda42cc851a27c37'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'UART0'
- config_sets:
  - fsl_uart_freertos:
    - uart_rtos_configuration:
      - clockSource: 'BusInterfaceClock'
      - clockSourceFreq: 'GetFreq'
      - baudrate: '115200'
      - parity: 'kUART_ParityDisabled'
      - stopbits: 'kUART_OneStopBit'
      - buffer_size: '256'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
uart_rtos_handle_t UART_1_rtos_handle;
uart_handle_t UART_1_uart_handle;
uint8_t UART_1_background_buffer[UART_1_BACKGROUND_BUFFER_SIZE];
uart_rtos_config_t UART_1_rtos_config = {
  .base = UART_1_PERIPHERAL,
  .baudrate = 115200,
  .parity = kUART_ParityDisabled,
  .stopbits = kUART_OneStopBit,
  .buffer = UART_1_background_buffer,
  .buffer_size = UART_1_BACKGROUND_BUFFER_SIZE
};

void UART_1_init(void) {
  /* UART clock source initialization */
  UART_1_rtos_config.srcclk = UART_1_CLOCK_SOURCE;
  /* UART rtos initialization */
  UART_RTOS_Init(&UART_1_rtos_handle, &UART_1_uart_handle, &UART_1_rtos_config);
}

/***********************************************************************************************************************
 * FlexCAN_1 initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'FlexCAN_1'
- type: 'flexcan'
- mode: 'interrupts'
- type_id: 'flexcan_10d80efac19b25dcd240244aae88dca0'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'CAN0'
- config_sets:
  - interruptsCfg:
    - messageBufferIrqs: '0'
    - interruptsEnable: ''
    - enable_ored_mb_irq: 'false'
    - interrupt_ored_mb:
      - IRQn: 'CAN0_ORed_Message_buffer_IRQn'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
    - enable_busoff_irq: 'false'
    - interrupt_busoff:
      - IRQn: 'CAN0_Bus_Off_IRQn'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
    - enable_error_irq: 'false'
    - interrupt_error:
      - IRQn: 'CAN0_Error_IRQn'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
    - enable_tx_irq: 'false'
    - interrupt_tx:
      - IRQn: 'CAN0_Tx_Warning_IRQn'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
    - enable_rx_irq: 'false'
    - interrupt_rx:
      - IRQn: 'CAN0_Rx_Warning_IRQn'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
    - enable_wakeup_irq: 'false'
    - interrupt_wakeup:
      - IRQn: 'CAN0_Wake_Up_IRQn'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
  - fsl_flexcan:
    - can_config:
      - clockSource: 'kFLEXCAN_ClkSrcPeri'
      - clockSourceFreq: 'BOARD_BootClockRUN'
      - wakeupSrc: 'kFLEXCAN_WakeupSrcUnfiltered'
      - baudRate: '500000'
      - maxMbNum: '16'
      - enableLoopBack: 'false'
      - enableTimerSync: 'true'
      - enableSelfWakeup: 'false'
      - enableIndividMask: 'false'
      - timingConfig:
        - propSeg: '2'
        - phaseSeg1: '4'
        - phaseSeg2: '3'
        - rJumpwidth: '2'
        - bitTime: []
    - enableRxFIFO: 'false'
    - rxFIFO:
      - idFilterTable: ''
      - idFilterNum: 'num0'
      - idFilterType: 'kFLEXCAN_RxFifoFilterTypeA'
      - priority: 'kFLEXCAN_RxFifoPrioLow'
    - channels:
      - 0:
        - mbID: '0'
        - mbType: 'mbRx'
        - rxMb:
          - id: '0'
          - format: 'kFLEXCAN_FrameFormatStandard'
          - type: 'kFLEXCAN_FrameTypeData'
      - 1:
        - mbID: '1'
        - mbType: 'mbTx'
        - rxMb:
          - id: '0'
          - format: 'kFLEXCAN_FrameFormatStandard'
          - type: 'kFLEXCAN_FrameTypeData'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
const flexcan_config_t FlexCAN_1_config = {
  .clkSrc = kFLEXCAN_ClkSrcPeri,
  .wakeupSrc = kFLEXCAN_WakeupSrcUnfiltered,
  .baudRate = 500000,
  .maxMbNum = 16,
  .enableLoopBack = false,
  .enableTimerSync = true,
  .enableSelfWakeup = false,
  .enableIndividMask = false,
  .timingConfig = {
    .preDivider = 11,
    .propSeg = 1,
    .phaseSeg1 = 3,
    .phaseSeg2 = 2,
    .rJumpwidth = 1
  }
};
/* Message buffer 0 configuration structure */
const flexcan_rx_mb_config_t FlexCAN_1_rx_mb_config_0 = {
  .id = 0,
  .format = kFLEXCAN_FrameFormatStandard,
  .type = kFLEXCAN_FrameTypeData
};

void FlexCAN_1_init(void) {
  FLEXCAN_Init(FLEXCAN_1_PERIPHERAL, &FlexCAN_1_config, FLEXCAN_1_CLOCK_SOURCE);

  /* Message buffer 0 initialization */
  FLEXCAN_SetRxMbConfig(FLEXCAN_1_PERIPHERAL, 0, &FlexCAN_1_rx_mb_config_0, true);
  /* Message buffer 1 initialization */
  FLEXCAN_SetTxMbConfig(FLEXCAN_1_PERIPHERAL, 1, true);
}

/***********************************************************************************************************************
 * I2C_1 initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'I2C_1'
- type: 'i2c'
- mode: 'freertos'
- type_id: 'i2c_2566d7363e7e9aaedabb432110e372d7'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'I2C1'
- config_sets:
  - fsl_i2c:
    - i2c_mode: 'kI2C_Master'
    - clockSource: 'BusInterfaceClock'
    - clockSourceFreq: 'GetFreq'
    - rtos_handle:
      - enable_custom_name: 'false'
    - i2c_master_config:
      - enableMaster: 'true'
      - enableStopHold: 'false'
      - baudRate_Bps: '300000'
      - glitchFilterWidth: '0'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
i2c_rtos_handle_t I2C_1_rtosHandle;
const i2c_master_config_t I2C_1_config = {
  .enableMaster = true,
  .enableStopHold = false,
  .baudRate_Bps = 300000,
  .glitchFilterWidth = 0
};

void I2C_1_init(void) {
  /* Initialization function */
  I2C_RTOS_Init(&I2C_1_rtosHandle, I2C_1_PERIPHERAL, &I2C_1_config, I2C_1_CLK_FREQ);
}

/***********************************************************************************************************************
 * USB_1 initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'USB_1'
- type: 'usb'
- mode: 'device'
- type_id: 'usb_ee653dbc854ad587d0b0d9450b290322'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'USB0'
- config_sets:
  - deviceSetting:
    - vendor_id: '0x1FC9'
    - product_id: '0x0094'
    - manufacturer_string: 'NXP'
    - product_string: 'VCOM'
    - self_powered: 'true'
    - max_power: '100'
    - interfaces:
      - 0:
        - interface_class: 'kClassCic'
        - setting_cic:
          - interface_name: 'CIC VCOM'
          - implementation: 'kImplementationCicVcom'
          - subclass: 'kSubclassAcm'
          - protocol: 'kProtocolNone'
          - endpoints:
            - 0:
              - direction: 'kIn'
              - transfer_type: 'kInterrupt'
              - max_packet_size_fs: 'k16'
              - polling_interval_fs: '8'
          - data_interface_count: '1'
          - quick_selection: 'QS_INTERFACE_CIC_VCOM'
      - 1:
        - interface_class: 'kClassDic'
        - setting_dic:
          - interface_name: 'DIC VCOM'
          - implementation: 'kImplementationDicVcom'
          - subclass: 'kSubclassNone'
          - protocol: 'kProtocolNone'
          - endpoints:
            - 0:
              - direction: 'kIn'
              - transfer_type: 'kBulk'
              - max_packet_size_fs: 'k64'
              - polling_interval_fs: '0'
            - 1:
              - direction: 'kOut'
              - transfer_type: 'kBulk'
              - max_packet_size_fs: 'k64'
              - polling_interval_fs: '0'
          - quick_selection: 'QS_INTERFACE_DIC_VCOM'
    - quick_selection: 'QS_DEVICE_CDC_VCOM'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

void USB_1_init(void) {
  USB_DeviceApplicationInit();
}

/***********************************************************************************************************************
 * GPIO_2 initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'GPIO_2'
- type: 'gpio'
- mode: 'GPIO'
- type_id: 'gpio_f970a92e447fa4793838db25a2947ed7'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'GPIOB'
- config_sets:
  - fsl_gpio:
    - enable_irq: 'false'
    - port_interrupt:
      - IRQn: 'PORTB_IRQn'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
    - quick_selection: 'QS_GPIO_1'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

void GPIO_2_init(void) {
  /* Make sure, the clock gate for port B is enabled (e. g. in pin_mux.c) */
}

/***********************************************************************************************************************
 * Initialization functions
 **********************************************************************************************************************/
void BOARD_InitPeripherals(void)
{
  /* Initialize components */
  GPIO_1_init();
  ADC16_1_init();
  UART_1_init();
  FlexCAN_1_init();
  I2C_1_init();
  USB_1_init();
  GPIO_2_init();
}

/***********************************************************************************************************************
 * BOARD_InitBootPeripherals function
 **********************************************************************************************************************/
void BOARD_InitBootPeripherals(void)
{
  BOARD_InitPeripherals();
}
