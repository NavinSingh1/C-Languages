// Write a program to reverse a number

#include<stdio.h>
#include<conio.h>
int main()
{
    int num,rev=0,rem;

    printf("Enter any number to be reserved:  \n");
    scanf("%d", &num);

    while (num >= 1)
    {
        rem = num%10;
        rev = rev*10+rem;
        num=num/10;
    }

    printf("\nReversed Number: %d", rev);
    return 0;
}