#include<stdio.h>
int main()
{
	int a[3]={9,12,18},b[3]={3,2,9},mul[3];
	int i,sum=0,n=3;
	for(i=0;i<n;i++)
	{
		mul[i]=a[i]*b[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",mul[i]);
	}
	return 0;
}
