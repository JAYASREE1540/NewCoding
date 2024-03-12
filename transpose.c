#include<stdio.h>
int main()
{
	int a[2][2]={(1,2),(3,4)},tra[2][2]={(1,3),(9,7)},r=2,c=2,i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		tra[i][j]=a[i][j];
     	}
     }
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
		printf("%d",tra[i][j]);
		
		}
	 }
	printf("\t");

		return 0;
}

