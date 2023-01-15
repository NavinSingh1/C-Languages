// write num program to check wheather num number is prime or not using function

#include <stdio.h>
#include <conio.h>
void primecheck(int num);
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    primecheck(num);
    return 0;
}

void primecheck(int num)
{
    int i, count = 0;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
        printf("It is a prime number\n");
    else
        printf("It is not a prime number\n");
}