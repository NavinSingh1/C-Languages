// write a program to check wheather a number is krishnamurthy number or not using function

#include <stdio.h>
#include <conio.h>
void Krishnamurthy(int x);
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    Krishnamurthy(a);
    return 0;
}

void Krishnamurthy(int x)
{
    int i, m, s = 0, a, b, fact=0;
    m = x;
    while (x != 0)
    {
        a = x % 10;
        b = x / 10;
        for (i = 1; i <= a; i++)
        {
            fact = fact * i;
        }
        s = s + fact;
    }
    if (m == s)
        printf("It is Krishnamurthy number\n");
    else
        printf("It is not a Krishnamurthy number\n");
}