#include <stdio.h>
// 0x : 16진수를 의미 
// 0b : 2진수를 의미 
// 0 : 8진수를 의미 

// %o : 8진수 
// %x : 16진수 소문자 
// %X : 16진수 대문자 
// %d : 10진수 정수

int main()
{
	char num1 = 5;
	
	printf("%c%c%c\n", num1+'0', '\t', num1+48); // '0' 아스키코드 = 48 
	
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
	
	
	printf("%d %c\n", munja, munja+3); // 문자로 연산 
	
}
*/
/*
int main()
{
	int a = 10, r = 1;
	
	//r = ++a;	// ++a : 선증가 / a++ : 후증가 
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
	
	printf("점수를 입력하세요.");
	scanf("%d", &score);	// & : 주소연산자        [scanf] : 키보드로부터 입력을 기다림. 
	
	printf("당신의 점수는 %d 입니다.\n", score);
	printf("socre의 주소는 %X 입니다.", &score);
	
	return 0;
} 
*/
 
/*
int main ()
{
	printf("%X %x\n", 235, 235); // 235를 16진수 대문자와 소문자로 출력 
	
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
	printf("%o\n", 156); // 10진수 156을 8진수로 변환 
	
	return 0;
}
*/

 

/*
int main ()
{
	printf("%o\n", 0xA4d); // 5115
}
*/

