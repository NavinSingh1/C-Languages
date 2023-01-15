// Write a program to print first N odd natural numbers

#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n;
    printf("Enter N number\n");
    scanf("%d", &n);
    printf("Printing the first N odd natural numbers\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", 2 * i - 1);
    }

    return 0;
}