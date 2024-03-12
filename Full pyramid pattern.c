#include <stdio.h>

int main() {
    int rows = 5; // You can change the number of rows here
    int space, star, i, j;

    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Print stars
        for (star = 1; star <= 2 * i - 1; star++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

