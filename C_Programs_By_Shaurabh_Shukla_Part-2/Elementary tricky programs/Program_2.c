// program to swap two numbers

#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, temp;
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping the number is a=%d and b=%d\n", a, b);

    return 0;
}