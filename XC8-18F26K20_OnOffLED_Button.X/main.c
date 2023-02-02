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
        IO_Task();
    }
    return;
}



