// Program to calculate power of a number

#include <stdio.h>
#include <conio.h>
long int getpower(int b, int p);
int main()
{
    int base, power;
    long int result;
    printf("Enter the value of base\n");
    scanf("%d", &base);
    printf("Enter value of power\n");
    scanf("%d", &power);
    result = getpower(base, power);
    printf("%d to the power of %d is %d\n", base, power, result);
    return 0;
}

long int getpower(int b, int p)
{
    long int result = 1;
    if (p == 0)
        return result;
    result = b * (getpower(b, p - 1));
}