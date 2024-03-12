#include<stdio.h>
int main()
{
	int n=5,i,a[5]={1,2,3,4,5},del=3;
	for(i=del-1;i<n;i++)
	
		a[i]=a[i+1];
	n--;
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	return 0;
}
