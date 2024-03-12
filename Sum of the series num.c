#include<stdio.h>
int main()
{
	double sum=0.0,n=5,i;
	for(i=1;i<=n;i++)
{
	sum=sum+(1/i);
	if(i==1)
	printf("\n 1+");
	else if(i==n)
	printf("(1/%1f)",i);
	else
		printf("(1/%1f)+",i);
}
	printf("\n The sum of the series is % 2f",sum);
	return 0;
}
