#include<stdio.h>
int main()
{
	int i,j,k;
	char a[100]="Hello mall";
	int len;
	len=sizeof(a)/sizeofa[0];
	for(i=0;i<len;i++)
	{
		for(j=i-1;a[j]!='\0';j++)
		{
			if(a[j]==a[i)
		{
			for(k=j;a[k]!='\0';k++)
			{
				a[k]=a[k+1];
			}
		}
		}
	}
	printf("\nThe final string after removing all duplicate,%s\n",a);
	return 0;
}
