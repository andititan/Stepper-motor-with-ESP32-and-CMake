#include <stdio.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "esp_log.h"
#include "driver/gpio.h"

#include "degrees.h"

int pin1 = 12;
int pin2 = 14;
int pin3 = 27;
int pin4 = 26;

void app_main(void)
{
    const int pins[4] = {pin1, pin2, pin3, pin4};
    pinSet(pins);
    halfDrive(pins, 1, 180, 'c');
    halfDrive(pins, 1, 180, 'r');
}
