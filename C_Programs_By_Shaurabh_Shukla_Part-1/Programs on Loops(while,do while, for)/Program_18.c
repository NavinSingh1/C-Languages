// Write a program to calculate x power y.(when user input x is 2 and y is 3 then the result will be 8

#include <stdio.h>
#include <conio.h>
int main()
{
    int x, y, power = 1, i;
    printf("Enter numbers and it's power\n");
    scanf("%d%d", &x, &y);
    for (i = 1; i <= y; i++)
        power = power * x;
    printf("Power of x^y is: %d\n", power);
    return 0;
}