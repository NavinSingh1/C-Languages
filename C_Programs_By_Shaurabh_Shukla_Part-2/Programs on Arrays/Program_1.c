// Write a program to calculate sum of all even numbers and sum of all odd numbers. Numbers are entered through keyboard and stored in an array

#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], sum = 0, sum1 = 0;
    printf("Enter 10 numbers\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            sum = sum + a[i];
        }
        else
        {
            sum1 = sum1 + a[i];
        }
    }
    printf("sum of n even number is %d\n", sum);
    printf("sum of n odd number is %d\n", sum1);

    return 0;
}