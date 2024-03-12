#include<stdio.h>
int main()
{
	int rem,reversed=0,num=626,ori;
	ori=num;
	while(num!=0)
{
rem=num%10;
reversed=reversed*10+rem;
num=num/10;
}

if(ori==reversed)
{
printf("%d it is a palindrome",ori);
}

else
{
	printf("%d It is not palindrome",ori);
}
return 0;
	
}
