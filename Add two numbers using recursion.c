#include<stdio.h>
int add(int a,int b)
{
	if(a==0)
	return b;
	else
	return (a+b);
	
}
int main()
{
	int a=5,b=7;
	printf("%d",add(a,b));
	return 0;
}
