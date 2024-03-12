#include<stdio.h>
int main()
{
	int i,j,m,n;
	printf("Enter the no.of rows and columns");
	scanf("%d%d",&m,&n);
    int a[m][n],b[m][n],c[m][n];
    printf("Enter the elements of matrix A:\n");
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		scanf("%d\t",&a[i][j]);
    		
}
} 
printf("Enter the elements of matrix B:\n");
for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		scanf("%d\t",&b[i][j]);
}
}

for(i=0;i<m;i++)
        {
    	for(j=0;j<n;j++)
    	{
    		c[i][j]=a[i][j]+b[i][j];
    		
       }
       }
printf("Enter the elements of C:\n");
for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		printf("%d\t",c[i][j]);
    	}
    	printf("\n");
    }
 
    return 0;
}
