// Program to print natural numbers using recursion

#include <stdio.h>
#include <conio.h>
int positive(int x);
int main()
{
    int number, result;
    printf("Enter a positve number\n");
    scanf("%d", &number);
    result = positive(number);
    printf("Sum is : %d\n", result);
    return 0;
}

int positive(int x)
{
    if (x != 0)
        return x + positive(x - 1);
    else
        return x;
}