#include <stdio.h> 	// printf(), scanf()
#include <stdlib.h>	// srand(), rand()   : ����, ������ 
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
		
		
		printf("���� �ݾ��� �Է��ϼ���.\n");
		scanf("%d", &batting);
		
		while(batting > minsu_money)
		{
			printf("������ �ݾ� %d�� ������ ���� �����մϴ�.\n", minsu_money);
			scanf("%d", &batting);
		}
		
		printf("Ȧ���� 1 ¦���� 2 �Է��ϼ���.\n");
		scanf("%d", &minsu);
		
		printf("%d\n",number);
		
		if (robot == minsu)
		{
			printf("�μ��� �̰��.\n");	
			win++;
			minsu_money += batting;
			robot_money -= batting;
		}
		else
		{
			printf("�κ��� �̰��.\n");	
			lose++;
			minsu_money -= batting;
			robot_money += batting;
		}
		printf("�� : %d\n�� : %d\n",win,lose);
		printf("�μ��� : %d\n�κ��� : %d\n",minsu_money, robot_money);
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
	
	printf("ȯ���� �ݾ��� �Է��ϼ���.\n");
	scanf("%d", &money_ko);
	
	printf("ȯ���� �Է��ϼ���.\n");
	scanf("%d", &money_dollar1);
	
	int dollar100 = money_ko/(money_dollar1*100); // ������ () ��ȣ ���.
	int money_ko_return = money_ko % (money_dollar1*100);
	
	int dollar10 = money_ko_return/(money_dollar1*10);
	 money_ko_return = money_ko % (money_dollar1*10);
	
	int dollar5 = money_ko_return/(money_dollar1*5);
	money_ko_return = money_ko % (money_dollar1*5);
		
	int dollar1 = money_ko_return/(money_dollar1);
	money_ko_return = money_ko % (money_dollar1);
	
	printf("100�޷� ����� %d�� �Դϴ�.\n", dollar100);
	printf("10�޷� ����� %d�� �Դϴ�.\n", dollar10);
	printf("5�޷� ����� %d�� �Դϴ�.\n", dollar5);
	printf("1�޷� ����� %d�� �Դϴ�.\n", dollar1);
	
	printf("�����޴� ���� %d�� �Դϴ�.\n", money_ko_return);
	
	
	return 0;
}
*/

/*
int main()
{
	int money_ko = 1000000;
	int money_dollar1 = 1146;
	
	int dollar100 = money_ko/(money_dollar1*100); // ������ () ��ȣ ���.
	 
	int money_ko_return = money_ko%(money_dollar1*100);
	
	printf("100�޷� ����� %d�� �Դϴ�.\n", dollar100);
	printf("�����޴� ���� %d�� �Դϴ�.\n", money_ko_return);
	printf("1�޷��� %d�� �Դϴ�.\n", money_dollar1);
	printf("100�޷��� %d�� �Դϴ�.\n", money_dollar1*100);
	
	
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
	
	printf("Ȧ���� 1 ¦���� 2�� �Է��ϼ���.\n");
	scanf("%d", &minsu);
	
	printf("%d\n",number);
	
	if (robot == minsu) printf("�μ��� �̰��.");
	else printf("�κ��� �̰��.");
	
	return 0;
}
*/

/*
int main()
{
	int a = -2;
	
	if (a)
	{
		printf("���̴�\n");
		printf("��¥ ���̴�\n");
		printf("��¥ ��¥ ���̴�\n");
	}
	else
	{
		printf("�����̴�\n");
		printf("��¥ �����̴�\n");
		printf("��¥ ��¥ �����̴�\n");
	}

	return 0;
}
*/

/*
int main()
{
	int a = 0; // ���ǹ����� 0�� False, ������ ���� True 
	
	if (a) printf("�ݶ�\n");	// True
	else printf("���̴�\n");	// False
	
	return 0;
}
*/

/*
int main()
{
	int a = 10;
	int b = 20;
	
	if (a != b)	printf("�ٸ���.\n");
	else printf("����\n");
	
	return 0;
}
*/

/*
int main()
{
	int a = 10;
	int b = 10;
	
	if (a == b)	printf("����.\n");
	else printf("�ٸ���\n");
	
	return 0;
}
*/

