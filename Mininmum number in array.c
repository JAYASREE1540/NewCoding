#include<stdio.h>
int main()
{
	int i,array[5]={1,6,7,8,0},	 min=array[0];
	for(i=0;i<5;i++)
	{

	 if(min>array[i])
	 {
	 	min=array[i];
	 }
	}
	printf("The minimum number is %d",min);
	return 0;
}
