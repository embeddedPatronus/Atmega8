/*
 * Security_system.c
 *
 * Created: 7/6/2015 1:45:55 PM
 *  Author: GAURAV SHARMA
 */ 


#include <avr/io.h>
#include <util/delay.h>
#include "lcd.h"

int main(void)

{   int a,j=0;
	
    char beg[20]={'E','N','T','E','R',' ','P','A','S','S','W','O','R','D'};
    char pmatch[8]={'M','A','T','C','H','E','D'};
	char punmatch[10]={'I','N','C','O','R','R','E','C','T'};
    char pwd[]="007";
	DDRB=0XFF;
	DDRC=0XFF;
	
	
	init();
    for(int i=0;i<20;i++)
    {
	dat(beg[i]);	
	}	
	 for(int i=0;pwd[i]!='\0';i++)
	 
	{
		init();
		UBRRL=51;
		UCSRB=0x10;
		UCSRC=0x86;
		while((UCSRA&0x80)==0x00);
       	{
			
		
		dat('*');
		if(UDR!=pwd[i])
		j=1;
		UCSRA=0X80;	
		}		
		
		
				
	}				
		if(j==0)
		{
			for(int i=0;i<8;i++)
			dat(pmatch[i]);
			PORTC|=0x04;
		}
		else
		{    for(int i=0;i<10;i++)
			dat(punmatch[i]);
		}
		
		
				
        
	
	}		
	
	


	


