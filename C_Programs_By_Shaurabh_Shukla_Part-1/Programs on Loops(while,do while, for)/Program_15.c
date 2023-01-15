// Write a program to calculate factorial of a number

#include <stdio.h>
#include <conio.h>
int main()
{
    int num, i, s = 1;
    printf("Enter a number to find the factorial\n");
    scanf("%d", &num);
    for (i = num; i >= 1; i--)
        s = s * i;
    printf("Factorial of %d is %d\n", num, s);

    return 0;
}


/*
    int n, f = 1;
    printf("Enter a number to find the factorial\n");
    scanf("%d", &n);
    while (n >= 1)
    {
        f = f * n;
        n--;
    }
    printf("Factorial is %d\n", f);
*/