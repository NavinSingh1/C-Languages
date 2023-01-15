// program to print reverse of a number

#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c, sum = 0;
    printf("Enter a number\n");
    scanf("%d", &a);
    while (a != 0)
    {
        b = a / 10;
        c = a % 10;
        sum = sum * 10 + c;
        a = b;
    }
    printf("The reverse number is: %d\n", sum);

    return 0;
}