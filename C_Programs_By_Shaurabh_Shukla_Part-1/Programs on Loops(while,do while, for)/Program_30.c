// Write a program to print N co-prime numbers

// NOTE :-
// Program does'nt executed ///

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int a = 2, b, n, i, min;
    printf("How many co-prime numbers you want to print\n");
    scanf("%d", &n);
    while (n)
    {
        for (b = 2; b <= i; b++)
        {
            min = a < b ? a : b;
            for (i = 2; i <= min; i++)
            {
                if (a % i == 0 && b % i == 0)
                    break;
            }
            if (i == min + 1)
            {
                printf("\n( %d, %d )", a, b);
                n--;
                if (n == 0)
                    exit(0);
            }
        }
        a++;
    }
    return 0;
}