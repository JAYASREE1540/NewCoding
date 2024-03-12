#include<stdio.h>
int calculategcd(int n1,int n2)

{
	if(n2==0)
	return n1;
	else
	return calculategcd(n2,n1%n2);
}
int main()
{
	int n1=12,n2=16,gcd;
	gcd=calculategcd(n1,n2);
	printf("The GCD of %d and %d is %d",n1,n2,gcd);
	return 0;
}
