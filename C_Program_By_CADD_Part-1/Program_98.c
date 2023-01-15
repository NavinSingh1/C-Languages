// program to check palindrome using strings

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char str[30], reverse[30];
    int flag;
    printf("Enter a string\n");
    gets(str);
    strcpy(reverse, str);
    strrev(reverse);
    flag = strcmp(str, reverse);
    if (flag == 0)
    {
        printf("%s is a palindrome\n", str);
    }
    else
    {
        printf("%s is not a plaindrome\n", str);
    }

    return 0;
}