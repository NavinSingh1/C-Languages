//C Program To Check Number Is Divisible By 11 Or Not Using (VEDIC MATH)
#include<stdio.h>
#include<conio.h>
int main()
{
    int r=0, i=1, odd=0, even=0, no, n, rev=0;

        printf("\nEnter any number:  \n");
        scanf("%d", &n);

        no=n;

        while (no!=0)
        {
            r=no%10;
            rev=rev*10+r;
            no=no/10;
        }

        while (rev!=0)
        {
            r=rev%10;
            if(i%2==0)
            {
                even = even+r;
            }
            else
            {
                odd = odd+r;
            }
            rev = rev/10;
            i++;
        }

        printf("\nOdd Digit sum = %d\n", odd);
        printf("\nEven Digit sum = %d\n", even);

        if (odd==even)
            printf("\n%d is Divisible by 11\n\n", n);
        else
            printf("\n%d is not Divisible by 11\n\n", n);
    getch();
}