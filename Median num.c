#include<stdio.h>
int main()
{
	int n, a[5],i,j,temp;
	float med;
	printf("Enter any number");
	scanf("%d",&n);
	printf("Enter the elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	if(n%2==0)
	{
		med=(a[(n/2)]+a[n/2+1])/2;
	}

	else
	{
		med=a[n/2+1];
	}
	printf("Median =%f",med);
	return 0;
}








	
