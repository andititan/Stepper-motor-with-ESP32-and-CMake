void pinsToLow(const int pins[4]){
    gpio_set_level(pins[0], 0);
    gpio_set_level(pins[1], 0);
    gpio_set_level(pins[2], 0);
    gpio_set_level(pins[3], 0);
}

void pinSet(const int pins[4]){
    for(int i = 0; i < 4; i++){
        gpio_reset_pin(pins[i]);
        gpio_set_direction(pins[i], GPIO_MODE_OUTPUT);
    }
}