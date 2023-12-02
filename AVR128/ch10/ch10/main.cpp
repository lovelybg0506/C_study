#define F_CPU 16000000UL
#include <avr/io.h>
#include<util/delay.h>

int main(void)
{
	DDRA = 0xFF;
	
	int value = 0x03;
	int direction = 1;
	
	while (1)
	{
		if(direction) {
			PORTA = ~value;
			_delay_ms(500);
			
			value <<=1;
			
			if (value == 0x180){
				value = 0x60;
				direction = 0;
			}
			}else{
			PORTA = ~value;
			_delay_ms(500);
			
			value >>=1;
			
			if(value == 0x01){
				value = 0x06;
				direction = 1;
			}
		}
	}
	
}

/*
#define F_CPU 16000000UL
#include <avr/io.h>
#include<util/delay.h>

int main(void)
{
	DDRA = 0xFF;
	
	int value = 0x01;
	int direction = 1; // direction : 방향 (1 = 위에서 아래, 0 = 아래에서 위)
	
	while (1)
	{
		if(direction) {
			PORTA = ~value;
			_delay_ms(500);
			
			value <<=1;
			
			if (value == 0x100){
				value = 0x40;	
				direction = 0;	
			}
		}else{
			PORTA = ~value;
			_delay_ms(500);
			
			value >>=1;
			
			if(value == 0x00){
				value = 0x02;
				direction = 1;
			}
		}
	}
	
}
*/
/*
#define F_CPU 16000000UL
#include <avr/io.h>
#include<util/delay.h>

int main(void)
{
	DDRA = 0xFF;
	
	int value = 0x01;
	
	while (1)
	{
		PORTA = ~value;
		_delay_ms(500);
		value <<=1;
		if (value == 0x100)
			value = 0x01;
	}
}
*/
/*
#define F_CPU 16000000UL
#include <avr/io.h>
#include<util/delay.h>

int main(void)
{
	DDRA = 0xFF;
	int i = 0;
	
	// unsigned 쓰는이유 : 양의정수만 쓰기위해서 (안쓰면 -127~126
	unsigned char ledtable[] = {0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80,
											    0x40,0x020,0x10,0x08,0x04,0x02,
												0xff,0x11,0xaa,0x55,0xf0,0x0f};
	while (1)
	{
		for (i=0; i<20;i++)
		{
			PORTA = ~ledtable[i];
			_delay_ms(500);
		}
	}
}
*/

/*
#define F_CPU 16000000UL
#include <avr/io.h>
#include<util/delay.h>

int main(void)
{
	DDRA = 0xFF; // DDRA = 0b11111111, DDRA = 255
		
	while ()
	{
		PORTA = ~0xaa;		_delay_ms(2000);
		PORTA = ~0x55;		_delay_ms(2000);
		PORTA = ~0xFF;	_delay_ms(2000);
		PORTA = ~0x99;		_delay_ms(2000);
	}
}
*/

/*
#define F_CPU 16000000UL
#include <avr/io.h>
#include<util/delay.h>

int main(void)
{
	DDRA = 0xFF; // DDRA = 0b11111111, DDRA = 255
	
	int i = 0;
	
	while (1)
	{
		for (i=0; i<256; i++)
		{
			PORTA = ~i;	// ~ = not
			_delay_ms(500);
		}
	}
}
*/
/*
#include <avr/io.h>
#include<util/delay.h>

int main(void)
{
	DDRA = 0xFF; // DDRA = 0b11111111, DDRA = 255
	while (1)
	{
		PORTA = 0x01; // 0b00000001
		_delay_ms(2000);
		
		PORTA = 0x02; // 0b00000010
		_delay_ms(2000);

		PORTA = 0x04; // 0b00000100
		_delay_ms(2000);
		
		PORTA = 0x08; // 0b00001000
		_delay_ms(2000);

		PORTA = 0x0B; // 0b00001011
		_delay_ms(2000);
	}
}
*/

/*

#define F_CPU 16000000UL

#include <avr/io.h>
#include<util/delay.h>

int main(void)
{
    DDRA = 0xFF; // DDRA = 0b11111111, DDRA = 255
    while (1) 
    {
		PORTA = 0x01; // 0b00000001
		_delay_ms(1000);	// 1초 딜레이
		
		PORTA = 0x02; // 0b00000010
		_delay_ms(1000);	// 1초 딜레이

    }
}

*/