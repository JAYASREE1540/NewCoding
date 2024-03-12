#include<stdio.h>
float calSI(float prin,float time,char customertype);
int main()
{
	float prin=10000,rate,time=1,SI;
	char customertype='y';
	SI=calSI(prin,time,customertype);
	printf("The Sample intrest is %.2f\n",SI);
	return 0;
}
float calSI(float prin,float time,char customertype)
{
	float rate;
	if(customertype=='y'||customertype=='Y')
	{
		rate=12;
	}
	else
	{
		rate=10;
	}
	return (prin*rate*time)/100;
}
