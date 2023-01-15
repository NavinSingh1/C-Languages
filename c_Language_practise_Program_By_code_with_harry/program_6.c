// c Program to reverse a number
#include <stdio.h>
#include <conio.h>
#include <string.h>

int reverse(int num)
{
    int rev = 0;
    int rem;
    while (num != 0)
    {
        rem = num % 10;       // last digit of num.
        rev = rev * 10 + rem; // generate a number from rev with rem at last digit.
        num = num / 10;
    }
    return rev;
}

int main()
{
    int num;
    printf("Enter a number to reverse\n");
    scanf("%d", &num);
    int rev = reverse(num);
    printf("The reverse number is %d\n", rev);

    return 0;
}