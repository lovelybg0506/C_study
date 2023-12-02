#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int a = 3;
	int b = 5;
	
	while(!((a==10)||(b==10))){
		printf("a = %d, b = %d\n", a, b);
		++a;
		++b;
		
	}
	
	return 0;
}

/*
int main()
{
	int a=3;
	int b=5;
	
	printf("%d\n", ((a==5) && (b==5)));	// 0
	
	printf("%d\n", ((a==5) || (b==5)));
	
	printf("%d\n", !(    (a==5) || (b==5)      )) ;
	
	return 0;
}
*/
/*
int main()
{
	int a=1, b=0;	// a´Â Âü, b´Â °ÅÁş 
	
	printf("%d\n",a&&b);	// 0
	printf("%d\n",a||b);	// 1
	printf("%d\n",!a);		// 0
	printf("%d\n",!b);		// 1
	
	return 0;
}
*/
