//Program to print a pattern 
/*
  1
  2 4 6
  3 5 7 9 11
  8 10 12 14 16 18 20
*/
#include <stdio.h>
int main()
{   int i, j;
    int odd = 1, even = 2;
    for(i = 0; i < 4; i++)
    {
        if(i % 2 == 0)   // even row (odd elements)
        {
            for(j = 0; j <= 2 * i; j++)
            {
                printf("%d ", odd);
                odd += 2;
            }
        }
        else          // odd row (even elements)
        {
            for(j = 0; j <= 2 * i; j++)
            {
                printf("%d ", even);
                even += 2;
            }
        }
        printf("\n");
    }

    return 0;
}