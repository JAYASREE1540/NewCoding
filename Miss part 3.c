#include<stdio.h>
int main()
{
	int i,miss,sum=0,a[5]={2,3,4,5},n=5;
	for(i=0;i<=n;i++)
	{
		sum=sum+a[i];
	}
	miss=(n*(n+1))/2-sum;
	printf("Missing number is %d",miss);
	return 0;
}
