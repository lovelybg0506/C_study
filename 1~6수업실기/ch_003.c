#include <stdio.h>
// 0x : 16������ �ǹ� 
// 0b : 2������ �ǹ� 
// 0 : 8������ �ǹ� 

// %o : 8���� 
// %x : 16���� �ҹ��� 
// %X : 16���� �빮�� 
// %d : 10���� ����

int main()
{
	char num1 = 5;
	
	printf("%c%c%c\n", num1+'0', '\t', num1+48); // '0' �ƽ�Ű�ڵ� = 48 
	
	/*
	char munja1 = 'H';
	char munja2 = '\t';
	char munja3 = 'A';
	char munja4 = '\n';
	char munja5 = 'N';
	
	
	printf("%c%c%c%c%c\n", munja1, munja2, munja3, munja4, munja5);
	printf("============================\n");
	printf("%d %d %d %d %d\n", munja1, munja2, munja3, munja4, munja5);
	
	return 0;
	*/
}

/*
int main()
{
	char munja = 'a';
	
	
	printf("%d %c\n", munja, munja+3); // ���ڷ� ���� 
	
}
*/
/*
int main()
{
	int a = 10, r = 1;
	
	//r = ++a;	// ++a : ������ / a++ : ������ 
	r = a++;
	
	printf("a = %d\n", a);
	printf("r = %d\n", r);
	
	return 0;
}
*/
/*
int main()
{	
	int a = 10, b = 3;
	
	printf("%d\n", a+b);
	printf("%d\n", a-b);
	printf("%d\n", a*b);
	printf("%d\n", a/b);
	printf("%d\n", a%b);
	
	return 0;
} 
*/

/*
int main()
{
	int score;
	
	printf("������ �Է��ϼ���.");
	scanf("%d", &score);	// & : �ּҿ�����        [scanf] : Ű����κ��� �Է��� ��ٸ�. 
	
	printf("����� ������ %d �Դϴ�.\n", score);
	printf("socre�� �ּҴ� %X �Դϴ�.", &score);
	
	return 0;
} 
*/
 
/*
int main ()
{
	printf("%X %x\n", 235, 235); // 235�� 16���� �빮�ڿ� �ҹ��ڷ� ��� 
	
	return 0;
}
*/

/*
int main ()
{
	printf("%o\n", 0b100111100); // 474
	
	return 0;
}
*/
/*
int main()
{
	printf("%o\n", 156); // 10���� 156�� 8������ ��ȯ 
	
	return 0;
}
*/

 

/*
int main ()
{
	printf("%o\n", 0xA4d); // 5115
}
*/

