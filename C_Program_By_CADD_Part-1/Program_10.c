// write a program to find power of any number

#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int a, b, c;
    printf("Enter a number for which u want to make power\n");
    scanf("%d", &a);
    printf("Enter the power\n");
    scanf("%d", &b);
    c = pow(a, b);
    printf("Power is : %d\n", c);

    return 0;
}