// C Programs to showcase the conversion between various Number Systems
// Program to convert Decimal to Binary Equivalent
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,c,k;
    printf("Enter an integer in decimal number system: \n");
    scanf("%d", &n);

    printf("\nThe binary equivalent of decimal value %d is: \n", n);

    for (c = 31; c >= 0; c--)
    {
        k=n>>c;
        if (k&1)
            printf("1");
        else
            printf("0");
    }
    return 0;
    getch();
}