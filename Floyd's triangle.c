#include <stdio.h>

int main() {
    int n = 5; // Number of rows (adjust as needed)
    int i, j, num = 1;
 
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}

