#include<stdio.h>
int main()
{
	int i,j,a,n=5,num[30]={6,7,5,9,10};
	
	
	for(i=0;i<n;i++)
	{
		
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(num[i]>num[j])  
				{
				a=num[i];
				num[i]=num[j];
				num[j]=a;
				}
			}
		}
		printf("The numbers arranged in ascending ordee\n");
		for(i=0;i<n;i++)
		printf("%d\n",num[i]);
	}
}
