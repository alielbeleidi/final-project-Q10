/*
 * led_blink.c
 *
 * Created: 6/30/2021 12:55:32 AM
 *  Author: alyal
 */
#include "Std_Types.h"
#include "Utilites.h"
#include "Dio_Reg.h"
#include "Dio_Int.h" 
#include "led_blink.h"
#ifndef F_CPU
#define F_CPU 16000000UL // 16 MHz clock speed
#endif

#include <avr/io.h>
#include <util/delay.h>

void led_blink(void)
{
    DDRD = 0xFF;
    while(1)
    {
	    PORTD = 0xFF;
	    _delay_ms(220);
	    _delay_ms(220);
	    PORTD = 0x00;
	    _delay_ms(220);
	    _delay_ms(220);
    }
    }