// program to find power of a number using loop

#include <stdio.h>
#include <conio.h>
int main()
{
    int power, base, i, sum = 0;
    printf("Enter a numer\n");
    scanf("%d%d", &power, &base);
    for (i = 1; i <= base; i++)
    {
        sum = sum * power;
    }
    printf("Power of %d^%d is : %d\n", power, base, power * base);

    return 0;
}