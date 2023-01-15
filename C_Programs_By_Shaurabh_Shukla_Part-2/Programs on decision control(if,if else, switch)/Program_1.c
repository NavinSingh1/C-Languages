//Write a program to check whether a given number is even or odd

#include <stdio.h>
#include <conio.h>
int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d", &x);
    if (x % 2 == 0)
        printf("Even number\n");
    else
        printf("Odd number\n");

    return 0;
}


/*
if(x%2)
    printf("Odd number\n");
else
    printf("Else mumber\n");

*/