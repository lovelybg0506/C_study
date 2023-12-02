#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <util/LCD.h>


int main(void)
{
	lcd_init();
	int second = 55;
	int minute = 59;
	int hour = 11;
	int AMPM = 1;
	
	
	while (1)
	{
		lcd_position(12,1);
		lcd_write_char(second/10+'0');	// 초
		lcd_write_char(second%10+'0');
		lcd_write_char('S');
		_delay_ms(1000);
		second++;
		if(second >= 60){
			second=0; minute++;
		}
		
		if(minute >= 60){
			minute = 0;
			hour++;
		}
		
		lcd_position(8,1);
		lcd_write_char(minute/10+'0');
		lcd_write_char(minute%10+'0');
		lcd_write_char('M');
		_delay_ms(1000);
		
		
		lcd_position(4,1);
		lcd_write_char(hour/10+'0');
		lcd_write_char(hour%10+'0');
		lcd_write_char('H');
		if(hour >= 13){
			hour = 1;
		}
		
		if ((hour == 12) & (minute == 0) & (second == 0) )
		{
			AMPM++;
			
			if (AMPM >= 2)
			{
				AMPM = 0;
			}
				
		}
		
		lcd_position(1,1);
		if(AMPM) lcd_write_char('P');
		else lcd_write_char('A');
		
		lcd_write_char('M');
		
		
		
	}
	
	return 0;
}


/*
int main(void)
{
	lcd_init();
	
	while (1)
	{
		lcd_position(12,1);
		
		lcd_write_char(4+'0');
		lcd_write_char(65);
		
	}
	return 0;
}
*/

/*
int main(void)
{
	lcd_init();
	
	int second = 58;
	while (1)
	{
		lcd_position(12,1);
		
		if (second >= 60) second = 0;	
		
		lcd_write_char(second/10+'0');
		lcd_write_char(second%10+'0');
		lcd_write_char('S');
		_delay_ms(1000);
		second++;
	}
	
	return 0;
}
*/

/*
int main(void)
{
	lcd_init();	  // lcd 초기화
	
	lcd_write_char('2');		lcd_write_char('0');		lcd_write_char('2');		lcd_write_char('7');	// 2027
	
	lcd_position(5,0);
	lcd_write_char('O');		lcd_write_char('c');		lcd_write_char('t');
	
	lcd_position(9,0);
	lcd_write_char('2');		lcd_write_char('3');
	
	lcd_position(12,0);
	lcd_write_char('S');		lcd_write_char('a');		lcd_write_char('t');

	lcd_position(0,1);
	lcd_write_char('P');		lcd_write_char('M');
	
	lcd_position(4,1);
	lcd_write_char('0');		lcd_write_char('6');		lcd_write_char('H');
	
	lcd_position(8,1);
	lcd_write_char('2');		lcd_write_char('8');		lcd_write_char('M');
	
	lcd_position(12,1);
	lcd_write_char('5');		lcd_write_char('9');		lcd_write_char('S');
	
	return 0;
}
*/

/*
int main(void)
{
	lcd_init();	  // lcd 초기화
	
	lcd_write_char('2');		lcd_write_char('0');		lcd_write_char('2');		lcd_write_char('7');
	
	lcd_position(5,0);
	
	lcd_write_char('O');		lcd_write_char('c');		lcd_write_char('t');
	
	lcd_position(9,0);
	
	lcd_write_char('2');		lcd_write_char('3');
	
	lcd_position(12,0);
	
	lcd_write_char('S');		lcd_write_char('a');		lcd_write_char('t');
	
	
	return 0;
}
*/

/*
int main(void)
{
	lcd_init();	  // lcd 초기화
	lcd_position(3,0);	// 커서 위치 이동
	lcd_write_char('s');	// s 문자 출력
	lcd_write_char('T');	// T 문자 출력
	
	return 0;
}
*/

/*
int main(void)
{
	lcd_init();	  // lcd 초기화
	lcd_write_char('s');	// s 문자 출력
	lcd_write_char('T');	// T 문자 출력
	
	return 0;
}
*/

/*
int main(void)
{
	lcd_init();	  // lcd 초기화
	lcd_write_char('s');	// s 문자 출력
	
	return 0;
}

*/