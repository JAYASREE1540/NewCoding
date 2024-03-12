#include <stdio.h>

int main() 
{
    int i,n1,n2,sum_even,sum_odd;
    printf("Enter any n1 and n2 num");
    scanf("%d",&n1);
    scanf("%d",&n2);
   sum_even = 0;
   sum_odd = 0;

       
    for (i = n1; i<= n2; i++) 
	{
        if (i % 2 == 0)
		 {
            sum_even=sum_even+i; 
        } 
		else 
		{
            sum_odd=sum_odd+ i; 
        }
    }

    printf("Sum of even numbers  %d\n",  sum_even);
    printf("Sum of odd numbers  %d\n", sum_odd);

    return 0;
}

