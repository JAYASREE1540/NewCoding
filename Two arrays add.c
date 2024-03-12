#include<stdio.h>
int main()
{
	int a[4]={1,2,3,4},b[4]={1,1,1,1},i,c[4],n=4,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		c[i]=a[i]+b[j];
	}
	printf("%d\n",c[i]);
}
	return 0;
}
