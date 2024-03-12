#include<stdio.h>
int main()
{
	int adult,children,present_adult,present_childern,cost,Total_children,Total_adult; 
	printf("Enter the no.of adults and no.of childerns");
	scanf("%d",&adult);	
	scanf("%d",&children);	 
	
	present_adult=500;
	present_childern=250; 
			
	Total_adult=adult*present_adult;
    Total_children=children*present_childern;
    
    cost=Total_adult+Total_children;
    printf("Total cost is $ %d ",cost);
    
    return 0;
	
}
