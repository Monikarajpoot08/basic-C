//Program to store only even numbers in an array
#include <stdio.h>
#define N 10
int main()
{
    int a[N];
    int i = 0;
    int ele;
    printf("Enter %d elements:\n", N);
    while (i < N)
    {
        scanf("%d", &ele);

        if (ele % 2 == 0)
        {
            a[i] = ele;
            i++;           // Increase index only for even numbers
        }
        else
        {
            printf("Odd number not stored.\n");
        }
    }

    printf("\nEven numbers stored in the array are:\n");

    for (i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}