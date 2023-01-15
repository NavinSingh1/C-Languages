//Write a program to reverse a string without using strrev() function.

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    int s[50], ch;
    int l, i;
    printf("Enter a string\n");
    gets(s);
    for (l = 0; s[l]; l++)
        ;
    for (i = 0; i < l / 2; i++)
    {
        ch = s[i];
        s[i] = s[l - 1 - i];
        s[l - 1 - i] = ch;
    }
    printf("Reverse is %s\n", s);

    return 0;
}