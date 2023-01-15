// program to count numbers of digits of a number

#include <stdio.h>
#include <conio.h>
int main()
{
    int n, count = 0;
    printf("Enter a number\n");
    scanf("%d", &n);
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    printf("Total number of digits are: %d\n", count);

    return 0;
}