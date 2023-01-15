// Program to find average of N numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int n, i;
    float sum = 0, x;

    printf("Enter number of elements:  ");
    scanf("%d", &n);
    printf("\nEnter %d elements\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &x);
        sum += x;
    }
    printf("\nAverage of the entered number is = %f", (sum/n));
    return 0;
}