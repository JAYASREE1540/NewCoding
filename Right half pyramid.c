#include <stdio.h>

int main() {
    int rows, i, j;

    // Set the number of rows for the pyramid
    rows = 5;

    // Iterate through each row
    for (i = 1; i <= rows; i++) {
        // Print spaces before the stars
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print stars for the current row
        for (j = 1; j <= i; j++) {
            printf("*");
        }

        // Move to the next line after printing stars of the current row
        printf("\n");
    }

    return 0;
}

