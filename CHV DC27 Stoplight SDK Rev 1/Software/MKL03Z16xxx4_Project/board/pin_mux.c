/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v6.0
processor: MKL03Z16xxx4
package_id: MKL03Z16VFG4
mcu_data: ksdk2_0
processor_version: 6.0.0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

#include "fsl_common.h"
#include "fsl_port.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
    BOARD_InitPins();
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '3', peripheral: GPIOA, signal: 'GPIO, 3', pin_signal: EXTAL0/PTA3/I2C0_SCL/I2C0_SDA/LPUART0_TX}
  - {pin_num: '4', peripheral: GPIOA, signal: 'GPIO, 4', pin_signal: XTAL0/PTA4/I2C0_SDA/I2C0_SCL/LPUART0_RX/CLKOUT}
  - {pin_num: '5', peripheral: GPIOA, signal: 'GPIO, 5', pin_signal: PTA5/RTC_CLKIN/TPM0_CH1/SPI0_SS_b}
  - {pin_num: '6', peripheral: GPIOA, signal: 'GPIO, 6', pin_signal: PTA6/TPM0_CH0/SPI0_MISO}
  - {pin_num: '7', peripheral: GPIOA, signal: 'GPIO, 7', pin_signal: PTA7/IRQ_4/SPI0_MISO/SPI0_MOSI}
  - {pin_num: '8', peripheral: GPIOB, signal: 'GPIO, 0', pin_signal: ADC0_SE9/PTB0/IRQ_5/LLWU_P4/EXTRG_IN/SPI0_SCK/I2C0_SCL}
  - {pin_num: '10', peripheral: LPUART0, signal: TX, pin_signal: VREF_OUT/CMP0_IN5/PTB2/IRQ_7/LPUART0_RX/LPUART0_TX}
  - {pin_num: '11', peripheral: I2C0, signal: SCL, pin_signal: PTB3/IRQ_10/I2C0_SCL/LPUART0_TX}
  - {pin_num: '12', peripheral: I2C0, signal: SDA, pin_signal: PTB4/IRQ_11/I2C0_SDA/LPUART0_RX}
  - {pin_num: '13', peripheral: GPIOB, signal: 'GPIO, 5', pin_signal: ADC0_SE1/CMP0_IN1/PTB5/IRQ_12/TPM1_CH1/NMI_b}
  - {pin_num: '14', peripheral: SWD, signal: SWD_CLK, pin_signal: ADC0_SE15/CMP0_IN2/PTA0/IRQ_0/LLWU_P7/TPM1_CH0/SWD_CLK}
  - {pin_num: '15', peripheral: RCM, signal: RESET, pin_signal: PTA1/IRQ_1/LPTMR0_ALT1/TPM_CLKIN0/RESET_b}
  - {pin_num: '16', peripheral: SWD, signal: SWD_DIO, pin_signal: PTA2/CMP0_OUT/SWD_DIO}
  - {pin_num: '9', peripheral: GPIOB, signal: 'GPIO, 1', pin_signal: ADC0_SE8/CMP0_IN3/PTB1/IRQ_6/LPUART0_TX/LPUART0_RX/I2C0_SDA}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void)
{
    /* Port A Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortA);
    /* Port B Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortB);

    /* PORTA0 (pin 14) is configured as SWD_CLK */
    PORT_SetPinMux(PORTA, 0U, kPORT_MuxAlt3);

    /* PORTA1 (pin 15) is configured as RESET_b */
    PORT_SetPinMux(PORTA, 1U, kPORT_MuxAlt3);

    /* PORTA2 (pin 16) is configured as SWD_DIO */
    PORT_SetPinMux(PORTA, 2U, kPORT_MuxAlt3);

    /* PORTA3 (pin 3) is configured as PTA3 */
    PORT_SetPinMux(PORTA, 3U, kPORT_MuxAsGpio);

    /* PORTA4 (pin 4) is configured as PTA4 */
    PORT_SetPinMux(PORTA, 4U, kPORT_MuxAsGpio);

    /* PORTA5 (pin 5) is configured as PTA5 */
    PORT_SetPinMux(PORTA, 5U, kPORT_MuxAsGpio);

    /* PORTA6 (pin 6) is configured as PTA6 */
    PORT_SetPinMux(PORTA, 6U, kPORT_MuxAsGpio);

    /* PORTA7 (pin 7) is configured as PTA7 */
    PORT_SetPinMux(PORTA, 7U, kPORT_MuxAsGpio);

    /* PORTB0 (pin 8) is configured as PTB0 */
    PORT_SetPinMux(PORTB, 0U, kPORT_MuxAsGpio);

    /* PORTB1 (pin 9) is configured as PTB1 */
    PORT_SetPinMux(PORTB, 1U, kPORT_MuxAsGpio);

    /* PORTB2 (pin 10) is configured as LPUART0_TX */
    PORT_SetPinMux(PORTB, 2U, kPORT_MuxAlt3);

    /* PORTB3 (pin 11) is configured as I2C0_SCL */
    PORT_SetPinMux(PORTB, 3U, kPORT_MuxAlt2);

    /* PORTB4 (pin 12) is configured as I2C0_SDA */
    PORT_SetPinMux(PORTB, 4U, kPORT_MuxAlt2);

    /* PORTB5 (pin 13) is configured as PTB5 */
    PORT_SetPinMux(PORTB, 5U, kPORT_MuxAsGpio);
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/