#include <stdio.h>

int minProductSubarray(int arr[], int n,int i) {
    int minEndingHere = 1;
    int maxEndingHere = 1;
    int minProduct = 1;

    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            maxEndingHere *= arr[i];
            minEndingHere = (minEndingHere * arr[i] > 1) ? 1 : minEndingHere * arr[i];
        } else if (arr[i] == 0) {
            maxEndingHere = 1;
            minEndingHere = 1;
        } else {
            int temp = maxEndingHere;
            maxEndingHere = (minEndingHere * arr[i] > 1) ? minEndingHere * arr[i] : 1;
            minEndingHere = temp * arr[i];
        }

        if (minProduct > maxEndingHere) {
            minProduct = maxEndingHere;
        }
    }

    return minProduct;
}

int main() {
    int arr[] = {1, -2, -3, 0, 7, -8, -2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = minProductSubarray(arr, n);

    printf("Minimum product of a subarray: %d\n", result);

    return 0;
