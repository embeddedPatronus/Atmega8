#include <avr/io.h>
#include <avr/interrupt.h>
volatile uint8_t count;
void main()
{
	
	TCCR0|=(1<<CS02);       // Prescaler=FCPU/256
	TIMSK|=(1<<TOIE0);     // Enable Overflow Interrupt
	TCNT0=0;               // Initialize Counter
	count=0;               // Initialize variable
	DDRB=0xFF;
	sei();  
    PORTB=0xFF;               //Enable Global Interrupts
    ISR(TIMER0_OVF_vect);
}	
		ISR(TIMER0_OVF_vect)   //This is the interrupt service routine for TIMER0 OVERFLOW Interrupt
		{
			while(1)              //Infinite Loop
			{
				                      //CPU calls automatically calls this when TIMER0 overflows.
			count++ ;          //Increment the variable
			if(count==4)
			{
				PORTB=~(PORTB); // Invert the value of PORTB
				count=0;
			}
			
		}
	
	}



