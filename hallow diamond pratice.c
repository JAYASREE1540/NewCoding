#include<stdio.h>
int main()
{
	int n=8,i,j,k;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		
			printf(" ");
		
		for(j=1;j<=i*2-1;j++)
		
			if(k==1||k==i*2-1)
			printf("*");
			else
			printf(" ");
			printf("\n");
		}
	
	
	for(i=n-1;i>=1;i--)
	{
		for(j=1;j<=n-i;j++)
		
			printf(" ");
		
		for(j=1;j<=i*2-i;j++)
		if(k==1||k==i*2-1)
			printf("*");
			else
			printf(" ");
			printf("\n");
		}
	
	return 0;
	}

