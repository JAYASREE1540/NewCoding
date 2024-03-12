#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int del=3,i,n=5;
	for(i=del-1;i<n;i++)
	
		a[i]=a[i+1];
	
	n--;
	for(i=0;i<n;i++)
	
		printf("%d",a[i]);
		
		return 0;
			}
	
	
	
	
	

