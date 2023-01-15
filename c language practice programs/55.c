// program to calculate Lcm of two numbers
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, l;
    printf("Enter two numbers");
    scanf("%d%d", &a, &b);
    for (l = 1; l <= a * b; l++)
        if (l % a == 0 && l % b == 0)
            break;

    printf("LCM is %d", l);
}