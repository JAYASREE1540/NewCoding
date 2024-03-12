#include<stdio.h>
int main()
{
	int rows,seats,Total;
	printf("enter no.of rows and seats");
	scanf("%d",&rows);
	scanf("%d",&seats);
	Total=rows*seats;
	printf("The total no.of seats is %d",Total);
	return 0;
	
}
