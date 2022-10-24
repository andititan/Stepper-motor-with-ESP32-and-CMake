#include "setup.h"

void fullDriveStepping(const int pin1, const int pin2, const int pin3, const int pin4, const int msDelay){
    int arr[4] = {pin1, pin2, pin3, pin4};
    
    for(int i = 0; i < 4; i++){
        
        gpio_set_level(arr[i], 1);

        if(i == 3){
            gpio_set_level(arr[0], 1);
        }else{
            gpio_set_level(arr[i + 1], 1);
        }

        vTaskDelay(msDelay);
        pinsToLow(pin1, pin2, pin3, pin4);
    }
}

void waveDriveStepping(const int pin1, const int pin2, const int pin3, const int pin4, const int msDelay){
    int arr[4] = {pin1, pin2, pin3, pin4};

    for(int i = 0; i < 4; i++){
        gpio_set_level(arr[i], 1);
        vTaskDelay(msDelay);
        pinsToLow(pin1, pin2, pin3, pin4);
    }
}

void halfDriveStepping(const int pin1, const int pin2, const int pin3, const int pin4, const int msDelay){
    int arr[4] = {pin1, pin2, pin3, pin4};
    int a = 0;

    for(int i = 0; i < 8; i++){
        gpio_set_level(arr[a], 1);
        if(i % 2 != 0){
            if(i == 7){
                gpio_set_level(arr[0], 1);
            }else{
                a++;
                gpio_set_level(arr[a], 1);
            }
        }

        vTaskDelay(msDelay);
        pinsToLow(pin1, pin2, pin3, pin4);
    }
}