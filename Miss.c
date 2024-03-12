#include<stdio.h>
int main()
{
	int a[5]={2,3,4,5},sum=0,miss;
	int i,n;
	n=5;
	for(i=0;i<=n;i++)
	{
		sum=sum+a[i];
	}
	miss=(n*(n+1))/2-sum;
	printf("%d is the missing number",miss);
	return 0;
}
