#include<stdio.h>
int sum(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n+sum(n-1);
	}
}
void main()
{
	int n,s;
	scanf("%d",&n);
	s=sum(n);
	printf("sum of first %d natural numbers is %d",sum);
}
