#include<avr/io.h>
#include<util/delay.h>
int main()
{
int a[12]={ 0X3F, 0X06, 0X5B, 0X4F, 0X66, 0X6D, 0X7D, 0X07, 0X7F, 0X67 };
DDRD=0XFF;
while(1)
{
	for( int i=0; i<12; i++)
	{
		PORTD=a[i];
		_delay_ms(4000);
	}
}
}
