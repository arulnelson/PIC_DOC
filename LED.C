#include<pic.h>
#define _XTAL_FREQ 4000000



void main()
{
TRISB = 0x00;
PORTB = 0x00;


	while(1)
	{
	
	PORTB =~ PORTB;;
<<<<<<< HEAD
	__delay_ms(3000);
=======
	__delay_ms(2000);
>>>>>>> 5499599bcd5de62c34ff596514ecf20b723e2cb1

	}

}
