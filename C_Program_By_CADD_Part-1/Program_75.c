// Program to add matrices in the form below
// 2 3 2
// 5 1 7
// 6 5 6

// add 2 + 1 + 6;

#include <stdio.h>
#include <conio.h>
int main()
{
    int a[3][3], i, j, sum = 0;
    printf("Enter 9 elements for the matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
            {
                sum = sum + a[i][j];
            }
        }
    }
    printf("sum is %d\n", sum);

    return 0;
}