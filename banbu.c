#include<stdio.h>
int main()
{
	int i,j,s,n;
	for(i=1;i<=n;i++)
	{
		for(s=1;s<i;s++)
		{
		printf(" ");
		}
		for(j=i;j<(n-i);j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
