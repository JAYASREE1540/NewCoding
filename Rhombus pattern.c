#include <stdio.h>

int main() {
    int rows = 5,i,j,k; // Number of rows for the rhombus

    // Upper half of the rhombus
    for ( i = 1; i <= rows; i++) {
        // Print spaces
        for ( j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars
        for ( k = 1; k <= rows; k++) {
            printf("* ");
        }
        printf("\n");
    }

    // Lower half of the rhombus
    for (i = rows - 1; i >= 1; i--) {
        // Print spaces
        for ( j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars
        for ( k = 1; k <= rows; k++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

