void cmd(unsigned int x)
{
PORTC=0X00;
PORTB=x;
PORTC |=0X02;
_delay_ms(100);
PORTC=0X00;
}
void dat(unsigned int x)

{PORTC=0X01;
PORTB=x;
PORTC |=0X02;
_delay_ms(100);
PORTC=0X01;
}
void init()
{
cmd(0X38);   // display content in two line in 5x7 matrix
cmd(0X06);   // entry mode
cmd(0X0E);   // Making the cursor on and also display on
cmd(0X01);   // Clearing the complete display including RAM DATA

}

void digit(unsigned int i)
{
	unsigned int h=i;
	unsigned int k=1;
	
	while(i>9)
	{
		k=k*10;
		i=i/10;
	}
	while(k>0)
	{
		dat((h/k)+48);
	    h=h%k;
		k=k/10;
	}		
	}		
	
