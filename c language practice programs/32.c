// Program to find exponetial without using pow() method
#include<stdio.h>
#include<conio.h>
int main()
{
    int n, exp, exp1;
    long long int value = 1;

    printf("Enter the number and its exponetial: \n\n");
    scanf("%d%d", &n, &exp);

    exp1 = exp;

    while (exp-- > 0)
    {
        value *= n;
    }
    printf("\n\n %d^%d = %11d\n\n", n, exp1, value);
    return 0;
}