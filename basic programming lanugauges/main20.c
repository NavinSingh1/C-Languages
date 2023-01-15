/*
Calculate income tax paid by an employee to the govt. as per the stats mention below:
income slab           Tax
2.5L - 5.0L            5%
5.0L - 10.0L          20%
Above 10.0L           30%
*/
#include <stdio.h>
#include <conio.h>
int main()
{
    float tax = 0, income;
    printf("Enter your income\n");
    scanf("%f", &income);

    if (income >= 250000 && income <= 500000)
    {
        tax = tax + 0.05 * (income - 250000);
    }
    if (income >= 500000 && income <= 1000000)
    {
        tax = tax + 0.20 * (income - 500000);
    }
    if (income >= 1000000)
    {
        tax = tax + 0.30 * (income - 1000000);
    }
    printf("Your net income yet to be paid by the last day of this month is %f\n", tax);
    return (0);
}