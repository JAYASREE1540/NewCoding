#include<stdio.h>
void reverse(char*str)
{
	if(*str)
	{
		reverse(str+1);
		printf("The reverse of string is %c\n",*str);
	}
}
int main()
{
	char a[]="Geeks for geeks";
	reverse(a);
	return 0;
}
