//Find sum of First n natural numbers
#include <stdio.h>
#include <conio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the last natural number you want the sum of\n");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    printf("The sum of first %d natural number is %d\n", n, sum);

    return 0;
}