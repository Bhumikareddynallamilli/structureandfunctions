#include<stdio.h>
void fun1()
{
	printf("no arguments no return type\n");
}

int fun2()
{
	return 100;
}

void fun3_add(int a,int b)
{
	printf("\n with arguments without return type\n");
	int c=a+b;
	printf("%d",c);
}

int fun4_add(int x,int y)
{
	int z=x+y;
	return z;
}

void main()
{
	fun1();
	printf("%d\n",fun2());
	fun3_add(10,20);
	int res=fun4_add(10,20);
}
