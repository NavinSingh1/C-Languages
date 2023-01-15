// Program to take input of various datatypes in c.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num1, num2;
    float fraction;
    char charachter;

    // Taking an charachter as input from the user
    printf("\n\nEnter a charachter\n");
    scanf("%c", &charachter);
    printf("\n\nThe charachter u have entered is %c", charachter);

    // Taking an float or fraction as input from the user
    printf("\n\nEnter a Decimal number\n");
    scanf("%f", &fraction);
    printf("\n\nThe float or fraction that u have entered is %f\n\n", fraction);

    // Taking an integer number
    printf("Enter two numbers\n");
    scanf("%d%d", &num1, &num2);
    printf("\n\nThe two number you have entered are %d and %d", num1, num2);
    return 0;
}