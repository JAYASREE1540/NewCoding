#include<stdio.h>
struct age
{
	int month;
	int year;
	int date;
	int pre;
}
c1;
int main()
{
	c1.month=5;
	c1.date=18;
	c1.year=2006;
	c1.pre=2023-2006;
	
printf("%d/%d/%d\n",c1.date,c1.month,c1.year);
	printf("The present age is %d",c1.pre);
	return 0;
}