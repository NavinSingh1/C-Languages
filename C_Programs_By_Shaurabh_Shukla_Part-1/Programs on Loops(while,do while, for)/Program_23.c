// Write a program to calculate LCM of two numbers

#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, L;
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    for (L = 1; L <= a * b; L++)
    {
        if (L % a == 0 && L % b == 0)
            break;
    }
    printf("LCM is: %d\n", L);

    return 0;
}