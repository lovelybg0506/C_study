#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// %p : �ּҸ� 16������ ǥ���ϴ� ���Ĺ���
// << ���� : 2�� ���� �Ͱ� ���� ���
// >> ������ : 2�� ���� ���� ��
// == : ����
// != : �ٸ���
// 0 : ����
// 0�̾ƴ� ���� : ��


int main()
{
	srand(time(0));
	
	int robot_num = rand();
	int robot = robot_num %2;
	
	printf("robot : %d\n", robot); 
	
	int minsu = 0;
	printf("Ȧ���� 1, ¦���� 2�� �Է��ϼ���.");
	scanf("%d", &minsu);
	
	printf("�κ��� ���� �� %d: \n", robot_num);
	
	if (robot % 2 == minsu%2)
	{
		printf("�μ� ��\n");
	}
	else
	{
		printf("�κ� ��\n");
	}
}

/*
int main()
{
	int money;
	printf("�ݾ��� �Է��ϼ���");
	scanf("%d", &money);
	
	int m_50000 = money/50000;
	money = money%50000;
	printf("5���� %d�� \n", m_50000);
	printf("5���� �� ������ �� %d �� \n", money);
	
	int m_10000 = money/10000;
	money = money%10000;
	printf("���� %d�� \n", m_10000);
	printf("���� �� ������ �� %d �� \n", money);
	
	int m_5000 = money/5000;
	money = money%5000;
	printf("��õ�� %d�� \n", m_5000);
	printf("��õ�� �� ������ �� %d �� \n", money);
	
	int m_1000 = money/1000;
	money = money%1000;
	printf("õ�� %d�� \n", m_1000);
	printf("õ�� �� ������ �� %d �� \n", money);
	
	
}
*/

/*
int main()
{
	int a = 10;
	int b = 0;
	
	if (a=b)	// if ���� 0�� False , 1�� True 
		printf("����.\n");
	else
		printf("�ٸ���.\n");
		
	
}
*/

/*
int main()	// 2�� n�� ���� (�� ���̵�.) 
{
	printf("%d\n", 25>>0);	// 5
	printf("%d\n", 25>>1);	// 2
	printf("%d\n", 25>>2);	// 1
	printf("%d\n", 25>>3);	// 0
	printf("%d\n", 25>>4);	// 0
}
*/

/*
int main() // �� 2�� n�� ���� 
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
	
	printf("a = %d , b = %d\n", a , b);	// d : 10���� 
	printf("a = %X , b = %x\n", a , b); // X,x : 16���� 
	printf("&a = %p , &b = %p", &a , &b); // & : �ּ� �� 
}
*/
