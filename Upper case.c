#include<stdio.h>
int main()
{
char str[92]="hello my dear daddy";
int i;
for(i=0;str[i]!='\0';i++)
{
	if(str[i]>=97&&str[i]<=122)
	{
		str[i]=str[i]-32;
	}
}
printf("The Upper case is %s",str);
return 0;
}
