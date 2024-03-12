#include<stdio.h>
int main()
{
	int i,n1,n2,count=0,sum=0;
	printf("Enter the number");
	scanf("%d",&n1);
	scanf("%d",&n2);
	printf("Integers div by 5 are \n");
	for(i=n1;i<n2;i++)
	{
		if(i%5==0)
		{
		printf("%3d",i);
		count++;
		sum=sum+i;
		}
	}
	printf("\n Number of integers div by 5 bet %d and %d=%d\n",n1,n2,count);
	printf("Sum of all integers that are div by 5=%d\n",sum);

return 0;
}
