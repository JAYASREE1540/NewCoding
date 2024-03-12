#include<stdio.h>
int main()
{
	int a[3],n,i,big,small;
	printf("Enter any num: ");
	scanf("%d",&n);
	printf("Enter any num: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
		big=a[0];
		small=a[0];
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

	printf("The smallest number is %d\n",small);
	printf("The Biggest number is %d",big);
	return 0;
}
