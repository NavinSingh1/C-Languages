// Program to reverse a string using strrev() function.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char s[20];
    printf("Enter a string which u want to reverse\n");
    gets(s);
    strrev(s);
    printf("The reverse string is %s", s);
    getch();
}    
