// example of strcpy() function

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char ch[20], str[20];
    printf("Enter a string\n");
    gets(ch);
    strcpy(str, ch);
    printf("After copying the strin is: %s\n", str);

    return 0;
}