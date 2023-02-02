/*
 * File:   mcu.c
 * Author: trejo
 *
 * Created on 1 de febrero de 2023, 05:57 PM
 */


#include <xc.h>
#include "main.h"

/*
 * Esta funcion inicializa el microcontrolador,
 *  configura entrasdas y salidas.
 */
void MCU_Initialize(void){
    TRISA = 0b00000111; //Declaramos los 3 primeros pines como entradas A0,A1 y A2
    TRISB = 0x00; //All outputs
    TRISC = 0x00; //All outputs
    
    PORTA = 0x00; //Clear PORTA
    PORTB = 0x00; //Clear PORTB
    PORTC = 0x00; //Clear PORTC
    
    LATA = 0x00;
    LATB = 0x00;
    LATC = 0x00;
}

void MCU_Delayms(uint16_t time){
    uint16_t count; 
    for(count = 0; count<time; count ++){
        __delay_ms(1);
    }
    
}
