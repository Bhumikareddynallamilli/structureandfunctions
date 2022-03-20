#include<stdio.h>
struct DOB
{
	int day;
	int month;
	int year;
};
struct student
{
	int pin;
	struct DOB dob;
};
void main()
{
	struct student s1;
	s1.pin=123;
	s1.dob.day=13;
	s1.dob.month=7;
	s1.dob.year=2004;
	printf("%d %d %d %d",s1.pin,s1.dob.day,s1.dob.month,s1.dob.year);
}
