/**
 * \file
 *
 * \brief User board definition template
 *
 */

 /* This file is intended to contain definitions and configuration details for
 * features and devices that are available on the board, e.g., frequency and
 * startup time for an external crystal, external memory devices, LED and USART
 * pins.
 */
/*
 * Support and FAQ: visit <a href="http://www.atmel.com/design-support/">Atmel Support</a>
 */

#ifndef USER_BOARD_H
#define USER_BOARD_H

#include <conf_board.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * \ingroup group_common_boards
 * \defgroup user_board_group User board
 *
 * @{
 */

void system_board_init(void);
void system_board_init_for_battery_measure(void);
void change_bt_enable(bool enable);

/** Name string macro */
#define BOARD_NAME                "USER_BOARD"

/** \name Resonator definitions
 *  @{ */
#define BOARD_FREQ_SLCK_XTAL      (32768U)
#define BOARD_FREQ_SLCK_BYPASS    (32768U)
#define BOARD_FREQ_MAINCK_XTAL    0 /* Not Mounted */
#define BOARD_FREQ_MAINCK_BYPASS  0 /* Not Mounted */
#define BOARD_MCK                 CHIP_FREQ_CPU_MAX
#define BOARD_OSC_STARTUP_US      15625
/** @} */

/** \name LED RED definitions
 *  @{ */
#define LED_RED_NAME                "LED0 (bicolor)"
#define LED_RED_PIN                 PIN_PA14
#define LED_RED_ACTIVE              true
#define LED_RED_INACTIVE            !LED_RED_ACTIVE
#define LED_RED_GPIO                LED_RED_PIN
#define LED_RED                     LED_RED_PIN
/** @} */


/** \name LED GREEN definitions
 *  @{ */
#define LED_GREEN_NAME              "LED1 (bicolor)"
#define LED_GREEN_PIN               PIN_PA15
#define LED_GREEN_ACTIVE            true
#define LED_GREEN_INACTIVE          !LED_GREEN_ACTIVE
#define LED_GREEN_GPIO              LED_GREEN_PIN
#define LED_GREEN                   LED_GREEN_PIN
/** @} */

/** \name LED Driver definitions
 *  @{ */
#define LED_DRIVER_NAME             "LED Driver"
#define LED_DRIVER_PIN              PIN_PA01
#define LED_DRIVER_ACTIVE           true
#define LED_DRIVER_INACTIVE         !LED_DRIVER_ACTIVE
#define LED_DRIVER_GPIO             LED_DRIVER_PIN
#define LED_DRIVER                  LED_DRIVER_PIN
/** @} */

/** Number of on-board LEDs */
#define LED_COUNT                 3

/** \name BT Module definitions
 *  @{ */
#define BT_ENABLE_NAME              "BT Module"
#define BT_ENABLE_PIN               PIN_PA03
#define BT_ENABLE_ACTIVE            true
#define BT_ENABLE_INACTIVE          !BT_ENABLE_ACTIVE
#define BT_ENABLE_GPIO              BT_ENABLE_PIN
#define BT_ENABLE                   BT_ENABLE_PIN
/** @} */

/** \name BCAP definitions
 *  @{ */
#define BCAP_ENABLE_NAME            "BCAP Enable"
#define BCAP_ENABLE_PIN             PIN_PA19
#define BCAP_ENABLE_ACTIVE          true
#define BCAP_ENABLE_INACTIVE        !BCAP_ENABLE_ACTIVE
#define BCAP_ENABLE_GPIO            BCAP_ENABLE_PIN
#define BCAP_ENABLE                 BCAP_ENABLE_PIN
/** @} */

/** \name GAS GAUGE CC definitions
 *  @{ */
#define GAUGE_CC_ENABLE_NAME            "GAUGE_CC Enable"
#define GAUGE_CC_ENABLE_PIN             PIN_PA10
#define GAUGE_CC_ENABLE_ACTIVE          true
#define GAUGE_CC_ENABLE_INACTIVE        !GAUGE_CC_ENABLE_ACTIVE
#define GAUGE_CC_ENABLE_GPIO            GAUGE_CC_ENABLE_PIN
#define GAUGE_CC_ENABLE                 GAUGE_CC_ENABLE_PIN
/** @} */

/** \name USB Charger EN definitions
 *  @{ */
#define USB_EN_ENABLE_NAME            "USB_EN Enable"
#define USB_EN_ENABLE_PIN             PIN_PA28
#define USB_EN_ENABLE_ACTIVE          true
#define USB_EN_ENABLE_INACTIVE        !USB_EN_ENABLE_ACTIVE
#define USB_EN_ENABLE_GPIO            USB_EN_ENABLE_PIN
#define USB_EN_ENABLE                 USB_EN_ENABLE_PIN
/** @} */

/**
 * \name DRIVER_BCAP definitions
 *
 * Wrapper macros for SW0, to ensure common naming across all Xplained Pro
 * boards.
 *
 *  @{ */
#define SW0_PIN                   PIN_PA24
#define SW0_ACTIVE                true
#define SW0_INACTIVE              !SW0_ACTIVE
#define SW0_EIC_PIN               PIN_PA24A_EIC_EXTINT12
#define SW0_EIC_MUX               MUX_PA24A_EIC_EXTINT12
#define SW0_EIC_PINMUX            PINMUX_PA24A_EIC_EXTINT12
#define SW0_EIC_LINE              12
/** @} */


#define INPUT_BCAP_NAME          "SW0"
#define INPUT_BCAP_PIN           SW0_PIN
#define INPUT_BCAP_ACTIVE        SW0_ACTIVE
#define INPUT_BCAP_INACTIVE      SW0_INACTIVE
#define INPUT_BCAP_EIC_PIN       SW0_EIC_PIN
#define INPUT_BCAP_EIC_MUX       SW0_EIC_MUX
#define INPUT_BCAP_EIC_PINMUX    SW0_EIC_PINMUX
#define INPUT_BCAP_EIC_LINE      SW0_EIC_LINE
/** @} */


/** \name Extension header #1 ADC definitions
 *  @{
 */
#define ADC_MODULE                 ADC
#define VMPPT_ADC_0_CHANNEL        4
#define VMPPT_ADC_0_PIN            PIN_PA04B_ADC_AIN4
#define VMPPT_ADC_0_MUX            MUX_PA04B_ADC_AIN4
#define VMPPT_ADC_0_PINMUX         PINMUX_PA04B_ADC_AIN4
#define TEMP_ADC_1_CHANNEL         7
#define TEMP_ADC_1_PIN             PIN_PA07B_ADC_AIN7
#define TEMP_ADC_1_MUX             MUX_PA07B_ADC_AIN7
#define TEMP_ADC_1_PINMUX          PINMUX_PA07B_ADC_AIN7
/** @} */

/** \name Extension header #1 I2C definitions
 *  @{
 */
#define GAS_GAUGE_I2C_MODULE              SERCOM0
#define GAS_GAUGE_I2C_SERCOM_PINMUX_PAD0  PINMUX_PA08C_SERCOM0_PAD0
#define GAS_GAUGE_I2C_SERCOM_PINMUX_PAD1  PINMUX_PA09C_SERCOM0_PAD1
#define GAS_GAUGE_I2C_SERCOM_DMAC_ID_TX   SERCOM0_DMAC_ID_TX
#define GAS_GAUGE_I2C_SERCOM_DMAC_ID_RX   SERCOM0_DMAC_ID_RX
/** @} */

/** \name Extension header #1 UART definitions
 *  @{
 */
#define BT_UART_MODULE              SERCOM1
#define BT_UART_SERCOM_MUX_SETTING  USART_RX_1_TX_0_XCK_1
#define BT_UART_SERCOM_PINMUX_PAD0  PINMUX_PA16C_SERCOM1_PAD0
#define BT_UART_SERCOM_PINMUX_PAD1  PINMUX_PA17C_SERCOM1_PAD1
#define BT_UART_SERCOM_PINMUX_PAD2  PINMUX_UNUSED
#define BT_UART_SERCOM_PINMUX_PAD3  PINMUX_UNUSED
#define BT_UART_SERCOM_DMAC_ID_TX   SERCOM1_DMAC_ID_TX
#define BT_UART_SERCOM_DMAC_ID_RX   SERCOM1_DMAC_ID_RX
/** @} */

/** @} */

#ifdef __cplusplus
}
#endif

#endif // USER_BOARD_H
