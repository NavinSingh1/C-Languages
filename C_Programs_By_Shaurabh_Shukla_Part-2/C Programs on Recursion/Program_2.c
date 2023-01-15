// Write a recursive function to find Nth term of Fibonacci series.

#include <stdio.h>
#include <conio.h>
int fib(int n);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    printf("N term of fionacci series is %d\n", fib(n));
    return 0;
}

/*
main()
{
    int i;
    for(i=1;i<=10;i++){
        printf(" %d\n", fib(i));
    }
}
*/

int fib(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return (fib(n - 1) + fib(n - 2));
    }
}