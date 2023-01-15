// Program to find factorial of a number using recursion

#include <stdio.h>
#include <conio.h>
int fact(int x);
int main()
{
    int n, f;
    printf("Enter a number to find the factorial\n");
    scanf("%d", &n);
    f = fact(n);
    printf("Factorial of %d is %d\n", n, f);
    return 0;
}

int fact(int x)
{
    if (x == 0)
        return 0;
    else if (x == 1)
        return 1;
    else
        return x * fact(x - 1);
}