// Program to string to toggling

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char str[30];
    int i = 0;
    printf("Enter a string\n");
    gets(str);
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    printf("String after toggling is %s\n", str);

    return 0;
}