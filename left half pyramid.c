+#include<stdio.h>
int main()
{
	int j,n=20,s,i;
	for(i=0;i<=n;i++)
	{
		for(i=0;i<=n;i++)
		{
			for(s=0;s<=n-i;s++)
			{
				printf("   ");
			}
			for(j=0;j<i;j++)
			{
				printf(" * ");
			}
				printf("\n");	
				}
		}
				return 0;
	}
			
