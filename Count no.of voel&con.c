#include<stdio.h>
int main()
{
	char ban[15],i,s,spe,vowel=0,con=0;
	printf("Enter the sentence: ");
	gets(ban);
	for(i=0;s[i] !='\0';i++)
	{
		if(s[i]=='a'||s=='e'||s=='i'||s=='o'||s=='u'||s=='A'||s=='E'||s=='I'||s=='O'||s=='U')
		{
			vowel=vowel+1;
		}
		else
		{
			con=con+1;
		}
		if(s[i]=='\t'||s[i]=='\0'||s[i]==' ')
		{
			spe=spe+1;
		}
	}
	con=con-spe;
	printf("No.of vowels in %s=%d\n",s,vowel);
	printf("no.of consonants in %s=%d\n",s,con);
	return 0;
}
