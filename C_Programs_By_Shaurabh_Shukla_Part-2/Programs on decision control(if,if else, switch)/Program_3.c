//Write a program to to find greater between two numbers

#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b;
    printf("Enter two numbers to find the greatest among them\n");
    scanf("%d%d", &a, &b);
    if (a > b)
        printf("%d is greater number\n", a);
    else
        printf("%d is greater number\n", b);

    return 0;
}

/*
if(a>b)
    printf("%d is greater\n", a);
else if(a<b)
    printf("%d is greater\n", b);
else
    printf("%d and %d both are equals\n", a,b);
*/