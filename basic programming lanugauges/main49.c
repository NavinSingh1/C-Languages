//write a program to print the address of a variable. use this address to get the value  of this variable.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a=6;
    int *ptr;
    ptr = &a;
    printf("The value of variable a is %d\n", *ptr);
    printf("The value of variable a is %u\n", ptr);
    printf("The value of variable a is %d\n", *ptr);
    return 0;
}