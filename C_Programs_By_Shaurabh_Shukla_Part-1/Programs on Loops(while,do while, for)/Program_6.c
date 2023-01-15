// Write a program to print first 10 even natural numbers

#include <stdio.h>
#include <conio.h>
int main()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", 2 * i);
    }

    return 0;
}