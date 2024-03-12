#include<stdio.h>
int main()
{
	int n=5,i,j,s;
	for(i=1;i<=n;i++)
	{
		for(s=1;s<=n-i;s++)
		{
			printf(" ");
	}
		for(j=1;j<=n-1;j++)
		{
			printf(" * ");
		}
		printf("\n");
	}
	return 0;
	
}
