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
		printf("�ֻ����� �������� Enter�� ġ����.\n");
		getchar();
		
		srand(time(0));
		int red = rand()%6 +1 ;
		sum += red;
		printf("Ȯ�� sum = %d, red = %d\n", sum, red);
		
		if(sum%3 == 0)
		{
			printf("�ƾ�...��ź�̴�!\n");
			game = 0;
		}
		if (sum>20)
		{
			printf("�̼Ǽ���!!!\n");
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
		printf("�ֻ����� �������� Enter�� ġ����.\n");
		getchar();	// �ѹ��� �޴°�.
		
		srand(time(0));
		red = rand()%6 + 1; // 1~6 ���� �� �߻� 
		blue = rand()%6 + 1;
		
		sum = red + blue;
		
		printf("red : %d   blue : %d, ���� %d \n", red, blue, sum);
		
		if(sum > 9)
		{
			printf("�鸸���ڰ� �Ǿ��׿�...\n");
			break;
		}
		else
			printf("������ �� �� ���ƿ�...���ۿ�\n");

		game--;
		printf("��ȸ�� %d�� ���Ҿ��.\n", game);
		
		if(game == 0)
			printf("�ƾ�...������ �Ǿ����.\n");
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
	
	while(game)	// while ���� 
	{
		printf("1���� 50���� ������ �Է��ϼ���.");
		scanf("%d", &minsu);
		
		if(number > minsu)
			printf("���� �ʺ��� ũ��.\n");
		else if(number < minsu)
			printf("���� �ʺ��� �۴�.\n");
		else
		{
			printf("�̼ǿϷ� !!! ���⼺��...\n");
			break;
		}
		
		game--;
		if (game == 0) 
			printf("����");
		
		printf("%d�� ����...\n", game);
		
	}	// while �� 
	
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
	
	while(game)	// while ���� 
	{
		printf("1���� 10���� ������ �Է��ϼ���.");
		scanf("%d", &minsu);
		
		if(number > minsu)
			printf("���� �ʺ��� ũ��.\n");
		else if(number < minsu)
			printf("���� �ʺ��� �۴�.\n");
		else
		{
			printf("�̼ǿϷ� !!! ���⼺��...\n");
			break;
		}
		
		game--;
		if (game == 0) 
			printf("����");
		
		printf("%d�� ����...\n", game);
		
	}	// while �� 
	
	return 0;
}
*/
