#include <stdio.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "esp_log.h"
#include "driver/gpio.h"

#include "steppingFunctions.h"

void app_main(void)
{
    pinSet(12, 14, 27, 26);
    
    while(1){
        halfDriveStepping(12, 14, 27, 26, 1);
    }
}
