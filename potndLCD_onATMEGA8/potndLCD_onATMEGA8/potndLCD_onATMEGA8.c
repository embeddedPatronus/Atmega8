/*
 * pot_onATMEGA8.c
 *
 * Created: 6/30/2015 11:27:38 AM
 *  Author: GAURAV SHARMA
 */ 


#include <avr/io.h>
#include <util/delay.h>
#include "lcd.h"
void adc()

{float x;
	int y,z;
	    ADMUX=0x00;
	ADCSRA =0xC0;
	while((ADCSRA&(0x10))==0x00);
	x=(ADC*0.005);
	y=(x*100);
	z=(y%100);
	
	digit(x);
	dat('.');
	digit(z);
	ADCSRA=0x10;
	
}

int main()

{
	
	DDRB=0xFF;
	DDRD=0xFF;
	
	while(1)

{
	init();
	adc();
	

}
}	
	
		  