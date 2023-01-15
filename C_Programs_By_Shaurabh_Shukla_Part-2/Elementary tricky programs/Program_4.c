//program to check whether a number is even or odd without using modulus(%) operator

#include <stdio.h>
#include <conio.h>
int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d", &x);
    if (x & 1)
        printf("Odd Number\n");
    else
        printf("Even Number\n");

    return 0;
}