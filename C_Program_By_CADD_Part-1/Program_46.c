// Function to calculate sum of two numbers using with argument withot return type

#include <stdio.h>
#include <conio.h>

void sum(int a, int b);

int main()
{
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    sum(a, b);
    return 0;
}

void sum(int a, int b)
{
    printf("sum is : %d\n", a + b);
}