#include<stdio.h>
#include<string.h>
struct bank
{
	char address[90];
	int phone;
	int account;
}
c1;
int main()
{
	c1.phone=9876543210;
	c1.account=500;
strcpy(c1.address,"Near rayachoty ,kadapa dist");
printf("\tCUSTOMER DETAILS\n\t");
printf("Customer address is %s\n phone number is %d\n Account balance is %d ",c1.address,c1.phone,c1.account);
return 0;
}