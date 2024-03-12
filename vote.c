#include<stdio.h>
int main()
{
	int n;
	printf("enter any number");
	scanf("%d",&n);
	if(n>=18)
	{
		printf("You are eligible to vote")	;
	}
	else
	{
	printf("you have to wait %d years",n-18);
		}
}
