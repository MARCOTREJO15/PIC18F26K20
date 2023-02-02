/*
 * File:   mcu.c
 * Author: trejo
 *
 * Created on 1 de febrero de 2023, 05:57 PM
 */


#include <xc.h>
#include "main.h"

/******* V A R I A B L E S ****************************************************/
bool BUTON_Status;
uint8_t BUTON_Ticks;

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
    
    ANSEL = 0x00; // All digital IO
    
    //Clear variables
    BUTON_Ticks = 0;
    BUTON_Status = 0;
}

void IO_Task(void){
    // Read button status
    if(BUTON1_pinState_GetValue()==1){  //Resistencia PullUP   
        BUTON_Ticks++;
        if(BUTON_Ticks>20){
            BUTON_Ticks = 0;   //Rutina anti-rebote
            BUTON_Status ^= 1; //Asignador de XOR (Toggle LED))
        }
        Delay_ms(10);
    }
    
    // Toggle LED depending BOTON_Status
    if(BUTON_Status){
        LED2_pinStatus_SetHigh();
    }
    else{
        LED2_pinStatus_SetLow();
    }
}
