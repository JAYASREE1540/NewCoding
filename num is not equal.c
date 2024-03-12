#include <stdio.h>

int main() {
    int num1, num2;

    // Assign values to num1 and num2
    num1 = 5;
    num2 = 7;

    // Check if the numbers are not equal
    if (num1 != num2) {
        printf("The numbers %d and %d are not equal.\n", num1, num2);
    } else {
        printf("The numbers %d and %d are equal.\n", num1, num2);
    }

    return 0;
}

