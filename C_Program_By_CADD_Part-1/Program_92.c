// Example of strcat() function

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char ch[20], str[20];
    printf("Enter a string\n");
    gets(ch);
    printf("Enter second string\n");
    gets(str);
    printf("After concinating the string is: %s\n", strcat(ch, str));

    return 0;
}