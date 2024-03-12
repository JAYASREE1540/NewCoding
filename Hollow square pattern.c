#include <stdio.h>

int main() {
    int rows = 25; 
    int i, j;

  
    for (i = 1; i <= rows; i++) {

        if (i == 1 || i == rows) {
            for (j = 1; j <= rows; j++) 
			{
            	
                printf("* ");
            }
        } 

        else {
            printf("* ");
            for (j = 1; j <= rows - 2; j++) {
                printf("  ");
            }
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

