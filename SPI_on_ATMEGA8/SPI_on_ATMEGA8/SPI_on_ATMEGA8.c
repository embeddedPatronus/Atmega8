/*
 * SPI_on_ATMEGA8.c
 *
 * Created: 7/2/2015 11:00:25 AM
 *  Author: GAURAV SHARMA
 */ 


#include <avr/io.h>

int main(void)

{  DDRB=0xFF;
	

	  
	SPCR=0x50;   
   
   while((SPSR)&(0x80)==0x00);
    
   SPDR=0xA4;	
   SPSR|=0x80;

}
