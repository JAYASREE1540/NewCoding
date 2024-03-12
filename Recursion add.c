#include<stdio.h>

int add(int m,int n,int y)
{
	if(n==0)
	return m;
	y=add(m,n-1)+1;
	return y;
}
int main()
{
	int a,b,r;
	a=24,b=6;
	r=add(a,b);
	return r;
}

