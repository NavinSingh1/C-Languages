// program to check wheather a number is even or odd

#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    if (a % 2 == 0)
        printf("%d is even number\n", a);
    else
        printf("%d is odd number\n", a);

    return 0;
}