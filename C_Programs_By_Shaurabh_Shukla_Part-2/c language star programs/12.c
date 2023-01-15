#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j >= i && j <= 8 - i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

/*

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,r;
    printf("Enter number of rows");
    scanf("%d", &r);
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= 2*r-i; j++)
        {
            if (j>=i&&j<=2*r-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

*/