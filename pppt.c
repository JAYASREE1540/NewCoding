#include<stdio.h>
int main()
{
	double sum=0,i,n=3,fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	 sum=sum+(1/fact);
}
printf("%3f",sum);
return 0;
	

}
