#include <stdio.h> 	// printf(), scanf()
#include <stdlib.h>	// srand(), rand()   : 난수, 랜덤수 
#include <time.h> 	// time()

int main()
{
	int minsu = 0, robot = 0, win = 0, lose = 0, game = 5;
	int robot_money = 100, minsu_money = 100, batting = 0;
	
	while(minsu_money>0 && robot_money>0)
	{
		srand(time(0));	
		int number = rand();
		
		if (number % 2 == 0)
			robot = 2;
		else
			robot = 1;
		
		
		printf("배팅 금액을 입력하세요.\n");
		scanf("%d", &batting);
		
		while(batting > minsu_money)
		{
			printf("소지한 금액 %d원 까지만 배팅 가능합니다.\n", minsu_money);
			scanf("%d", &batting);
		}
		
		printf("홀수면 1 짝수면 2 입력하세요.\n");
		scanf("%d", &minsu);
		
		printf("%d\n",number);
		
		if (robot == minsu)
		{
			printf("민수가 이겼다.\n");	
			win++;
			minsu_money += batting;
			robot_money -= batting;
		}
		else
		{
			printf("로봇이 이겼다.\n");	
			lose++;
			minsu_money -= batting;
			robot_money += batting;
		}
		printf("승 : %d\n패 : %d\n",win,lose);
		printf("민수돈 : %d\n로봇돈 : %d\n",minsu_money, robot_money);
		printf("====================\n");
		
		game--;
	}
	
	return 0;
}

/*
int main()
{
	int money_ko = 0;
	int money_dollar1 = 0;
	
	printf("환전할 금액을 입력하세요.\n");
	scanf("%d", &money_ko);
	
	printf("환율을 입력하세요.\n");
	scanf("%d", &money_dollar1);
	
	int dollar100 = money_ko/(money_dollar1*100); // 수식은 () 괄호 사용.
	int money_ko_return = money_ko % (money_dollar1*100);
	
	int dollar10 = money_ko_return/(money_dollar1*10);
	 money_ko_return = money_ko % (money_dollar1*10);
	
	int dollar5 = money_ko_return/(money_dollar1*5);
	money_ko_return = money_ko % (money_dollar1*5);
		
	int dollar1 = money_ko_return/(money_dollar1);
	money_ko_return = money_ko % (money_dollar1);
	
	printf("100달러 지폐는 %d장 입니다.\n", dollar100);
	printf("10달러 지폐는 %d장 입니다.\n", dollar10);
	printf("5달러 지폐는 %d장 입니다.\n", dollar5);
	printf("1달러 지폐는 %d장 입니다.\n", dollar1);
	
	printf("돌려받는 돈은 %d원 입니다.\n", money_ko_return);
	
	
	return 0;
}
*/

/*
int main()
{
	int money_ko = 1000000;
	int money_dollar1 = 1146;
	
	int dollar100 = money_ko/(money_dollar1*100); // 수식은 () 괄호 사용.
	 
	int money_ko_return = money_ko%(money_dollar1*100);
	
	printf("100달러 지폐는 %d장 입니다.\n", dollar100);
	printf("돌려받는 돈은 %d원 입니다.\n", money_ko_return);
	printf("1달러는 %d원 입니다.\n", money_dollar1);
	printf("100달러는 %d원 입니다.\n", money_dollar1*100);
	
	
	return 0;
}
*/


/*
int main()
{
	int minsu = 0, robot = 0, win = 0, lose = 0;
	srand(time(0));
	
	int number = rand();
	
	if (number % 2 == 0)
	{
		robot = 2;
	}
	else
	{
		robot = 1;
	}
	
	printf("홀수면 1 짝수면 2를 입력하세요.\n");
	scanf("%d", &minsu);
	
	printf("%d\n",number);
	
	if (robot == minsu) printf("민수가 이겼다.");
	else printf("로봇이 이겼다.");
	
	return 0;
}
*/

/*
int main()
{
	int a = -2;
	
	if (a)
	{
		printf("참이다\n");
		printf("진짜 참이다\n");
		printf("진짜 진짜 참이다\n");
	}
	else
	{
		printf("거짓이다\n");
		printf("진짜 거짓이다\n");
		printf("진짜 진짜 거짓이다\n");
	}

	return 0;
}
*/

/*
int main()
{
	int a = 0; // 조건문에서 0은 False, 나머지 수는 True 
	
	if (a) printf("콜라\n");	// True
	else printf("사이다\n");	// False
	
	return 0;
}
*/

/*
int main()
{
	int a = 10;
	int b = 20;
	
	if (a != b)	printf("다르다.\n");
	else printf("같다\n");
	
	return 0;
}
*/

/*
int main()
{
	int a = 10;
	int b = 10;
	
	if (a == b)	printf("같다.\n");
	else printf("다르다\n");
	
	return 0;
}
*/

