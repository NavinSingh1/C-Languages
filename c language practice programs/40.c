// write a program which allows integer input only and regret to take any other alpabet or any other symbol.
#include<stdio.h>
#include<conio.h>
int main()
{
    int x=0;
    x=getIntegerOnly();
    printf("You have entered %d\n", x);
    getch();
}

int getIntegerOnly()
{
    int num=0, ch;
    do
    {
        ch=getch();
        if(ch>=48 && ch<=57)
        {
            printf("%c", ch);
            num=num*10+(ch-48);
        }
        if(ch==13)
            break;
    }while(1);
    return(num);
}