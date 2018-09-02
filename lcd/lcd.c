#include<avr/io.h>
#include<util/delay.h>
#include"lcdcmd.h"
int main()
{
char arr[13]={'r','a','d','h','i','k','a',' ','g','u','p','t','a'};
DDRD=0XFF;
DDRB=0XFF;

init();

for(int i=0;i<13;i++)
dat(arr[i]);

}
