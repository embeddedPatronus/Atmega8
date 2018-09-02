/*
 * ledtest.c
 *
 * Created: 6/22/2015 10:09:09 PM
 *  Author: GAURAV SHARMA
 */ 


// File: led.c
// Description: Simple C program for the ATMEL AVR uC (ATmega16 chip)
// This program lets the user turn on LEDs by pressing the switches on STK500 board
#include <avr/io.h> 
#include<util/delay.h>                        // avr header file for IO ports
int main(void)
{
	
	 // temporary variable
	 // set PORTA for input
	DDRB = 0xFF; // set PORTB for output
		
	
	{
		
		
			// Read input from PORTA.
			// This port will be connected to the 8 switches
			
			// Send output to PORTB.
			// This port will be connected to the 8 LEDs
		
				
			PORTB=0x00;
				
					
		}
		
	
	 // turn ON all LEDs initially
	 
	}	
	
	
		
	
	
	
