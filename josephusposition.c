#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int x=1,d,j;
	while(2*x<=n)
	{
		x=x*2;
	}
	d=n-x;
	j=2*d+1;
	printf("josephus position %d\n",j);
}
