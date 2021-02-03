#include<stdio.h>
int main()
{
	int x,y,i;
	printf("enter the values of x and y");
	scanf("%d %d",&x,&y);
	while(x){
		x--;
		y++;
	}
	printf("\nthe summation is %d",y);
	return 0;
}
