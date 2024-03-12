#include<stdio.h>
int main()
{
	int j,n=6,s,i;
	for(i=1;i<=n;i++)
	{
		for(i=0;i<=n;i++)
		{
			for(j=0;j<n-i;j++)
			{
				printf(" ");
			}
			for(s=0;s<=i;s++)
			{
				printf("*");
			}
				printf("\n");	
				}
		} 
				return 0;
	}
			
