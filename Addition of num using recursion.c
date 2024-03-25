#include<stdio.h>
int add(int a,int b)
{
	int i;
	if(a==0)
	return b;
	else
	return a+b;
}
int main()
{
	int a=5,b=7,c;
	c=add(a,b);
	printf("%d",c);
	return 0;
}
