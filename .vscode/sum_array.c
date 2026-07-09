#include<stdio.h>

int main() {
    int arr[5], i, sum = 0;

    // Input elements
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum
    for(i = 0; i < 5; i++) {
        sum += arr[i];
    }

    // Display sum
    printf("Sum of array elements is: %d\n", sum);

    return 0;
}