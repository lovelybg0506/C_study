#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <util/LCD.h>
#include <stdlib.h>

int main(void)
{
	lcd_init();
	int year = 2028; int month = 1; int date = 30; int total_date = 0; int i = 0;
	int second = 0; int minute = 0; int hour = 11; int ampm = 1;
	
	char *month_table[] = {"000","JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
	char *day_table[] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
	
	int month_date_table[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	
	while (1)
	{
		// 초 (second)
		lcd_position(12,1);
		lcd_write_char(second/10+'0'); lcd_write_char(second%10+'0');
		
		// 분 (minute)
		lcd_position(8,1);
		lcd_write_char(minute/10+'0'); lcd_write_char(minute%10+'0');
		
		// 시 (hour)
		lcd_position(4,1);
		lcd_write_char(hour/10+'0'); lcd_write_char(hour%10+'0');
		
		_delay_ms(1000); 
		second++;
		
		/* 하나씩 잘 되는지 테스트
		//minute++;
		//hour++;
		//date++;
		//month++;
		*/
		
		if(second >= 60) {second = 0; minute++;}
		if(minute >= 60) {minute = 0; hour++;}
			
		if(hour >= 13) hour = 1;
		
		if ((hour==12) && (minute == 0) && (second == 0) ){
			ampm++;
		}
		
		// 자정이되면, 일자 ++
		if(ampm == 2) {
			ampm = 0;
			date++;
		}
		
		// 월++
		if(date >month_date_table[month]){
			date =1;
			month++;
		}
		
		// 년도++
		if (month >= 13){
			month =1;
			year++;
		}
		
		// 윤년처리 (2월29일)
		if ( (year%4==0) && (year%100)!=0 || (year%400==0) ) // 윤년이면
		month_date_table[2] = 29;												// 2월의 총 일수를 29일로 바꾼다.
		
		lcd_position(1,1);
		
		if(ampm) lcd_write_char('P');
		else lcd_write_char('A');
		
		lcd_position(2,1); lcd_write_char('M');
		
		lcd_position(1,0);
		lcd_write_char(year/1000+'0');
		lcd_write_char((year/100)%10+'0');
		lcd_write_char((year/10)%10+'0');
		lcd_write_char(year%10+'0');
		lcd_display_string(6,0,month_table[month]);
		
		lcd_position(10,0);
		lcd_write_char(date/10+'0');
		lcd_write_char(date%10+'0');
		
		total_date = (year-1) + (year-1)/4 - (year-1)/100 + (year-1)/400 + date;
		
		for(i=1; i<month; i++)
		{
			total_date += month_date_table[i];
		}
		
		lcd_display_string(13,0,day_table[total_date%7]);
		
	}
	
	return 0;
}
/*
int main(void)
{
	lcd_init();
	int year = 2027; int month = 4; int date = 30; int total_date = 0; int i = 0;
	int second = 55; int minute = 59; int hour = 11; int ampm = 1;
	
	char *month_table[] = {"000","JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
	char *day_table[] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
	
	int month_date_table[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	
	if ( (year%4==0) && (year%100)!=0 || (year%400==0) ) // 윤년이면
	month_date_table[2] = 29;												// 2월의 총 일수를 29일로 바꾼다.
	
	while (1)
	{
		lcd_position(12,1);
		lcd_write_char(second/10+'0'); lcd_write_char(second%10+'0');
		
		_delay_ms(1000); second++;
		
		lcd_position(1,0);
		lcd_write_char(year/1000+'0');
		lcd_write_char((year/100)%10+'0');
		lcd_write_char((year/10)%10+'0');
		lcd_write_char(year%10+'0');
		lcd_display_string(6,0,month_table[month]);
		
		lcd_position(10,0);
		lcd_write_char(date/10+'0');
		lcd_write_char(date%10+'0');
		
		total_date = (year-1) + (year-1)/4 - (year-1)/100 + (year-1)/400 + date;
		
		for(i=1; i<month; i++)
		{
			total_date += month_date_table[i];
		}
		
		lcd_display_string(13,0,day_table[total_date%7]);
		
		_delay_ms(2000);
	}
	
	return 0;
}
*/