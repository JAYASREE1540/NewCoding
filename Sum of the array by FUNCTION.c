#include <stdio.h>

// Function to calculate the sum of array elements
int sumArray(int arr[], int size)
 {
    int sum = 0;
    for ( int i = 0; i < size; i++) 
	{
        sum += arr[i];
    }
    return sum;
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    // Call the function to calculate the sum
    int total = sumArray(array, size);

    printf("Sum of array elements: %d\n", total);

    return 0;
}

