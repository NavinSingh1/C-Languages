//C Program For Check Number Is Even Or Odd
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;

    printf("Enter a number to check wheather it is even or odd\n");
    scanf("%d", &a);

    if (a%2==0)
        printf("Number is Even\n");
    else
        printf("Number is Odd\n");

    
    return 0;
    
}