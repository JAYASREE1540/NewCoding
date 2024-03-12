#include <stdio.h>

int main() {
    int rows = 5; // You can change the number of rows here
    int i, j;

    for (i = rows; i >= 1; i--) {
        // Print stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

