// program to print each digit distinct from the number

#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;
    printf("Enter a number\n");
    scanf("%d", &a);
    while (a != 0)
    {
        b = a / 10;
        c = a % 10;
        a = b;
        printf("Number of digits is: %d\n", c);
    }

    return 0;
}