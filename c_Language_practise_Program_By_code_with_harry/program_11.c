// c Program to count numbers of digits
#include <stdio.h>
#include <conio.h>
int main()
{
    int n, counter = 0;
    printf("Enter the number\n");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("There is only 1 digits in your number\n");
    }
    else
    {
        while (n != 0)
        {
            n = n / 10;
            counter++;
        }
        printf("There are %d digits in your number\n", counter);
    }

    return 0;
}