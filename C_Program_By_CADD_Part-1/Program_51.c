// write a program to check a number is palindrome or not using function

#include <stdio.h>
#include <conio.h>
void palindrome(int a);
int main()
{
    int num;
    printf("Enter a number to check wheather a number is palindrome or not\n");
    scanf("%d", &num);
    palindrome(num);
    return 0;
}

void palindrome(int a)
{
    int b, c, sum = 0;
    int m = a;
    while (a != 0)
    {
        b = a / 10;
        c = a % 10;
        a = b;
        sum = sum * 10 + c;
    }
    if (sum == m)
        printf("Number is palindrome\n");
    else
        printf("Number is not a palindrome\n");
}