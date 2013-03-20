/*
 * @file ledCntl.c
 * Program to turn LED on/off *
 */

#include "platforms/raspberry-pi/gpio.h"
 
#include <stddef.h>
#include <stdio.h>
#include <ledctrl.h>
#include <gpio.h>

/**
 * Program Entry Point
 *
 * @param argc      Number of arguments
 * @param argv      Array of arguments
 *
 * @return nothing?
 */

void turnOn() {
    
    GPIOCLR(16); //led on
    printf("LED ON\r\n");
}

void turnOff() {
    GPIOSET(16);
    printf("LED OFF\r\n");
}

void led_init(){
    GPIOMODE(16, FSEL_OUTPUT); //led output
}
