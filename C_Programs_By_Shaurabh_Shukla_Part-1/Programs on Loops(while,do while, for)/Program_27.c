// Write x program to print all prime factors of x given number. For example prime factors of 36 are 2,2,3,3

#include <stdio.h>
#include <conio.h>
int main()
{
    int x, i = 2;
    printf("Enter a number\n");
    scanf("%d", &x);
    for (i = 2; x > 1; i++)
    {
        while (x % i == 0)
        {
            printf("%d ", i);
            x = x / i;
        }
    }

    return 0;
}