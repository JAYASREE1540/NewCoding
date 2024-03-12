#include<stdio.h>
int main()
{
	char ban='A';
    if(ban=='a'||ban=='e'||ban=='i'||ban=='o'||ban=='u'||ban=='A'||ban=='I'||ban=='O'||ban=='U'||ban=='E')
	{
		printf("%c is a vowel",ban);
		
	}
	else
	{
		printf("%c is not a vowel",ban);
	}
	return 0;
}
