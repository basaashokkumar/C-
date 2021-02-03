#include<stdio.h>
void modify(int * ,int*);
int main()
{
	int a=10,b=9;
	printf("%d %d",a,b);
	modify(&a,&b);
	printf("\n%d %d",a+1,b+1);
	return 0;
}
void modify(int *x ,int* y)
{
	printf("\n%d %d",*x,*y);
	*x=123;
	*y=12;
	printf("\n%d %d",*x,*y);
}
