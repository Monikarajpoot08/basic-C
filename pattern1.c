// Program to print left-aligned right angled triangle 
#include<stdio.h>
int main ()
{
    int i;
    int j;
    for (i=0;i<5;i++)
      {
        for(j=0;j<=i;j++)
         {
            printf("*");
         }
         printf("\n");
      }
}