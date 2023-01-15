//C Program To Calculate Factorial Of A Given Number
#include<stdio.h>
#include<conio.h>
int main()
{
    unsigned long long int fact = 1;
    int i,num;

    printf("Enter the number you want Factorial:  ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        fact = fact*i;
    }

    printf("\nFactorial is = %u\n",fact);

    return 0;
    
}