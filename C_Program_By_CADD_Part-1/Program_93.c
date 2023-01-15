// Example of strcmp() function

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char s1[20], s2[20];
    printf("Enter a string 1\n");
    gets(s1);
    printf("Enter a string 2\n");
    gets(s2);
    if (strcmp(s2, s1) == 0)
    {
        printf("String are equal\n");
    }
    else
    {
        printf("Strings are not equal\n");
    }

    return 0;
}