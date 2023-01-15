// Write a program to calculate product of first N natural numbers

#include <stdio.h>
#include <conio.h>
int main()
{
    int n, p = 1, i;
    printf("Enter a natural number\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        p = p * i;
    printf("Product is %d\n", p);

    return 0;
}