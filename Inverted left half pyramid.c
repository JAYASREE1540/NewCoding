#include <stdio.h>

int main() {
    int rows = 5; // You can change the number of rows here
    int i, j;

    for (i = 0; i <= rows; i++) {
        // Print spaces
        for (j = 1; j <= i; j++) {
            printf(" ");
        }

        // Print stars
        for (j = i; j <rows; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

