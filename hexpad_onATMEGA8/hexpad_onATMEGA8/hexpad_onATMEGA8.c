/*
 * hexpad_onATMEGA8.c
 *
 * Created: 7/9/2015 3:33:49 PM
 *  Author: GAURAV SHARMA
 */ 


#include <avr/io.h>
#include <util/delay.h>
#include "lcd.h"

int main(void)
{   
	init();
	DDRD=0xFF;
	DDRB=0xFF;
	check1();
	

	}

void check1()
{ while(1)
	{
	  DDRC=0x10;
	  PORTC=0xEF;
	
	  checkrowA();
	  checkrowB();
	  checkrowC();
	  checkrowD();
	}	
}
void check2()
{	
	 DDRC=0x20;
	 PORTC=0xDF;
	  checkrowA();
	  checkrowB();
	  checkrowC();
	  checkrowD();
}	


	  void checkrowA()
	  {
		  
	  if(PINC0==0)
	  {
		  init();
		  dat('1');
	  }
	  }
	  void checkrowB()
	  {
		  
	   if(PINC1==0)
	  {
		  
		  dat('4');
	  }
	  }	  
	  void checkrowC()
	  {
	   if(PINC2==0)
	  {
		  
		  dat('7');
	  }
	  }	  
	  
	  void checkrowD()
	 {
		   if(PINC3==0)
	  {
		  
		  dat('*');
	  }
	 	  
	  }
 
 