#include<stdio.h>
int main()
{
	int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}},i,j,sum=0;
	float avg;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=sum+mat[i][j];
				avg=sum/9;
			}
		}
		
     	printf("%f\n",avg);
     printf("%d",sum);

	     return 0;
	 }

	
	

	
