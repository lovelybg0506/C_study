#define F_CPU 16000000UL
#include <util/delay.h>
#include <avr/io.h>

int main(void)
{
	int i = 0;
	
	DDRA = 0xFF;
	DDRB = 0xFF;
	
	unsigned char seg[] = {0x76, 0x5F, 0x54, 0x6E, 0x5F, 0x54, 0x6F,0x80, ,,0x30,0x80};
	
	while (1)
	{

		PORTB = seg[i];
		
		_delay_ms(1000);
		
		i++;
		
		if (i>8) i = 0;
		
	}
	return 0;
}

/*
int main(void)
{
	int i = 0;
	
	DDRA = 0xFF;
	DDRB = 0xFF;
	
	unsigned char seg[] = {0b00111111, 0b00000110, 0b01011011, 0b01001111,
    									0b01100110, 0b01101101, 0b01111101, 0b00100111,
										0b01111111, 0b01101111,0x77,0x7C,0x58,0x5E,0x79,0x71};
	
	while (1)
	{
		PORTA = seg[i];
		PORTB = seg[i];
		
		_delay_ms(2000);
		
		i++;
		
		if (i>15) i = 10;
		
	}
	return 0;
}
*/

/*
int main(void)
{
	int i = 0;
	
	DDRA = 0xFF;
	DDRB = 0xFF;
	
	unsigned char seg[] = {0b00111111, 0b00000110, 0b01011011, 0b01001111,
										0b01100110, 0b01101101, 0b01111101, 0b00100111,
										0b01111111, 0b01101111};
	
	while (1)
	{
		PORTA = seg[i];
		PORTB = seg[i];
		
		_delay_ms(2000);
		
		i++;
		
		if (i>9) i = 0;
		
	}
	return 0;
}
*/

/*
int main(void)
{
	DDRA = 0xFF;
	DDRB = 0xFF;
	
	while (1)
	{				//       pgfedcba				
		PORTA = 0b00111111;
		PORTB = 0b00111111;
		_delay_ms(2000);
		
		PORTA = 0b00000110;
		PORTB = 0b00000110;
		_delay_ms(2000);
		
		PORTA = 0b01011011;
		PORTB = 0b01011011;
		_delay_ms(2000);
		
		PORTA = 0b01001111;
		PORTB = 0b01001111;
		_delay_ms(2000);
		
		PORTA = 0b01100110;
		PORTB = 0b01100110;
		_delay_ms(2000);
		
		PORTA = 0b01101101;
		PORTB = 0b01101101;
		_delay_ms(2000);
		
		PORTA = 0b01111101;
		PORTB = 0b01111101;
		_delay_ms(2000);
		
		PORTA = 0b00100111;
		PORTB = 0b00100111;
		_delay_ms(2000);
		
		PORTA = 0b01111111;
		PORTB = 0b01111111;
		_delay_ms(2000);
		
		PORTA = 0b01101111;
		PORTB = 0b01101111;
		_delay_ms(2000);
	}
	return 0;
}
*/

/*
int main(void)
{
	DDRA = 0xFF;
	DDRB = 0xFF;
	
	int data = 0x01; // 10진수 : 0x01,   2진수 : 0b00000001 
	
	while (1)
	{
		PORTA = data;
		PORTB = data;
		_delay_ms(1000);
		data = data << 1;		// data <<= 1
		
		if (data == 0b100000000)	// 0b100000000 = 0x100
		{
			data = 0b00000001;	// 0b00000001 = 0x01
		}
	}
	
	return 0;
}
*/
/*
int main(void)
{
	DDRA = 0b11111111; // 0xFF
	DDRB = 0b11111111; // 0xFF
	
	
	while (1)
	{
		PORTA = 0b00000001;	// 0x01
		PORTB = 0b00000001;  // 0x01
		_delay_ms(3000);
				
		PORTA = 0b00000010;	// 0x01
		PORTB = 0b00000010;  // 0x01
		_delay_ms(3000);
		
		PORTA = 0b00000100;	// 0x01
		PORTB = 0b00000100;  // 0x01
		_delay_ms(3000);
		
		PORTA = 0b00001000;	// 0x02
		PORTB = 0b00001000;  // 0x02
		_delay_ms(3000);
		
		PORTA = 0b00010000;	// 0x04
		PORTB = 0b00010000;  // 0x01
		_delay_ms(3000);
		
		PORTA = 0b00100000;	// 0x01
		PORTB = 0b00100000;  // 0x01
		_delay_ms(3000);
		
		PORTA = 0b01000000;	// 0x01
		PORTB = 0b01000000;  // 0x01
		_delay_ms(3000);
		
		PORTA = 0b10000000;	// 0x01
		PORTB = 0b10000000;  // 0x01
		_delay_ms(3000);
	}
	
	return 0;
}
*/

/*
int main(void)
{
    DDRA = 0b11111111; // 0xFF
	DDRB = 0b11111111; // 0xFF
	
	
    while (1) 
    {
		PORTA = 0b00000001;	// 0x01
		PORTB = 0b00000001;  // 0x01
    }
	
	return 0;
}
*/
