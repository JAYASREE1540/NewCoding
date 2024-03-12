#include <stdio.h>

int main() {
    int rows = 5; // Number of rows for the inverted pyramid
    int i, j, space;

    // Upper part of the inverted pyramid
    for (i = rows; i >= 1; i--) {
        // Print spaces
        for (space = 0; space < rows - i; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == rows) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

