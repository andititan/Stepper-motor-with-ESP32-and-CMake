#include "setup.h"

void fullDriveStepping(const int pins[4], const int msDelay, const char option){
    if(option == 'c'){
        for(int i = 0; i < 4; i++){
            gpio_set_level(pins[i], 1);

            if(i == 3){
                gpio_set_level(pins[0], 1);
            }else{
                gpio_set_level(pins[i + 1], 1);
            }

            vTaskDelay(msDelay);
            pinsToLow(pins);
        }
    }else{
        for(int i = 3; i >= 0; i--){
        
            gpio_set_level(pins[i], 1);

            if(i == 3){
                gpio_set_level(pins[0], 1);
            }else{
                gpio_set_level(pins[i + 1], 1);
            }

            vTaskDelay(msDelay);
            pinsToLow(pins);
        }
    }
}

void halfDriveStepping(const int pins[4], const int msDelay, const char option){
    int a = 0;

    if(option == 'c'){
        a = 0;
        for(int i = 0; i < 8; i++){
            gpio_set_level(pins[a], 1);
            if(i % 2 != 0){
                if(i == 7){
                    gpio_set_level(pins[0], 1);
                }else{
                    a++;
                    gpio_set_level(pins[a], 1);
                }
            }

            vTaskDelay(msDelay);
            pinsToLow(pins);
        }
    }else{
        a = 3;
        for(int i = 7; i >= 0; i--){
            gpio_set_level(pins[a], 1);
            if(i % 2 != 0){
                if(i == 7){
                    gpio_set_level(pins[0], 1);
                }else{
                    a--;
                    gpio_set_level(pins[a], 1);
                }
            }

            vTaskDelay(msDelay);
            pinsToLow(pins);
        }
    }
}