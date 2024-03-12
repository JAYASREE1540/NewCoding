#include<stdio.h>
int main()
{
	int anny[9]={1,2,4,2,8,9,10,9};
	int i,j;
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<9;j++)
		{
			if(anny[i]==anny[j])
			{
				printf("%d is a Duplicate elemnet in an array\n",anny[i]);
				break;
			}
		}
	}
	return 0;
}
