#include<stdio.h>
int main()
{
	int i,j,max=50,min=1,count=0;
	for(i=min;i<=max;i++)
	{
		
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
				count++;
		}
			if(count==2)
			printf("\n%d",i);
	}
		return 0;
	
}
