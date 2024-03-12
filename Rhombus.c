/**
 * C program to print Rhombus star pattern series
 */

#include <stdio.h>

int main()
{
    int i, j, rows;

    /* Input number of rows from user */
    printf("Enter rows: ");
    scanf("%d", &rows);

    for(i=0; i<=rows; i++)
    {
        /* Print trailing spaces */
        for(j=0; j<=rows - i-1; j++)
        {
            printf(" ");
        }

        /* Print stars after spaces */
        for(j=1; j<=rows; j++)
        {
            printf("*");
        }

        /* Move to the next line */
        printf("\n");
    }

    return 0;
}
