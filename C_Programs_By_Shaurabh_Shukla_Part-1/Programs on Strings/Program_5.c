//Write a program to check whether a string is palindrome or not

#include <stdio.h>
#include <conio.h>
#include <string.h>
int isPalindrome(char s[]);
int main()
{
    char str[20];
    printf("Enter a string\n");
    gets(str);
    if (isPalindrome(str))
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not a Palindrome\n");
    }
    return 0;
}

int isPalindrome(char s[])
{
    int l, i;
    l = strlen(s);
    for (i = 0; i < l / 2; i++)
    {
        if (s[i] != s[l - 1 - i])
        {
            return 0;
        }
    }
    return 1;
}

/////// Palindrome Program without function///////////
// main()
// {
//     char str[20];
//     int l, i;
//     printf("Enter a string\n");
//     gets(str);

//     l = strlen(str);
//     for (i = 0; i < l / 2; i++)
//     {
//         if (str[i] != str[l - 1 - i])
//         {
//             printf("Not a Palinfrome\n");
//             break;
//         }
//     }
//     if (l == l / 2)
//     {
//         printf("Palindrome\n");
//     }
// }