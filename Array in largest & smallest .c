#include<stdio.h>
int main()
{
	int a[4]={1,19,54,7},n=4,i,big,small;
	for(i=0;i<n;i++)
	{
		big=a[0];
		small=a[0];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>big)
		{
			big=a[i];
		}
		if(a[i]<small)
		{
			small=a[i];
		}
		
	}
	printf("The Biggest number is %d\n",big);
	printf("The Smallest number is %d",small);
	return 0;
}
