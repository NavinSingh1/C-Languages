// c program to calculate power of a number
#include <stdio.h>
#include <conio.h>
int main()
{
    int m, n;
    printf("Enter a number\n");
    scanf("%d", &m);
    printf("Enter a power for the previous number\n");
    scanf("%d", &n);
    long long int val = 1;
    for (int i = 0; i < n; i++)
    {
        val = val * m;
    }
    printf("The value of %d to the power %d is %lld\n", m, n, val);

    return 0;
}