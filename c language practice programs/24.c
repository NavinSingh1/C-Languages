// Program to find Armstrong Number between 1 to 500
#include<stdio.h>
#include<conio.h>
int main()
{
    int n, sum, i, t, a;
    printf("\nThe Armstrong number in between 1 to 500 are : \n");

    for (i = 1; i < 500; i++)
    {
        t = i; // as we nees to retain the original number
        sum = 0;
        while (t != 0)
        {
            a = t%10;
            sum += a*a*a;
            t = t/10;
        }

        if (sum == i)
        printf("\n\t\t\t%d", i);
    }

    return 0;
}