#include<stdio.h>
int main()
{
	int n=5, a[5],i,j,modecount,count=0,modevalue;
	printf("Enter any number");
	for(i=0;i<n;i++)g
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
			if(count>modecount)
			{
				modecount=count;
				modevalue=a[i];
			}
		}
	
	printf("The Mode is %d",modevalue);
	return 0;
}
		
	}
