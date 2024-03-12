#include<stdio.h>{
	int main()
	{
		char name;
		printf("Enter any name");
		scanf("%c",&name);
		if(name=='a'||name=='e'||name=='i'||name=='o'||name=='u'||name=='A'||name=='I'||name=='E'||name=='O'||name=='U')
	{
		printf("%c is a vowel\n",name);
	}
	else
	{
		printf("%c is not a vowel",name);
    }
	return 0;
}
