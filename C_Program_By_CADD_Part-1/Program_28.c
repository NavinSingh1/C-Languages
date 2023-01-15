// program to print all odd number in a given range

#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i;
    printf("Enter a numer and print all the odd numbers till n\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}