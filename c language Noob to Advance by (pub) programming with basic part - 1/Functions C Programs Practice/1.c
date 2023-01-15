//Convert Binary Number to Decimal or Decimal Number to Binary
#include<stdio.h>
#include<conio.h>
#include<math.h>

int bin_to_dec(int n);
int dec_to_bin(int n);

int main()
{
    int n;
    char c;
    printf("Instruction:\n");
    printf("1. Enter alphabet 'd' to convert binary to decimal.\n");
    printf("2. Enter alphabet 'b' to convert decimal to binary.\n");
    scanf("%c", &c);

    if (c=='d' || c=='D')
    {
        printf("Enter a binary number: ");
        scanf("%d", &n);
        printf("%d in binary = %d in decimal", n, bin_to_dec(n));
    }
    if (c=='b' || c=='B')
    {
        printf("Enter a decimal number: \n");
        scanf("%d", &n);
        printf("%d in decimal = %d in binary", n, dec_to_bin(n));
    }
    return 0;    
}

int dec_to_bin(int n)
{
    int rem, i=1, binary = 0;
    while (n!=0)
    {
        rem = n%2;
        n/=2;
        binary+=rem*i;
        i*=10;
    }
    return binary;
}

int bin_to_dec(int n)
{
    int decimal = 0, i=0, rem;
    while (n!=0)
    {
        rem=n%10;
        n/=10;
        decimal += rem*pow(2,i);
        ++i;
    }
    return decimal;
}