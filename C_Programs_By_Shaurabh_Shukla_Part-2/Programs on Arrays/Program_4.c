// Write a program to add two matrices, each of order 3×3
#include <stdio.h>
#include <conio.h>
int main()
{
    int A[3][3], B[3][3], C[3][3], i, j;
    printf("Enter 9 numbers for first matrix\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter 9 numbers for second matrix\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    printf("After adding two matrix\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}