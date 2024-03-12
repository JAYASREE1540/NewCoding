#include<stdio.h>
int main()
{
	int a[5]={10,20,30,40,50};
	int sum=0,i,n=5;
	float avg;
	for(i=0;i<=n;i++)
	{
		sum=sum+a[i];	
	}
   avg=sum/5;
   printf("The total is %d\n",sum);
   printf("The average is %f",avg);
   return 0;
}
   
