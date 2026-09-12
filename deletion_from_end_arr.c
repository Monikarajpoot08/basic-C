// Program to delete an element from end in an array
#include<stdio.h>
int main()
{
    int a[10], n,i;
    printf("enter the size of array : \n");
    scanf("%d",&n);
    printf("enter elements of array ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

   //Deleting the last element
    n--;
    printf(" Resultant array is: ");
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
}
