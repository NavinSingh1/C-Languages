// How to use gets() function
#include<stdio.h>
#include<conio.h>
int main()
{
    char str[50];   // char array of size 50
    printf("Enter your complete name: \n");
    gets(str);
    printf("Welcome to NO.1 coding site %s", str);
    getch();
    return 0;
}
