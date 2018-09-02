/*
 * timer_onATMEGA8.c
 *
 * Created: 6/29/2015 11:20:30 AM
 *  Author: GAURAV SHARMA
 */ 


#include <avr/io.h>
#include <util/delay.h>
#include "lcd.h"



int main()
{   
	DDRD=0XFF;
	DDRB=0XFF;
    
	while(1)
    { init();
	  RADO();
	}	
				  
}

void timer()
{
	TCCR0=0x05;
	
	TCNT0=0x30;
while((TIFR&0x01)==0x00);
{
	TIFR=0x01;
}	
}

void delay()
{
	for(int i=0;i<=30;i++)
	timer();
}

int RADO()
{
	for(int i=0;i<60;i++)
	{cmd(0x01);
		
	for(int j=0;j<60;j++)
{cmd(0x01);
for(int k=0;k<60;k++)
{
	digit(i);
	dat(':');
digit(j);
dat(':');
digit(k);
cmd(0x80);
cmd(0x0c);
delay();
}
	}
	}
}	