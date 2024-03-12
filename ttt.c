#include<stdio.h>
int main()
{
	int r=2,c=2,i,j,mat[2][2]={1,2,3,4},tra[2][2];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			tra[j][i]=mat[i][j];
		}
		
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",tra[i][j]);		
			}
	    
	printf("\n");
}
   return 0;
}
