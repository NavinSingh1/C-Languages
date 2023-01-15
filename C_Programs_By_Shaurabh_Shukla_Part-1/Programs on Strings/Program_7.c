//Write a program to check whether a given string is alphanumeric or not

#include <stdio.h>
#include <conio.h>
int main()
{
    int i, a, b;
    char s[20];
    printf("Enter a string\n");
    gets(s);
    for (i = 0; s[i]; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            a = 1;
        }
        if (s[i] >= '0' && s[i] <= '9')
        {
            b = 1;
        }
    }
    if (a == 1 && b == 1)
    {
        printf("%s is alphanumeric\n", s);
    }
    else
    {
        printf("%s is not alphanumeric\n", s);
    }

    return 0;
}