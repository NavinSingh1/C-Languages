//program to check even or odd without modulus and bitwise operator

#include <stdio.h>
#include <conio.h>
int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d", &x);
    if (x / 2 * 2 == x)
        printf("Even number\n");
    else
        printf("Odd number\n");

    return 0;
}