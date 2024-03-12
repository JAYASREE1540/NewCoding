#include <stdio.h>

int main() {
    int rows = 5; // Number of rows for the hourglass
    int i, j, space;

    // Upper half of the hourglass
    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (space = 1; space < i; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2 * (rows - i) + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the hourglass
    for (i = rows - 1; i >= 1; i--) {
        // Print leading spaces
        for (space = 1; space < i; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2 * (rows - i) + 1; j++) {
            printf( "*");
        }
        printf("\n");
    }

    return 0;
}

