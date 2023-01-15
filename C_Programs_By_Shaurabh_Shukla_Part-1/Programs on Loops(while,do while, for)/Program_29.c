// Write a program to check co-prime number

#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, i, min;
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    min = a < b ? a : b;
    for (i = 2; i <= min; i++)
    {
        if (a % i == 0 && b % i == 0)
            break;
    }

    if (i == min + 1)
        printf("%d and %d are co-prime numbers\n", a, b);
    else
        printf("%d and %d are not co-prime numbers\n", a, b);
    return 0;
}