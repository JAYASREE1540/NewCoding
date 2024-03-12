#include <stdio.h>

int main() {
    int rows = 5; // You can change the number of rows here
    int i, j, k;

    for (i = rows; i >= 1; i--) {
        // Print spaces
        for (j = 0; j < rows - i; j++) {
            printf(" ");
        }

        // Print stars
        for (k = 0; k < 2 * i - 1; k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

