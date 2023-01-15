// Example of static keyword

#include <stdio.h>
#include <conio.h>
int sum();
int main()
{
    int i;
    for (i = 0; i < 3; i++)
    {
        sum();
    }
    return 0;
}

int sum()
{
    static int a = 10;
    static int b = 24;
    printf("%d %d\n", a, b);
    a++;
    b++;
}