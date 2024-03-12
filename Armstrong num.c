#include<stdio.h>
int main()
{
	int num=153, remainder,original,result=0;
	original=num;
	
		while(original!=0)
	{
	   remainder= original%10;
	   result+=remainder*remainder*remainder;
	   original/=10;
	 }
	   if(num==result)
	{
		printf("%d is a armstrong number",num);
	}
	else
	{
		printf("%d is not an armstrong number",num);
	}
		return 0;
}
	
