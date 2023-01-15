// Write x program to print all prime numbers between two given numbers

#include <stdio.h>
#include <conio.h>
int main()
{
    int l, u, x, i;
    printf("Enter two numbers\n");
    scanf("%d%d", &l, &u);
    printf("The Prime number between %d and %d is\n", l, u);
    for (x = l + 1; x <= u - 1; x++)
    {
        for (i = 2; i < x; i++)
            if (x % i == 0)
                break;
        if (i == x)
            printf("%d\n", x);
    }

    return 0;
}