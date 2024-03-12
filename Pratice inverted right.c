#include<stdio.h>
int main()
{
	int i,j,rows;
	rows=10;
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<(rows-i);j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}
