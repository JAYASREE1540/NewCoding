#include<stdio.h>
int main()
{
	int a[4]={1,2,3, 4},b[4]={1,2,1,1},n=4,i,sum[4];
	
	for(i=0;i<n;i++)
	{
		sum[i]=a[i]+b[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",sum[i]);
		
	}
	return 0;
}

