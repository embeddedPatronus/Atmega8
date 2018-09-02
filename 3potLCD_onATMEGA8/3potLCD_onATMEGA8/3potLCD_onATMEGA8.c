/*
 * pot_onATMEGA8.c
 *
 * Created: 6/30/2015 11:27:38 AM
 *  Author: GAURAV SHARMA
 */ 


#include <avr/io.h>
#include <util/delay.h>
#include "lcd.h"

void adc1()
{   float x;
	int y,z;
	for(int i=0;i<60;i++)
	{cmd(0x01);
		
		for(int j=0;j<60;j++)
		{cmd(0x01);
			for(int k=0;k<60;k++)
			{   
				
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

				dat(':');
				ADMUX=0x01;
				ADCSRA =0xC0;
				while((ADCSRA&(0x10))==0x00);
				x=(ADC*0.005);
				y=(x*100);
				z=(y%100);
				
				digit(x);
				dat('.');
				digit(z);
				ADCSRA=0x10;

				dat(':');
				ADMUX=0x02;
				ADCSRA =0xC0;
				while((ADCSRA&(0x10))==0x00);
				x=(ADC*0.005);
				y=(x*100);
				z=(y%100);
				
				digit(x);
				dat('.');
				digit(z);
				ADCSRA=0x10;

				cmd(0x80);
				cmd(0x0c);
}
		}
	}	
	}		
int main()

{
	
	DDRB=0xFF;
	DDRD=0xFF;
	
	while(1)

{
	init();
	adc1();
	

}
}	
	
		  