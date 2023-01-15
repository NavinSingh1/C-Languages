// C Programs to showcase the conversion between various Number Systems
// Program to convert Decimal to Binary Equivalent using Recursion
#include<stdio.h>
#include<conio.h>

void decimal_binary(int );
void F(int );
void reverse(int );

int main()
{
    int n;
    printf("Enter an integer in deciaml number system: ");
    scanf("%d", &n);

    printf("\nEnter an integer equivalent of decimal value %d using decimal_binary method is: ", n);

    decimal_binary(n);

    printf("\nThe binary equivalent of decimal value %d using F() method is: ", n);
    F(n);
    printf("\nThe reverse of the binary representation of value %d is: ", n);
    reverse(n);

    return 0;
    getch();
}

void decimal_binary(int i)
{
    if (i <= 1)
        printf("%d", i);
    else    
    {
        decimal_binary(i/2);
        printf("%d", i%2);
    }
}

void F(int j)
{
    if (j/2)
    {
        F(j/2);
    }
    printf("%d", j%2);
}

void reverse(int k)
{
    if (k <= 1)
        printf("%d", k);
    else
    {
        printf("%d", k%2);
        F(k/2);
    }
    printf("\n\n");
}