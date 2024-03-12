#include<stdio.h>
int main()
{
  char ban[26]="The Story of ellie";
  int vow=0,con=0,spa=0,dig=0,i;
  for(i=0;ban[i]!='/0';i++)
  {
  ban[i]=tolower(ban[i]);
  if(ban[i]=='a'||ban[i]=='e'||ban[i]=='i'||ban[i]=='o'||ban[i]=='u')
	{
		vow++;
    }
    else if(ban[i]>='a'&&ban[i]<='z')
    {
    
    	con++;
	}

 else if (ban[i]==' ')
	{
		spa++;
	}
	 else if(ban[i]>=0&&ban[i]<=9)
	{
		dig++;
	}
}

printf("The no.of vowels are %d\n",vow);
printf("The no.of consonants are %d\n",con);
printf("The no.of digits are %d\n",dig);
printf("The no.of spaces are %d",spa);
return 0;
}
