/* 
 * File:   mcu.h
 * Author: trejo
 *
 * Created on 1 de febrero de 2023, 05:57 PM
 */

#ifndef MCU_H
#define	MCU_H

#ifdef	__cplusplus
extern "C" {
#endif

void MCU_Initialize(void);
void MCU_Delayms(uint16_t time);


#ifdef	__cplusplus
}
#endif

#endif	/* MCU_H */

