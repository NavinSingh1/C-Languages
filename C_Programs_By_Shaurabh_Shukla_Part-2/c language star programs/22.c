// Star Pattern 22

//    1
//   12A
//  123AB
// 1234ABC

#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 4; i++)
    {
        k = 49;
        for (j = 1; j <= 7; j++)
        {
            if (j >= 5 - i && j <= 3 + i)
            {
                printf("%c", k);
                k++;
                if (j == 4)
                {
                    k = 65;
                }
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}