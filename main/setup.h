void pinsToLow(int pin1, int pin2, int pin3, int pin4){
    gpio_set_level(pin1, 0);
    gpio_set_level(pin2, 0);
    gpio_set_level(pin3, 0);
    gpio_set_level(pin4, 0);
}

void pinSet(int pin1, int pin2, int pin3, int pin4){

    int arr[4] = {pin1, pin2, pin3, pin4};

    for(int i = 0; i < 4; i++){
    gpio_reset_pin(arr[i]);
    gpio_set_direction(arr[i], GPIO_MODE_OUTPUT);
    }
}