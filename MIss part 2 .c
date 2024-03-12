#include<stdio.h>
int main()
{
	int i,a[5]={1,3,4,5},miss,sum=0,n=5;
	for(i=0;i<=5;i++)
	{
		sum=sum+a[i];
	}
	miss=(n*(n+1))/2-sum;
	printf("missing number is %d",miss);
	return 0;
}









