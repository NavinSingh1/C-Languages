//Write a program to transform a string to its uppercase

#include <stdio.h>
#include <conio.h>
#include<string.h>
int main()
{
    char s[50], a;
    printf("Enter a string\n");
    gets(s);
    strupr(s);
    printf("The string in uppercase is %s\n", s);
    return 0;
}