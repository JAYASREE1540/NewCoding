#include<stdio.h>
int main()
{
	int i,j,s,n;
	n=4;
	for(i=0;i<=n;i--)
	{
		for(s=0;s<n-i;s++)
		{
			printf(" ");
		}
		for(j=0;j<i*2-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
