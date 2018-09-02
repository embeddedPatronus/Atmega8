void cmd(unsigned int x)
{PORTD=0X00;
PORTB=x;
PORTD |=0X02;
_delay_ms(100);
PORTD=0X00;
}
void dat(unsigned int x)

{PORTD=0X01;
PORTB=x;
PORTD |=0X02;
_delay_ms(100);
PORTD=0X01;
}
void init()
{
cmd(0X38);
cmd(0X06);
cmd(0X0E);
cmd(0X01);
}