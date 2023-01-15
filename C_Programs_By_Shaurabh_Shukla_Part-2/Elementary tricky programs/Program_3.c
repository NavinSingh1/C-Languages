//program to swap two numbers without using third variable

#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b;
    printf("Enter two numbers to swap without using third variable\n");
    scanf("%d%d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping the number are a=%d and b=%d\n", a, b);
    return 0;
}