//// Below is a program to find the smallest amongst the three user input numbers.
#include<stdio.h>
#include<conio.h>
int main()
{
    double a,b,c;

    printf("Enter 3 number:\n");
    scanf("%lf%lf%lf", &a, &b, &c);

    if (a >= b && a >= c)
    {
        if (b >= c)
        {
            printf("\n%.2lf is the 2nd largest number\n", b);
        }
        else
        {
            printf("\n%.2lf is the 2nd largest number\n", c);
        }
        
    }

    else if (b >= a && b >= c)
    {
        if (a >= c)
        {
            printf("\n%.2lf is the 2nd largest number\n", a);
        }
        else
        {
            printf("\n%.2lf is the 2nd largest number\n", c);
        }
        
    }

    else if (a >= b)
    {
        printf("\n%.2lf is the 2nd largest number\n", a);
    }
    else
    {
        printf("\n%.2lf is the 2nd largest number\n", b);
    }

   return 0; 
    
    
}