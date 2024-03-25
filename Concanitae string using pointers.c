#include<stdio.h>
#include<string.h>
int main()
{
	char str[100]="Rackha",str1[100]=" is my friend";
	char*ptr=str;
	char*ptr1=str1;
	while(*ptr!='\0')
	{
		ptr++; 
}
	while(*ptr1!='\0')
	{
		*ptr=*ptr1;
		*ptr++;
		*ptr1++;
	}
	*ptr='\0';
	printf("%s",str);
	return 0;
}
