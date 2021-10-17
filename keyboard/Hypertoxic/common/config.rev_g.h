#pragma once

#define PRODUCT "HTKB Hypertoxic" /* 硬件名称，用于蓝牙显示 */
#define DEVICE_VER 0x0001 /* 硬件版本 */

#define LED_CAPS 17
#define LED_RGB_R 20
#define LED_RGB_G 19
#define LED_RGB_B 18
#define LED_STATUS_BLE 18
#define LED_STATUS_CHARGING 19
#define LED_STATUS_USB 20

#define UART_RXD 25
#define UART_TXD 28

#define BATTERY_ADC_PIN NRF_SAADC_INPUT_AIN0

static const uint8_t row_pin_array[MATRIX_ROWS] = { 23, 22, 24, 11 };
static const uint8_t column_pin_array[MATRIX_COLS] = { 29, 30, 26, 27, 3, 4, 5, 6, 7, 8, 9, 10 };

#define ROW_IN // 二极管方向是从COL->ROW

#define SWD_DAT_IO T2
#define SWD_DAT_MASK bT2
#define SWD_DAT_PORT P1
#define SWD_CLK_IO T2EX
#define SWD_CLK_MASK bT2EX
#define SWD_CLK_PORT P1

// Bootloader指示灯
#define LED_DFU_INIT 18
#define LED_DFU_START 19
#define LED_DFU_FINISH 20
// #define LED_DFU_POSITIVE
