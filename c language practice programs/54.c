// Program to add two matrices
#include <stdio.h>
#include <conio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3], i, j;

    printf("Enter 9 numbers for the first matrix\n");
    for (i = 0; i <= 2; i++)
        for (j = 0; j <= 2; j++)
            scanf("%d", &a[i][j]);

    printf("Enter 9 numbers for the second matrix\n");
    for (i = 0; i <= 2; i++)
        for (j = 0; j <= 2; j++)
            scanf("%d", &b[i][j]);

    printf("Sum of two matrices is \n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    getch();
}