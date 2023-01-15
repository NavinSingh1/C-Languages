// Below is a program to find factors of a number
#include<stdio.h>
#include<conio.h>
int main()
{
    int num, i;
    printf("Enter the number to find the factors of :  ");
    scanf("%d", &num);
    printf("\n\nFactors of %d are \n\n", num);
    for (i = 1; i <= num/2; i++)
    {
        if (num%i == 0)
        {
            printf("\t\t\t%d\n", i);
        }
    }
    return 0;
}