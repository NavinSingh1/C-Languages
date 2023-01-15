//C Program For Check Greater Among Two Number
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter two numbers to check greatest among them:  \n");
    scanf("%d%d", &a,&b);
    if (a>b)
    {
        printf("First Number is Greater than Second\n");
    }
    else if (b>a)
    {
        printf("Second Number is greater than first\n");
    }
    else
        printf("Both the Numbers are Equal\n");
    
    return 0;
    
}