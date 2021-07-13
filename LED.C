#include<pic.h>
#define _XTAL_FREQ 4000000



void main()
{
TRISB = 0x00;
PORTB = 0x00;


	while(1)
	{
	
	PORTB =~ PORTB;;
	__delay_ms(3000);

	}

}
