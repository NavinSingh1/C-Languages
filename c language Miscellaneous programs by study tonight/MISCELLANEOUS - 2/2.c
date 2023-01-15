//C program to Check for a Perfect Square
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,number;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (i = 0; i <= number; i++)
    {
        if (number == i*i)
        {
            printf("\n\t\t%d is a perfect square\n\n", number);
            return 0;
        }
    }
    printf("\n\n\t\t %d is not a perfect square\n", number);
    return 0;
}