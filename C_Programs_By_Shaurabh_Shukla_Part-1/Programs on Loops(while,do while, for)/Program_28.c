// Write a program to print first N terms of Fibonacci series

#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i, a = -1, b = 1, c;
    printf("Enter a number\n");
    scanf("%d", &n);
    printf("Fibonacci series for first %d number\n", n);
    for (i = 1; i <= n; i++)
    {
        c = a + b;
        printf("%d\n", c);
        a = b;
        b = c;
    }

    return 0;
}

