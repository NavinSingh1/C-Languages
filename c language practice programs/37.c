// program to swap two numbers without using a third variables.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter two numbers two swap without using a third variable: \n");
    scanf("%d%d", &a, &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d and b=%d", a, b);
    getch();
}