#include<stdio.h>
#include<string.h>
int main()
{
	int i,len=0,j;
	char str[]="Hi,Ramu!!!!! how are u man ?";
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]=='!'||'.'||'?'||','||':'||';'||'/'||'-'||'~')
		{
			for(j=i;j<len;j++)
			{
				str[j]=str[j+1];
			}
			len--;
		}
	}
	printf("String after removing all pun is %s",str);
	return 0;
}
