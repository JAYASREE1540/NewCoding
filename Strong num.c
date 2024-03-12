#include<stdio.h>
int main()
{
	int n,i,rem,count=0,fact,strong;
	printf("Enter any num\n");
	scanf("%d",&n);
		strong=n;
	while(n!=0)
	{
	rem=n%10;
	fact=1;
	for(i=1;i<=rem;i++)
	fact=fact*i;
	count=count+fact;
	n=n/10;
	}
	if(strong==count)
	{
		printf("%d is a strong number",strong);
	}
	else
	{
		printf("%d is not a strong number",strong);
	}
	return 0;
}
