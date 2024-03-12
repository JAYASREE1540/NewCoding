#include<stdio.h>

int main()
{
	int n,i,count=0;
	printf("Enter any number");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
		count=count+i;
        }
	}
	if(n==count)
	{
		printf("%d is a perfect number",n);
	}
	else
	{
		printf("%d is not perfect number",n);
	}
	return 0;
}
