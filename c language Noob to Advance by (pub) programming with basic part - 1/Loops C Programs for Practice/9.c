//C Program to Check a Number is Palindrome or Not Using While Loop
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,reverse=0, rem,temp;

    printf("Enter an integer to check the number is palindrome or not\n");
    scanf("%d", &n);

    temp=n;

    while (temp!=0)
    {
        rem=temp%10;
        reverse=reverse*10+rem;
        temp/=10;
    }

    if (reverse==n)
        printf("Number is a Palindrome\n");
    else
        printf("Number is not a Palindrome\n");

    return 0;
}