#include<stdio.h>
int main()
{
	int n,i,j,s;
	n=7;
	for(i=1;i<=n;i++)
	{
		for(s=1;s<=n-i;s++)
		{
			printf(" ");
		}
		for(j=1;j<=i*2-1;j++)
		{
			printf("*");		
	    }
	printf("\n");
}
for(i=n-1;i>=1;i--)
{
	for(s=1;s<=n-i;s++)
	{
		printf(" ");
		
	}
	for(j=1;j<=i*2-1;j++)
	{
		printf("*");
	}
	printf("\n");
}
return 0;
}
