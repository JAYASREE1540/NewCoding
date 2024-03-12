#include<stdio.h>
int main()
{
	int n,m=0,r;
	printf("enter any value");
	scanf("%d",&n);
	while(n!=0)
{
	r=n%10;
	m=m+r;
	n=n/10;
}
	printf("%d",m);
	return 0;
}
