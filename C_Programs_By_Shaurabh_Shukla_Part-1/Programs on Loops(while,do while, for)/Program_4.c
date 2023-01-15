//Write a program to print first N natural numbers. (N is given by user)

#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("Printing first natural numbers entered by the user\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}