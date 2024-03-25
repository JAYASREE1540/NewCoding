#include<stdio.h>
	int main()
{
	int a[6]={2,4,4,7,9,4},i,count_ev=0,n=6,count_od=0;
	int*ptr;
	int*ptr1;
ptr=&count_ev;
ptr1=&count_od;
	for(i=0;i<6;i++)
	{
		if(a[i]%2==0)
		
		
			count_ev++;
	
		else 
		
		
			count_od++;
	
	
}
	printf("The no.of even numbers are %d\n",*ptr);
	printf("The no.of odd numbers are %d",*ptr1);

	return 0;
}
