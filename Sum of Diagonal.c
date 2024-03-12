
#include <stdio.h> 

int main() 
{ 

	int i, j, m = 3, n = 3,  sum = 0; 
	
	
	int matrix[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } }; 
	

	if (m == n) 
	{ 
		
		
		printf("The matrix is \n"); 
		
		
		for (i = 0; i < m; ++i)
		 { 
			
			
			for (j = 0; j < n; ++j)
			 { 
				printf(" %d", matrix[i][j]); 
			} 
			printf("\n"); 
		} 
		for (i = 0; i < m; ++i)
		  { 
			
			
			sum = sum + matrix[i][i]; 
			
			
			
		} 
		
		
		printf("\nMain diagonal elements sum is = %d\n", sum); 

	} 
	
	return 0; 
}

