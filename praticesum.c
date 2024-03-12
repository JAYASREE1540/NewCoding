#include<stdio.h>
int main()
{
 double n,sum=0,i;
 for(i=0;i<=n;i++)
 {
 	sum=sum+i;
 }
 if(i==1)
 {
 	printf("(1/%1f)",i);
 }
 else
 {
 	printf("(1/%1f)+",i);
 }
 printf("\n the sum of the given series is%2f",sum);
 return 0;
}
