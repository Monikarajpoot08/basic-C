#include <stdio.h>

int main()
{
    int arr[10], i, product = 1;

    printf("Enter 10 array elements:\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 10  ; i++)
    {
        product = product * arr[i];
    }

    printf("Product of array elements = %d", product);

    return 0;
}