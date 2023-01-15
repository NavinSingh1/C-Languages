// Program to check wheather a number is prime or not

#include <stdio.h>
#include <conio.h>
int main()
{
    int x, i;
    printf("Enter a nummber\n");
    scanf("%d", &x);
    for (i = 1; i < x - 1; i++)
    {
        if (x % i == 0)
            break;
    }
    if (i == x)
        printf("%d is a prime number\n", x);
    else
        printf("%d is a prime number\n", x);

    return 0;
}