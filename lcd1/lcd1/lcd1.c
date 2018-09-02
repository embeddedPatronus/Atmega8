#include<avr/io.h>
#include<util/delay.h>
#include"lcd1.h"
int main()
{
	DDRD=0XFF;
	DDRB=0XFF;
	while(1)
	{
		void digit(unsigned int i)
		{
			unsigned int k=1, h;
			h=1;
			while(i>9)
			{
				k=k*10;
				i=i/10;
			}
			while(k>0)
			{
				dat ((h/k)+48);
				h=h%k;
			}
		}
	}
}
