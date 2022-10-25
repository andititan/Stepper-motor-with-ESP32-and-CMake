#include "steppingFunctions.h"

//it takes the stepper motor to make 2038 steps to get to 360 degrees
//if we divide 2038 with 360 we get 5.66, this is the degrees per one step
//in our stepper functions we have 4 steps so we divide 5.66 with 4 and we get 1.42
const float gDegreesPerStep = 1.42f;

void fullDrive(const int pins[4], const int msDelay, const int degrees, const char option){
    if(degrees == 0){
        while(true){
            fullDriveStepping(pins, msDelay, option);
        }
    }else{
        float steps = (degrees * gDegreesPerStep);
        for(int i = 0; i < (int)steps; i++){
            fullDriveStepping(pins, msDelay, option);
        }
    }
}

void halfDrive(const int pins[4], const int msDelay, const int degrees, const char option){
    if(degrees == 0){
        while(true){
            halfDriveStepping(pins, msDelay, option);
        }
    }else{
        float steps = (degrees * gDegreesPerStep);
        for(int i = 0; i < (int)steps; i++){
            halfDriveStepping(pins, msDelay, option);
        }
    }
}