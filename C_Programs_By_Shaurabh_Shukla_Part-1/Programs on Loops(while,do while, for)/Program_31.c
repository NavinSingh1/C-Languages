// Write a program to convert a binary number to decimal number

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int bin, i = 0, s = 0;
    printf("Enter a binary number\n");
    scanf("%d", &bin);
    while (bin != 0)
    {
        s = s + pow(2, i) * (bin % 10);
        bin = bin / 10;
        i++;
    }
    printf("The decimal equivalent is %d\n", s);

    return 0;
}