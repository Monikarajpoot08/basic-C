#include <stdio.h>
int main() 
{
    int arr[10];
    int count_odd=0;
    int count_even=0;
    int i;
     printf(" enter elements of array\n");
    for (i=0;i<10;i++)
     {
        scanf("%d",&arr[i]);
        printf("%d  ",arr[i]);
     }
      for (i=0; i<10;i++)
      {if(arr[i]%2==0)
        {
            count_even+=1;
        }
        else
        {
            count_odd+=1;
        }
      }
printf("\ntotal even numbers in the array: %d\n", count_even); 
printf("total odd numbers in the array: %d\n", count_odd); 

}