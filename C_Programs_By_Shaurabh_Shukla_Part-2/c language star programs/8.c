#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=1;
        for (j = 1; j <= 7; j++)
        {
            if (j>=5-i&&j<=3+i){
                printf("%d", k);
                j<4?k++:k--;      // conditional operator
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}

/*
This program will print like this
    1
   121
  12321
 1234321
*/