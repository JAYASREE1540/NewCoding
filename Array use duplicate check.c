#include<stdio.h>
int main()
{
	int anny[10]={1,2,4,2,8,9,10,9,5};
	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
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
