// Write a function to calculate factorial of a number.(Takes Something, Returns Something)

#include <stdio.h>
#include <conio.h>

int fact(int);

int main()
{
    int n, result;
    printf("Enter a number\n");
    scanf("%d", &n);
    result = fact(n);
    printf("The factorial of %d is %d\n", n, result);

    return 0;
}

int fact(int n)
{
    int i, f = 1;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}