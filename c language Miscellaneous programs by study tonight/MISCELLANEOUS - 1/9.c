// C Programs to showcase the conversion between various Number Systems
// Program to convert Octal to Decimal Equivalent
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    long int octal,val,decimal=0;
    int i=0;
    printf("Enter any octal number: ");
    scanf("%ld", &val);
    octal=val;
    while (octal!=0)
    {
        decimal += (octal % 10)*pow(8, i++);
        octal/=10;
    }
    printf("\nEquivalent decimal value of %ld is %ld\n", val, decimal);


    return 0;
    
}