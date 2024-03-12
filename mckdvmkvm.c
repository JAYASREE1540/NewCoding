#include <stdio.h>

int main() {
    int rows = 5,i,j,space; // Number of rows in the pyramid, you can change it as per your requirement

    for ( i = 1; i <= rows; ++i) {
        // Print spaces
        for ( space = 1; space < i; ++space) {
            printf("  ");
        }
        // Print stars
        for ( j = i; j <= rows; ++j) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

