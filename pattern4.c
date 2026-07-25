//Program to print Triangular pattern 
/*     *
      ***
     *****
    *******
   *********
*/
#include <stdio.h>
int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {   // loop1: to print the spaces

        for (j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }
        // loop2: to print the stars 
        
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}