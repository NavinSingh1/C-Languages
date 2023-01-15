// Below is a program to find the largest amongst the three user input numbers.
#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c;

    printf("Enter 3 numbers:\n");
    scanf("%f%f%f", &a, &b, &c);

    if(a >= b && a >= c)
    {
        printf("\nLargest number = %.3f", a);
    }
    else if(b >= a && b >= c)
    {
        printf("\nLargest number = %.3f", b);
    }
    else
    {
        printf("\nLargest number = %.3f", c);
    }

    return 0;
    getch();
}