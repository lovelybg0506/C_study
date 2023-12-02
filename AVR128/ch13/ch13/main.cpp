#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <util/LCD.h>
#include <stdlib.h>

int main(void)
{
	lcd_init();
	int year = 2028;
	char *month_table[] = {"000","JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
	char *day_table[] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
	
	int month_date_table[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	
	if ( (year%4==0) && (year%100)!=0 || (year%400==0) ) // 윤년이면
		month_date_table[2] = 29;												// 2월의 총 일수를 29일로 바꾼다.
		
	int month = 4; int date =15; int total_date = 0; int i = 0;
	
	while (1)
	{
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

/*
int main(void)
{
	lcd_init();
	int year = 2027;
	char *month_table[] = {"000","JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
	char *day_table[] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
	
	int month_date_table[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int month = 12; int date =30; int total_date = 0; int i = 0;
	
	while (1)
	{
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

/*
int main(void)
{
	lcd_init();
	int year = 2027;
	char *month_table[] = {"000","JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
	char *day_table[] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
	int month = 1; int date = 1; int total_date = 0;
	
	while (1)
	{
		lcd_position(1,0);
		lcd_write_char(year/1000+'0');
		lcd_write_char((year/100)%10+'0');
		lcd_write_char((year/10)%10+'0');
		lcd_write_char(year%10+'0');
		lcd_display_string(6,0,month_table[month]);
		
		
		if( (year%4 == 0) && (year%100 != 0) || (year%400 == 0) ) // 윤년
		{
			lcd_display_string(0,1, "is leap year    "); // leap year : 윤년
		}
		else
		{
			lcd_display_string(0,1, "isn't leap year");
		}
		
		
		
		lcd_position(1,1);
		lcd_write_char(month/10+'0');
		lcd_write_char(month%10+'0');
		
		
		lcd_position(10,0);
		lcd_write_char(date/10+'0');
		lcd_write_char(date%10+'0');
		
		total_date = (year-1) + (year-1)/4 - (year-1)/100 + (year-1)/400 + date;
		
		lcd_display_string(13,0,day_table[total_date%7]);
		
		_delay_ms(2000);
	}
	
	return 0;
}
*/
