#include <stdio.h>

int main() {
    int i,n1,n2,sume=0,sumo=0;
    printf("Enter the n1 : ");
    scanf("%d",&n1);
    printf("ENter the n2 : ");
    scanf("%d",&n2);
    for(i=n1;i<=n2;i++)
    {
    	if(i%2==0)
    	{
    		sume=sume+i;
		}
		else
		{
			sumo=sumo+i;
		}
		
	}
	printf("The sum of even number from %d to %d is %d\n",n1,n2,sume);
	printf("The sum of odd number from %d to %d is %d",n1,n2,sumo);
	return 0;
}
    
