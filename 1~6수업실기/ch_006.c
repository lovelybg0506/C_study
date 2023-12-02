#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int red = 0;
	int sum = 0;
	int game = 1;
	
	while(game)
	{
		printf("주사위를 던지려면 Enter를 치세요.\n");
		getchar();
		
		srand(time(0));
		int red = rand()%6 +1 ;
		sum += red;
		printf("확인 sum = %d, red = %d\n", sum, red);
		
		if(sum%3 == 0)
		{
			printf("아악...폭탄이다!\n");
			game = 0;
		}
		if (sum>20)
		{
			printf("미션성공!!!\n");
			break;
		}
	}
	
	return 0;
} 

/*
int main()
{
	int game = 5;
	int red = 0;
	int blue = 0;
	int sum = 0;
	
	while(game)
	{
		printf("주사위를 던지려면 Enter를 치세요.\n");
		getchar();	// 한문자 받는것.
		
		srand(time(0));
		red = rand()%6 + 1; // 1~6 랜덤 수 발생 
		blue = rand()%6 + 1;
		
		sum = red + blue;
		
		printf("red : %d   blue : %d, 합은 %d \n", red, blue, sum);
		
		if(sum > 9)
		{
			printf("백만장자가 되었네요...\n");
			break;
		}
		else
			printf("거지가 될 것 같아요...슬퍼요\n");

		game--;
		printf("기회는 %d번 남았어요.\n", game);
		
		if(game == 0)
			printf("아악...거지가 되었어요.\n");
	}
	
	return 0;
}
*/
/*
int main()
{
	int minsu = 0;
	int game = 10;
	
	srand(time(0));
	int number = rand()%50 + 1;	// 1,2,3...50
	
	while(game)	// while 시작 
	{
		printf("1부터 50까지 정수를 입력하세요.");
		scanf("%d", &minsu);
		
		if(number > minsu)
			printf("컴이 너보다 크다.\n");
		else if(number < minsu)
			printf("컴이 너보다 작다.\n");
		else
		{
			printf("미션완료 !!! 구출성공...\n");
			break;
		}
		
		game--;
		if (game == 0) 
			printf("실패");
		
		printf("%d번 남음...\n", game);
		
	}	// while 끝 
	
	return 0;
}
*/
/*
int main()
{
	int minsu = 0;
	int game = 4;
	
	srand(time(0));
	int number = rand()%10 + 1;	// 1,2,3,4,5,6,7,8,9,10
	
	while(game)	// while 시작 
	{
		printf("1부터 10까지 정수를 입력하세요.");
		scanf("%d", &minsu);
		
		if(number > minsu)
			printf("컴이 너보다 크다.\n");
		else if(number < minsu)
			printf("컴이 너보다 작다.\n");
		else
		{
			printf("미션완료 !!! 구출성공...\n");
			break;
		}
		
		game--;
		if (game == 0) 
			printf("실패");
		
		printf("%d번 남음...\n", game);
		
	}	// while 끝 
	
	return 0;
}
*/
