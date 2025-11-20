/*
 * Single LED Interface.c
 *
 * Created: 12-08-2025 07:56:16
 * Author : asath
 */ 

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB |= (1<<DDB0);
    /* Replace with your application code */
    while (1) 
    {
		PORTB |= (1<<PB0); /* Turn On */
		_delay_ms(1000);
		PORTB &= ~(1<<PB0); /* Turn Off */
		_delay_ms(1000);
    }
}

