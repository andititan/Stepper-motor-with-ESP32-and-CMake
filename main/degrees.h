#include "steppingFunctions.h"

void fullDrive(const int pin1, const int pin2, const int pin3, const int pin4, const int msDelay, int degrees){
    if(degrees == 0){
        while(true){
            fullDriveStepping(pin1, pin2, pin3, pin4, msDelay);
        }
    }else{
        int steps = ((degrees * 1.8) / 4);
        for(int i = 0; i < steps; i++){
            fullDriveStepping(pin1, pin2, pin3, pin4, msDelay);
        }
    }
}