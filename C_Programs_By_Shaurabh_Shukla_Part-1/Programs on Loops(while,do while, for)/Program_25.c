// Write a program to check whether a given number is prime or not

#include <stdio.h>
#include <conio.h>
int main()
{
    int x, i;
    printf("Enter a number to check wheather it is prime or not\n");
    scanf("%d", &x);
    for (i = 2; i <= x - 1; i++)
        if (x % i == 0)
            break;
    if (i == x)
        printf("%d is a prime number\n", x);
    else
        printf("%d is not a prime number\n", x);

    return 0;
}