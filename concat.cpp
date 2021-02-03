#include<stdio.h>
#include<string.h>
int main()
{
	char name1[10],name2[10];
	int l1=0,l2=0;
	scanf("%s",&name1);
	l1=strlen(name1);
	printf("%s  %d\n",name1,l1);
	scanf("%s",&name2);
	l2=strlen(name2);
	printf("%s	%d",name2,l2);
	
	printf("%s",strcat(name1,name2)'l');
	return 0;
}
