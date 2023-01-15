// Write a program to print first N even natural numbers

#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n;
    printf("Enter the value of N\n");
    scanf("%d", &n);
    printf("Printing the first N even natural numbers\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", 2 * i);
    }
    return 0;
}