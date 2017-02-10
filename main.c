#include <avr/io.h>

int main()
{
	DDRB=_BV(PB7); 
	/* DDRE = ~_BV(PE7); */

	PORTE |= _BV(PE7); 
	
	while(1)
	{
		if ( PINE & _BV(PE7) )
		{   
			PORTB &= ~_BV(PE7);
		}	
		else 
		{
			PORTB = 128; 
		}	
	}
}
