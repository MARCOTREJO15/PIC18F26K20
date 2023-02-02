/*
 * File:   main.c
 * Author: trejo
 *
 * Created on 1 de febrero de 2023, 05:48 PM
 */

#include <xc.h>
#include <stdbool.h>
#include "fuses_config.h"
#include "main.h"

void main(void) {
    MCU_Initialize(); //IO Config
    while(true){
        LED1_pinStatus_Toggle(); // Toggle LED
        Delay_ms(250); // Delay 0.25s 
    }
    return;
}



