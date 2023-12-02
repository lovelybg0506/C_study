#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// %p : 주소를 16진수로 표시하는 서식문자
// << 왼쪽 : 2를 곱한 것과 같은 결과
// >> 오른쪽 : 2를 나눈 몫이 됨
// == : 같다
// != : 다르다
// 0 : 거짓
// 0이아닌 모든것 : 참


int main()
{
	srand(time(0));
	
	int robot_num = rand();
	int robot = robot_num %2;
	
	printf("robot : %d\n", robot); 
	
	int minsu = 0;
	printf("홀수면 1, 짝수면 2를 입력하세요.");
	scanf("%d", &minsu);
	
	printf("로봇이 만들어낸 수 %d: \n", robot_num);
	
	if (robot % 2 == minsu%2)
	{
		printf("민수 승\n");
	}
	else
	{
		printf("로봇 승\n");
	}
}

/*
int main()
{
	int money;
	printf("금액을 입력하세요");
	scanf("%d", &money);
	
	int m_50000 = money/50000;
	money = money%50000;
	printf("5만원 %d장 \n", m_50000);
	printf("5만원 뺀 나머지 돈 %d 원 \n", money);
	
	int m_10000 = money/10000;
	money = money%10000;
	printf("만원 %d장 \n", m_10000);
	printf("만원 뺀 나머지 돈 %d 원 \n", money);
	
	int m_5000 = money/5000;
	money = money%5000;
	printf("오천원 %d장 \n", m_5000);
	printf("오천원 뺀 나머지 돈 %d 원 \n", money);
	
	int m_1000 = money/1000;
	money = money%1000;
	printf("천원 %d장 \n", m_1000);
	printf("천원 뺀 나머지 돈 %d 원 \n", money);
	
	
}
*/

/*
int main()
{
	int a = 10;
	int b = 0;
	
	if (a=b)	// if 에서 0은 False , 1은 True 
		printf("같다.\n");
	else
		printf("다르다.\n");
		
	
}
*/

/*
int main()	// 2로 n번 나눔 (몫만 값이됨.) 
{
	printf("%d\n", 25>>0);	// 5
	printf("%d\n", 25>>1);	// 2
	printf("%d\n", 25>>2);	// 1
	printf("%d\n", 25>>3);	// 0
	printf("%d\n", 25>>4);	// 0
}
*/

/*
int main() // 몫에 2를 n번 곱함 
{
	printf("%d\n", 5<<0);	// 5
	printf("%d\n", 5<<1);	// 10
	printf("%d\n", 5<<2);	// 20
	printf("%d\n", 5<<3);	// 40
	printf("%d\n", 10<<3);	// 80  10*2=20  20*2=40  40*2=80
}
*/
/*
int main()
{
	int a = 10;
	int b = 20;
	
	printf("a = %d , b = %d\n", a , b);	// d : 10진수 
	printf("a = %X , b = %x\n", a , b); // X,x : 16진수 
	printf("&a = %p , &b = %p", &a , &b); // & : 주소 값 
}
*/
