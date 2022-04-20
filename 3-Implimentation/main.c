/*
 * door _sensor.c
 *
 * Created: 20-04-2022 13:08:19
 * Author : HP
 */ 

#include <avr/io.h>


int main(void)
{
    /* Replace with your application code */
	DDRB=DDRB&0b11111101;
	DDRC=DDRC|0b01000000;
    while (1) 
    {
		if(PINB & 0b00000010)
		PORTC=PORTC|0b01000000;
		else
		PORTC=PORTC&0b10111111;
    }
	return 0;
}

