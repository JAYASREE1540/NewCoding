#include<stdio.h>
int main()
{
	int arr[]={10,-20,-30,0,70,-80,-20},n,res,mul,i,j        ;
	n=sizeof(arr)/sizeof(arr[0]);
	res=arr[0];
	for(i=0;i<n;i++)
	{
	mul=arr[i];
	for(j=i+1;j<n;j++)
	{
		res=mul;
		mul*=arr[j];
	}
	if(mul> res)
	res= mul;
	}
	printf("maximum product of sub-array is %d",res);
	return 0;
}
