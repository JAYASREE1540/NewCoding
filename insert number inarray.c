#include<stdio.h>
int main()
{
	int arr[50],i,element,pos,size=6;
	element=5,pos=4;
	for(i=0;i<size;i++)
	{
		
		for(i=size;i>=pos;i--)
		{
			arr[i]=arr[i-1];
			arr[i]=element;
			size++;
		}
		printf("\nThe Array is :\n");
	
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
}
	

return 0;
}
