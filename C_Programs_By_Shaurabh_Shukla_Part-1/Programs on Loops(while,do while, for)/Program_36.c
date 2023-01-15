// print first N prime numbers
// 2 3 4 7 11 13 17 19 23 29 31

#include <stdio.h>
#include <conio.h>

int isPrime(int x);

int main()
{
    int N, x = 2;
    printf("Enter a number\n");
    scanf("%d", &N);
    while (N)
    {
        if (isPrime(x))
        {
            printf("%d ", x);
            N--;
        }
        x++;
    }

    return 0;
}

int isPrime(int x)
{
    int i;
    for (i = 2; i < x; i++)
        if (x % i == 0)
            return (0);
    return (1);
}