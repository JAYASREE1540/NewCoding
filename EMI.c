#include<stdio.h>
#include<math.h>
int main()
{
	float p=1000000,R=7,r,emi;
	int n=120;
	r=R/(12*100);
	emi=p*r*pow(1+r,n)/(pow(1+r,n)-1);
	printf("Monthly EMI : %f",emi);
	return 0;
}
