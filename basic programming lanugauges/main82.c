//write a program with a structure representing a complex number.
#include<stdio.h>
#include<conio.h>
struct complex                           //structure for complex number
{
    double real, imag;    //variable holding real and imaginary part of type double.
};

int main()
{
    struct complex x,y,c;
    printf("enter the value of x and y for first complex number: ");
    scanf("%1f%1f", &x.real, &x.imag);
    printf("enter the value of x and y for second complex number: ");
    scanf("%1f%1f", &y.real, &y.imag);
    c.real = x.real + y.real;
    c.imag = x.imag + y.imag;
    printf("sum of complex number: %.2lf + %.2lfi", c.real, c.imag);
    return 0;
}