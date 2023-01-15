// Star pattern 30

//     *
//    **
//   ***
//   |**
// * | *
// **|
// ***
// **
// *

#include <stdio.h>
#include <conio.h>
int main()
{
    int n=3, i, j, k;

    for (i = 1; i <= 3 * n; i++)
    {
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if (i <= n)
            {
                if (j >= 2 * n - i)
                    printf("*");
                else
                    printf(" ");
            }
            else if (i <= 2 * n)
            {
                k = 0;
                if (j == n)
                {
                    k = 1;
                    printf("|");
                }
                if (j <= (i - n - 1))
                {
                    k = 1;
                    printf("*");
                }
                if (j >= i)
                {
                    k = 1;
                    printf("*");
                }
                if (k == 0)
                    printf(" ");
            }
            else if (i <= 3 * n)
            {
                if (j <= 3 * n + 1 - i)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}