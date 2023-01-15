//C Program For Convert Octal Number to Decimal and Vice Versa Using Function
#include<stdio.h>
#include<conio.h>
#include <math.h>

int decimal_octal(int n);
int octal_decimal(int n);

int main()
{
    int n;
    char c;
    printf("Instruction\n");
    printf("1. Enter alphabet 'o' to convert decimal to octal.\n");
    printf("2. Enter alphabet 'd' to convert octal to decimal.\n");
    scanf("%c", &c);
    if (c=='d' || c=='D')
    {
        printf("Enter a octal number:\n");
        scanf("%d", &n);
        printf("%d in octal = %d in decimal", n, octal_decimal(n));
    }
    if (c=='o' || c=='O')
    {
        printf("Enter a decimal number:\n");
        scanf("%d", &n);
        printf("%d in decimal = %d in octal", n, decimal_octal(n));
    }
    return 0;
}

int decimal_octal(int n)
{
    int rem, i=1, octal = 0;
    while (n!=0)
    {
        rem=n%8;
        n/=8;
        octal+=rem*i;
        i*=10;
    }
    return octal;
}

int octal_decimal(int n)
{
    int decimal=0, i=0, rem;
    while (n!=0)
    {
        rem = n%10;
        n/=10;
        decimal += rem*pow(8,i);
        ++i;
    }
    return decimal;
}
