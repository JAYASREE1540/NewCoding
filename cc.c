#include<stdio.h>
int main()
{
	int n,i,j,s;
	for(i=1;i<=n;i++)
	{
		for(s=1;s<i;s++)
		{
			printf("  ");
		}
		for(j=i;j<=n;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
	
}
