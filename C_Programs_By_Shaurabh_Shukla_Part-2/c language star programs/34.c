// Star Pattern 34

// 1
// 62
// 1073
// 131184
// 15141295

#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, p, k = 1;
    for (i = 1; i <= 5; i++)
    {
        p = k;
        for (j = 1; j <= i; j++)
        {
            printf("%d", p);
            p = p - (5 - i + j);
        }
        printf("\n");
        k = k + 1 + 5 - i;
    }

    return 0;
}