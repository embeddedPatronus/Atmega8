/*
 * gaurav.c
 *
 * Created: 6/25/2015 3:00:33 PM
 *  Author: HP
 */ 



     #include <avr/io.h>
     #include<util/delay.h>
     int main(void)
     {
	     int a[]={0X3F,0X06,0X5B,0X4F,0X66,0X6D,0X7D,0X07,0X7F,0X67};
	     DDRB=0X00;
	     DDRD=0XFF;
	     int i;
	     while(1)
	     {
		   PORTB=0XFE;
		   if((PINB & 0X01)==0X01)
		   {PORTD=a[i];
			   i=i++;
			   while((PINB&0X01)==0X01);
			   
			   }
			 
		 if(i>9)
			 {
				 i=0;
		     }
			 }
	     
		 
		 
	     
	     
	     return 0;
     }