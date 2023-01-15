// Write a program to reverse a number

#include <stdio.h>
#include <conio.h>
int main()
{
    int x, y = 0, r;
    printf("Enter a number to reverse it\n");
    scanf("%d", &x);
    while (x != 0)
    {
        r = x % 10;
        y = y * 10 + r;
        x = x / 10;
    }
    printf("The reverse of a number is %d\n", y);

    return 0;
}