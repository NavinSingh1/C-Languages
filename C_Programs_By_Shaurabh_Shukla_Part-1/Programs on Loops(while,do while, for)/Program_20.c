// Write a program to calculate sum of the digits of a given number

#include <stdio.h>
#include <conio.h>
int main()
{
    int x, s = 0, r;
    printf("Enter a number\n");
    scanf("%d", &x);
    while (x != 0)
    {
        r = x % 10;
        s = s + r;
        x = x / 10;
    }
    printf("The sum of digits is: %d\n", s);

    return 0;
}