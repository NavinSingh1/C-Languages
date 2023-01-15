// Program to check wheather a number is even or odd using function

#include <stdio.h>
#include <conio.h>

int OddOrEven(int num);

int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    OddOrEven(num);
    return 0;
}

int OddOrEven(int num)
{
    if (num % 2 == 0)
        printf("%d is a even number\n", num);
    else
        printf("%d is a odd number\n", num);
}