#include<Stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j<=6-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}
/*
This program is used to print star in this format
 *****
 ****
 ***
 **
 *
*/