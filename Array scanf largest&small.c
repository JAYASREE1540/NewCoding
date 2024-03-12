#include<stdio.h>
int main()
{
	int a[3],n,i,big,small;
	printf("Enter the number");
	scanf("%d",&n);
	printf("Enter the array numbers");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);

		big=a[0];
		small=a[0];
	
	for(i=1;i<n;i++)
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
