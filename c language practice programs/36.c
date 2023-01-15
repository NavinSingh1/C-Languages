// swaping two numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,temp;
    printf("Enter two numbers two swap\n");
    scanf("%d%d", &a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("The two numbers which come after swapping is %d and %d", a,b);
    getch();
}