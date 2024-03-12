#include<stdio.h>
long int multinum(int n);
int main()
{
	 long int n=5;
	printf("The factorial of %d = %d",n,multinum(n)); 
	return 0;
}
long int multinum(int n)
{
	if(n>=1)
	{
		return n*(multinum(n-1));
	}
	else
	{
		return 1;
	}
}
