// Function to calculate sum of two numbers using with argument with return type

#include <stdio.h>
#include <conio.h>

int sum(int a, int b);

int main()
{
    int a, b, result;
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    result = sum(a, b);
    printf("sum is : %d\n", result);
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}