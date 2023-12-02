#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRA = 0b11111111;
	while(1){
		PORTA = 0b11110000; // 0이 켜짐 , 1이 꺼짐
		_delay_ms(1000); // 1초 지연
		PORTA = 0b00001111;
		_delay_ms(1000); // 1초 지연
		PORTA = 0b10101010; // 0이 켜짐 , 1이 꺼짐
		_delay_ms(1000); // 1초 지연
		PORTA = 0b01010101;
		_delay_ms(1000); // 1초 지연
		PORTA = 0b11001100; // 0이 켜짐 , 1이 꺼짐
		_delay_ms(1000); // 1초 지연
		PORTA = 0b00110011;
		_delay_ms(1000); // 1초 지연
	}
	
	
	return 0;
}


/*
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRA = 0b11111111;
	while(1){
		PORTA = 0b11110000;
		_delay_ms(1000); // 1초 지연
		PORTA = 0b00001111;	
		_delay_ms(1000); // 1초 지연
	}
	
	
	return 0;
}
*/

/*
#include <avr/io.h>


int main(void)
{
	DDRA = 0b11111111;
	PORTA = 0b11111110;
	
	return 0;
}

*/