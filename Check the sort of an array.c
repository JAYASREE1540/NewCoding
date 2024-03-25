#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5},i,n,j,temp;
	n=sizeof(a)/sizeof(a[0]);
	int*ptr=a;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(ptr+i)>(*ptr+j))
			{
				temp=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=temp;
			}
	


			if(*(ptr+i)<*(ptr+j))
			{
				temp=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=temp;
			}
		}
	}
	printf("%d is a sorted data\n",*(ptr+i));
	return 0;
}
