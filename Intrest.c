#include<stdio.h>
int main()
{
	int balance,period,Total_intre,Total_accu;
	float intrest;
	period=365;
	intrest=0.2;
	balance=1000;
	Total_intre=intrest*balance;
	Total_accu=balance+Total_intre;
	printf("The intrest wiil be acculated in 1 year is %d\n",Total_intre);
	printf("The money will be in account after 1 year is %d",Total_accu);
	return 0;
}
