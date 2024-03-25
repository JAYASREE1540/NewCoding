#include<stdio.h>
#include<string.h>
int main()
{
	char word[12]="Jayasree",copy[12],i;
	char*ptr1=word;
	char*ptr2=copy;
	while(*ptr1!=0)
	{
	 *ptr2=*ptr1;
	 *ptr1++;
	 *ptr2++;
	} 
	*ptr2='\0';
	printf("Normal is %s\n ",word);
	printf("Copy is %s",copy);
	return 0;
}
