#include<stdio.h>
int main()
{
	int rev=0,num=149,rem;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	printf("%d",rev);
	return 0;
}
