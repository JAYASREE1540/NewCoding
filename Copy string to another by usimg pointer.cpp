#include<stdio.h>

int main()
{
	char s1[10]="Jayasree",s2[10],*ptr1,*ptr2;
	ptr1=s1;
	ptr2=s2;;
	while(*ptr1!='\0')
	{
		*ptr2=*ptr1;
		ptr1++;
		ptr2++;
	}
	*ptr2='\0';
	printf("\ncopied string is %s",s2);
	return 0;
}
