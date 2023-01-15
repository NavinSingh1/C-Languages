// Write a program to calculate sum of first N natural numbers

#include <stdio.h>
#include <conio.h>
int main()
{
    int n, s = 0, i;
    printf("Enter a natural number\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        s = s + i;
    printf("sum is %d\n", s);

    return 0;
}

/*
int n,sum;
printf("Enter a number\n");
scanf("%d", &n);
sum = (n * (n + 1) ) / 2;
printf("sum is %d\n", sum);
*/