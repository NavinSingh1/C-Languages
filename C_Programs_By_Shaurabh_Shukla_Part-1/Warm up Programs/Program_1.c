//Write a Program to add two numbers
#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c;
    printf("Enter two numbers to add\n");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("The sum is = %d\n", c);

    return 0;
}