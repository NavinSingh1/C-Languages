// Function to calculate sum of two numbers using without argument with return type

#include <stdio.h>
#include <conio.h>

int sum();

int main()
{
    int result;
    printf("Going to calculate sum of 2 numbers\n");
    result = sum();
    printf("sum of 2 numbers is : %d", result);
    return 0;
}

int sum()
{
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    return a + b;
}