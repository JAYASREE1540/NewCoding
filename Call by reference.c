#include<stdio.h>
void swap(int*,int*);
int main()
{
	int a=57,b=35;
	swap(&a,&b);
	return 0;
}
void swap(int* x,int* y) 
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
	printf("The swapping are %d and %d ",*x,*y);
	
}
