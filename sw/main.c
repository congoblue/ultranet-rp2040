/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "pico/stdlib.h"

int main() {
#ifndef PICO_DEFAULT_LED_PIN
#warning blink example requires a board with a regular LED
#else
    const uint LED_PIN = PICO_DEFAULT_LED_PIN;
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    // Initialize chosen serial port
    stdio_init_all();

    while (true) {
        printf("Blinking!\r\n");
        gpio_put(LED_PIN, 1);
        sleep_ms(1000);
        gpio_put(LED_PIN, 0);
        sleep_ms(1000);
    }
#endif
}
