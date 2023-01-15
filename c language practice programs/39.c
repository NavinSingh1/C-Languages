// check wheather a number is odd or even without using %(module) opeator.
#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter two number two check wheather it is odd or even\n");
    scanf("%d", &x);
    if(x&1)
        printf("odd number");
    else
        printf("Even number");
    getch();
}