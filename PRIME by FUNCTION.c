#include<stdio.h>
int prime(int num)
{
	int i;
	for(i=2;i<=num/2;i++)
	{
		if(num%i!=0)
		continue;
		else
		return 1;
	}
	return 0;
}
int main()
{
	int num=12,res=0;
	res=prime(num);
	if(res==0)
	printf("%d is a prime number",num);
	else
	printf("%d is not a  prime number",num);
	return 0;
}
