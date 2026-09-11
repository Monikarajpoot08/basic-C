// Program to delete data from the beginning of an array
#include <stdio.h>
int main(){
    int a[50], n,i;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the elements of array");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for (i=0;i<n;i++){
        a[i]=a[i+1];
    }
    n--;
printf("Resultant array is\n");
for(i=0;i<n;i++)
    {printf("%d  ",a[i]);
    }
    return 0;
    
}