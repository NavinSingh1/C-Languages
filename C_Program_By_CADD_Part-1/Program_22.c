// Program to check wheather a number is negative or positive or zero

#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    if (a < 0)
        printf("%d is the negative numbers\n", a);
    else if (a == 0)
        printf("%d is zero\n", a);
    else
        printf("%d is positive number\n", a);

    return 0;
}