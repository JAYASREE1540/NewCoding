#include<stdio.h>
int main()
{
	int n,i,a[i],med,j,mod,t;
	float mean,sum=0;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	mean=sum/n;
	
	printf("Mean is=%f\n",mean);
	printf("\n Median =%d",med);
	return 0;
}
