// Write a recursive function to calculate sum of digits of a number

#include <stdio.h>
#include <conio.h>
int sum(int x);
int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d", &x);
    printf("Sum is %d\n", sum(x));
    return 0;
}

int sum(int x)
{
    if (x / 10 == 0)
    {
        return x;
    }
    else
    {
        return (x % 10 + sum(x / 10));
    }
}