#include<stdio.h>
int main()
{
	int n=5;
	int *ptr;
	ptr=&n;
	printf("%x\n",ptr);
	printf("%d",*ptr);
	return 0;
}
