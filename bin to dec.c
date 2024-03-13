#include<stdio.h>
int main()
{
	int n=1101,sum=0,rem,bin=1;
	while(n!=0)
	{
		rem=n%10;
		sum=sum+rem*bin;
		n=n/10;
		bin=bin*2;
	}
	printf("The decimal number is %d",sum);
	return 0;
}