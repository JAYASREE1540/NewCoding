#include<stdio.h>
int main()
{
	char str[100]="Saveeeeeetha",ch='e';
	int count=0,i;
	for(i=0;str[i]!='\0';i++)
	{
		if(ch==str[i])
		count++;
	}
	printf("Frequency of %c is =%d",ch,count);
	return 0; o   ch 
}
