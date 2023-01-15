//C Program To Check Number Is Armstrong Or Not using While Loop
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,n1,rem,num=0;

        printf("Enter a Positive Integer to check for Armstrong:  \n");
        scanf("%d", &n);

        n1=n;

        while (n1!=0)
        {
            rem = n1%10;
            num+=rem*rem*rem;
            n1/=10;
        }
        if (num==n)
            printf("\nIt is An Armstrong Number.\n\n", n);
        else
            printf("\nIt is Not An Armstrong Number.\n\n");
    
}