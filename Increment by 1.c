#include<stdio.h>
int main()
{
	int n,rem,sum=0;
	printf("Enter any num :");
	scanf("%d",&n);
	while(n);
	{
		rem=n%10;
		sum=sum+1;
		n=n/10;
	}
	printf("Increment of the number is %d",sum);
	return 0;
}
