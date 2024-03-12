#include<stdio.h>
int main()
{
	int i,g=0,c=0;
	for(i=1;i<100;i++)
	{
		if(i%5==0)
		{
			printf(" %d\n",i);
			c++;
				g=g+i;
			}
		}
printf("%d\n",g);

	return 0;
}

