/* 
 * File:   main.h
 * Author: trejo
 *
 * Created on 1 de febrero de 2023, 05:48 PM
 */

#ifndef MAIN_H
#define	MAIN_H

#ifdef	__cplusplus
extern "C" {
#endif

    
#include <xc.h>
#include <stdbool.h>
#include "mcu.h"

/************GENERAL DEFINITIONS*/
#define _XTAL_FREQ 20000000
    
#define Delay_ms(x) __delay_ms(x)
    

 ///Declaramos los botones 
#define BUTON1_pinState            PORTAbits.RA0 
#define BUTON1_pinState_GetValue() BUTON1_pinState
#define BUTON2_pinState            PORTAbits.RA1 
#define BUTON2_pinState_GetValue() BUTON2_pinState
#define BUTON3_pinState            PORTAbits.RA2 
#define BUTON3_pinState_GetValue() BUTON3_pinState

#define LED1_pinStatus              LATCbits.LATC0
#define LED1_pinStatus_SetHigh()    do { LED1_pinStatus = 1; } while(0)
#define LED1_pinStatus_SetLow()     do { LED1_pinStatus = 0; } while(0)
#define LED1_pinStatus_Toggle()     do { LED1_pinStatus = ~LED1_pinStatus; } while(0)

#define LED2_pinStatus              LATCbits.LATC1
#define LED2_pinStatus_SetHigh()    do { LED2_pinStatus = 1; } while(0)
#define LED2_pinStatus_SetLow()     do { LED2_pinStatus = 0; } while(0)
#define LED2_pinStatus_Toggle()     do { LED2_pinStatus = ~LED2_pinStatus; } while(0)

#define LED3_pinStatus              LATCbits.LATC2
#define LED3_pinStatus_SetHigh()    do { LED3_pinStatus = 1; } while(0)
#define LED3_pinStatus_SetLow()     do { LED3_pinStatus = 0; } while(0)
#define LED3_pinStatus_Toggle()     do { LED3_pinStatus = ~LED3_pinStatus; } while(0)


#ifdef	__cplusplus
}
#endif

#endif	/* MAIN_H */

