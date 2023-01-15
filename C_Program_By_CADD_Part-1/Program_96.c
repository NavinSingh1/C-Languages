// Program to capital charachter a string

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char s1[20];
    printf("Enter a string\n");
    gets(s1);
    printf("After reversing the string is\n");
    printf("%s\n", strupr(s1));

    return 0;
}