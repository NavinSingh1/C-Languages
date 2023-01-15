//Write a Program to calculate length of the string using strlen() function.

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char s[20];
    int l;
    printf("Enter a string\n");
    gets(s);
    l = strlen(s);
    printf("length is %s is %d\n", s, l);

    return 0;
}