void cmd(unsigned int x)
{PORTB=0X00;
PORTD=x;
PORTB |=0X02;
_delay_ms(100);
PORTB=0X00;
}
void dat(unsigned int x)

{PORTB=0X01;
PORTD=x;
PORTB |=0X02;
_delay_ms(100);
PORTB=0X01;
}
void init()
{
cmd(0X38);
cmd(0X06);
cmd(0X0E);
cmd(0X01);
}