#include<stdio.h>
int main()
{
	int unit=150;
	float amt,total_amt,sur_charge;
	
	if(unit<=50)
	{
		amt=unit*0.50;
	}
	else if(unit<=150)
	{
		amt=25+(unit-50)*0.75;
	}
	else if(unit<=250)
	{
		amt=100+(unit-150)*1.20;
	}
	else
	{
		amt=220+(unit-250)*1.50;
	}
	sur_charge=amt*0.20;
	total_amt=sur_charge+amt;
	printf("Electicity Bill = Rs %.2f",total_amt);
	return 0;
	
			 }         
