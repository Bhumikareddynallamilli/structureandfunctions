#include<stdio.h>
struct student
{
	int ID;
	char name[20];
	int year;
	int salary;
	char gen;
};
void main()
{
	struct employee e1;
	printf("enter employee id:\n");
	scanf("%d",&e1.id);
	printf("enter employee name:\n");
	scanf("%s",e1.name);
	printf("enter employee joining year:\n");
	scanf("%d",&e1.year);
	printf("enter employee gender:\n");
	scanf("%d",&e1.gen);
	printf("enter employee salary:\n");
	scanf("%d",&e1.salary);
	printf("pin\t\tname\t\ty_O_j\t\tgender\t\tsalary\n");
	
}
