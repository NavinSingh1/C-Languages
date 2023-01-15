// Write a program to print first N even natural numbers in reverse order.

#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n;
    printf("Enter a number\n");
    scanf("%d", &n);
    printf("Printing the first N even natural numbers in reverse order\n");
    for (i = n; i >= 1; i--)
    {
        printf("%d\n", 2 * i);
    }

    return 0;
}