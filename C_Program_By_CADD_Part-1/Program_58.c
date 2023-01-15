// Example of auto keyword

#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 10, i;
    printf("%d\n", ++a);
    {
        int a = 20;
        for (i = 0; i < 3; i++)
        {
            printf("%d ", a);
        }
    }
    printf("\n%d", a);
    return 0;
}