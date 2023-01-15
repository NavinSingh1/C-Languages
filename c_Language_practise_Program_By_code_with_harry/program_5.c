// C Program to convert decimal number to binary number.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    int remainder;
    int a[10];
    int i = 0;
    printf("Enter a number to convert from decimal number to binary number\n");
    scanf("%d", &n);
    while (n)
    {
        remainder = n%2;
        n = n/2;
        a[i] = remainder;
        i++;
    }

    for (int j = i-1; j >= 0; j--)
    {
        printf("%d", a[j]);
    }
    
    
    
    return 0;
}