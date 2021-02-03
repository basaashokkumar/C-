#include<stdio.h>
int main()
{
	int a=10,b;
	#if a>12
		printf("less");
		#elif a<=10
		printf("not bad");
		#else
		printf("greater");
		#endif
		
	return 0;
}

