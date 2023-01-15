// program to search all occurrence of a charachter in a string

#include <stdio.h>
#include <conio.h>
int main()
{
    char str[30], tosearch;
    int i = 0;
    printf("Enter a string\n");
    gets(str);
    printf("Enter a charachter which you want to search in the string\n");
    scanf("%c", &tosearch);
    while (str[i])
    {
        if (str[i] == tosearch)
        {
            printf("%c charachter is found at location %d\n", tosearch, i);
            break;
        }
        i++;
    }

    return 0;
}