#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5},i;
	int n=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<n;i++)
	{
		arr[i]+=1;
	
	}
	printf("New arrt : ");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
	
	
	
}
