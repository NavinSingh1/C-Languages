// Program to find maximum between three numbers

#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;
    printf("Enter three number to check which of the number is the greastest\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c)
        printf("%d is the greatest number\n", a);
    else if (b > a && b > c)
        printf("%d is the greatest number\n", b);
    else
        printf("%d is the greatest number\n", c);

    return 0;
}