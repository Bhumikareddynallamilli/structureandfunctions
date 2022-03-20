#include<stdio.h>
int add(int a,int b)
{
	int c=a+b;
	return c;
}

void main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	int sum=add(x,y);
	printf("%d",sum);
}
