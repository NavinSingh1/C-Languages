//Write a program to count vowels in a given string.

#include <stdio.h>
#include <conio.h>
int main()
{
    char str[50], v[] = "aeiouAEIOU";
    int i, j, count = 0;
    printf("Enter a string\n");
    gets(str);
    for (i = 0; str[i]; i++)
    {
        for (j = 0; v[j]; j++)
        {
            if (str[i] == v[j])
            {
                count++;
                break;
            }
        }
    }
    printf("Total vowels in %s is %d\n", str, count);

    return 0;
}