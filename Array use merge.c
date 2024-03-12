#include<stdio.h>
int main()
{
	int i,k;
	int a[10]={1,2,5,7,9,17,12,18,10,100};
	int b[10]={45,97,27,49,21,63,111,86,79,22};
	int mer[10]={1,2,3,4,5,6,78,9,1,10};
	for(i=0;i<10;i++)
	{
		mer[i]=a[i];
	}
	k=i;
	for(i=0;i<10;i++)
	{
		mer[k]=b[i];
		k++;
	}
	for(i=0;i<k;i++)
{
	printf("%d\n",mer[i]);
}
return 0;
}
