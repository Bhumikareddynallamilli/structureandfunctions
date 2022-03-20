#include<stdio.h>
struct student
{
	int pin;
	char name[20];
    float perc;
};
void main()
{
	struct student s1={123,"abc",90.00};
	struct student s2={124,"cde",89.00};
	struct student s3={125,"fgh",78.00};
	struct student s4={126,"ijk",75.00};
	printf("pin\t\tname\t\tpercentage\n");
	printf("--------------------------\n");
	printf("%d\t\t%s\t\t%.2f\n",s1.pin,s1.name,s1.perc);
	printf("%d\t\t%s\t\t%.2f\n",s2.pin,s2.name,s2.perc);
	printf("%d\t\t%s\t\t%.2f\n",s3.pin,s3.name,s3.perc);
	printf("%d\t\t%s\t\t%.2f\n",s4.pin,s4.name,s4.perc);
}
