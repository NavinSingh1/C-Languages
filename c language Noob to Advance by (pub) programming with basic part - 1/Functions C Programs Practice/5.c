//C Program to Check Prime or Armstrong Number Using Function
#include<stdio.h>
#include<conio.h>

int prime(int n);
int armstrong(int n);

int main()
{
    char c;
    int n, temp=0;
    printf("Enter a postive integer: \n");
    scanf("%d", &n);
    printf("Enter P to check prime and A to check Armstrong number: \n");
    c=getche();
    if (c=='p' || c=='P')
    {
        temp=prime(n);
        if (temp==1)
            printf("\n%d is a Prime number\n", n);
        else
            printf("\n%d is not a Prime number\n", n);
    }
    if (c=='a' || c=='A')
    {
        temp=armstrong(n);
        if (temp==1)
            printf("\n%d is an Armstrong number.\n", n);
        else
            printf("\n%d is not an Armstrong number\n", n);
    }
    return 0;
}

int prime(int n)
{
    int i,flag=1;
    for (i = 1; i <= n/2; ++i)
    {
        if (n%i==0)
        {
            flag=0;
            break;
        }
    }
    return flag;
}

int armstrong(int n)
{
    int num=0, temp, flag=0;
    temp=n;
    while (n!=0)
    {
        num+=(n%10)*(n%10)*(n%10);
        n/=10;
    }
    if (num==temp)
        flag=1;
        return flag;
}