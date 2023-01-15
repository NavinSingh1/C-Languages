// Below is a program to find largest number among n user input numbers.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n, i;
    float c, big;

    printf("\nEnter the number of elements you wish to find the greatest element of: ");
    scanf("%d", &n);
    printf("\n\nEnter %d numbers :\n", n);

    printf("\n\n\t\t\tElement 1: ");
    
    scanf("%f", &big);

    for (i = 2; i <= n; i++)
    {
        printf("\n\t\t\tElement %d : ", i);
        scanf("%f", &c);
        if (big < c)
        {
            big = c;
        }
    }
    printf("\n\n\nThe largest of the %d numbers is %f ", n, big);
    return 0;
}