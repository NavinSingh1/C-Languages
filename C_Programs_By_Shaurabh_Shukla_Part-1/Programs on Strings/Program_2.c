//Write a program to reverse a string using strrev() function

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    int s[20];
    int l;
    printf("Enter a string\n");
    gets(s);
    strrev(s);
    printf("reverse string is %s\n", s);
    return 0;
}