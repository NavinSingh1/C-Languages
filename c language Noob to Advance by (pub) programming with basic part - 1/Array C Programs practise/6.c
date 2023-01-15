//C Program For Convert All Input String Simultaneously Into Asterisk ( * )
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch[]="**********.";
    char c = 'A';
    int i=0,j;
    printf("Write your name \n\n");

    while (c)
    {
        c=getch();
        printf("%c\a", ch[i]);
        i++;
        if (i==10)
        {
            printf(" ");
            i=0;
        }   
    }
    return 0;
}