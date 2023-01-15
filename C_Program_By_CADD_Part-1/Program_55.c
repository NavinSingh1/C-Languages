// program to print sum of fibonacci series using recursion

#include <stdio.h>
#include <conio.h>
int fibonacci(int x);
int main()
{
    int i, f;
    printf("Enter a number\n");
    scanf("%d", &i);
    f = fibonacci(i);
    printf("Sum of fibonacci series is %d\n", f);
    return 0;
}

int fibonacci(int x)
{
    if (x == 0)
        return 0;
    else if (x == 1)
        return 1;
    else
        return fibonacci(x - 1) + fibonacci(x - 2);
}