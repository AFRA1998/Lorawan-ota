#ifndef LED_CONTROL_H
#define LED_CONTROL_H

#include "driver/gpio.h"

// LED control functions
void initializeLED(const gpio_num_t ledPin);
void controlLED(const uint8_t *message, size_t length);

#endif // LED_CONTROL_H
