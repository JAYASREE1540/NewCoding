#include<stdio.h>
void swap(int x,int y);
int main()
{
	int a=17,b=98;
	swap(a,b);

	return 0;
}
void swap(int x,int y)
{
	int t;
	t=x;
	x=y;
	y=t;
	printf("Inside function is %d and %d",x,y);
	
}
