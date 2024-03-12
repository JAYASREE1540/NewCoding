#include<stdio.h>
int main()
{
	int a[5]={1,2,4,2,8};
	int i,j,k,num=5;
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(a[i]==a[j])
			{
			for(k=j;k<num;k++)
			{
				a[k]=a[k+1];
			}
			j--;
			num--;
		}
      }
   }
			for(i=0;i<num;i++)
			{
				printf("%d\t",a[i]);			

         }
 
     
         
       	return 0;
}
