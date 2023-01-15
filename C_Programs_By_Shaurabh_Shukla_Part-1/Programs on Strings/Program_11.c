//Write a program to transform a string to its lowercase

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char s[50];
    printf("Enter a string\n");
    gets(s);
    strlwr(s);
    printf("String in lower case is %s\n", s);
    return 0;
}