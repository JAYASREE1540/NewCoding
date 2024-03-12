#include<stdio.h>
float calSI(float prin,float time,char customertype);
int main()
{
	float prin=10000,rate=0.2,time=3,SI;
	char customertype='y';
	SI=calSI(prin,time,customertype);
	printf("The Sample intrest is %.2f\n",SI);
	return 0;
}
float calSI(float prin,float time,char customertype)
{

	return (prin* rate*time)/100;
}
