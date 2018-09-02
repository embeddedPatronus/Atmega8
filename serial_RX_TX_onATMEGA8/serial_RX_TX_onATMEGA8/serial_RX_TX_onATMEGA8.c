/*
 * serial_RX_onATMEGA8.c
 *
 * Created: 7/1/2015 11:35:36 AM
 *  Author: GAURAV SHARMA
 */ 


#include <avr/io.h>

int main(void)

{
	DDRB=0xFF;
	while(1)
	{
		UBRRL=51;
	UCSRB=0x12;
	UCSRC=0x86;
    while((UCSRA&0x80)==0x00);
	
		PORTB=UDR;
		UCSRA=0X80;
       
	      }
}