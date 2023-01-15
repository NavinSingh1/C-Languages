// Write a program to multiply two matrices, each of order 3×3

#include <stdio.h>
#include <conio.h>
int main()
{
    int A[3][3], B[3][3], C[3][3], i, j, k, sum;
    printf("Enter 9 number for first matrix\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter 9 number for second matrix\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            sum = 0;
            for (k = 0; k <= 2; k++)
            {
                sum = sum + A[i][k] * B[k][j];
                C[i][j] = sum;
            }
        }
    }
    printf("After multiying the matrices\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}