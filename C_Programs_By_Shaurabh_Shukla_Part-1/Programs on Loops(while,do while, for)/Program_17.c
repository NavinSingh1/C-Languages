// // Write a program to calculate sum of first N odd natural numbers

#include <stdio.h>
#include <conio.h>
int main()
{
    int n, s = 0, i = 1;
    printf("Enter a natural number\n");
    scanf("%d", &n);
    while (i <= n)
    {
        s = s + 2 * i - 1;
        i++;
    }
    printf("Sum is: %d\n", s);

    return 0;
}