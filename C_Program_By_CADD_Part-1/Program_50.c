// write a program to find reverse of a number using function

#include <stdio.h>
#include <conio.h>
int reverse(int num);
void main()
{
    int a, result;
    printf("Enter a number\n");
    scanf("%d", &a);
    result = reverse(a);
    printf("Reverse number is : %d\n", result);
}

int reverse(int num)
{
    int b, c, sum=0;
    while (num != 0)
    {
        b = num / 10;
        c = num % 10;
        num = b;
        sum = sum * 10 + c;
    }
    return sum;
}