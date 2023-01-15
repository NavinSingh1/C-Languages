// Write a recursive function to calculate sum of squares of digits of a number

#include <stdio.h>
#include <conio.h>
int square(int n);
int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d", &x);
    printf("Sum of squares of digitsis %d\n", square(x));
    return 0;
}

int square(int n)
{
    if (n / 10 == 0)
    {
        return (n * n);
    }
    else
    {
        return ((n % 10) * (n % 10) + square(n / 10));
    }
}