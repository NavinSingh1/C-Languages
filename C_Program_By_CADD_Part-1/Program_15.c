// Program to enter marks of five students and calculate it's total, average, and Percentage

#include <stdio.h>
#include <conio.h>
int main()
{
    float sub1, sub2, sub3, sub4, sub5, total, average, percentage;
    printf("Enter the marks for five students\n\n");
    scanf("%f%f%f%f%f", &sub1, &sub2, &sub3, &sub4, &sub5);
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    average = total / 5;
    percentage = (total / 500.0) * 100;
    printf("Total: %.2f\n", total);
    printf("average: %.2f\n", average);
    printf("percentage: %.2f\n", percentage);
    return 0;
}
