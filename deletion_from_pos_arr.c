// Program to delete an element from the any position of array
#include <stdio.h>
int main(){
    int a[50], n,pos,i;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the elements of array");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the position of element to delete");
    scanf("%d",&pos);
    if (pos<=0 || pos>n)
    {
        printf("invalid position");
    }
    else{

        for (i=pos-1;i<n-1;i++)
            {a[i]=a[i+1];
           }
           n--;
        }

printf("Resultant array is\n");
for(i=0;i<n;i++)
    printf("%d  ",a[i]);    
return 0;
}
