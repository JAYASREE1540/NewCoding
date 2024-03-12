#include<stdio.h>
int main()
{
	int n,sum=0,rem;
	printf("Enter any num: ");
	scanf("%d",&n);
	while((n!=1)&&(n!=4))
	{
	while(n>0)
	{

	sum=sum+(n%10)*(n%10);
	n=n/10;
   }
n=sum;
sum=0;																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																					
}
if(n==1)
{

printf("Happy Number");
}
else
{

printf(" Not Happy Number");
}
return 0;
}
