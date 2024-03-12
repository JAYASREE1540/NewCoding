#include <stdio.h>

int main() {
    int n = 5; // Number of terms in the series
    double sum = 0.0,i,j;

    printf("Sum of the series: ");
    for (i = 1; i <= n; i++) {
        double term = 1.0;
        for ( j = 1; j <= i; j++) {
            term /= i; // Divide by i, i times
        }
        sum += term;
    }

    printf("%lf\n", sum);

    return 0;
}

