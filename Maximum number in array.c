#include<stdio.h>
int main()
{
	int a[5]={1,2,3,6,8},i, Max;
	for(i=0;i<5;i++)
	{
	  Max =a[0];
		if(Max<a[i])
		{
			Max=a[i];
		}
	}
	printf("The largest number is %d",Max);
	return 0;
}
