// Program to multiply two matrics

#include <stdio.h>
#include <conio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3], i, j, k, sum;
    printf("Enter 9 elements for the first matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter 9 elements for the second matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum = 0;
            for (k = 0; k < 3; k++)
            {
                sum = sum + a[i][k] * b[k][j];
                c[i][j] = sum;
            }
        }
    }
    printf("After multiplying two matrix are\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}