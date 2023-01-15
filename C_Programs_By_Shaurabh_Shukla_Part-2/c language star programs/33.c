// star pattern 33

// ABCDEFG
// ABC EFG
// AB   FG
// A     G

#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 4; i++)
    {
        k = 'A';
        for (j = 1; j <= 7; j++)
        {
            if (j <= 5 - i || j >= 3 + i)
                printf("%c", k);
            else
                printf(" ");
            k++;
        }
        printf("\n");
    }

    return 0;
}