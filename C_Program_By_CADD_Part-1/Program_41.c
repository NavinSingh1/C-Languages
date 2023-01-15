// example of break keyword

#include <stdio.h>
#include <conio.h>
int main()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
        if (i == 5)
        {
            break;
        }
    }
    printf("Come outside of loop is: %d\n", i);

    return 0;
}