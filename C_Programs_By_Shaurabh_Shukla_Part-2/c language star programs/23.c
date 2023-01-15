// Star Pattern 23

// 1
// 10
// 101
// 1010
// 10101
// 101010

#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 6; i++)
    {
        k = 1;
        for (j = 1; j <= 6; j++)
        {
            if (j <= i)
            {
                printf("%d", k);
                k = 1 - k;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}