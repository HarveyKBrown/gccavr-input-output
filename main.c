#include <avr/io.h>

int main()
{
	DDRB=_BV(PB7); 
	/* DDRE = ~_BV(PE7); Implicitly an input by default */

	PORTE |= _BV(PE7); /* Pullup */
	
	while(1)
	{
		if ( (PINE & _BV(PE7)) == 0 ) /* If E7 is active ie. > 0 */
			PORTB = 128;  /* LED On */	
		else 
			PORTB &= ~_BV(PE7); /* LED Off */
	}
}
