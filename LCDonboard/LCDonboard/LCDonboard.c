#include<avr/io.h>
#include<util/delay.h>
#include"lcd.h"
int main()
{
char arr[13]={'B','O','B',' ','D','Y','L','A','N'};
DDRD=0XFF;
DDRB=0XFF;

init();

for(int i=0;i<10;i++)
dat(arr[i]);

}
