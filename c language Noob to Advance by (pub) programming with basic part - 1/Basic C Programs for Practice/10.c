//C Program To Check Number Is Positive Or Negative
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter the number you want to check:  \n");
    scanf("%d", &a);

    if (a<0)
    {
        printf("Numer is Negative:  \n");
    }
    else if(a>0)
    {
        printf("Number is Positive:  \n");
    }
    else
        printf("You entered Zero:  \n");

    return 0;
    
}