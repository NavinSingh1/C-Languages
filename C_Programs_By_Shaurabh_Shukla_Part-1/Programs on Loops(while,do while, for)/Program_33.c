// Program to print first n positive numbers with two bits set first logic

#include <stdio.h>
#include <conio.h>
void main()
{
    int n, x = 3, y, count;
    printf("Enter a number: \n");
    scanf("%d", &n);
    printf("first n positive numbers with two bits set\n");
    while (n)
    {
        y = x;
        count = 0;
        while (y)
        {
            if (y % 2 == 1)
                count++;
            y = y / 2;
        }
        if (count == 2)
        {
            printf(" %d\n", x);
            n--;
        }
        x++;
    }
}