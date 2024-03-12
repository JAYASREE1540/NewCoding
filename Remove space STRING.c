#include<stdio.h>
int main()
{
	int i,len=0,j;
	char str[]="Remove white Space";
	len=sizeof(str)/sizeof(str[0]);
	for(i=0;i<len;i++)
	{
		if(str[i]==' ')
		{
		for(j=i;j<len;j++)
		{

		str[j]=str[j+1];
	}
	i--;
	len--;
}
}
printf("String after removing all white space \n is %s",str);
return 0;
}
