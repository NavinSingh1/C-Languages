// Write a recursive function to calculate factorial of a number.

#include <stdio.h>
#include <conio.h>
long fact(int n);
int main()
{
    long n;
    long sum;
    printf("Enter n number\n");
    scanf("%ld", &n);
    sum = fact(n);
    printf("Factorial of %d is %ld\n", n, sum);
    return 0;
}

long fact(int n)
{
    if (n > 0)
    {
        return (n * fact(n - 1));
    }
    else
        return 1;
}