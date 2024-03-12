#include <stdio.h>

void rearrangeArray(int arr[],int i,int temp,int n)
 {
 	n=8;
    for ( i = 0; i < n; i += 2) {
        if (i > 0 && arr[i] < arr[i - 1]) {
            // Swap arr[i] and arr[i-1]
            int temp = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = temp;
        }

        if (i < n - 1 && arr[i] < arr[i + 1]) {
            // Swap arr[i] and arr[i+1]
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8},i;
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    rearrangeArray(arr, n);

    printf("\nRearranged Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
