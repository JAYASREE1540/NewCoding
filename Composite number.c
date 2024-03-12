        #include<stdio.h>
int main()
{
	int n,c=0,i;
	printf("Enter any num :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c=c+1;
		}
	}
	if(c==2)
	{
		printf("%d is not a composite number",n);
	}
	else
	{
		printf("%d is a composite number",n);
	}
	return 0;
	
	
	
}
