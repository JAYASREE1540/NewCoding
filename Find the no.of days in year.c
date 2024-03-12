#include<stdio.h>
int main()
{
	int year,Total_days;
	int days,weeks;
	printf("Enter the number of days: ");
	scanf("%d",&days); 
	
	year=(days/365);
	weeks=(days%365)/7;
	
    Total_days=days-((year*365)+(weeks*7));
    
    printf("The no.of days years is %d\n",year);
    
    printf("The no.of weeks in year is %d\n",weeks);
    printf("The total no.of days is %d",Total_days);
    return 0;
	
}
