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
     rem=n%10;
	sum=sum+(rem)*(rem);
	n=n/10;
   }
n=sum;
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																
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
