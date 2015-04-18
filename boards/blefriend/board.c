/*
 * This file is subject to the terms and conditions of the GNU Lesser General
 * Public License v2.1. See the file LICENSE in the top level directory for more
 * details.
 */

/**
 * @ingroup     boards_blefriend-nrf51822
 * @{
 *
 * @file        board.c
 * @brief       Board specific implementations for the BLE Friend NRF51822 board
 *
 * @author      Bharanee Rathna <deepfryed@gmail.com>
 *
 * @}
 */

#include "board.h"
#include "cpu.h"

void board_init(void)
{
    /* setup led(s) for debugging */
    NRF_GPIO->PIN_CNF[LED_RED_PIN] = GPIO_PIN_CNF_DIR_Output;

    /* initialize the CPU */
    cpu_init();
}
