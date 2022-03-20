#include<stdio.h>
struct str
{
	int a;
	int b;
};
union uni
{
	int x;
	int y;
};
void main()
{
	struct str s;
	//a*s.a=10;
	//s.b=20;*
	union uni u;
	printf("size of structure %d bytes\n",sizeof(s));
	printf("size of union %d bytes",sizeof(u));
}
