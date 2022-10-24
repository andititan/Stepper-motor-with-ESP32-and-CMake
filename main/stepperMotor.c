#include <stdio.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "esp_log.h"
#include "driver/gpio.h"

#include "degrees.h"

void app_main(void)
{
    pinSet(12, 14, 27, 26);
    fullDrive(12, 14, 27, 26, 3, 90);
}
