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
	union uni u;
	s.a=10;
	s.b=20;
	u.x=10;
	u.y=20;
	printf("%d %d\n",s.a,s.b);
	printf("%d %d",u.x,u.y);
}
