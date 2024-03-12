#include<stdio.h>
int main()
{
	int spent,buy,n1,n2,n3,n4;
	float q1,q2,q3,q4;
	printf("Enter How much he spent");
	scanf("%d",&buy);
	spent=2000;
	q1=0.2;
	q2=0.3;
	q3=0.5;
	q4=0.6;
	 n1=buy+(q1*spent);
	n2=buy+(q2*spent);
	n3=buy+(q3*spent);
	n4=buy+(q4*spent);
	 if(buy==1000)
	 {
	printf("%d",n1);
	 }
	 else if(buy==2000)
	 {
	 	printf("%d",n2);
	 }
	 else if(buy==3000)
	 {
	printf("%d",n3);
	 }
	 else 
	 {
	 	printf("%d",n4);
	 }

	 return 0;
	 
	
}
