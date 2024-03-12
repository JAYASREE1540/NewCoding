#include<stdio.h>
int main()
{
	int s,p,q;
	s=17;
	p=18;
	q=4;
	if(s>p && s>q)
	{
		printf("s is greatest number");
	}
	else if(p>s && p>q)
	{
		printf("p is greatest number");
	}
	else if(q>s && q>p)
		{
		printf("q is greatest number");
	}
else 
{
	printf("All are eqaul or any two are equal");
}
	return 0;
}
