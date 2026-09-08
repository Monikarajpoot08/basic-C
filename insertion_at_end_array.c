// Program to insert an element at the end of an array
#include<stdio.h>
int main(){
    int a[50], n, i, num;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the data you want to insert: ");
    scanf("%d", &num);
    a[n] = num;
    n++;
    printf("The new array is: ");
    for (i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}