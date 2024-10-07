#include "led_control.h"
#include <stdio.h>

static gpio_num_t ledPin;

void initializeLED(const gpio_num_t pin)
{
    ledPin = pin;
    gpio_set_direction(ledPin, GPIO_MODE_OUTPUT);
}

void controlLED(const uint8_t *message, size_t length)
{
    printf("Message of %d bytes received:", length);
    for (int i = 0; i < length; i++)
        printf(" %02x", message[i]);
    printf("\n");

    // Control LED based on received message
    if (length > 0) {
        if (message[0] == 1) {
            gpio_set_level(ledPin, 1); // Turn LED on
            printf("LED is ON\n");
        } else if (message[0] == 0) {
            gpio_set_level(ledPin, 0); // Turn LED off
            printf("LED is OFF\n");
        }
    }
}
