//c program to find the prime number
#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("Enter a number to check wheather it is prime or not\n");
    scanf("%d", &n);
    int isPrime = 1;
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
        }
    }
    if ((isPrime))
        printf("The number %d is a prime number\n", n);
    else
        printf("The number %d is not a prime number\n", n);

    return 0;
}